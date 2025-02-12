void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v66; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_List_object__o *v73; // x20
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_Dictionary_int__object__o *v80; // x20
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_List_object__o *v87; // x20
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  WarBoardAIRoute_o *v94; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v95; // x20
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v102; // x20
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v109; // x20
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v116; // x20
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_Collections_Generic_Dictionary_int__object__o *v123; // x20
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t piecePersonalityDic; // x0
  Il2CppObject *v137; // x1
  const MethodInfo *v138; // x3
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  int32_t v140; // w8
  const MethodInfo *v141; // x3
  WarBoardActionPointEntity_o *v142; // x0
  int32_t v143; // w8
  const MethodInfo *v144; // x3
  WarBoardActionPointEntity_o *v145; // x0
  int32_t v146; // w8
  const MethodInfo *v147; // x3
  WarBoardActionPointEntity_o *v148; // x0
  const MethodInfo *v149; // x1
  int32_t v150; // w8
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v151; // x8
  int32_t size; // w2
  int32_t version; // w9
  PartyOrganizationUtility_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x24
  System_Array_o *v156; // x21
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  __int64 v163; // x8
  unsigned __int64 v164; // x26
  int v165; // w21
  WarBoardAIRoute_PiecePersonality_o *v166; // x27
  const MethodInfo *v167; // x1
  const MethodInfo *v168; // x5
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v171; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v172; // x8
  int64_t v173; // x29
  unsigned __int64 v174; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v176; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v177; // x21
  const MethodInfo *v178; // x2
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  struct System_Object_array *items; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  Il2CppClass **v188; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v189; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v190; // x8
  int64_t v191; // x29
  unsigned __int64 v192; // x20
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  struct System_Int32_array *v199; // x8
  _QWORD *v200; // x9
  __int64 v201; // x10
  Il2CppClass **v202; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v204; // x28
  __int64 v205; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v206; // x20
  System_Func_object__bool__o *v207; // x21
  System_Collections_Generic_Dictionary_int__object__c *v208; // x8
  int64_t v209; // x26
  __int64 v210; // x9
  int32_t *p_offset; // x10
  __int64 v212; // x0
  __int64 v213; // x1
  __int64 v214; // x26
  __int64 v215; // x8
  __int64 v216; // x9
  int *v217; // x10
  __int64 v218; // x0
  __int64 v219; // x8
  __int64 v220; // x9
  int *v221; // x10
  __int64 v222; // x0
  __int64 v223; // x1
  int32_t *v224; // x29
  _BOOL8 v225; // x0
  __int64 v226; // x1
  __int64 v227; // x8
  _BOOL8 v228; // x0
  __int64 v229; // x1
  __int64 v230; // x0
  __int64 v231; // x1
  _BOOL8 v232; // x0
  __int64 v233; // x1
  const MethodInfo *v234; // x3
  __int64 v235; // x8
  __int64 v236; // x9
  int *v237; // x10
  __int64 v238; // x0
  PartyOrganizationUtility_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v241; // x21
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  __int64 v248; // x8
  unsigned __int64 v249; // x24
  int32_t v250; // w20
  int64_t v251; // x25
  int64_t v252; // x26
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  struct System_Int32_array *v265; // x8
  _QWORD *v266; // x9
  __int64 v267; // x10
  Il2CppClass **v268; // x8
  int32_t v269; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  Il2CppObject *v271; // x25
  struct System_Int32_array *tacticalIds; // x19
  PartyOrganizationUtility_o *p_tacticalIds; // x21
  System_Array_o *v274; // x20
  int64_t v275; // x2
  int32_t v276; // w3
  System_String_o *v277; // x4
  BattleSetupInfo_o *v278; // x5
  FollowerInfo_o *v279; // x6
  PartyListViewItem_o *v280; // x7
  __int64 v281; // x8
  unsigned __int64 v282; // x21
  int32_t v283; // w20
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  System_Collections_Generic_List_object__o *v290; // x8
  struct System_Object_array *v291; // x9
  _QWORD *v292; // x10
  __int64 v293; // x11
  int64_t v294; // x1
  Il2CppClass **v295; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v298; // x22
  const MethodInfo *v299; // x3
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+18h] [xbp-B8h]
  struct System_Int32_array *v309; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+38h] [xbp-98h]
  DataManager_o *Instance; // [xsp+40h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v313; // [xsp+48h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v314; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *v316; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v318; // 0:w1.4
  System_RuntimeFieldHandle_o v319; // 0:w1.4
  System_RuntimeFieldHandle_o v320; // 0:w1.4

  if ( (byte_4BB2230 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc);
    sub_1C13D24(&Method_BasicHelper_IndexValue_int____77472272, v3);
    sub_1C13D24(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v13);
    sub_1C13D24(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__, v14);
    sub_1C13D24(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__, v15);
    sub_1C13D24(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v16);
    sub_1C13D24(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v27);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v28);
    sub_1C13D24(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v29);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v30);
    sub_1C13D24(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v31);
    sub_1C13D24(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v32);
    sub_1C13D24(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v33);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v34);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v35);
    sub_1C13D24(&System_IDisposable_TypeInfo, v36);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v37);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v38);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1C13D24(&int___TypeInfo, v40);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v41);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v42);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v43);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v44);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v45);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v46);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v47);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v48);
    sub_1C13D24(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v49);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v50);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v51);
    sub_1C13D24(&WarBoardAIRoute_PiecePersonality_TypeInfo, v52);
    sub_1C13D24(&ShortestDistanceFromAllyMaster_TypeInfo, v53);
    sub_1C13D24(&ShortestDistanceFromAllyServant_TypeInfo, v54);
    sub_1C13D24(&ShortestDistanceFromEnemyMaster_TypeInfo, v55);
    sub_1C13D24(&ShortestDistanceFromEnemyServant_TypeInfo, v56);
    sub_1C13D24(&ShortestDistanceFromItem_TypeInfo, v57);
    sub_1C13D24(&ShortestDistanceFromPrioritySpace_TypeInfo, v58);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v60);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v61);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v62);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v63);
    sub_1C13D24(&Method_WarBoardAIRoute___ctor_b__42_0__, v64);
    sub_1C13D24(&WarBoardAiTargetCacher_TypeInfo, v65);
    byte_4BB2230 = 1;
  }
  v316 = 0LL;
  entity = 0LL;
  v314 = 0LL;
  item = 0LL;
  v313 = 0LL;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v66 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v66;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.tacticalTrendList, (int64_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v73;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.ratingBaseList, (int64_t)v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v80,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v80;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.piecePersonalityDic,
    (int64_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v87;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.allRouteList, (int64_t)v87, v88, v89, v90, v91, v92, v93);
  v94 = this;
  v95 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v95,
    (const MethodInfo_332AC44 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v95;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (int64_t)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v102 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v102,
    (const MethodInfo_32FB104 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v102;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (int64_t)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v109 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v109,
    (const MethodInfo_332AC44 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v109;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicUniqueKeyDesignationItem,
    (int64_t)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v116 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v116,
    (const MethodInfo_332AC44 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v116;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicUniqueKeyTarget,
    (int64_t)v116,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  v123 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v123,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v123;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicRatingbaseCalcValue,
    (int64_t)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.npcData, (int64_t)npc, v130, v131, v132, v133, v134, v135);
  if ( !npc )
    goto LABEL_154;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  ActionPointEntity = WarBoardData__GetActionPointEntity(
                        (WarBoardData_o *)piecePersonalityDic,
                        this->fields.forceId,
                        this->fields.groupId,
                        v138);
  v140 = ActionPointEntity ? ActionPointEntity->fields.moveCost : 0;
  this->fields.moveCost = v140;
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  v142 = WarBoardData__GetActionPointEntity(
           (WarBoardData_o *)piecePersonalityDic,
           this->fields.forceId,
           this->fields.groupId,
           v141);
  v143 = v142 ? v142->fields.masterMoveCost : 0;
  this->fields.masterMoveCost = v143;
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  v145 = WarBoardData__GetActionPointEntity(
           (WarBoardData_o *)piecePersonalityDic,
           this->fields.forceId,
           this->fields.groupId,
           v144);
  v146 = v145 ? v145->fields.attackCost : 0;
  this->fields.attackCost = v146;
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  v148 = WarBoardData__GetActionPointEntity(
           (WarBoardData_o *)piecePersonalityDic,
           this->fields.forceId,
           this->fields.groupId,
           v147);
  v150 = v148 ? v148->fields.wallAttackCost : 0;
  this->fields.wallAttackCost = v150;
  WarBoardAIRoute__Clear(this, v149);
  piecePersonalityDic = (int64_t)this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    (const MethodInfo_3292430 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v151 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_154;
  size = v151->fields._size;
  version = v151->fields._version;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  v151->fields._size = 0;
  v151->fields._version = version + 1;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v151->fields._items, 0, size, 0LL);
  p_aiIds = (PartyOrganizationUtility_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v156 = (System_Array_o *)sub_1C13DCC(int___TypeInfo, 4LL);
    v318.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v156, v318, 0LL);
    p_aiIds->klass = (PartyOrganizationUtility_c *)v156;
    sub_1C13CC8(p_aiIds, (int64_t)v156, v157, v158, v159, v160, v161, v162);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_154;
  }
  v163 = *(_QWORD *)&aiIds->max_length;
  if ( (int)v163 >= 1 )
  {
    v164 = 0LL;
    v309 = aiIds;
    do
    {
      if ( v164 >= (unsigned int)v163 )
        goto LABEL_155;
      v165 = aiIds->m_Items[v164 + 1];
      v166 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C13F70(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v166, v167);
      piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !piecePersonalityDic )
        goto LABEL_154;
      piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
      if ( !piecePersonalityDic )
        goto LABEL_154;
      Piece = WarBoardData__GetPiece(
                (WarBoardData_o *)piecePersonalityDic,
                v94->fields.forceId,
                v94->fields.groupId,
                v164,
                1,
                v168);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v165, v165 >= 1) )
      {
        piecePersonalityDic = (int64_t)Instance;
        if ( !Instance )
          goto LABEL_154;
        piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                         Instance,
                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !piecePersonalityDic )
          goto LABEL_154;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_3238670 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                           Instance,
                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_154;
          v171 = (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic;
          piecePersonalityDic = (int64_t)WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)entity, 0LL);
          if ( !piecePersonalityDic )
            goto LABEL_154;
          v172 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(piecePersonalityDic + 24);
          v173 = piecePersonalityDic;
          if ( (int)v172 >= 1 )
          {
            v174 = 0LL;
            while ( v174 < (unsigned int)v172 )
            {
              if ( !v171 )
                goto LABEL_154;
              piecePersonalityDic = DataMasterBase_object__object__int___TryGetEntity(
                                      v171,
                                      &v316,
                                      *(_DWORD *)(v173 + 32 + 4 * v174),
                                      (const MethodInfo_3238670 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( (piecePersonalityDic & 1) != 0 )
              {
                if ( !v166 )
                  goto LABEL_154;
                actionTrandList = (System_Collections_Generic_List_object__o *)v166->fields.actionTrandList;
                v176 = v316;
                v177 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C13F70(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v177, (WarBoardActionTrendEntity_o *)v176, v178);
                if ( !actionTrandList )
                  goto LABEL_154;
                items = actionTrandList->fields._items;
                v186 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_154;
                v187 = actionTrandList->fields._size;
                if ( (unsigned int)v187 >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v177,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
                }
                else
                {
                  v188 = &items->obj.klass + v187;
                  actionTrandList->fields._size = v187 + 1;
                  v188[4] = (Il2CppClass *)v177;
                  sub_1C13CC8(
                    (PartyOrganizationUtility_o *)(v188 + 4),
                    (int64_t)v177,
                    v179,
                    v180,
                    v181,
                    v182,
                    v183,
                    v184);
                }
              }
              LODWORD(v172) = *(_DWORD *)(v173 + 24);
              if ( (__int64)++v174 >= (int)v172 )
                goto LABEL_55;
            }
LABEL_155:
            sub_1C13F88(piecePersonalityDic, v137);
          }
LABEL_55:
          piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                           Instance,
                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_154;
          v189 = (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic;
          piecePersonalityDic = (int64_t)WarBoardAIEntity__GetRatingOffsetIds((WarBoardAIEntity_o *)entity, 0LL);
          aiIds = v309;
          v94 = this;
          if ( !piecePersonalityDic )
            goto LABEL_154;
          v190 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(piecePersonalityDic + 24);
          v191 = piecePersonalityDic;
          if ( (int)v190 >= 1 )
          {
            v192 = 0LL;
            while ( v192 < (unsigned int)v190 )
            {
              if ( !v189 )
                goto LABEL_154;
              piecePersonalityDic = DataMasterBase_object__object__int___TryGetEntity(
                                      v189,
                                      &item,
                                      *(_DWORD *)(v191 + 32 + 4 * v192),
                                      (const MethodInfo_3238670 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( (piecePersonalityDic & 1) != 0 )
              {
                if ( !v166 )
                  goto LABEL_154;
                piecePersonalityDic = (int64_t)v166->fields.ratingOffsetList;
                if ( !piecePersonalityDic )
                  goto LABEL_154;
                v137 = item;
                v199 = *(struct System_Int32_array **)(piecePersonalityDic + 16);
                v200 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++*(_DWORD *)(piecePersonalityDic + 28);
                if ( !v199 )
                  goto LABEL_154;
                v201 = *(int *)(piecePersonalityDic + 24);
                if ( (unsigned int)v201 >= v199->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)piecePersonalityDic,
                    v137,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
                }
                else
                {
                  v202 = &v199->obj.klass + v201;
                  *(_DWORD *)(piecePersonalityDic + 24) = v201 + 1;
                  v202[4] = (Il2CppClass *)v137;
                  sub_1C13CC8(
                    (PartyOrganizationUtility_o *)(v202 + 4),
                    (int64_t)v137,
                    v193,
                    v194,
                    v195,
                    v196,
                    v197,
                    v198);
                }
              }
              LODWORD(v190) = *(_DWORD *)(v191 + 24);
              if ( (__int64)++v192 >= (int)v190 )
                goto LABEL_69;
            }
            goto LABEL_155;
          }
        }
      }
LABEL_69:
      piecePersonalityDic = (int64_t)*p_piecePersonalityDic;
      if ( !*p_piecePersonalityDic )
        goto LABEL_154;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
        v164,
        (Il2CppObject *)v166,
        (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(v163) = aiIds->max_length;
    }
    while ( (__int64)++v164 < (int)v163 );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v204 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  v205 = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !v205 )
    goto LABEL_154;
  v206 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v205 + 48);
  v207 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v207, (Il2CppObject *)v94, Method_WarBoardAIRoute___ctor_b__42_0__, 0LL);
  piecePersonalityDic = (int64_t)System_Linq_Enumerable__Where_object_(
                                   v206,
                                   (System_Func_TSource__bool__o *)v207,
                                   (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !piecePersonalityDic )
    goto LABEL_154;
  v208 = *(System_Collections_Generic_Dictionary_int__object__c **)piecePersonalityDic;
  v209 = piecePersonalityDic;
  v210 = *(unsigned __int16 *)(*(_QWORD *)piecePersonalityDic + 302LL);
  if ( *(_WORD *)(*(_QWORD *)piecePersonalityDic + 302LL) )
  {
    p_offset = &v208->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v210;
      p_offset += 4;
      if ( !v210 )
        goto LABEL_80;
    }
    v212 = (__int64)(&v208->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_80:
    v212 = sub_1C65D04(piecePersonalityDic, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL);
  }
  v214 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v212)(v209, *(_QWORD *)(v212 + 8));
  if ( !v214 )
    sub_1C13F80(0LL, v213);
  while ( 1 )
  {
    v215 = *(_QWORD *)v214;
    v216 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
    {
      v217 = (int *)(*(_QWORD *)(v215 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v217 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v216;
        v217 += 4;
        if ( !v216 )
          goto LABEL_87;
      }
      v218 = v215 + 16LL * *v217 + 312;
    }
    else
    {
LABEL_87:
      v218 = sub_1C65D04(v214, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v218)(v214, *(_QWORD *)(v218 + 8)) & 1) == 0 )
      break;
    v219 = *(_QWORD *)v214;
    v220 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
    {
      v221 = (int *)(*(_QWORD *)(v219 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v221 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v220;
        v221 += 4;
        if ( !v220 )
          goto LABEL_94;
      }
      v222 = v219 + 16LL * *v221 + 312;
    }
    else
    {
LABEL_94:
      v222 = sub_1C65D04(v214, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v224 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v222)(v214, *(_QWORD *)(v222 + 8));
    if ( !v224 )
      sub_1C13F80(0LL, v223);
    if ( !*p_piecePersonalityDic )
      sub_1C13F80(0LL, v223);
    v225 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
             *p_piecePersonalityDic,
             v224[7],
             (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    if ( !v225 )
    {
      v227 = *(_QWORD *)(v205 + 16);
      if ( !v227 )
        sub_1C13F80(v225, v226);
      if ( !Master_object )
        sub_1C13F80(v225, v226);
      v228 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v314,
               *(_DWORD *)(v227 + 16),
               v224[72],
               0LL);
      if ( v228 )
      {
        if ( !v314 )
          sub_1C13F80(v228, v229);
        v230 = BasicHelper__IndexValue_int_(
                 v314->fields.reinforcementsIds,
                 v224[73],
                 -1,
                 (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
        if ( !v204 )
          sub_1C13F80(v230, v231);
        v232 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v204, &v313, v230, 0LL);
        if ( v232 )
        {
          if ( !v313 )
            sub_1C13F80(v232, v233);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v313->fields.aiId, v224[7], v234);
        }
      }
    }
  }
  v235 = *(_QWORD *)v214;
  v236 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
  {
    v237 = (int *)(*(_QWORD *)(v235 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v237 - 1) != System_IDisposable_TypeInfo )
    {
      --v236;
      v237 += 4;
      if ( !v236 )
        goto LABEL_111;
    }
    v238 = v235 + 16LL * *v237 + 312;
  }
  else
  {
LABEL_111:
    v238 = sub_1C65D04(v214, System_IDisposable_TypeInfo, 0LL);
  }
  piecePersonalityDic = (*(__int64 (__fastcall **)(__int64, _QWORD))v238)(v214, *(_QWORD *)(v238 + 8));
  p_ratingBaseIds = (PartyOrganizationUtility_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v241 = (System_Array_o *)sub_1C13DCC(int___TypeInfo, 6LL);
    v319.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v241, v319, 0LL);
    p_ratingBaseIds->klass = (PartyOrganizationUtility_c *)v241;
    sub_1C13CC8(p_ratingBaseIds, (int64_t)v241, v242, v243, v244, v245, v246, v247);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_154:
      sub_1C13F80(piecePersonalityDic, v137);
  }
  v248 = *(_QWORD *)&ratingBaseIds->max_length;
  if ( (int)v248 >= 1 )
  {
    v249 = 0LL;
    while ( 2 )
    {
      if ( v249 >= (unsigned int)v248 )
        goto LABEL_155;
      piecePersonalityDic = (int64_t)Instance;
      if ( Instance )
      {
        v250 = ratingBaseIds->m_Items[v249 + 1];
        piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                         Instance,
                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( piecePersonalityDic )
        {
          piecePersonalityDic = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
                                           v250,
                                           (const MethodInfo_3238624 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( piecePersonalityDic )
          {
            v251 = piecePersonalityDic;
            switch ( *(_DWORD *)(piecePersonalityDic + 20) )
            {
              case 0:
                v252 = sub_1C13F70(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v252, 0LL);
                if ( !v252 )
                  goto LABEL_154;
                goto LABEL_133;
              case 1:
                v252 = sub_1C13F70(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v252, 0LL);
                if ( !v252 )
                  goto LABEL_154;
                goto LABEL_133;
              case 2:
                v252 = sub_1C13F70(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v252, 0LL);
                if ( !v252 )
                  goto LABEL_154;
                goto LABEL_133;
              case 3:
                v252 = sub_1C13F70(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v252, 0LL);
                if ( !v252 )
                  goto LABEL_154;
                goto LABEL_133;
              case 4:
                v252 = sub_1C13F70(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v252, 0LL);
                if ( !v252 )
                  goto LABEL_154;
                goto LABEL_133;
              case 5:
                v252 = sub_1C13F70(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v252, 0LL);
                if ( !v252 )
                  goto LABEL_154;
LABEL_133:
                *(_QWORD *)(v252 + 16) = v251;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v252 + 16), v251, v253, v254, v255, v256, v257, v258);
                piecePersonalityDic = (int64_t)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_154;
                v265 = *(struct System_Int32_array **)(piecePersonalityDic + 16);
                v266 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++*(_DWORD *)(piecePersonalityDic + 28);
                if ( !v265 )
                  goto LABEL_154;
                v267 = *(int *)(piecePersonalityDic + 24);
                if ( (unsigned int)v267 >= v265->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)piecePersonalityDic,
                    (Il2CppObject *)v252,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v266[4] + 192LL) + 112LL));
                }
                else
                {
                  v268 = &v265->obj.klass + v267;
                  *(_DWORD *)(piecePersonalityDic + 24) = v267 + 1;
                  v268[4] = (Il2CppClass *)v252;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v268 + 4), v252, v259, v260, v261, v262, v263, v264);
                }
LABEL_138:
                v269 = *(_DWORD *)(v251 + 16);
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v271 = (Il2CppObject *)sub_1C13F70(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                System_Object___ctor(v271, 0LL);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_154;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v269,
                  v271,
                  (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v248) = ratingBaseIds->max_length;
                if ( (__int64)++v249 >= (int)v248 )
                  goto LABEL_140;
                continue;
              default:
                goto LABEL_138;
            }
          }
        }
      }
      goto LABEL_154;
    }
  }
LABEL_140:
  p_tacticalIds = (PartyOrganizationUtility_o *)&npc->fields.tacticalIds;
  tacticalIds = npc->fields.tacticalIds;
  if ( !tacticalIds )
  {
    v274 = (System_Array_o *)sub_1C13DCC(int___TypeInfo, 5LL);
    v320.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v274, v320, 0LL);
    p_tacticalIds->klass = (PartyOrganizationUtility_c *)v274;
    sub_1C13CC8(p_tacticalIds, (int64_t)v274, v275, v276, v277, v278, v279, v280);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_154;
  }
  v281 = *(_QWORD *)&tacticalIds->max_length;
  if ( (int)v281 >= 1 )
  {
    v282 = 0LL;
    while ( v282 < (unsigned int)v281 )
    {
      piecePersonalityDic = (int64_t)Instance;
      if ( !Instance )
        goto LABEL_154;
      v283 = tacticalIds->m_Items[v282 + 1];
      piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                       Instance,
                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !piecePersonalityDic )
        goto LABEL_154;
      piecePersonalityDic = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
                                       v283,
                                       (const MethodInfo_3238624 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v290 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_154;
      v291 = v290->fields._items;
      v292 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v290->fields._version;
      if ( !v291 )
        goto LABEL_154;
      v293 = v290->fields._size;
      v294 = piecePersonalityDic;
      if ( (unsigned int)v293 >= v291->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v290,
          (Il2CppObject *)piecePersonalityDic,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
      }
      else
      {
        v295 = &v291->obj.klass + v293;
        v290->fields._size = v293 + 1;
        v295[4] = (Il2CppClass *)v294;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v295 + 4), v294, v284, v285, v286, v287, v288, v289);
      }
      LODWORD(v281) = tacticalIds->max_length;
      if ( (__int64)++v282 >= (int)v281 )
        goto LABEL_153;
    }
    goto LABEL_155;
  }
LABEL_153:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v298 = (WarBoardAiTargetCacher_o *)sub_1C13F70(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v298, forceId, groupId, v299);
  this->fields.aiTargetCacher = v298;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.aiTargetCacher,
    (int64_t)v298,
    v300,
    v301,
    v302,
    v303,
    v304,
    v305);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x25
  System_Int32_array *Entity; // x0
  Il2CppObject *p_obj; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v26; // x22
  Il2CppObject *Master_object; // x25
  Il2CppObject *v28; // x24
  Il2CppObject *v29; // x22
  WarBoardAIRoute_PiecePersonality_o *v30; // x21
  const MethodInfo *v31; // x1
  __int64 v32; // x8
  System_Int32_array *v33; // x25
  unsigned __int64 v34; // x29
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v36; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v37; // x27
  const MethodInfo *v38; // x2
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x8
  System_Int32_array *v50; // x23
  unsigned __int64 v51; // x19
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v59; // x9
  __int64 max_length; // x10
  Il2CppArrayBounds *v61; // x8
  __int64 v62; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v63; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v64; // [xsp+18h] [xbp-68h]

  if ( (byte_4BB2231 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__, v12);
    sub_1C13D24(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v14);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v15);
    sub_1C13D24(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v18);
    sub_1C13D24(&WarBoardAIRoute_PiecePersonality_TypeInfo, v19);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v20);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v21);
    byte_4BB2231 = 1;
  }
  v22 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_37;
  *(_DWORD *)(v22 + 16) = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v26 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___49919140(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v26,
         (const MethodInfo_2F9B4A4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v62 = v22;
  v63 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v30 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C13F70(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v30, v31);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_3238624 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v64 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v32 = *(_QWORD *)&Entity->max_length;
  v33 = Entity;
  if ( (int)v32 >= 1 )
  {
    v34 = 0LL;
    while ( v34 < (unsigned int)v32 )
    {
      if ( !v28 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                                       v33->m_Items[v34 + 1],
                                       (const MethodInfo_3238624 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v30 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v30->fields.actionTrandList;
        v36 = (WarBoardActionTrendEntity_o *)Entity;
        v37 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C13F70(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v37, v36, v38);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v46 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v37,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v37;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v37, v39, v40, v41, v42, v43, v44);
        }
      }
      LODWORD(v32) = v33->max_length;
      if ( (__int64)++v34 >= (int)v32 )
        goto LABEL_22;
    }
LABEL_38:
    sub_1C13F88(Entity, p_obj);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v64, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v49 = *(_QWORD *)&Entity->max_length;
  v50 = Entity;
  if ( (int)v49 >= 1 )
  {
    v51 = 0LL;
    while ( v51 < (unsigned int)v49 )
    {
      if ( !v29 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v29,
                                       v50->m_Items[v51 + 1],
                                       (const MethodInfo_3238624 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v30 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v30->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v59 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++Entity->m_Items[0];
        if ( !bounds )
          goto LABEL_37;
        max_length = (int)Entity->max_length;
        if ( (unsigned int)max_length >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &bounds[max_length];
          Entity->max_length = max_length + 1;
          v61[4] = (Il2CppArrayBounds)p_obj;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v61[4], (int64_t)p_obj, v52, v53, v54, v55, v56, v57);
        }
      }
      LODWORD(v49) = v50->max_length;
      if ( (__int64)++v51 >= (int)v49 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v63->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1C13F80(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    *(_DWORD *)(v62 + 16),
    (Il2CppObject *)v30,
    (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  const MethodInfo *v56; // x1
  _QWORD *v57; // x19
  System_Collections_Generic_List_object__o *v58; // x22
  System_Collections_Generic_List_object__o *v59; // x21
  System_Collections_Generic_List_object__o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x24
  int v68; // w8
  unsigned int v69; // w25
  int64_t v70; // x23
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  WarBoardAIRoute_o *v75; // x10
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  System_Object_array *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  System_Object_array *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct WarBoardSquareData_array *v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct WarBoardItemData_array *v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  struct WarBoardTreasureData_array *v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct WarBoardWallData_array *v119; // x1
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  System_Collections_Generic_List_object__o *v126; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v129; // x21
  const MethodInfo *v130; // x3
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  System_Collections_Generic_Dictionary_int__uint__o *v137; // x19
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // x24
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  const MethodInfo *v145; // x3
  struct WarBoardPieceData_array *allAllyPiece; // x19
  int max_length; // w8
  unsigned int v148; // w20
  WarBoardPieceData_o *v149; // x21
  const MethodInfo *v150; // x3
  int32_t forceId_k__BackingField; // w8
  int32_t v152; // w9
  int32_t v153; // w1
  const MethodInfo *v154; // x1
  const MethodInfo *v155; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v157; // x20
  __int64 v158; // x9
  int *p_offset; // x10
  __int64 v160; // x0
  __int64 v161; // x1
  __int64 v162; // x22
  __int64 v163; // x8
  __int64 v164; // x9
  int *v165; // x10
  __int64 v166; // x0
  __int64 v167; // x8
  __int64 v168; // x9
  int *v169; // x10
  __int64 v170; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v171; // x0
  const MethodInfo *v172; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v175; // x1
  int v176; // w8
  unsigned int v177; // w9
  WarBoardActionTrendConditionEntity_o *v178; // x25
  struct System_Int32_array *conditionTypes; // x23
  __int64 v180; // x8
  unsigned __int64 v181; // x28
  int32_t v182; // w26
  __int64 v183; // x29
  __int64 v184; // x0
  __int64 v185; // x1
  __int64 ConditionType; // x0
  __int64 v187; // x1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v190; // x21
  __int64 v191; // x1
  Il2CppObject *v192; // x2
  System_Collections_Generic_Dictionary_int__object__o *v193; // x0
  int32_t v194; // w19
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v197; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v199; // x1
  System_Func_T__TResult__o *v200; // x19
  WarBoardAiTargetCacher_o *v201; // x19
  int64_t v202; // x0
  const MethodInfo *v203; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v205; // x19
  int64_t v206; // x24
  __int64 v207; // x22
  __int64 v208; // x0
  __int64 v209; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x21
  WarBoardAIRoute_o *v211; // x0
  const MethodInfo *v212; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v214; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v216; // x21
  int64_t v217; // x29
  int64_t v218; // x19
  __int64 v219; // x21
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v226; // x19
  int64_t v227; // x0
  __int64 v228; // x8
  __int64 v229; // x9
  int *v230; // x10
  __int64 v231; // x0
  WarBoardAiTargetCacher_o *v232; // x20
  WarBoardAIRoute___c_c *v233; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v235; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v243; // x0
  const MethodInfo *v244; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v245; // x20
  const MethodInfo *v246; // x1
  struct WarBoardPieceData_array *v247; // x21
  int v248; // w8
  int32_t v249; // w24
  unsigned int v250; // w22
  Il2CppClass **v251; // x8
  Il2CppClass *v252; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v255; // s11
  float v256; // s8
  float v257; // s9
  const MethodInfo *v258; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v261; // [xsp+20h] [xbp-100h]
  unsigned int v262; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  unsigned int v264; // [xsp+44h] [xbp-DCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+48h] [xbp-D8h]
  __int64 v267; // [xsp+68h] [xbp-B8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v269; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v270; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4BB2233 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method);
    sub_1C13D24(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v2);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v4);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&WarBoardAIRoute_DesignationItemData_TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v23);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v24);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v25);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v26);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v27);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v28);
    sub_1C13D24(&System_Func_IWarBoardObjectData__bool__TypeInfo, v29);
    sub_1C13D24(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v30);
    sub_1C13D24(&System_Func_WarBoardItemData__bool__TypeInfo, v31);
    sub_1C13D24(&System_Func_WarBoardSquareData__bool__TypeInfo, v32);
    sub_1C13D24(&System_IDisposable_TypeInfo, v33);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v34);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v35);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v36);
    sub_1C13D24(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v37);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v38);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v39);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v40);
    sub_1C13D24(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v41);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v42);
    sub_1C13D24(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v43);
    sub_1C13D24(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v44);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v46);
    sub_1C13D24(&SvtClassAttri_TypeInfo, v47);
    sub_1C13D24(&WarBoardAIRoute_TargetData_TypeInfo, v48);
    sub_1C13D24(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v49);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v50);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v51);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v52);
    sub_1C13D24(&WarBoardAIRoute___c_TypeInfo, v53);
    sub_1C13D24(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v54);
    byte_4BB2233 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  v57 = *(_QWORD **)&Instance[5].fields._freeCount;
  v58 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v60 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v57 )
    goto LABEL_225;
  v67 = v57[6];
  if ( !v67 )
    goto LABEL_225;
  v68 = *(_DWORD *)(v67 + 24);
  if ( v68 >= 1 )
  {
    v69 = 0;
    while ( 1 )
    {
      if ( v69 >= v68 )
LABEL_226:
        sub_1C13F88(Instance, v56);
      if ( !v60 )
        break;
      v70 = *(_QWORD *)(v67 + 8LL * (int)v69 + 32);
      items = v60->fields._items;
      v72 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v60->fields._version;
      if ( !items )
        break;
      size = v60->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v60,
          (Il2CppObject *)v70,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = &items->obj.klass + size;
        v60->fields._size = size + 1;
        v74[4] = (Il2CppClass *)v70;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v74 + 4), v70, v61, v62, v63, v64, v65, v66);
      }
      if ( !v70 )
        break;
      if ( !*(_BYTE *)(v70 + 60) )
      {
        v75 = this;
        if ( *(_DWORD *)(v70 + 20) == this->fields.forceId && *(_DWORD *)(v70 + 24) == this->fields.groupId )
        {
          if ( !v58 )
            break;
          v76 = v58->fields._items;
          v77 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v58->fields._version;
          if ( !v76 )
            break;
          v78 = v58->fields._size;
          if ( (unsigned int)v78 >= v76->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              (Il2CppObject *)v70,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &v76->obj.klass + v78;
            v58->fields._size = v78 + 1;
            v79[4] = (Il2CppClass *)v70;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v79 + 4), v70, v61, v62, v63, v64, v65, v66);
          }
          v75 = this;
        }
        if ( *(_DWORD *)(v70 + 20) != v75->fields.forceId )
        {
          if ( !v59 )
            break;
          v80 = v59->fields._items;
          v81 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v59->fields._version;
          if ( !v80 )
            break;
          v82 = v59->fields._size;
          if ( (unsigned int)v82 >= v80->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v59,
              (Il2CppObject *)v70,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            v83 = &v80->obj.klass + v82;
            v59->fields._size = v82 + 1;
            v83[4] = (Il2CppClass *)v70;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v83 + 4), v70, v61, v62, v63, v64, v65, v66);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v70,
                                                                                0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v70 + 64);
        }
      }
      v68 = *(_DWORD *)(v67 + 24);
      if ( (int)++v69 >= v68 )
        goto LABEL_33;
    }
LABEL_225:
    sub_1C13F80(Instance, v56);
  }
LABEL_33:
  if ( !v58 )
    goto LABEL_225;
  v84 = System_Collections_Generic_List_object___ToArray(
          v58,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v84;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.allAllyPiece, (int64_t)v84, v85, v86, v87, v88, v89, v90);
  if ( !v59 )
    goto LABEL_225;
  v91 = System_Collections_Generic_List_object___ToArray(
          v59,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v91;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.allEnemyPiece, (int64_t)v91, v92, v93, v94, v95, v96, v97);
  v98 = (struct WarBoardSquareData_array *)v57[7];
  this->fields.allSquare = v98;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.allSquare, (int64_t)v98, v99, v100, v101, v102, v103, v104);
  v105 = (struct WarBoardItemData_array *)v57[9];
  this->fields.allItemData = v105;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.allItemData,
    (int64_t)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v112 = (struct WarBoardTreasureData_array *)v57[10];
  this->fields.allTreasureData = v112;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.allTreasureData,
    (int64_t)v112,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  v119 = (struct WarBoardWallData_array *)v57[11];
  this->fields.allWallData = v119;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.allWallData,
    (int64_t)v119,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_32FBC44 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_332B7A0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_332B7A0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_332B7A0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v126 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v126,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v126 )
    goto LABEL_225;
  System_Collections_Generic_List_object___AddRange(
    v126,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v126,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v126,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v126;
  System_Collections_Generic_List_object___AddRange(
    v126,
    (System_Collections_Generic_IEnumerable_T__o *)v60,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v129 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1C13F70(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v129, forceId, groupId, v130);
  this->fields.aiRouteMasterData = v129;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.aiRouteMasterData,
    (int64_t)v129,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  v137 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v137,
    (const MethodInfo_32B311C *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v137;
  p_placePieceData = &this->fields.placePieceData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.placePieceData,
    (int64_t)v137,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  allAllyPiece = this->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_225;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v148 = 0;
    v261 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v148 >= max_length )
        goto LABEL_226;
      v149 = allAllyPiece->m_Items[v148];
      if ( !v149 )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v149->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_32B3CCC *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_201;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      pieceData = v149;
      if ( !*p_placePieceData )
        goto LABEL_225;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        v149->fields._nowSquareIndex_k__BackingField,
        v149->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_32B3AE0 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = v149->fields._forceId_k__BackingField;
      v152 = this->fields.forceId;
      if ( forceId_k__BackingField != v152 )
        goto LABEL_57;
      if ( v149->fields._groupId_k__BackingField == this->fields.groupId )
        break;
LABEL_58:
      if ( v149->fields._groupId_k__BackingField == this->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_225;
        v153 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v269 = (WarBoardAIRoute_DesignationItemData_o *)sub_1C13F70(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v269, v154);
      v270 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1C13F70(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v270, v155);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            v149->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_3293A34 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        v262 = v148;
        if ( !value )
          goto LABEL_225;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              v56);
        if ( !Instance )
          goto LABEL_225;
        klass = Instance->klass;
        v157 = Instance;
        v158 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v158;
            p_offset += 4;
            if ( !v158 )
              goto LABEL_70;
          }
          v160 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_70:
          v160 = sub_1C65D04(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL);
        }
        v162 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v160)(
                 v157,
                 *(_QWORD *)(v160 + 8));
        v267 = v162;
        if ( !v162 )
          sub_1C13F80(0LL, v161);
        while ( 1 )
        {
LABEL_73:
          v163 = *(_QWORD *)v162;
          v164 = *(unsigned __int16 *)(*(_QWORD *)v162 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v162 + 302LL) )
          {
            v165 = (int *)(*(_QWORD *)(v163 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v165 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v164;
              v165 += 4;
              if ( !v164 )
                goto LABEL_77;
            }
            v166 = v163 + 16LL * *v165 + 312;
          }
          else
          {
LABEL_77:
            v166 = sub_1C65D04(v162, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v166)(v162, *(_QWORD *)(v166 + 8)) & 1) == 0 )
            break;
          v167 = *(_QWORD *)v162;
          v168 = *(unsigned __int16 *)(*(_QWORD *)v162 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v162 + 302LL) )
          {
            v169 = (int *)(*(_QWORD *)(v167 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v169 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v168;
              v169 += 4;
              if ( !v168 )
                goto LABEL_84;
            }
            v170 = v167 + 16LL * *v169 + 312;
          }
          else
          {
LABEL_84:
            v170 = sub_1C65D04(
                     v162,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v171 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v170)(
                                                        v162,
                                                        *(_QWORD *)(v170 + 8));
          if ( !v171 )
            sub_1C13F80(0LL, v172);
          Entity_k__BackingField = v171->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v171, v172);
          if ( !ConditionEntityArray )
            sub_1C13F80(0LL, v175);
          v176 = ConditionEntityArray->max_length;
          if ( v176 >= 1 )
          {
            v177 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v177 >= v176 )
                sub_1C13F88(ConditionEntityArray, v175);
              v178 = ConditionEntityArray->m_Items[v177];
              if ( !v178 )
                sub_1C13F80(ConditionEntityArray, v175);
              conditionTypes = v178->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1C13F80(ConditionEntityArray, v175);
              v180 = *(_QWORD *)&conditionTypes->max_length;
              v264 = v177;
              if ( (int)v180 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v176 = condEntityArray->max_length;
              v177 = v264 + 1;
              if ( (int)(v264 + 1) >= v176 )
                goto LABEL_73;
            }
            v181 = 0LL;
            while ( 2 )
            {
              if ( v181 >= (unsigned int)v180 )
                sub_1C13F88(ConditionEntityArray, v175);
              v182 = conditionTypes->m_Items[v181 + 1];
              v183 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v183, 0LL);
              if ( !v183 )
                sub_1C13F80(v184, v185);
              *(_DWORD *)(v183 + 16) = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v178, v182, 0LL);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                v187 = *(unsigned int *)(v183 + 16);
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                v187 = (unsigned int)v178->fields.value;
                *(_DWORD *)(v183 + 16) = v187;
              }
              if ( (_DWORD)v187 != -1 )
              {
                if ( !v269 )
                  sub_1C13F80(ConditionType, v187);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v269->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1C13F80(0LL, v187);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        v187,
                        (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v190 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v190,
                    (Il2CppObject *)v183,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0LL);
                  v192 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
                           allItemData,
                           (System_Func_TSource__bool__o *)v190,
                           (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v192 )
                  {
                    v193 = (System_Collections_Generic_Dictionary_int__object__o *)v269->fields.dicSquareIndexKeyItemData;
                    if ( !v193 )
                      sub_1C13F80(0LL, v191);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v193,
                      *(_DWORD *)(v183 + 16),
                      v192,
                      (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              *(_DWORD *)(v183 + 16) = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v178,
                                                                                   v182,
                                                                                   0LL);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v194 = v178->fields.value;
                *(_DWORD *)(v183 + 16) = v194;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1C13F80(ConditionEntityArray, v175);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !aiTargetCacher )
                    sub_1C13F80(TrendKey, TrendKey);
                  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v197);
                  if ( !DetectorByTrendKey )
                  {
                    v200 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v200,
                      0LL,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0LL);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v200,
                      &condType,
                      0LL);
                    v201 = this->fields.aiTargetCacher;
                    v202 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                    if ( !v201 )
                      sub_1C13F80(v202, v202);
                    WarBoardAiTargetCacher__Register(v201, v202, v178, condType, v203);
                  }
                  if ( !v270 )
                    sub_1C13F80(DetectorByTrendKey, v199);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v270->fields.dicIndividualityPutSqareIndex;
                  v205 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v206 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v207 = sub_1C13F70(WarBoardAIRoute_TargetData_TypeInfo);
                  *(_DWORD *)(v207 + 64) = 2;
                  System_Object___ctor((Il2CppObject *)v207, 0LL);
                  *(_QWORD *)(v207 + 104) = v206;
                  *(_DWORD *)(v207 + 112) = v182;
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1C13F80(v208, v209);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v205,
                    (Il2CppObject *)v207,
                    (const MethodInfo_32D1690 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v194 = *(_DWORD *)(v183 + 16);
                v162 = v267;
              }
              if ( v194 != -1 )
              {
                if ( !v270 )
                  sub_1C13F80(ConditionEntityArray, v175);
                if ( !Entity_k__BackingField )
                  sub_1C13F80(ConditionEntityArray, v175);
                dicObjectPutSquareIndex = v270->fields.dicObjectPutSquareIndex;
                v211 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v211,
                  dicObjectPutSquareIndex,
                  objectList,
                  v194,
                  (int64_t)v211,
                  v182,
                  &notSquareTarget,
                  v212);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v270->fields.dicSquarePutSqareIndex;
                  v214 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !dicSquarePutSqareIndex )
                    sub_1C13F80(v214, v214);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v214,
                                                                                       (const MethodInfo_32D1898 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v216 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v216,
                      (Il2CppObject *)v183,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0LL);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v216,
                                                                                         (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v217 = (int64_t)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v218 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      v219 = sub_1C13F70(WarBoardAIRoute_TargetData_TypeInfo);
                      *(_DWORD *)(v219 + 64) = 2;
                      System_Object___ctor((Il2CppObject *)v219, 0LL);
                      *(_QWORD *)(v219 + 48) = v217;
                      *(_QWORD *)(v219 + 104) = v218;
                      *(_DWORD *)(v219 + 112) = v182;
                      sub_1C13CC8((PartyOrganizationUtility_o *)(v219 + 48), v217, v220, v221, v222, v223, v224, v225);
                      v226 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v270->fields.dicSquarePutSqareIndex;
                      v227 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      if ( !v226 )
                        sub_1C13F80(v227, v227);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v226,
                        v227,
                        (Il2CppObject *)v219,
                        (const MethodInfo_32D16A4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v180) = conditionTypes->max_length;
              if ( (__int64)++v181 >= (int)v180 )
                goto LABEL_137;
              continue;
            }
          }
        }
        if ( v162 )
        {
          v228 = *(_QWORD *)v162;
          v229 = *(unsigned __int16 *)(*(_QWORD *)v162 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v162 + 302LL) )
          {
            v230 = (int *)(*(_QWORD *)(v228 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v230 - 1) != System_IDisposable_TypeInfo )
            {
              --v229;
              v230 += 4;
              if ( !v229 )
                goto LABEL_144;
            }
            v231 = v228 + 16LL * *v230 + 312;
          }
          else
          {
LABEL_144:
            v231 = sub_1C65D04(v162, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v231)(v162, *(_QWORD *)(v231 + 8));
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_225;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v56);
        v232 = this->fields.aiTargetCacher;
        v233 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v233 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v233->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v233->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v233);
            v233 = WarBoardAIRoute___c_TypeInfo;
          }
          v235 = (Il2CppObject *)v233->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v235,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
            (int64_t)_9__45_0,
            v237,
            v238,
            v239,
            v240,
            v241,
            v242);
        }
        v243 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v243,
                                                                              (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v232 )
          goto LABEL_225;
        WarBoardAiTargetCacher__AggregateTargetObject(v232, (IWarBoardObjectData_array *)Instance, v244);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v269,
          (const MethodInfo_332B618 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        allAllyPiece = v261;
        p_placePieceData = &this->fields.placePieceData;
        v148 = v262;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v270,
          (const MethodInfo_332B618 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v245 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1C13F70(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v245, v246);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_225;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v247 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_225;
          v248 = v247->max_length;
          if ( v248 >= 1 )
          {
            v249 = (int)Instance;
            v250 = 0;
            while ( 2 )
            {
              if ( v250 >= v248 )
                goto LABEL_226;
              v251 = &v247->obj.klass + (int)v250;
              v252 = v251[4];
              if ( !v252 )
                goto LABEL_225;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v251[4],
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_198;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v252->_1.fields;
              if ( !Instance )
                goto LABEL_225;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v249, ClassId, 0LL);
              v255 = SvtClassAttri__getMagnification(ClassId, v249, 0LL);
              v256 = SvtClassAttri__getMagnification(v249, ClassId, 0LL);
              v257 = SvtClassAttri__getMagnification(ClassId, v249, 0LL);
              if ( Magnification <= 1.0 )
              {
                if ( v255 >= 1.0 )
                  goto LABEL_177;
                if ( !v245 )
                  goto LABEL_225;
              }
              else
              {
                if ( !v245 )
                  goto LABEL_225;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v245->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_225;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v252->_1.element_class,
                  (Il2CppObject *)v252,
                  (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v245->fields.flagNow |= 0x4000uLL;
                if ( v255 >= 1.0 )
                {
LABEL_177:
                  if ( v256 >= 1.0 )
                  {
                    if ( v257 > 1.0 )
                    {
                      if ( !v245 )
                        goto LABEL_225;
                      goto LABEL_184;
                    }
                  }
                  else
                  {
                    if ( !v245 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v245->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v252->_1.element_class,
                      (Il2CppObject *)v252,
                      (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v245->fields.flagNow |= 0x8000uLL;
                    if ( v257 <= 1.0 )
                      goto LABEL_186;
LABEL_184:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v245->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v252->_1.element_class,
                      (Il2CppObject *)v252,
                      (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v245->fields.flagNow |= 0x20000uLL;
                  }
LABEL_186:
                  if ( Magnification <= 1.0 || v255 >= 1.0 )
                  {
                    if ( v256 < 1.0 && v257 > 1.0 )
                    {
                      if ( !v245 )
                        goto LABEL_225;
LABEL_196:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v245->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_225;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v252->_1.element_class,
                        (Il2CppObject *)v252,
                        (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v245->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v245 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v245->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v252->_1.element_class,
                      (Il2CppObject *)v252,
                      (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v245->fields.flagNow |= 0x1000uLL;
                    if ( v256 < 1.0 && v257 > 1.0 )
                      goto LABEL_196;
                  }
LABEL_198:
                  v248 = v247->max_length;
                  if ( (int)++v250 >= v248 )
                    goto LABEL_199;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v245->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_225;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v252->_1.element_class,
              (Il2CppObject *)v252,
              (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v245->fields.flagNow |= 0x10000uLL;
            goto LABEL_177;
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_225;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v245,
            (const MethodInfo_332B618 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          allAllyPiece = v261;
          p_placePieceData = &this->fields.placePieceData;
          v148 = v262;
        }
      }
LABEL_201:
      max_length = allAllyPiece->max_length;
      if ( (int)++v148 >= max_length )
        goto LABEL_223;
    }
    if ( WarBoardPieceData__get_isMaster(v149, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_225;
      v153 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v153,
        v149,
        v150);
      goto LABEL_62;
    }
    forceId_k__BackingField = v149->fields._forceId_k__BackingField;
    v152 = this->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v152 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_223:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_225;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, v145);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(this, v258);
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
  const MethodInfo *v7; // x1
  WarBoardItemData_o *Item; // x0

  if ( (byte_4BB223D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&WarBoardAIManager_TypeInfo, v6);
    byte_4BB223D = 1;
  }
  if ( !alreadyGetItemList )
    sub_1C13F80(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = WarBoardAIManager__GetItem(targetSquare, v7);
  return Item && !WarBoardItemData__get_Acquired(Item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__ClassAdvantageDistance(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *v5; // x22
  int64_t v9; // x8

  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_16;
  if ( !advantagePieceData )
    goto LABEL_16;
  v9 = advantagePieceData->fields.flagNow | v5->fields.flagNow;
  v5->fields.flagNow = v9;
  if ( (v9 & 0x1000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicClassAdvantageServant,
                                  advantagePieceData->fields.baseCARange,
                                  actionSquareIndex,
                                  *(const MethodInfo **)&actionSquareIndex);
    v5->fields.isMoveByServantAndClassAdvantageServantRange = (int)this;
    v5 = *routeData;
    if ( !*routeData )
      goto LABEL_16;
  }
  if ( (v5->fields.flagNow & 0x2000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicClassDisAdvantageServant,
                                  advantagePieceData->fields.baseCDARange,
                                  actionSquareIndex,
                                  *(const MethodInfo **)&actionSquareIndex);
    v5->fields.isMoveByServantAndClassDisAdvantageServantRange = (int)this;
    v5 = *routeData;
    if ( !*routeData )
      goto LABEL_16;
  }
  if ( (v5->fields.flagNow & 0x4000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicAttackAdvantageServant,
                                  advantagePieceData->fields.baseAARange,
                                  actionSquareIndex,
                                  *(const MethodInfo **)&actionSquareIndex);
    v5->fields.isMoveByServantAndAttackAdvantageServantRange = (int)this;
    v5 = *routeData;
    if ( !*routeData )
      goto LABEL_16;
  }
  if ( (v5->fields.flagNow & 0x8000) != 0
    && (this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                      advantagePieceData->fields.dicAttackDisAdvantageServant,
                                      advantagePieceData->fields.baseADARange,
                                      actionSquareIndex,
                                      *(const MethodInfo **)&actionSquareIndex),
        v5->fields.isMoveByServantAndAttackDisAdvantageServantRange = (int)this,
        (v5 = *routeData) == 0LL)
    || (v5->fields.flagNow & 0x10000) != 0
    && (this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                      advantagePieceData->fields.dicDefenseAdvantageServant,
                                      advantagePieceData->fields.baseDARange,
                                      actionSquareIndex,
                                      *(const MethodInfo **)&actionSquareIndex),
        v5->fields.isMoveByServantAndDefenseAdvantageServantRange = (int)this,
        (v5 = *routeData) == 0LL) )
  {
LABEL_16:
    sub_1C13F80(this, routeData);
  }
  if ( (v5->fields.flagNow & 0x20000) != 0 )
    v5->fields.isMoveByServantAndDefenseDisAdvantageServantRange = WarBoardAIRoute__CompareBaseRangeToActionRange(
                                                                     advantagePieceData->fields.dicDefenseDisAdvantageServant,
                                                                     advantagePieceData->fields.baseDDARange,
                                                                     actionSquareIndex,
                                                                     *(const MethodInfo **)&actionSquareIndex);
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *v2; // x19
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4BB222F & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C13D24(
                                  &Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__,
                                  method);
    byte_4BB222F = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1C13F80(this, method);
  size = allRouteList->fields._size;
  v5 = allRouteList->fields._version + 1;
  allRouteList->fields._size = 0;
  allRouteList->fields._version = v5;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w19
  const MethodInfo *v14; // x5
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  int32_t v17; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+0h] [xbp-80h] BYREF

  v6 = dicPieceList;
  if ( (byte_4BB223C & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v11);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1C13D24(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v12);
    byte_4BB223C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !v6 )
    sub_1C13F80(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v13 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v19.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 actionIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 v14);
    v17 = System_Linq_Enumerable__Count_int_(
            v16,
            (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v17 < baseRange )
    {
      v13 = 1;
      break;
    }
    if ( v17 == baseRange )
      v13 = 2;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v13;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v15; // x1
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v18; // w26
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x21
  struct WarBoardSquareData_array *v21; // x29
  int v22; // w8
  unsigned int v23; // w20
  int v24; // w22
  Il2CppClass **v25; // x8
  Il2CppClass *v26; // x23
  const MethodInfo *v27; // x5
  int32_t name; // w24
  int32_t v29; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  int32_t v32; // w1
  const MethodInfo_32897D8 *v33; // x3
  int32_t v34; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v35; // [xsp+0h] [xbp-70h]

  if ( (byte_4BB2248 & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v5);
    byte_4BB2248 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v6;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicOutOfWarningAreaRange,
    (int64_t)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1C13F80(IsFlag, v15);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v35 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v18 >= (unsigned int)max_length )
        goto LABEL_34;
      v19 = &allSquare->obj.klass + v18;
      v20 = v19[4];
      if ( !v20 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v19[4],
                                                                      1,
                                                                      0LL);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v21 = this->fields.allSquare;
        if ( !v21 )
          goto LABEL_33;
        v22 = v21->max_length;
        if ( v22 >= 1 )
        {
          v23 = 0;
          v24 = -1;
          while ( v23 < v22 )
          {
            v25 = &v21->obj.klass + (int)v23;
            v26 = v25[4];
            if ( !v26 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v25[4],
                                                                            1,
                                                                            0LL);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v20->_1.name;
            v29 = (int32_t)v26->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v30 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v29,
                                                                         0,
                                                                         0LL,
                                                                         v27);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v30,
                                                                            (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
            if ( v24 > (int)IsFlag - 1 || v24 == -1 )
              v24 = (_DWORD)IsFlag - 1;
            if ( v24 >= 2 )
            {
LABEL_37:
              v22 = v21->max_length;
              if ( (int)++v23 < v22 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          sub_1C13F88(IsFlag, v15);
        }
        v24 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v35;
        if ( !*v35 )
          goto LABEL_33;
        v32 = (int32_t)v20->_1.name;
        v33 = (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v34 = v24;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v32 = (int32_t)v20->_1.name;
        v33 = (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v34 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v32, v34, v33);
      max_length = allSquare->max_length;
      ++v18;
    }
    while ( v18 < max_length );
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIRoute__CreateRouteData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t searchCount,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BB2235 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData);
    byte_4BB2235 = 1;
  }
  v9 = sub_1C13F70(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 56), (int64_t)piecePlaceData, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)routeDataList, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v9;
}


WarBoardPieceData_o *__fastcall WarBoardAIRoute__GetActionPiece(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t actionSquareIndex,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  uint32_t v9; // w19
  uint32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB224D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, basePiece);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&WarBoardAIManager_TypeInfo, v7);
    byte_4BB224D = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1C13F80(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_32B5178 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v9 = value;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    return WarBoardAIManager__GetPieceUnique(v9, v8);
  }
  else
  {
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    return WarBoardAIManager__GetEnemyPieceSquareIndex(actionSquareIndex, v8);
  }
}


WarBoardAIRoute_AdvantagePieceData_o *__fastcall WarBoardAIRoute__GetAdvantagePieceData(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v6; // x21
  const MethodInfo *v7; // x3
  int64_t flagNow; // x8
  WarBoardAIRoute_AdvantagePieceData_o *v9; // x20
  int64_t v11; // x8

  v6 = this;
  if ( (byte_4BB224B & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C13D24(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  basePiece);
    byte_4BB224B = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_332B578 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_1C13F80(this, basePiece);
  }
  flagNow = *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH;
  v9 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  if ( (flagNow & 0x1000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                  this,
                                  (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)this->fields.allAllyPiece,
                                  baseSquareIndex,
                                  v7);
    flagNow = v9->fields.flagNow;
    v9->fields.baseCARange = (int)this;
    if ( (flagNow & 0x2000) == 0 )
    {
LABEL_8:
      if ( (flagNow & 0x4000) == 0 )
        goto LABEL_9;
      goto LABEL_16;
    }
  }
  else if ( (flagNow & 0x2000) == 0 )
  {
    goto LABEL_8;
  }
  this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v7);
  flagNow = v9->fields.flagNow;
  v9->fields.baseCDARange = (int)this;
  if ( (flagNow & 0x4000) == 0 )
  {
LABEL_9:
    if ( (flagNow & 0x8000) == 0 )
      goto LABEL_10;
    goto LABEL_17;
  }
LABEL_16:
  this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicAttackAdvantageServant,
                                baseSquareIndex,
                                v7);
  flagNow = v9->fields.flagNow;
  v9->fields.baseAARange = (int)this;
  if ( (flagNow & 0x8000) == 0 )
  {
LABEL_10:
    if ( (flagNow & 0x10000) == 0 )
      goto LABEL_11;
LABEL_18:
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                  this,
                                  v9->fields.dicDefenseAdvantageServant,
                                  baseSquareIndex,
                                  v7);
    v11 = v9->fields.flagNow;
    v9->fields.baseDARange = (int)this;
    if ( (v11 & 0x20000) == 0 )
      return v9;
    goto LABEL_12;
  }
LABEL_17:
  this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v7);
  flagNow = v9->fields.flagNow;
  v9->fields.baseADARange = (int)this;
  if ( (flagNow & 0x10000) != 0 )
    goto LABEL_18;
LABEL_11:
  if ( (flagNow & 0x20000) != 0 )
LABEL_12:
    v9->fields.baseDDARange = WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicDefenseDisAdvantageServant,
                                baseSquareIndex,
                                v7);
  return v9;
}


System_Collections_Generic_Dictionary_uint__int__o *__fastcall WarBoardAIRoute__GetAllEnemyToDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        int32_t *servantAndEnemyRange,
        int32_t *servantAndEnemyMasterRange,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v14; // x22
  __int64 isMaster; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v20; // w26
  WarBoardPieceData_o *v21; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int32_t v24; // w24

  if ( (byte_4BB2247 & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, routeDataList);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v12);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v13);
    byte_4BB2247 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v14 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v14,
    (const MethodInfo_3321A7C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_20;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1C13F88(isMaster, v16);
      v21 = allEnemyPiece->m_Items[v20];
      if ( !v21 )
        break;
      nowSquareIndex_k__BackingField = v21->fields._nowSquareIndex_k__BackingField;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   v17);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v23,
                   (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v14 )
        break;
      v24 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v14,
        v21->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_3322440 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v24 < *servantAndEnemyRange )
        *servantAndEnemyRange = v24;
      isMaster = WarBoardPieceData__get_isMaster(v21, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v24 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v24;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v20 >= max_length )
        return v14;
    }
LABEL_20:
    sub_1C13F80(isMaster, v16);
  }
  return v14;
}


System_Int32_array *__fastcall WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4BB2238 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__, piecePlaceData);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v9);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v10);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v11);
    byte_4BB2238 = 1;
  }
  v12 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_1C13F80(v13, v14);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_32B37A4 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v18 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v18,
      (Il2CppObject *)v12,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0LL);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v18,
             (const MethodInfo_2FCE8EC *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v24; // x25
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v35; // x19
  System_Collections_Generic_Dictionary_int__object__o *v36; // x20
  WarBoardAIManager_c *v37; // x0
  char v38; // w10
  bool v39; // w8
  bool IsDetour; // w25
  const MethodInfo *v41; // x5
  int32_t key; // w26
  Il2CppObject *value; // x27
  System_Int32_array *v44; // x28
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w25
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  BalanceConfig_c *v52; // x0
  const MethodInfo *v53; // x5
  System_Func_int__bool__o *klass; // x28
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x8
  __int64 v62; // x21
  BalanceConfig_c *v63; // x0
  __int64 v64; // x1
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  PartyOrganizationUtility_o *v67; // [xsp+8h] [xbp-D8h]
  bool v69; // [xsp+1Ch] [xbp-C4h]
  char v70; // [xsp+20h] [xbp-C0h]
  bool v71; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v73; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4BB2239 & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex);
    sub_1C13D24(&BalanceConfig_TypeInfo, v8);
    sub_1C13D24(&DefenseAreaData_TypeInfo, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v17);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v18);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v20);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v21);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v22);
    sub_1C13D24(&WarBoardAIManager_TypeInfo, v23);
    byte_4BB2239 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v24 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_50;
  *(_QWORD *)(v24 + 16) = piecePlaceData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)piecePlaceData, v27, v28, v29, v30, v31, v32);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_50;
  defenseArea = npcData->fields.defenseArea;
  v35 = (DefenseAreaData_o *)sub_1C13F70(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v35, masterSquareIndex, defenseArea, 0LL);
  v36 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v36,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_4BB22FD )
  {
    sub_1C13D24(&WarBoardAIManager_TypeInfo, v26);
    byte_4BB22FD = 1;
  }
  v37 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v37 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v37->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_50;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v72,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v38 = 0;
  object = (Il2CppObject *)v24;
  v67 = (PartyOrganizationUtility_o *)(v24 + 24);
  v39 = 1;
  IsDetour = 1;
  v73 = v72;
LABEL_13:
  v69 = v39;
LABEL_14:
  v70 = v38;
  v71 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v73,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v73.fields._current.fields.key;
    value = v73.fields._current.fields.value;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v44 = AStarSearch__RouteSearch(0LL, masterSquareIndex, key, 0, 0LL, v41);
    v45 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v44,
            (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v36 )
      sub_1C13F80(v45, v46);
    v47 = v45;
    System_Collections_Generic_Dictionary_int__object___Add(
      v36,
      key,
      &v44->obj,
      (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v35 )
      sub_1C13F80(v48, v49);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v35, v47, 0LL);
    if ( DefenseAreaData__IsInDefenseArea(v35, key, 0LL) )
    {
      v52 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      if ( !v52->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v44 )
          sub_1C13F80(v52, v50);
        if ( (int)v44->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v35, v44->m_Items[2], v47, 0LL);
      }
      IsDetour = 0;
      v38 = 1;
      if ( v71 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v44, allyPieces, v51);
        v39 = 0;
        v38 = 1;
        if ( v69 )
        {
          klass = (System_Func_int__bool__o *)v67->klass;
          if ( !v67->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0LL);
            v67->klass = (PartyOrganizationUtility_c *)klass;
            sub_1C13CC8(v67, (int64_t)klass, v55, v56, v57, v58, v59, v60);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v39 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, klass, v53) == 0LL;
          v38 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v73,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v61 = 1025LL;
  if ( (v70 & 1) == 0 )
    v61 = 1LL;
  v62 = v71 ? v61 | 0x2000000000LL : v61;
  if ( !v35 )
LABEL_50:
    sub_1C13F80(dicSquareIndexEnemyPiece, v26);
  DefenseAreaData__CreateShortestRoutes(v35, (System_Collections_Generic_Dictionary_int__int____o *)v36, 0LL);
  v63 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v63 = BalanceConfig_TypeInfo;
  }
  if ( !v63->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v35, (System_Collections_Generic_Dictionary_int__int____o *)v36, 0LL);
  if ( v69 )
    v64 = v62 | 0x10000000000LL;
  else
    v64 = v62;
  DefenseAreaData__SetFlag(v35, v64, 0LL);
  return v35;
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
  Il2CppObject *Item; // x22
  System_Collections_Generic_Dictionary_int__int__o *v25; // x19
  __int64 v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x23
  System_Func_object__bool__o *v36; // x24
  _BOOL8 v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x5
  int32_t v40; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4BB2246 & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, basePiece);
    sub_1C13D24(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__,
      v13);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v15);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v18);
    sub_1C13D24(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v19);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v21);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v22);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v23);
    byte_4BB2246 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_332B578 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v25,
          (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0LL )
  {
    sub_1C13F80(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v45,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v46,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v26 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( !v26 )
      sub_1C13F80(v27, v28);
    v35 = v26 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v26 + 16) = v46.fields._current;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 24), 0LL, v29, v30, v31, v32, v33, v34);
    v36 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v26,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0LL);
    v37 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v36,
            (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v37 )
    {
      if ( !*(_QWORD *)v35 )
        sub_1C13F80(v37, v38);
      v40 = *(_DWORD *)(*(_QWORD *)v35 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v41 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v40,
                                                                   0,
                                                                   0LL,
                                                                   v39);
      v42 = System_Linq_Enumerable__Count_int_(
              v41,
              (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v25 )
        sub_1C13F80(v42, v43);
      System_Collections_Generic_Dictionary_int__int___Add(
        v25,
        *(_DWORD *)(v26 + 16),
        v42,
        (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v46,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v25;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4BB223A & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C13D24(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  evalValueSquareList);
    byte_4BB223A = 1;
  }
  if ( !evalValueSquareList )
    sub_1C13F80(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardAIRoute__GetFlagAdvantage(
        WarBoardAIRoute_o *this,
        int32_t baseClassId,
        int32_t actionClassId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  __int64 v7; // x21
  unsigned __int64 v8; // x9
  int64_t result; // x0

  if ( (byte_4BB224E & 1) == 0 )
  {
    sub_1C13D24(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
    byte_4BB224E = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) <= 1.0 )
    v6 = 1LL;
  else
    v6 = 524289LL;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) < 1.0 )
    v6 |= 0x400000uLL;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) >= 1.0 )
    v7 = v6;
  else
    v7 = v6 | 0x100000;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) <= 1.0 )
    v8 = v7;
  else
    v8 = v7 | 0x800000;
  result = (unsigned int)(v8 >> 2) & ((unsigned int)v8 >> 1) & 0x40000 | v8;
  if ( (v8 & 0x400000) != 0 )
    return result | (v8 >> 2) & 0x200000;
  return result;
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
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Int32_array *linkedSquares; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x29
  __int64 v17; // x23
  int32_t v18; // w24
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  WarBoardPieceData_o *v21; // x25
  __int64 v22; // x22
  bool isServant; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v24; // x28
  struct System_Int32_array *v25; // x20
  int32_t v26; // w19
  int32_t v27; // w26
  int32_t ClassId; // w1
  float Magnification; // s0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  _BOOL4 v31; // w8
  uint32_t v32; // w24
  const MethodInfo *v33; // x2
  WarBoardAIRoute_o *v34; // x24
  int32_t *v36; // [xsp+8h] [xbp-78h]
  int32_t defense; // [xsp+18h] [xbp-68h]
  uint32_t value; // [xsp+1Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4BB224A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1C13D24(&SvtClassAttri_TypeInfo, v12);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&WarBoardAIManager_TypeInfo, v13);
    byte_4BB224A = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_51;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_51;
  v15 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = 1LL;
    v36 = &linkedSquares->m_Items[1];
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1C13F88(this, baseSquare);
      v18 = v36[v16];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_36396444((WarBoardData_o *)this, v18, v19);
      if ( !this )
        goto LABEL_29;
      v21 = (WarBoardPieceData_o *)this;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v21, v20);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL)
          || (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          v22 = v17 | 0x10;
          isServant = WarBoardPieceData__get_isServant(v21, 0LL);
          if ( (v17 & 0x1000000) == 0 && isServant )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            v24 = piecePlaceData;
            v25 = linkedSquares;
            v26 = masterSquareIndex;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
            if ( !v21->fields._battleServant_k__BackingField )
              break;
            v27 = (int)this;
            ClassId = BattleServantData__getClassId(v21->fields._battleServant_k__BackingField, 0LL);
            if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
            {
              defense = ClassId;
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              ClassId = defense;
            }
            Magnification = SvtClassAttri__getMagnification(v27, ClassId, 0LL);
            masterSquareIndex = v26;
            linkedSquares = v25;
            piecePlaceData = v24;
            if ( Magnification > 1.0 )
              v22 = v17 | 0x1000010;
          }
          this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v17 = v22 | 0x20;
          else
            v17 = v22;
        }
      }
      else
      {
LABEL_29:
        if ( !basePiece )
          break;
      }
      aiRouteMasterData = v10->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        break;
      v31 = aiRouteMasterData->fields.masterType == 2
         && aiRouteMasterData->fields.masterPieceIndex == basePiece->fields._index_k__BackingField;
      if ( v18 == masterSquareIndex && !v31 )
        v17 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v18,
                                    &value,
                                    (const MethodInfo_32B5178 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = value;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v32, (const MethodInfo *)baseSquare);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v34 = this;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v34, v33);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v34 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v34, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              v17 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(v15) = linkedSquares->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        return v17;
    }
LABEL_51:
    sub_1C13F80(this, baseSquare);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v11; // x8

  if ( (byte_4BB2249 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&baseSquareIndex);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    byte_4BB2249 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_32899C4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_32899C4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_328973C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_328973C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_328973C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v11 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_1C13F80(dicOutOfWarningAreaRange, v8);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v11,
                                             actionSquareIndex,
                                             (const MethodInfo_328973C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w9
  int32_t key; // w20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v15; // x8
  __int128 v17[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v18; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4BB2237 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v9);
    byte_4BB2237 = 1;
  }
  memset(&v18, 0, 32);
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_18;
  masterType = aiRouteMasterData->fields.masterType;
  if ( !masterType || masterType == 2 )
  {
    if ( piecePlaceData )
    {
      System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17,
        piecePlaceData,
        (const MethodInfo_32B3EB8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v18.fields._dictionary = v17[0];
      v18.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v17[1];
      while ( 1 )
      {
        v13 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                &v18,
                (const MethodInfo_33E49DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v13 )
          break;
        v15 = v4->fields.aiRouteMasterData;
        if ( !v15 )
          sub_1C13F80(v13, v14);
        key = (int32_t)v18.fields._current.fields.key;
        if ( v15->fields.masterUniqueIndex == HIDWORD(v18.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v18,
            (const MethodInfo_33E4ADC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v18,
        (const MethodInfo_33E4ADC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1C13F80(this, piecePlaceData);
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
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4BB2252 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData);
    sub_1C13D24(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v6);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__, v7);
    byte_4BB2252 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1C13F80(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v10 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1C13F70(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v10,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2FB2588 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x5
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v21; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v23; // w22
  int32_t v24; // w0
  const MethodInfo *v25; // x5
  int32_t v26; // w2
  int v27; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v30; // w23
  int32_t v31; // w0
  int v32; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB2254 & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v10);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v11);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&WarBoardAIManager_TypeInfo, v14);
    byte_4BB2254 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_32D14B4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL )
  {
    sub_1C13F80(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_395EF24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
            &v35,
            (const MethodInfo_33EA7A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v15 )
      break;
    currentValue = v35.fields._currentValue;
    if ( !v35.fields._currentValue )
      sub_1C13F80(v15, v16);
    monitor = (WarBoardPieceData_o *)v35.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v35.fields._currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v17) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v21 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v21,
                                                                   0,
                                                                   0LL,
                                                                   v18);
      v23 = System_Linq_Enumerable__Count_int_(
              v22,
              (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
      v24 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
      v26 = (int32_t)currentValue[4].monitor;
      if ( v23 == v24 )
        v27 = 2;
      else
        v27 = 3;
      if ( v23 < v24 )
        v27 = 1;
      LODWORD(currentValue[4].klass) = v27;
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v26,
                                                                   1,
                                                                   0LL,
                                                                   v25);
      if ( v28 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v30 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
        v31 = System_Linq_Enumerable__Count_int_(
                v28,
                (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v31 >= v30 )
        {
          if ( v31 == v30 )
            v32 = 2;
          else
            v32 = 3;
        }
        else
        {
          v32 = 1;
        }
      }
      else
      {
        v32 = 0;
      }
      HIDWORD(currentValue[4].klass) = v32;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v35,
    (const MethodInfo_33EA7A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return dicKeyPutIndexValueTargetData;
}


int32_t __fastcall WarBoardAIRoute__GetRangeShortMost(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w19
  const MethodInfo *v13; // x5
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4BB223B & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, dicPieceList);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v10);
    this = (WarBoardAIRoute_o *)sub_1C13D24(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v11);
    byte_4BB223B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !dicPieceList )
    sub_1C13F80(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v12 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v19.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 baseSquareIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 v13);
    v16 = System_Linq_Enumerable__Count_int_(
            v15,
            (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v12 > v16 || v12 == -1 )
      v12 = v16;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v12;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  _DWORD *klass; // x8
  int32_t *v25; // x9
  int v26; // w10
  uint32_t v27; // w24
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4BB2236 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v13);
    sub_1C13D24(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v18);
    byte_4BB2236 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v19 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v19,
    (const MethodInfo_3321A7C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1C13F80(v20, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v22 )
      break;
    if ( !v30.fields._current )
      sub_1C13F80(v22, v23);
    if ( LODWORD(v30.fields._current[1].monitor) != HIDWORD(v30.fields._current[1].monitor) )
    {
      value = 0;
      klass = v30.fields._current[3].klass;
      if ( (BYTE3(v30.fields._current[1].klass) & 4) == 0 )
      {
        if ( !klass )
          sub_1C13F80(v22, v23);
        if ( klass[4] == 1 )
          v25 = masterActionCount;
        else
          v25 = actionCount;
LABEL_21:
        ++*v25;
        goto LABEL_22;
      }
      if ( !klass )
        sub_1C13F80(v22, v23);
      v26 = klass[4];
      klass = v30.fields._current[3].monitor;
      if ( v26 != 1 )
      {
        if ( !klass )
          sub_1C13F80(v22, v23);
        if ( klass[4] == 1 )
          v25 = masterReplaceCount;
        else
          v25 = replaceCount;
        goto LABEL_21;
      }
      ++*masterReplaceCount;
      if ( !klass )
        sub_1C13F80(v22, v23);
LABEL_22:
      if ( !v19 )
        sub_1C13F80(v22, v23);
      v27 = klass[11];
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v19,
        v27,
        &value,
        (const MethodInfo_3323AD8 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v19,
        v27,
        value + 1,
        (const MethodInfo_332242C *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  return v19;
}


int32_t __fastcall WarBoardAIRoute__GetRouteSumPieceActionCost(
        WarBoardAIRoute_o *this,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Func_object__int__o *v18; // x20

  if ( (byte_4BB2255 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77514872, routeDataList);
    sub_1C13D24(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v6);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v7);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v8);
    byte_4BB2255 = 1;
  }
  v9 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C13F80(v10, v11);
  *(_QWORD *)(v9 + 16) = targetPiece;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)targetPiece, v12, v13, v14, v15, v16, v17);
  v18 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0LL);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v18,
           (const MethodInfo_2FC78B4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77514872);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v25; // x26
  const MethodInfo *v26; // x5
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4BB2243 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicPutSquareIndex);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v15);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v18);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&WarBoardAIRoute_TargetData_TypeInfo, v19);
    byte_4BB2243 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !dicPutSquareIndex )
    sub_1C13F80(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_32D1AD8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v29,
            (const MethodInfo_33EA148 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v20 )
      break;
    key = v29.fields._current.fields.key;
    value = v29.fields._current.fields.value;
    if ( excludeCond )
    {
      if ( !v29.fields._current.fields.value )
        sub_1C13F80(v20, v21);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))excludeCond->fields.m_target)(
              excludeCond->fields.original_method_info,
              v29.fields._current.fields.value[3].monitor,
              *(_QWORD *)&excludeCond->fields.extra_arg) & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v25 = (WarBoardAIRoute_TargetData_o *)sub_1C13F70(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_36391400(
      v25,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      v26);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1C13F80(0LL, v27);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)key,
      (Il2CppObject *)v25,
      (const MethodInfo_32D16A4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v29,
    (const MethodInfo_33EA268 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  __int64 v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
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
  System_Collections_Generic_Dictionary_int__object__o *v52; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x19
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  Il2CppObject *key; // x25
  Il2CppObject *value; // x26
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v60; // x1
  int32_t Id_k__BackingField; // w27
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v65; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  IWarBoardObjectData_array *v67; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x29
  System_Func_object__bool__o *klass; // x23
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x29
  System_Func_object__int__o *v77; // x23
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v84; // x0
  WarBoardAIRoute___c_c *v85; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v86; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v88; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v96; // x0
  WarBoardAIRoute___c_c *v97; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v98; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v100; // x24
  struct WarBoardAIRoute___c_StaticFields *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x0
  __int64 v109; // x1
  WarBoardPieceData_o *v110; // x27
  int32_t v111; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v113; // x23
  const MethodInfo *v114; // x6
  __int64 v115; // x1
  PartyOrganizationUtility_o *v116; // [xsp+0h] [xbp-D0h]
  PartyOrganizationUtility_o *v117; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v119; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v120; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4BB2244 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v17);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v18);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v19);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v20);
    sub_1C13D24(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v21);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v22);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v23);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v24);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v25);
    sub_1C13D24(&System_Func_IWarBoardObjectData__bool__TypeInfo, v26);
    sub_1C13D24(&System_Func_IWarBoardObjectData__int__TypeInfo, v27);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v28);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v29);
    sub_1C13D24(&WarBoardAIRoute_TargetData_TypeInfo, v30);
    sub_1C13D24(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v31);
    sub_1C13D24(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v32);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v33);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v34);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v35);
    sub_1C13D24(&WarBoardAIRoute___c_TypeInfo, v36);
    byte_4BB2244 = 1;
  }
  memset(&v120, 0, sizeof(v120));
  v37 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37
    || (*(_QWORD *)(v37 + 16) = excludeCond,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)excludeCond, v40, v41, v42, v43, v44, v45),
        *(_QWORD *)(v37 + 24) = basePiece,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)basePiece, v46, v47, v48, v49, v50, v51),
        *(_DWORD *)(v37 + 32) = baseSquareIndex,
        v52 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v52,
          (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1C13F80(v38, v39);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v119,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_32D1AD8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v120 = v119;
  v53 = 0LL;
  v116 = (PartyOrganizationUtility_o *)(v37 + 48);
  v117 = (PartyOrganizationUtility_o *)(v37 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v120,
            (const MethodInfo_33EA148 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1C13F80(0LL, v54);
    key = v120.fields._current.fields.key;
    value = v120.fields._current.fields.value;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v120.fields._current.fields.key,
                           v55);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v52 )
        goto LABEL_44;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v52 )
LABEL_44:
        sub_1C13F80(DetectorByTrendKey, v60);
    }
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v52,
           Id_k__BackingField,
           (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v52,
               Id_k__BackingField,
               (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v65 = this->fields.aiTargetCacher;
      if ( !v65 )
        sub_1C13F80(0LL, v62);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v65, (int64_t)key, v63);
      v67 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v68 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v68 = v53;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v117->klass;
        if ( !v117->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1C13F70(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0LL);
          v117->klass = (PartyOrganizationUtility_c *)klass;
          sub_1C13CC8(v117, (int64_t)klass, v70, v71, v72, v73, v74, v75);
        }
        v76 = System_Linq_Enumerable__Where_object_(
                v68,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v77 = (System_Func_object__int__o *)v116->klass;
        if ( !v116->klass )
        {
          v77 = (System_Func_object__int__o *)sub_1C13F70(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            v77,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0LL);
          v116->klass = (PartyOrganizationUtility_c *)v77;
          sub_1C13CC8(v116, (int64_t)v77, v78, v79, v80, v81, v82, v83);
        }
        v84 = System_Linq_Enumerable__OrderBy_object__int_(
                v76,
                (System_Func_TSource__TKey__o *)v77,
                (const MethodInfo_2FB842C *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v85 = WarBoardAIRoute___c_TypeInfo;
        v86 = v84;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v85 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v85->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v85->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v85);
            v85 = WarBoardAIRoute___c_TypeInfo;
          }
          v88 = (Il2CppObject *)v85->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1C13F70(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_2,
            v88,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&static_fields->__9__64_2,
            (int64_t)_9__64_2,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95);
        }
        v96 = System_Linq_Enumerable__ThenBy_object__int_(
                v86,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_2FC81C8 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v97 = WarBoardAIRoute___c_TypeInfo;
        v98 = v96;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v97 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v97->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v97->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v97);
            v97 = WarBoardAIRoute___c_TypeInfo;
          }
          v100 = (Il2CppObject *)v97->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1C13F70(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_3,
            v100,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0LL);
          v101 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v101->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v101->__9__64_3,
            (int64_t)_9__64_3,
            v102,
            v103,
            v104,
            v105,
            v106,
            v107);
        }
        v108 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                      v98,
                                                                      (System_Func_TSource__TKey__o *)_9__64_3,
                                                                      (const MethodInfo_2FC81C8 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v108,
                 (const MethodInfo_2FB1C00 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
      }
      else
      {
        Item = 0LL;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v52,
      Id_k__BackingField,
      Item,
      (const MethodInfo_3292294 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v110 = *(WarBoardPieceData_o **)(v37 + 24);
      v111 = *(_DWORD *)(v37 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v113 = (WarBoardAIRoute_TargetData_o *)sub_1C13F70(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_36393408(
        v113,
        (WarBoardAIRoute_TargetData_o *)value,
        (IWarBoardObjectData_o *)Item,
        v110,
        v111,
        allEnemyPiece,
        v114);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C13F80(0LL, v115);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (Il2CppObject *)v113,
        (const MethodInfo_32D16A4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C13F80(0LL, v109);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (const MethodInfo_32D2B18 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v120,
    (const MethodInfo_33EA268 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_36393520(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueKeyTarget; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Item; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *v24; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *monitor; // x25
  System_Func_object__bool__o *v26; // x26
  const MethodInfo *v27; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *klass; // x25
  System_Func_object__bool__o *v29; // x26
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB2245 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, basePiece);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__, v9);
    sub_1C13D24(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v10);
    sub_1C13D24(&System_Func_IWarBoardObjectData__bool__TypeInfo, v11);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v12);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v13);
    byte_4BB2245 = 1;
  }
  v14 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = routeDataList,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)routeDataList, v17, v18, v19, v20, v21, v22),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_332B578 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v24,
          (const MethodInfo_32D0CD4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v24,
        !Item) )
  {
    sub_1C13F80(dicUniqueKeyTarget, v16);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v26 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v26,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v27);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v29 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    klass,
    (System_Func_IWarBoardObjectData__bool__o *)v29,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v30);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].klass,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v31);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v24;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C13F80(this, method);
  return (float)npcData->fields.lowerThinkingValue / 100.0;
}


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
  if ( (byte_4BB224C & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, basePiece);
    byte_4BB224C = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1C13F80(this, basePiece);
  }
  return 0;
}


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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  WarBoardPieceData_o *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  WarBoardPieceData_o **v26; // x25
  bool v27; // w8
  const MethodInfo *v28; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v30; // x21
  __int64 v31; // x8

  if ( (byte_4BB2250 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece);
    sub_1C13D24(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v15);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v16);
    byte_4BB2250 = 1;
  }
  v17 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = actionPiece;
  v26 = (WarBoardPieceData_o **)(v17 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)actionPiece, v20, v21, v22, v23, v24, v25);
  Instance = *(WarBoardPieceData_o **)(v17 + 16);
  if ( !Instance )
    goto LABEL_25;
  v27 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v27 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v26;
  if ( !*v26 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < requiredCost + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v26,
                              v28);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v26;
  if ( !*v26 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v26;
  if ( !*v26 )
LABEL_25:
    sub_1C13F80(Instance, v19);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v30 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v17,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0LL);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__49985748(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v30,
                                        (const MethodInfo_2FAB8D4 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v31 = *(_QWORD *)(v17 + 16);
    if ( v31 )
    {
      if ( *(_DWORD *)(v31 + 36) > (int)Instance )
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


bool __fastcall WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned int v11; // w20
  char v12; // w21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  void *monitor; // x9
  __int64 v17; // x26
  __int64 v18; // x28
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-80h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4BB2242 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C13D24(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v10);
    byte_4BB2242 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_1C13F80(shortestEnemyRoute, piecePlaceData);
  v11 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v12 = 0;
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C13F80(v13, v14);
    monitor = v21.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v11 )
    {
LABEL_16:
      v12 = 0;
      break;
    }
    if ( (unsigned int)v21.fields._current[1].monitor <= (unsigned __int64)v11 )
LABEL_18:
      sub_1C13F88(v13, v14);
    v17 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v18 = v11;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1C13F80(v13, v14);
      v13 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v18),
              (const MethodInfo_32B3CCC *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v13 )
        break;
      if ( v17 == v18 )
        goto LABEL_16;
      if ( ++v18 >= (unsigned __int64)LODWORD(current[1].monitor) )
        goto LABEL_18;
    }
    v12 = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0

  if ( (byte_4BB223F & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_4BB223F = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1C13F80(v7, *(_QWORD *)&index);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  unsigned int v15; // w28
  char v16; // w22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  unsigned int monitor; // w10
  unsigned int v23; // w9
  int v24; // w11
  int v25; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+50h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4BB2241 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v11);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v13);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14);
    byte_4BB2241 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  memset(&v29, 0, sizeof(v29));
  if ( !v6 )
    sub_1C13F80(allShortestRoute, *(_QWORD *)&index);
  v15 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v16 = 0;
  v29 = v27;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v29,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v29.fields._current.fields.value )
      sub_1C13F80(v17, v18);
    klass = v29.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1C13F80(0LL, v18);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields._dictionary;
    v28.fields._current = v27.fields._current.fields.key;
    do
    {
LABEL_9:
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v20 )
      {
        v25 = 4;
        goto LABEL_20;
      }
      if ( !v28.fields._current )
        sub_1C13F80(v20, v21);
      monitor = (unsigned int)v28.fields._current[1].monitor;
      v23 = monitor - 1;
    }
    while ( (int)(monitor - 1) <= (int)v15 );
    if ( v15 > monitor )
      monitor = !isDefenseSquare;
    v24 = !isDefenseSquare;
    while ( 1 )
    {
      if ( monitor == v24 )
        sub_1C13F88(v20, v21);
      if ( *((_DWORD *)&v28.fields._current[2].klass + v24) == index )
        break;
      if ( v23 == ++v24 )
        goto LABEL_9;
    }
    v16 = 1;
    v25 = 11;
LABEL_20:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v25 | 4) != 4 )
      goto LABEL_26;
  }
  v25 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v29,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v16 & (v25 == 11);
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
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned int v10; // w24
  _BOOL8 v11; // x0
  __int64 v12; // x1
  bool v13; // w20
  unsigned int monitor; // w10
  unsigned int v15; // w9
  unsigned int v16; // w11
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4BB2240 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C13D24(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v9);
    byte_4BB2240 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v6 )
    sub_1C13F80(shortestEnemyRoute, *(_QWORD *)&index);
  v10 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v20 = v19;
  do
  {
LABEL_5:
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v13 = v11;
    if ( !v11 )
    {
      v17 = 10;
      goto LABEL_16;
    }
    if ( !v20.fields._current )
      sub_1C13F80(v11, v12);
    monitor = (unsigned int)v20.fields._current[1].monitor;
    v15 = monitor - 1;
  }
  while ( (int)(monitor - 1) <= (int)v10 );
  if ( v10 > monitor )
    monitor = v10;
  v16 = v10;
  while ( 1 )
  {
    if ( monitor == v16 )
      sub_1C13F88(v11, v12);
    if ( *((_DWORD *)&v20.fields._current[2].klass + (int)v16) == index )
      break;
    if ( v15 == ++v16 )
      goto LABEL_5;
  }
  v17 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v13 && v17 == 9;
}


bool __fastcall WarBoardAIRoute__IsDetour(
        System_Int32_array *route,
        System_Int32_array *blockPieces,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w0
  bool v19; // w0
  int v21; // w23
  System_Func_int__bool__o **v22; // x21
  System_Func_int__bool__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int v30; // w8

  if ( (byte_4BB223E & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, blockPieces);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v5);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v6);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v7);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v8);
    byte_4BB223E = 1;
  }
  v9 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C13F80(v10, v11);
  *(_QWORD *)(v9 + 16) = route;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)route, v12, v13, v14, v15, v16, v17);
  v18 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v9 + 16),
          (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v18 < 2 )
    return 0;
  *(_DWORD *)(v9 + 24) = 1;
  if ( v18 == 2 )
  {
    return 0;
  }
  else
  {
    v21 = v18 - 1;
    v22 = (System_Func_int__bool__o **)(v9 + 32);
    do
    {
      v23 = *v22;
      if ( !*v22 )
      {
        v23 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v23,
          (Il2CppObject *)v9,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0LL);
        *(_QWORD *)(v9 + 32) = v23;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)v23, v24, v25, v26, v27, v28, v29);
      }
      v19 = BasicHelper__Any_int__49783128(
              blockPieces,
              (System_Func_T__bool__o *)v23,
              (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
      if ( v19 )
        break;
      v30 = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 24) = v30;
    }
    while ( v30 < v21 );
  }
  return v19;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C13F80(this, method);
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
  __int64 v11; // x1
  WarBoardData_o *Square; // x0
  const MethodInfo *v13; // x1
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v16; // x25
  int32_t v17; // w22
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BB224F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, *(_QWORD *)&actionSquareIndex);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1C13D24(&WarBoardAIManager_TypeInfo, v11);
    byte_4BB224F = 1;
  }
  value = 0;
  ++*attackByLinkEnemy;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Square = (WarBoardData_o *)WarBoardAIManager__GetSquare(actionSquareIndex, *(const MethodInfo **)&actionSquareIndex);
  if ( !Square )
    goto LABEL_27;
  npcEntityDict = Square->fields.npcEntityDict;
  if ( !npcEntityDict )
    goto LABEL_27;
  entries = npcEntityDict->fields._entries;
  if ( (int)entries >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)entries )
        sub_1C13F88(Square, v13);
      if ( !piecePlaceData )
        break;
      v17 = *(&npcEntityDict->fields._count + v16);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v17,
             &value,
             (const MethodInfo_32B5178 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_36398148(Square, value, 1, v19);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL) )
          ++*attackByLinkAlly;
      }
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v18);
      if ( Square )
      {
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v13);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v16 >= (int)entries )
        return;
    }
LABEL_27:
    sub_1C13F80(Square, v13);
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
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardAIRoute_RouteData_o *v11; // x8
  struct WarBoardSquareData_o *actionSquare; // x9
  struct System_Int32_array *linkedSquares; // x26
  struct WarBoardPieceData_o *basePiece; // x22
  unsigned __int64 v15; // x27
  il2cpp_array_size_t max_length; // w8
  int32_t v17; // w25
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v20; // x23
  const MethodInfo *v21; // x2
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v31; // x1
  Il2CppClass **v32; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  WarBoardAIRoute_RouteData_o *v35; // x8
  int32_t v36; // w24
  int32_t ClassId; // w25

  if ( (byte_4BB2253 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1C13D24(&SvtClassAttri_TypeInfo, v9);
    this = (WarBoardAIRoute_o *)sub_1C13D24(&WarBoardAIManager_TypeInfo, v10);
    byte_4BB2253 = 1;
  }
  v11 = *routeData;
  if ( !*routeData
    || (actionSquare = v11->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_51:
    sub_1C13F80(this, routeData);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v11->fields.basePiece;
    v15 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v15 >= max_length )
        sub_1C13F88(this, routeData);
      v17 = linkedSquares->m_Items[v15 + 1];
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__CanAcquireItem(
                                    this,
                                    v17,
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
                                    v17,
                                    piecePlaceData,
                                    v18);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_51;
        moveByLinkedPiece = (System_Collections_Generic_List_object__o *)(*routeData)->fields.moveByLinkedPiece;
        v20 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_36396444((WarBoardData_o *)this, v17, v21);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v29 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v31 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v31;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v31, v22, v23, v24, v25, v26, v27);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v20, v33)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v20, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v20, v34);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v20, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v35 = *routeData;
              if ( !*routeData )
                goto LABEL_51;
              if ( (v35->fields.flagNow & 0x2000000) != 0 )
                goto LABEL_43;
              if ( !basePiece )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(basePiece, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v20, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v20->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v36 = (int)this;
                  ClassId = BattleServantData__getClassId(v20->fields._battleServant_k__BackingField, 0LL);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v36, ClassId, 0LL) > 1.0 )
                  {
                    v35 = *routeData;
                    if ( !*routeData )
                      goto LABEL_51;
LABEL_43:
                    v35->fields.flagNow |= 0x2000000uLL;
                  }
                }
              }
              if ( !*routeData )
                goto LABEL_51;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v20, 0LL);
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
      ++v15;
    }
    while ( (__int64)v15 < (int)max_length );
  }
}


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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x25
  __int64 v22; // x0
  __int64 v23; // x1
  System_Predicate_object__o *v24; // x24
  Il2CppObject *v25; // x0
  Il2CppClass *klass; // x8
  IWarBoardObjectData_o *v27; // x23
  __int64 v28; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  WarBoardAIRoute_TargetData_o *v31; // x22
  const MethodInfo *v32; // x4

  if ( (byte_4BB2234 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__,
      targetDic);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14);
    sub_1C13D24(&IWarBoardObjectData_TypeInfo, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v16);
    sub_1C13D24(&System_Predicate_IWarBoardObjectData__TypeInfo, v17);
    sub_1C13D24(&WarBoardAIRoute_TargetData_TypeInfo, v18);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v19);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v20);
    byte_4BB2234 = 1;
  }
  v21 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  *(_DWORD *)(v21 + 16) = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
         *(int *)(v21 + 16),
         (const MethodInfo_32D1898 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v24 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v21,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0LL);
  if ( !objectList )
LABEL_17:
    sub_1C13F80(v22, v23);
  v25 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v25 )
  {
    *notSquareTarget = 1;
    klass = v25->klass;
    v27 = (IWarBoardObjectData_o *)v25;
    v28 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v28;
        p_offset += 2;
        if ( !v28 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C65D04(v25, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(v27, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v31 = (WarBoardAIRoute_TargetData_o *)sub_1C13F70(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_36380984(v31, v27, trendKey, conditionId, v32);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v31,
        (const MethodInfo_32D1690 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_4BB2232 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId);
    byte_4BB2232 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1C13F80(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_3293730 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
  WarBoardAIRoute__AddPiecePersonalityDic(this, aiId, pieceIndex, v8);
}


System_Collections_Generic_Dictionary_int__uint__o *__fastcall WarBoardAIRoute__UpdatePiecePlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        WarBoardAIRoute_RouteData_o *routeData,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v13; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_4BB2251 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___77370144, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v11);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v12);
    byte_4BB2251 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_53162492(
    v13,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_32B31FC *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___77370144);
  if ( !routeData )
    goto LABEL_12;
  if ( (routeData->fields.flagNow & 0x4000000) != 0 )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v13 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v13,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_32B3ACC *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1C13F80(v14, v15);
  }
  if ( !v13 )
    goto LABEL_12;
  v14 = System_Collections_Generic_Dictionary_int__uint___Remove(
          v13,
          baseSquareIndex,
          (const MethodInfo_32B4E98 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v13,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_32B3ACC *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v13;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
  if ( (byte_4BB2256 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, x);
    byte_4BB2256 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C13F80)(this, x);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  struct System_Collections_Generic_List_int____o **p_replaceDataList; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t Instance; // x0
  int64_t v20; // x1
  const MethodInfo *v21; // x4
  System_Int32_array *v22; // x8
  unsigned int v23; // w9
  unsigned int max_length; // w10
  unsigned int v25; // w23
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w25
  int32_t v28; // w24
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int v35; // w8
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB2272 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, *(_QWORD *)&forceId);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_4BB2272 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_BF7480;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v11;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_replaceDataList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = *(_QWORD *)(Instance + 440);
  if ( !Instance )
    goto LABEL_20;
  Instance = WarBoardData__IsDefenseTarget((WarBoardData_o *)Instance, &data, forceId, groupId, v21);
  if ( (Instance & 1) == 0 )
    return;
  v22 = data;
  if ( !data )
LABEL_20:
    sub_1C13F80(Instance, v20);
  v23 = 0;
  while ( 1 )
  {
    max_length = v22->max_length;
    if ( (int)v23 >= (int)max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_22;
    v25 = v23 + 1;
    if ( v23 + 1 >= max_length )
      goto LABEL_22;
    v26 = (System_Collections_Generic_List_object__o *)*p_replaceDataList;
    v27 = v22->m_Items[v23 + 1];
    v28 = v22->m_Items[v25 + 1];
    Instance = sub_1C13DCC(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_20;
    v35 = *(_DWORD *)(Instance + 24);
    v20 = Instance;
    if ( !v35 || (*(_DWORD *)(Instance + 32) = v27, v35 == 1) )
LABEL_22:
      sub_1C13F88(Instance, v20);
    *(_DWORD *)(Instance + 36) = v28;
    if ( v26 )
    {
      items = v26->fields._items;
      v37 = Method_System_Collections_Generic_List_int____Add__;
      ++v26->fields._version;
      if ( items )
      {
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)Instance,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v20;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v39 + 4), v20, v29, v30, v31, v32, v33, v34);
        }
        v22 = data;
        v23 = v25 + 1;
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
  void *replaceDataList; // x0
  uint32_t uniqueIndex_k__BackingField; // w8
  int32_t v10; // w22
  int32_t replacePriority; // w8
  __int64 v12; // x8
  unsigned int v13; // w8
  int32_t v14; // w8
  int32_t v15; // w8

  if ( (byte_4BB2273 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____get_Item__, v7);
    byte_4BB2273 = 1;
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
      v10 = 0;
      do
      {
        if ( v10 >= *((_DWORD *)replaceDataList + 6) )
          return;
        replacePriority = this->fields.replacePriority;
        if ( replacePriority != -1 && replacePriority < v10 )
          return;
        replaceDataList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)replaceDataList,
                            v10,
                            (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_int____get_Item__);
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
            this->fields.replacePriority = v10;
            goto LABEL_34;
          }
        }
        if ( type != 2 || pieceData == 0LL )
        {
          if ( type == 1 )
          {
            if ( !replaceDataList )
              break;
            v12 = *((_QWORD *)replaceDataList + 3);
            if ( !(_DWORD)v12 )
              goto LABEL_36;
            if ( *((_DWORD *)replaceDataList + 8) == 1 )
            {
              this->fields.masterType = 1;
              if ( (unsigned int)v12 <= 1 )
LABEL_36:
                sub_1C13F88(replaceDataList, *(_QWORD *)&type);
              v15 = *((_DWORD *)replaceDataList + 9);
              this->fields.replacePriority = v10;
              this->fields.masterSquareIndex = v15;
              return;
            }
          }
        }
        else
        {
          if ( !replaceDataList )
            break;
          v13 = *((_DWORD *)replaceDataList + 6);
          if ( !v13 )
            goto LABEL_36;
          if ( *((_DWORD *)replaceDataList + 8) == 2 )
          {
            if ( v13 <= 1 )
              goto LABEL_36;
            v14 = *((_DWORD *)replaceDataList + 9);
            if ( v14 == pieceData->fields._index_k__BackingField )
            {
              this->fields.masterPieceIndex = v14;
              this->fields.masterType = 2;
              goto LABEL_33;
            }
          }
        }
        replaceDataList = this->fields.replaceDataList;
        ++v10;
      }
      while ( replaceDataList );
    }
LABEL_28:
    sub_1C13F80(replaceDataList, *(_QWORD *)&type);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_T__TResult__o *v28; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  WarBoardActionTrendEntity_array *v32; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v34; // x23
  System_Collections_Generic_List_object__o *v35; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v36; // x22
  const MethodInfo *v37; // x2
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
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BB2261 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v10);
    sub_1C13D24(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v11);
    byte_4BB2261 = 1;
  }
  condType = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v12;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (int64_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)entity, v20, v21, v22, v23, v24, v25);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v26);
  v28 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v28,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    0LL);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                           ConditionEntityArray,
                                                           (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v28,
                                                           &condType,
                                                           0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_20;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0LL)) == 0LL )
  {
LABEL_20:
    sub_1C13F80(HasMatchCondition, v30);
  }
  v31 = *(_QWORD *)&HasMatchCondition->max_length;
  v32 = HasMatchCondition;
  if ( (int)v31 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v31; ++i )
    {
      if ( i >= (unsigned int)v31 )
        sub_1C13F88(HasMatchCondition, v30);
      v34 = v32->m_Items[i];
      if ( v34 )
      {
        v35 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v36 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C13F70(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v36, v34, v37);
        if ( !v35 )
          goto LABEL_20;
        items = v35->fields._items;
        v45 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v35->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v35->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            (Il2CppObject *)v36,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v35->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v36;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v36, v38, v39, v40, v41, v42, v43);
        }
      }
      LODWORD(v31) = v32->max_length;
    }
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_ActionTrendInfo_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyOrganizationUtility_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v12; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v14; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  v2 = this;
  if ( (byte_4BB2260 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v4);
    sub_1C13D24(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v6);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C13D24(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v7);
    byte_4BB2260 = 1;
  }
  p_conditionEntityArray = (PartyOrganizationUtility_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1C13F80(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v12 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v12 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    _9__8_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v14,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0LL);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2FBE434 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v23 = BasicHelper__ExcludeNull_object_(
            v22,
            (const MethodInfo_2F7AD2C *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                             (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (PartyOrganizationUtility_c *)conditionEntityArray;
    sub_1C13CC8(p_conditionEntityArray, (int64_t)conditionEntityArray, v24, v25, v26, v27, v28, v29);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB2262 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1);
    byte_4BB2262 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4BB2263 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v5);
    byte_4BB2263 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1C13F80(0LL, v7);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_3238624 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_Dictionary_int__object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_Dictionary_int__object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4BB226B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v3);
    byte_4BB226B = 1;
  }
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v4;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicClassAdvantageServant,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v11;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicClassDisAdvantageServant,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v18;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicAttackAdvantageServant,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v25;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicAttackDisAdvantageServant,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v32;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicDefenseAdvantageServant,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v39;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicDefenseDisAdvantageServant,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB226C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v3);
    byte_4BB226C = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BB225A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v5);
    byte_4BB225A = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v6;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.ratingOffsetList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  PartyOrganizationUtility_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v10; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v12; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_TSource__o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BB2257 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_1C13D24(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v5);
    sub_1C13D24(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v6);
    byte_4BB2257 = 1;
  }
  p_attackOffset = (PartyOrganizationUtility_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__4_0 = (System_Func_object__bool__o *)v10->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__4_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v12,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v21 = System_Linq_Enumerable__ToList_object_(
            v20,
            (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (PartyOrganizationUtility_c *)v21;
    sub_1C13CC8(p_attackOffset, (int64_t)v21, v22, v23, v24, v25, v26, v27);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB2259 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4BB2259 = 1;
  }
  v3 = sub_1C13F70(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v3;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  PartyOrganizationUtility_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v10; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v12; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_TSource__o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BB2258 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_1C13D24(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v5);
    sub_1C13D24(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v6);
    byte_4BB2258 = 1;
  }
  p_moveOffset = (PartyOrganizationUtility_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v10->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v12,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v21 = System_Linq_Enumerable__ToList_object_(
            v20,
            (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (PartyOrganizationUtility_c *)v21;
    sub_1C13CC8(p_moveOffset, (int64_t)v21, v22, v23, v24, v25, v26, v27);
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
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_object__o *actionTrandList; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v8; // x9
  __int128 v9; // q0
  PartyOrganizationUtility_o *p__7__wrap1; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v17; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v20; // x9
  __int128 v21; // q0
  PartyOrganizationUtility_o *p__7__wrap3; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  bool v36; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v37; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  bool v54; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v55; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v56; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v57; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v65; // x8
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+20h] [xbp-50h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v68; // [xsp+48h] [xbp-28h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v69; // [xsp+58h] [xbp-18h] BYREF

  v69 = this;
  v2 = this;
  if ( (byte_4BB225C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v3);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1C13D24(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v4);
    byte_4BB225C = 1;
  }
  v68 = &v69;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
    goto LABEL_12;
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_1C13F80(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1C13F80(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v66,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v20 = v69;
    v21 = *(_OWORD *)&v66.fields._list;
    p__7__wrap3 = (PartyOrganizationUtility_o *)&v69->fields.__7__wrap3;
    v67 = v66;
    v69->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v66.fields._current;
    *(_OWORD *)&v20->fields.__7__wrap3.fields._list = v21;
    sub_1C13CC8(p__7__wrap3, 0LL, v23, v24, v25, v26, v27, v28);
    v2 = v69;
LABEL_12:
    v2->fields.__1__state = -4;
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v37 = v69;
    if ( v36 )
    {
      current = v69->fields.__7__wrap3.fields._current;
      v69->fields.__2__current = current;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v37->fields.__2__current,
        (int64_t)current,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      result = 1;
      v69->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v69, v29);
    v40 = v69;
    *(_OWORD *)&v69->fields._trendInfo_5__3 = 0u;
    v40 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v40 + 72);
    *(_OWORD *)&v40->fields.__1__state = 0u;
    sub_1C13CC8((PartyOrganizationUtility_o *)v40, 0LL, v41, v42, v43, v44, v45, v46);
    v17 = v69;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C13F80(this, method);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    &v66,
    actionTrandList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v8 = v69;
  v9 = *(_OWORD *)&v66.fields._list;
  p__7__wrap1 = (PartyOrganizationUtility_o *)&v69->fields.__7__wrap1;
  v67 = v66;
  v69->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v66.fields._current;
  *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
  sub_1C13CC8(p__7__wrap1, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = v69;
  v69->fields.__1__state = -3;
LABEL_15:
  v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v17->fields.__7__wrap1,
          (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v55 = v69;
  if ( v54 )
  {
    v56 = v69->fields.__7__wrap1.fields._current;
    v69->fields._trendInfo_5__3 = v56;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v55->fields._trendInfo_5__3, (int64_t)v56, v48, v49, v50, v51, v52, v53);
    v57 = v69;
    v58 = v69->fields._trendInfo_5__3;
    v69->fields.__2__current = v58;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v57->fields.__2__current, (int64_t)v58, v59, v60, v61, v62, v63, v64);
    result = 1;
    v69->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v69, v47);
    v65 = v69;
    result = 0;
    v69->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v65->fields.__7__wrap1.fields._index = 0LL;
    v65->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB225F & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4BB225F = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C13F70(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v4;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  if ( (byte_4BB225D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4BB225D = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB225E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4BB225E = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB225B & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1);
    byte_4BB225B = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BB226D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v3);
    byte_4BB226D = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_32D0CD4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v11,
    (const MethodInfo_32D0CD4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v11;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicObjectPutSquareIndex,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v18,
    (const MethodInfo_32D0CD4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v18;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dicIndividualityPutSqareIndex,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB2266 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method);
    byte_4BB2266 = 1;
  }
  this->fields.flagNow = 1LL;
  v3 = (Il2CppObject *)sub_1C13F70(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v3;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.evalOffsetMagnification, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_Decimal_c *v5; // x8
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  const MethodInfo *v7; // x1
  System_Decimal_o *v8; // x20
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o *flagNow_low; // x8
  const MethodInfo *v11; // x1
  System_Decimal_o *v12; // x8
  System_Decimal_o *MoveValue; // x22
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o *v15; // x23
  System_Decimal_o *Value; // x24
  System_Decimal_c *v17; // x0
  System_Decimal_o *AttackValue; // x22
  int32_t attackEvalOffsetAddValue; // w24
  System_Decimal_o *v20; // x1
  System_Decimal_o *v21; // x23
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v23; // x8
  System_Decimal_o *v24; // x0
  System_Decimal_o *v25; // x1
  System_Decimal_o *v26; // x0
  System_Decimal_o *v27; // x1
  System_Decimal_o *v28; // x8
  System_Decimal_o *v29; // x0
  System_Decimal_o *v30; // x8
  System_Decimal_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_4BB2268 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&System_Decimal_TypeInfo, v3);
    byte_4BB2268 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = System_Decimal_TypeInfo;
  WarBoardEvalFactorsAffectRatio = v4->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v8 = System_Decimal__op_Implicit_64175932((System_Decimal_o *)v5, WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1C13F80(0LL, v7);
  flagNow_low = (System_Decimal_o *)LOBYTE(this->fields.flagNow);
  if ( ((unsigned __int8)flagNow_low & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
                    flagNow_low,
                    evalOffsetMagnification,
                    v7);
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v21 = v20;
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
                  flagNow_low,
                  evalOffsetMagnification,
                  v7);
    futureEvalOffsetMag = this->fields.futureEvalOffsetMag;
    v15 = (System_Decimal_o *)v11;
    if ( futureEvalOffsetMag )
    {
      Value = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(v12, futureEvalOffsetMag, v11);
      v17 = System_Decimal_TypeInfo;
    }
    else
    {
      v17 = System_Decimal_TypeInfo;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v17 = System_Decimal_TypeInfo;
      }
      Value = *(System_Decimal_o **)v17->static_fields;
    }
    v23 = (System_Decimal_o *)v17->_2.cctor_finished;
    if ( !(_DWORD)v23 )
      j_il2cpp_runtime_class_init_0(v17);
    v24 = System_Decimal__op_Addition(v23, MoveValue, v15, (const MethodInfo *)Value);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    AttackValue = v24;
    v21 = v25;
  }
  v26 = System_Decimal__op_Implicit_64175932(cctor_finished, attackEvalOffsetAddValue, 0LL);
  v29 = System_Decimal__op_Division(v28, v26, v27, (const MethodInfo *)v8);
  v31 = System_Decimal__op_Addition(v30, AttackValue, v21, (const MethodInfo *)v29);
  this->fields.evalValue = System_Decimal__op_Explicit_64176436(v31, v32);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_36396656(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4BB2265 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method);
    byte_4BB2265 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 methodPtr_low; // x9
  WarBoardAIRoute_RouteData_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4BB2267 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_RouteData_TypeInfo, method);
    byte_4BB2267 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_RouteData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1C14240(result);
      WarBoardAIRoute_RouteData__CalcEvalValue(v5, v6);
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
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v5; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BB2264 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v3);
    byte_4BB2264 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (PartyOrganizationUtility_o *)&this->fields.futureLookingTrendHashSet;
  v5 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v5 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v5,
      (const MethodInfo_34E66FC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (PartyOrganizationUtility_c *)v5;
    sub_1C13CC8(p_futureLookingTrendHashSet, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v5;
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
  float warAttack; // s8
  float benAttack; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4BB2269 & 1) == 0 )
  {
    sub_1C13D24(&System_Decimal_TypeInfo, method);
    byte_4BB2269 = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, warAttack + benAttack, 0LL);
}


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        System_Decimal_o *retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warMove; // s8
  float benMove; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4BB226A & 1) == 0 )
  {
    sub_1C13D24(&System_Decimal_TypeInfo, method);
    byte_4BB226A = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
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


void __fastcall WarBoardAIRoute_TargetData___ctor_36379528(
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
  sub_1C13CC8((PartyOrganizationUtility_o *)v8, (int64_t)targetSquare, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_36380984(
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
  sub_1C13CC8(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_36391400(
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
    sub_1C13F80(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1C13CC8(
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
  sub_1C13CC8(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_36393408(
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
  sub_1C13CC8(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_36406676(
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
  Il2CppObject *v2; // x19
  WarBoardAIRoute_TargetData_o *result; // x0
  __int64 methodPtr_low; // x9

  v2 = (Il2CppObject *)b;
  if ( (byte_4BB226E & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1C13D24(&WarBoardAIRoute_TargetData_TypeInfo, method);
    byte_4BB226E = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1C13F80(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_TargetData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1C14240(result);
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
  __int64 v10; // x1
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v12; // x9
  __int64 methodPtr_low; // x10
  struct IWarBoardObjectData_o *v14; // x11
  int64_t v15; // x1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct IWarBoardObjectData_o *v23; // x8
  WarBoardItemData_c *v24; // x9
  __int64 v25; // x10
  struct IWarBoardObjectData_o *v26; // x11
  int64_t v27; // x1
  struct WarBoardItemData_o **p_targetItem; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct IWarBoardObjectData_o *v35; // x8
  WarBoardTreasureData_c *v36; // x9
  __int64 v37; // x10
  struct IWarBoardObjectData_o *v38; // x11
  int64_t v39; // x1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_4BB2270 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardItemData_TypeInfo, method);
    sub_1C13D24(&WarBoardPieceData_TypeInfo, v9);
    sub_1C13D24(&WarBoardTreasureData_TypeInfo, v10);
    byte_4BB2270 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    v12 = WarBoardPieceData_TypeInfo;
    methodPtr_low = LOBYTE(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPieceData_TypeInfo )
        v14 = this->fields.targetObject;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    this->fields.targetPiece = (struct WarBoardPieceData_o *)v14;
    p_targetPiece = &this->fields.targetPiece;
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == v12 )
        v15 = (int64_t)targetObject;
      else
        v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
    this->fields.targetPiece = 0LL;
    p_targetPiece = &this->fields.targetPiece;
  }
  sub_1C13CC8((PartyOrganizationUtility_o *)p_targetPiece, v15, v2, v3, v4, v5, v6, v7);
  v23 = this->fields.targetObject;
  if ( v23 )
  {
    v24 = WarBoardItemData_TypeInfo;
    v25 = LOBYTE(WarBoardItemData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable[0].methodPtr) >= (unsigned int)v25 )
    {
      if ( (WarBoardItemData_c *)v23->klass->_2.typeHierarchy[v25 - 1] == WarBoardItemData_TypeInfo )
        v26 = this->fields.targetObject;
      else
        v26 = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    this->fields.targetItem = (struct WarBoardItemData_o *)v26;
    p_targetItem = &this->fields.targetItem;
    if ( LOBYTE(v23->klass->vtable[0].methodPtr) >= (unsigned int)v25 )
    {
      if ( (WarBoardItemData_c *)v23->klass->_2.typeHierarchy[v25 - 1] == v24 )
        v27 = (int64_t)v23;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
  }
  else
  {
    v27 = 0LL;
    this->fields.targetItem = 0LL;
    p_targetItem = &this->fields.targetItem;
  }
  sub_1C13CC8((PartyOrganizationUtility_o *)p_targetItem, v27, v17, v18, v19, v20, v21, v22);
  v35 = this->fields.targetObject;
  if ( v35 )
  {
    v36 = WarBoardTreasureData_TypeInfo;
    v37 = LOBYTE(WarBoardTreasureData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v35->klass->vtable[0].methodPtr) >= (unsigned int)v37 )
    {
      if ( (WarBoardTreasureData_c *)v35->klass->_2.typeHierarchy[v37 - 1] == WarBoardTreasureData_TypeInfo )
        v38 = this->fields.targetObject;
      else
        v38 = 0LL;
    }
    else
    {
      v38 = 0LL;
    }
    this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v38;
    p_targetTreasure = &this->fields.targetTreasure;
    if ( LOBYTE(v35->klass->vtable[0].methodPtr) >= (unsigned int)v37 )
    {
      if ( (WarBoardTreasureData_c *)v35->klass->_2.typeHierarchy[v37 - 1] == v36 )
        v39 = (int64_t)v35;
      else
        v39 = 0LL;
    }
    else
    {
      v39 = 0LL;
    }
  }
  else
  {
    v39 = 0LL;
    this->fields.targetTreasure = 0LL;
    p_targetTreasure = &this->fields.targetTreasure;
  }
  sub_1C13CC8((PartyOrganizationUtility_o *)p_targetTreasure, v39, v29, v30, v31, v32, v33, v34);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  WarBoardAIRoute_TargetData_o *v20; // x25
  IWarBoardObjectData_c *klass; // x8
  __int64 v22; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  __int64 squareIndex_k__BackingField; // x0
  int32_t nowSquareIndex; // w24
  struct System_Int32_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  WarBoardAIRoute_TargetData___c_c *v35; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v37; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v39; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Int32_array *v48; // x0
  const MethodInfo *v49; // x2
  bool IsDetour; // w0
  const MethodInfo *v51; // x5
  int32_t v52; // w23
  struct System_Int32_array *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int32_t v60; // w0
  struct IWarBoardObjectData_o *v61; // x21
  WarBoardAIRoute_TargetData_o *v62; // x22
  IWarBoardObjectData_c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  struct WarBoardSquareData_o *v67; // x8

  if ( (byte_4BB226F & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, baseTargetData);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1C13D24(&System_Func_WarBoardPieceData__int__TypeInfo, v13);
    sub_1C13D24(&IWarBoardObjectData_TypeInfo, v14);
    sub_1C13D24(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v15);
    sub_1C13D24(&WarBoardAIRoute_TargetData___c_TypeInfo, v16);
    byte_4BB226F = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
    v20 = this;
  else
    v20 = 0LL;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v22 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v22;
        p_offset += 2;
        if ( !v22 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                    targetObject,
                                    *(_QWORD *)(p_method + 8));
    if ( !v20 )
LABEL_49:
      sub_1C13F80(squareIndex_k__BackingField, v17);
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = (unsigned int)targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v20 = this;
    if ( !this )
      goto LABEL_49;
  }
  v20->fields.nowSquareIndex = squareIndex_k__BackingField;
  nowSquareIndex = this->fields.nowSquareIndex;
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v28 = AStarSearch__RouteSearch(0LL, baseSquareIndex, nowSquareIndex, 0, 0LL, v18);
  this->fields.baseRoute = v28;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseRoute, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v35 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  v37 = piece;
  _9__7_0 = (System_Func_object__int__o *)v35->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = WarBoardAIRoute_TargetData___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v35->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v39, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0LL);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v41, v42, v43, v44, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v48 = System_Linq_Enumerable__ToArray_int_(
          v47,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v48, v49);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v52 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v53 = AStarSearch__RouteSearch(v37, baseSquareIndex, v52, 1, 0LL, v51);
    this->fields.detourRoute = v53;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.detourRoute, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  }
  v60 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
  v61 = this->fields.targetObject;
  this->fields.isAround = v60 == 2;
  if ( v61 )
    v62 = this;
  else
    v62 = 0LL;
  if ( v61 )
  {
    v63 = v61->klass;
    v64 = *(unsigned __int16 *)(&v61->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v61->klass->_2.bitflags2 + 3) )
    {
      v65 = &v63->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v65 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_39;
      }
      v66 = (__int64)&v63->vtable[*v65].method;
    }
    else
    {
LABEL_39:
      v66 = sub_1C65D04(v61, IWarBoardObjectData_TypeInfo, 0LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v66)(
                                    v61,
                                    *(_QWORD *)(v66 + 8));
    if ( !v62 )
      goto LABEL_49;
  }
  else
  {
    v67 = this->fields.targetSquare;
    if ( v67 )
      squareIndex_k__BackingField = (unsigned int)v67->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v62 = this;
    if ( !this )
      goto LABEL_49;
  }
  v62->fields.putSquareIndex = squareIndex_k__BackingField;
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB2271 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute_TargetData___c_TypeInfo, v1);
    byte_4BB2271 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v8; // x20
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v97; // x1
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v105; // x0
  WarBoardAIRoute_o *v106; // x0
  __int64 v107; // x1
  const MethodInfo *v108; // x6
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v111; // x9
  int32_t v112; // w10
  int32_t v113; // w20
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  const MethodInfo *v116; // x2
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *v118; // x1
  const MethodInfo *v119; // x3
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  PartyOrganizationUtility_o *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  __int64 v135; // x0
  __int64 v136; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v139; // x0
  __int64 v140; // x1
  const MethodInfo *v141; // x4
  WarBoardAIRoute__CreateRouteData_d__47_o *v142; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v145; // x9
  int32_t v146; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  __int64 v155; // x0
  __int64 v156; // x1
  const MethodInfo *v157; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v158; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v162; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v163; // x8
  __int128 v164; // q0
  PartyOrganizationUtility_o *p__7__wrap8; // x0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  const MethodInfo *v172; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v174; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  const MethodInfo *v182; // x1
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v184; // x0
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  const MethodInfo *v192; // x1
  WarBoardPieceData_o *PieceUnique; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  __int64 v200; // x0
  __int64 v201; // x1
  const MethodInfo *v202; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v203; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v205; // x9
  int64_t v206; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v207; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v209; // x23
  System_Func_object__bool__o *v210; // x22
  __int64 v211; // x1
  int32_t v212; // w8
  System_Collections_Generic_List_object__o *v213; // x0
  WarBoardAIRoute_o *Only; // x0
  __int64 v215; // x1
  const MethodInfo *v216; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v217; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v219; // x1
  const MethodInfo *v220; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v221; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v222; // x9
  _BOOL8 IsActable; // x0
  __int64 v224; // x1
  const MethodInfo *v225; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v226; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v228; // x0
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  __int64 v235; // x0
  __int64 v236; // x1
  const MethodInfo *v237; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v238; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_36393520; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v240; // x0
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v247; // x1
  const MethodInfo *v248; // x5
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v250; // x0
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v257; // x0
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  __int64 v264; // x0
  __int64 v265; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v266; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v269; // x1
  const MethodInfo *v270; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v271; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v273; // x0
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  const MethodInfo *v280; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v282; // x0
  __int64 v283; // x0
  __int64 v284; // x1
  const MethodInfo *v285; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v286; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v287; // x9
  struct WarBoardPieceData_o *v288; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v289; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v292; // x12
  System_Collections_Generic_HashSet_T__o *v293; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v294; // x0
  int64_t v295; // x2
  int32_t v296; // w3
  System_String_o *v297; // x4
  BattleSetupInfo_o *v298; // x5
  FollowerInfo_o *v299; // x6
  PartyListViewItem_o *v300; // x7
  System_Collections_Generic_HashSet_T__o *v301; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v302; // x0
  int64_t v303; // x2
  int32_t v304; // w3
  System_String_o *v305; // x4
  BattleSetupInfo_o *v306; // x5
  FollowerInfo_o *v307; // x6
  PartyListViewItem_o *v308; // x7
  __int64 v309; // x1
  System_Collections_Generic_List_object__o *v310; // x0
  _BOOL8 v311; // x0
  __int64 v312; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v315; // x10
  struct WarBoardPieceData_o *v316; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v318; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v319; // x10
  struct WarBoardPieceData_o *v320; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v322; // x0
  __int64 v323; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v324; // x8
  int32_t v325; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v326; // x20
  WarBoardAIRoute___c_c *v327; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v329; // x22
  struct WarBoardAIRoute___c_StaticFields *v330; // x0
  int64_t v331; // x2
  int32_t v332; // w3
  System_String_o *v333; // x4
  BattleSetupInfo_o *v334; // x5
  FollowerInfo_o *v335; // x6
  PartyListViewItem_o *v336; // x7
  __int64 v337; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v338; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v339; // x0
  __int64 Count; // x0
  __int64 v341; // x1
  struct WarBoardStageNpcEntity_o *v342; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v343; // x11
  float v344; // s0
  int32_t v345; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v347; // x8
  __int64 v348; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v351; // x1
  PartyOrganizationUtility_o *v352; // x0
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  __int64 *v359; // x19
  __int64 v360; // x8
  __int64 v361; // x9
  int *v362; // x10
  __int64 v363; // x0
  __int64 v364; // x0
  __int64 *v365; // x19
  __int64 v366; // x8
  __int64 v367; // x9
  int *v368; // x10
  __int64 v369; // x0
  PartyOrganizationUtility_o *p__7__wrap24; // x0
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  Il2CppObject *v377; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v378; // x0
  int64_t v379; // x2
  int32_t v380; // w3
  System_String_o *v381; // x4
  BattleSetupInfo_o *v382; // x5
  FollowerInfo_o *v383; // x6
  PartyListViewItem_o *v384; // x7
  __int64 v385; // x1
  WarBoardSquareData_o *v386; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v388; // x0
  int64_t v389; // x2
  int32_t v390; // w3
  System_String_o *v391; // x4
  BattleSetupInfo_o *v392; // x5
  FollowerInfo_o *v393; // x6
  PartyListViewItem_o *v394; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v395; // x8
  int v396; // w9
  __int64 v397; // x21
  __int64 v398; // x0
  __int64 v399; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v400; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v402; // x27
  WarBoardAIRoute_RouteData_o *v403; // x20
  const MethodInfo *v404; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v405; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v407; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v408; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v410; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v412; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int64_t v414; // x2
  int32_t v415; // w3
  System_String_o *v416; // x4
  BattleSetupInfo_o *v417; // x5
  FollowerInfo_o *v418; // x6
  PartyListViewItem_o *v419; // x7
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v421; // x24
  struct WarBoardAIRoute___c_StaticFields *v422; // x0
  int64_t v423; // x2
  int32_t v424; // w3
  System_String_o *v425; // x4
  BattleSetupInfo_o *v426; // x5
  FollowerInfo_o *v427; // x6
  PartyListViewItem_o *v428; // x7
  __int64 v429; // x1
  int64_t v430; // x2
  int32_t v431; // w3
  System_String_o *v432; // x4
  BattleSetupInfo_o *v433; // x5
  FollowerInfo_o *v434; // x6
  PartyListViewItem_o *v435; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v436; // x20
  WarBoardAIRoute_RouteData_o *v437; // x0
  struct WarBoardSquareData_o *v438; // x1
  __int64 v439; // x0
  __int64 v440; // x1
  int64_t v441; // x2
  int32_t v442; // w3
  System_String_o *v443; // x4
  BattleSetupInfo_o *v444; // x5
  FollowerInfo_o *v445; // x6
  PartyListViewItem_o *v446; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v447; // x8
  WarBoardAIRoute_RouteData_o *v448; // x0
  struct WarBoardPieceData_o *v449; // x1
  __int64 v450; // x1
  int64_t v451; // x2
  int32_t v452; // w3
  System_String_o *v453; // x4
  BattleSetupInfo_o *v454; // x5
  FollowerInfo_o *v455; // x6
  PartyListViewItem_o *v456; // x7
  WarBoardAIRoute_RouteData_o *v457; // x0
  const MethodInfo *v458; // x1
  WarBoardAIRoute_RouteData_o *v459; // x22
  int32_t v460; // w23
  WarBoardSquareData_o *v461; // x0
  int64_t v462; // x2
  int32_t v463; // w3
  System_String_o *v464; // x4
  BattleSetupInfo_o *v465; // x5
  FollowerInfo_o *v466; // x6
  PartyListViewItem_o *v467; // x7
  __int64 v468; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v470; // x19
  __int64 v471; // x1
  const MethodInfo *v472; // x4
  System_Collections_Generic_Dictionary_uint__int__o *v473; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v475; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v476; // x8
  WarBoardAIRoute_RouteData_o *v477; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  __int64 v479; // x1
  int64_t v480; // x2
  int32_t v481; // w3
  System_String_o *v482; // x4
  BattleSetupInfo_o *v483; // x5
  FollowerInfo_o *v484; // x6
  PartyListViewItem_o *v485; // x7
  WarBoardAIRoute_o *v486; // x0
  WarBoardPieceData_o *v487; // x1
  const MethodInfo *v488; // x4
  WarBoardAIRoute_RouteData_o *v489; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int64_t v491; // x2
  int32_t v492; // w3
  System_String_o *v493; // x4
  BattleSetupInfo_o *v494; // x5
  FollowerInfo_o *v495; // x6
  PartyListViewItem_o *v496; // x7
  PartyOrganizationUtility_o *p_actionPiece; // x0
  __int64 v498; // x1
  int64_t v499; // x2
  const MethodInfo *v500; // x3
  System_String_o *v501; // x4
  BattleSetupInfo_o *v502; // x5
  FollowerInfo_o *v503; // x6
  PartyListViewItem_o *v504; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v505; // x8
  struct WarBoardPieceData_o *v506; // x9
  struct WarBoardPieceData_o *v507; // x10
  struct WarBoardPieceData_o *v508; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v511; // x0
  WarBoardAIRoute_RouteData_o *v512; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v513; // x9
  int v514; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v516; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v517; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v518; // x9
  WarBoardPieceData_o *v519; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v520; // x8
  WarBoardPieceData_o *v521; // x0
  WarBoardPieceData_o *v522; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v523; // x8
  WarBoardPieceData_o *v524; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v525; // x8
  WarBoardPieceData_o *v526; // x0
  WarBoardPieceData_o *v527; // x0
  WarBoardAIRoute_RouteData_o *v528; // x8
  struct WarBoardPieceData_o *v529; // x9
  WarBoardPieceData_o *v530; // x0
  WarBoardAIRoute_RouteData_o *v531; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v532; // x8
  struct WarBoardPieceData_o *v533; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  __int64 v537; // x1
  struct WarBoardPieceData_o *v538; // x8
  int32_t v539; // w20
  BattleServantData_o *v540; // x0
  WarBoardAIRoute_o *v541; // x0
  const MethodInfo *v542; // x3
  int64_t FlagAdvantage; // x0
  __int64 v544; // x1
  const MethodInfo *v545; // x5
  struct WarBoardPieceData_o *v546; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v547; // x8
  WarBoardPieceData_o *v548; // x22
  WarBoardAIRoute_RouteData_o *v549; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v550; // x9
  WarBoardPieceData_o *v551; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v552; // x9
  System_Collections_Generic_List_object__o *v553; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v555; // x20
  WarBoardPieceData_o *v556; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v557; // x4
  const MethodInfo *v558; // x6
  const MethodInfo *v559; // x2
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v561; // x23
  System_Func_object__bool__o *v562; // x24
  DefenseAreaData_o *v563; // x0
  __int64 v564; // x1
  const MethodInfo *v565; // x3
  struct WarBoardAIRoute_AdvantagePieceData_o *v566; // x23
  System_Func_object__bool__o *v567; // x24
  struct DefenseAreaData_o *v568; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v569; // x9
  WarBoardPieceData_o *v570; // x0
  System_Int32_array *v571; // x2
  const MethodInfo *v572; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v573; // x8
  _BOOL8 v574; // x0
  __int64 v575; // x1
  WarBoardAIRoute_RouteData_o *v576; // x21
  int64_t v577; // x8
  System_Collections_Generic_List_object__o *v578; // x23
  __int64 v579; // x0
  __int64 v580; // x1
  int64_t v581; // x2
  int32_t v582; // w3
  System_String_o *v583; // x4
  BattleSetupInfo_o *v584; // x5
  FollowerInfo_o *v585; // x6
  PartyListViewItem_o *v586; // x7
  __int64 v587; // x0
  __int64 v588; // x1
  WarBoardAIRoute_RouteData_o *v589; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v590; // x23
  int64_t v591; // x2
  int32_t v592; // w3
  System_String_o *v593; // x4
  BattleSetupInfo_o *v594; // x5
  FollowerInfo_o *v595; // x6
  PartyListViewItem_o *v596; // x7
  __int64 v597; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v598; // x0
  _BOOL8 v599; // x0
  __int64 v600; // x1
  const MethodInfo *v601; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v602; // x8
  struct WarBoardPieceData_o *v603; // x8
  uint32_t key_high; // w21
  int32_t v605; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v607; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v608; // x0
  __int64 v609; // x0
  __int64 v610; // x1
  WarBoardAIRoute_RouteData_o *v611; // x21
  System_Collections_Generic_List_int__o *v612; // x23
  __int64 v613; // x0
  __int64 v614; // x1
  int64_t v615; // x2
  int32_t v616; // w3
  System_String_o *v617; // x4
  BattleSetupInfo_o *v618; // x5
  FollowerInfo_o *v619; // x6
  PartyListViewItem_o *v620; // x7
  PartyOrganizationUtility_o *v621; // x21
  System_Collections_Generic_Dictionary_int__bool__o *v622; // x23
  __int64 v623; // x0
  __int64 v624; // x1
  int64_t v625; // x2
  int32_t v626; // w3
  System_String_o *v627; // x4
  BattleSetupInfo_o *v628; // x5
  FollowerInfo_o *v629; // x6
  PartyListViewItem_o *v630; // x7
  WarBoardAIRoute_RouteData_o *v631; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v632; // x23
  __int64 v633; // x0
  __int64 v634; // x1
  int64_t v635; // x2
  int32_t v636; // w3
  System_String_o *v637; // x4
  BattleSetupInfo_o *v638; // x5
  FollowerInfo_o *v639; // x6
  PartyListViewItem_o *v640; // x7
  __int64 v641; // x0
  __int64 v642; // x1
  WarBoardAIRoute_RouteData_o *v643; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v644; // x8
  WarBoardPieceData_o *v645; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v647; // x1
  const MethodInfo *v648; // x2
  const MethodInfo *v649; // x3
  const MethodInfo *v650; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v651; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v652; // x9
  struct WarBoardPieceData_o *v653; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v654; // x10
  DefenseAreaData_o *v655; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v656; // x9
  struct WarBoardPieceData_o *v657; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v658; // x11
  int32_t v659; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v660; // x9
  struct WarBoardPieceData_o *v661; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v662; // x10
  int32_t v663; // w21
  WarBoardAIRoute_RouteData_o *v664; // x9
  int v665; // w10
  System_Collections_Generic_IEnumerable_TSource__o *v666; // x0
  __int64 v667; // x0
  int tmpFlagNow_5__12; // w10
  bool v669; // zf
  System_Collections_Generic_Dictionary_int__int__o *v670; // x0
  const MethodInfo *v671; // x5
  int32_t v672; // w21
  int v673; // w29
  int32_t v674; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v675; // x0
  __int64 v676; // x0
  __int64 v677; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x8
  int v679; // w9
  int32_t v680; // w2
  __int64 v681; // x0
  __int64 v682; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v684; // x0
  __int64 v685; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v688; // x9
  __int64 size; // x10
  const MethodInfo *v690; // x5
  int32_t v691; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v693; // x0
  __int64 v694; // x0
  __int64 v695; // x1
  const MethodInfo *v696; // x3
  WarBoardAIRoute_RouteData_o *v697; // x19
  int32_t servantAndMasterRange_5__13; // w8
  bool v699; // zf
  int32_t v700; // w8
  WarBoardAIManager_c *v701; // x0
  WarBoardAIRoute_o *v702; // x0
  const MethodInfo *v703; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v704; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v705; // x8
  WarBoardPieceData_o *v706; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v707; // x9
  struct WarBoardPieceData_o *v708; // x9
  WarBoardAIManager_c *v709; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v712; // x1
  const MethodInfo *v713; // x5
  int32_t currentKey; // w21
  int32_t v715; // w22
  System_Int32_array *v716; // x0
  __int64 v717; // x1
  struct WarBoardStageNpcEntity_o *v718; // x8
  __int64 v719; // x1
  const MethodInfo *v720; // x3
  WarBoardAIRoute_RouteData_o *v721; // x19
  WarBoardAIManager_c *v722; // x0
  struct DefenseAreaData_o *v723; // x8
  __int64 v724; // x0
  __int64 v725; // x1
  WarBoardAIManager_c *v726; // x0
  System_Collections_Generic_Dictionary_int__object__o *v727; // x0
  const MethodInfo *v728; // x5
  bool v729; // w21
  int32_t v730; // w22
  int32_t v731; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v732; // x22
  const MethodInfo *v733; // x2
  WarBoardAIRoute_RouteData_o *v734; // x19
  WarBoardData_o *v735; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v737; // x1
  System_Collections_Generic_List_int__o *v738; // x22
  __int64 v739; // x1
  System_Collections_Generic_List_object__o *v740; // x0
  _BOOL8 v741; // x0
  __int64 v742; // x1
  Il2CppObject *v743; // x21
  Il2CppClass *v744; // x0
  _BOOL8 v745; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *v747; // x8
  _QWORD *v748; // x9
  __int64 v749; // x10
  WarBoardPieceData_o *v750; // x0
  __int64 v751; // x1
  WarBoardPieceData_o *v752; // x0
  _BOOL8 v753; // x0
  __int64 v754; // x1
  __int64 monitor_low; // x1
  struct System_Int32_array *v756; // x8
  _QWORD *v757; // x9
  __int64 v758; // x10
  __int64 v759; // x0
  __int64 v760; // x1
  WarBoardPieceData_o *v761; // x0
  _BOOL8 v762; // x0
  __int64 v763; // x1
  const MethodInfo *v764; // x3
  _BOOL8 CanAcquireItem; // x0
  __int64 v766; // x1
  const MethodInfo *v767; // x4
  WarBoardAIRoute_RouteData_o *v768; // x8
  int64_t v769; // x9
  WarBoardPieceData_o *v770; // x0
  __int64 v771; // x1
  const MethodInfo *v772; // x3
  __int64 v773; // x1
  WarBoardAIRoute_RouteData_o *v774; // x8
  WarBoardPieceData_o *v775; // x0
  __int64 v776; // x1
  const MethodInfo *v777; // x3
  __int64 v778; // x1
  __int64 v779; // x0
  __int64 v780; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v782; // x1
  WarBoardAIRoute_RouteData_o *v783; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v785; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v787; // x22
  WarBoardAIEvalCalcurater_o *v788; // x21
  __int64 v789; // x0
  __int64 v790; // x1
  const MethodInfo *v791; // x1
  WarBoardAIRoute___c_c *v792; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v793; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v795; // x24
  struct WarBoardAIRoute___c_StaticFields *v796; // x0
  int64_t v797; // x2
  int32_t v798; // w3
  System_String_o *v799; // x4
  BattleSetupInfo_o *v800; // x5
  FollowerInfo_o *v801; // x6
  PartyListViewItem_o *v802; // x7
  System_Collections_Generic_IEnumerable_T__o *v803; // x23
  System_Collections_Generic_List_object__o *v804; // x22
  __int64 v805; // x0
  __int64 v806; // x1
  int64_t v807; // x2
  int32_t v808; // w3
  System_String_o *v809; // x4
  BattleSetupInfo_o *v810; // x5
  FollowerInfo_o *v811; // x6
  PartyListViewItem_o *v812; // x7
  Il2CppObject *v813; // x1
  struct System_Object_array *v814; // x8
  _QWORD *v815; // x9
  __int64 v816; // x10
  Il2CppClass **v817; // x0
  WarBoardAIRoute_RouteData_o *v818; // x0
  __int64 v819; // x1
  WarBoardAIRoute_RouteData_o *v820; // x2
  int32_t v821; // w3
  System_String_o *v822; // x4
  BattleSetupInfo_o *v823; // x5
  FollowerInfo_o *v824; // x6
  PartyListViewItem_o *v825; // x7
  const MethodInfo *v826; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v828; // x8
  _QWORD *v829; // x9
  __int64 v830; // x10
  Il2CppClass **v831; // x8
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v834; // x0
  PartyOrganizationUtility_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v836; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v838; // x0
  int64_t v839; // x2
  int32_t v840; // w3
  System_String_o *v841; // x4
  BattleSetupInfo_o *v842; // x5
  FollowerInfo_o *v843; // x6
  PartyListViewItem_o *v844; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v845; // x0
  int64_t v846; // x2
  int32_t v847; // w3
  System_String_o *v848; // x4
  BattleSetupInfo_o *v849; // x5
  FollowerInfo_o *v850; // x6
  PartyListViewItem_o *v851; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v852; // x0
  int64_t v853; // x2
  int32_t v854; // w3
  System_String_o *v855; // x4
  BattleSetupInfo_o *v856; // x5
  FollowerInfo_o *v857; // x6
  PartyListViewItem_o *v858; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v859; // x0
  int64_t v860; // x2
  int32_t v861; // w3
  System_String_o *v862; // x4
  BattleSetupInfo_o *v863; // x5
  FollowerInfo_o *v864; // x6
  PartyListViewItem_o *v865; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v866; // x0
  int64_t v867; // x2
  int32_t v868; // w3
  System_String_o *v869; // x4
  BattleSetupInfo_o *v870; // x5
  FollowerInfo_o *v871; // x6
  PartyListViewItem_o *v872; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v873; // x0
  int64_t v874; // x2
  int32_t v875; // w3
  System_String_o *v876; // x4
  BattleSetupInfo_o *v877; // x5
  FollowerInfo_o *v878; // x6
  PartyListViewItem_o *v879; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v880; // x0
  int64_t v881; // x2
  int32_t v882; // w3
  System_String_o *v883; // x4
  BattleSetupInfo_o *v884; // x5
  FollowerInfo_o *v885; // x6
  PartyListViewItem_o *v886; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v887; // x0
  int64_t v888; // x2
  int32_t v889; // w3
  System_String_o *v890; // x4
  BattleSetupInfo_o *v891; // x5
  FollowerInfo_o *v892; // x6
  PartyListViewItem_o *v893; // x7
  Il2CppObject *v894; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v895; // x0
  int64_t v896; // x2
  int32_t v897; // w3
  System_String_o *v898; // x4
  BattleSetupInfo_o *v899; // x5
  FollowerInfo_o *v900; // x6
  PartyListViewItem_o *v901; // x7
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v904; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v905; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v906; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v907; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v908; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v909; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v910; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v911; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v915; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  __int64 actionCount; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v918; // [xsp+158h] [xbp-68h] BYREF

  v8 = this;
  v918 = this;
  if ( (byte_4BB2282 & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v24);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v25);
    sub_1C13D24(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v26);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v27);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v28);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v29);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v30);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v31);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v32);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v33);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v34);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v35);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v36);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v37);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v38);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v39);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v40);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v41);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v42);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v43);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v44);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v45);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v46);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v47);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v48);
    sub_1C13D24(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, v49);
    sub_1C13D24(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v50);
    sub_1C13D24(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v51);
    sub_1C13D24(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v52);
    sub_1C13D24(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v53);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v54);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v55);
    sub_1C13D24(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v56);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v57);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v58);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v59);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__,
      v60);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v61);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v62);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v63);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v64);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v65);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v66);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v67);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v68);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v69);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v70);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v71);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v72);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v73);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v74);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___77444840, v75);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v76);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v77);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v78);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v79);
    sub_1C13D24(&WarBoardAIRoute_RouteData_TypeInfo, v80);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v81);
    sub_1C13D24(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v82);
    sub_1C13D24(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v83);
    sub_1C13D24(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v84);
    sub_1C13D24(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v85);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v86);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v87);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v88);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v89);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v90);
    sub_1C13D24(&WarBoardAIRoute___c_TypeInfo, v91);
    sub_1C13D24(&WarBoardAIEvalCalcurater_TypeInfo, v92);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1C13D24(&WarBoardAIManager_TypeInfo, v93);
    byte_4BB2282 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  actionCount = 0LL;
  memset(&v915, 0, sizeof(v915));
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v908, 0, sizeof(v908));
  memset(&v911, 0, 32);
  v909 = 0u;
  v910 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v907, 0, sizeof(v907));
  *(_QWORD *)&v905.fields._getEnumeratorRetType = 0LL;
  v906 = &v918;
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
      p__7__wrap24 = (PartyOrganizationUtility_o *)&v918->fields.__7__wrap24;
      *(_QWORD *)&v918->fields.__7__wrap24 = 0LL;
      sub_1C13CC8(p__7__wrap24, 0LL, v371, v372, v373, v374, v375, v376);
      return 0;
    }
LABEL_117:
    v359 = *(__int64 **)&v8->fields.__7__wrap24;
    if ( !v359 )
      sub_1C13F80(this, method);
    v360 = *v359;
    v361 = *(unsigned __int16 *)(*v359 + 302);
    if ( *(_WORD *)(*v359 + 302) )
    {
      v362 = (int *)(*(_QWORD *)(v360 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v362 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v361;
        v362 += 4;
        if ( !v361 )
          goto LABEL_122;
      }
      v363 = v360 + 16LL * *v362 + 312;
    }
    else
    {
LABEL_122:
      v363 = sub_1C65D04(*(_QWORD *)&v8->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v364 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v363)(v359, *(_QWORD *)(v363 + 8));
    v8 = v918;
    if ( (v364 & 1) != 0 )
    {
      v365 = *(__int64 **)&v918->fields.__7__wrap24;
      if ( !v365 )
        sub_1C13F80(v364, method);
      v366 = *v365;
      v367 = *(unsigned __int16 *)(*v365 + 302);
      if ( *(_WORD *)(*v365 + 302) )
      {
        v368 = (int *)(*(_QWORD *)(v366 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v368 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v367;
          v368 += 4;
          if ( !v367 )
            goto LABEL_130;
        }
        v369 = v366 + 16LL * *v368 + 312;
      }
      else
      {
LABEL_130:
        v369 = sub_1C65D04(
                 *(_QWORD *)&v918->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL);
      }
      v377 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v369)(v365, *(_QWORD *)(v369 + 8));
      v378 = v918;
      v918->fields.__2__current = v377;
      v378 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v378 + 24);
      ++LODWORD(v378->fields._baseSquare_5__11);
      sub_1C13CC8((PartyOrganizationUtility_o *)v378, (int64_t)v377, v379, v380, v381, v382, v383, v384);
      result = 1;
      v918->fields.__1__state = 2;
      return result;
    }
    goto LABEL_131;
  }
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_662;
  }
  result = 0;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v97);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v105 = v918;
    v918->fields._warBoardData_5__2 = monitor;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v105->fields._warBoardData_5__2,
      (int64_t)monitor,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    if ( !_4__this )
      sub_1C13F80(v106, v107);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1C13F80(v106, v107);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v111 = v918;
    v112 = v918->fields.searchCount + 1;
    v918->fields.searchCount = v112;
    if ( v112 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    actionCount = 0LL;
    WarBoardAIRoute__GetRouteDataActionList(
      v106,
      v111->fields.routeDataList,
      (int32_t *)&actionCount + 1,
      (int32_t *)&actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      v108);
    v113 = masterReplaceCount[1] * _4__this->fields.masterMoveCost
         + (actionCount + 2 * HIDWORD(actionCount)) * _4__this->fields.moveCost
         + masterReplaceCount[0] * (_4__this->fields.masterMoveCost + _4__this->fields.moveCost);
    v918->fields._requiredCost_5__3 = v113;
    v114 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v114 )
      sub_1C13F80(0LL, v115);
    if ( v113 >= SHIDWORD(v114[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v918->fields.piecePlaceData, v116);
    v118 = v918->fields.piecePlaceData;
    v918->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          v118,
                                          MasterSquareIndex,
                                          v119);
    v121 = v918;
    v918->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v121->fields._allyPieceIndexs_5__5,
      (int64_t)AllyPutSquareIndicesWithoutMaster,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    v128 = (PartyOrganizationUtility_o *)v918;
    v918->fields._defenseAreaData_5__7 = 0LL;
    v128 = (PartyOrganizationUtility_o *)((char *)v128 + 104);
    *(_QWORD *)&v128[-1].fields._IsQuestStartMenuMode_k__BackingField = 1LL;
    sub_1C13CC8(v128, 0LL, v129, v130, v131, v132, v133, v134);
    warBoardData_5__2 = v918->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1C13F80(v135, v136);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1C13F80(0LL, v136);
    v139 = System_Collections_Generic_List_int___Contains(
             masterExistsForce,
             _4__this->fields.forceId,
             (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
    v142 = v918;
    if ( v139 )
    {
      if ( v918 )
      {
        v918->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v142->fields._masterSquareIndex_5__4,
                            v142->fields._allyPieceIndexs_5__5,
                            v142->fields.piecePlaceData,
                            v141);
        v148 = v918;
        v918->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v148->fields._defenseAreaData_5__7,
          (int64_t)DefenseAreaData,
          v149,
          v150,
          v151,
          v152,
          v153,
          v154);
        v158 = v918;
        defenseAreaData_5__7 = v918->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1C13F80(v155, v156);
        v918->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1C13F80(v155, v156);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v158->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 v157);
        v142 = v918;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v918->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v162 = v142->fields.piecePlaceData;
        if ( !v162 )
          sub_1C13F80(0LL, v140);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v905,
          v162,
          (const MethodInfo_32B3EB8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v163 = v918;
        v164 = *(_OWORD *)&v905.fields._dictionary;
        p__7__wrap8 = (PartyOrganizationUtility_o *)&v918->fields.__7__wrap8;
        *(_OWORD *)&v904.fields._dictionary = *(_OWORD *)&v905.fields._dictionary;
        v904.fields._current = v905.fields._current;
        v918->fields.__7__wrap8.fields._current = v905.fields._current;
        *(_OWORD *)&v163->fields.__7__wrap8.fields._dictionary = v164;
        sub_1C13CC8(p__7__wrap8, 0LL, v166, v167, v168, v169, v170, v171);
        v918->fields.__1__state = -3;
LABEL_44:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v918->fields.__7__wrap8,
                  (const MethodInfo_33E49DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v918->fields.__7__wrap8.fields._current.fields.key;
          v174 = (Il2CppObject *)sub_1C13F70(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v174, 0LL);
          v175 = v918;
          v918->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v174;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v175->fields.__8__1,
            (int64_t)v174,
            v176,
            v177,
            v178,
            v179,
            v180,
            v181);
          v918->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, v182);
          v184 = v918;
          *(_QWORD *)&v918->fields._baseSquareIndex_5__10 = Square;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v184->fields._baseSquareIndex_5__10,
            (int64_t)Square,
            v185,
            v186,
            v187,
            v188,
            v189,
            v190);
          _8__1 = v918->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), v192);
          if ( !_8__1 )
            sub_1C13F80(PieceUnique, PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&_8__1->fields,
            (int64_t)PieceUnique,
            v194,
            v195,
            v196,
            v197,
            v198,
            v199);
          v203 = v918;
          baseFlag_5__6 = v918->fields._baseFlag_5__6;
          v205 = v918->fields.__8__1;
          v918->fields._tmpFlagNow_5__12 = -1LL;
          v203->fields._servantAndMasterRange_5__13 = -1;
          v203->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v205 )
            sub_1C13F80(v200, v201);
          if ( !_4__this )
            sub_1C13F80(0LL, v201);
          v206 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                   _4__this,
                   *(WarBoardSquareData_o **)&v203->fields._baseSquareIndex_5__10,
                   v205->fields.basePiece,
                   v203->fields.piecePlaceData,
                   v203->fields._masterSquareIndex_5__4,
                   v202);
          v207 = v918;
          v918->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v206 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v207->fields.routeDataList;
          v209 = (Il2CppObject *)v207->fields.__8__1;
          v210 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v210,
            v209,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0LL);
          v212 = System_Linq_Enumerable__Count_object__49985748(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v210,
                   (const MethodInfo_2FAB8D4 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v213 = (System_Collections_Generic_List_object__o *)v918->fields.routeDataList;
          v918->fields._servantAndEnemyRange_5__14 = v212;
          if ( !v213 )
            sub_1C13F80(0LL, v211);
          Only = (WarBoardAIRoute_o *)System_Collections_Generic_List_object___AsReadOnly(
                                        v213,
                                        (const MethodInfo_362D3F4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v217 = v918->fields.__8__1;
          if ( !v217 )
            sub_1C13F80(Only, v215);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      Only,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v217->fields.basePiece,
                                      v216);
          v221 = v918;
          v222 = v918->fields.__8__1;
          v918->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v222 )
            sub_1C13F80(RouteSumPieceActionCost, v219);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v222->fields.basePiece,
                        v221->fields._servantAndEnemyRange_5__14,
                        v221->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        v220);
          if ( IsActable )
          {
            v226 = v918->fields.__8__1;
            if ( !v226 )
              sub_1C13F80(IsActable, v224);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v226->fields.basePiece,
                                          v918->fields.routeDataList,
                                          v918->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          v225);
            v228 = v918;
            *(_QWORD *)&v918->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v228->fields._sumPieceActionCost_5__17,
              (int64_t)DesignationItemToDistance,
              v229,
              v230,
              v231,
              v232,
              v233,
              v234);
            v238 = v918->fields.__8__1;
            if ( !v238 )
              sub_1C13F80(v235, v236);
            TargetToDistance_36393520 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_36393520(_4__this, v238->fields.basePiece, v918->fields.routeDataList, v918->fields.__7__wrap8.fields._getEnumeratorRetType, v237);
            v240 = v918;
            v918->fields._dicBaseDIRange_5__18 = TargetToDistance_36393520;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v240->fields._dicBaseDIRange_5__18,
              (int64_t)TargetToDistance_36393520,
              v241,
              v242,
              v243,
              v244,
              v245,
              v246);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v247,
                                   v918->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v918->fields._tmpFlagNow_5__12 + 1,
                                   &v918->fields._servantAndMasterRange_5__13,
                                   v248);
            v250 = v918;
            v918->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v250->fields._dicKeyPutIndexValueTargetData_5__19,
              (int64_t)AllEnemyToDistance,
              v251,
              v252,
              v253,
              v254,
              v255,
              v256);
            v257 = v918;
            v918->fields._dicEnemyRange_5__20 = 0LL;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v257->fields._dicEnemyRange_5__20,
              0LL,
              v258,
              v259,
              v260,
              v261,
              v262,
              v263);
            v266 = v918->fields.__8__1;
            if ( !v266 )
              sub_1C13F80(v264, v265);
            basePiece = v266->fields.basePiece;
            if ( !basePiece )
              sub_1C13F80(0LL, v265);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              v271 = v918->fields.__8__1;
              if ( !v271 )
                sub_1C13F80(isServant, v269);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v271->fields.basePiece,
                                     v918->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     v270);
              v273 = v918;
              v918->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v273->fields._dicEnemyRange_5__20,
                (int64_t)AdvantagePieceData,
                v274,
                v275,
                v276,
                v277,
                v278,
                v279);
              if ( v918->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v918->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v282 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0LL,
                                                                              v280);
                v283 = System_Linq_Enumerable__Count_int_(
                         v282,
                         (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
                v286 = v918;
                v287 = v918->fields.__8__1;
                LODWORD(v918->fields._tmpFlagNow_5__12) = v283;
                if ( !v287 )
                  sub_1C13F80(v283, v284);
                v288 = v287->fields.basePiece;
                if ( !v288 )
                  sub_1C13F80(v283, v284);
                v289 = _4__this->fields.aiRouteMasterData;
                if ( !v289 )
                  sub_1C13F80(v283, v284);
                masterType = v289->fields.masterType;
                index_k__BackingField = v288->fields._index_k__BackingField;
                if ( masterType != 2 || v289->fields.masterPieceIndex != index_k__BackingField )
                {
                  v292 = _4__this->fields.npcData;
                  if ( !v292 )
                    sub_1C13F80(v283, v284);
                  if ( v292->fields.defenseArea > (int)v283 )
                    v286->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v286->fields._baseSquare_5__11 | 0x800);
                  if ( (masterType != 2 || v289->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v286->fields._defenseAreaData_5__7,
                         v286->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         v285) )
                  {
                    v918->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v918->fields._baseSquare_5__11 | 0x80000000);
                  }
                }
              }
            }
            v293 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v293,
              (const MethodInfo_34E66FC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v294 = v918;
            v918->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v293;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v294->fields._advantagePieceData_5__21,
              (int64_t)v293,
              v295,
              v296,
              v297,
              v298,
              v299,
              v300);
            v301 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v301,
              (const MethodInfo_34E66FC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v302 = v918;
            v918->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v301;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v302->fields._basePieceActionPieceRouteList_5__22,
              (int64_t)v301,
              v303,
              v304,
              v305,
              v306,
              v307,
              v308);
            v310 = (System_Collections_Generic_List_object__o *)v918->fields.routeDataList;
            if ( !v310 )
              sub_1C13F80(0LL, v309);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v904,
              v310,
              (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v915.fields._list = *(_OWORD *)&v904.fields._dictionary;
            v915.fields._current = v904.fields._current.fields.key;
            while ( 1 )
            {
              v311 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v915,
                       (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v311 )
                break;
              current = v915.fields._current;
              if ( !v915.fields._current )
                sub_1C13F80(v311, v312);
              if ( LODWORD(v915.fields._current[1].monitor) != HIDWORD(v915.fields._current[1].monitor) )
              {
                klass = v915.fields._current[3].klass;
                if ( !klass )
                  sub_1C13F80(v311, v312);
                v315 = v918->fields.__8__1;
                if ( !v315 )
                  sub_1C13F80(v311, v312);
                v316 = v315->fields.basePiece;
                if ( !v316 )
                  sub_1C13F80(v311, v312);
                if ( HIDWORD(klass->_1.namespaze) == v316->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v918->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1C13F80(0LL, v312);
                  v311 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v915.fields._current,
                           (const MethodInfo_34E78E0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v318 = current[3].monitor;
                  if ( !v318 )
                    sub_1C13F80(v311, v312);
                  v319 = v918->fields.__8__1;
                  if ( !v319 )
                    sub_1C13F80(v311, v312);
                  v320 = v319->fields.basePiece;
                  if ( !v320 )
                    sub_1C13F80(v311, v312);
                  if ( v318[7] == v320->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v918->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1C13F80(0LL, v312);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_34E78E0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v915,
              (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v386 = *(WarBoardSquareData_o **)&v918->fields._baseSquareIndex_5__10;
            if ( !v386 )
              sub_1C13F80(0LL, v385);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v386, 0LL);
            v388 = v918;
            v918->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v388->fields._basePieceBasePieceRouteList_5__23,
              (int64_t)MyAndLinkedSquareIndecies,
              v389,
              v390,
              v391,
              v392,
              v393,
              v394);
            v395 = v918;
            v396 = 0;
            LODWORD(v918->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              basePieceBasePieceRouteList_5__23 = v395->fields._basePieceBasePieceRouteList_5__23;
              p_basePieceBasePieceRouteList_5__23 = (PartyOrganizationUtility_o *)&v395->fields._basePieceBasePieceRouteList_5__23;
              v836 = basePieceBasePieceRouteList_5__23;
              if ( !basePieceBasePieceRouteList_5__23 )
                sub_1C13F80(this, method);
              if ( v396 >= SLODWORD(v836->fields._slots) )
              {
                p_basePieceBasePieceRouteList_5__23->klass = 0LL;
                sub_1C13CC8(p_basePieceBasePieceRouteList_5__23, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
                v838 = v918;
                v918->fields.__8__1 = 0LL;
                sub_1C13CC8((PartyOrganizationUtility_o *)&v838->fields.__8__1, 0LL, v839, v840, v841, v842, v843, v844);
                v845 = v918;
                *(_QWORD *)&v918->fields._baseSquareIndex_5__10 = 0LL;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v845->fields._baseSquareIndex_5__10,
                  0LL,
                  v846,
                  v847,
                  v848,
                  v849,
                  v850,
                  v851);
                v852 = v918;
                *(_QWORD *)&v918->fields._sumPieceActionCost_5__17 = 0LL;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v852->fields._sumPieceActionCost_5__17,
                  0LL,
                  v853,
                  v854,
                  v855,
                  v856,
                  v857,
                  v858);
                v859 = v918;
                v918->fields._dicBaseDIRange_5__18 = 0LL;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v859->fields._dicBaseDIRange_5__18,
                  0LL,
                  v860,
                  v861,
                  v862,
                  v863,
                  v864,
                  v865);
                v866 = v918;
                v918->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v866->fields._dicKeyPutIndexValueTargetData_5__19,
                  0LL,
                  v867,
                  v868,
                  v869,
                  v870,
                  v871,
                  v872);
                v873 = v918;
                v918->fields._dicEnemyRange_5__20 = 0LL;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v873->fields._dicEnemyRange_5__20,
                  0LL,
                  v874,
                  v875,
                  v876,
                  v877,
                  v878,
                  v879);
                v880 = v918;
                v918->fields._advantagePieceData_5__21 = 0LL;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v880->fields._advantagePieceData_5__21,
                  0LL,
                  v881,
                  v882,
                  v883,
                  v884,
                  v885,
                  v886);
                v887 = v918;
                v918->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v887->fields._basePieceActionPieceRouteList_5__22,
                  0LL,
                  v888,
                  v889,
                  v890,
                  v891,
                  v892,
                  v893);
                goto LABEL_44;
              }
              v397 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v397, 0LL);
              v400 = v918->fields._basePieceBasePieceRouteList_5__23;
              if ( !v400 )
                sub_1C13F80(v398, v399);
              _7__wrap23_low = SLODWORD(v918->fields.__7__wrap23);
              if ( (unsigned int)_7__wrap23_low >= LODWORD(v400->fields._slots) )
                sub_1C13F88(v398, v399);
              if ( !v397 )
                sub_1C13F80(v398, v399);
              *(_DWORD *)(v397 + 16) = *(&v400->fields._count + _7__wrap23_low);
              v402 = (int32_t *)(v397 + 16);
              v403 = (WarBoardAIRoute_RouteData_o *)sub_1C13F70(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v403, v404);
              routeData = v403;
              if ( !v403 )
                sub_1C13F80(this, method);
              v405 = v918;
              getEnumeratorRetType = v918->fields.__7__wrap8.fields._getEnumeratorRetType;
              v403->fields.baseIndex = getEnumeratorRetType;
              v407 = *v402;
              v403->fields.actionIndex = *v402;
              if ( getEnumeratorRetType == v407 )
              {
                v408 = v405->fields.routeDataList;
                if ( !v408 )
                  sub_1C13F80(this, method);
                if ( v408->fields._size > 0 )
                  goto LABEL_662;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v405->fields._dicBaseDIRange_5__18;
              v410 = WarBoardAIRoute___c_TypeInfo;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v410 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_1 = (System_Func_T__TResult__o *)v410->static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( !v410->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v410);
                  v410 = WarBoardAIRoute___c_TypeInfo;
                }
                v412 = (Il2CppObject *)v410->static_fields->__9;
                _9__47_1 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__object___long____ctor(
                  _9__47_1,
                  v412,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  0LL);
                static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&static_fields->__9__47_1,
                  (int64_t)_9__47_1,
                  v414,
                  v415,
                  v416,
                  v417,
                  v418,
                  v419);
                v410 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( !v410->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v410);
                v410 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_2 = (System_Func_T__TResult__o *)v410->static_fields->__9__47_2;
              if ( !_9__47_2 )
              {
                if ( !v410->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v410);
                  v410 = WarBoardAIRoute___c_TypeInfo;
                }
                v421 = (Il2CppObject *)v410->static_fields->__9;
                _9__47_2 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__object___object____ctor(
                  _9__47_2,
                  v421,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  0LL);
                v422 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v422->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v422->__9__47_2,
                  (int64_t)_9__47_2,
                  v423,
                  v424,
                  v425,
                  v426,
                  v427,
                  v428);
              }
              v436 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_2FC9214 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v437 = routeData;
              if ( !routeData )
                sub_1C13F80(0LL, v429);
              v438 = *(struct WarBoardSquareData_o **)&v918->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v438;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v437->fields.baseSquare,
                (int64_t)v438,
                v430,
                v431,
                v432,
                v433,
                v434,
                v435);
              v447 = v918->fields.__8__1;
              if ( !v447 )
                sub_1C13F80(v439, v440);
              v448 = routeData;
              if ( !routeData )
                sub_1C13F80(0LL, v440);
              v449 = v447->fields.basePiece;
              routeData->fields.basePiece = v449;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v448->fields.basePiece,
                (int64_t)v449,
                v441,
                v442,
                v443,
                v444,
                v445,
                v446);
              v457 = routeData;
              if ( !routeData )
                sub_1C13F80(0LL, v450);
              routeData->fields.actionPiece = 0LL;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v457->fields.actionPiece,
                0LL,
                v451,
                v452,
                v453,
                v454,
                v455,
                v456);
              v459 = routeData;
              v460 = *v402;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              v461 = WarBoardAIManager__GetSquare(v460, v458);
              if ( !v459 )
                sub_1C13F80(v461, v461);
              v459->fields.actionSquare = v461;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v459->fields.actionSquare,
                (int64_t)v461,
                v462,
                v463,
                v464,
                v465,
                v466,
                v467);
              dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v918->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_1C13F80(0LL, v468);
              v470 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_33220F4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v475 = 0x7FFFFFFFLL;
                if ( !v470 )
                  goto LABEL_253;
              }
              else
              {
                v473 = (System_Collections_Generic_Dictionary_uint__int__o *)v918->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v473 )
                  sub_1C13F80(0LL, v471);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           v473,
                           (const MethodInfo_3322254 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v475 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v470 )
LABEL_253:
                  sub_1C13F80(v475, v471);
              }
              v470->fields.EnemyRangeMin = v475;
              v476 = v918->fields.__8__1;
              if ( !v476 )
                sub_1C13F80(v475, v471);
              if ( !_4__this )
                sub_1C13F80(v475, v471);
              v477 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       (WarBoardAIRoute_o *)v475,
                                       v436,
                                       *v402,
                                       v476->fields.basePiece,
                                       v472);
              if ( !v477 )
                sub_1C13F80(MoveByTargetDistance, v479);
              v477->fields.dicPutIndexTargetData = v436;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v477->fields.dicPutIndexTargetData,
                (int64_t)v436,
                v480,
                v481,
                v482,
                v483,
                v484,
                v485);
              if ( !v918->fields.__8__1 )
                sub_1C13F80(v486, v487);
              v489 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(v486, v487, *v402, v918->fields.piecePlaceData, v488);
              if ( !v489 )
                sub_1C13F80(ActionPiece, ActionPiece);
              v489->fields.actionPiece = ActionPiece;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v489->fields.actionPiece,
                (int64_t)ActionPiece,
                v491,
                v492,
                v493,
                v494,
                v495,
                v496);
              v505 = v918->fields.__8__1;
              if ( !v505 )
                sub_1C13F80(p_actionPiece, v498);
              v506 = v505->fields.basePiece;
              if ( !v506 )
                sub_1C13F80(p_actionPiece, v498);
              if ( v506->fields._nowSquareIndex_k__BackingField == *v402 )
              {
                if ( !routeData )
                  sub_1C13F80(0LL, v498);
                p_actionPiece = (PartyOrganizationUtility_o *)&routeData->fields.actionPiece;
                v507 = routeData->fields.actionPiece;
                if ( v507 )
                {
                  if ( v507->fields._uniqueIndex_k__BackingField == v506->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_1C13CC8(p_actionPiece, 0LL, v499, (int32_t)v500, v501, v502, v503, v504);
                    v505 = v918->fields.__8__1;
                    if ( !v505 )
                      sub_1C13F80(p_actionPiece, v498);
                  }
                }
              }
              v508 = v505->fields.basePiece;
              if ( !v508 )
                sub_1C13F80(p_actionPiece, v498);
              limitActionCount_k__BackingField = v508->fields._limitActionCount_k__BackingField;
              currentActionCount_k__BackingField = v508->fields._currentActionCount_k__BackingField;
              if ( !byte_4BAFE83 )
              {
                sub_1C13D24(&System_Math_TypeInfo, v498);
                byte_4BAFE83 = 1;
              }
              v511 = System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v512 = routeData;
              if ( !routeData )
                sub_1C13F80(v511, v498);
              v513 = v918;
              v514 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
              if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
                v514 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
              routeData->fields.actionCountOnThisTurn = v514 + v918->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v513->fields._baseSquare_5__11;
              *(_QWORD *)&v512->fields.attackByLinkedEnemy = 0LL;
              v512->fields.flagNow = (int64_t)baseSquare_5__11;
              v516 = v513->fields._warBoardData_5__2;
              if ( !v516 )
                sub_1C13F80(0LL, v498);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v516, *v402, 0, v500);
              v517 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_1C13F80(0LL, method);
                if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                                + v918->fields._requiredCost_5__3 )
                  goto LABEL_662;
                v518 = v918->fields.__8__1;
                if ( !v518 )
                  sub_1C13F80(this, method);
                v519 = v518->fields.basePiece;
                if ( !v519 )
                  sub_1C13F80(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v519,
                                                                     v918->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_662;
                v520 = v918->fields.__8__1;
                if ( !v520 )
                  sub_1C13F80(this, method);
                v521 = v520->fields.basePiece;
                if ( !v521 )
                  sub_1C13F80(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v521,
                                                                     (WarBoardWallData_o *)v517,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_662;
              }
              if ( !routeData )
                sub_1C13F80(this, method);
              v522 = routeData->fields.actionPiece;
              if ( v522 )
              {
                v523 = v918->fields.__8__1;
                if ( !v523 )
                  sub_1C13F80(this, method);
                v524 = v523->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v524, v522, v2);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v525 = v918->fields.__8__1;
                  if ( !v525 )
                    sub_1C13F80(this, method);
                  v526 = v525->fields.basePiece;
                  if ( !v526 )
                    sub_1C13F80(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v526, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_239;
                  if ( !routeData )
                    sub_1C13F80(this, method);
                  v527 = routeData->fields.actionPiece;
                  if ( !v527 )
                    sub_1C13F80(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v527, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_239:
                    v528 = routeData;
                    if ( !routeData )
                      sub_1C13F80(this, method);
                    v529 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v529 )
                      sub_1C13F80(this, method);
                    v530 = v528->fields.actionPiece;
                    v528->fields.attackCountOnThisTurn = v529->fields._attackCount_k__BackingField + 1;
                    if ( !v530 )
                      sub_1C13F80(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v530, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v531 = routeData;
                      if ( !routeData )
                        sub_1C13F80(this, method);
                      v532 = v918->fields.__8__1;
                      if ( !v532 )
                        sub_1C13F80(this, method);
                      v533 = v532->fields.basePiece;
                      if ( !v533 )
                        sub_1C13F80(this, method);
                      battleServant_k__BackingField = v533->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_1C13F80(0LL, method);
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_1C13F80(ClassId, v537);
                      v538 = routeData->fields.actionPiece;
                      if ( !v538 )
                        sub_1C13F80(ClassId, v537);
                      v539 = ClassId;
                      v540 = v538->fields._battleServant_k__BackingField;
                      if ( !v540 )
                        sub_1C13F80(0LL, v537);
                      v541 = (WarBoardAIRoute_o *)BattleServantData__getClassId(v540, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(v541, v539, (int32_t)v541, v542);
                      v531->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_1C13F80(FlagAdvantage, v544);
                      WarBoardAIRoute__LinkedCount(
                        (WarBoardAIRoute_o *)FlagAdvantage,
                        *v402,
                        v918->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        v545);
                    }
                    break;
                  }
LABEL_662:
                  v395 = v918;
                  v396 = LODWORD(v918->fields.__7__wrap23) + 1;
                  LODWORD(v918->fields.__7__wrap23) = v396;
                  continue;
                }
                if ( !routeData )
                  sub_1C13F80(this, method);
                v546 = routeData->fields.actionPiece;
                if ( !v546 )
                  sub_1C13F80(this, method);
                if ( v546->fields._roleType_k__BackingField == 1 )
                  goto LABEL_662;
                v547 = v918->fields.__8__1;
                if ( !v547 )
                  sub_1C13F80(this, method);
                v548 = v547->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v548, v546, v2);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_1C13F80(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v549 = routeData;
            if ( !routeData )
              sub_1C13F80(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1C13F80(0LL, method);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v918->fields._requiredCost_5__3 )
                goto LABEL_662;
              v569 = v918->fields.__8__1;
              if ( !v569 )
                sub_1C13F80(this, method);
              v570 = v569->fields.basePiece;
              if ( !v570 )
                sub_1C13F80(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v570,
                                                                   v918->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v549 = routeData;
              if ( !routeData )
                sub_1C13F80(this, method);
            }
            if ( (v549->fields.flagNow & 2) == 0 )
            {
              v550 = v918->fields.__8__1;
              if ( !v550 )
                sub_1C13F80(this, method);
              v551 = v550->fields.basePiece;
              if ( !v551 )
                sub_1C13F80(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v551,
                                                                   v918->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v549 = routeData;
              if ( !routeData )
                sub_1C13F80(this, method);
            }
            if ( (v549->fields.flagNow & 0x4000000) != 0 )
            {
              v552 = v918->fields.__8__1;
              if ( !v552 )
                sub_1C13F80(this, method);
              v553 = (System_Collections_Generic_List_object__o *)v918->fields.routeDataList;
              if ( !v553 )
                sub_1C13F80(0LL, method);
              requiredCost_5__3 = v918->fields._requiredCost_5__3;
              v555 = v552->fields.basePiece;
              v556 = v549->fields.actionPiece;
              v557 = System_Collections_Generic_List_object___AsReadOnly(
                       v553,
                       (const MethodInfo_362D3F4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v555,
                                                                   v556,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v557,
                                                                   v918->fields._servantAndEnemyMasterRange_5__15,
                                                                   v558);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v549 = routeData;
            }
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               (WarBoardAIRoute_o *)this,
                               v918->fields.piecePlaceData,
                               v549,
                               v918->fields.__7__wrap8.fields._getEnumeratorRetType,
                               *v402,
                               (const MethodInfo *)v5);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               v559);
            v561 = v918->fields._basePieceActionPieceRouteList_5__22;
            v562 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v562,
              (Il2CppObject *)v397,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0LL);
            v563 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__49924064(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v561,
                                          (System_Func_TSource__bool__o *)v562,
                                          (const MethodInfo_2F9C7E0 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v563 & 1) != 0
              || (v566 = v918->fields._advantagePieceData_5__21,
                  v567 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_object__bool____ctor(
                    v567,
                    (Il2CppObject *)v397,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0LL),
                  v563 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__49924064(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v566,
                                                (System_Func_TSource__bool__o *)v567,
                                                (const MethodInfo_2F9C7E0 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v563 & 1) != 0) )
            {
              if ( !routeData )
                sub_1C13F80(v563, v564);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v918->fields._masterExists_5__8 )
            {
              if ( v918->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1C13F80(v563, v564);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v571 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         v565);
                v563 = WarBoardAIRoute__GetDefenseAreaData(
                         _4__this,
                         MasterSquareIndexFromPlaceData,
                         v571,
                         piecePlaceData,
                         v572);
                v568 = v563;
              }
              else
              {
                v568 = v918->fields._defenseAreaData_5__7;
              }
              if ( !v568 )
                sub_1C13F80(v563, v564);
              v573 = _4__this->fields.aiRouteMasterData;
              if ( !v573 )
                sub_1C13F80(v563, v564);
              v574 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v568->fields._ShortestRoutes_k__BackingField,
                       piecePlaceData,
                       v573->fields.masterType == 1,
                       v565);
              v576 = routeData;
              if ( v574 )
              {
                if ( !routeData )
                  sub_1C13F80(v574, v575);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1C13F80(v574, v575);
              }
              v577 = v576->fields.flagNow;
              if ( (v577 & 0x400) != 0 && (v568->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v576->fields.flagNow = v577 | 0x40000000000LL;
            }
            else
            {
              v576 = routeData;
            }
            v578 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v578,
              (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v576 )
              sub_1C13F80(v579, v580);
            v576->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v578;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v576->fields.moveByLinkedPiece,
              (int64_t)v578,
              v581,
              v582,
              v583,
              v584,
              v585,
              v586);
            v589 = routeData;
            if ( !routeData )
              sub_1C13F80(v587, v588);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v590 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v590,
              (const MethodInfo_3321A7C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v589->fields.dicUniqueKeyRange = v590;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v589->fields.dicUniqueKeyRange,
              (int64_t)v590,
              v591,
              v592,
              v593,
              v594,
              v595,
              v596);
            v598 = v918->fields.piecePlaceData;
            if ( !v598 )
              sub_1C13F80(0LL, v597);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v904,
              v598,
              (const MethodInfo_32B3EB8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v911.fields._dictionary = *(_OWORD *)&v904.fields._dictionary;
            v911.fields._current = v904.fields._current;
            while ( 1 )
            {
              v599 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v911,
                       (const MethodInfo_33E49DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v599 )
                break;
              v602 = v918->fields.__8__1;
              if ( !v602 )
                sub_1C13F80(v599, v600);
              v603 = v602->fields.basePiece;
              if ( !v603 )
                sub_1C13F80(v599, v600);
              key_high = HIDWORD(v911.fields._current.fields.key);
              if ( v603->fields._uniqueIndex_k__BackingField != HIDWORD(v911.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1C13F80(v599, v600);
                v605 = (int32_t)v911.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v607 = *v402;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v608 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v607,
                                                                              v605,
                                                                              0,
                                                                              0LL,
                                                                              v601);
                v609 = System_Linq_Enumerable__Count_int_(
                         v608,
                         (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1C13F80(v609, v610);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v609,
                  (const MethodInfo_3322440 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v911,
              (const MethodInfo_33E4ADC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v611 = routeData;
            v612 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v612,
              (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v611 )
              sub_1C13F80(v613, v614);
            v611->fields.listExistDesignationItem = v612;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v611->fields.listExistDesignationItem,
              (int64_t)v612,
              v615,
              v616,
              v617,
              v618,
              v619,
              v620);
            v621 = (PartyOrganizationUtility_o *)routeData;
            v622 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v622,
              (const MethodInfo_3282D0C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v621 )
              sub_1C13F80(v623, v624);
            v621[1].klass = (PartyOrganizationUtility_c *)v622;
            sub_1C13CC8(v621 + 1, (int64_t)v622, v625, v626, v627, v628, v629, v630);
            v631 = routeData;
            v632 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v632,
              (const MethodInfo_328BC14 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v631 )
              sub_1C13F80(v633, v634);
            v631->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v632;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v631->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int64_t)v632,
              v635,
              v636,
              v637,
              v638,
              v639,
              v640);
            v643 = routeData;
            if ( !routeData )
              sub_1C13F80(v641, v642);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v643->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v643->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v643->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v643->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v643->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            v644 = v918->fields.__8__1;
            if ( !v644 )
              sub_1C13F80(v641, v642);
            v645 = v644->fields.basePiece;
            if ( !v645 )
              sub_1C13F80(0LL, v642);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v645, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v651 = v918;
              if ( v918->fields._masterExists_5__8 )
              {
                v652 = v918->fields.__8__1;
                if ( !v652 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v653 = v652->fields.basePiece;
                if ( !v653 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v654 = _4__this->fields.aiRouteMasterData;
                if ( !v654 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                if ( v654->fields.masterType != 2
                  || v654->fields.masterPieceIndex != v653->fields._index_k__BackingField )
                {
                  v655 = v918->fields._defenseAreaData_5__7;
                  if ( !v655 )
                    sub_1C13F80(0LL, v647);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v655, *v402, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v656 = v918->fields.__8__1;
                if ( !v656 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v657 = v656->fields.basePiece;
                if ( !v657 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v658 = _4__this->fields.aiRouteMasterData;
                if ( !v658 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v659 = v658->fields.masterType;
                if ( v659 != 2 || v658->fields.masterPieceIndex != v657->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v918->fields._defenseAreaData_5__7,
                                                         *v402,
                                                         v659 == 1,
                                                         v649);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v651 = v918;
                v660 = v918->fields.__8__1;
                if ( !v660 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v661 = v660->fields.basePiece;
                if ( !v661 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v662 = _4__this->fields.aiRouteMasterData;
                if ( !v662 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                if ( v662->fields.masterType != 2
                  || v662->fields.masterPieceIndex != v661->fields._index_k__BackingField )
                {
                  v663 = *v402;
                  if ( *v402 == MasterSquareIndexFromPlaceData )
                  {
                    v664 = routeData;
                    if ( !routeData )
                      sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                    v665 = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v666 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v663,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  v650);
                    v667 = System_Linq_Enumerable__Count_int_(
                             v666,
                             (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
                    v664 = routeData;
                    if ( !routeData )
                      sub_1C13F80(v667, v647);
                    v651 = v918;
                    tmpFlagNow_5__12 = v918->fields._tmpFlagNow_5__12;
                    v669 = (_DWORD)v667 == tmpFlagNow_5__12;
                    if ( (int)v667 < tmpFlagNow_5__12 )
                      v665 = 1;
                    else
                      v665 = 3;
                    if ( v669 )
                      v665 = 2;
                  }
                  v664->fields.isMoveByServantAndMasterRange = v665;
                }
              }
              v670 = *(System_Collections_Generic_Dictionary_int__int__o **)&v651->fields._sumPieceActionCost_5__17;
              if ( !v670 )
                sub_1C13F80(0LL, v647);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v904,
                v670,
                (const MethodInfo_3289BB0 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v909 = *(_OWORD *)&v904.fields._dictionary;
              v910 = v904.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v909,
                        (const MethodInfo_33E0810 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v672 = (int32_t)v910.fields.key;
                v673 = HIDWORD(v910.fields.key);
                v674 = *v402;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v675 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v674,
                                                                              v672,
                                                                              0,
                                                                              0LL,
                                                                              v671);
                v676 = System_Linq_Enumerable__Count_int_(
                         v675,
                         (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1C13F80(v676, v677);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1C13F80(v676, v677);
                if ( (int)v676 < v673 )
                  v679 = 1;
                else
                  v679 = 3;
                if ( (_DWORD)v676 == v673 )
                  v680 = 2;
                else
                  v680 = v679;
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v672,
                  v680,
                  (const MethodInfo_328C5C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1C13F80(v681, v682);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1C13F80(0LL, v682);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v672,
                  *v402 == v672,
                  (const MethodInfo_32836E4 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1C13F80(v684, v685);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1C13F80(0LL, v685);
                items = listExistDesignationItem->fields._items;
                v688 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1C13F80(listExistDesignationItem, v685);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v672,
                    *(const MethodInfo_36101A8 **)(*(_QWORD *)(v688[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size + 1] = v672;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v909,
                (const MethodInfo_33E0910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v691 = *v402;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v693 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v691,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            v690);
              v694 = System_Linq_Enumerable__Count_int_(
                       v693,
                       (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
              v697 = routeData;
              if ( !routeData )
                sub_1C13F80(v694, v695);
              servantAndMasterRange_5__13 = v918->fields._servantAndMasterRange_5__13;
              v699 = (_DWORD)v694 == servantAndMasterRange_5__13;
              if ( (int)v694 < servantAndMasterRange_5__13 )
                v700 = 1;
              else
                v700 = 3;
              if ( v699 )
                v700 = 2;
              routeData->fields.isMoveByServantAndEnemyMasterRange = v700;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4BB22FD )
              {
                sub_1C13D24(&WarBoardAIManager_TypeInfo, v695);
                byte_4BB22FD = 1;
              }
              v701 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v701 = WarBoardAIManager_TypeInfo;
              }
              v702 = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                            v701->static_fields->dicSquareIndexEnemyPiece,
                                            HIDWORD(v918->fields._tmpFlagNow_5__12),
                                            *v402,
                                            v696);
              v697->fields.isMoveByServantAndEnemyRange = (int)v702;
              WarBoardAIRoute__ClassAdvantageDistance(
                v702,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v918->fields._dicEnemyRange_5__20,
                *v402,
                v703);
            }
            v704 = _4__this->fields.aiRouteMasterData;
            if ( !v704 )
              sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
            if ( v704->fields.masterType )
            {
LABEL_501:
              if ( v704->fields.masterType == 2 )
              {
                v707 = v918->fields.__8__1;
                if ( !v707 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                v708 = v707->fields.basePiece;
                if ( !v708 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                if ( v708->fields._index_k__BackingField == v704->fields.masterPieceIndex )
                  goto LABEL_505;
              }
            }
            else
            {
              v705 = v918->fields.__8__1;
              if ( !v705 )
                sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
              v706 = v705->fields.basePiece;
              if ( !v706 )
                sub_1C13F80(0LL, v647);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v706, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v704 = _4__this->fields.aiRouteMasterData;
                if ( !v704 )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                goto LABEL_501;
              }
LABEL_505:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4BB22FD )
              {
                sub_1C13D24(&WarBoardAIManager_TypeInfo, v647);
                byte_4BB22FD = 1;
              }
              v709 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v709 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v709->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1C13F80(0LL, v647);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_3291F68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1C13F80(0LL, v712);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v904,
                Keys,
                (const MethodInfo_3548CAC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v908.fields._dictionary = *(_OWORD *)&v904.fields._dictionary;
              v908.fields._currentKey = v904.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v908,
                        (const MethodInfo_33E2C5C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v908.fields._currentKey;
                v715 = *v402;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v716 = AStarSearch__RouteSearch(0LL, v715, currentKey, 0, 0LL, v713);
                if ( !v716 )
                  sub_1C13F80(0LL, v717);
                v718 = _4__this->fields.npcData;
                if ( !v718 )
                  sub_1C13F80(v716, v717);
                if ( (signed int)(v716->max_length - 1) <= v718->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1C13F80(v716, v717);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v908,
                (const MethodInfo_33E2C58 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v721 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4BB22FD )
              {
                sub_1C13D24(&WarBoardAIManager_TypeInfo, v719);
                byte_4BB22FD = 1;
              }
              v722 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v722 = WarBoardAIManager_TypeInfo;
              }
              v723 = v918->fields._defenseAreaData_5__7;
              if ( !v723 )
                sub_1C13F80(v722, v719);
              v724 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v722->static_fields->dicSquareIndexEnemyPiece,
                       v723->fields._MasterAndEnemyRange_k__BackingField,
                       *v402,
                       v720);
              if ( !v721 )
                sub_1C13F80(v724, v725);
              v721->fields.isMoveByMasterAndEnemyRange = v724;
              if ( !byte_4BB22FD )
              {
                sub_1C13D24(&WarBoardAIManager_TypeInfo, v725);
                byte_4BB22FD = 1;
              }
              v726 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v726 = WarBoardAIManager_TypeInfo;
              }
              v727 = (System_Collections_Generic_Dictionary_int__object__o *)v726->static_fields->dicSquareIndexEnemyPiece;
              if ( !v727 )
                sub_1C13F80(0LL, v725);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v904,
                v727,
                (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v907 = v904;
              do
              {
                v729 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v907,
                         (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v729 )
                  break;
                v730 = (int32_t)v907.fields._current.fields.key;
                v731 = *v402;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v732 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v731,
                                                                              v730,
                                                                              0,
                                                                              0LL,
                                                                              v728);
                System_Linq_Enumerable__Count_int_(
                  v732,
                  (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v732, v918->fields._allyPieceIndexs_5__5, v733) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v907,
                (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v729 )
              {
                if ( !routeData )
                  sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v734 = routeData;
            if ( !routeData )
              sub_1C13F80(IsBlockShortestRouteEnemyAndMaster, v647);
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v735 = v918->fields._warBoardData_5__2;
              if ( !v735 )
                sub_1C13F80(0LL, v647);
              Effect = WarBoardData__GetEffect(v735, *v402, v648);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1C13F80(Effect, v737);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v738 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v738,
                (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
              v740 = (System_Collections_Generic_List_object__o *)v918->fields.routeDataList;
              if ( !v740 )
                sub_1C13F80(0LL, v739);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v904,
                v740,
                (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v915.fields._list = *(_OWORD *)&v904.fields._dictionary;
              v915.fields._current = v904.fields._current.fields.key;
              while ( 1 )
              {
                v741 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v915,
                         (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v741 )
                  break;
                v743 = v915.fields._current;
                if ( !v915.fields._current )
                  sub_1C13F80(v741, v742);
                if ( (BYTE3(v915.fields._current[1].klass) & 8) != 0 )
                {
                  v744 = v915.fields._current[3].klass;
                  if ( !v744 )
                    sub_1C13F80(0LL, v742);
                  v745 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v744, 0LL);
                  if ( v745 )
                  {
                    if ( !v738 )
                      sub_1C13F80(v745, monitor_high);
                    monitor_high = HIDWORD(v743[1].monitor);
                    v747 = v738->fields._items;
                    v748 = Method_System_Collections_Generic_List_int__Add__;
                    ++v738->fields._version;
                    if ( !v747 )
                      sub_1C13F80(v745, monitor_high);
                    v749 = v738->fields._size;
                    if ( (unsigned int)v749 >= v747->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v738,
                        monitor_high,
                        *(const MethodInfo_36101A8 **)(*(_QWORD *)(v748[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v738->fields._size = v749 + 1;
                      v747->m_Items[v749 + 1] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v743[1].klass) & 4) != 0 )
                  {
                    v750 = (WarBoardPieceData_o *)v743[3].klass;
                    if ( !v750 )
                      sub_1C13F80(0LL, monitor_high);
                    if ( WarBoardPieceData__get_isMaster(v750, 0LL) )
                    {
                      v752 = (WarBoardPieceData_o *)v743[3].monitor;
                      if ( !v752 )
                        sub_1C13F80(0LL, v751);
                      v753 = WarBoardPieceData__get_isServant(v752, 0LL);
                      if ( v753 )
                      {
                        if ( !v738 )
                          sub_1C13F80(v753, v754);
                        monitor_low = LODWORD(v743[1].monitor);
                        v756 = v738->fields._items;
                        v757 = Method_System_Collections_Generic_List_int__Add__;
                        ++v738->fields._version;
                        if ( !v756 )
                          sub_1C13F80(v753, monitor_low);
                        v758 = v738->fields._size;
                        if ( (unsigned int)v758 >= v756->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v738,
                            monitor_low,
                            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v757[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v738->fields._size = v758 + 1;
                          v756->m_Items[v758 + 1] = monitor_low;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v915,
                (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1C13F80(v759, v760);
              v761 = routeData->fields.basePiece;
              if ( !v761 )
                sub_1C13F80(0LL, v760);
              v762 = WarBoardPieceData__get_isServant(v761, 0LL);
              if ( v762 )
              {
                if ( !routeData )
                  sub_1C13F80(v762, v763);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                   (WarBoardAIRoute_o *)v762,
                                   routeData->fields.actionIndex,
                                   v738,
                                   v764);
                if ( CanAcquireItem )
                {
                  v768 = routeData;
                  if ( !routeData )
                    sub_1C13F80(CanAcquireItem, v766);
                  v769 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_610;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1C13F80(v762, v763);
                v770 = routeData->fields.basePiece;
                if ( !v770 )
                  sub_1C13F80(0LL, v763);
                CanAcquireItem = WarBoardPieceData__get_isMaster(v770, 0LL);
                if ( CanAcquireItem )
                {
                  if ( !routeData )
                    sub_1C13F80(CanAcquireItem, v771);
                  CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                     (WarBoardAIRoute_o *)CanAcquireItem,
                                     routeData->fields.actionIndex,
                                     v738,
                                     v772);
                  v774 = routeData;
                  if ( CanAcquireItem )
                  {
                    if ( !routeData )
                      sub_1C13F80(CanAcquireItem, v773);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1C13F80(CanAcquireItem, v773);
                  }
                  if ( (v774->fields.flagNow & 0x4000000) != 0 )
                  {
                    v775 = v774->fields.actionPiece;
                    if ( !v775 )
                      sub_1C13F80(0LL, v773);
                    CanAcquireItem = WarBoardPieceData__get_isServant(v775, 0LL);
                    if ( CanAcquireItem )
                    {
                      if ( !routeData )
                        sub_1C13F80(CanAcquireItem, v776);
                      CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                         (WarBoardAIRoute_o *)CanAcquireItem,
                                         routeData->fields.baseIndex,
                                         v738,
                                         v777);
                      if ( CanAcquireItem )
                      {
                        v768 = routeData;
                        if ( !routeData )
                          sub_1C13F80(CanAcquireItem, v778);
                        v769 = routeData->fields.flagNow | 0x8000000;
LABEL_610:
                        v768->fields.flagNow = v769;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(
                (WarBoardAIRoute_o *)CanAcquireItem,
                &routeData,
                piecePlaceData,
                v738,
                v767);
              v734 = routeData;
              if ( !routeData )
                sub_1C13F80(v779, v780);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v734->fields.baseIndex,
                                               v734->fields.actionIndex,
                                               v649);
            v734->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v783 = routeData;
            if ( !routeData )
              sub_1C13F80(FlagOutOfWarningAreaToDistance, v782);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1C13F80(FlagOutOfWarningAreaToDistance, v782);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v785 = v783->fields.basePiece;
            if ( !v785 )
              sub_1C13F80(FlagOutOfWarningAreaToDistance, v782);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1C13F80(0LL, v782);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v785->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_3293A34 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v787 = value;
              v788 = (WarBoardAIEvalCalcurater_o *)sub_1C13F70(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v788, (WarBoardAIRoute_PiecePersonality_o *)v787, 0LL);
              if ( !v788 )
                sub_1C13F80(v789, v790);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v788, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v788,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_1C13F80(0LL, v791);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v791);
              v792 = WarBoardAIRoute___c_TypeInfo;
              v793 = v918->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v792 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v792->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v792->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v792);
                  v792 = WarBoardAIRoute___c_TypeInfo;
                }
                v795 = (Il2CppObject *)v792->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v795,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0LL);
                v796 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v796->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v796->__9__47_5,
                  (int64_t)_9__47_5,
                  v797,
                  v798,
                  v799,
                  v800,
                  v801,
                  v802);
              }
              v803 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v793,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v804 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_object____ctor_56806080(
                v804,
                v803,
                (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___77444840);
              if ( !v804 )
                sub_1C13F80(v805, v806);
              v813 = (Il2CppObject *)routeData;
              v814 = v804->fields._items;
              v815 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v804->fields._version;
              if ( !v814 )
                sub_1C13F80(v805, v813);
              v816 = v804->fields._size;
              if ( (unsigned int)v816 >= v814->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v804,
                  v813,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v815[4] + 192LL) + 112LL));
              }
              else
              {
                v817 = &v814->obj.klass + v816;
                v804->fields._size = v816 + 1;
                v817[4] = (Il2CppClass *)v813;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v817 + 4), (int64_t)v813, v807, v808, v809, v810, v811, v812);
              }
              v818 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__49799096(
                                                      (System_Collections_Generic_List_T__o *)v804,
                                                      v804->fields._size - 2,
                                                      0LL,
                                                      (const MethodInfo_2F7DFB8 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v818;
              if ( v818 )
              {
                v820 = routeData;
                if ( !routeData )
                  sub_1C13F80(v818, v819);
                if ( routeData->fields.basePiece == v818->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v788,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_1C13F80(0LL, v826);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v826);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1C13F80(0LL, v819);
              v828 = allRouteList->fields._items;
              v829 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v828 )
                sub_1C13F80(allRouteList, v819);
              v830 = allRouteList->fields._size;
              if ( (unsigned int)v830 >= v828->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v804,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v829[4] + 192LL) + 112LL));
              }
              else
              {
                v831 = &v828->obj.klass + v830;
                allRouteList->fields._size = v830 + 1;
                v831[4] = (Il2CppClass *)v804;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)(v831 + 4),
                  (int64_t)v804,
                  (int64_t)v820,
                  v821,
                  v822,
                  v823,
                  v824,
                  v825);
              }
              if ( !routeData )
                sub_1C13F80(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v918->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v894 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           piecePlaceData,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v804,
                                           (const MethodInfo *)v4);
                  v895 = v918;
                  v918->fields.__2__current = v894;
                  sub_1C13CC8(
                    (PartyOrganizationUtility_o *)&v895->fields.__2__current,
                    (int64_t)v894,
                    v896,
                    v897,
                    v898,
                    v899,
                    v900,
                    v901);
                  result = 1;
                  v918->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v834 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         piecePlaceData,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v804,
                                         (const MethodInfo *)v4);
                if ( !routeData )
                  sub_1C13F80(v834, v834);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1C13F80(v834, v834);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v834,
                  routeData->fields.evalValue,
                  (const MethodInfo_32FBAB4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_662;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v918, v172);
        v324 = v918;
        v325 = v918->fields.searchCount;
        v918->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v324->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v325 != 1 )
          return 0;
        if ( !_4__this )
          sub_1C13F80(v322, v323);
        v326 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v327 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v327 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v327->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v327->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v327);
            v327 = WarBoardAIRoute___c_TypeInfo;
          }
          v329 = (Il2CppObject *)v327->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v329,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0LL);
          v330 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v330->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v330->__9__47_6,
            (int64_t)_9__47_6,
            v331,
            v332,
            v333,
            v334,
            v335,
            v336);
        }
        v338 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v326,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_2FB8740 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v918->fields._servantAndEnemyMasterRange_5__15 = 0;
        v339 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v339 )
          sub_1C13F80(0LL, v337);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v339,
                  (const MethodInfo_32FB784 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v342 = _4__this->fields.npcData;
        if ( !v342 )
          sub_1C13F80(Count, v341);
        v343 = v918;
        v344 = (float)((float)v342->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v345 = (int)v344;
        if ( v344 == INFINITY )
          v345 = 0x80000000;
        v918->fields._servantAndEnemyRange_5__14 = v345;
        calcEllipsisMin = v342->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v345 )
          calcEllipsisMin = v345;
        v343->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v338 )
          sub_1C13F80(Count, v341);
        v347 = v338->klass;
        v348 = *(unsigned __int16 *)(&v338->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v338->klass->_2.bitflags2 + 3) )
        {
          p_offset = &v347->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v348;
            p_offset += 4;
            if ( !v348 )
              goto LABEL_112;
          }
          p_method = (__int64)&v347->vtable[*p_offset].method;
        }
        else
        {
LABEL_112:
          p_method = sub_1C65D04(
                       v338,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v351 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v338,
                 *(_QWORD *)(p_method + 8));
        v352 = (PartyOrganizationUtility_o *)&v918->fields.__7__wrap24;
        *(_QWORD *)&v918->fields.__7__wrap24 = v351;
        sub_1C13CC8(v352, v351, v353, v354, v355, v356, v357, v358);
        v8 = v918;
        v918->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v145 = _4__this->fields.aiRouteMasterData;
      if ( !v145 )
        sub_1C13F80(v139, v140);
      if ( v918 )
      {
        v146 = v145->fields.masterType;
        v918->fields._masterExists_5__8 = v146 != 3;
        if ( v146 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1C13F80(v139, v140);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  if ( (byte_4BB2283 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method);
    byte_4BB2283 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_33E4ADC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  int *v6; // x10
  __int64 v7; // x0

  if ( (byte_4BB2284 & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    byte_4BB2284 = 1;
  }
  v3 = *(__int64 **)&this->fields.__7__wrap24;
  this->fields.__1__state = -1;
  if ( v3 )
  {
    v4 = *v3;
    v5 = *(unsigned __int16 *)(*v3 + 302);
    if ( *(_WORD *)(*v3 + 302) )
    {
      v6 = (int *)(*(_QWORD *)(v4 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v6 - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        v6 += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = v4 + 16LL * *v6 + 312;
    }
    else
    {
LABEL_8:
      v7 = sub_1C65D04(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB2274 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardAIRoute___c_TypeInfo, v1);
    byte_4BB2274 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardAIRoute___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BB2275 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C13D24(&IWarBoardObjectData_TypeInfo, x);
    byte_4BB2275 = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
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
    p_method = sub_1C65D04(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_4BB2276 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key);
    byte_4BB2276 = 1;
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
  if ( (byte_4BB2277 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key);
    byte_4BB2277 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4BB2278 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__, x.fields.key);
    byte_4BB2278 = 1;
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

  if ( (byte_4BB2279 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C13D24(&IWarBoardObjectData_TypeInfo, x);
    byte_4BB2279 = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
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
    p_method = sub_1C65D04(x, IWarBoardObjectData_TypeInfo, 4LL);
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

  if ( (byte_4BB227A & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C13D24(&IWarBoardObjectData_TypeInfo, x);
    byte_4BB227A = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
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
    p_method = sub_1C65D04(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_4BB227B & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key);
    byte_4BB227B = 1;
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
    sub_1C13F80(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1C13F80(this, 0LL);
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
  if ( (byte_4BB227C & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1C13D24(&IWarBoardObjectData_TypeInfo, z);
    byte_4BB227C = 1;
  }
  if ( !z )
    sub_1C13F80(this, z);
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
    p_method = sub_1C65D04(z, IWarBoardObjectData_TypeInfo, 0LL);
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
    v12 = sub_1C65D04(z, IWarBoardObjectData_TypeInfo, 3LL);
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
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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

  if ( (byte_4BB227D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square);
    byte_4BB227D = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1C13F80(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_32B3CCC *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_1C13F80(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
    sub_1C13F88(this, *(_QWORD *)&x);
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
    sub_1C13F80(this, x);
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
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v11; // x5
  int32_t v12; // w19

  v4 = this;
  if ( (byte_4BB227E & 1) == 0 )
  {
    sub_1C13D24(&AStarSearch_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1C13D24(&IWarBoardObjectData_TypeInfo, v5);
    byte_4BB227E = 1;
  }
  if ( !x )
    goto LABEL_14;
  klass = x->klass;
  baseSquareIndex = v4->fields.baseSquareIndex;
  v8 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C65D04(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v12 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v12, 0, 0LL, v11);
  if ( !this )
LABEL_14:
    sub_1C13F80(this, x);
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
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4BB227F & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject);
    sub_1C13D24(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v6);
    sub_1C13D24(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v7);
    byte_4BB227F = 1;
  }
  v8 = sub_1C13F70(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_QWORD *)(v8 + 16) = targetObject;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)targetObject, v11, v12, v13, v14, v15, v16);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v18 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0LL);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 methodPtr_low; // x10
  int32_t baseIndex; // w23
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct IWarBoardObjectData_o *v14; // x20
  IWarBoardObjectData_c *v15; // x8
  int32_t actionIndex; // w19
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4BB2280 & 1) == 0 )
  {
    sub_1C13D24(&IWarBoardObjectData_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1C13D24(&WarBoardItemData_TypeInfo, v5);
    byte_4BB2280 = 1;
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
  v11 = *(unsigned __int16 *)(&klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C65D04(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v14 = v4->fields.targetObject;
  if ( !v14 )
LABEL_25:
    sub_1C13F80(this, x);
  v15 = v14->klass;
  actionIndex = x->fields.actionIndex;
  v17 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v18 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_22;
    }
    v19 = (__int64)&v15->vtable[*v18].method;
  }
  else
  {
LABEL_22:
    v19 = sub_1C65D04(v14, IWarBoardObjectData_TypeInfo, 0LL);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v19)(
                          v14,
                          *(_QWORD *)(v19 + 8));
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
  if ( (byte_4BB2281 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1C13D24(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        x);
    byte_4BB2281 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, x);
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