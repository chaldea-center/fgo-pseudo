void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x20
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v93; // x20
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v104; // x20
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v115; // x20
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *v126; // x20
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v137; // x20
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v148; // x20
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v159; // x20
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  WebViewManager_o *v172; // x0
  WarBoardData_o *monitor; // x0
  WebViewManager_o *v174; // x0
  WarBoardData_o *v175; // x0
  WebViewManager_o *v176; // x0
  WarBoardData_o *v177; // x0
  WebViewManager_o *v178; // x0
  WarBoardData_o *v179; // x0
  const MethodInfo *v180; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x0
  System_Int32_array *ActionTrendIds; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  BattleServantConfConponent_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x21
  System_Array_o *v189; // x21
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  __int64 v196; // x8
  unsigned __int64 v197; // x20
  int v198; // w19
  WarBoardAIRoute_PiecePersonality_o *v199; // x23
  WebViewManager_o *v200; // x0
  WarBoardData_o *v201; // x0
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v205; // x0
  const MethodInfo *v206; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v207; // x22
  __int64 v208; // x8
  System_Int32_array *v209; // x27
  unsigned __int64 v210; // x19
  __int64 v211; // x3
  __int64 v212; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x28
  WarBoardActionTrendEntity_o *v214; // x20
  WarBoardAIRoute_ActionTrendInfo_o *v215; // x21
  WarQuestSelectionMaster_o *v216; // x0
  const MethodInfo *v217; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v218; // x22
  __int64 v219; // x8
  System_Int32_array *v220; // x27
  unsigned __int64 v221; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *ratingOffsetList; // x0
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x27
  WarBoardReinforcementsMaster_o *v224; // x28
  WebViewManager_o *v225; // x0
  __int64 v226; // x1
  __int64 v227; // x2
  __int64 v228; // x3
  __int64 v229; // x4
  WarBoardData_o *v230; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v232; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v233; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v235; // x22
  unsigned __int64 v236; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v239; // x26
  __int64 v240; // x8
  unsigned __int64 v241; // x10
  int *v242; // x11
  __int64 v243; // x0
  __int64 v244; // x8
  unsigned __int64 v245; // x10
  int *v246; // x11
  __int64 v247; // x0
  int32_t *v248; // x22
  int32_t id; // w0
  int32_t v250; // w0
  const MethodInfo *v251; // x3
  __int64 v252; // x8
  unsigned __int64 v253; // x10
  int *v254; // x11
  __int64 v255; // x0
  __int64 v256; // x3
  __int64 v257; // x4
  _QWORD *p_klass; // x19
  BattleServantConfConponent_o *p_ratingBaseIds; // x20
  System_Array_o *v260; // x21
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  __int64 v267; // x8
  unsigned __int64 v268; // x21
  int32_t v269; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *v270; // x0
  WarEntity_o *v271; // x0
  __int64 v272; // x1
  __int64 v273; // x2
  __int64 v274; // x3
  __int64 v275; // x4
  WarEntity_o *v276; // x20
  __int64 v277; // x22
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  int32_t v284; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v285; // x22
  WarBoardEvalValueSquare_CalcEval_o *v286; // x25
  _QWORD *p_image; // x19
  BattleServantConfConponent_o *p_tacticalIds; // x21
  System_Array_o *v289; // x20
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  __int64 v296; // x8
  unsigned __int64 v297; // x21
  int32_t v298; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *v299; // x0
  WarEntity_o *v300; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v303; // x22
  const MethodInfo *v304; // x3
  System_String_array **v305; // x2
  System_String_array **v306; // x3
  System_Boolean_array **v307; // x4
  System_Int32_array **v308; // x5
  System_Int32_array *v309; // x6
  System_Int32_array *v310; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  WarBoardStageNpcEntity_o *v312; // [xsp+10h] [xbp-C0h]
  WarBoardAIRoute_o *v313; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_XWeaponTrail_Element__o **p_ratingBaseList; // [xsp+20h] [xbp-B0h]
  struct System_Int32_array *v315; // [xsp+28h] [xbp-A8h]
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **p_dicRatingbaseCalcValue; // [xsp+30h] [xbp-A0h]
  unsigned __int64 key; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_piecePersonalityDic; // [xsp+40h] [xbp-90h]
  DataManager_o *Instance; // [xsp+48h] [xbp-88h]
  int v320; // [xsp+50h] [xbp-80h]
  int v321; // [xsp+54h] [xbp-7Ch]
  WarBoardReinforcementsEntity_o *v322; // [xsp+58h] [xbp-78h] BYREF
  WarBoardStageReinforcementsEntity_o *v323; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *v324; // [xsp+68h] [xbp-68h] BYREF
  WarEntity_o *v325; // [xsp+70h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v327; // 0:w1.4
  System_RuntimeFieldHandle_o v328; // 0:w1.4
  System_RuntimeFieldHandle_o v329; // 0:w1.4

  if ( (byte_40F8BD9 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc);
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, v7);
    sub_B16FFC(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v19);
    sub_B16FFC(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__, v31);
    sub_B16FFC(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v32);
    sub_B16FFC(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v33);
    sub_B16FFC(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v34);
    sub_B16FFC(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v35);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v36);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v37);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v38);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v39);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v40);
    sub_B16FFC(&System_IDisposable_TypeInfo, v41);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v42);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v43);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v44);
    sub_B16FFC(&int___TypeInfo, v45);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v46);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v47);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v48);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v49);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v50);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v51);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v52);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v53);
    sub_B16FFC(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v54);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v55);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v56);
    sub_B16FFC(&WarBoardAIRoute_PiecePersonality_TypeInfo, v57);
    sub_B16FFC(&ShortestDistanceFromAllyMaster_TypeInfo, v58);
    sub_B16FFC(&ShortestDistanceFromAllyServant_TypeInfo, v59);
    sub_B16FFC(&ShortestDistanceFromEnemyMaster_TypeInfo, v60);
    sub_B16FFC(&ShortestDistanceFromEnemyServant_TypeInfo, v61);
    sub_B16FFC(&ShortestDistanceFromItem_TypeInfo, v62);
    sub_B16FFC(&ShortestDistanceFromPrioritySpace_TypeInfo, v63);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v64);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v65);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v66);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v67);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v68);
    sub_B16FFC(&Method_WarBoardAIRoute___ctor_b__42_0__, v69);
    sub_B16FFC(&WarBoardAiTargetCacher_TypeInfo, v70);
    byte_40F8BD9 = 1;
  }
  v325 = 0LL;
  entity = 0LL;
  v323 = 0LL;
  v324 = 0LL;
  v322 = 0LL;
  v321 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo,
                                                                                                  npc,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tacticalTrendList,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardRatingBase__TypeInfo,
                                                                                                  v78,
                                                                                                  v79,
                                                                                                  v80,
                                                                                                  v81);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v82,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v82;
  p_ratingBaseList = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.ratingBaseList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseList,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v93 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo,
                                                                                                   v89,
                                                                                                   v90,
                                                                                                   v91,
                                                                                                   v92);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v93,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v93;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.piecePersonalityDic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.piecePersonalityDic,
    (System_Int32_array **)v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v104 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo,
                                                                                                   v100,
                                                                                                   v101,
                                                                                                   v102,
                                                                                                   v103);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v104,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v104;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.allRouteList,
    (System_Int32_array **)v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v115 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B170CC(
                                                                                             System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo,
                                                                                             v111,
                                                                                             v112,
                                                                                             v113,
                                                                                             v114);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v115,
    (const MethodInfo_2D65284 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v115;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (System_Int32_array **)v115,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v126 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B170CC(
                                                                    System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo,
                                                                    v122,
                                                                    v123,
                                                                    v124,
                                                                    v125);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v126,
    (const MethodInfo_2DAEB24 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v126;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (System_Int32_array **)v126,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v137 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B170CC(
                                                                                             System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo,
                                                                                             v133,
                                                                                             v134,
                                                                                             v135,
                                                                                             v136);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v137,
    (const MethodInfo_2D65284 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v137;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyDesignationItem,
    (System_Int32_array **)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v148 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B170CC(
                                                                                             System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo,
                                                                                             v144,
                                                                                             v145,
                                                                                             v146,
                                                                                             v147);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v148,
    (const MethodInfo_2D65284 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = v148;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyTarget,
    (System_Int32_array **)v148,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154);
  v159 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo,
                                                                                                    v155,
                                                                                                    v156,
                                                                                                    v157,
                                                                                                    v158);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v159,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v159;
  p_dicRatingbaseCalcValue = &this->fields.dicRatingbaseCalcValue;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicRatingbaseCalcValue,
    (System_Int32_array **)v159,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.npcData,
    (System_Int32_array **)npc,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  if ( !npc )
    goto LABEL_130;
  this->fields.forceId = npc->fields.forceId;
  this->fields.groupId = npc->fields.groupId;
  this->fields.pickValue = npc->fields.pickValue;
  v172 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v172 )
    goto LABEL_130;
  monitor = (WarBoardData_o *)v172[4].monitor;
  if ( !monitor )
    goto LABEL_130;
  this->fields.moveCost = WarBoardData__GetMoveCost(monitor, this->fields.forceId, this->fields.groupId, 0, 0, 0LL);
  v174 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v174 )
    goto LABEL_130;
  v175 = (WarBoardData_o *)v174[4].monitor;
  if ( !v175 )
    goto LABEL_130;
  this->fields.masterMoveCost = WarBoardData__GetMoveCost(v175, this->fields.forceId, this->fields.groupId, 0, 1, 0LL);
  v176 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v176 )
    goto LABEL_130;
  v177 = (WarBoardData_o *)v176[4].monitor;
  if ( !v177 )
    goto LABEL_130;
  this->fields.attackCost = WarBoardData__GetAttackCost(v177, this->fields.forceId, this->fields.groupId, 0LL);
  v178 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v178 )
    goto LABEL_130;
  v179 = (WarBoardData_o *)v178[4].monitor;
  if ( !v179 )
    goto LABEL_130;
  this->fields.wallAttackCost = WarBoardData__GetWallAttackCost(v179, this->fields.forceId, this->fields.groupId, 0LL);
  WarBoardAIRoute__Clear(this, v180);
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    goto LABEL_130;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    piecePersonalityDic,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  if ( !*p_ratingBaseList )
    goto LABEL_130;
  p_tacticalTrendList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.tacticalTrendList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    *p_ratingBaseList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
  v312 = npc;
  p_aiIds = (BattleServantConfConponent_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v189 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v184);
    v327.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v189, v327, 0LL);
    p_aiIds->klass = (BattleServantConfConponent_c *)v189;
    sub_B16F98(p_aiIds, (System_Int32_array **)v189, v190, v191, v192, v193, v194, v195);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_130;
  }
  v196 = *(_QWORD *)&aiIds->max_length;
  v313 = this;
  if ( (int)v196 >= 1 )
  {
    v197 = 0LL;
    v315 = aiIds;
    do
    {
      if ( v197 >= (unsigned int)v196 )
        goto LABEL_131;
      v198 = aiIds->m_Items[v197 + 1];
      v199 = (WarBoardAIRoute_PiecePersonality_o *)sub_B170CC(
                                                     WarBoardAIRoute_PiecePersonality_TypeInfo,
                                                     v183,
                                                     v184,
                                                     v185,
                                                     v186);
      WarBoardAIRoute_PiecePersonality___ctor(v199, 0LL);
      v200 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v200 )
        goto LABEL_130;
      v201 = (WarBoardData_o *)v200[4].monitor;
      if ( !v201 )
        goto LABEL_130;
      key = v197;
      Piece = WarBoardData__GetPiece(v201, this->fields.forceId, this->fields.groupId, v197, 1, 0LL);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v198, v198 >= 1) )
      {
        if ( !Instance )
          goto LABEL_130;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_130;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          v205 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   Instance,
                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_130;
          v207 = (DataMasterBase_WarMaster__WarEntity__int__o *)v205;
          ActionTrendIds = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)entity, v206);
          if ( !ActionTrendIds )
            goto LABEL_130;
          v208 = *(_QWORD *)&ActionTrendIds->max_length;
          v209 = ActionTrendIds;
          if ( (int)v208 >= 1 )
          {
            v210 = 0LL;
            while ( v210 < (unsigned int)v208 )
            {
              if ( !v207 )
                goto LABEL_130;
              ActionTrendIds = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       v207,
                                                       &v325,
                                                       v209->m_Items[v210 + 1],
                                                       (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)ActionTrendIds & 1) != 0 )
              {
                if ( !v199 )
                  goto LABEL_130;
                actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v199->fields.actionTrandList;
                v214 = (WarBoardActionTrendEntity_o *)v325;
                v215 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B170CC(
                                                              WarBoardAIRoute_ActionTrendInfo_TypeInfo,
                                                              v183,
                                                              v184,
                                                              v211,
                                                              v212);
                WarBoardAIRoute_ActionTrendInfo___ctor(v215, v214, 0LL);
                if ( !actionTrandList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  actionTrandList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v215,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
              }
              LODWORD(v208) = v209->max_length;
              if ( (__int64)++v210 >= (int)v208 )
                goto LABEL_38;
            }
LABEL_131:
            sub_B17100(ActionTrendIds, v183, v184);
            sub_B170A0();
          }
LABEL_38:
          v216 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   Instance,
                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_130;
          v218 = (DataMasterBase_WarMaster__WarEntity__int__o *)v216;
          ActionTrendIds = WarBoardAIEntity__GetRatingOffsetIds((WarBoardAIEntity_o *)entity, v217);
          this = v313;
          if ( !ActionTrendIds )
            goto LABEL_130;
          v219 = *(_QWORD *)&ActionTrendIds->max_length;
          v220 = ActionTrendIds;
          if ( (int)v219 >= 1 )
          {
            v221 = 0LL;
            while ( v221 < (unsigned int)v219 )
            {
              if ( !v218 )
                goto LABEL_130;
              ActionTrendIds = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       v218,
                                                       &v324,
                                                       v220->m_Items[v221 + 1],
                                                       (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)ActionTrendIds & 1) != 0 )
              {
                if ( !v199 )
                  goto LABEL_130;
                ratingOffsetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v199->fields.ratingOffsetList;
                if ( !ratingOffsetList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  ratingOffsetList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v324,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
              }
              LODWORD(v219) = v220->max_length;
              if ( (__int64)++v221 >= (int)v219 )
                goto LABEL_49;
            }
            goto LABEL_131;
          }
        }
      }
LABEL_49:
      if ( !*p_piecePersonalityDic )
        goto LABEL_130;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        *p_piecePersonalityDic,
        key,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v199,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      aiIds = v315;
      v197 = key + 1;
      LODWORD(v196) = v315->max_length;
    }
    while ( (__int64)(key + 1) < (int)v196 );
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v224 = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  v225 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v225 )
    goto LABEL_130;
  v230 = (WarBoardData_o *)v225[4].monitor;
  if ( !v230 )
    goto LABEL_130;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v230->fields.pieces;
  v232 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                              System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                              v226,
                                                                              v227,
                                                                              v228,
                                                                              v229);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v232,
    (Il2CppObject *)this,
    Method_WarBoardAIRoute___ctor_b__42_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v233 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           pieces,
           (System_Func_TSource__bool__o *)v232,
           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !v233 )
    goto LABEL_130;
  klass = v233->klass;
  v235 = v233;
  if ( *(_WORD *)&v233->klass->_2.bitflags1 )
  {
    v236 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v236;
      p_offset += 4;
      if ( v236 >= *(unsigned __int16 *)&v233->klass->_2.bitflags1 )
        goto LABEL_61;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_61:
    p_method = sub_AAFEF8(v233, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL);
  }
  v239 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
           v235,
           *(_QWORD *)(p_method + 8));
  if ( !v239 )
    sub_B170D4();
  while ( 1 )
  {
    v240 = *(_QWORD *)v239;
    if ( *(_WORD *)(*(_QWORD *)v239 + 298LL) )
    {
      v241 = 0LL;
      v242 = (int *)(*(_QWORD *)(v240 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v242 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v241;
        v242 += 4;
        if ( v241 >= *(unsigned __int16 *)(*(_QWORD *)v239 + 298LL) )
          goto LABEL_68;
      }
      v243 = v240 + 16LL * *v242 + 312;
    }
    else
    {
LABEL_68:
      v243 = sub_AAFEF8(v239, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v243)(v239, *(_QWORD *)(v243 + 8)) & 1) == 0 )
      break;
    v244 = *(_QWORD *)v239;
    if ( *(_WORD *)(*(_QWORD *)v239 + 298LL) )
    {
      v245 = 0LL;
      v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v246 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v245;
        v246 += 4;
        if ( v245 >= *(unsigned __int16 *)(*(_QWORD *)v239 + 298LL) )
          goto LABEL_75;
      }
      v247 = v244 + 16LL * *v246 + 312;
    }
    else
    {
LABEL_75:
      v247 = sub_AAFEF8(v239, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v248 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v247)(v239, *(_QWORD *)(v247 + 8));
    if ( !v248 )
      sub_B170D4();
    if ( !*p_piecePersonalityDic )
      sub_B170D4();
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)*p_piecePersonalityDic,
            v248[7],
            (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v230, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B170D4();
      if ( WarBoardStageReinforcementsMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v323, id, v248[70], 0LL) )
      {
        if ( !v323 )
          sub_B170D4();
        v250 = BasicHelper__IndexValue_int_(
                 v323->fields.reinforcementsIds,
                 v248[71],
                 -1,
                 (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
        if ( !v224 )
          sub_B170D4();
        if ( WarBoardReinforcementsMaster__TryGetEntity(v224, &v322, v250, 0LL) )
        {
          if ( !v322 )
            sub_B170D4();
          WarBoardAIRoute__AddPiecePersonalityDic(this, v322->fields.aiId, v248[7], v251);
        }
      }
    }
  }
  v320 = 833;
  ++v321;
  v252 = *(_QWORD *)v239;
  if ( *(_WORD *)(*(_QWORD *)v239 + 298LL) )
  {
    v253 = 0LL;
    v254 = (int *)(*(_QWORD *)(v252 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v254 - 1) != System_IDisposable_TypeInfo )
    {
      ++v253;
      v254 += 4;
      if ( v253 >= *(unsigned __int16 *)(*(_QWORD *)v239 + 298LL) )
        goto LABEL_91;
    }
    v255 = v252 + 16LL * *v254 + 312;
  }
  else
  {
LABEL_91:
    v255 = sub_AAFEF8(v239, System_IDisposable_TypeInfo, 0LL);
  }
  ActionTrendIds = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v255)(v239, *(_QWORD *)(v255 + 8));
  if ( v321 && *(&v320 + v321 - 1) == 833 )
    --v321;
  p_ratingBaseIds = (BattleServantConfConponent_o *)&v312->fields.ratingBaseIds;
  p_klass = &v312->fields.ratingBaseIds->obj.klass;
  if ( !p_klass )
  {
    v260 = (System_Array_o *)sub_B17014(int___TypeInfo, 6LL, v184);
    v328.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v260, v328, 0LL);
    p_ratingBaseIds->klass = (BattleServantConfConponent_c *)v260;
    sub_B16F98(p_ratingBaseIds, (System_Int32_array **)v260, v261, v262, v263, v264, v265, v266);
    p_klass = &p_ratingBaseIds->klass->_1.image;
    if ( !p_ratingBaseIds->klass )
LABEL_130:
      sub_B170D4();
  }
  v267 = p_klass[3];
  if ( (int)v267 >= 1 )
  {
    v268 = 0LL;
    while ( 2 )
    {
      if ( v268 >= (unsigned int)v267 )
        goto LABEL_131;
      if ( Instance )
      {
        v269 = *((_DWORD *)p_klass + v268 + 8);
        v270 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( v270 )
        {
          v271 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v270,
                   v269,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( v271 )
          {
            v276 = v271;
            switch ( *(&v271->fields.id + 1) )
            {
              case 0:
                v277 = sub_B170CC(ShortestDistanceFromAllyServant_TypeInfo, v272, v273, v274, v275);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v277, 0LL);
                if ( !v277 )
                  goto LABEL_130;
                goto LABEL_116;
              case 1:
                v277 = sub_B170CC(ShortestDistanceFromEnemyServant_TypeInfo, v272, v273, v274, v275);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v277, 0LL);
                if ( !v277 )
                  goto LABEL_130;
                goto LABEL_116;
              case 2:
                v277 = sub_B170CC(ShortestDistanceFromAllyMaster_TypeInfo, v272, v273, v274, v275);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v277, 0LL);
                if ( !v277 )
                  goto LABEL_130;
                goto LABEL_116;
              case 3:
                v277 = sub_B170CC(ShortestDistanceFromEnemyMaster_TypeInfo, v272, v273, v274, v275);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v277, 0LL);
                if ( !v277 )
                  goto LABEL_130;
                goto LABEL_116;
              case 4:
                v277 = sub_B170CC(ShortestDistanceFromItem_TypeInfo, v272, v273, v274, v275);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v277, 0LL);
                if ( !v277 )
                  goto LABEL_130;
                goto LABEL_116;
              case 5:
                v277 = sub_B170CC(ShortestDistanceFromPrioritySpace_TypeInfo, v272, v273, v274, v275);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v277, 0LL);
                if ( !v277 )
                  goto LABEL_130;
LABEL_116:
                *(_QWORD *)(v277 + 16) = v276;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v277 + 16),
                  (System_Int32_array **)v276,
                  v278,
                  v279,
                  v280,
                  v281,
                  v282,
                  v283);
                if ( !*p_ratingBaseList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_ratingBaseList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v277,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
LABEL_118:
                v284 = v276->fields.id;
                v285 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_dicRatingbaseCalcValue;
                v286 = (WarBoardEvalValueSquare_CalcEval_o *)sub_B170CC(
                                                               WarBoardEvalValueSquare_CalcEval_TypeInfo,
                                                               v272,
                                                               v273,
                                                               v274,
                                                               v275);
                WarBoardEvalValueSquare_CalcEval___ctor(v286, 0LL);
                if ( !v285 )
                  goto LABEL_130;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v285,
                  v284,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v286,
                  (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v267) = *((_DWORD *)p_klass + 6);
                if ( (__int64)++v268 >= (int)v267 )
                  goto LABEL_120;
                continue;
              default:
                goto LABEL_118;
            }
          }
        }
      }
      goto LABEL_130;
    }
  }
LABEL_120:
  p_tacticalIds = (BattleServantConfConponent_o *)&v312->fields.tacticalIds;
  p_image = &v312->fields.tacticalIds->obj.klass;
  if ( !p_image )
  {
    v289 = (System_Array_o *)sub_B17014(int___TypeInfo, 5LL, v184);
    v329.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v289, v329, 0LL);
    p_tacticalIds->klass = (BattleServantConfConponent_c *)v289;
    sub_B16F98(p_tacticalIds, (System_Int32_array **)v289, v290, v291, v292, v293, v294, v295);
    p_image = &p_tacticalIds->klass->_1.image;
    if ( !p_tacticalIds->klass )
      goto LABEL_130;
  }
  v296 = p_image[3];
  if ( (int)v296 >= 1 )
  {
    v297 = 0LL;
    while ( v297 < (unsigned int)v296 )
    {
      if ( !Instance )
        goto LABEL_130;
      v298 = *((_DWORD *)p_image + v297 + 8);
      v299 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !v299 )
        goto LABEL_130;
      v300 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v299,
               v298,
               (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      if ( !*p_tacticalTrendList )
        goto LABEL_130;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_tacticalTrendList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v300,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
      LODWORD(v296) = *((_DWORD *)p_image + 6);
      if ( (__int64)++v297 >= (int)v296 )
        goto LABEL_129;
    }
    goto LABEL_131;
  }
LABEL_129:
  forceId = v313->fields.forceId;
  groupId = v313->fields.groupId;
  v303 = (WarBoardAiTargetCacher_o *)sub_B170CC(WarBoardAiTargetCacher_TypeInfo, v183, v184, v256, v257);
  WarBoardAiTargetCacher___ctor(v303, forceId, groupId, v304);
  v313->fields.aiTargetCacher = v303;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v313->fields.aiTargetCacher,
    (System_Int32_array **)v303,
    v305,
    v306,
    v307,
    v308,
    v309,
    v310);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  WarBoardAIRoute___c__DisplayClass43_0_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *v30; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  WarBoardAIRoute_PiecePersonality_o *v38; // x21
  WarBoardAIEntity_o *Entity; // x0
  const MethodInfo *v40; // x1
  WarBoardActionTrendEntity_o *ActionTrendIds; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x2
  struct System_Int32_array *conditionIds; // x8
  WarBoardActionTrendEntity_o *v45; // x25
  unsigned __int64 v46; // x19
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v50; // x27
  WarBoardAIRoute_ActionTrendInfo_o *v51; // x28
  struct System_Int32_array *v52; // x8
  WarBoardActionTrendEntity_o *v53; // x22
  unsigned __int64 v54; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *ratingOffsetList; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v57; // x0
  WarBoardAIEntity_o *v58; // [xsp+8h] [xbp-68h]
  WarBoardAIRoute_o *v59; // [xsp+18h] [xbp-58h]

  if ( (byte_40F8BDA & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardAIMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v16);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__, v17);
    sub_B16FFC(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v20);
    sub_B16FFC(&WarBoardAIRoute_PiecePersonality_TypeInfo, v21);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v22);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v23);
    byte_40F8BDA = 1;
  }
  v24 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_B170CC(
                                                     WarBoardAIRoute___c__DisplayClass43_0_TypeInfo,
                                                     *(_QWORD *)&aiId,
                                                     *(_QWORD *)&pieceIndex,
                                                     method,
                                                     v4);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_32;
  v24->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v30 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B170CC(
                                                                                      System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo,
                                                                                      v25,
                                                                                      v26,
                                                                                      v27,
                                                                                      v28);
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
    v30,
    (Il2CppObject *)v24,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    (const MethodInfo_2B5D860 *)Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v30,
         (const MethodInfo_18C8798 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v38 = (WarBoardAIRoute_PiecePersonality_o *)sub_B170CC(WarBoardAIRoute_PiecePersonality_TypeInfo, v34, v35, v36, v37);
  WarBoardAIRoute_PiecePersonality___ctor(v38, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   aiId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_32;
  v58 = Entity;
  ActionTrendIds = (WarBoardActionTrendEntity_o *)WarBoardAIEntity__GetActionTrendIds(Entity, v40);
  if ( !ActionTrendIds )
    goto LABEL_32;
  v59 = this;
  conditionIds = ActionTrendIds->fields.conditionIds;
  v45 = ActionTrendIds;
  if ( (int)conditionIds >= 1 )
  {
    v46 = 0LL;
    while ( v46 < (unsigned int)conditionIds )
    {
      if ( !v32 )
        goto LABEL_32;
      ActionTrendIds = (WarBoardActionTrendEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v32,
                                                        *(&v45->fields.viewPoint + v46),
                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( ActionTrendIds )
      {
        if ( !v38 )
          goto LABEL_32;
        actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38->fields.actionTrandList;
        v50 = ActionTrendIds;
        v51 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B170CC(
                                                     WarBoardAIRoute_ActionTrendInfo_TypeInfo,
                                                     v42,
                                                     v43,
                                                     v47,
                                                     v48);
        WarBoardAIRoute_ActionTrendInfo___ctor(v51, v50, 0LL);
        if ( !actionTrandList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          actionTrandList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(conditionIds) = v45->fields.conditionIds;
      if ( (__int64)++v46 >= (int)conditionIds )
        goto LABEL_20;
    }
LABEL_33:
    sub_B17100(ActionTrendIds, v42, v43);
    sub_B170A0();
  }
LABEL_20:
  ActionTrendIds = (WarBoardActionTrendEntity_o *)WarBoardAIEntity__GetRatingOffsetIds(v58, v42);
  if ( !ActionTrendIds )
    goto LABEL_32;
  v52 = ActionTrendIds->fields.conditionIds;
  v53 = ActionTrendIds;
  if ( (int)v52 >= 1 )
  {
    v54 = 0LL;
    while ( v54 < (unsigned int)v52 )
    {
      if ( !v33 )
        goto LABEL_32;
      ActionTrendIds = (WarBoardActionTrendEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v33,
                                                        *(&v53->fields.viewPoint + v54),
                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( ActionTrendIds )
      {
        if ( !v38 )
          goto LABEL_32;
        v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)ActionTrendIds;
        ratingOffsetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38->fields.ratingOffsetList;
        if ( !ratingOffsetList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          ratingOffsetList,
          v55,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
      }
      LODWORD(v52) = v53->fields.conditionIds;
      if ( (__int64)++v54 >= (int)v52 )
        goto LABEL_30;
    }
    goto LABEL_33;
  }
LABEL_30:
  v57 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v59->fields.piecePersonalityDic;
  if ( !v57 )
LABEL_32:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v57,
    v24->fields.pieceIndex,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v38,
    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
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
  WebViewManager_o *Instance; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  _QWORD *monitor; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x22
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x20
  __int64 isMaster; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x24
  int v81; // w8
  unsigned int v82; // w25
  int v83; // w8
  int32_t forceId; // w9
  __int64 v85; // x23
  System_Int32_array **v86; // x0
  WarBoardAIRoute_o *v87; // x25
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x1
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueKeyDesignationItem; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueKeyTarget; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueKeyAdvantagePieceData; // x0
  WebViewManager_o *v133; // x0
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v138; // x23
  int32_t v139; // w19
  int32_t groupId; // w20
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  WarBoardAIRoute_AIRouteMasterData_o *v145; // x21
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  __int64 v155; // x4
  System_Collections_Generic_Dictionary_int__uint__o *v156; // x19
  System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // x20
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  struct WarBoardPieceData_array *allAllyPiece; // x26
  int max_length; // w8
  signed int v166; // w9
  WarBoardPieceData_o *v167; // x8
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  int32_t forceId_k__BackingField; // w8
  int32_t v173; // w9
  WarBoardAIRoute_AIRouteMasterData_o *v174; // x0
  int32_t v175; // w1
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  __int64 v179; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *piecePersonalityDic; // x0
  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *v181; // x0
  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c *klass; // x8
  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *v183; // x20
  unsigned __int64 v184; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v187; // w8
  unsigned int v188; // w9
  WarBoardActionTrendConditionEntity_o *v189; // x26
  struct System_Int32_array *conditionTypes; // x28
  __int64 v191; // x8
  unsigned __int64 v192; // x27
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x1
  const MethodInfo *v195; // x2
  const MethodInfo *v196; // x1
  __int64 v197; // x2
  __int64 v198; // x3
  __int64 v199; // x4
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v200; // x19
  const MethodInfo *v201; // x3
  WarBoardAiTargetCacher_o *v202; // x19
  const MethodInfo *v203; // x1
  int64_t v204; // x1
  const MethodInfo *v205; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x19
  int64_t v207; // x22
  const MethodInfo *v208; // x1
  int64_t v209; // x25
  __int64 v210; // x1
  __int64 v211; // x2
  __int64 v212; // x3
  __int64 v213; // x4
  WarBoardAIRoute_TargetData_o *v214; // x23
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  const MethodInfo *v216; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *v217; // x2
  __int64 v218; // x3
  __int64 v219; // x4
  int32_t squareIndex; // w19
  unsigned int v221; // w24
  WarBoardAIRoute___c__DisplayClass45_0_o *v222; // x21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v225; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v226; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x22
  WarBoardAIRoute_o *v228; // x0
  const MethodInfo *v229; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicSquarePutSqareIndex; // x19
  int64_t v231; // x1
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v233; // x22
  WarBoardSquareData_o *v234; // x21
  int64_t v235; // x22
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x3
  __int64 v239; // x4
  WarBoardAIRoute_TargetData_o *v240; // x19
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v241; // x21
  const MethodInfo *v242; // x1
  int64_t v243; // x1
  __int64 v244; // x8
  unsigned __int64 v245; // x10
  int *v246; // x11
  __int64 v247; // x0
  __int64 v248; // x8
  unsigned __int64 v249; // x10
  int *v250; // x11
  __int64 v251; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v252; // x0
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  int v254; // w19
  __int64 v255; // x8
  unsigned __int64 v256; // x10
  int *v257; // x11
  __int64 v258; // x21
  __int64 v259; // x0
  const MethodInfo *v260; // x1
  WarBoardAiTargetCacher_o *v261; // x0
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x3
  __int64 v265; // x4
  WarBoardAiTargetCacher_o *v266; // x20
  WarBoardAIRoute___c_c *v267; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x19
  Il2CppObject *v270; // x21
  struct WarBoardAIRoute___c_StaticFields *v271; // x0
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v278; // x0
  IWarBoardObjectData_array *v279; // x0
  const MethodInfo *v280; // x2
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v281; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v282; // x0
  __int64 v283; // x3
  __int64 v284; // x4
  WarBoardAIRoute_AdvantagePieceData_o *v285; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_array *v287; // x22
  int v288; // w8
  int32_t v289; // w21
  unsigned int v290; // w23
  __int64 v291; // x8
  __int64 v292; // x24
  BattleServantData_o *v293; // x0
  int32_t ClassId; // w19
  float Magnification; // s9
  float v296; // s10
  float v297; // s8
  bool v298; // cc
  float v299; // s9
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *dicAttackAdvantageServant; // x0
  char v301; // w19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *dicDefenseAdvantageServant; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *dicAttackDisAdvantageServant; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *dicDefenseDisAdvantageServant; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *dicClassAdvantageServant; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *dicClassDisAdvantageServant; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v307; // x0
  int v308; // w8
  const MethodInfo *v309; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+8h] [xbp-118h]
  struct WarBoardPieceData_array *v311; // [xsp+10h] [xbp-110h]
  WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+20h] [xbp-100h]
  int v313; // [xsp+2Ch] [xbp-F4h]
  int v314; // [xsp+30h] [xbp-F0h]
  signed int v315; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v317; // [xsp+40h] [xbp-E0h]
  unsigned int v318; // [xsp+54h] [xbp-CCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v320; // [xsp+60h] [xbp-C0h]
  WarBoardAIRoute_o *v321; // [xsp+68h] [xbp-B8h]
  WarBoardAIRoute_DesignationItemData_o *v322; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v323; // [xsp+88h] [xbp-98h]
  _DWORD v324[1]; // [xsp+90h] [xbp-90h]
  int v325; // [xsp+94h] [xbp-8Ch]
  bool notSquareTarget; // [xsp+98h] [xbp-88h] BYREF
  int32_t condType; // [xsp+9Ch] [xbp-84h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_40F8BDC & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method);
    sub_B16FFC(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&WarBoardAIRoute_DesignationItemData_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v24);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v25);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v26);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v27);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v28);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v29);
    sub_B16FFC(&Method_System_Func_WarBoardItemData__bool___ctor__, v30);
    sub_B16FFC(&Method_System_Func_WarBoardSquareData__bool___ctor__, v31);
    sub_B16FFC(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v32);
    sub_B16FFC(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v33);
    sub_B16FFC(&System_Func_WarBoardSquareData__bool__TypeInfo, v34);
    sub_B16FFC(&System_Func_IWarBoardObjectData__bool__TypeInfo, v35);
    sub_B16FFC(&System_Func_WarBoardItemData__bool__TypeInfo, v36);
    sub_B16FFC(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v37);
    sub_B16FFC(&System_IDisposable_TypeInfo, v38);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v39);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v40);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v43);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v44);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v45);
    sub_B16FFC(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v46);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v47);
    sub_B16FFC(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v48);
    sub_B16FFC(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v49);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v51);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v52);
    sub_B16FFC(&WarBoardAIRoute_TargetData_TypeInfo, v53);
    sub_B16FFC(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v54);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v55);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v56);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v57);
    sub_B16FFC(&WarBoardAIRoute___c_TypeInfo, v58);
    sub_B16FFC(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v59);
    byte_40F8BDC = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  v325 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  monitor = Instance[4].monitor;
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v61,
                                                                                                  v62,
                                                                                                  v63,
                                                                                                  v64);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v67,
                                                                                                  v68,
                                                                                                  v69,
                                                                                                  v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v72,
                                                                                                  v73,
                                                                                                  v74,
                                                                                                  v75);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !monitor )
    goto LABEL_206;
  v321 = this;
  v80 = monitor[6];
  if ( !v80 )
    goto LABEL_206;
  v81 = *(_DWORD *)(v80 + 24);
  if ( v81 >= 1 )
  {
    v82 = 0;
    while ( 1 )
    {
      if ( v82 >= v81 )
        goto LABEL_207;
      if ( !v76 )
        goto LABEL_206;
      v85 = *(_QWORD *)(v80 + 8LL * (int)v82 + 32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v76,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      if ( !v85 )
        goto LABEL_206;
      if ( !*(_BYTE *)(v85 + 60) )
      {
        v83 = *(_DWORD *)(v85 + 20);
        forceId = v321->fields.forceId;
        if ( v83 != forceId )
          goto LABEL_12;
        if ( *(_DWORD *)(v85 + 24) == v321->fields.groupId )
          break;
      }
LABEL_20:
      v81 = *(_DWORD *)(v80 + 24);
      if ( (int)++v82 >= v81 )
        goto LABEL_21;
    }
    if ( !v66 )
      goto LABEL_206;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v66,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    v83 = *(_DWORD *)(v85 + 20);
    forceId = v321->fields.forceId;
LABEL_12:
    if ( v83 != forceId )
    {
      if ( !v71 )
        goto LABEL_206;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v71,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      isMaster = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v85, 0LL);
      if ( (isMaster & 1) != 0 )
        v321->fields.enemyMasterSquareIndex = *(_DWORD *)(v85 + 64);
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( !v66 )
    goto LABEL_206;
  v86 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v66,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v87 = v321;
  v321->fields.allAllyPiece = (struct WarBoardPieceData_array *)v86;
  sub_B16F98((BattleServantConfConponent_o *)&v321->fields.allAllyPiece, v86, v88, v89, v90, v91, v92, v93);
  if ( !v71 )
    goto LABEL_206;
  v94 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v71,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v321->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v321->fields.allEnemyPiece, v94, v95, v96, v97, v98, v99, v100);
  v101 = (System_Int32_array **)monitor[7];
  v321->fields.allSquare = (struct WarBoardSquareData_array *)v101;
  sub_B16F98((BattleServantConfConponent_o *)&v321->fields.allSquare, v101, v102, v103, v104, v105, v106, v107);
  v108 = (System_Int32_array **)monitor[9];
  v321->fields.allItemData = (struct WarBoardItemData_array *)v108;
  sub_B16F98((BattleServantConfConponent_o *)&v321->fields.allItemData, v108, v109, v110, v111, v112, v113, v114);
  v115 = (System_Int32_array **)monitor[10];
  v321->fields.allTreasureData = (struct WarBoardTreasureData_array *)v115;
  sub_B16F98((BattleServantConfConponent_o *)&v321->fields.allTreasureData, v115, v116, v117, v118, v119, v120, v121);
  v122 = (System_Int32_array **)monitor[11];
  v321->fields.allWallData = (struct WarBoardWallData_array *)v122;
  sub_B16F98((BattleServantConfConponent_o *)&v321->fields.allWallData, v122, v123, v124, v125, v126, v127, v128);
  dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v321->fields.dictionaryCreateRouteDataEvalValue;
  p_allEnemyPiece = &v321->fields.allEnemyPiece;
  if ( !dictionaryCreateRouteDataEvalValue )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_object__float___Clear(
    dictionaryCreateRouteDataEvalValue,
    (const MethodInfo_2DAF8B8 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  dicUniqueKeyDesignationItem = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v321->fields.dicUniqueKeyDesignationItem;
  if ( !dicUniqueKeyDesignationItem )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    dicUniqueKeyDesignationItem,
    (const MethodInfo_2D66014 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  dicUniqueKeyTarget = v321->fields.dicUniqueKeyTarget;
  if ( !dicUniqueKeyTarget )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    dicUniqueKeyTarget,
    (const MethodInfo_2D66014 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  dicUniqueKeyAdvantagePieceData = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v321->fields.dicUniqueKeyAdvantagePieceData;
  if ( !dicUniqueKeyAdvantagePieceData )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    dicUniqueKeyAdvantagePieceData,
    (const MethodInfo_2D66014 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  v133 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v133 )
    goto LABEL_206;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v133,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v138 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_IWarBoardObjectData__TypeInfo,
                                                                                                   v134,
                                                                                                   v135,
                                                                                                   v136,
                                                                                                   v137);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v138,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v138 )
    goto LABEL_206;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v138,
    (System_Collections_Generic_IEnumerable_T__o *)v321->fields.allItemData,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v138,
    (System_Collections_Generic_IEnumerable_T__o *)v321->fields.allTreasureData,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v138,
    (System_Collections_Generic_IEnumerable_T__o *)v321->fields.allWallData,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v138,
    (System_Collections_Generic_IEnumerable_T__o *)v76,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  v139 = v321->fields.forceId;
  groupId = v321->fields.groupId;
  v145 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B170CC(
                                                  WarBoardAIRoute_AIRouteMasterData_TypeInfo,
                                                  v141,
                                                  v142,
                                                  v143,
                                                  v144);
  WarBoardAIRoute_AIRouteMasterData___ctor(v145, v139, groupId, 0LL);
  v321->fields.aiRouteMasterData = v145;
  p_aiRouteMasterData = &v321->fields.aiRouteMasterData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v321->fields.aiRouteMasterData,
    (System_Int32_array **)v145,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v156 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                 v152,
                                                                 v153,
                                                                 v154,
                                                                 v155);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v156,
    (const MethodInfo_2DF0020 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  p_placePieceData = &v321->fields.placePieceData;
  v321->fields.placePieceData = v156;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v321->fields.placePieceData,
    (System_Int32_array **)v156,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  allAllyPiece = v321->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_206;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v166 = 0;
    v313 = 0;
    v320 = v138;
    v311 = v321->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v166 >= (unsigned int)max_length )
        goto LABEL_207;
      v167 = allAllyPiece->m_Items[v166];
      if ( !v167 )
        goto LABEL_206;
      v315 = v166;
      if ( !*p_placePieceData )
        goto LABEL_206;
      pieceData = allAllyPiece->m_Items[v166];
      isMaster = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                   *p_placePieceData,
                   v167->fields._nowSquareIndex_k__BackingField,
                   (const MethodInfo_2DF0E28 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( (isMaster & 1) != 0 )
        goto LABEL_203;
      if ( !*p_placePieceData )
        goto LABEL_206;
      System_Collections_Generic_Dictionary_int__uint___Add(
        *p_placePieceData,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2DF0BC4 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v173 = v87->fields.forceId;
      if ( forceId_k__BackingField != v173 )
        goto LABEL_64;
      if ( pieceData->fields._groupId_k__BackingField == v87->fields.groupId )
        break;
LABEL_65:
      if ( pieceData->fields._groupId_k__BackingField != v87->fields.groupId )
        goto LABEL_69;
      v174 = *p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v175 = 2;
LABEL_68:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(v174, v175, pieceData, 0LL);
LABEL_69:
      v322 = (WarBoardAIRoute_DesignationItemData_o *)sub_B170CC(
                                                        WarBoardAIRoute_DesignationItemData_TypeInfo,
                                                        v168,
                                                        v169,
                                                        v170,
                                                        v171);
      WarBoardAIRoute_DesignationItemData___ctor(v322, 0LL);
      v323 = (WarBoardAIRoute_PutSquareTarget_o *)sub_B170CC(
                                                    WarBoardAIRoute_PutSquareTarget_TypeInfo,
                                                    v176,
                                                    v177,
                                                    v178,
                                                    v179);
      WarBoardAIRoute_PutSquareTarget___ctor(v323, 0LL);
      piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v87->fields.piecePersonalityDic;
      if ( !piecePersonalityDic )
        goto LABEL_206;
      isMaster = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   piecePersonalityDic,
                   pieceData->fields._index_k__BackingField,
                   &value,
                   (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( (isMaster & 1) != 0 )
      {
        if ( !value )
          goto LABEL_206;
        v181 = WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                 (WarBoardAIRoute_PiecePersonality_o *)value,
                 0LL);
        if ( !v181 )
          goto LABEL_206;
        klass = v181->klass;
        v183 = v181;
        if ( *(_WORD *)&v181->klass->_2.bitflags1 )
        {
          v184 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            ++v184;
            p_offset += 4;
            if ( v184 >= *(unsigned __int16 *)&v181->klass->_2.bitflags1 )
              goto LABEL_77;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_77:
          p_method = sub_AAFEF8(
                       v181,
                       System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                       0LL);
        }
        v317 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *, _QWORD))p_method)(
                 v183,
                 *(_QWORD *)(p_method + 8));
        if ( !v317 )
          sub_B170D4();
        while ( 1 )
        {
LABEL_122:
          v244 = *(_QWORD *)v317;
          if ( *(_WORD *)(*(_QWORD *)v317 + 298LL) )
          {
            v245 = 0LL;
            v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v246 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v245;
              v246 += 4;
              if ( v245 >= *(unsigned __int16 *)(*(_QWORD *)v317 + 298LL) )
                goto LABEL_126;
            }
            v247 = v244 + 16LL * *v246 + 312;
          }
          else
          {
LABEL_126:
            v247 = sub_AAFEF8(v317, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v247)(v317, *(_QWORD *)(v247 + 8)) & 1) == 0 )
            break;
          v248 = *(_QWORD *)v317;
          if ( *(_WORD *)(*(_QWORD *)v317 + 298LL) )
          {
            v249 = 0LL;
            v250 = (int *)(*(_QWORD *)(v248 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v250 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              ++v249;
              v250 += 4;
              if ( v249 >= *(unsigned __int16 *)(*(_QWORD *)v317 + 298LL) )
                goto LABEL_133;
            }
            v251 = v248 + 16LL * *v250 + 312;
          }
          else
          {
LABEL_133:
            v251 = sub_AAFEF8(
                     v317,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v252 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v251)(
                                                        v317,
                                                        *(_QWORD *)(v251 + 8));
          if ( !v252 )
            sub_B170D4();
          Entity_k__BackingField = v252->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v252, 0LL);
          if ( !ConditionEntityArray )
            sub_B170D4();
          v187 = ConditionEntityArray->max_length;
          if ( v187 >= 1 )
          {
            v188 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v188 >= v187 )
              {
                sub_B17100(ConditionEntityArray, v216, v217);
                sub_B170A0();
              }
              v189 = ConditionEntityArray->m_Items[v188];
              if ( !v189 )
                sub_B170D4();
              conditionTypes = v189->fields.conditionTypes;
              v318 = v188;
              if ( !conditionTypes )
                sub_B170D4();
              v191 = *(_QWORD *)&conditionTypes->max_length;
              if ( (int)v191 >= 1 )
                break;
LABEL_121:
              ConditionEntityArray = condEntityArray;
              v187 = condEntityArray->max_length;
              v188 = v318 + 1;
              if ( (int)(v318 + 1) >= v187 )
                goto LABEL_122;
            }
            v192 = 0LL;
            while ( 2 )
            {
              if ( v192 >= (unsigned int)v191 )
              {
                sub_B17100(ConditionEntityArray, v216, v217);
                sub_B170A0();
              }
              v221 = conditionTypes->m_Items[v192 + 1];
              v222 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_B170CC(
                                                                  WarBoardAIRoute___c__DisplayClass45_0_TypeInfo,
                                                                  v216,
                                                                  v217,
                                                                  v218,
                                                                  v219);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v222, 0LL);
              if ( !v222 )
                sub_B170D4();
              v222->fields.squareIndex = -1;
              if ( v221 <= 0x2A && ((1LL << v221) & 0x70001800000LL) != 0 )
              {
                v216 = (const MethodInfo *)(unsigned int)v189->fields.value;
                v222->fields.squareIndex = (int)v216;
                if ( (_DWORD)v216 != -1 )
                {
                  if ( !v322 )
                    sub_B170D4();
                  dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v322->fields.dicSquareIndexKeyItemData;
                  if ( !dicSquareIndexKeyItemData )
                    sub_B170D4();
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                       dicSquareIndexKeyItemData,
                                                                                       (int32_t)v216,
                                                                                       (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)v321->fields.allItemData;
                    v225 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                                System_Func_WarBoardItemData__bool__TypeInfo,
                                                                                                v216,
                                                                                                v217,
                                                                                                v218,
                                                                                                v219);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v225,
                      (Il2CppObject *)v222,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardItemData__bool___ctor__);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                         allItemData,
                                                                                         (System_Func_TSource__bool__o *)v225,
                                                                                         (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                    v217 = (WarBoardEvalValueSquare_EvalValueSquare_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v226 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v322->fields.dicSquareIndexKeyItemData;
                      if ( !v226 )
                        sub_B170D4();
                      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                        v226,
                        v222->fields.squareIndex,
                        v217,
                        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                    }
                  }
                }
              }
              v222->fields.squareIndex = -1;
              if ( v221 == 74 || v221 == 75 )
              {
                squareIndex = v189->fields.value;
                v222->fields.squareIndex = squareIndex;
                goto LABEL_110;
              }
              if ( v221 - 127 <= 1 )
              {
                if ( !Entity_k__BackingField )
                  sub_B170D4();
                aiTargetCacher = v87->fields.aiTargetCacher;
                TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v216);
                if ( !aiTargetCacher )
                  sub_B170D4();
                if ( !WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v195) )
                {
                  v200 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B170CC(
                                                                                                    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                                                                                    v196,
                                                                                                    v197,
                                                                                                    v198,
                                                                                                    v199);
                  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
                    v200,
                    0LL,
                    Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                    (const MethodInfo_2B67340 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
                  WarBoardActionTrendConditionMaster__HasMatchCondition(condEntityArray, v200, &condType, v201);
                  v202 = v87->fields.aiTargetCacher;
                  v204 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v203);
                  if ( !v202 )
                    sub_B170D4();
                  WarBoardAiTargetCacher__Register(v202, v204, v189, condType, v205);
                }
                if ( !v323 )
                  sub_B170D4();
                dicIndividualityPutSqareIndex = v323->fields.dicIndividualityPutSqareIndex;
                v207 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v196);
                v209 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v208);
                v214 = (WarBoardAIRoute_TargetData_o *)sub_B170CC(
                                                         WarBoardAIRoute_TargetData_TypeInfo,
                                                         v210,
                                                         v211,
                                                         v212,
                                                         v213);
                WarBoardAIRoute_TargetData___ctor(v214, v209, v221, 0LL);
                if ( !dicIndividualityPutSqareIndex )
                  sub_B170D4();
                System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
                  dicIndividualityPutSqareIndex,
                  v207,
                  v214,
                  (const MethodInfo_2E12AE8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                squareIndex = v222->fields.squareIndex;
                v138 = v320;
                v87 = v321;
LABEL_110:
                if ( squareIndex != -1 )
                {
                  if ( !v323 )
                    sub_B170D4();
                  if ( !Entity_k__BackingField )
                    sub_B170D4();
                  dicObjectPutSquareIndex = v323->fields.dicObjectPutSquareIndex;
                  v228 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v216);
                  WarBoardAIRoute__RegisterTargetObjectToDic(
                    v228,
                    dicObjectPutSquareIndex,
                    (System_Collections_Generic_List_IWarBoardObjectData__o *)v138,
                    squareIndex,
                    (int64_t)v228,
                    v221,
                    &notSquareTarget,
                    v229);
                  if ( !notSquareTarget )
                  {
                    dicSquarePutSqareIndex = v323->fields.dicSquarePutSqareIndex;
                    v231 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v216);
                    if ( !dicSquarePutSqareIndex )
                      sub_B170D4();
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
                                                                                         dicSquarePutSqareIndex,
                                                                                         v231,
                                                                                         (const MethodInfo_2E12D84 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                    if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                    {
                      allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)v321->fields.allSquare;
                      v233 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                                  System_Func_WarBoardSquareData__bool__TypeInfo,
                                                                                                  v216,
                                                                                                  v217,
                                                                                                  v218,
                                                                                                  v219);
                      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                        v233,
                        (Il2CppObject *)v222,
                        Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
                      ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                           allSquare,
                                                                                           (System_Func_TSource__bool__o *)v233,
                                                                                           (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                      v234 = (WarBoardSquareData_o *)ConditionEntityArray;
                      if ( ConditionEntityArray )
                      {
                        v235 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v216);
                        v240 = (WarBoardAIRoute_TargetData_o *)sub_B170CC(
                                                                 WarBoardAIRoute_TargetData_TypeInfo,
                                                                 v236,
                                                                 v237,
                                                                 v238,
                                                                 v239);
                        WarBoardAIRoute_TargetData___ctor_20721568(v240, v234, v235, v221, 0LL);
                        v241 = v323->fields.dicSquarePutSqareIndex;
                        v243 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v242);
                        if ( !v241 )
                          sub_B170D4();
                        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
                          v241,
                          v243,
                          v240,
                          (const MethodInfo_2E12B10 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                      }
                    }
                  }
                }
              }
              LODWORD(v191) = conditionTypes->max_length;
              if ( (__int64)++v192 >= (int)v191 )
                goto LABEL_121;
              continue;
            }
          }
        }
        allAllyPiece = v311;
        v324[v313] = 1269;
        v254 = ++v325;
        v255 = *(_QWORD *)v317;
        if ( *(_WORD *)(*(_QWORD *)v317 + 298LL) )
        {
          v256 = 0LL;
          v257 = (int *)(*(_QWORD *)(v255 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v257 - 1) != System_IDisposable_TypeInfo )
          {
            ++v256;
            v257 += 4;
            if ( v256 >= *(unsigned __int16 *)(*(_QWORD *)v317 + 298LL) )
              goto LABEL_142;
          }
          v258 = v317;
          v259 = v255 + 16LL * *v257 + 312;
        }
        else
        {
LABEL_142:
          v258 = v317;
          v259 = sub_AAFEF8(v317, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v259)(v258, *(_QWORD *)(v259 + 8));
        if ( v254 )
        {
          v314 = v254;
          if ( v324[v254 - 1] == 1269 )
          {
            v325 = v254 - 1;
            v314 = v254 - 1;
          }
        }
        else
        {
          v314 = 0;
        }
        v261 = v87->fields.aiTargetCacher;
        if ( !v261 )
          goto LABEL_206;
        WarBoardAiTargetCacher__ClearTargetObject(v261, v260);
        v266 = v87->fields.aiTargetCacher;
        v267 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v267 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v267->static_fields;
        _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( (BYTE3(v267->vtable._0_Equals.methodPtr) & 4) != 0 && !v267->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v267);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v270 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                                          v262,
                                                                                          v263,
                                                                                          v264,
                                                                                          v265);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__45_0,
            v270,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
          v271 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v271->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v271->__9__45_0,
            (System_Int32_array **)_9__45_0,
            v272,
            v273,
            v274,
            v275,
            v276,
            v277);
        }
        v278 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v138,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v279 = (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v278,
                                              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v266 )
          goto LABEL_206;
        WarBoardAiTargetCacher__AggregateTargetObject(v266, v279, v280);
        v281 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v87->fields.dicUniqueKeyDesignationItem;
        if ( !v281 )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          v281,
          pieceData->fields._uniqueIndex_k__BackingField,
          (WarBoardAIRoute_PutSquareTarget_o *)v322,
          (const MethodInfo_2D65E38 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        v282 = v87->fields.dicUniqueKeyTarget;
        if ( !v282 )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          v282,
          pieceData->fields._uniqueIndex_k__BackingField,
          v323,
          (const MethodInfo_2D65E38 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        isMaster = WarBoardPieceData__get_isServant(pieceData, 0LL);
        if ( (isMaster & 1) != 0 )
        {
          v285 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_B170CC(
                                                           WarBoardAIRoute_AdvantagePieceData_TypeInfo,
                                                           v78,
                                                           v79,
                                                           v283,
                                                           v284);
          WarBoardAIRoute_AdvantagePieceData___ctor(v285, 0LL);
          battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
          if ( !battleServant_k__BackingField )
            goto LABEL_206;
          isMaster = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
          v287 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_206;
          v288 = v287->max_length;
          if ( v288 >= 1 )
          {
            v289 = isMaster;
            v290 = 0;
            while ( v290 < v288 )
            {
              v291 = (__int64)v287 + 8 * (int)v290;
              v292 = *(_QWORD *)(v291 + 32);
              if ( !v292 )
                goto LABEL_206;
              isMaster = WarBoardPieceData__get_isMaster(*(WarBoardPieceData_o **)(v291 + 32), 0LL);
              if ( (isMaster & 1) == 0 )
              {
                v293 = *(BattleServantData_o **)(v292 + 128);
                if ( !v293 )
                  goto LABEL_206;
                ClassId = BattleServantData__getClassId(v293, 0LL);
                if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                }
                Magnification = SvtClassAttri__getMagnification(v289, ClassId, 0LL);
                v296 = SvtClassAttri__getMagnification(ClassId, v289, 0LL);
                v297 = SvtClassAttri__getMagnification(v289, ClassId, 0LL);
                v298 = Magnification <= 1.0;
                v299 = SvtClassAttri__getMagnification(ClassId, v289, 0LL);
                if ( v298 )
                {
                  v301 = 0;
                }
                else
                {
                  if ( !v285 )
                    goto LABEL_206;
                  dicAttackAdvantageServant = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v285->fields.dicAttackAdvantageServant;
                  if ( !dicAttackAdvantageServant )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    dicAttackAdvantageServant,
                    *(_DWORD *)(v292 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v292,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v301 = 1;
                  v285->fields.flagNow |= 0x4000uLL;
                }
                if ( v296 < 1.0 )
                {
                  if ( !v285 )
                    goto LABEL_206;
                  dicDefenseAdvantageServant = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v285->fields.dicDefenseAdvantageServant;
                  if ( !dicDefenseAdvantageServant )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    dicDefenseAdvantageServant,
                    *(_DWORD *)(v292 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v292,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v285->fields.flagNow |= 0x10000uLL;
                }
                if ( v297 < 1.0 )
                {
                  if ( !v285 )
                    goto LABEL_206;
                  dicAttackDisAdvantageServant = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v285->fields.dicAttackDisAdvantageServant;
                  if ( !dicAttackDisAdvantageServant )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    dicAttackDisAdvantageServant,
                    *(_DWORD *)(v292 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v292,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v285->fields.flagNow |= 0x8000uLL;
                }
                if ( v299 > 1.0 )
                {
                  if ( !v285 )
                    goto LABEL_206;
                  dicDefenseDisAdvantageServant = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v285->fields.dicDefenseDisAdvantageServant;
                  if ( !dicDefenseDisAdvantageServant )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    dicDefenseDisAdvantageServant,
                    *(_DWORD *)(v292 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v292,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v285->fields.flagNow |= 0x20000uLL;
                }
                if ( ((unsigned __int8)v301 & (v296 < 1.0)) != 0 )
                {
                  if ( !v285 )
                    goto LABEL_206;
                  dicClassAdvantageServant = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v285->fields.dicClassAdvantageServant;
                  if ( !dicClassAdvantageServant )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    dicClassAdvantageServant,
                    *(_DWORD *)(v292 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v292,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v285->fields.flagNow |= 0x1000uLL;
                }
                if ( v297 < 1.0 && v299 > 1.0 )
                {
                  if ( !v285 )
                    goto LABEL_206;
                  dicClassDisAdvantageServant = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v285->fields.dicClassDisAdvantageServant;
                  if ( !dicClassDisAdvantageServant )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    dicClassDisAdvantageServant,
                    *(_DWORD *)(v292 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v292,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v285->fields.flagNow |= 0x2000uLL;
                }
              }
              v288 = v287->max_length;
              if ( (int)++v290 >= v288 )
                goto LABEL_199;
            }
LABEL_207:
            sub_B17100(isMaster, v78, v79);
            sub_B170A0();
          }
LABEL_199:
          v307 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v87->fields.dicUniqueKeyAdvantagePieceData;
          if ( !v307 )
            goto LABEL_206;
          System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
            v307,
            pieceData->fields._uniqueIndex_k__BackingField,
            (WarBoardAIRoute_PutSquareTarget_o *)v285,
            (const MethodInfo_2D65E38 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v308 = v314;
          v138 = v320;
        }
        else
        {
          v308 = v314;
        }
        v313 = v308;
        p_placePieceData = &v321->fields.placePieceData;
      }
LABEL_203:
      max_length = allAllyPiece->max_length;
      v166 = v315 + 1;
      if ( v315 + 1 >= max_length )
        goto LABEL_204;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      v174 = *p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v175 = 0;
      goto LABEL_68;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v173 = v87->fields.forceId;
LABEL_64:
    if ( forceId_k__BackingField != v173 )
      goto LABEL_69;
    goto LABEL_65;
  }
LABEL_204:
  if ( !*p_aiRouteMasterData )
LABEL_206:
    sub_B170D4();
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(*p_aiRouteMasterData, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v87, v309);
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

  if ( (byte_40F8BE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v6);
    byte_40F8BE6 = 1;
  }
  if ( !alreadyGetItemList )
    sub_B170D4();
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  Item = WarBoardAIManager__GetItem(targetSquare, v7);
  return Item && !WarBoardItemData__get_Acquired(Item, 0LL);
}


void __fastcall WarBoardAIRoute__ClassAdvantageDistance(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  WarBoardAIRoute_RouteData_o *v9; // x22
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  WarBoardAIRoute_RouteData_o *v12; // x22
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  WarBoardAIRoute_RouteData_o *v15; // x22
  int32_t v16; // w0
  const MethodInfo *v17; // x3
  WarBoardAIRoute_RouteData_o *v18; // x22
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  WarBoardAIRoute_RouteData_o *v21; // x22
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  WarBoardAIRoute_RouteData_o *v24; // x21
  int32_t v25; // w0

  if ( !*routeData )
    goto LABEL_28;
  if ( !advantagePieceData )
    goto LABEL_28;
  (*routeData)->fields.flagNow |= advantagePieceData->fields.flagNow;
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag(*routeData, 4096LL, 0LL) )
  {
    v9 = *routeData;
    v10 = WarBoardAIRoute__CompareBaseRangeToActionRange(
            advantagePieceData->fields.dicClassAdvantageServant,
            advantagePieceData->fields.baseCARange,
            actionSquareIndex,
            v8);
    if ( !v9 )
      goto LABEL_28;
    v9->fields.isMoveByServantAndClassAdvantageServantRange = v10;
  }
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag(*routeData, 0x2000LL, 0LL) )
  {
    v12 = *routeData;
    v13 = WarBoardAIRoute__CompareBaseRangeToActionRange(
            advantagePieceData->fields.dicClassDisAdvantageServant,
            advantagePieceData->fields.baseCDARange,
            actionSquareIndex,
            v11);
    if ( !v12 )
      goto LABEL_28;
    v12->fields.isMoveByServantAndClassDisAdvantageServantRange = v13;
  }
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag(*routeData, 0x4000LL, 0LL) )
  {
    v15 = *routeData;
    v16 = WarBoardAIRoute__CompareBaseRangeToActionRange(
            advantagePieceData->fields.dicAttackAdvantageServant,
            advantagePieceData->fields.baseAARange,
            actionSquareIndex,
            v14);
    if ( !v15 )
      goto LABEL_28;
    v15->fields.isMoveByServantAndAttackAdvantageServantRange = v16;
  }
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag(*routeData, 0x8000LL, 0LL) )
  {
    v18 = *routeData;
    v19 = WarBoardAIRoute__CompareBaseRangeToActionRange(
            advantagePieceData->fields.dicAttackDisAdvantageServant,
            advantagePieceData->fields.baseADARange,
            actionSquareIndex,
            v17);
    if ( !v18 )
      goto LABEL_28;
    v18->fields.isMoveByServantAndAttackDisAdvantageServantRange = v19;
  }
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag(*routeData, 0x10000LL, 0LL) )
  {
    v21 = *routeData;
    v22 = WarBoardAIRoute__CompareBaseRangeToActionRange(
            advantagePieceData->fields.dicDefenseAdvantageServant,
            advantagePieceData->fields.baseDARange,
            actionSquareIndex,
            v20);
    if ( !v21 )
      goto LABEL_28;
    v21->fields.isMoveByServantAndDefenseAdvantageServantRange = v22;
  }
  if ( !*routeData )
    goto LABEL_28;
  if ( !WarBoardAIRoute_RouteData__HasFlag(*routeData, 0x20000LL, 0LL) )
    return;
  v24 = *routeData;
  v25 = WarBoardAIRoute__CompareBaseRangeToActionRange(
          advantagePieceData->fields.dicDefenseDisAdvantageServant,
          advantagePieceData->fields.baseDDARange,
          actionSquareIndex,
          v23);
  if ( !v24 )
LABEL_28:
    sub_B170D4();
  v24->fields.isMoveByServantAndDefenseDisAdvantageServantRange = v25;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x0

  if ( (byte_40F8BD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__, method);
    byte_40F8BD8 = 1;
  }
  allRouteList = this->fields.allRouteList;
  if ( !allRouteList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allRouteList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w19
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w0
  int32_t v17; // w20
  int v18; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F8BE5 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v12);
    byte_40F8BE5 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !dicPieceList )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v20,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dicPieceList,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v13 = 3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v20,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
    {
      v17 = 0;
      v18 = 1;
      goto LABEL_14;
    }
    key = (int32_t)v20.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 actionIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v16 = System_Linq_Enumerable__Count_int_(
            v15,
            (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v16 < baseRange )
      break;
    if ( v16 == baseRange )
      v13 = 2;
  }
  v17 = 1;
  v18 = 3;
LABEL_14:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v20,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  if ( (unsigned int)(v18 + 1) >> 2 )
    return v17;
  return v13;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__int__o *v9; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 IsFlag; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v22; // w26
  Il2CppClass **v23; // x8
  Il2CppClass *v24; // x21
  struct WarBoardSquareData_array *v25; // x20
  int v26; // w8
  unsigned int v27; // w27
  int v28; // w22
  Il2CppClass **v29; // x8
  Il2CppClass *v30; // x23
  int32_t name; // w24
  int32_t v32; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_Dictionary_int__int__o *v35; // x0
  int32_t v36; // w1
  const MethodInfo_2DDCFB4 *v37; // x3
  int32_t v38; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v39; // [xsp+0h] [xbp-60h]

  if ( (byte_40F8BF1 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v8);
    byte_40F8BF1 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v9;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicOutOfWarningAreaRange,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_B170D4();
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    v39 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v22 >= (unsigned int)max_length )
        goto LABEL_34;
      v23 = &allSquare->obj.klass + v22;
      v24 = v23[4];
      if ( !v24 )
        goto LABEL_33;
      IsFlag = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)v23[4], 1, 0LL);
      if ( (IsFlag & 1) != 0 )
      {
        v25 = this->fields.allSquare;
        if ( !v25 )
          goto LABEL_33;
        v26 = v25->max_length;
        if ( v26 >= 1 )
        {
          v27 = 0;
          v28 = -1;
          while ( v27 < v26 )
          {
            v29 = &v25->obj.klass + (int)v27;
            v30 = v29[4];
            if ( !v30 )
              goto LABEL_33;
            IsFlag = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)v29[4], 1, 0LL);
            if ( (IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v24->_1.name;
            v32 = (int32_t)v30->_1.name;
            if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AStarSearch_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            }
            v33 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v32,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = System_Linq_Enumerable__Count_int_(
                       v33,
                       (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
            if ( v28 > (int)IsFlag - 1 || v28 == -1 )
              v28 = IsFlag - 1;
            if ( v28 >= 2 )
            {
LABEL_37:
              v26 = v25->max_length;
              if ( (int)++v27 < v26 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          sub_B17100(IsFlag, v18, v19);
          sub_B170A0();
        }
        v28 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        v35 = *v39;
        if ( !*v39 )
          goto LABEL_33;
        v36 = (int32_t)v24->_1.name;
        v38 = v28;
        v37 = (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
      }
      else
      {
        v35 = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v36 = (int32_t)v24->_1.name;
        v37 = (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v38 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v35, v36, v38, v37);
      max_length = allSquare->max_length;
      ++v22;
    }
    while ( v22 < max_length );
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
  __int64 v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F8BDE & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData);
    byte_40F8BDE = 1;
  }
  v9 = sub_B170CC(
         WarBoardAIRoute__CreateRouteData_d__47_TypeInfo,
         piecePlaceData,
         *(_QWORD *)&searchCount,
         routeDataList,
         method);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)piecePlaceData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 48),
    (System_Int32_array **)routeDataList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  uint32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8BF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, basePiece);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v7);
    byte_40F8BF6 = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_2DF27D4 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v9 = value;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetPieceUnique(v9, v8);
  }
  else
  {
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetEnemyPieceSquareIndex(actionSquareIndex, v8);
  }
}


WarBoardAIRoute_AdvantagePieceData_o *__fastcall WarBoardAIRoute__GetAdvantagePieceData(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *dicUniqueKeyAdvantagePieceData; // x0
  WarBoardAIRoute_PutSquareTarget_o *Item; // x0
  WarBoardAIRoute_AdvantagePieceData_o *v9; // x20
  _BOOL8 HasFlag_20720476; // x0
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x3
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_40F8BF4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
      basePiece);
    byte_40F8BF4 = 1;
  }
  if ( !basePiece
    || (dicUniqueKeyAdvantagePieceData = this->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)dicUniqueKeyAdvantagePieceData,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2D65D74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  v9 = (WarBoardAIRoute_AdvantagePieceData_o *)Item;
  HasFlag_20720476 = WarBoardAIRoute_RouteData__HasFlag_20720476(
                       (int64_t)Item->fields.dicSquarePutSqareIndex,
                       4096LL,
                       0LL);
  if ( HasFlag_20720476 )
    v9->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_20720476,
                               v9->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_20720476(v9->fields.flagNow, 0x2000LL, 0LL);
  if ( v12 )
    v9->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v12,
                                v9->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_20720476(v9->fields.flagNow, 0x4000LL, 0LL);
  if ( v14 )
    v9->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v14,
                               v9->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_20720476(v9->fields.flagNow, 0x8000LL, 0LL);
  if ( v16 )
    v9->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v16,
                                v9->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_20720476(v9->fields.flagNow, 0x10000LL, 0LL);
  if ( v18 )
    v9->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v18,
                               v9->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v19);
  v20 = WarBoardAIRoute_RouteData__HasFlag_20720476(v9->fields.flagNow, 0x20000LL, 0LL);
  if ( v20 )
    v9->fields.baseDDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v20,
                                v9->fields.dicDefenseDisAdvantageServant,
                                baseSquareIndex,
                                v21);
  return v9;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v14; // x22
  _BOOL8 isMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v20; // w26
  WarBoardPieceData_o *v21; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int32_t v24; // w0
  int32_t v25; // w24

  if ( (byte_40F8BF0 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, routeDataList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v13);
    byte_40F8BF0 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v14 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                *(_QWORD *)&baseSquareIndex,
                                                                servantAndEnemyRange,
                                                                servantAndEnemyMasterRange);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v14,
    (const MethodInfo_2D616D4 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_21;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        sub_B17100(isMaster, v16, v17);
        sub_B170A0();
      }
      v21 = allEnemyPiece->m_Items[v20];
      if ( !v21 )
        break;
      nowSquareIndex_k__BackingField = v21->fields._nowSquareIndex_k__BackingField;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v24 = System_Linq_Enumerable__Count_int_(
              v23,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v14 )
        break;
      v25 = v24;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v14,
        v21->fields._uniqueIndex_k__BackingField,
        v24,
        (const MethodInfo_2D62278 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v25 < *servantAndEnemyRange )
        *servantAndEnemyRange = v25;
      isMaster = WarBoardPieceData__get_isMaster(v21, 0LL);
      if ( isMaster && (*servantAndEnemyMasterRange == -1 || v25 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v25;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v20 >= max_length )
        return v14;
    }
LABEL_21:
    sub_B170D4();
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardAIRoute___c__DisplayClass51_0_o *v14; // x22
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v22; // x20

  if ( (byte_40F8BE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__, piecePlaceData);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v12);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v13);
    byte_40F8BE1 = 1;
  }
  v14 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_B170CC(
                                                     WarBoardAIRoute___c__DisplayClass51_0_TypeInfo,
                                                     piecePlaceData,
                                                     *(_QWORD *)&masterSquareIndex,
                                                     method,
                                                     v4);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_B170D4();
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_2DF07D4 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v22 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v17, v18, v19, v20);
    System_Func_int__bool____ctor(
      v22,
      (Il2CppObject *)v14,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v22,
             (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v24; // x1
  __int64 v25; // x24
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v43; // x20
  __int64 v44; // x1
  WarBoardAIManager_c *v45; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquareIndexEnemyPiece; // x0
  char v47; // w10
  bool v48; // w8
  bool IsDetour; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Int32_array *v51; // x28
  int32_t v52; // w0
  int32_t v53; // w25
  const MethodInfo *v54; // x2
  BalanceConfig_c *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Func_int__bool__o *klass; // x28
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x8
  int64_t v68; // x21
  BalanceConfig_c *v69; // x0
  BattleServantConfConponent_o *v71; // [xsp+8h] [xbp-C8h]
  bool v73; // [xsp+1Ch] [xbp-B4h]
  char v74; // [xsp+20h] [xbp-B0h]
  bool v75; // [xsp+24h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v76; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_40F8BE2 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex);
    sub_B16FFC(&BalanceConfig_TypeInfo, v8);
    sub_B16FFC(&DefenseAreaData_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v17);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v18);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v21);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v22);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v23);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v24);
    byte_40F8BE2 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v25 = sub_B170CC(
          WarBoardAIRoute___c__DisplayClass52_0_TypeInfo,
          *(_QWORD *)&masterSquareIndex,
          allyPieces,
          piecePlaceData,
          method);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_55;
  *(_QWORD *)(v25 + 16) = piecePlaceData;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v25 + 16),
    (System_Int32_array **)piecePlaceData,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_55;
  defenseArea = npcData->fields.defenseArea;
  v38 = (DefenseAreaData_o *)sub_B170CC(DefenseAreaData_TypeInfo, v32, v33, v34, v35);
  DefenseAreaData___ctor(v38, masterSquareIndex, defenseArea, 0LL);
  v43 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v39,
                                                                                                   v40,
                                                                                                   v41,
                                                                                                   v42);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v43,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  if ( !byte_40F79DF )
  {
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v44);
    byte_40F79DF = 1;
  }
  v45 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v45 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v45->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_55;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v76,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v71 = (BattleServantConfConponent_o *)(v25 + 24);
  v77 = v76;
  v47 = 0;
  v48 = 1;
  IsDetour = 1;
LABEL_15:
  v73 = v48;
LABEL_16:
  v74 = v47;
  v75 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v77,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v77.fields.current;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v51 = AStarSearch__RouteSearch(0LL, masterSquareIndex, (int32_t)current.fields.key, 0, 0LL, 0LL);
    v52 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v51,
            (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v43 )
      sub_B170D4();
    v53 = v52;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v43,
      (int32_t)current.fields.key,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v51,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v38 )
      sub_B170D4();
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v38, v53, 0LL);
    if ( DefenseAreaData__IsInDefenseArea(v38, (int32_t)current.fields.key, 0LL) )
    {
      v55 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v55 = BalanceConfig_TypeInfo;
      }
      if ( !v55->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v51 )
          sub_B170D4();
        if ( (int)v51->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v38, v51->m_Items[2], v53, 0LL);
      }
      IsDetour = 0;
      v47 = 1;
      if ( v75 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v51, allyPieces, v54);
        v48 = 0;
        v47 = 1;
        if ( v73 )
        {
          klass = (System_Func_int__bool__o *)v71->klass;
          if ( !v71->klass )
          {
            klass = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v56, v57, v58, v59);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v25,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
            v71->klass = (BattleServantConfConponent_c *)klass;
            sub_B16F98(v71, (System_Int32_array **)klass, v61, v62, v63, v64, v65, v66);
          }
          if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AStarSearch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          }
          v48 = AStarSearch__RouteSearch(
                  (WarBoardPieceData_o *)current.fields.value,
                  (int32_t)current.fields.key,
                  masterSquareIndex,
                  0,
                  klass,
                  0LL) == 0LL;
          v47 = 1;
        }
        goto LABEL_15;
      }
      goto LABEL_16;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v77,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v67 = 1025LL;
  if ( (v74 & 1) == 0 )
    v67 = 1LL;
  if ( v75 )
    v67 |= 0x2000000000uLL;
  v68 = v73 ? v67 | 0x10000000000LL : v67;
  if ( !v38 )
LABEL_55:
    sub_B170D4();
  DefenseAreaData__CreateShortestRoutes(v38, (System_Collections_Generic_Dictionary_int__int____o *)v43, 0LL);
  v69 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v69 = BalanceConfig_TypeInfo;
  }
  if ( !v69->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v38, (System_Collections_Generic_Dictionary_int__int____o *)v43, 0LL);
  DefenseAreaData__SetFlag(v38, v68, 0LL);
  return v38;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall WarBoardAIRoute__GetDesignationItemToDistance(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
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
  struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *dicUniqueKeyDesignationItem; // x0
  WarBoardAIRoute_PutSquareTarget_o *Item; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_Dictionary_int__int__o *v30; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquarePutSqareIndex; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x24
  int32_t v49; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  int32_t v51; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40F8BEF & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, basePiece);
    sub_B16FFC(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v17);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v18);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v21);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v22);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v23);
    byte_40F8BEF = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( !basePiece
    || (dicUniqueKeyDesignationItem = this->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)dicUniqueKeyDesignationItem,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2D65D74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                     System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                     v26,
                                                                     v27,
                                                                     v28,
                                                                     v29),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v30,
          (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Item->fields.dicSquarePutSqareIndex) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v54,
    dicSquarePutSqareIndex,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v55 = v54;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v55,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v36 = sub_B170CC(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v32, v33, v34, v35);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v36, 0LL);
    if ( !v36 )
      sub_B170D4();
    v43 = v36 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v36 + 16) = v55.fields.current;
    sub_B16F98((BattleServantConfConponent_o *)(v36 + 24), 0LL, v37, v38, v39, v40, v41, v42);
    v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                               v44,
                                                                               v45,
                                                                               v46,
                                                                               v47);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v48,
      (Il2CppObject *)v36,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v48,
            (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___) )
    {
      if ( !*(_QWORD *)v43 )
        sub_B170D4();
      v49 = *(_DWORD *)(*(_QWORD *)v43 + 16LL);
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v50 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v49,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v51 = System_Linq_Enumerable__Count_int_(
              v50,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v30 )
        sub_B170D4();
      System_Collections_Generic_Dictionary_int__int___Add(
        v30,
        *(_DWORD *)(v36 + 16),
        v51,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v55,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v30;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_40F8BE3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
      evalValueSquareList);
    byte_40F8BE3 = 1;
  }
  if ( !evalValueSquareList )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
           evalValueSquareList,
           index,
           (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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
  __int64 v8; // x19

  if ( (byte_40F8BF7 & 1) == 0 )
  {
    sub_B16FFC(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
    byte_40F8BF7 = 1;
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) <= 1.0 )
    v6 = 1LL;
  else
    v6 = 524289LL;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) < 1.0 )
    v6 |= 0x400000uLL;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) >= 1.0 )
    v7 = v6;
  else
    v7 = v6 | 0x100000;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) <= 1.0 )
    v8 = v7;
  else
    v8 = v7 | 0x800000;
  if ( WarBoardAIRoute_RouteData__HasFlag_20720476(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_20720476(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_20720476(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_20720476(v8, 0x800000LL, 0LL) )
    return v8 | 0x200000;
  return v8;
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
  unsigned __int64 v16; // x22
  int32_t *v17; // x26
  __int64 v18; // x23
  int32_t v19; // w24
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  const MethodInfo *v23; // x2
  WarBoardPieceData_o *v24; // x25
  int32_t *v25; // x19
  __int64 v26; // x26
  BattleServantData_o *battleServant_k__BackingField; // x0
  int32_t ClassId; // w0
  int32_t v29; // w27
  int32_t v30; // w28
  float Magnification; // s0
  WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x0
  uint32_t v33; // w24
  WarBoardAIRoute_o *v34; // x24
  WarBoardAIRoute_o *v36; // [xsp+0h] [xbp-70h]
  struct System_Int32_array *v37; // [xsp+8h] [xbp-68h]
  int32_t v38; // [xsp+18h] [xbp-58h]
  uint32_t value; // [xsp+1Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_40F8BF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v12);
    this = (WarBoardAIRoute_o *)sub_B16FFC(&WarBoardAIManager_TypeInfo, v13);
    byte_40F8BF3 = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_52;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_52;
  v15 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = &linkedSquares->m_Items[1];
    v18 = 1LL;
    v36 = v10;
    v37 = linkedSquares;
    v38 = masterSquareIndex;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
      {
        sub_B17100(this, baseSquare, basePiece);
        sub_B170A0();
      }
      v19 = v17[v16];
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        break;
      monitor = (WarBoardData_o *)Instance[4].monitor;
      if ( !monitor )
        break;
      Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, v19, 0LL);
      if ( !Piece_22604968 )
        goto LABEL_31;
      v24 = Piece_22604968;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      if ( WarBoardAIManager__IsEnemyPiece(basePiece, v24, v23) )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL) || WarBoardPieceData__get_isMaster(v24, 0LL) )
        {
          v25 = v17;
          v26 = v18 | 0x10;
          if ( WarBoardPieceData__get_isServant(v24, 0LL)
            && !WarBoardAIRoute_RouteData__HasFlag_20720476(v18 | 0x10, 0x1000000LL, 0LL) )
          {
            battleServant_k__BackingField = basePiece->fields._battleServant_k__BackingField;
            if ( !battleServant_k__BackingField )
              break;
            ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
            if ( !v24->fields._battleServant_k__BackingField )
              break;
            v29 = ClassId;
            v30 = BattleServantData__getClassId(v24->fields._battleServant_k__BackingField, 0LL);
            if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SvtClassAttri_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            }
            Magnification = SvtClassAttri__getMagnification(v29, v30, 0LL);
            masterSquareIndex = v38;
            v10 = v36;
            if ( Magnification > 1.0 )
              v26 = v18 | 0x1000010;
          }
          if ( WarBoardPieceData__get_isMaster(v24, 0LL) )
            v18 = v26 | 0x20;
          else
            v18 = v26;
          v17 = v25;
          linkedSquares = v37;
        }
      }
      else
      {
LABEL_31:
        if ( !basePiece )
          break;
      }
      aiRouteMasterData = v10->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        break;
      if ( ((v19 == masterSquareIndex) & !WarBoardAIRoute_AIRouteMasterData__IsMasterServant(
                                            aiRouteMasterData,
                                            basePiece->fields._index_k__BackingField,
                                            0LL)) != 0 )
        v18 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v19,
                                    &value,
                                    (const MethodInfo_2DF27D4 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v33 = value;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v33, (const MethodInfo *)baseSquare);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v34 = this;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(
                                        basePiece,
                                        (WarBoardPieceData_o *)v34,
                                        (const MethodInfo *)basePiece);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v34 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v34, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              v18 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(v15) = linkedSquares->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        return v18;
    }
LABEL_52:
    sub_B170D4();
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
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *v10; // x0
  int32_t Item; // w0
  System_Collections_Generic_Dictionary_int__int__o *v13; // x0
  int32_t v14; // w0
  System_Collections_Generic_Dictionary_int__int__o *v15; // x8

  if ( (byte_40F8BF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&baseSquareIndex);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    byte_40F8BF2 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  v9 = this->fields.dicOutOfWarningAreaRange;
  if ( !v9 )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          v9,
          actionSquareIndex,
          (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  v10 = this->fields.dicOutOfWarningAreaRange;
  if ( !v10 )
    goto LABEL_18;
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           v10,
           baseSquareIndex,
           (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( Item > System_Collections_Generic_Dictionary_int__int___get_Item(
                this->fields.dicOutOfWarningAreaRange,
                actionSquareIndex,
                (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  v13 = this->fields.dicOutOfWarningAreaRange;
  if ( !v13
    || (v14 = System_Collections_Generic_Dictionary_int__int___get_Item(
                v13,
                baseSquareIndex,
                (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v15 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  if ( v14 == System_Collections_Generic_Dictionary_int__int___get_Item(
                v15,
                actionSquareIndex,
                (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 2;
  else
    return 3;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndex(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v13; // x8
  int32_t key; // w20
  int v15; // w19
  __int128 v16[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F8BE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v9);
    byte_40F8BE0 = 1;
  }
  memset(&v17, 0, 32);
  aiRouteMasterData = this->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_19;
  masterType = aiRouteMasterData->fields.masterType;
  if ( masterType && masterType != 2 )
  {
    if ( masterType == 1 )
      return aiRouteMasterData->fields.masterSquareIndex;
    else
      return 0;
  }
  if ( !piecePlaceData )
LABEL_19:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v16,
    piecePlaceData,
    (const MethodInfo_2DF1138 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  *(_OWORD *)&v17.fields.dictionary = v16[0];
  v17.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v16[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
            &v17,
            (const MethodInfo_272A700 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
  {
    v13 = this->fields.aiRouteMasterData;
    if ( !v13 )
      sub_B170D4();
    key = (int32_t)v17.fields.current.fields.key;
    if ( v13->fields.masterUniqueIndex == HIDWORD(v17.fields.current.fields.key) )
    {
      v15 = 3;
      goto LABEL_15;
    }
  }
  key = 0;
  v15 = 1;
LABEL_15:
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &v17,
    (const MethodInfo_272A848 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
  if ( (unsigned int)(v15 + 1) >> 2 )
    return key;
  else
    return 0;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v13; // x21

  if ( (byte_40F8BFB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__uint___bool___ctor__, v7);
    sub_B16FFC(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v9);
    sub_B16FFC(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__, v10);
    byte_40F8BFB = 1;
  }
  aiRouteMasterData = this->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_B170D4();
  if ( aiRouteMasterData->fields.masterType == 1 )
    return aiRouteMasterData->fields.masterSquareIndex;
  v13 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_B170CC(
                                                          System_Func_KeyValuePair_int__uint___bool__TypeInfo,
                                                          piecePlaceData,
                                                          method,
                                                          v3,
                                                          v4);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v13,
    (Il2CppObject *)this,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    (const MethodInfo_2B5EB88 *)Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v13,
           (const MethodInfo_18D7DB4 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x19
  WarBoardPieceData_o *monitor; // x22
  const MethodInfo *v18; // x2
  int32_t v19; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  int32_t v21; // w22
  int32_t v22; // w0
  int32_t v23; // w2
  int v24; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v27; // w23
  int32_t v28; // w0
  int v29; // w8
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v31; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F8BFD & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v14);
    byte_40F8BFD = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !dicKeyPutIndexValueTargetData
    || (v31 = dicKeyPutIndexValueTargetData,
        (Values = System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___get_Values(
                    dicKeyPutIndexValueTargetData,
                    (const MethodInfo_2E128B4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v32,
    Values,
    (const MethodInfo_2282AEC *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v33,
            (const MethodInfo_26B9158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    currentValue = v33.fields.currentValue;
    if ( !v33.fields.currentValue )
      sub_B170D4();
    monitor = (WarBoardPieceData_o *)v33.fields.currentValue[1].monitor;
    if ( !monitor || LODWORD(v33.fields.currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v18) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v19 = (int32_t)currentValue[4].monitor;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v19,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v21 = System_Linq_Enumerable__Count_int_(
              v20,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      v22 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      v23 = (int32_t)currentValue[4].monitor;
      if ( v21 == v22 )
        v24 = 2;
      else
        v24 = 3;
      if ( v21 < v22 )
        v24 = 1;
      LODWORD(currentValue[4].klass) = v24;
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v23,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v25 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v27 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
        v28 = System_Linq_Enumerable__Count_int_(
                v25,
                (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v28 >= v27 )
        {
          if ( v28 == v27 )
            v29 = 2;
          else
            v29 = 3;
        }
        else
        {
          v29 = 1;
        }
      }
      else
      {
        v29 = 0;
      }
      HIDWORD(currentValue[4].klass) = v29;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v33,
    (const MethodInfo_26B9154 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return v31;
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
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F8BE4 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, dicPieceList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v11);
    byte_40F8BE4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !dicPieceList )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dicPieceList,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v12 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v18,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v18.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 baseSquareIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v15 = System_Linq_Enumerable__Count_int_(
            v14,
            (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v12 > v15 || v12 == -1 )
      v12 = v15;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v18,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  WarBoardAIRoute_RouteData_o *current; // x24
  bool HasFlag; // w0
  struct WarBoardPieceData_o *basePiece; // x8
  bool v23; // zf
  int32_t *v24; // x8
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *v26; // x8
  int32_t *v27; // x8
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-70h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_40F8BDF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v18);
    byte_40F8BDF = 1;
  }
  memset(&v31, 0, sizeof(v31));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v19 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                replaceCount,
                                                                actionCount,
                                                                masterActionCount);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v19,
    (const MethodInfo_2D616D4 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)routeDataList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__) )
  {
    current = (WarBoardAIRoute_RouteData_o *)v31.fields.current;
    if ( !v31.fields.current )
      sub_B170D4();
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v31.fields.current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( HasFlag )
      {
        if ( !basePiece )
          sub_B170D4();
        v23 = basePiece->fields._type_k__BackingField == 1;
        v24 = masterReplaceCount;
        if ( !v23 )
        {
          actionPiece = current->fields.actionPiece;
          if ( !actionPiece )
            sub_B170D4();
          if ( actionPiece->fields._type_k__BackingField == 1 )
            v24 = masterReplaceCount;
          else
            v24 = replaceCount;
        }
        ++*v24;
        v26 = current->fields.actionPiece;
        if ( !v26 )
          sub_B170D4();
      }
      else
      {
        if ( !basePiece )
          sub_B170D4();
        if ( basePiece->fields._type_k__BackingField == 1 )
          v27 = masterActionCount;
        else
          v27 = actionCount;
        ++*v27;
        v26 = current->fields.basePiece;
        if ( !v26 )
          sub_B170D4();
      }
      if ( !v19 )
        sub_B170D4();
      uniqueIndex_k__BackingField = v26->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v19,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_2D63E88 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v19,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_2D62250 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  return v19;
}


int32_t __fastcall WarBoardAIRoute__GetRouteSumPieceActionCost(
        WarBoardAIRoute_o *this,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v22; // x20

  if ( (byte_40F8BFE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____66842240, routeDataList);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v9);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v10);
    byte_40F8BFE = 1;
  }
  v11 = sub_B170CC(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, routeDataList, targetPiece, method, v4);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = targetPiece;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)targetPiece,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                          System_Func_WarBoardAIRoute_RouteData__int__TypeInfo,
                                                                          v18,
                                                                          v19,
                                                                          v20,
                                                                          v21);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v22,
           (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____66842240);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v28; // x26
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40F8BEC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, dicPutSquareIndex);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16);
    sub_B16FFC(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v19);
    sub_B16FFC(&WarBoardAIRoute_TargetData_TypeInfo, v20);
    byte_40F8BEC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !dicPutSquareIndex )
    sub_B170D4();
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v29,
    dicPutSquareIndex,
    (const MethodInfo_2E130F0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v30,
            (const MethodInfo_26B87F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    key = v30.fields.current.fields.key;
    value = v30.fields.current.fields.value;
    if ( excludeCond )
    {
      if ( !v30.fields.current.fields.value )
        sub_B170D4();
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
             (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
             (BattleBuffData_BuffData_o *)v30.fields.current.fields.value[3].monitor,
             (const MethodInfo_2B6AB54 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__) )
      {
        continue;
      }
    }
    allEnemyPiece = this->fields.allEnemyPiece;
    v28 = (WarBoardAIRoute_TargetData_o *)sub_B170CC(WarBoardAIRoute_TargetData_TypeInfo, v21, v22, v23, v24);
    WarBoardAIRoute_TargetData___ctor_20722072(
      v28,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_B170D4();
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
      *dicKeyPutIndexValueTargetData,
      (int64_t)key,
      v28,
      (const MethodInfo_2E12B10 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v30,
    (const MethodInfo_26B8960 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v56; // x22
  const MethodInfo *v57; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  int32_t Id_k__BackingField; // w27
  const MethodInfo *v62; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  WarBoardAiTargetCacher_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectsByTrendId; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x23
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x28
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v82; // x23
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Linq_IOrderedEnumerable_TSource__o *v93; // x28
  WarBoardAIRoute___c_c *v94; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_2; // x23
  Il2CppObject *v97; // x19
  struct WarBoardAIRoute___c_StaticFields *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  System_Linq_IOrderedEnumerable_TSource__o *v109; // x28
  WarBoardAIRoute___c_c *v110; // x0
  struct WarBoardAIRoute___c_StaticFields *v111; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_3; // x23
  Il2CppObject *v113; // x19
  struct WarBoardAIRoute___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  WarBoardPieceData_o *v126; // x27
  int32_t v127; // w24
  WarBoardPieceData_array *allEnemyPiece; // x19
  WarBoardAIRoute_TargetData_o *v129; // x23
  BattleServantConfConponent_o *v130; // [xsp+0h] [xbp-C0h]
  BattleServantConfConponent_o *v131; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v133; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v134; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_40F8BED & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v18);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v19);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v20);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v21);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v22);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v23);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v24);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v25);
    sub_B16FFC(&Method_System_Func_IWarBoardObjectData__int___ctor__, v26);
    sub_B16FFC(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v27);
    sub_B16FFC(&System_Func_IWarBoardObjectData__int__TypeInfo, v28);
    sub_B16FFC(&System_Func_IWarBoardObjectData__bool__TypeInfo, v29);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v31);
    sub_B16FFC(&WarBoardAIRoute_TargetData_TypeInfo, v32);
    sub_B16FFC(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v33);
    sub_B16FFC(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v34);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v35);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v36);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v37);
    sub_B16FFC(&WarBoardAIRoute___c_TypeInfo, v38);
    byte_40F8BED = 1;
  }
  memset(&v134, 0, sizeof(v134));
  v39 = sub_B170CC(
          WarBoardAIRoute___c__DisplayClass64_0_TypeInfo,
          dicIndividualityPutSqareIndex,
          excludeCond,
          basePiece,
          *(_QWORD *)&baseSquareIndex);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v39, 0LL);
  if ( !v39
    || (*(_QWORD *)(v39 + 16) = excludeCond,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v39 + 16),
          (System_Int32_array **)excludeCond,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45),
        *(_QWORD *)(v39 + 24) = basePiece,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v39 + 24),
          (System_Int32_array **)basePiece,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        *(_DWORD *)(v39 + 32) = baseSquareIndex,
        v56 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v52, v53, v54, v55),
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v56,
          (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v133,
    dicIndividualityPutSqareIndex,
    (const MethodInfo_2E130F0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v131 = (BattleServantConfConponent_o *)(v39 + 40);
  v134 = v133;
  v130 = (BattleServantConfConponent_o *)(v39 + 48);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v134,
            (const MethodInfo_26B87F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_B170D4();
    current = v134.fields.current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v134.fields.current.fields.key,
                           v57);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v56 )
        goto LABEL_45;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v56 )
LABEL_45:
        sub_B170D4();
    }
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v56,
           Id_k__BackingField,
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v56,
                                                                    Id_k__BackingField,
                                                                    (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
LABEL_37:
      TargetObjectsByTrendId = Item;
      goto LABEL_38;
    }
    v64 = this->fields.aiTargetCacher;
    if ( !v64 )
      sub_B170D4();
    TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
                                                                                    v64,
                                                                                    (int64_t)current.fields.key,
                                                                                    v62);
    if ( TargetObjectsByTrendId )
    {
      klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v131->klass;
      if ( !v131->klass )
      {
        klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                                     v65,
                                                                                     v66,
                                                                                     v67,
                                                                                     v68);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          klass,
          (Il2CppObject *)v39,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
        v131->klass = (BattleServantConfConponent_c *)klass;
        sub_B16F98(v131, (System_Int32_array **)klass, v71, v72, v73, v74, v75, v76);
      }
      v81 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              TargetObjectsByTrendId,
              (System_Func_TSource__bool__o *)klass,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
      v82 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v130->klass;
      if ( !v130->klass )
      {
        v82 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_IWarBoardObjectData__int__TypeInfo,
                                                                                v77,
                                                                                v78,
                                                                                v79,
                                                                                v80);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v82,
          (Il2CppObject *)v39,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v130->klass = (BattleServantConfConponent_c *)v82;
        sub_B16F98(v130, (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
      }
      v93 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              v81,
              (System_Func_TSource__TKey__o *)v82,
              (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
      v94 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v94 = WarBoardAIRoute___c_TypeInfo;
      }
      static_fields = v94->static_fields;
      _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__64_2;
      if ( !_9__64_2 )
      {
        if ( (BYTE3(v94->vtable._0_Equals.methodPtr) & 4) != 0 && !v94->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v94);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v97 = (Il2CppObject *)static_fields->__9;
        _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_IWarBoardObjectData__int__TypeInfo,
                                                                                     v89,
                                                                                     v90,
                                                                                     v91,
                                                                                     v92);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_2,
          v97,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v98 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v98->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v98->__9__64_2,
          (System_Int32_array **)_9__64_2,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
      }
      v109 = System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
               v93,
               (System_Func_TSource__TKey__o *)_9__64_2,
               (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      v110 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v110 = WarBoardAIRoute___c_TypeInfo;
      }
      v111 = v110->static_fields;
      _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v111->__9__64_3;
      if ( !_9__64_3 )
      {
        if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v110);
          v111 = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v113 = (Il2CppObject *)v111->__9;
        _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_IWarBoardObjectData__int__TypeInfo,
                                                                                     v105,
                                                                                     v106,
                                                                                     v107,
                                                                                     v108);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_3,
          v113,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v114 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v114->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v114->__9__64_3,
          (System_Int32_array **)_9__64_3,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120);
      }
      v121 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                    v109,
                                                                    (System_Func_TSource__TKey__o *)_9__64_3,
                                                                    (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                    v121,
                                                                    (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
      goto LABEL_37;
    }
LABEL_38:
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v56,
      Id_k__BackingField,
      (WarBoardAIRoute_RouteData_o *)TargetObjectsByTrendId,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( TargetObjectsByTrendId )
    {
      v126 = *(WarBoardPieceData_o **)(v39 + 24);
      v127 = *(_DWORD *)(v39 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v129 = (WarBoardAIRoute_TargetData_o *)sub_B170CC(WarBoardAIRoute_TargetData_TypeInfo, v122, v123, v124, v125);
      WarBoardAIRoute_TargetData___ctor_20723160(
        v129,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)TargetObjectsByTrendId,
        v126,
        v127,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B170D4();
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        v129,
        (const MethodInfo_2E12B10 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B170D4();
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Remove(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_2E144E0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v134,
    (const MethodInfo_26B8960 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_22947972(
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
  __int64 v14; // x1
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueKeyTarget; // x0
  WarBoardAIRoute_PutSquareTarget_o *Item; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x26
  const MethodInfo *v35; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x26
  const MethodInfo *v42; // x6
  const MethodInfo *v43; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8BEE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, basePiece);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v10);
    sub_B16FFC(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_IWarBoardObjectData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v13);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v14);
    byte_40F8BEE = 1;
  }
  dicKeyPutIndexValueTargetData = 0LL;
  v15 = sub_B170CC(
          WarBoardAIRoute___c__DisplayClass65_0_TypeInfo,
          basePiece,
          routeDataList,
          *(_QWORD *)&baseSquareIndex,
          method);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = routeDataList,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v15 + 16),
          (System_Int32_array **)routeDataList,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        !basePiece)
    || (dicUniqueKeyTarget = this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2D65D74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v28 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B170CC(
                                                                                             System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                             v24,
                                                                                             v25,
                                                                                             v26,
                                                                                             v27),
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
          v28,
          (const MethodInfo_2E11F60 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = v28,
        !Item) )
  {
    sub_B170D4();
  }
  dicObjectPutSquareIndex = Item->fields.dicObjectPutSquareIndex;
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                             v29,
                                                                             v30,
                                                                             v31,
                                                                             v32);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v15,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    dicObjectPutSquareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v34,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v35);
  dicIndividualityPutSqareIndex = Item->fields.dicIndividualityPutSqareIndex;
  v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                             v37,
                                                                             v38,
                                                                             v39,
                                                                             v40);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v41,
    (Il2CppObject *)v15,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    dicIndividualityPutSqareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v41,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v42);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    Item->fields.dicSquarePutSqareIndex,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v43);
  return v28;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B170D4();
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
  bool isMaster; // w0
  __int64 v12; // x8
  int v13; // w20
  WebViewManager_o *Instance; // x0

  if ( (byte_40F8BF5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, basePiece);
    byte_40F8BF5 = 1;
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
    v13 = *(_DWORD *)((char *)&this->klass + v12);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
      return SHIDWORD(Instance[7].monitor) >= v13 + requiredCost;
LABEL_13:
    sub_B170D4();
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarBoardPieceData_o **v25; // x25
  WarBoardPieceData_o *v26; // x0
  bool v27; // w8
  bool result; // w0
  WarBoardAIRoute_o *Instance; // x0
  const MethodInfo *v30; // x3
  int32_t RouteSumPieceActionCost; // w23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v36; // x21
  int32_t v37; // w0
  __int64 v38; // x8

  if ( (byte_40F8BF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v13);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v16);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v17);
    byte_40F8BF9 = 1;
  }
  v18 = sub_B170CC(
          WarBoardAIRoute___c__DisplayClass76_0_TypeInfo,
          basePiece,
          actionPiece,
          *(_QWORD *)&requiredCost,
          routeDataList);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = actionPiece;
  v25 = (WarBoardPieceData_o **)(v18 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)actionPiece,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v26 = *(WarBoardPieceData_o **)(v18 + 16);
  if ( !v26 )
    goto LABEL_25;
  v27 = WarBoardPieceData__EnableSwapByOther(v26, 0, 0LL);
  result = 0;
  if ( !v27 )
    return result;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  if ( !*v25 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(*v25, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[3].fields.wallAttackCost < this->fields.moveCost + requiredCost + this->fields.masterMoveCost )
      return 0;
  }
  else
  {
    Instance = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[3].fields.wallAttackCost < requiredCost + 2 * this->fields.moveCost )
      return 0;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(Instance, routeDataList, *v25, v30);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    return 0;
  if ( !*v25 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(*v25, RouteSumPieceActionCost, 0LL) )
    return 0;
  if ( !*v25 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isInfinitelyActable(*v25, 0LL) )
    return 1;
  v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                             v32,
                                                                             v33,
                                                                             v34,
                                                                             v35);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v36,
    (Il2CppObject *)v18,
    Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
  v37 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_18D4A90 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
  v38 = *(_QWORD *)(v18 + 16);
  if ( !v38 )
LABEL_25:
    sub_B170D4();
  return *(_DWORD *)(v38 + 36) > v37;
}


bool __fastcall WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned __int64 v11; // x20
  char i; // w21
  Il2CppObject *current; // x21
  void *monitor; // x9
  signed __int64 v15; // x24
  unsigned __int64 v16; // x25
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F8BEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v10);
    byte_40F8BEB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !shortestEnemyRoute )
    sub_B170D4();
  v11 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)shortestEnemyRoute,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v22 = v21;
  for ( i = 0; ; i = 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v17 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B170D4();
    monitor = v22.fields.current[1].monitor;
    if ( (int)monitor - 1 <= (int)v11 )
    {
LABEL_17:
      i = 0;
      break;
    }
    if ( (unsigned int)v22.fields.current[1].monitor <= v11 )
    {
LABEL_20:
      sub_B17100(v17, v18, v19);
      sub_B170A0();
    }
    v15 = (int)monitor - 1;
    v16 = v11;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_B170D4();
      v17 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v16),
              (const MethodInfo_2DF0E28 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v17 )
        break;
      if ( (__int64)++v16 >= v15 )
        goto LABEL_17;
      if ( v16 >= LODWORD(current[1].monitor) )
        goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  if ( (byte_40F8BE8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_40F8BE8 = 1;
  }
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !defenseArea )
    sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int v15; // w22
  bool v16; // w21
  Il2CppClass *klass; // x0
  unsigned int monitor; // w9
  __int64 v19; // x11
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // w8
  int v24; // w28
  int v25; // w25
  int v26; // w8
  int v27; // w9
  _WORD v29[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v30; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_40F8BEA & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14);
    byte_40F8BEA = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v32, 0, sizeof(v32));
  v30 = 0;
  if ( !allShortestRoute )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)allShortestRoute,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v32 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29;
  v15 = 0;
  v16 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v32,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__) )
  {
    if ( !v32.fields.current.fields.value )
      sub_B170D4();
    klass = v32.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v31 = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
    do
    {
LABEL_13:
      v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v31,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v20 )
      {
        *(_DWORD *)&v29[2 * v15 + 20] = 117;
        v23 = v30;
        goto LABEL_17;
      }
      if ( !v31.fields.current )
        sub_B170D4();
      monitor = (unsigned int)v31.fields.current[1].monitor;
      v19 = !isDefenseSquare;
    }
    while ( (int)(monitor - 1) <= !isDefenseSquare );
    while ( 1 )
    {
      if ( (unsigned int)v19 >= monitor )
      {
        sub_B17100(v20, v21, v22);
        sub_B170A0();
      }
      if ( *((_DWORD *)&v31.fields.current[2].klass + v19) == index )
        break;
      if ( (int)++v19 >= (int)(monitor - 1) )
        goto LABEL_13;
    }
    *(_DWORD *)&v29[2 * v15 + 20] = 144;
    v23 = v30;
    v16 = 1;
LABEL_17:
    v24 = v23 + 1;
    v30 = v23 + 1;
    v25 = v23 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v15 = 0;
    if ( v25 )
    {
      v15 = v25 - 1;
      v26 = *(_DWORD *)&v29[2 * v25 + 18];
      if ( v26 == 117 )
      {
        v30 = v25 - 1;
      }
      else
      {
        v15 = v25;
        if ( v26 == 144 )
          goto LABEL_25;
      }
    }
  }
  *(_DWORD *)&v29[2 * v15 + 20] = 142;
  v24 = ++v30;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v32,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  if ( !v24 )
    return 0;
  v27 = *(_DWORD *)&v29[2 * v24 + 18];
  if ( v27 == 142 )
  {
    v16 = 0;
    goto LABEL_30;
  }
  if ( v27 == 144 )
  {
LABEL_30:
    v30 = v24 - 1;
    return v16;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL8 v10; // x20
  unsigned int monitor; // w9
  __int64 v12; // x11
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8BE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v9);
    byte_40F8BE9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !shortestEnemyRoute )
    sub_B170D4();
  v10 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)shortestEnemyRoute,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  do
  {
LABEL_10:
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
    {
      v16 = 0;
      v17 = 1;
      goto LABEL_13;
    }
    if ( !v20.fields.current )
      sub_B170D4();
    monitor = (unsigned int)v20.fields.current[1].monitor;
    v12 = v10;
  }
  while ( (int)(monitor - 1) <= v10 );
  while ( 1 )
  {
    if ( (unsigned int)v12 >= monitor )
    {
      sub_B17100(v13, v14, v15);
      sub_B170A0();
    }
    if ( *((_DWORD *)&v20.fields.current[2].klass + v12) == index )
      break;
    if ( (int)++v12 >= (int)(monitor - 1) )
      goto LABEL_10;
  }
  v16 = 1;
  v17 = 3;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v16 & ((unsigned int)(v17 + 1) >> 2);
}


bool __fastcall WarBoardAIRoute__IsDetour(
        System_Int32_array *route,
        System_Int32_array *blockPieces,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int v24; // w23
  System_Func_int__bool__o **v25; // x21
  System_Func_int__bool__o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int v33; // w8

  if ( (byte_40F8BE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, blockPieces);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v10);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v11);
    byte_40F8BE7 = 1;
  }
  v12 = sub_B170CC(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, blockPieces, method, v3, v4);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = route;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)route, v13, v14, v15, v16, v17, v18);
  v19 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v12 + 16),
          (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v19 < 2 )
    return 0;
  v24 = v19 - 1;
  *(_DWORD *)(v12 + 24) = 1;
  if ( v19 - 1 < 2 )
    return 0;
  v25 = (System_Func_int__bool__o **)(v12 + 32);
  while ( 1 )
  {
    v26 = *v25;
    if ( !*v25 )
    {
      v26 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v20, v21, v22, v23);
      System_Func_int__bool____ctor(
        v26,
        (Il2CppObject *)v12,
        Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v12 + 32) = v26;
      sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    }
    if ( BasicHelper__Any_int__25910576(
           blockPieces,
           (System_Func_T__bool__o *)v26,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
    {
      break;
    }
    v33 = *(_DWORD *)(v12 + 24) + 1;
    *(_DWORD *)(v12 + 24) = v33;
    if ( v33 >= v24 )
      return 0;
  }
  return 1;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B170D4();
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
  void *Square; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x8
  unsigned __int64 v17; // x25
  int32_t v18; // w22
  const MethodInfo *v19; // x1
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22645764; // x0
  WarBoardPieceData_o *EnemyPieceSquareIndex; // x0
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F8BF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, *(_QWORD *)&actionSquareIndex);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v11);
    byte_40F8BF8 = 1;
  }
  value = 0;
  ++*attackByLinkEnemy;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  Square = WarBoardAIManager__GetSquare(actionSquareIndex, *(const MethodInfo **)&actionSquareIndex);
  if ( !Square )
    goto LABEL_30;
  v15 = *((_QWORD *)Square + 4);
  if ( !v15 )
    goto LABEL_30;
  v16 = *(_QWORD *)(v15 + 24);
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        sub_B17100(Square, v13, v14);
        sub_B170A0();
      }
      if ( !piecePlaceData )
        break;
      v18 = *(_DWORD *)(v15 + 32 + 4 * v17);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v18,
             &value,
             (const MethodInfo_2DF27D4 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          break;
        monitor = (WarBoardData_o *)Instance[4].monitor;
        if ( !monitor )
          break;
        Piece_22645764 = WarBoardData__GetPiece_22645764(monitor, value, 1, 0LL);
        if ( !Piece_22645764 )
          break;
        if ( WarBoardPieceData__get_isServant(Piece_22645764, 0LL) )
          ++*attackByLinkAlly;
      }
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      Square = WarBoardAIManager__GetEnemyPieceSquareIndex(v18, v19);
      if ( Square )
      {
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        EnemyPieceSquareIndex = WarBoardAIManager__GetEnemyPieceSquareIndex(v18, v13);
        if ( !EnemyPieceSquareIndex )
          break;
        Square = (void *)WarBoardPieceData__get_isServant(EnemyPieceSquareIndex, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(v16) = *(_DWORD *)(v15 + 24);
      if ( (__int64)++v17 >= (int)v16 )
        return;
    }
LABEL_30:
    sub_B170D4();
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
  WarBoardPieceData_o *basePiece; // x22
  unsigned __int64 v15; // x27
  il2cpp_array_size_t max_length; // w8
  int32_t v17; // w24
  _BOOL8 CanAcquireItem; // x0
  WarBoardPieceData_o *v19; // x1
  const MethodInfo *v20; // x4
  struct System_Collections_Generic_List_WarBoardPieceData__o *moveByLinkedPiece; // x25
  WarBoardPieceData_o *v22; // x23
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Piece_22604968; // x0
  const MethodInfo *v26; // x2
  BattleServantData_o *battleServant_k__BackingField; // x0
  int32_t ClassId; // w0
  int32_t v29; // w24
  int32_t v30; // w25

  if ( (byte_40F8BFC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v9);
    this = (WarBoardAIRoute_o *)sub_B16FFC(&WarBoardAIManager_TypeInfo, v10);
    byte_40F8BFC = 1;
  }
  v11 = *routeData;
  if ( !*routeData
    || (actionSquare = v11->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_50:
    sub_B170D4();
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v11->fields.basePiece;
    v15 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v15 >= max_length )
      {
        sub_B17100(this, routeData, piecePlaceData);
        sub_B170A0();
      }
      v17 = linkedSquares->m_Items[v15 + 1];
      CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                         this,
                         v17,
                         alreadyGetItemSquares,
                         (const MethodInfo *)alreadyGetItemSquares);
      if ( CanAcquireItem )
      {
        if ( !*routeData )
          goto LABEL_50;
        ++(*routeData)->fields.moveByLinkedItem;
      }
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetActionPiece(
                                    (WarBoardAIRoute_o *)CanAcquireItem,
                                    v19,
                                    v17,
                                    piecePlaceData,
                                    v20);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_50;
        moveByLinkedPiece = (*routeData)->fields.moveByLinkedPiece;
        v22 = (WarBoardPieceData_o *)this;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_50;
        monitor = (WarBoardData_o *)Instance[4].monitor;
        if ( !monitor )
          goto LABEL_50;
        Piece_22604968 = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardData__GetPiece_22604968(
                                                                                  monitor,
                                                                                  v17,
                                                                                  0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveByLinkedPiece,
          Piece_22604968,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v22, v26)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v22, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_50;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(
                                        basePiece,
                                        v22,
                                        (const MethodInfo *)piecePlaceData);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_50;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v22, 0LL) )
            {
              if ( !*routeData )
                goto LABEL_50;
              if ( WarBoardAIRoute_RouteData__HasFlag(*routeData, 0x2000000LL, 0LL) )
                goto LABEL_32;
              if ( !basePiece )
                goto LABEL_50;
              if ( !WarBoardPieceData__get_isMaster(basePiece, 0LL) && !WarBoardPieceData__get_isMaster(v22, 0LL) )
              {
                battleServant_k__BackingField = basePiece->fields._battleServant_k__BackingField;
                if ( !battleServant_k__BackingField )
                  goto LABEL_50;
                ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                if ( !v22->fields._battleServant_k__BackingField )
                  goto LABEL_50;
                v29 = ClassId;
                v30 = BattleServantData__getClassId(v22->fields._battleServant_k__BackingField, 0LL);
                if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                }
                if ( SvtClassAttri__getMagnification(v29, v30, 0LL) > 1.0 )
                {
LABEL_32:
                  if ( !*routeData )
                    goto LABEL_50;
                  (*routeData)->fields.flagNow |= 0x2000000uLL;
                }
              }
              if ( !*routeData )
                goto LABEL_50;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v22, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*routeData )
                goto LABEL_50;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  WarBoardAIRoute___c__DisplayClass46_0_o *v22; // x25
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x24
  peRenderTexture_ChangeLayerObject_o *v28; // x0
  peRenderTexture_ChangeLayerObject_c *klass; // x8
  IWarBoardObjectData_o *v30; // x23
  unsigned __int64 v31; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  WarBoardAIRoute_TargetData_o *v38; // x22

  if ( (byte_40F8BDD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, targetDic);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14);
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v16);
    sub_B16FFC(&Method_System_Predicate_IWarBoardObjectData___ctor__, v17);
    sub_B16FFC(&System_Predicate_IWarBoardObjectData__TypeInfo, v18);
    sub_B16FFC(&WarBoardAIRoute_TargetData_TypeInfo, v19);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v20);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v21);
    byte_40F8BDD = 1;
  }
  v22 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B170CC(
                                                     WarBoardAIRoute___c__DisplayClass46_0_TypeInfo,
                                                     targetDic,
                                                     objectList,
                                                     *(_QWORD *)&squareIndex,
                                                     trendKey);
  WarBoardAIRoute___c__DisplayClass46_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_17;
  v22->fields.squareIndex = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
         targetDic,
         v22->fields.squareIndex,
         (const MethodInfo_2E12D84 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_IWarBoardObjectData__TypeInfo,
                                                                   v23,
                                                                   v24,
                                                                   v25,
                                                                   v26);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v27,
    (Il2CppObject *)v22,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_IWarBoardObjectData___ctor__);
  if ( !objectList )
LABEL_17:
    sub_B170D4();
  v28 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)objectList,
          (System_Predicate_T__o *)v27,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v28 )
  {
    *notSquareTarget = 1;
    klass = v28->klass;
    v30 = (IWarBoardObjectData_o *)v28;
    if ( *(_WORD *)&v28->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v31;
        p_offset += 2;
        if ( v31 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v33 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_12:
      v33 = sub_AAFEF8(v28, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8)) & 1) != 0 )
    {
      v38 = (WarBoardAIRoute_TargetData_o *)sub_B170CC(WarBoardAIRoute_TargetData_TypeInfo, v34, v35, v36, v37);
      WarBoardAIRoute_TargetData___ctor_20721652(v38, v30, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
        targetDic,
        trendKey,
        v38,
        (const MethodInfo_2E12AE8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x0
  const MethodInfo *v8; // x3

  if ( (byte_40F8BDB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId);
    byte_40F8BDB = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v13; // x22
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_40F8BFA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___66675360, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v12);
    byte_40F8BFA = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                piecePlaceData,
                                                                routeData,
                                                                *(_QWORD *)&baseSquareIndex,
                                                                *(_QWORD *)&actionSquareIndex);
  System_Collections_Generic_Dictionary_int__uint____ctor_48169396(
    v13,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_2DF01B4 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___66675360);
  if ( !routeData )
    goto LABEL_12;
  if ( WarBoardAIRoute_RouteData__HasFlag(routeData, 0x4000000LL, 0LL) )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v13 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v13,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2DF0B9C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !v13 )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___Remove(
    v13,
    baseSquareIndex,
    (const MethodInfo_2DF24BC *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v13,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_2DF0B9C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v13;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8

  value = x.fields.value;
  if ( (byte_40F8BFF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, x);
    byte_40F8BFF = 1;
  }
  aiRouteMasterData = this->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_B170D4();
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  __int64 IsDefenseTarget; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Int32_array *v27; // x8
  unsigned int v28; // w9
  unsigned int max_length; // w10
  unsigned int v30; // w23
  struct System_Collections_Generic_List_int____o *replaceDataList; // x20
  int32_t v32; // w25
  int32_t v33; // w24
  int v34; // w8
  System_Int32_array *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7AA8 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_40F7AA8 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_31334E0;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.replaceDataList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.replacePriority = -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_16;
  IsDefenseTarget = WarBoardData__IsDefenseTarget(monitor, &data, forceId, groupId, 0LL);
  if ( (IsDefenseTarget & 1) == 0 )
    return;
  v27 = data;
  if ( !data )
LABEL_16:
    sub_B170D4();
  v28 = 0;
  while ( 1 )
  {
    max_length = v27->max_length;
    if ( (int)v28 >= (int)max_length )
      break;
    if ( v28 >= max_length )
      goto LABEL_18;
    v30 = v28 + 1;
    if ( v28 + 1 >= max_length )
      goto LABEL_18;
    replaceDataList = this->fields.replaceDataList;
    v32 = v27->m_Items[v28 + 1];
    v33 = v27->m_Items[v30 + 1];
    IsDefenseTarget = sub_B17014(int___TypeInfo, 2LL, v26);
    if ( !IsDefenseTarget )
      goto LABEL_16;
    v34 = *(_DWORD *)(IsDefenseTarget + 24);
    v25 = IsDefenseTarget;
    if ( !v34 || (*(_DWORD *)(IsDefenseTarget + 32) = v32, v34 == 1) )
    {
LABEL_18:
      sub_B17100(IsDefenseTarget, v25, v26);
      sub_B170A0();
    }
    *(_DWORD *)(IsDefenseTarget + 36) = v33;
    if ( replaceDataList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceDataList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)IsDefenseTarget,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
      v27 = data;
      v28 = v30 + 1;
      if ( data )
        continue;
    }
    goto LABEL_16;
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
  WarBoardAIRoute_AIRouteMasterData_o *v6; // x19
  __int64 v7; // x1
  uint32_t uniqueIndex_k__BackingField; // w8
  struct System_Collections_Generic_List_int____o *replaceDataList; // x25
  signed __int64 v10; // x22
  signed __int64 replacePriority; // x9
  System_Int32_array *v12; // x8
  unsigned int max_length; // w9
  int32_t v14; // w8

  v6 = this;
  if ( (byte_40F7AA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type);
    this = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B16FFC(
                                                    &Method_System_Collections_Generic_List_int____get_Item__,
                                                    v7);
    byte_40F7AA9 = 1;
  }
  if ( type
    || (this = (WarBoardAIRoute_AIRouteMasterData_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)v6->fields.replaceDataList,
                                                        0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    replaceDataList = v6->fields.replaceDataList;
    if ( replaceDataList )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= replaceDataList->fields._size )
          return;
        replacePriority = v6->fields.replacePriority;
        if ( (_DWORD)replacePriority != -1 && v10 > replacePriority )
          return;
        if ( v10 >= (unsigned __int64)(unsigned int)replaceDataList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v12 = replaceDataList->fields._items->m_Items[v10];
        if ( type != 0 || pieceData == 0LL )
        {
          if ( type != 2 || pieceData == 0LL )
          {
            if ( type == 1 )
            {
              if ( !v12 )
                break;
              if ( !v12->max_length )
                goto LABEL_38;
              if ( v12->m_Items[1] == 1 )
              {
                v6->fields.masterType = 1;
                if ( v12->max_length <= 1 )
                {
LABEL_38:
                  sub_B17100(this, *(_QWORD *)&type, pieceData);
                  sub_B170A0();
                }
                v14 = v12->m_Items[2];
                v6->fields.replacePriority = v10;
                v6->fields.masterSquareIndex = v14;
                return;
              }
            }
          }
          else
          {
            if ( !v12 )
              break;
            max_length = v12->max_length;
            if ( !max_length )
              goto LABEL_38;
            if ( v12->m_Items[1] == 2 )
            {
              if ( max_length <= 1 )
                goto LABEL_38;
              if ( v12->m_Items[2] == pieceData->fields._index_k__BackingField )
              {
                v6->fields.masterType = 2;
                v6->fields.masterPieceIndex = pieceData->fields._index_k__BackingField;
                goto LABEL_35;
              }
            }
          }
        }
        else
        {
          if ( !v12 )
            break;
          if ( !v12->max_length )
            goto LABEL_38;
          if ( !v12->m_Items[1] )
          {
            v6->fields.masterType = 0;
LABEL_35:
            uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
            v6->fields.replacePriority = v10;
            goto LABEL_36;
          }
        }
        replaceDataList = v6->fields.replaceDataList;
        ++v10;
      }
      while ( replaceDataList );
    }
LABEL_31:
    sub_B170D4();
  }
  v6->fields.masterType = 0;
  if ( !pieceData )
    goto LABEL_31;
  uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
  v6->fields.replacePriority = 0;
LABEL_36:
  v6->fields.masterUniqueIndex = uniqueIndex_k__BackingField;
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v35; // x23
  WarBoardActionTrendMaster_o *Master_WarQuestSelectionMaster; // x0
  WarBoardActionTrendEntity_array *FutureActionTrendEntityArray; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x8
  WarBoardActionTrendEntity_array *v43; // x20
  unsigned __int64 v44; // x24
  WarBoardActionTrendEntity_o *v45; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v47; // x23
  const MethodInfo *v48; // x2
  int32_t condType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F7AAB & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v9);
    sub_B16FFC(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v14);
    byte_40F7AAB = 1;
  }
  condType = 0;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                                                                  entity,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v15;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)entity, v23, v24, v25, v26, v27, v28);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v29);
  v35 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B170CC(
                                                                                   System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                                                                   v31,
                                                                                   v32,
                                                                                   v33,
                                                                                   v34);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v35,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    (const MethodInfo_2B67340 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
  this->fields._HasTargetIndividualityCond_k__BackingField = WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                               ConditionEntityArray,
                                                               v35,
                                                               &condType,
                                                               0LL);
  if ( !entity )
    goto LABEL_19;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionTrendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (FutureActionTrendEntityArray = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                                         Master_WarQuestSelectionMaster,
                                         entity,
                                         0LL)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v42 = *(_QWORD *)&FutureActionTrendEntityArray->max_length;
  v43 = FutureActionTrendEntityArray;
  if ( (int)v42 >= 1 )
  {
    v44 = 0LL;
    do
    {
      if ( v44 >= (unsigned int)v42 )
      {
        sub_B17100(FutureActionTrendEntityArray, v38, v39);
        sub_B170A0();
      }
      v45 = v43->m_Items[v44];
      if ( v45 )
      {
        v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_FutureTrendInfoList_k__BackingField;
        v47 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B170CC(
                                                     WarBoardAIRoute_ActionTrendInfo_TypeInfo,
                                                     v38,
                                                     v39,
                                                     v40,
                                                     v41);
        WarBoardAIRoute_ActionTrendInfo___ctor(v47, v45, v48);
        if ( !v46 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v46,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(v42) = v43->max_length;
      ++v44;
    }
    while ( (__int64)v44 < (int)v42 );
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantConfConponent_o *p_conditionEntityArray; // x19
  System_Int32_array **conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v16; // x0
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__8_0; // x21
  Il2CppObject *v19; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F7AAA & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v7);
    sub_B16FFC(&Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__, v8);
    sub_B16FFC(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v10);
    sub_B16FFC(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v11);
    byte_40F7AAA = 1;
  }
  p_conditionEntityArray = (BattleServantConfConponent_o *)&this->fields.conditionEntityArray;
  conditionEntityArray = (System_Int32_array **)this->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = this->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_B170D4();
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v16 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v16 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                         System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__8_0,
        v19,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        (const MethodInfo_2B66764 *)Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
      v20 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      v20->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v20->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v28 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v27,
            (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (BattleServantConfConponent_c *)conditionEntityArray;
    sub_B16F98(p_conditionEntityArray, conditionEntityArray, v29, v30, v31, v32, v33, v34);
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_41066B4 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1);
    byte_41066B4 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_41066B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v5);
    byte_41066B5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   x,
                                                   (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7

  if ( (byte_40F7AAC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v6);
    byte_40F7AAC = 1;
  }
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicClassAdvantageServant,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v14,
                                                                                                   v15,
                                                                                                   v16,
                                                                                                   v17);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v18,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicClassDisAdvantageServant,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v25,
                                                                                                   v26,
                                                                                                   v27,
                                                                                                   v28);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v29,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicAttackAdvantageServant,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v40 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v36,
                                                                                                   v37,
                                                                                                   v38,
                                                                                                   v39);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v40,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicAttackDisAdvantageServant,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v51 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v47,
                                                                                                   v48,
                                                                                                   v49,
                                                                                                   v50);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v51,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v51;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicDefenseAdvantageServant,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v62 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v58,
                                                                                                   v59,
                                                                                                   v60,
                                                                                                   v61);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v62,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicDefenseDisAdvantageServant,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7AAD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v6);
    byte_40F7AAD = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F7AB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v8);
    byte_40F7AB1 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ratingOffsetList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  BattleServantConfConponent_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v14; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v17; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F7AAE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v9);
    sub_B16FFC(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v10);
    byte_40F7AAE = 1;
  }
  p_attackOffset = (BattleServantConfConponent_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v14 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v14 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__4_0,
        v17,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v18 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v18->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v18->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v26 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v25,
                                   (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (BattleServantConfConponent_c *)v26;
    sub_B16F98(p_attackOffset, v26, v27, v28, v29, v30, v31, v32);
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
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AB0 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_40F7AB0 = 1;
  }
  v6 = sub_B170CC(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2, v3, v4);
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
    (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v6;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  BattleServantConfConponent_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v14; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v17; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F7AAF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v9);
    sub_B16FFC(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v10);
    byte_40F7AAF = 1;
  }
  p_moveOffset = (BattleServantConfConponent_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v14 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v14 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v17,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v18 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v18->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v18->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v26 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v25,
                                   (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (BattleServantConfConponent_c *)v26;
    sub_B16F98(p_moveOffset, v26, v27, v28, v29, v30, v31, v32);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *actionTrandList; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap1; // x20
  __int128 v9; // q0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FutureTrendInfoList_k__BackingField; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap3; // x20
  __int128 v19; // q0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct WarBoardAIRoute_ActionTrendInfo_o *v48; // x1
  struct WarBoardAIRoute_ActionTrendInfo_o *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_41066B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v4);
    byte_41066B7 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap3 = &this->fields.__7__wrap3;
LABEL_13:
    this->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap3,
           (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
    {
      current = this->fields.__7__wrap3.fields.current;
      this->fields.__2__current = current;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)current,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      result = 1;
      this->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(this, v26);
    *(_QWORD *)&p__7__wrap3->fields.index = 0LL;
    p__7__wrap3->fields.current = 0LL;
    p__7__wrap3->fields.list = 0LL;
    this->fields._trendInfo_5__3 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields._trendInfo_5__3, 0LL, v35, v36, v37, v38, v39, v40);
    p__7__wrap1 = &this->fields.__7__wrap1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = this->fields._trendInfo_5__3;
    this->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_B170D4();
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v56,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    p__7__wrap3 = &this->fields.__7__wrap3;
    v19 = *(_OWORD *)&v56.fields.list;
    this->fields.__7__wrap3.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v56.fields.current;
    *(_OWORD *)&this->fields.__7__wrap3.fields.list = v19;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap3, 0LL, v20, v21, v22, v23, v24, v25);
    goto LABEL_13;
  }
  if ( _1__state )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_B170D4();
  actionTrandList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    actionTrandList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  p__7__wrap1 = &this->fields.__7__wrap1;
  v9 = *(_OWORD *)&v56.fields.list;
  this->fields.__7__wrap1.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v56.fields.current;
  *(_OWORD *)&this->fields.__7__wrap1.fields.list = v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.__1__state = -3;
LABEL_16:
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    v48 = this->fields.__7__wrap1.fields.current;
    this->fields._trendInfo_5__3 = v48;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._trendInfo_5__3,
      (System_Int32_array **)v48,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v49 = this->fields._trendInfo_5__3;
    this->fields.__2__current = v49;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    result = 1;
    this->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(this, v41);
    result = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t l__initialThreadId; // w20
  __int64 v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_41066BA & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_41066BA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v7 = sub_B170CC(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v7 )
      sub_B170D4();
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v7 + 40) = _4__this;
    sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), _4__this, v8, v9, v10, v11, v12, v13);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v7;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  if ( (byte_41066B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_41066B8 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_41066B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_41066B9 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap3,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_41066B6 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1);
    byte_41066B6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40F7AB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v6);
    byte_40F7AB2 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B170CC(
                                                                                      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v7,
    (const MethodInfo_2E11F60 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v18 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                       v14,
                                                                                       v15,
                                                                                       v16,
                                                                                       v17);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v18,
    (const MethodInfo_2E11F60 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicObjectPutSquareIndex,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                       v25,
                                                                                       v26,
                                                                                       v27,
                                                                                       v28);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v29,
    (const MethodInfo_2E11F60 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicIndividualityPutSqareIndex,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AB5 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method);
    byte_40F7AB5 = 1;
  }
  this->fields.flagNow = 1LL;
  v6 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B170CC(
                                                                WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
  WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v6, 0LL);
  this->fields.evalOffsetMagnification = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.evalOffsetMagnification,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  System_Decimal_o v6; // kr00_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o MoveValue; // kr10_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o Value; // kr20_16
  __int64 v11; // x24
  System_Decimal_c *v12; // x0
  __int64 v13; // x25
  System_Decimal_o AttackValue; // kr30_16
  __int64 v15; // x22
  int32_t attackEvalOffsetAddValue; // w24
  __int64 v17; // x23
  struct System_Decimal_StaticFields *static_fields; // x8
  System_Decimal_o v19; // kr40_16
  System_Decimal_o v20; // 0:x0.16
  System_Decimal_o v21; // 0:x0.16
  System_Decimal_o v22; // 0:x0.16
  System_Decimal_o v23; // 0:x2.16
  System_Decimal_o v24; // 0:x2.16

  if ( (byte_40F7AB7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&System_Decimal_TypeInfo, v3);
    byte_40F7AB7 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  WarBoardEvalFactorsAffectRatio = v4->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v6 = System_Decimal__op_Implicit_43632420(WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_B170D4();
  if ( (this->fields.flagNow & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(evalOffsetMagnification, 0LL);
    v15 = *(_QWORD *)&AttackValue.fields.flags;
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v17 = *(_QWORD *)&AttackValue.fields.lo;
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(evalOffsetMagnification, 0LL);
    futureEvalOffsetMag = this->fields.futureEvalOffsetMag;
    if ( futureEvalOffsetMag )
    {
      Value = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(futureEvalOffsetMag, 0LL);
      v11 = *(_QWORD *)&Value.fields.flags;
      v12 = System_Decimal_TypeInfo;
      v13 = *(_QWORD *)&Value.fields.lo;
    }
    else
    {
      v12 = System_Decimal_TypeInfo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v12 = System_Decimal_TypeInfo;
      }
      static_fields = v12->static_fields;
      v11 = *(_QWORD *)&static_fields->Zero.fields.flags;
      v13 = *(_QWORD *)&static_fields->Zero.fields.lo;
    }
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    *(_QWORD *)&v23.fields.flags = v11;
    *(_QWORD *)&v23.fields.lo = v13;
    v19 = System_Decimal__op_Addition(MoveValue, v23, 0LL);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    v17 = *(_QWORD *)&v19.fields.lo;
    v15 = *(_QWORD *)&v19.fields.flags;
  }
  v20 = System_Decimal__op_Implicit_43632420(attackEvalOffsetAddValue, 0LL);
  v24 = System_Decimal__op_Division(v20, v6, 0LL);
  *(_QWORD *)&v21.fields.flags = v15;
  *(_QWORD *)&v21.fields.lo = v17;
  v22 = System_Decimal__op_Addition(v21, v24, 0LL);
  this->fields.evalValue = System_Decimal__op_Explicit_43632896(v22, 0LL);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_20720476(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_40F7AB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method);
    byte_40F7AB4 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 v4; // x9
  WarBoardAIRoute_RouteData_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F7AB6 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_RouteData_TypeInfo, method);
    byte_40F7AB6 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_RouteData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      v5 = (WarBoardAIRoute_RouteData_o *)sub_B173C8(result);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattleServantConfConponent_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v8; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F7AB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v6);
    byte_40F7AB3 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (BattleServantConfConponent_o *)&this->fields.futureLookingTrendHashSet;
  v8 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v8 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                              System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v8,
      (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (BattleServantConfConponent_c *)v8;
    sub_B16F98(p_futureLookingTrendHashSet, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
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


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warAttack; // s8
  float benAttack; // s9
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_41066BB & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, method);
    byte_41066BB = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(warAttack + benAttack, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warMove; // s8
  float benMove; // s9
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_41066BC & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, method);
    byte_41066BC = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(warMove + benMove, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0 OVERLAPPED
  __int64 v3; // x1
  System_Decimal_o AttackValue; // kr00_16
  System_Decimal_o MoveValue; // kr10_16
  System_Decimal_o result; // 0:x0.16

  if ( this->fields.isAttack )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(this, method);
    v3 = *(_QWORD *)&AttackValue.fields.lo;
    v2 = *(_QWORD *)&AttackValue.fields.flags;
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(this, method);
    v3 = *(_QWORD *)&MoveValue.fields.lo;
    v2 = *(_QWORD *)&MoveValue.fields.flags;
  }
  *(_QWORD *)&result.fields.lo = v3;
  *(_QWORD *)&result.fields.flags = v2;
  return result;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_20721568(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_B16F98((BattleServantConfConponent_o *)v8, (System_Int32_array **)targetSquare, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20721652(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)targetObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarBoardAIRoute_TargetData__DetectObject(this, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20722072(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_B170D4();
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)targetObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetSquare,
    (System_Int32_array **)targetSquare,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v25);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20723160(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        IWarBoardObjectData_o *targetObject,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetObject = targetObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20723276(
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
  WarBoardAIRoute_TargetData_o *result; // x0
  __int64 v4; // x9

  if ( (byte_40F7AB8 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_TargetData_TypeInfo, method);
    byte_40F7AB8 = 1;
  }
  if ( !b )
LABEL_9:
    sub_B170D4();
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone((Il2CppObject *)b, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_TargetData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_B173C8(result);
      goto LABEL_9;
    }
  }
  return result;
}


void __fastcall WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  struct IWarBoardObjectData_o *targetObject; // x8
  __int64 v12; // x11
  struct IWarBoardObjectData_o *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct IWarBoardObjectData_o *v20; // x8
  __int64 v21; // x11
  struct IWarBoardObjectData_o *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct IWarBoardObjectData_o *v29; // x8
  __int64 v30; // x11
  struct IWarBoardObjectData_o *v31; // x1

  if ( (byte_40F7ABA & 1) == 0 )
  {
    sub_B16FFC(&WarBoardItemData_TypeInfo, method);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v9);
    sub_B16FFC(&WarBoardTreasureData_TypeInfo, v10);
    byte_40F7ABA = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject
    && (v12 = *(&WarBoardPieceData_TypeInfo->_2.bitflags2 + 1),
        *(&targetObject->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[v12 - 1] == WarBoardPieceData_TypeInfo )
      v13 = this->fields.targetObject;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  this->fields.targetPiece = (struct WarBoardPieceData_o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetPiece,
    (System_Int32_array **)v13,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v20 = this->fields.targetObject;
  if ( v20
    && (v21 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1), *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
  {
    if ( (WarBoardItemData_c *)v20->klass->_2.typeHierarchy[v21 - 1] == WarBoardItemData_TypeInfo )
      v22 = this->fields.targetObject;
    else
      v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  this->fields.targetItem = (struct WarBoardItemData_o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetItem,
    (System_Int32_array **)v22,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v29 = this->fields.targetObject;
  if ( v29
    && (v30 = *(&WarBoardTreasureData_TypeInfo->_2.bitflags2 + 1), *(&v29->klass->_2.bitflags2 + 1) >= (unsigned int)v30) )
  {
    if ( (WarBoardTreasureData_c *)v29->klass->_2.typeHierarchy[v30 - 1] == WarBoardTreasureData_TypeInfo )
      v31 = this->fields.targetObject;
    else
      v31 = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetTreasure,
    (System_Int32_array **)v31,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void __fastcall WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct IWarBoardObjectData_o *targetObject; // x24
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v21; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w24
  int32_t v26; // w0
  struct System_Int32_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Int32_array *baseRoute; // x24
  WarBoardAIRoute_TargetData___c_c *v39; // x0
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x25
  Il2CppObject *v42; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Int32_array *v51; // x0
  bool IsDetour; // w0
  int32_t nowSquareIndex; // w23
  struct System_Int32_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t v61; // w0
  struct IWarBoardObjectData_o *v62; // x21
  WarBoardAIRoute_TargetData_o *v63; // x22
  IWarBoardObjectData_c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  struct WarBoardSquareData_o *v68; // x8
  int v69; // w0

  if ( (byte_40F7AB9 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, baseTargetData);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__int___ctor__, v14);
    sub_B16FFC(&System_Func_WarBoardPieceData__int__TypeInfo, v15);
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, v16);
    sub_B16FFC(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v17);
    sub_B16FFC(&WarBoardAIRoute_TargetData___c_TypeInfo, v18);
    byte_40F7AB9 = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    klass = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v21;
        p_offset += 2;
        if ( v21 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AAFEF8(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    v26 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
            targetObject,
            *(_QWORD *)(p_method + 8));
    if ( !this )
LABEL_49:
      sub_B170D4();
    squareIndex_k__BackingField = v26;
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = -1;
  }
  this->fields.nowSquareIndex = squareIndex_k__BackingField;
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v27 = AStarSearch__RouteSearch(0LL, baseSquareIndex, squareIndex_k__BackingField, 0, 0LL, 0LL);
  this->fields.baseRoute = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseRoute,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  baseRoute = this->fields.baseRoute;
  v39 = WarBoardAIRoute_TargetData___c_TypeInfo;
  if ( (BYTE3(WarBoardAIRoute_TargetData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v39 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_WarBoardPieceData__int__TypeInfo,
                                                                                v34,
                                                                                v35,
                                                                                v36,
                                                                                v37);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v42,
      Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v43 = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    v43->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v43->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v51 = System_Linq_Enumerable__ToArray_int_(
          v50,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v51, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    nowSquareIndex = this->fields.nowSquareIndex;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v54 = AStarSearch__RouteSearch(piece, baseSquareIndex, nowSquareIndex, 1, 0LL, 0LL);
    this->fields.detourRoute = v54;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.detourRoute,
      (System_Int32_array **)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  v61 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  v62 = this->fields.targetObject;
  this->fields.isAround = v61 == 2;
  if ( v62 )
    v63 = this;
  else
    v63 = 0LL;
  if ( v62 )
  {
    v64 = v62->klass;
    if ( *(_WORD *)&v62->klass->_2.bitflags1 )
    {
      v65 = 0LL;
      v66 = &v64->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v66 - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v65;
        v66 += 4;
        if ( v65 >= *(unsigned __int16 *)&v62->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v67 = (__int64)&v64->vtable[*v66].method;
    }
    else
    {
LABEL_38:
      v67 = sub_AAFEF8(v62, IWarBoardObjectData_TypeInfo, 0LL);
    }
    v69 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v67)(v62, *(_QWORD *)(v67 + 8));
    if ( !v63 )
      goto LABEL_49;
  }
  else
  {
    v68 = this->fields.targetSquare;
    if ( v68 )
      v69 = v68->fields._squareIndex_k__BackingField;
    else
      v69 = -1;
    v63 = this;
  }
  v63->fields.putSquareIndex = v69;
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_41066BD & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_TargetData___c_TypeInfo, v1);
    byte_41066BD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAIRoute_TargetData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int32_t _1__state; // w8
  bool result; // w0
  WebViewManager_o *Instance; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v108; // x21
  BattleServantConfConponent_o *p_warBoardData_5__2; // x21
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t v111; // w8
  struct WarBoardStageNpcEntity_o *v112; // x9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o **p_routeDataList; // x24
  int32_t RequiredCost; // w22
  WebViewManager_o *v115; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v116; // x22
  System_Collections_Generic_Dictionary_int__uint__o **p_piecePlaceData; // x19
  int32_t MasterSquareIndex; // w0
  System_Int32_array **AllyPutSquareIndicesWithoutMaster; // x0
  System_Int32_array **p_allyPieceIndexs_5__5; // x23
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  BattleServantConfConponent_o *p_defenseAreaData_5__7; // x22
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Collections_Generic_List_int__o *v134; // x0
  struct System_Int32_array **p__7__wrap23; // x26
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_basePieceBasePieceRouteList_5__23; // x20
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  int32_t *p__7__wrap24; // x19
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w8
  System_Int32_array **v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  BattleServantConfConponent_c *v149; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v150; // x11
  WarBoardAIRoute_AIRouteMasterData_o *v151; // x0
  System_Collections_Generic_List_int____o *data; // x21
  System_Collections_Generic_Dictionary_int__uint__o *v153; // x22
  bool v154; // w0
  WarBoardAIRoute__CreateRouteData_d__47_o *v155; // x20
  __int128 v156; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__uint__o *p__7__wrap8; // x26
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  BattleServantConfConponent_o *p__8__1; // x22
  const MethodInfo *v165; // x1
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  Il2CppObject *key; // x23
  Il2CppObject *v170; // x27
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **Square; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  BattleServantConfConponent_c *klass; // x27
  System_Int32_array **PieceUnique; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v192; // x9
  int64_t baseFlag_5__6; // x24
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v195; // x28
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x27
  Il2CppObject *v197; // x24
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x3
  __int64 v201; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v202; // x28
  int32_t v203; // w8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v204; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x1
  int32_t RouteSumPieceActionCost; // w0
  WarBoardAIRoute__CreateRouteData_d__47_o *v207; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v208; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v209; // x19
  System_Int32_array **DesignationItemToDistance; // x0
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v217; // x24
  System_Int32_array **TargetToDistance_22947972; // x0
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  System_Int32_array **AllEnemyToDistance; // x0
  System_String_array **v226; // x2
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  BattleServantConfConponent_o *p_dicEnemyRange_5__20; // x24
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  WarBoardPieceData_o *name; // x0
  __int64 v240; // x1
  __int64 v241; // x2
  __int64 v242; // x3
  __int64 v243; // x4
  System_Int32_array **AdvantagePieceData; // x0
  System_String_array **v245; // x2
  System_String_array **v246; // x3
  System_Boolean_array **v247; // x4
  System_Int32_array **v248; // x5
  System_Int32_array *v249; // x6
  System_Int32_array *v250; // x7
  int32_t v251; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v252; // x0
  int32_t v253; // w0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v254; // x8
  struct WarBoardPieceData_o *basePiece; // x8
  WarBoardAIRoute_AIRouteMasterData_o *v256; // x0
  struct WarBoardStageNpcEntity_o *v257; // x8
  const char *v258; // x8
  WarBoardAIRoute_AIRouteMasterData_o *v259; // x0
  WarBoardAIRoute_AIRouteMasterData_o *v260; // x0
  DefenseAreaData_o *defenseAreaData_5__7; // x23
  int32_t getEnumeratorRetType; // w24
  bool IsSquare; // w0
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v264; // x24
  WarBoardAIRoute__CreateRouteData_d__47_o *v265; // x23
  BattleServantConfConponent_o *p_advantagePieceData_5__21; // x23
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  __int64 v273; // x1
  __int64 v274; // x2
  __int64 v275; // x3
  __int64 v276; // x4
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v277; // x25
  WarBoardAIRoute__CreateRouteData_d__47_o *v278; // x24
  BattleServantConfConponent_o *p_basePieceActionPieceRouteList_5__22; // x24
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  WarBoardAIRoute_RouteData_o *v286; // x25
  struct WarBoardPieceData_o *v287; // x8
  const char *v288; // x9
  struct WarBoardPieceData_o *actionPiece; // x8
  const char *v290; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v291; // x19
  __int64 v292; // x1
  __int64 v293; // x2
  __int64 v294; // x3
  __int64 v295; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v296; // x21
  WarBoardAIRoute___c_c *v297; // x0
  struct WarBoardAIRoute___c_StaticFields *v298; // x8
  System_Func_T__TResult__o *_9__47_6; // x22
  Il2CppObject *v300; // x23
  struct WarBoardAIRoute___c_StaticFields *v301; // x0
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v308; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v309; // x0
  int32_t Count; // w0
  struct WarBoardStageNpcEntity_o *v311; // x8
  float v312; // s0
  WarBoardAIRoute__CreateRouteData_d__47_o *v313; // x10
  double v314; // d0
  int v315; // w8
  struct WarBoardStageNpcEntity_o *v316; // x9
  int calcEllipsisMin; // w9
  System_Linq_IOrderedEnumerable_TSource__c *v318; // x8
  unsigned __int64 v319; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v322; // x19
  System_Int32_array **MyAndLinkedSquareIndecies; // x0
  System_String_array **v324; // x2
  System_String_array **v325; // x3
  System_Boolean_array **v326; // x4
  System_Int32_array **v327; // x5
  System_Int32_array *v328; // x6
  System_Int32_array *v329; // x7
  int v330; // w8
  System_Int32_array **v331; // x0
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  __int64 *v338; // x21
  __int64 v339; // x8
  unsigned __int64 v340; // x10
  int *v341; // x11
  __int64 v342; // x0
  __int64 *v343; // x19
  __int64 v344; // x8
  unsigned __int64 v345; // x10
  int *v346; // x11
  __int64 v347; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v348; // x19
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  Il2CppObject *v355; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v356; // x19
  WarBoardAIRoute__CreateRouteData_d__47_o *v357; // x0
  System_String_array **v358; // x2
  System_String_array **v359; // x3
  System_Boolean_array **v360; // x4
  System_Int32_array **v361; // x5
  System_Int32_array *v362; // x6
  System_Int32_array *v363; // x7
  __int64 v364; // x23
  __int64 v365; // x0
  __int64 v366; // x1
  __int64 v367; // x2
  __int64 v368; // x3
  __int64 v369; // x4
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v370; // x8
  __int64 v371; // x9
  int32_t *v372; // x28
  WarBoardAIRoute_RouteData_o *v373; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v374; // x8
  WarBoardAIRoute___c_c *v375; // x0
  struct System_Collections_Generic_Dictionary_int__int__o *dicBaseDIRange_5__18; // x22
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *_9__47_1; // x24
  Il2CppObject *v379; // x25
  struct WarBoardAIRoute___c_StaticFields *v380; // x0
  System_String_array **v381; // x2
  System_String_array **v382; // x3
  System_Boolean_array **v383; // x4
  System_Int32_array **v384; // x5
  System_Int32_array *v385; // x6
  System_Int32_array *v386; // x7
  struct WarBoardAIRoute___c_StaticFields *v387; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *_9__47_2; // x25
  struct System_Int32_array **v389; // x19
  Il2CppObject *v390; // x26
  struct WarBoardAIRoute___c_StaticFields *v391; // x0
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_String_array **v398; // x2
  System_String_array **v399; // x3
  System_Boolean_array **v400; // x4
  System_Int32_array **v401; // x5
  System_Int32_array *v402; // x6
  System_Int32_array *v403; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v404; // x22
  WarBoardAIRoute_RouteData_o *v405; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v406; // x21
  struct WarBoardSquareData_o *v407; // x1
  System_String_array **v408; // x2
  System_String_array **v409; // x3
  System_Boolean_array **v410; // x4
  System_Int32_array **v411; // x5
  System_Int32_array *v412; // x6
  System_Int32_array *v413; // x7
  WarBoardAIRoute_RouteData_o *v414; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v415; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o **v416; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v417; // t1
  struct WarBoardPieceData_o *v418; // x1
  System_String_array **v419; // x2
  System_String_array **v420; // x3
  System_Boolean_array **v421; // x4
  System_Int32_array **v422; // x5
  System_Int32_array *v423; // x6
  System_Int32_array *v424; // x7
  WarBoardAIRoute_RouteData_o *v425; // x0
  WarBoardAIRoute_RouteData_o *v426; // x24
  int32_t v427; // w25
  System_Int32_array **v428; // x0
  System_String_array **v429; // x2
  System_String_array **v430; // x3
  System_Boolean_array **v431; // x4
  System_Int32_array **v432; // x5
  System_Int32_array *v433; // x6
  System_Int32_array *v434; // x7
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v436; // x19
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v437; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int32_t v439; // w0
  WarBoardAIRoute_RouteData_o *v440; // x24
  System_Int32_array **MoveByTargetDistance; // x0
  System_String_array **v442; // x2
  System_String_array **v443; // x3
  System_Boolean_array **v444; // x4
  System_Int32_array **v445; // x5
  System_Int32_array *v446; // x6
  System_Int32_array *v447; // x7
  WarBoardAIRoute_RouteData_o *v448; // x22
  System_Int32_array **v449; // x0
  System_String_array **v450; // x2
  System_String_array **v451; // x3
  System_Boolean_array **v452; // x4
  System_Int32_array **v453; // x5
  System_Int32_array *v454; // x6
  System_Int32_array *v455; // x7
  System_String_array **v456; // x2
  System_String_array **v457; // x3
  System_Boolean_array **v458; // x4
  System_Int32_array **v459; // x5
  System_Int32_array *v460; // x6
  System_Int32_array *v461; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v462; // x8
  struct WarBoardPieceData_o *v463; // x9
  BattleServantConfConponent_o *p_actionPiece; // x0
  struct WarBoardPieceData_o *v465; // x10
  struct WarBoardPieceData_o *v466; // x8
  int32_t v467; // w0
  WarBoardAIRoute_RouteData_o *v468; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v469; // x10
  struct WarBoardSquareData_o *baseSquare_5__11; // x9
  WarBoardData_o *warBoardData_5__2; // x0
  WarBoardWallData_o *Wall; // x22
  WebViewManager_o *v473; // x0
  WarBoardPieceData_o *v474; // x0
  WarBoardPieceData_o *v475; // x0
  WarBoardPieceData_o *v476; // x22
  WarBoardPieceData_o *v477; // x24
  WarBoardPieceData_o *v478; // x0
  WarBoardPieceData_o *v479; // x0
  WarBoardAIRoute_RouteData_o *v480; // x8
  struct WarBoardPieceData_o *v481; // x9
  WarBoardPieceData_o *v482; // x0
  WarBoardAIRoute_RouteData_o *v483; // x19
  struct WarBoardPieceData_o *v484; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v486; // x24
  int64_t flagNow; // x20
  int32_t ClassId; // w0
  struct WarBoardPieceData_o *v489; // x8
  int32_t v490; // w22
  BattleServantData_o *v491; // x0
  int32_t v492; // w2
  BattleServantConfConponent_o *v493; // x0
  System_String_array **v494; // x2
  System_String_array **v495; // x3
  System_Boolean_array **v496; // x4
  System_Int32_array **v497; // x5
  System_Int32_array *v498; // x6
  System_Int32_array *v499; // x7
  System_String_array **v500; // x2
  System_String_array **v501; // x3
  System_Boolean_array **v502; // x4
  System_Int32_array **v503; // x5
  System_Int32_array *v504; // x6
  System_Int32_array *v505; // x7
  System_String_array **v506; // x2
  System_String_array **v507; // x3
  System_Boolean_array **v508; // x4
  System_Int32_array **v509; // x5
  System_Int32_array *v510; // x6
  System_Int32_array *v511; // x7
  System_String_array **v512; // x2
  System_String_array **v513; // x3
  System_Boolean_array **v514; // x4
  System_Int32_array **v515; // x5
  System_Int32_array *v516; // x6
  System_Int32_array *v517; // x7
  System_String_array **v518; // x2
  System_String_array **v519; // x3
  System_Boolean_array **v520; // x4
  System_Int32_array **v521; // x5
  System_Int32_array *v522; // x6
  System_Int32_array *v523; // x7
  System_String_array **v524; // x2
  System_String_array **v525; // x3
  System_Boolean_array **v526; // x4
  System_Int32_array **v527; // x5
  System_Int32_array *v528; // x6
  System_Int32_array *v529; // x7
  System_String_array **v530; // x2
  System_String_array **v531; // x3
  System_Boolean_array **v532; // x4
  System_Int32_array **v533; // x5
  System_Int32_array *v534; // x6
  System_Int32_array *v535; // x7
  System_String_array **v536; // x2
  System_String_array **v537; // x3
  System_Boolean_array **v538; // x4
  System_Int32_array **v539; // x5
  System_Int32_array *v540; // x6
  System_Int32_array *v541; // x7
  struct WarBoardPieceData_o *v542; // x22
  WarBoardPieceData_o *v543; // x24
  WebViewManager_o *v544; // x0
  WarBoardPieceData_o *v545; // x0
  WarBoardPieceData_o *v546; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v547; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v548; // x0
  WarBoardPieceData_o *v549; // x22
  WarBoardPieceData_o *v550; // x24
  int32_t requiredCost_5__3; // w25
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v552; // x0
  int32_t MasterSquareIndexFromPlaceData; // w24
  System_Collections_Generic_IEnumerable_TSource__o *basePieceActionPieceRouteList_5__22; // x25
  __int64 v555; // x1
  __int64 v556; // x2
  __int64 v557; // x3
  __int64 v558; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v559; // x26
  __int64 v560; // x1
  __int64 v561; // x2
  __int64 v562; // x3
  __int64 v563; // x4
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v565; // x26
  struct DefenseAreaData_o *DefenseAreaData; // x23
  System_Int32_array *v567; // x2
  WarBoardAIRoute_AIRouteMasterData_o *v568; // x0
  System_Collections_Generic_List_int____o *ShortestRoutes_k__BackingField; // x25
  bool v570; // w0
  bool IsAllBlockShortestRouteEnemyAndMastr; // w8
  WarBoardAIRoute_RouteData_o *v572; // x0
  WarBoardAIRoute_RouteData_o *v573; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v574; // x25
  System_String_array **v575; // x2
  System_String_array **v576; // x3
  System_Boolean_array **v577; // x4
  System_Int32_array **v578; // x5
  System_Int32_array *v579; // x6
  System_Int32_array *v580; // x7
  __int64 v581; // x1
  __int64 v582; // x2
  __int64 v583; // x3
  __int64 v584; // x4
  WarBoardAIRoute_RouteData_o *v585; // x23
  System_Collections_Generic_Dictionary_uint__int__o *v586; // x25
  System_String_array **v587; // x2
  System_String_array **v588; // x3
  System_Boolean_array **v589; // x4
  System_Int32_array **v590; // x5
  System_Int32_array *v591; // x6
  System_Int32_array *v592; // x7
  System_Collections_Generic_Dictionary_int__uint__o *v593; // x0
  struct WarBoardPieceData_o *v594; // x8
  uint32_t key_high; // w23
  int32_t v596; // w26
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x25
  int32_t v598; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v599; // x0
  int32_t v600; // w0
  __int64 v601; // x1
  __int64 v602; // x2
  __int64 v603; // x3
  __int64 v604; // x4
  WarBoardAIRoute_RouteData_o *v605; // x23
  System_Collections_Generic_List_int__o *v606; // x25
  System_String_array **v607; // x2
  System_String_array **v608; // x3
  System_Boolean_array **v609; // x4
  System_Int32_array **v610; // x5
  System_Int32_array *v611; // x6
  System_Int32_array *v612; // x7
  WarBoardAIRoute_RouteData_o *v613; // x23
  __int64 v614; // x1
  __int64 v615; // x2
  __int64 v616; // x3
  __int64 v617; // x4
  System_Collections_Generic_Dictionary_int__bool__o *v618; // x25
  System_String_array **v619; // x2
  System_String_array **v620; // x3
  System_Boolean_array **v621; // x4
  System_Int32_array **v622; // x5
  System_Int32_array *v623; // x6
  System_Int32_array *v624; // x7
  WarBoardAIRoute_RouteData_o *v625; // x23
  __int64 v626; // x1
  __int64 v627; // x2
  __int64 v628; // x3
  __int64 v629; // x4
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v630; // x25
  System_String_array **v631; // x2
  System_String_array **v632; // x3
  System_Boolean_array **v633; // x4
  System_Int32_array **v634; // x5
  System_Int32_array *v635; // x6
  System_Int32_array *v636; // x7
  WarBoardAIRoute_RouteData_o *v637; // x8
  WarBoardPieceData_o *v638; // x0
  __int64 v639; // x1
  struct WarBoardPieceData_o *v640; // x8
  WarBoardAIRoute_AIRouteMasterData_o *v641; // x0
  DefenseAreaData_o *v642; // x0
  struct WarBoardPieceData_o *v643; // x8
  WarBoardAIRoute_AIRouteMasterData_o *v644; // x0
  WarBoardAIRoute_AIRouteMasterData_o *v645; // x0
  int32_t v646; // w25
  DefenseAreaData_o *v647; // x23
  bool v648; // w0
  struct WarBoardPieceData_o *v649; // x8
  WarBoardAIRoute_AIRouteMasterData_o *v650; // x0
  int32_t v651; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v652; // x0
  int32_t v653; // w0
  WarBoardAIRoute_RouteData_o *v654; // x19
  int32_t v655; // w0
  System_Collections_Generic_Dictionary_int__int__o *v656; // x0
  int32_t v657; // w23
  int32_t v658; // w24
  int32_t v659; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v660; // x0
  int32_t v661; // w0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x25
  int32_t v663; // w0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  int32_t v666; // w23
  int32_t enemyMasterSquareIndex; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v668; // x0
  int32_t v669; // w0
  WarBoardAIRoute_RouteData_o *v670; // x19
  int32_t v671; // w0
  __int64 v672; // x1
  WarBoardAIRoute_RouteData_o *v673; // x19
  WarBoardAIManager_c *v674; // x0
  int32_t v675; // w0
  WarBoardAIRoute__CreateRouteData_d__47_o *v676; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v677; // x8
  WarBoardPieceData_o *v678; // x0
  struct WarBoardPieceData_o *v679; // x9
  WarBoardAIManager_c *v680; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t currentKey; // w23
  int32_t v684; // w24
  System_Int32_array *v685; // x0
  struct WarBoardStageNpcEntity_o *v686; // x8
  __int64 v687; // x1
  WarBoardAIRoute_RouteData_o *v688; // x20
  WarBoardAIManager_c *v689; // x0
  struct DefenseAreaData_o *v690; // x8
  int32_t v691; // w0
  __int64 v692; // x1
  WarBoardAIManager_c *v693; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v694; // x0
  int32_t v695; // w23
  int32_t v696; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v697; // x23
  int v698; // w19
  System_Collections_Generic_Dictionary_int__uint__o *v699; // x22
  WarBoardData_o *v700; // x0
  __int64 v701; // x1
  __int64 v702; // x2
  __int64 v703; // x3
  __int64 v704; // x4
  System_Collections_Generic_List_int__o *v705; // x23
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v706; // x0
  WarBoardAIRoute_RouteData_o *v707; // x24
  WarBoardPieceData_o *v708; // x0
  WarBoardPieceData_o *v709; // x0
  WarBoardPieceData_o *v710; // x0
  WarBoardPieceData_o *v711; // x0
  WarBoardAIRoute_RouteData_o *v712; // x8
  int64_t v713; // x9
  WarBoardPieceData_o *v714; // x0
  bool CanAcquireItem; // w8
  WarBoardAIRoute_RouteData_o *v716; // x0
  WarBoardPieceData_o *v717; // x0
  WarBoardAIRoute_RouteData_o *v718; // x19
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x19
  bool IsAttack; // w0
  struct WarBoardPieceData_o *v721; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *piecePersonalityDic; // x0
  WarBoardAIRoute_PiecePersonality_o *v723; // x24
  WarBoardAIEvalCalcurater_o *v724; // x23
  __int64 v725; // x1
  __int64 v726; // x2
  __int64 v727; // x3
  __int64 v728; // x4
  WarBoardAIRoute___c_c *v729; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v730; // x24
  struct WarBoardAIRoute___c_StaticFields *v731; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_5; // x25
  Il2CppObject *v733; // x26
  struct WarBoardAIRoute___c_StaticFields *v734; // x0
  System_String_array **v735; // x2
  System_String_array **v736; // x3
  System_Boolean_array **v737; // x4
  System_Int32_array **v738; // x5
  System_Int32_array *v739; // x6
  System_Int32_array *v740; // x7
  System_Collections_Generic_IEnumerable_T__o *v741; // x25
  __int64 v742; // x1
  __int64 v743; // x2
  __int64 v744; // x3
  __int64 v745; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v746; // x24
  WarBoardAIRoute_RouteData_o *v747; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allRouteList; // x0
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x23
  Il2CppObject *v751; // x1
  Il2CppObject *v752; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v753; // x0
  System_String_array **v754; // x2
  System_String_array **v755; // x3
  System_Boolean_array **v756; // x4
  System_Int32_array **v757; // x5
  System_Int32_array *v758; // x6
  System_Int32_array *v759; // x7
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v760; // [xsp+8h] [xbp-208h]
  struct System_Int32_array **v761; // [xsp+18h] [xbp-1F8h]
  int32_t *p_masterSquareIndex_5__4; // [xsp+20h] [xbp-1F0h]
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v763; // [xsp+20h] [xbp-1F0h]
  BattleServantConfConponent_o *piecePlaceData; // [xsp+28h] [xbp-1E8h]
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceDataa; // [xsp+28h] [xbp-1E8h]
  struct WarBoardAIRoute_o *_4__this; // [xsp+30h] [xbp-1E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v767; // [xsp+38h] [xbp-1D8h] BYREF
  __int128 v768; // [xsp+60h] [xbp-1B0h]
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+70h] [xbp-1A0h]
  _DWORD v770[12]; // [xsp+88h] [xbp-188h]
  int v771; // [xsp+B8h] [xbp-158h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v772; // [xsp+C0h] [xbp-150h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v773; // [xsp+F0h] [xbp-120h] BYREF
  __int128 v774; // [xsp+110h] [xbp-100h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v775; // [xsp+120h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v776; // [xsp+130h] [xbp-E0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+158h] [xbp-B8h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+160h] [xbp-B0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+168h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v780; // [xsp+170h] [xbp-A0h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+190h] [xbp-80h] BYREF
  int32_t actionCount[6]; // [xsp+198h] [xbp-78h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v783; // [xsp+1B8h] [xbp-58h]

  v783 = this;
  if ( (byte_40F79DB & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, method);
    sub_B16FFC(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v23);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v24);
    sub_B16FFC(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v25);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v26);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v27);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v28);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v29);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v30);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v31);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v32);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v33);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v38);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v39);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v43);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v44);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v45);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v46);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v47);
    sub_B16FFC(
      &Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__,
      v48);
    sub_B16FFC(&Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__, v49);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__, v50);
    sub_B16FFC(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__, v51);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v52);
    sub_B16FFC(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v53);
    sub_B16FFC(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, v54);
    sub_B16FFC(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v55);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v56);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v57);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v58);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v59);
    sub_B16FFC(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v60);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v61);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v62);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v63);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__, v64);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v65);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v66);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v67);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v68);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v69);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v70);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v71);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v72);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v73);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v74);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v75);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v76);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v77);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v78);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___66760096, v79);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v80);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v81);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v82);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v83);
    sub_B16FFC(&WarBoardAIRoute_RouteData_TypeInfo, v84);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v85);
    sub_B16FFC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v86);
    sub_B16FFC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v87);
    sub_B16FFC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v88);
    sub_B16FFC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v89);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v90);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v91);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v92);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v93);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v94);
    sub_B16FFC(&WarBoardAIRoute___c_TypeInfo, v95);
    sub_B16FFC(&WarBoardAIEvalCalcurater_TypeInfo, v96);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v97);
    byte_40F79DB = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  *(_QWORD *)actionCount = 0LL;
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v780, 0, sizeof(v780));
  memset(&v776, 0, 32);
  v774 = 0u;
  v775 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v773, 0, sizeof(v773));
  memset(&v772, 0, sizeof(v772));
  v771 = 0;
  _1__state = v783->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v783->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v783->fields._servantAndEnemyMasterRange_5__15;
    v783->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_141:
      v348 = v783;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v783, method);
      *(_QWORD *)&v348->fields.__7__wrap24 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&v348->fields.__7__wrap24, 0LL, v349, v350, v351, v352, v353, v354);
      return 0;
    }
    p__7__wrap24 = &v783->fields.__7__wrap24;
LABEL_127:
    v338 = *(__int64 **)p__7__wrap24;
    if ( !*(_QWORD *)p__7__wrap24 )
      sub_B170D4();
    v339 = *v338;
    if ( *(_WORD *)(*v338 + 298) )
    {
      v340 = 0LL;
      v341 = (int *)(*(_QWORD *)(v339 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v341 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v340;
        v341 += 4;
        if ( v340 >= *(unsigned __int16 *)(*v338 + 298) )
          goto LABEL_132;
      }
      v342 = v339 + 16LL * *v341 + 312;
    }
    else
    {
LABEL_132:
      v342 = sub_AAFEF8(*(_QWORD *)p__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v342)(v338, *(_QWORD *)(v342 + 8)) & 1) != 0 )
    {
      v343 = *(__int64 **)p__7__wrap24;
      if ( !v343 )
        sub_B170D4();
      v344 = *v343;
      if ( *(_WORD *)(*v343 + 298) )
      {
        v345 = 0LL;
        v346 = (int *)(*(_QWORD *)(v344 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v346 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          ++v345;
          v346 += 4;
          if ( v345 >= *(unsigned __int16 *)(*v343 + 298) )
            goto LABEL_140;
        }
        v347 = v344 + 16LL * *v346 + 312;
      }
      else
      {
LABEL_140:
        v347 = sub_AAFEF8(v343, System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, 0LL);
      }
      v355 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v347)(v343, *(_QWORD *)(v347 + 8));
      v356 = v783;
      v357 = v783;
      v783->fields.__2__current = v355;
      v357 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v357 + 24);
      ++LODWORD(v357->fields._baseSquare_5__11);
      sub_B16F98((BattleServantConfConponent_o *)v357, (System_Int32_array **)v355, v358, v359, v360, v361, v362, v363);
      result = 1;
      v356->fields.__1__state = 2;
      return result;
    }
    goto LABEL_141;
  }
  _4__this = v783->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap23 = &v783->fields.__7__wrap23;
    p_basePieceBasePieceRouteList_5__23 = &v783->fields._basePieceBasePieceRouteList_5__23;
    v783->fields.__1__state = -3;
    goto LABEL_549;
  }
  result = 0;
  if ( !_1__state )
  {
    v783->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    monitor = (struct WarBoardData_o *)Instance[4].monitor;
    v108 = v783;
    v783->fields._warBoardData_5__2 = monitor;
    p_warBoardData_5__2 = (BattleServantConfConponent_o *)&v108->fields._warBoardData_5__2;
    sub_B16F98(p_warBoardData_5__2, (System_Int32_array **)monitor, v101, v102, v103, v104, v105, v106);
    if ( !_4__this )
      sub_B170D4();
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_B170D4();
    if ( !npcData->fields.searchDepth )
      npcData->fields.searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
    v111 = v783->fields.searchCount + 1;
    v783->fields.searchCount = v111;
    v112 = _4__this->fields.npcData;
    if ( !v112 )
      sub_B170D4();
    if ( v111 > v112->fields.searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    *(_QWORD *)actionCount = 0LL;
    p_routeDataList = &v783->fields.routeDataList;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v783->fields.routeDataList,
      &actionCount[1],
      actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      0LL);
    RequiredCost = WarBoardAIRoute__GetRequiredCost(
                     _4__this,
                     _4__this->fields.moveCost,
                     _4__this->fields.masterMoveCost,
                     actionCount[1],
                     actionCount[0],
                     masterReplaceCount[1],
                     masterReplaceCount[0],
                     0LL);
    v783->fields._requiredCost_5__3 = RequiredCost;
    v115 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v115 )
      sub_B170D4();
    if ( RequiredCost >= SHIDWORD(v115[7].monitor) )
      return 0;
    v116 = v783;
    p_piecePlaceData = &v783->fields.piecePlaceData;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v783->fields.piecePlaceData, 0LL);
    v116->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    p_masterSquareIndex_5__4 = &v116->fields._masterSquareIndex_5__4;
    AllyPutSquareIndicesWithoutMaster = (System_Int32_array **)WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                                                 _4__this,
                                                                 v116->fields.piecePlaceData,
                                                                 MasterSquareIndex,
                                                                 0LL);
    v116->fields._allyPieceIndexs_5__5 = (struct System_Int32_array *)AllyPutSquareIndicesWithoutMaster;
    p_allyPieceIndexs_5__5 = &v116->fields._allyPieceIndexs_5__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v116->fields._allyPieceIndexs_5__5,
      AllyPutSquareIndicesWithoutMaster,
      v121,
      v122,
      v123,
      v124,
      v125,
      v126);
    v116->fields._defenseAreaData_5__7 = 0LL;
    p_defenseAreaData_5__7 = (BattleServantConfConponent_o *)&v116->fields._defenseAreaData_5__7;
    *(_QWORD *)&p_defenseAreaData_5__7[-1].fields.isOpenAfter = 1LL;
    sub_B16F98(p_defenseAreaData_5__7, 0LL, v128, v129, v130, v131, v132, v133);
    if ( !p_warBoardData_5__2->klass )
      sub_B170D4();
    v134 = *(System_Collections_Generic_List_int__o **)&p_warBoardData_5__2->klass->_2.cctor_finished;
    if ( !v134 )
      sub_B170D4();
    if ( System_Collections_Generic_List_int___Contains(
           v134,
           _4__this->fields.forceId,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v783->fields._masterExists_5__8 = 1;
    }
    else
    {
      aiRouteMasterData = _4__this->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        sub_B170D4();
      masterType = aiRouteMasterData->fields.masterType;
      v783->fields._masterExists_5__8 = masterType != 3;
      if ( masterType == 3 )
      {
LABEL_28:
        if ( !*p_piecePlaceData )
          sub_B170D4();
        v760 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)p_routeDataList;
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v767,
          *p_piecePlaceData,
          (const MethodInfo_2DF1138 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v155 = v783;
        v768 = *(_OWORD *)&v767.fields.dictionary;
        current = v767.fields.current;
        v156 = *(_OWORD *)&v767.fields.dictionary;
        p__7__wrap8 = &v783->fields.__7__wrap8;
        v783->fields.__7__wrap8.fields.current = v767.fields.current;
        *(_OWORD *)&v155->fields.__7__wrap8.fields.dictionary = v156;
        sub_B16F98((BattleServantConfConponent_o *)&v155->fields.__7__wrap8, 0LL, v158, v159, v160, v161, v162, v163);
        v155->fields.__1__state = -3;
        p__8__1 = (BattleServantConfConponent_o *)&v155->fields.__8__1;
        piecePlaceData = (BattleServantConfConponent_o *)&v155->fields._baseSquareIndex_5__10;
LABEL_43:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  p__7__wrap8,
                  (const MethodInfo_272A700 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v783->fields.__7__wrap8.fields.current.fields.key;
          v170 = (Il2CppObject *)sub_B170CC(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v165, v166, v167, v168);
          System_Object___ctor(v170, 0LL);
          p__8__1->klass = (BattleServantConfConponent_c *)v170;
          sub_B16F98(p__8__1, (System_Int32_array **)v170, v171, v172, v173, v174, v175, v176);
          v783->fields.__7__wrap8.fields.getEnumeratorRetType = (int)key;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          Square = (System_Int32_array **)WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          piecePlaceData->klass = (BattleServantConfConponent_c *)Square;
          sub_B16F98(piecePlaceData, Square, v178, v179, v180, v181, v182, v183);
          klass = p__8__1->klass;
          PieceUnique = (System_Int32_array **)WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !klass )
            sub_B170D4();
          klass->_1.name = (const char *)PieceUnique;
          sub_B16F98((BattleServantConfConponent_o *)&klass->_1.name, PieceUnique, v186, v187, v188, v189, v190, v191);
          v192 = v783;
          baseFlag_5__6 = v783->fields._baseFlag_5__6;
          _8__1 = v783->fields.__8__1;
          v783->fields._tmpFlagNow_5__12 = -1LL;
          v192->fields._servantAndMasterRange_5__13 = -1;
          v192->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !_8__1 )
            sub_B170D4();
          if ( !_4__this )
            sub_B170D4();
          v195 = v783;
          v195->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(WarBoardAIRoute__GetFlagAroundSquareCheck(
                                                                             _4__this,
                                                                             *(WarBoardSquareData_o **)&v783->fields._baseSquareIndex_5__10,
                                                                             _8__1->fields.basePiece,
                                                                             *p_piecePlaceData,
                                                                             *p_masterSquareIndex_5__4,
                                                                             0LL) | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v195->fields.routeDataList;
          v197 = (Il2CppObject *)v195->fields.__8__1;
          v202 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                      v198,
                                                                                      v199,
                                                                                      v200,
                                                                                      v201);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v202,
            v197,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
          v203 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v202,
                   (const MethodInfo_18D4A90 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v204 = v783->fields.routeDataList;
          v783->fields._servantAndEnemyRange_5__14 = v203;
          if ( !v204 )
            sub_B170D4();
          Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                   v204,
                   (const MethodInfo_2F25F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          if ( !p__8__1->klass )
            sub_B170D4();
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                      0LL);
          v207 = v783;
          v208 = v783->fields.__8__1;
          v783->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v208 )
            sub_B170D4();
          if ( WarBoardAIRoute__IsActable(
                 _4__this,
                 v208->fields.basePiece,
                 v207->fields._servantAndEnemyRange_5__14,
                 v207->fields._requiredCost_5__3,
                 RouteSumPieceActionCost,
                 0LL) )
          {
            if ( !p__8__1->klass )
              sub_B170D4();
            v209 = v783;
            DesignationItemToDistance = (System_Int32_array **)WarBoardAIRoute__GetDesignationItemToDistance(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v783->fields.routeDataList,
                                                                 v783->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            *(_QWORD *)&v209->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v209->fields._sumPieceActionCost_5__17,
              DesignationItemToDistance,
              v211,
              v212,
              v213,
              v214,
              v215,
              v216);
            if ( !p__8__1->klass )
              sub_B170D4();
            v217 = v783;
            TargetToDistance_22947972 = (System_Int32_array **)WarBoardAIRoute__GetTargetToDistance_22947972(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v783->fields.routeDataList,
                                                                 v783->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            v217->fields._dicBaseDIRange_5__18 = (struct System_Collections_Generic_Dictionary_int__int__o *)TargetToDistance_22947972;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v217->fields._dicBaseDIRange_5__18,
              TargetToDistance_22947972,
              v219,
              v220,
              v221,
              v222,
              v223,
              v224);
            AllEnemyToDistance = (System_Int32_array **)WarBoardAIRoute__GetAllEnemyToDistance(
                                                          _4__this,
                                                          v217->fields.routeDataList,
                                                          v217->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                          (int32_t *)&v155->fields._tmpFlagNow_5__12 + 1,
                                                          &v155->fields._servantAndMasterRange_5__13,
                                                          0LL);
            v217->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v217->fields._dicKeyPutIndexValueTargetData_5__19,
              AllEnemyToDistance,
              v226,
              v227,
              v228,
              v229,
              v230,
              v231);
            v217->fields._dicEnemyRange_5__20 = 0LL;
            p_dicEnemyRange_5__20 = (BattleServantConfConponent_o *)&v217->fields._dicEnemyRange_5__20;
            sub_B16F98(p_dicEnemyRange_5__20, 0LL, v233, v234, v235, v236, v237, v238);
            if ( !p__8__1->klass )
              sub_B170D4();
            name = (WarBoardPieceData_o *)p__8__1->klass->_1.name;
            if ( !name )
              sub_B170D4();
            if ( WarBoardPieceData__get_isServant(name, 0LL) )
            {
              if ( !p__8__1->klass )
                sub_B170D4();
              AdvantagePieceData = (System_Int32_array **)WarBoardAIRoute__GetAdvantagePieceData(
                                                            _4__this,
                                                            (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                            v783->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                            0LL);
              p_dicEnemyRange_5__20->klass = (BattleServantConfConponent_c *)AdvantagePieceData;
              sub_B16F98(p_dicEnemyRange_5__20, AdvantagePieceData, v245, v246, v247, v248, v249, v250);
              if ( v783->fields._masterExists_5__8 )
              {
                v251 = *p_masterSquareIndex_5__4;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v252 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              v251,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v253 = System_Linq_Enumerable__Count_int_(
                         v252,
                         (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
                v254 = v783->fields.__8__1;
                LODWORD(v783->fields._tmpFlagNow_5__12) = v253;
                if ( !v254 )
                  sub_B170D4();
                basePiece = v254->fields.basePiece;
                if ( !basePiece )
                  sub_B170D4();
                v256 = _4__this->fields.aiRouteMasterData;
                if ( !v256 )
                  sub_B170D4();
                if ( !WarBoardAIRoute_AIRouteMasterData__IsMasterServant(
                        v256,
                        basePiece->fields._index_k__BackingField,
                        0LL) )
                {
                  v257 = _4__this->fields.npcData;
                  if ( !v257 )
                    sub_B170D4();
                  if ( v257->fields.defenseArea > SLODWORD(v783->fields._tmpFlagNow_5__12) )
                    v783->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v783->fields._baseSquare_5__11 | 0x800);
                }
                if ( !p__8__1->klass )
                  sub_B170D4();
                v258 = p__8__1->klass->_1.name;
                if ( !v258 )
                  sub_B170D4();
                v259 = _4__this->fields.aiRouteMasterData;
                if ( !v259 )
                  sub_B170D4();
                if ( !WarBoardAIRoute_AIRouteMasterData__IsMasterServant(v259, *((_DWORD *)v258 + 7), 0LL) )
                {
                  v260 = _4__this->fields.aiRouteMasterData;
                  if ( !v260 )
                    sub_B170D4();
                  defenseAreaData_5__7 = v783->fields._defenseAreaData_5__7;
                  getEnumeratorRetType = v783->fields.__7__wrap8.fields.getEnumeratorRetType;
                  IsSquare = WarBoardAIRoute_AIRouteMasterData__get_IsSquare(v260, 0LL);
                  if ( WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         defenseAreaData_5__7,
                         getEnumeratorRetType,
                         IsSquare,
                         0LL) )
                  {
                    v783->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v783->fields._baseSquare_5__11 | 0x80000000);
                  }
                }
              }
            }
            v264 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                                        v240,
                                                                                        v241,
                                                                                        v242,
                                                                                        v243);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v264,
              (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v265 = v783;
            v783->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v264;
            p_advantagePieceData_5__21 = (BattleServantConfConponent_o *)&v265->fields._advantagePieceData_5__21;
            sub_B16F98(p_advantagePieceData_5__21, (System_Int32_array **)v264, v267, v268, v269, v270, v271, v272);
            v277 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                                        v273,
                                                                                        v274,
                                                                                        v275,
                                                                                        v276);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v277,
              (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v278 = v783;
            v783->fields._basePieceActionPieceRouteList_5__22 = v277;
            p_basePieceActionPieceRouteList_5__22 = (BattleServantConfConponent_o *)&v278->fields._basePieceActionPieceRouteList_5__22;
            sub_B16F98(
              p_basePieceActionPieceRouteList_5__22,
              (System_Int32_array **)v277,
              v280,
              v281,
              v282,
              v283,
              v284,
              v285);
            if ( !*v760 )
              sub_B170D4();
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v767,
              *v760,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            v780.fields.current = v767.fields.current.fields.key;
            *(_OWORD *)&v780.fields.list = *(_OWORD *)&v767.fields.dictionary;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v780,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__) )
            {
              v286 = (WarBoardAIRoute_RouteData_o *)v780.fields.current;
              if ( !v780.fields.current )
                sub_B170D4();
              if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v780.fields.current, 0LL) )
              {
                v287 = v286->fields.basePiece;
                if ( !v287 )
                  sub_B170D4();
                if ( !p__8__1->klass )
                  sub_B170D4();
                v288 = p__8__1->klass->_1.name;
                if ( !v288 )
                  sub_B170D4();
                if ( v287->fields._index_k__BackingField == *((_DWORD *)v288 + 7) )
                {
                  if ( !p_basePieceActionPieceRouteList_5__22->klass )
                    sub_B170D4();
                  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_basePieceActionPieceRouteList_5__22->klass,
                    v286,
                    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( WarBoardAIRoute_RouteData__HasFlag(v286, 0x4000000LL, 0LL) )
                {
                  actionPiece = v286->fields.actionPiece;
                  if ( !actionPiece )
                    sub_B170D4();
                  if ( !p__8__1->klass )
                    sub_B170D4();
                  v290 = p__8__1->klass->_1.name;
                  if ( !v290 )
                    sub_B170D4();
                  if ( actionPiece->fields._index_k__BackingField == *((_DWORD *)v290 + 7) )
                  {
                    if ( !p_advantagePieceData_5__21->klass )
                      sub_B170D4();
                    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                      (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_advantagePieceData_5__21->klass,
                      v286,
                      (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            v770[v771++] = 1280;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v780,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            if ( v771 && v770[v771 - 1] == 1280 )
              --v771;
            if ( !piecePlaceData->klass )
              sub_B170D4();
            v322 = v783;
            MyAndLinkedSquareIndecies = (System_Int32_array **)WarBoardSquareData__GetMyAndLinkedSquareIndecies(
                                                                 (WarBoardSquareData_o *)piecePlaceData->klass,
                                                                 0LL);
            v322->fields._basePieceBasePieceRouteList_5__23 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)MyAndLinkedSquareIndecies;
            p_basePieceBasePieceRouteList_5__23 = &v322->fields._basePieceBasePieceRouteList_5__23;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v322->fields._basePieceBasePieceRouteList_5__23,
              MyAndLinkedSquareIndecies,
              v324,
              v325,
              v326,
              v327,
              v328,
              v329);
            v330 = 0;
            p__7__wrap23 = &v322->fields.__7__wrap23;
            LODWORD(v322->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B170D4();
              if ( v330 >= SLODWORD((*p_basePieceBasePieceRouteList_5__23)->fields._slots) )
              {
                *p_basePieceBasePieceRouteList_5__23 = 0LL;
                v493 = (BattleServantConfConponent_o *)p_basePieceBasePieceRouteList_5__23;
                v155 = v783;
                sub_B16F98(v493, 0LL, v2, v3, v4, v5, v6, v7);
                v155->fields.__8__1 = 0LL;
                p__8__1 = (BattleServantConfConponent_o *)&v155->fields.__8__1;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields.__8__1,
                  0LL,
                  v494,
                  v495,
                  v496,
                  v497,
                  v498,
                  v499);
                *(_QWORD *)&v155->fields._baseSquareIndex_5__10 = 0LL;
                piecePlaceData = (BattleServantConfConponent_o *)&v155->fields._baseSquareIndex_5__10;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields._baseSquareIndex_5__10,
                  0LL,
                  v500,
                  v501,
                  v502,
                  v503,
                  v504,
                  v505);
                *(_QWORD *)&v155->fields._sumPieceActionCost_5__17 = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields._sumPieceActionCost_5__17,
                  0LL,
                  v506,
                  v507,
                  v508,
                  v509,
                  v510,
                  v511);
                v155->fields._dicBaseDIRange_5__18 = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields._dicBaseDIRange_5__18,
                  0LL,
                  v512,
                  v513,
                  v514,
                  v515,
                  v516,
                  v517);
                v155->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields._dicKeyPutIndexValueTargetData_5__19,
                  0LL,
                  v518,
                  v519,
                  v520,
                  v521,
                  v522,
                  v523);
                v155->fields._dicEnemyRange_5__20 = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields._dicEnemyRange_5__20,
                  0LL,
                  v524,
                  v525,
                  v526,
                  v527,
                  v528,
                  v529);
                v155->fields._advantagePieceData_5__21 = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields._advantagePieceData_5__21,
                  0LL,
                  v530,
                  v531,
                  v532,
                  v533,
                  v534,
                  v535);
                v155->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v155->fields._basePieceActionPieceRouteList_5__22,
                  0LL,
                  v536,
                  v537,
                  v538,
                  v539,
                  v540,
                  v541);
                p__7__wrap8 = &v155->fields.__7__wrap8;
                p_masterSquareIndex_5__4 = &v155->fields._masterSquareIndex_5__4;
                p_piecePlaceData = &v155->fields.piecePlaceData;
                v760 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&v155->fields.routeDataList;
                goto LABEL_43;
              }
              v364 = sub_B170CC(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, method, v2, v3, v4);
              System_Object___ctor((Il2CppObject *)v364, 0LL);
              v370 = *p_basePieceBasePieceRouteList_5__23;
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B170D4();
              v371 = *(int *)p__7__wrap23;
              if ( (unsigned int)v371 >= LODWORD(v370->fields._slots) )
              {
                sub_B17100(v365, v366, v367);
                sub_B170A0();
              }
              if ( !v364 )
                sub_B170D4();
              *(_DWORD *)(v364 + 16) = *(&v370->fields._count + v371);
              v372 = (int32_t *)(v364 + 16);
              v373 = (WarBoardAIRoute_RouteData_o *)sub_B170CC(
                                                      WarBoardAIRoute_RouteData_TypeInfo,
                                                      v366,
                                                      v367,
                                                      v368,
                                                      v369);
              WarBoardAIRoute_RouteData___ctor(v373, 0LL);
              routeData = v373;
              if ( !v373 )
                sub_B170D4();
              v373->fields.baseIndex = v783->fields.__7__wrap8.fields.getEnumeratorRetType;
              v373->fields.actionIndex = *v372;
              if ( WarBoardAIRoute_RouteData__get_notAction(v373, 0LL) )
              {
                v374 = v783->fields.routeDataList;
                if ( !v374 )
                  sub_B170D4();
                if ( v374->fields._size > 0 )
                  goto LABEL_549;
              }
              v375 = WarBoardAIRoute___c_TypeInfo;
              dicBaseDIRange_5__18 = v783->fields._dicBaseDIRange_5__18;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v375 = WarBoardAIRoute___c_TypeInfo;
              }
              static_fields = v375->static_fields;
              _9__47_1 = static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( (BYTE3(v375->vtable._0_Equals.methodPtr) & 4) != 0 && !v375->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v375);
                  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v379 = (Il2CppObject *)static_fields->__9;
                _9__47_1 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)sub_B170CC(
                                                                                                    System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long____ctor(
                  _9__47_1,
                  v379,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  (const MethodInfo_2B5F4F4 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
                v380 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v380->__9__47_1 = _9__47_1;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v380->__9__47_1,
                  (System_Int32_array **)_9__47_1,
                  v381,
                  v382,
                  v383,
                  v384,
                  v385,
                  v386);
                v375 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( (BYTE3(v375->vtable._0_Equals.methodPtr) & 4) != 0 && !v375->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v375);
                v375 = WarBoardAIRoute___c_TypeInfo;
              }
              v387 = v375->static_fields;
              _9__47_2 = v387->__9__47_2;
              if ( !_9__47_2 )
              {
                v389 = p__7__wrap23;
                if ( (BYTE3(v375->vtable._0_Equals.methodPtr) & 4) != 0 && !v375->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v375);
                  v387 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v390 = (Il2CppObject *)v387->__9;
                _9__47_2 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)sub_B170CC(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, method, v2, v3, v4);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData____ctor(
                  _9__47_2,
                  v390,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  (const MethodInfo_2B5F828 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
                v391 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v391->__9__47_2 = _9__47_2;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v391->__9__47_2,
                  (System_Int32_array **)_9__47_2,
                  v392,
                  v393,
                  v394,
                  v395,
                  v396,
                  v397);
                p__7__wrap23 = v389;
              }
              v404 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData_(
                                                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_19C4F24 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v405 = routeData;
              if ( !routeData )
                sub_B170D4();
              v406 = v783;
              v407 = *(struct WarBoardSquareData_o **)&v783->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v407;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v405->fields.baseSquare,
                (System_Int32_array **)v407,
                v398,
                v399,
                v400,
                v401,
                v402,
                v403);
              v414 = routeData;
              v417 = v406->fields.__8__1;
              v416 = &v406->fields.__8__1;
              v415 = v417;
              if ( !v417 )
                sub_B170D4();
              if ( !routeData )
                sub_B170D4();
              v418 = v415->fields.basePiece;
              routeData->fields.basePiece = v418;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v414->fields.basePiece,
                (System_Int32_array **)v418,
                v408,
                v409,
                v410,
                v411,
                v412,
                v413);
              v425 = routeData;
              if ( !routeData )
                sub_B170D4();
              routeData->fields.actionPiece = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v425->fields.actionPiece,
                0LL,
                v419,
                v420,
                v421,
                v422,
                v423,
                v424);
              v426 = routeData;
              v427 = *v372;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              v428 = (System_Int32_array **)WarBoardAIManager__GetSquare(v427, 0LL);
              if ( !v426 )
                sub_B170D4();
              v426->fields.actionSquare = (struct WarBoardSquareData_o *)v428;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v426->fields.actionSquare,
                v428,
                v429,
                v430,
                v431,
                v432,
                v433,
                v434);
              dicKeyPutIndexValueTargetData_5__19 = v783->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_B170D4();
              v436 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     (System_Collections_Generic_Dictionary_uint__int__o *)dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_2D61E78 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v439 = 0x7FFFFFFF;
                if ( !v436 )
                  goto LABEL_271;
              }
              else
              {
                v437 = v783->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v437 )
                  sub_B170D4();
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           (System_Collections_Generic_Dictionary_uint__int__o *)v437,
                           (const MethodInfo_2D62020 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v439 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v436 )
LABEL_271:
                  sub_B170D4();
              }
              v436->fields.EnemyRangeMin = v439;
              if ( !*v416 )
                sub_B170D4();
              if ( !_4__this )
                sub_B170D4();
              v440 = routeData;
              MoveByTargetDistance = (System_Int32_array **)WarBoardAIRoute__GetMoveByTargetDistance(
                                                              _4__this,
                                                              v404,
                                                              *v372,
                                                              (*v416)->fields.basePiece,
                                                              0LL);
              if ( !v440 )
                sub_B170D4();
              v440->fields.dicPutIndexTargetData = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)MoveByTargetDistance;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v440->fields.dicPutIndexTargetData,
                MoveByTargetDistance,
                v442,
                v443,
                v444,
                v445,
                v446,
                v447);
              if ( !*v416 )
                sub_B170D4();
              v448 = routeData;
              v449 = (System_Int32_array **)WarBoardAIRoute__GetActionPiece(
                                              _4__this,
                                              (*v416)->fields.basePiece,
                                              *v372,
                                              v783->fields.piecePlaceData,
                                              0LL);
              if ( !v448 )
                sub_B170D4();
              v448->fields.actionPiece = (struct WarBoardPieceData_o *)v449;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v448->fields.actionPiece,
                v449,
                v450,
                v451,
                v452,
                v453,
                v454,
                v455);
              v462 = *v416;
              if ( !*v416 )
                sub_B170D4();
              v463 = v462->fields.basePiece;
              if ( !v463 )
                sub_B170D4();
              if ( v463->fields._nowSquareIndex_k__BackingField == *v372 )
              {
                if ( !routeData )
                  sub_B170D4();
                p_actionPiece = (BattleServantConfConponent_o *)&routeData->fields.actionPiece;
                v465 = routeData->fields.actionPiece;
                if ( v465 )
                {
                  if ( v465->fields._uniqueIndex_k__BackingField == v463->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_B16F98(p_actionPiece, 0LL, v456, v457, v458, v459, v460, v461);
                    v462 = *v416;
                    if ( !*v416 )
                      sub_B170D4();
                  }
                }
              }
              v466 = v462->fields.basePiece;
              if ( !v466 )
                sub_B170D4();
              v467 = UnityEngine_Mathf__Abs_40727336(
                       v466->fields._limitActionCount_k__BackingField - v466->fields._currentActionCount_k__BackingField,
                       0LL);
              v468 = routeData;
              if ( !routeData )
                sub_B170D4();
              v469 = v783;
              routeData->fields.actionCountOnThisTurn = v467 + v783->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v469->fields._baseSquare_5__11;
              *(_QWORD *)&v468->fields.attackByLinkedEnemy = 0LL;
              v468->fields.flagNow = (int64_t)baseSquare_5__11;
              warBoardData_5__2 = v469->fields._warBoardData_5__2;
              if ( !warBoardData_5__2 )
                sub_B170D4();
              Wall = WarBoardData__GetWall(warBoardData_5__2, *v372, 0, 0LL);
              if ( Wall )
              {
                v473 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !v473 )
                  sub_B170D4();
                if ( SHIDWORD(v473[7].monitor) < _4__this->fields.wallAttackCost + v783->fields._requiredCost_5__3 )
                  goto LABEL_549;
                if ( !*v416 )
                  sub_B170D4();
                v474 = (*v416)->fields.basePiece;
                if ( !v474 )
                  sub_B170D4();
                if ( !WarBoardPieceData__EnableWallAttack(v474, v783->fields._servantAndEnemyMasterRange_5__15, 0LL) )
                  goto LABEL_549;
                if ( !*v416 )
                  sub_B170D4();
                v475 = (*v416)->fields.basePiece;
                if ( !v475 )
                  sub_B170D4();
                if ( !WarBoardPieceData__CheckWallAttackCond(v475, Wall, 0LL) )
                  goto LABEL_549;
              }
              if ( !routeData )
                sub_B170D4();
              if ( WarBoardAIRoute_RouteData__HasActionPiece(routeData, 0LL) )
              {
                if ( !*v416 )
                  sub_B170D4();
                if ( !routeData )
                  sub_B170D4();
                v476 = (*v416)->fields.basePiece;
                v477 = routeData->fields.actionPiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                if ( WarBoardAIManager__IsEnemyPiece(v476, v477, 0LL) )
                {
                  if ( !*v416 )
                    sub_B170D4();
                  v478 = (*v416)->fields.basePiece;
                  if ( !v478 )
                    sub_B170D4();
                  if ( !WarBoardPieceData__get_isMaster(v478, 0LL) )
                    goto LABEL_255;
                  if ( !routeData )
                    sub_B170D4();
                  v479 = routeData->fields.actionPiece;
                  if ( !v479 )
                    sub_B170D4();
                  if ( WarBoardPieceData__get_isMaster(v479, 0LL) )
                  {
LABEL_255:
                    v480 = routeData;
                    if ( !routeData )
                      sub_B170D4();
                    v481 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v481 )
                      sub_B170D4();
                    v482 = v480->fields.actionPiece;
                    v480->fields.attackCountOnThisTurn = v481->fields._attackCount_k__BackingField + 1;
                    if ( !v482 )
                      sub_B170D4();
                    if ( WarBoardPieceData__get_isServant(v482, 0LL) )
                    {
                      v483 = routeData;
                      if ( !routeData )
                        sub_B170D4();
                      if ( !*v416 )
                        sub_B170D4();
                      v484 = (*v416)->fields.basePiece;
                      if ( !v484 )
                        sub_B170D4();
                      battleServant_k__BackingField = v484->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_B170D4();
                      v486 = p_basePieceBasePieceRouteList_5__23;
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_B170D4();
                      v489 = routeData->fields.actionPiece;
                      if ( !v489 )
                        sub_B170D4();
                      v490 = ClassId;
                      v491 = v489->fields._battleServant_k__BackingField;
                      if ( !v491 )
                        sub_B170D4();
                      v492 = BattleServantData__getClassId(v491, 0LL);
                      v483->fields.flagNow = WarBoardAIRoute__GetFlagAdvantage(_4__this, v490, v492, 0LL) | flagNow;
                      if ( !routeData )
                        sub_B170D4();
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v372,
                        v783->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                      p_basePieceBasePieceRouteList_5__23 = v486;
                    }
                    break;
                  }
LABEL_549:
                  v330 = *(_DWORD *)p__7__wrap23 + 1;
                  *(_DWORD *)p__7__wrap23 = v330;
                  continue;
                }
                if ( !routeData )
                  sub_B170D4();
                v542 = routeData->fields.actionPiece;
                if ( !v542 )
                  sub_B170D4();
                if ( v542->fields._roleType_k__BackingField == 1 )
                  goto LABEL_549;
                if ( !*v416 )
                  sub_B170D4();
                v543 = (*v416)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                if ( WarBoardAIManager__IsAllyPiece(v543, v542, 0LL) )
                {
                  if ( !routeData )
                    sub_B170D4();
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            if ( !routeData )
              sub_B170D4();
            if ( WarBoardAIRoute_RouteData__HasFlag(routeData, 2LL, 0LL) )
            {
              v544 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !v544 )
                sub_B170D4();
              if ( SHIDWORD(v544[7].monitor) < _4__this->fields.attackCost + v783->fields._requiredCost_5__3 )
                goto LABEL_549;
              if ( !*v416 )
                sub_B170D4();
              v545 = (*v416)->fields.basePiece;
              if ( !v545 )
                sub_B170D4();
              if ( !WarBoardPieceData__EnableAttack(v545, v783->fields._servantAndEnemyMasterRange_5__15, 0LL) )
                goto LABEL_549;
            }
            if ( !routeData )
              sub_B170D4();
            if ( !WarBoardAIRoute_RouteData__HasFlag(routeData, 2LL, 0LL) )
            {
              if ( !*v416 )
                sub_B170D4();
              v546 = (*v416)->fields.basePiece;
              if ( !v546 )
                sub_B170D4();
              if ( !WarBoardPieceData__EnableMoveBySelf(v546, v783->fields._servantAndEnemyMasterRange_5__15, 0LL) )
                goto LABEL_549;
            }
            if ( !routeData )
              sub_B170D4();
            if ( WarBoardAIRoute_RouteData__HasFlag(routeData, 0x4000000LL, 0LL) )
            {
              if ( !*v416 )
                sub_B170D4();
              if ( !routeData )
                sub_B170D4();
              v547 = v783;
              v548 = v783->fields.routeDataList;
              if ( !v548 )
                sub_B170D4();
              v549 = (*v416)->fields.basePiece;
              v550 = routeData->fields.actionPiece;
              requiredCost_5__3 = v783->fields._requiredCost_5__3;
              v552 = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                       v548,
                       (const MethodInfo_2F25F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              if ( !WarBoardAIRoute__IsActableReplace(
                      _4__this,
                      v549,
                      v550,
                      requiredCost_5__3,
                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v552,
                      v547->fields._servantAndEnemyMasterRange_5__15,
                      0LL) )
                goto LABEL_549;
            }
            v761 = p__7__wrap23;
            v763 = p_basePieceBasePieceRouteList_5__23;
            piecePlaceDataa = WarBoardAIRoute__UpdatePiecePlaceData(
                                _4__this,
                                v783->fields.piecePlaceData,
                                routeData,
                                v783->fields.__7__wrap8.fields.getEnumeratorRetType,
                                *v372,
                                0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceDataa,
                                               0LL);
            basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_IEnumerable_TSource__o *)v783->fields._basePieceActionPieceRouteList_5__22;
            v559 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                        v555,
                                                                                        v556,
                                                                                        v557,
                                                                                        v558);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v559,
              (Il2CppObject *)v364,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
            if ( System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                   basePieceActionPieceRouteList_5__22,
                   (System_Func_TSource__bool__o *)v559,
                   (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___)
              || (advantagePieceData_5__21 = v783->fields._advantagePieceData_5__21,
                  v565 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                              System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                              v560,
                                                                                              v561,
                                                                                              v562,
                                                                                              v563),
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v565,
                    (Il2CppObject *)v364,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__),
                  System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)advantagePieceData_5__21,
                    (System_Func_TSource__bool__o *)v565,
                    (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___)) )
            {
              if ( !routeData )
                sub_B170D4();
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v783->fields._masterExists_5__8 )
            {
              if ( v783->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_308;
              if ( !routeData )
                sub_B170D4();
              DefenseAreaData = v783->fields._defenseAreaData_5__7;
              if ( WarBoardAIRoute_RouteData__HasFlag(routeData, 1024LL, 0LL) )
              {
LABEL_308:
                v567 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceDataa,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    MasterSquareIndexFromPlaceData,
                                    v567,
                                    piecePlaceDataa,
                                    0LL);
              }
              if ( !DefenseAreaData )
                sub_B170D4();
              v568 = _4__this->fields.aiRouteMasterData;
              if ( !v568 )
                sub_B170D4();
              ShortestRoutes_k__BackingField = DefenseAreaData->fields._ShortestRoutes_k__BackingField;
              v570 = WarBoardAIRoute_AIRouteMasterData__get_IsSquare(v568, 0LL);
              IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                       ShortestRoutes_k__BackingField,
                                                       piecePlaceDataa,
                                                       v570,
                                                       0LL);
              v572 = routeData;
              if ( IsAllBlockShortestRouteEnemyAndMastr )
              {
                if ( !routeData )
                  sub_B170D4();
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_B170D4();
              }
              if ( WarBoardAIRoute_RouteData__HasFlag(v572, 1024LL, 0LL)
                && WarBoardAIRoute_RouteData__HasFlag_20720476(
                     DefenseAreaData->fields._Flag_k__BackingField,
                     0x10000000000LL,
                     0LL) )
              {
                if ( !routeData )
                  sub_B170D4();
                routeData->fields.flagNow |= 0x40000000000uLL;
              }
            }
            v573 = routeData;
            v574 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v560, v561, v562, v563);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v574,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v573 )
              sub_B170D4();
            v573->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v574;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v573->fields.moveByLinkedPiece,
              (System_Int32_array **)v574,
              v575,
              v576,
              v577,
              v578,
              v579,
              v580);
            v585 = routeData;
            if ( !routeData )
              sub_B170D4();
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v586 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                           v581,
                                                                           v582,
                                                                           v583,
                                                                           v584);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v586,
              (const MethodInfo_2D616D4 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v585->fields.dicUniqueKeyRange = v586;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v585->fields.dicUniqueKeyRange,
              (System_Int32_array **)v586,
              v587,
              v588,
              v589,
              v590,
              v591,
              v592);
            v593 = v783->fields.piecePlaceData;
            if ( !v593 )
              sub_B170D4();
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v767,
              v593,
              (const MethodInfo_2DF1138 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v776.fields.dictionary = *(_OWORD *)&v767.fields.dictionary;
            v776.fields.current = v767.fields.current;
            while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                      &v776,
                      (const MethodInfo_272A700 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
            {
              if ( !*v416 )
                sub_B170D4();
              v594 = (*v416)->fields.basePiece;
              if ( !v594 )
                sub_B170D4();
              key_high = HIDWORD(v776.fields.current.fields.key);
              if ( v594->fields._uniqueIndex_k__BackingField != HIDWORD(v776.fields.current.fields.key) )
              {
                if ( !routeData )
                  sub_B170D4();
                v596 = (int32_t)v776.fields.current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v598 = *v372;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v599 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v598,
                                                                              v596,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v600 = System_Linq_Enumerable__Count_int_(
                         v599,
                         (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_B170D4();
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v600,
                  (const MethodInfo_2D62278 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            v770[v771++] = 2813;
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v776,
              (const MethodInfo_272A848 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            if ( v771 && v770[v771 - 1] == 2813 )
              --v771;
            v605 = routeData;
            v606 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v601,
                                                               v602,
                                                               v603,
                                                               v604);
            System_Collections_Generic_List_int____ctor(
              v606,
              (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v605 )
              sub_B170D4();
            v605->fields.listExistDesignationItem = v606;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v605->fields.listExistDesignationItem,
              (System_Int32_array **)v606,
              v607,
              v608,
              v609,
              v610,
              v611,
              v612);
            v613 = routeData;
            v618 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                           v614,
                                                                           v615,
                                                                           v616,
                                                                           v617);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v618,
              (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v613 )
              sub_B170D4();
            v613->fields.dicMoveByServantGetDesignationItem = v618;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v613->fields.dicMoveByServantGetDesignationItem,
              (System_Int32_array **)v618,
              v619,
              v620,
              v621,
              v622,
              v623,
              v624);
            v625 = routeData;
            v630 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo,
                                                                                                   v626,
                                                                                                   v627,
                                                                                                   v628,
                                                                                                   v629);
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType____ctor(
              v630,
              (const MethodInfo_2DDFFC0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v625 )
              sub_B170D4();
            v625->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = v630;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v625->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (System_Int32_array **)v630,
              v631,
              v632,
              v633,
              v634,
              v635,
              v636);
            v637 = routeData;
            if ( !routeData )
              sub_B170D4();
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v637->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v637->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v637->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v637->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v637->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            if ( !*v416 )
              sub_B170D4();
            v638 = (*v416)->fields.basePiece;
            if ( !v638 )
              sub_B170D4();
            if ( WarBoardPieceData__get_isServant(v638, 0LL) )
            {
              if ( v783->fields._masterExists_5__8 )
              {
                if ( !*v416 )
                  sub_B170D4();
                v640 = (*v416)->fields.basePiece;
                if ( !v640 )
                  sub_B170D4();
                v641 = _4__this->fields.aiRouteMasterData;
                if ( !v641 )
                  sub_B170D4();
                if ( !WarBoardAIRoute_AIRouteMasterData__IsMasterServant(v641, v640->fields._index_k__BackingField, 0LL) )
                {
                  v642 = v783->fields._defenseAreaData_5__7;
                  if ( !v642 )
                    sub_B170D4();
                  if ( DefenseAreaData__IsInDefenseArea(v642, *v372, 0LL) )
                  {
                    if ( !routeData )
                      sub_B170D4();
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                if ( !*v416 )
                  sub_B170D4();
                v643 = (*v416)->fields.basePiece;
                if ( !v643 )
                  sub_B170D4();
                v644 = _4__this->fields.aiRouteMasterData;
                if ( !v644 )
                  sub_B170D4();
                if ( !WarBoardAIRoute_AIRouteMasterData__IsMasterServant(v644, v643->fields._index_k__BackingField, 0LL) )
                {
                  v645 = _4__this->fields.aiRouteMasterData;
                  if ( !v645 )
                    sub_B170D4();
                  v646 = *v372;
                  v647 = v783->fields._defenseAreaData_5__7;
                  v648 = WarBoardAIRoute_AIRouteMasterData__get_IsSquare(v645, 0LL);
                  if ( WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(v647, v646, v648, 0LL) )
                  {
                    if ( !routeData )
                      sub_B170D4();
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                if ( !*v416 )
                  sub_B170D4();
                v649 = (*v416)->fields.basePiece;
                if ( !v649 )
                  sub_B170D4();
                v650 = _4__this->fields.aiRouteMasterData;
                if ( !v650 )
                  sub_B170D4();
                if ( !WarBoardAIRoute_AIRouteMasterData__IsMasterServant(v650, v649->fields._index_k__BackingField, 0LL) )
                {
                  v651 = *v372;
                  if ( *v372 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_B170D4();
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AStarSearch_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    }
                    v652 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v651,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  0LL);
                    v653 = System_Linq_Enumerable__Count_int_(
                             v652,
                             (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
                    v654 = routeData;
                    v655 = WarBoardAIRoute__CalcurateDistanceType(v653, v783->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v654 )
                      sub_B170D4();
                    v654->fields.isMoveByServantAndMasterRange = v655;
                  }
                }
              }
              v656 = *(System_Collections_Generic_Dictionary_int__int__o **)&v783->fields._sumPieceActionCost_5__17;
              if ( !v656 )
                sub_B170D4();
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v767,
                v656,
                (const MethodInfo_2DDD528 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v774 = *(_OWORD *)&v767.fields.dictionary;
              v775 = v767.fields.current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v774,
                        (const MethodInfo_272605C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v657 = (int32_t)v775.fields.key;
                v658 = HIDWORD(v775.fields.key);
                v659 = *v372;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v660 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v659,
                                                                              v657,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v661 = System_Linq_Enumerable__Count_int_(
                         v660,
                         (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_B170D4();
                dicItemIdKeyIsMoveByServantDesignationItemRange = routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v663 = WarBoardAIRoute__CalcurateDistanceType(v661, v658, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_B170D4();
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v657,
                  v663,
                  (const MethodInfo_2DE0B3C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_B170D4();
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_B170D4();
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v657,
                  *v372 == v657,
                  (const MethodInfo_2DD5680 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_B170D4();
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_B170D4();
                System_Collections_Generic_List_int___Add(
                  listExistDesignationItem,
                  v657,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              }
              v770[v771++] = 3406;
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v774,
                (const MethodInfo_27261A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              if ( v771 && v770[v771 - 1] == 3406 )
                --v771;
              v666 = *v372;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AStarSearch_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              }
              v668 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v666,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            0LL);
              v669 = System_Linq_Enumerable__Count_int_(
                       v668,
                       (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
              v670 = routeData;
              v671 = WarBoardAIRoute__CalcurateDistanceType(v669, v783->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v670 )
                sub_B170D4();
              v670->fields.isMoveByServantAndEnemyMasterRange = v671;
              v673 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_40F79DF )
              {
                sub_B16FFC(&WarBoardAIManager_TypeInfo, v672);
                byte_40F79DF = 1;
              }
              v674 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v674 = WarBoardAIManager_TypeInfo;
              }
              v675 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v674->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v783->fields._tmpFlagNow_5__12),
                       *v372,
                       0LL);
              if ( !v673 )
                sub_B170D4();
              v676 = v783;
              v673->fields.isMoveByServantAndEnemyRange = v675;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v676->fields._dicEnemyRange_5__20,
                *v372,
                0LL);
            }
            v677 = _4__this->fields.aiRouteMasterData;
            if ( !v677 )
              sub_B170D4();
            if ( v677->fields.masterType )
            {
LABEL_408:
              if ( v677->fields.masterType == 2 )
              {
                if ( !*v416 )
                  sub_B170D4();
                v679 = (*v416)->fields.basePiece;
                if ( !v679 )
                  sub_B170D4();
                if ( v679->fields._index_k__BackingField == v677->fields.masterPieceIndex )
                  goto LABEL_412;
              }
            }
            else
            {
              if ( !*v416 )
                sub_B170D4();
              v678 = (*v416)->fields.basePiece;
              if ( !v678 )
                sub_B170D4();
              if ( !WarBoardPieceData__get_isMaster(v678, 0LL) )
              {
                v677 = _4__this->fields.aiRouteMasterData;
                if ( !v677 )
                  sub_B170D4();
                goto LABEL_408;
              }
LABEL_412:
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_40F79DF )
              {
                sub_B16FFC(&WarBoardAIManager_TypeInfo, v639);
                byte_40F79DF = 1;
              }
              v680 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v680 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v680->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_B170D4();
              Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_B170D4();
              System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v767,
                Keys,
                (const MethodInfo_22BC914 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              v773.fields.currentKey = v767.fields.current.fields.key;
              *(_OWORD *)&v773.fields.dictionary = *(_OWORD *)&v767.fields.dictionary;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
                        &v773,
                        (const MethodInfo_2729554 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v773.fields.currentKey;
                v684 = *v372;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v685 = AStarSearch__RouteSearch(0LL, v684, currentKey, 0, 0LL, 0LL);
                if ( !v685 )
                  sub_B170D4();
                v686 = _4__this->fields.npcData;
                if ( !v686 )
                  sub_B170D4();
                if ( (signed int)(v685->max_length - 1) <= v686->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_B170D4();
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              v770[v771++] = 3697;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
                &v773,
                (const MethodInfo_2729550 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v771 && v770[v771 - 1] == 3697 )
                --v771;
              v688 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_40F79DF )
              {
                sub_B16FFC(&WarBoardAIManager_TypeInfo, v687);
                byte_40F79DF = 1;
              }
              v689 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v689 = WarBoardAIManager_TypeInfo;
              }
              v690 = v783->fields._defenseAreaData_5__7;
              if ( !v690 )
                sub_B170D4();
              v691 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v689->static_fields->dicSquareIndexEnemyPiece,
                       v690->fields._MasterAndEnemyRange_k__BackingField,
                       *v372,
                       0LL);
              if ( !v688 )
                sub_B170D4();
              v688->fields.isMoveByMasterAndEnemyRange = v691;
              p_basePieceBasePieceRouteList_5__23 = v763;
              if ( !byte_40F79DF )
              {
                sub_B16FFC(&WarBoardAIManager_TypeInfo, v692);
                byte_40F79DF = 1;
              }
              v693 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v693 = WarBoardAIManager_TypeInfo;
              }
              v694 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v693->static_fields->dicSquareIndexEnemyPiece;
              if ( !v694 )
                sub_B170D4();
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
                &v767,
                v694,
                (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v772 = v767;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                        &v772,
                        (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                v695 = (int32_t)v772.fields.current.fields.key;
                v696 = *v372;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v697 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v696,
                                                                              v695,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                System_Linq_Enumerable__Count_int_(
                  v697,
                  (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !WarBoardAIRoute__IsDetour((System_Int32_array *)v697, v783->fields._allyPieceIndexs_5__5, 0LL) )
                {
                  v698 = 0;
                  goto LABEL_459;
                }
              }
              v698 = 1;
LABEL_459:
              v770[v771++] = 3829;
              System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
                &v772,
                (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v771 && v770[v771 - 1] == 3829 )
                --v771;
              if ( v698 )
              {
                if ( !routeData )
                  sub_B170D4();
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            if ( !routeData )
              sub_B170D4();
            v699 = piecePlaceDataa;
            if ( !WarBoardAIRoute_RouteData__HasActionPiece(routeData, 0LL) )
              goto LABEL_469;
            if ( !routeData )
              sub_B170D4();
            if ( WarBoardAIRoute_RouteData__HasFlag(routeData, 0x4000000LL, 0LL) )
            {
LABEL_469:
              v700 = v783->fields._warBoardData_5__2;
              if ( !v700 )
                sub_B170D4();
              if ( WarBoardData__GetEffect(v700, *v372, 0LL) )
              {
                if ( !routeData )
                  sub_B170D4();
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v705 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                 v701,
                                                                 v702,
                                                                 v703,
                                                                 v704);
              System_Collections_Generic_List_int____ctor(
                v705,
                (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
              v706 = v783->fields.routeDataList;
              if ( !v706 )
                sub_B170D4();
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v767,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v706,
                (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              v780.fields.current = v767.fields.current.fields.key;
              *(_OWORD *)&v780.fields.list = *(_OWORD *)&v767.fields.dictionary;
              while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v780,
                        (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__) )
              {
                v707 = (WarBoardAIRoute_RouteData_o *)v780.fields.current;
                if ( !v780.fields.current )
                  sub_B170D4();
                if ( WarBoardAIRoute_RouteData__HasFlag(
                       (WarBoardAIRoute_RouteData_o *)v780.fields.current,
                       0x8000000LL,
                       0LL) )
                {
                  v708 = v707->fields.basePiece;
                  if ( !v708 )
                    sub_B170D4();
                  if ( WarBoardPieceData__get_isServant(v708, 0LL) )
                  {
                    if ( !v705 )
                      sub_B170D4();
                    System_Collections_Generic_List_int___Add(
                      v705,
                      v707->fields.actionIndex,
                      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                  }
                  if ( WarBoardAIRoute_RouteData__HasFlag(v707, 0x4000000LL, 0LL) )
                  {
                    v709 = v707->fields.basePiece;
                    if ( !v709 )
                      sub_B170D4();
                    if ( WarBoardPieceData__get_isMaster(v709, 0LL) )
                    {
                      v710 = v707->fields.actionPiece;
                      if ( !v710 )
                        sub_B170D4();
                      if ( WarBoardPieceData__get_isServant(v710, 0LL) )
                      {
                        if ( !v705 )
                          sub_B170D4();
                        System_Collections_Generic_List_int___Add(
                          v705,
                          v707->fields.baseIndex,
                          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                      }
                    }
                  }
                }
              }
              v770[v771++] = 4082;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v780,
                (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              p_basePieceBasePieceRouteList_5__23 = v763;
              v699 = piecePlaceDataa;
              if ( v771 && v770[v771 - 1] == 4082 )
                --v771;
              if ( !routeData )
                sub_B170D4();
              v711 = routeData->fields.basePiece;
              if ( !v711 )
                sub_B170D4();
              if ( WarBoardPieceData__get_isServant(v711, 0LL) )
              {
                if ( !routeData )
                  sub_B170D4();
                if ( WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v705, 0LL) )
                {
                  v712 = routeData;
                  if ( !routeData )
                    sub_B170D4();
                  v713 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_499;
                }
              }
              else
              {
                if ( !routeData )
                  sub_B170D4();
                v714 = routeData->fields.basePiece;
                if ( !v714 )
                  sub_B170D4();
                if ( WarBoardPieceData__get_isMaster(v714, 0LL) )
                {
                  if ( !routeData )
                    sub_B170D4();
                  CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v705, 0LL);
                  v716 = routeData;
                  if ( CanAcquireItem )
                  {
                    if ( !routeData )
                      sub_B170D4();
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_B170D4();
                  }
                  if ( WarBoardAIRoute_RouteData__HasFlag(v716, 0x4000000LL, 0LL) )
                  {
                    if ( !routeData )
                      sub_B170D4();
                    v717 = routeData->fields.actionPiece;
                    if ( !v717 )
                      sub_B170D4();
                    if ( WarBoardPieceData__get_isServant(v717, 0LL) )
                    {
                      if ( !routeData )
                        sub_B170D4();
                      if ( WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v705, 0LL) )
                      {
                        v712 = routeData;
                        if ( !routeData )
                          sub_B170D4();
                        v713 = routeData->fields.flagNow | 0x8000000;
LABEL_499:
                        v712->fields.flagNow = v713;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, piecePlaceDataa, v705, 0LL);
            }
            v718 = routeData;
            if ( !routeData )
              sub_B170D4();
            p__7__wrap23 = v761;
            v718->fields.isMoveByOutOfWarningArea = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                                      _4__this,
                                                      routeData->fields.baseIndex,
                                                      routeData->fields.actionIndex,
                                                      0LL);
            if ( !routeData )
              sub_B170D4();
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(routeData, 0LL);
            if ( !evalOffsetMagnification )
              sub_B170D4();
            evalOffsetMagnification->fields.isAttack = IsAttack;
            if ( !routeData )
              sub_B170D4();
            v721 = routeData->fields.basePiece;
            if ( !v721 )
              sub_B170D4();
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_B170D4();
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   piecePersonalityDic,
                   v721->fields._index_k__BackingField,
                   &value,
                   (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__) )
            {
              v723 = (WarBoardAIRoute_PiecePersonality_o *)value;
              v724 = (WarBoardAIEvalCalcurater_o *)sub_B170CC(WarBoardAIEvalCalcurater_TypeInfo, method, v2, v3, v4);
              WarBoardAIEvalCalcurater___ctor(v724, v723, 0LL);
              if ( !v724 )
                sub_B170D4();
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v724, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v724,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_B170D4();
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, 0LL);
              v729 = WarBoardAIRoute___c_TypeInfo;
              v730 = v783->fields.routeDataList;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v729 = WarBoardAIRoute___c_TypeInfo;
              }
              v731 = v729->static_fields;
              _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v731->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( (BYTE3(v729->vtable._0_Equals.methodPtr) & 4) != 0 && !v729->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v729);
                  v699 = piecePlaceDataa;
                  v731 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v733 = (Il2CppObject *)v731->__9;
                _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v725, v726, v727, v728);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                  _9__47_5,
                  v733,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  (const MethodInfo_2B6C28C *)Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
                v734 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v734->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v734->__9__47_5,
                  (System_Int32_array **)_9__47_5,
                  v735,
                  v736,
                  v737,
                  v738,
                  v739,
                  v740);
                p__7__wrap23 = v761;
              }
              v741 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v730,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v746 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                       System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo,
                                                                                       v742,
                                                                                       v743,
                                                                                       v744,
                                                                                       v745);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v746,
                v741,
                (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___66760096);
              if ( !v746 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v746,
                (EventMissionProgressRequest_Argument_ProgressData_o *)routeData,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
              v747 = BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                       (System_Collections_Generic_List_T__o *)v746,
                       v746->fields._size - 2,
                       0LL,
                       (const MethodInfo_18B822C *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v747;
              if ( v747 )
              {
                if ( !routeData )
                  sub_B170D4();
                if ( routeData->fields.basePiece == v747->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v724,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_B170D4();
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, 0LL);
                }
              }
              allRouteList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                allRouteList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v746,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
              if ( !routeData )
                sub_B170D4();
              if ( !WarBoardAIRoute_RouteData__get_notAction(routeData, 0LL) )
              {
                if ( !routeData )
                  sub_B170D4();
                if ( !WarBoardAIRoute_RouteData__HasFlag(routeData, 2LL, 0LL) )
                {
                  searchCount = v783->fields.searchCount;
                  if ( searchCount != 1 )
                  {
                    v752 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v699, searchCount, v746, 0LL);
                    v753 = v783;
                    v783->fields.__2__current = v752;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v753->fields.__2__current,
                      (System_Int32_array **)v752,
                      v754,
                      v755,
                      v756,
                      v757,
                      v758,
                      v759);
                    result = 1;
                    v783->fields.__1__state = 1;
                    return result;
                  }
                  dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                  v751 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v699, 1, v746, 0LL);
                  if ( !routeData )
                    sub_B170D4();
                  if ( !dictionaryCreateRouteDataEvalValue )
                    sub_B170D4();
                  System_Collections_Generic_Dictionary_object__float___Add(
                    dictionaryCreateRouteDataEvalValue,
                    v751,
                    routeData->fields.evalValue,
                    (const MethodInfo_2DAF6D4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
                }
              }
            }
            goto LABEL_549;
          }
        }
        v291 = v783;
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v783, v165);
        *(_OWORD *)&p__7__wrap8->fields.dictionary = 0u;
        p__7__wrap8->fields.current = 0u;
        if ( v291->fields.searchCount != 1 )
          return 0;
        if ( !_4__this )
          sub_B170D4();
        v296 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v297 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v297 = WarBoardAIRoute___c_TypeInfo;
        }
        v298 = v297->static_fields;
        _9__47_6 = (System_Func_T__TResult__o *)v298->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( (BYTE3(v297->vtable._0_Equals.methodPtr) & 4) != 0 && !v297->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v297);
            v298 = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v300 = (Il2CppObject *)v298->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_B170CC(
                                                    System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo,
                                                    v292,
                                                    v293,
                                                    v294,
                                                    v295);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v300,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            (const MethodInfo_2B61194 *)Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
          v301 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v301->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v301->__9__47_6,
            (System_Int32_array **)_9__47_6,
            v302,
            v303,
            v304,
            v305,
            v306,
            v307);
        }
        v308 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v296,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_19BD930 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v783->fields._servantAndEnemyMasterRange_5__15 = 0;
        v309 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v309 )
          sub_B170D4();
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v309,
                  (const MethodInfo_2DAF2D0 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v311 = _4__this->fields.npcData;
        if ( !v311 )
          sub_B170D4();
        v312 = (float)((float)v311->fields.calcEllipsis / 100.0) * (float)Count;
        v313 = v783;
        if ( v312 == INFINITY )
          v314 = -v312;
        else
          v314 = v312;
        v315 = (int)v314;
        v783->fields._servantAndEnemyRange_5__14 = (int)v314;
        v316 = _4__this->fields.npcData;
        if ( !v316 )
          sub_B170D4();
        calcEllipsisMin = v316->fields.calcEllipsisMin;
        if ( calcEllipsisMin > v315 )
          v315 = calcEllipsisMin;
        v313->fields._servantAndEnemyRange_5__14 = v315;
        if ( !v308 )
          sub_B170D4();
        v318 = v308->klass;
        if ( *(_WORD *)&v308->klass->_2.bitflags1 )
        {
          v319 = 0LL;
          p_offset = &v318->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            ++v319;
            p_offset += 4;
            if ( v319 >= *(unsigned __int16 *)&v308->klass->_2.bitflags1 )
              goto LABEL_119;
          }
          p_method = (__int64)&v318->vtable[*p_offset].method;
        }
        else
        {
LABEL_119:
          p_method = sub_AAFEF8(
                       v308,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v331 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                                        v308,
                                        *(_QWORD *)(p_method + 8));
        p__7__wrap24 = &v783->fields.__7__wrap24;
        *(_QWORD *)&v783->fields.__7__wrap24 = v331;
        sub_B16F98((BattleServantConfConponent_o *)p__7__wrap24, v331, v332, v333, v334, v335, v336, v337);
        v783->fields.__1__state = -4;
        goto LABEL_127;
      }
    }
    v142 = (System_Int32_array **)WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    *p_masterSquareIndex_5__4,
                                    *p_allyPieceIndexs_5__5,
                                    *p_piecePlaceData,
                                    0LL);
    p_defenseAreaData_5__7->klass = (BattleServantConfConponent_c *)v142;
    sub_B16F98(p_defenseAreaData_5__7, v142, v143, v144, v145, v146, v147, v148);
    v149 = p_defenseAreaData_5__7->klass;
    if ( !p_defenseAreaData_5__7->klass )
      sub_B170D4();
    v150 = v783;
    v783->fields._baseFlag_5__6 |= (int64_t)v149->_1.name;
    v151 = _4__this->fields.aiRouteMasterData;
    if ( !v151 )
      sub_B170D4();
    data = (System_Collections_Generic_List_int____o *)v149->_1.this_arg.data;
    v153 = v150->fields.piecePlaceData;
    v154 = WarBoardAIRoute_AIRouteMasterData__get_IsSquare(v151, 0LL);
    if ( WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(data, v153, v154, 0LL) )
      v783->fields._baseFlag_5__6 |= 0x20000000uLL;
    goto LABEL_28;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  int v2; // w19
  int v3[2]; // [xsp+0h] [xbp-20h]
  int v4; // [xsp+8h] [xbp-18h]

  v4 = 0;
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      v2 = v4;
      v3[0] = 65;
      ++v4;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(this, method);
      if ( v4 )
      {
        if ( v3[v2] == 65 )
          v4 = v2;
      }
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
  if ( (byte_40F79DC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method);
    byte_40F79DC = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_272A848 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 *v3; // x19
  __int64 v4; // x8
  unsigned __int64 v5; // x10
  int *v6; // x11
  __int64 v7; // x0

  if ( (byte_40F79DD & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    byte_40F79DD = 1;
  }
  v3 = *(__int64 **)&this->fields.__7__wrap24;
  this->fields.__1__state = -1;
  if ( v3 )
  {
    v4 = *v3;
    if ( *(_WORD *)(*v3 + 298) )
    {
      v5 = 0LL;
      v6 = (int *)(*(_QWORD *)(v4 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v6 - 1) != System_IDisposable_TypeInfo )
      {
        ++v5;
        v6 += 4;
        if ( v5 >= *(unsigned __int16 *)(*v3 + 298) )
          goto LABEL_8;
      }
      v7 = v4 + 16LL * *v6 + 312;
    }
    else
    {
LABEL_8:
      v7 = sub_AAFEF8(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79CC & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute___c_TypeInfo, v1);
    byte_40F79CC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAIRoute___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F79CD & 1) == 0 )
  {
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, x);
    byte_40F79CD = 1;
  }
  if ( !x )
    sub_B170D4();
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_40F79CE & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key);
    byte_40F79CE = 1;
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
  if ( (byte_40F79CF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key);
    byte_40F79CF = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, 0LL);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WarBoardAIRoute_RouteData__ShallowCopy(x, 0LL);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // s8

  value = x.fields.value;
  if ( (byte_40F79D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__, x.fields.key);
    byte_40F79D0 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_2(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F79D1 & 1) == 0 )
  {
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, x);
    byte_40F79D1 = 1;
  }
  if ( !x )
    sub_B170D4();
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(x, IWarBoardObjectData_TypeInfo, 4LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_3(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F79D2 & 1) == 0 )
  {
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, x);
    byte_40F79D2 = 1;
  }
  if ( !x )
    sub_B170D4();
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_40F79D3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key);
    byte_40F79D3 = 1;
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
    sub_B170D4();
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_B170D4();
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
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IWarBoardObjectData_c *v9; // x8
  unsigned __int64 v10; // x10
  int32_t *v11; // x11
  __int64 v12; // x0

  if ( (byte_40F79D4 & 1) == 0 )
  {
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, z);
    byte_40F79D4 = 1;
  }
  if ( !z )
    sub_B170D4();
  klass = z->klass;
  if ( *(_WORD *)&z->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&z->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(z, IWarBoardObjectData_TypeInfo, 0LL);
  }
  if ( (*(unsigned int (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(z, *(_QWORD *)(p_method + 8)) != this->fields.squareIndex )
    return 0;
  v9 = z->klass;
  if ( *(_WORD *)&z->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    v11 = &v9->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v11 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= *(unsigned __int16 *)&z->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v12 = (__int64)&v9->vtable[*v11 + 3].method;
  }
  else
  {
LABEL_15:
    v12 = sub_AAFEF8(z, IWarBoardObjectData_TypeInfo, 3LL);
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
  struct WarBoardPieceData_o *v7; // x9
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *v9; // x9

  if ( !x )
    goto LABEL_12;
  if ( WarBoardAIRoute_RouteData__get_notAction(x, 0LL) )
    return 0;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  v7 = this->fields.basePiece;
  if ( !v7 )
    goto LABEL_12;
  if ( basePiece->fields._index_k__BackingField == v7->fields._index_k__BackingField )
    return 1;
  if ( !WarBoardAIRoute_RouteData__HasFlag(x, 0x4000000LL, 0LL) )
    return 0;
  actionPiece = x->fields.actionPiece;
  if ( !actionPiece || (v9 = this->fields.basePiece) == 0LL )
LABEL_12:
    sub_B170D4();
  return actionPiece->fields._index_k__BackingField == v9->fields._index_k__BackingField;
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
    sub_B170D4();
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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

  if ( (byte_40F79D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square);
    byte_40F79D5 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_2DF0E28 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_B170D4();
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
  {
    sub_B17100(this, *(_QWORD *)&x, method);
    sub_B170A0();
  }
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
  struct System_Func_IWarBoardObjectData__bool__o *excludeCond; // x0

  if ( (byte_40F79D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, x);
    byte_40F79D6 = 1;
  }
  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_B170D4();
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_2B6AB54 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__)
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v11; // w19
  System_Int32_array *v12; // x0

  if ( (byte_40F79D7 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, x);
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, v5);
    byte_40F79D7 = 1;
  }
  if ( !x )
    goto LABEL_15;
  klass = x->klass;
  baseSquareIndex = this->fields.baseSquareIndex;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v11 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v12 = AStarSearch__RouteSearch(0LL, baseSquareIndex, v11, 0, 0LL, 0LL);
  if ( !v12 )
LABEL_15:
    sub_B170D4();
  return v12->max_length;
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_T__o *routeDataList; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_40F79D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v9);
    sub_B16FFC(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v10);
    byte_40F79D8 = 1;
  }
  v11 = sub_B170CC(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, targetObject, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = targetObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)targetObject,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                             v19,
                                                                             v20,
                                                                             v21,
                                                                             v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v11,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           routeDataList,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  __int64 v5; // x1
  struct IWarBoardObjectData_o *targetObject; // x8
  __int64 v7; // x10
  struct IWarBoardObjectData_o *v8; // x21
  IWarBoardObjectData_c *klass; // x8
  int32_t baseIndex; // w23
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct IWarBoardObjectData_o *v15; // x20
  IWarBoardObjectData_c *v16; // x8
  int32_t actionIndex; // w19
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0

  if ( (byte_40F79D9 & 1) == 0 )
  {
    sub_B16FFC(&IWarBoardObjectData_TypeInfo, x);
    sub_B16FFC(&WarBoardItemData_TypeInfo, v5);
    byte_40F79D9 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    return 0;
  v7 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1);
  if ( *(&targetObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (WarBoardItemData_c *)targetObject->klass->_2.typeHierarchy[v7 - 1] != WarBoardItemData_TypeInfo )
  {
    return 0;
  }
  if ( !x )
    goto LABEL_26;
  if ( !WarBoardAIRoute_RouteData__HasFlag(x, 0x8000000LL, 0LL) )
    return 0;
  v8 = this->fields.targetObject;
  if ( !v8 )
    goto LABEL_26;
  klass = v8->klass;
  baseIndex = x->fields.baseIndex;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AAFEF8(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  if ( baseIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                      v8,
                      *(_QWORD *)(p_method + 8)) )
    return 1;
  v15 = this->fields.targetObject;
  if ( !v15 )
LABEL_26:
    sub_B170D4();
  v16 = v15->klass;
  actionIndex = x->fields.actionIndex;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v19 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v20 = (__int64)&v16->vtable[*v19].method;
  }
  else
  {
LABEL_23:
    v20 = sub_AAFEF8(v15, IWarBoardObjectData_TypeInfo, 0LL);
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
  struct WarBoardItemData_o *value; // x8
  int32_t squareIndex_k__BackingField; // w8

  if ( (byte_40F79DA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, x);
    byte_40F79DA = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( !WarBoardAIRoute_RouteData__HasFlag(x, 0x8000000LL, 0LL) )
    return 0;
  value = this->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_B170D4();
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
  struct WarBoardPieceData_o *v8; // x8
  struct WarBoardPieceData_o *v9; // x9

  if ( !x )
    goto LABEL_11;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_11;
  actionPiece = this->fields.actionPiece;
  if ( !actionPiece )
    goto LABEL_11;
  if ( basePiece->fields._index_k__BackingField == actionPiece->fields._index_k__BackingField )
    return 1;
  if ( WarBoardAIRoute_RouteData__HasFlag(x, 0x4000000LL, 0LL) )
  {
    v8 = x->fields.actionPiece;
    if ( v8 )
    {
      v9 = this->fields.actionPiece;
      if ( v9 )
        return v8->fields._index_k__BackingField == v9->fields._index_k__BackingField;
    }
LABEL_11:
    sub_B170D4();
  }
  return 0;
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
  struct WarBoardPieceData_o *basePiece; // x9
  struct WarBoardPieceData_o *targetPiece; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool HasFlag; // w0
  struct WarBoardPieceData_o *v10; // x8
  struct WarBoardPieceData_o *v11; // x9
  int32_t index_k__BackingField; // w10
  struct WarBoardPieceData_o *actionPiece; // x11
  WarBoardCost_o *v14; // x0

  if ( !x )
    goto LABEL_22;
  if ( WarBoardAIRoute_RouteData__get_notAction(x, 0LL) )
    return 0;
  if ( WarBoardAIRoute_RouteData__HasFlag(x, 2LL, 0LL) )
  {
    basePiece = x->fields.basePiece;
    if ( !basePiece )
      goto LABEL_22;
    targetPiece = this->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_22;
    if ( basePiece->fields._index_k__BackingField == targetPiece->fields._index_k__BackingField )
    {
      Cost_k__BackingField = targetPiece->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
        return WarBoardCost__get_Attack(Cost_k__BackingField, 0LL);
LABEL_22:
      sub_B170D4();
    }
  }
  HasFlag = WarBoardAIRoute_RouteData__HasFlag(x, 0x4000000LL, 0LL);
  v10 = x->fields.basePiece;
  if ( !HasFlag )
  {
    if ( !v10 )
      goto LABEL_22;
LABEL_18:
    v11 = this->fields.targetPiece;
    if ( !v11 )
      goto LABEL_22;
    if ( v10->fields._index_k__BackingField != v11->fields._index_k__BackingField )
      return 0;
    goto LABEL_20;
  }
  if ( !v10 )
    goto LABEL_22;
  v11 = this->fields.targetPiece;
  if ( !v11 )
    goto LABEL_22;
  index_k__BackingField = v11->fields._index_k__BackingField;
  if ( v10->fields._index_k__BackingField != index_k__BackingField )
  {
    actionPiece = x->fields.actionPiece;
    if ( !actionPiece )
      goto LABEL_22;
    if ( actionPiece->fields._index_k__BackingField != index_k__BackingField )
      goto LABEL_18;
  }
LABEL_20:
  v14 = v11->fields._Cost_k__BackingField;
  if ( !v14 )
    goto LABEL_22;
  return WarBoardCost__get_Move(v14, 0LL);
}