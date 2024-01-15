void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleLogicTask_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BattleLogicTask_o *v16; // x20
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FC437 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask___TypeInfo, method);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v4);
    byte_40FC437 = 1;
  }
  v5 = (struct BattleLogicTask_array *)sub_B17014(BattleLogicTask___TypeInfo, 0LL, v2);
  this->fields.zeroTask = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.zeroTask,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v16 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v12, v13, v14, v15);
  BattleLogicTask___ctor(v16, v17);
  this->fields.tmpShiftTask = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tmpShiftTask,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return data->fields.isMultiTargetBattle && data->fields.justDeadTargetId != -1;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        BattleActionData_o **baseActionData,
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
  __int64 v65; // x23
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x1
  BattleData_o *data; // x21
  int32_t ActorId; // w0
  System_Int32_array **ServantData; // x0
  BattleServantData_o **v76; // x24
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  BattleActionData_o *v87; // x22
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  BattleActionData_o **v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **command; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  BattleData_o *v108; // x0
  BattleLogic_o *logic; // x0
  BattleActionData_o *v110; // x20
  const MethodInfo *v111; // x1
  int32_t v112; // w0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  BattleActionData_o *v119; // x0
  System_Int32_array **motionMessage; // x1
  const MethodInfo *v121; // x1
  int Target; // w0
  struct BattleData_o *v123; // x8
  int32_t v124; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v125; // x25
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v130; // x20
  System_Collections_Generic_IEnumerable_TSource__o **v131; // x25
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  BattleCommandData_o *v138; // x0
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  BattleData_o *v143; // x0
  bool isEnemyID; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v147; // x27
  System_Collections_Generic_List_int__o *v148; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x20
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  System_Func_int__BattleActionData_SideEffectData__o *v154; // x22
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v159; // x20
  BattleLogicNomal___c_c *v160; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__20_9; // x22
  Il2CppObject *v163; // x24
  struct BattleLogicNomal___c_StaticFields *v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Collections_Generic_IEnumerable_T__o *v171; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v172; // x20
  BattleLogicNomal___c_c *v173; // x0
  struct BattleLogicNomal___c_StaticFields *v174; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__20_0; // x22
  Il2CppObject *v176; // x24
  struct BattleLogicNomal___c_StaticFields *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v184; // x24
  System_Collections_Generic_Dictionary_TKey__TElement__o *v185; // x0
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x3
  __int64 v189; // x4
  __int64 v190; // x9
  BuffList_c *v191; // x8
  BattleLogicNomal___c_c *v192; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  struct BattleLogicNomal___c_StaticFields *v194; // x8
  System_Func_BuffList_TYPE__BuffList_TYPE__o *_9__20_2; // x25
  Il2CppObject *v196; // x22
  struct BattleLogicNomal___c_StaticFields *v197; // x0
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  struct BattleLogicNomal___c_StaticFields *v204; // x8
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *_9__20_3; // x22
  Il2CppObject *v206; // x26
  struct BattleLogicNomal___c_StaticFields *v207; // x0
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **v214; // x0
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  __int64 v221; // x1
  __int64 v222; // x2
  __int64 v223; // x3
  __int64 v224; // x4
  __int64 v225; // x8
  int64_t v226; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v227; // x22
  __int64 v228; // x1
  __int64 v229; // x2
  __int64 v230; // x3
  __int64 v231; // x4
  int64_t commandAssistId; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v233; // x22
  __int64 v234; // x8
  __int64 v235; // x2
  __int64 isPrevAttackMe; // x0
  __int64 v237; // x1
  System_String_array **v238; // x2
  BattleServantData_o **v239; // x24
  BattleCommandData_o **v240; // x22
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  __int64 v246; // x20
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  __int64 v253; // x1
  __int64 v254; // x2
  __int64 v255; // x3
  __int64 v256; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v257; // x20
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  __int64 v264; // x1
  __int64 v265; // x2
  __int64 v266; // x3
  __int64 v267; // x4
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x26
  __int64 v270; // x1
  __int64 v271; // x2
  __int64 v272; // x3
  __int64 v273; // x4
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v274; // x23
  __int64 v275; // x3
  __int64 v276; // x4
  const MethodInfo *v277; // x5
  __int64 v278; // x9
  __int64 v279; // x8
  unsigned __int64 v280; // x27
  int v281; // w20
  int32_t v282; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x25
  Il2CppObject *v284; // x0
  Il2CppClass *klass; // x8
  Il2CppObject *v286; // x20
  unsigned __int64 v287; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v290; // x20
  __int64 v291; // x8
  unsigned __int64 v292; // x10
  int *v293; // x11
  __int64 v294; // x0
  __int64 v295; // x8
  unsigned __int64 v296; // x10
  int *v297; // x11
  __int64 v298; // x0
  System_Type_o *v299; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x1
  __int64 v301; // x8
  unsigned __int64 v302; // x10
  int *v303; // x11
  __int64 v304; // x0
  unsigned __int64 v305; // x10
  int v306; // w20
  int v307; // w8
  BuffList_ACTION_array *v308; // x22
  int v309; // w8
  Il2CppObject *v310; // x0
  Il2CppClass *v311; // x8
  Il2CppObject *v312; // x20
  unsigned __int64 v313; // x10
  int32_t *v314; // x11
  __int64 v315; // x0
  __int64 v316; // x20
  __int64 v317; // x8
  unsigned __int64 v318; // x24
  BattleBuffData_BuffData_o *v319; // x28
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_22759320; // x0
  __int64 v323; // x1
  __int64 v324; // x2
  __int64 v325; // x8
  unsigned __int64 v326; // x10
  int *v327; // x11
  __int64 v328; // x0
  __int64 v329; // x8
  unsigned __int64 v330; // x10
  int *v331; // x11
  __int64 v332; // x0
  BattleServantData_o *v333; // x3
  BattleBuffData_BuffData_array *v334; // x22
  __int64 v335; // x8
  unsigned __int64 v336; // x10
  int *v337; // x11
  __int64 v338; // x0
  Il2CppObject *v339; // x0
  Il2CppClass *v340; // x8
  Il2CppObject *v341; // x20
  unsigned __int64 v342; // x10
  int32_t *v343; // x11
  __int64 v344; // x0
  __int64 v345; // x28
  BattleActionData_DamageData_o *v346; // x27
  __int64 v347; // x8
  unsigned __int64 v348; // x10
  int *v349; // x11
  __int64 v350; // x0
  __int64 v351; // x8
  unsigned __int64 v352; // x10
  int *v353; // x11
  __int64 v354; // x0
  BattleServantData_o *v355; // x25
  BattleLogic_o *v356; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  BattleActionData_DamageData_o *v358; // x22
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v360; // x20
  BattleActionData_o *v361; // x1
  BattleActionData_DamageData_o *v362; // x1
  __int64 v363; // x8
  unsigned __int64 v364; // x10
  int *v365; // x11
  __int64 v366; // x0
  BattleActionData_o *v367; // x20
  int32_t type; // w0
  BattleActionData_o *v369; // x20
  int32_t MotionId; // w0
  BattleActionData_o *v371; // x20
  int32_t AttackCount; // w0
  struct BattleData_o *v373; // x8
  struct BattlePerformance_o *perf; // x9
  BattlePerformanceCommandCard_o *commandPerf; // x0
  BattleData_o *v376; // x0
  BattleActionData_o *v377; // x20
  const MethodInfo *v378; // x5
  __int64 v379; // x9
  BattleCommandData_o **v380; // x22
  __int64 v381; // x8
  unsigned __int64 v382; // x28
  char v383; // w20
  int32_t v384; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v385; // x25
  Il2CppObject *v386; // x0
  Il2CppClass *v387; // x8
  Il2CppObject *v388; // x20
  unsigned __int64 v389; // x10
  int32_t *v390; // x11
  __int64 v391; // x0
  __int64 v392; // x20
  __int64 v393; // x8
  unsigned __int64 v394; // x10
  int *v395; // x11
  __int64 v396; // x0
  __int64 v397; // x8
  unsigned __int64 v398; // x10
  int *v399; // x11
  __int64 v400; // x0
  System_Type_o *v401; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v402; // x1
  __int64 v403; // x8
  unsigned __int64 v404; // x10
  int *v405; // x11
  __int64 v406; // x0
  unsigned __int64 v407; // x25
  int v408; // w20
  int v409; // w8
  BuffList_ACTION_array *v410; // x24
  int v411; // w8
  Il2CppObject *v412; // x0
  Il2CppClass *v413; // x8
  Il2CppObject *v414; // x20
  unsigned __int64 v415; // x10
  int32_t *v416; // x11
  __int64 v417; // x0
  __int64 v418; // x20
  __int64 v419; // x8
  unsigned __int64 v420; // x27
  BattleLogicFunction_o *v421; // x0
  BattleBuffData_BuffData_array *v422; // x0
  __int64 v423; // x1
  __int64 v424; // x2
  __int64 v425; // x8
  unsigned __int64 v426; // x10
  int *v427; // x11
  __int64 v428; // x0
  __int64 v429; // x8
  unsigned __int64 v430; // x10
  int *v431; // x11
  __int64 v432; // x0
  BattleServantData_o *v433; // x3
  BattleBuffData_BuffData_array *v434; // x22
  __int64 v435; // x8
  unsigned __int64 v436; // x10
  int *v437; // x11
  __int64 v438; // x0
  Il2CppObject *v439; // x0
  Il2CppClass *v440; // x8
  Il2CppObject *v441; // x20
  unsigned __int64 v442; // x10
  int32_t *v443; // x11
  __int64 v444; // x0
  __int64 v445; // x20
  __int64 v446; // x8
  unsigned __int64 v447; // x10
  int *v448; // x11
  __int64 v449; // x0
  __int64 v450; // x8
  unsigned __int64 v451; // x10
  int *v452; // x11
  __int64 v453; // x0
  __int64 v454; // x0
  __int64 v455; // x8
  unsigned __int64 v456; // x10
  int *v457; // x11
  __int64 v458; // x0
  Il2CppObject *current; // x8
  Il2CppClass *v460; // x9
  BattleData_o *v461; // x0
  BattleData_o *v462; // x0
  BattleLogic_o *v463; // x0
  BattleLogic_o *v464; // x0
  const MethodInfo *v465; // [xsp+0h] [xbp-130h]
  int32_t AttackType; // [xsp+14h] [xbp-11Ch]
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v467; // [xsp+18h] [xbp-118h]
  BattleLogicTask_o *v468; // [xsp+20h] [xbp-110h]
  System_Func_string__string__o **v469; // [xsp+28h] [xbp-108h]
  int32_t v470; // [xsp+34h] [xbp-FCh]
  unsigned __int64 v471; // [xsp+38h] [xbp-F8h]
  BattleServantData_o *optSvt; // [xsp+40h] [xbp-F0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v473; // [xsp+48h] [xbp-E8h]
  BattleBuffData_o *v474; // [xsp+50h] [xbp-E0h]
  System_Func_T__TResult__o *v475; // [xsp+58h] [xbp-D8h]
  __int64 v476; // [xsp+60h] [xbp-D0h]
  BuffList_ACTION_array *attackActs; // [xsp+68h] [xbp-C8h]
  BattleLogic_DamageProcessArgs_o *attackActsa; // [xsp+68h] [xbp-C8h]
  BattleServantData_o **v479; // [xsp+70h] [xbp-C0h]
  BattleCommandData_o **v480; // [xsp+78h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v481; // [xsp+80h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v482[2]; // [xsp+88h] [xbp-A8h] BYREF
  int v483; // [xsp+BCh] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v484; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_40FC424 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_ACTION___TypeInfo, task);
    sub_B16FFC(&Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v10);
    sub_B16FFC(&BattleActionData_TypeInfo, v11);
    sub_B16FFC(&BattleServantData___TypeInfo, v12);
    sub_B16FFC(&bool___TypeInfo, v13);
    sub_B16FFC(&BuffList_TypeInfo, v14);
    sub_B16FFC(&BattleLogic_DamageProcessArgs_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v18);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v19);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v20);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v21);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v25);
    sub_B16FFC(&Method_System_Func_BattleServantData__BattleServantData__Invoke__, v26);
    sub_B16FFC(&Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__, v27);
    sub_B16FFC(&Method_System_Func_bool__IEnumerable_BattleServantData____ctor__, v28);
    sub_B16FFC(&Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__, v29);
    sub_B16FFC(&Method_System_Func_BattleServantData__BattleServantData___ctor__, v30);
    sub_B16FFC(&Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__, v31);
    sub_B16FFC(&Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__, v32);
    sub_B16FFC(&Method_System_Func_int__BattleServantData___ctor__, v33);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v34);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v35);
    sub_B16FFC(&System_Func_bool__IEnumerable_BattleServantData___TypeInfo, v36);
    sub_B16FFC(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v37);
    sub_B16FFC(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v38);
    sub_B16FFC(&System_Func_BattleServantData__BattleServantData__TypeInfo, v39);
    sub_B16FFC(&System_Func_int__BattleServantData__TypeInfo, v40);
    sub_B16FFC(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v41);
    sub_B16FFC(&System_IDisposable_TypeInfo, v42);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v43);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v44);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v45);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v46);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__Add__, v47);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v48);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v49);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v50);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v51);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52);
    sub_B16FFC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__, v53);
    sub_B16FFC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__, v54);
    sub_B16FFC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__, v55);
    sub_B16FFC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__, v56);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__, v57);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__, v58);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__, v59);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__, v60);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__, v61);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__, v62);
    sub_B16FFC(&BattleLogicNomal___c__DisplayClass20_0_TypeInfo, v63);
    sub_B16FFC(&BattleLogicNomal___c_TypeInfo, v64);
    byte_40FC424 = 1;
  }
  memset(&v484, 0, sizeof(v484));
  v483 = 0;
  v65 = sub_B170CC(BattleLogicNomal___c__DisplayClass20_0_TypeInfo, task, baseActionData, method, v4);
  BattleLogicNomal___c__DisplayClass20_0___ctor((BattleLogicNomal___c__DisplayClass20_0_o *)v65, 0LL);
  if ( !v65 )
    goto LABEL_397;
  *(_QWORD *)(v65 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v65 + 16), (System_Int32_array **)this, v66, v67, v68, v69, v70, v71);
  if ( !task )
    goto LABEL_397;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, v72);
  if ( !data )
    goto LABEL_397;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v65 + 24) = ServantData;
  v76 = (BattleServantData_o **)(v65 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v65 + 24), ServantData, v77, v78, v79, v80, v81, v82);
  v87 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v83, v84, v85, v86);
  BattleActionData___ctor(v87, 0LL);
  *baseActionData = v87;
  sub_B16F98((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v87, v88, v89, v90, v91, v92, v93);
  v94 = (BattleActionData_o **)(v65 + 48);
  *(_QWORD *)(v65 + 48) = v87;
  sub_B16F98((BattleServantConfConponent_o *)(v65 + 48), (System_Int32_array **)v87, v95, v96, v97, v98, v99, v100);
  command = (System_Int32_array **)task->fields.command;
  *(_QWORD *)(v65 + 40) = command;
  sub_B16F98((BattleServantConfConponent_o *)(v65 + 40), command, v102, v103, v104, v105, v106, v107);
  v108 = this->fields.data;
  if ( !v108 )
    goto LABEL_397;
  BattleData__ResetWasAttackTargetId(v108, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_397;
  BattleLogic__updateResultServant(logic, 0LL);
  v110 = *v94;
  v112 = BattleLogicTask__getActorId(task, v111);
  if ( !v110 )
    goto LABEL_397;
  v110->fields.actorId = v112;
  v119 = *v94;
  v480 = (BattleCommandData_o **)(v65 + 40);
  if ( !*v94 )
    goto LABEL_397;
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  v119->fields.motionMessage = (struct System_String_o *)motionMessage;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v119->fields.motionMessage,
    motionMessage,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  Target = BattleLogicTask__getTarget(task, v121);
  v123 = this->fields.data;
  if ( !v123 )
    goto LABEL_397;
  v124 = Target;
  if ( Target <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v123->fields.leaderDown || v123->fields.endbattleFlg )
    return 0LL;
  v125 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getServantData(
                                                                  this->fields.data,
                                                                  Target,
                                                                  0LL);
  v130 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                   v126,
                                                                                                   v127,
                                                                                                   v128,
                                                                                                   v129);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v130,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v130 )
    goto LABEL_397;
  optSvt = (BattleServantData_o *)v125;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v130,
    v125,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
  *(_QWORD *)(v65 + 72) = v130;
  v131 = (System_Collections_Generic_IEnumerable_TSource__o **)(v65 + 72);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v65 + 72),
    (System_Int32_array **)v130,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  v138 = *(BattleCommandData_o **)(v65 + 40);
  if ( !v138 )
    goto LABEL_397;
  BattleCommandData__ResetCriticalStoreDict(v138, 0LL);
  if ( !*v480 )
    goto LABEL_397;
  BattleCommandData__UpdateCritical(*v480, *v76, optSvt, this->fields.data, 0LL);
  if ( !*v480 )
    goto LABEL_397;
  BattleCommandData__UpdateCommandType(*v480, 0LL);
  if ( !*v76 )
    goto LABEL_397;
  AttackType = BattleServantData__getAttackType(*v76, *v480, 0LL);
  v479 = (BattleServantData_o **)(v65 + 24);
  v470 = v124;
  if ( AttackType == 2 )
  {
    v143 = this->fields.data;
    if ( !v143 )
      goto LABEL_397;
    isEnemyID = BattleData__isEnemyID(v143, v124, 0LL);
    if ( !this->fields.data )
      goto LABEL_397;
    v145 = (System_Collections_Generic_IEnumerable_TSource__o *)(isEnemyID
                                                               ? BattleData__getFieldEnemyServantIDList(
                                                                   this->fields.data,
                                                                   1,
                                                                   0LL)
                                                               : BattleData__getFieldPlayerServantIDList(
                                                                   this->fields.data,
                                                                   0LL,
                                                                   0LL));
    v147 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v65 + 72);
    v148 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v145,
                                                       (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !v148 )
      goto LABEL_397;
    v149 = (System_Collections_Generic_IEnumerable_TSource__o *)v148;
    System_Collections_Generic_List_int___Remove(
      v148,
      v124,
      (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
    v154 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                    System_Func_int__BattleServantData__TypeInfo,
                                                                    v150,
                                                                    v151,
                                                                    v152,
                                                                    v153);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v154,
      (Il2CppObject *)v65,
      Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__,
      (const MethodInfo_2B66764 *)Method_System_Func_int__BattleServantData___ctor__);
    v159 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                  v149,
                                                                  (System_Func_TSource__TResult__o *)v154,
                                                                  (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v160 = BattleLogicNomal___c_TypeInfo;
    if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v160 = BattleLogicNomal___c_TypeInfo;
    }
    static_fields = v160->static_fields;
    _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__20_9;
    if ( !_9__20_9 )
    {
      if ( (BYTE3(v160->vtable._0_Equals.methodPtr) & 4) != 0 && !v160->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v160);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      }
      v163 = (Il2CppObject *)static_fields->__9;
      _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_BattleServantData__bool__TypeInfo,
                                                                                      v155,
                                                                                      v156,
                                                                                      v157,
                                                                                      v158);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__20_9,
        v163,
        Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
      v164 = BattleLogicNomal___c_TypeInfo->static_fields;
      v164->__9__20_9 = (struct System_Func_BattleServantData__bool__o *)_9__20_9;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v164->__9__20_9,
        (System_Int32_array **)_9__20_9,
        v165,
        v166,
        v167,
        v168,
        v169,
        v170);
    }
    v171 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                            v159,
                                                            (System_Func_TSource__bool__o *)_9__20_9,
                                                            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v147 )
      goto LABEL_397;
    v131 = (System_Collections_Generic_IEnumerable_TSource__o **)(v65 + 72);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      *v147,
      v171,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v172 = *v131;
  v173 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v173 = BattleLogicNomal___c_TypeInfo;
  }
  v174 = v173->static_fields;
  _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v174->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v173->vtable._0_Equals.methodPtr) & 4) != 0 && !v173->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v173);
      v174 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v176 = (Il2CppObject *)v174->__9;
    _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_BattleServantData__BattleServantData__TypeInfo,
                                                                                                 v139,
                                                                                                 v140,
                                                                                                 v141,
                                                                                                 v142);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__20_0,
      v176,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
    v177 = BattleLogicNomal___c_TypeInfo->static_fields;
    v177->__9__20_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__20_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v177->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v178,
      v179,
      v180,
      v181,
      v182,
      v183);
  }
  v184 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                           System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo,
                                                                                           v139,
                                                                                           v140,
                                                                                           v141,
                                                                                           v142);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v184,
    (Il2CppObject *)v65,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__,
    (const MethodInfo_2B6C28C *)Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__);
  v185 = System_Linq_Enumerable__ToDictionary_object__object__object_(
           v172,
           (System_Func_TSource__TKey__o *)_9__20_0,
           (System_Func_TSource__TElement__o *)v184,
           (const MethodInfo_19C4FC4 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v190 = *(_QWORD *)(v65 + 24);
  if ( !v190 )
    goto LABEL_397;
  v481 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v185;
  v191 = BuffList_TypeInfo;
  v474 = *(BattleBuffData_o **)(v190 + 736);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v191 = BuffList_TypeInfo;
  }
  v192 = BattleLogicNomal___c_TypeInfo;
  v467 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)v131;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v191->static_fields->CommandCodeBuffHash;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v192 = BattleLogicNomal___c_TypeInfo;
  }
  v194 = v192->static_fields;
  _9__20_2 = v194->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( (BYTE3(v192->vtable._0_Equals.methodPtr) & 4) != 0 && !v192->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v192);
      v194 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v196 = (Il2CppObject *)v194->__9;
    _9__20_2 = (System_Func_BuffList_TYPE__BuffList_TYPE__o *)sub_B170CC(
                                                                System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo,
                                                                v186,
                                                                v187,
                                                                v188,
                                                                v189);
    System_Func_BuffList_TYPE__BuffList_TYPE____ctor(
      _9__20_2,
      v196,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__,
      (const MethodInfo_2B6798C *)Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__);
    v197 = BattleLogicNomal___c_TypeInfo->static_fields;
    v197->__9__20_2 = _9__20_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v197->__9__20_2,
      (System_Int32_array **)_9__20_2,
      v198,
      v199,
      v200,
      v201,
      v202,
      v203);
    v192 = BattleLogicNomal___c_TypeInfo;
  }
  if ( (BYTE3(v192->vtable._0_Equals.methodPtr) & 4) != 0 && !v192->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v192);
    v192 = BattleLogicNomal___c_TypeInfo;
  }
  v204 = v192->static_fields;
  v468 = task;
  _9__20_3 = v204->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( (BYTE3(v192->vtable._0_Equals.methodPtr) & 4) != 0 && !v192->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v192);
      v204 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v206 = (Il2CppObject *)v204->__9;
    _9__20_3 = (System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)sub_B170CC(
                                                                                System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo,
                                                                                v186,
                                                                                v187,
                                                                                v188,
                                                                                v189);
    System_Func_BuffList_TYPE__List_BattleBuffData_BuffData_____ctor(
      _9__20_3,
      v206,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__,
      (const MethodInfo_2B67CB0 *)Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__);
    v207 = BattleLogicNomal___c_TypeInfo->static_fields;
    v207->__9__20_3 = _9__20_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v207->__9__20_3,
      (System_Int32_array **)_9__20_3,
      v208,
      v209,
      v210,
      v211,
      v212,
      v213);
  }
  v214 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData__(
                                  CommandCodeBuffHash,
                                  (System_Func_TSource__TKey__o *)_9__20_2,
                                  (System_Func_TSource__TElement__o *)_9__20_3,
                                  (const MethodInfo_19C4F4C *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v65 + 32) = v214;
  sub_B16F98((BattleServantConfConponent_o *)(v65 + 32), v214, v215, v216, v217, v218, v219, v220);
  v225 = *(_QWORD *)(v65 + 40);
  v473 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v65 + 32);
  if ( !v225 )
    goto LABEL_397;
  v226 = *(_QWORD *)(v225 + 72);
  v227 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B170CC(
                                                                            System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                                                            v221,
                                                                            v222,
                                                                            v223,
                                                                            v224);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v227,
    (Il2CppObject *)v65,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__,
    (const MethodInfo_24C4F70 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  if ( !v474 )
    goto LABEL_397;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v474,
    v226,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v227,
    1,
    0LL);
  if ( !*v480 )
    goto LABEL_397;
  commandAssistId = (*v480)->fields.commandAssistId;
  v233 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B170CC(
                                                                            System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                                                            v228,
                                                                            v229,
                                                                            v230,
                                                                            v231);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v233,
    (Il2CppObject *)v65,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__,
    (const MethodInfo_24C4F70 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  v234 = *(_QWORD *)(v65 + 40);
  if ( !v234 )
    goto LABEL_397;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v474,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v233,
    1,
    *(_DWORD *)(v234 + 88),
    0LL);
  isPrevAttackMe = sub_B17014(bool___TypeInfo, 2LL, v235);
  v239 = (BattleServantData_o **)(v65 + 24);
  if ( !isPrevAttackMe )
    goto LABEL_397;
  v240 = (BattleCommandData_o **)(v65 + 40);
  if ( !*(_DWORD *)(isPrevAttackMe + 24) )
    goto LABEL_398;
  v476 = isPrevAttackMe;
  *(_BYTE *)(isPrevAttackMe + 32) = 1;
  isPrevAttackMe = sub_B17014(BattleServantData___TypeInfo, 1LL, v238);
  if ( !isPrevAttackMe )
    goto LABEL_397;
  v246 = isPrevAttackMe;
  if ( optSvt )
  {
    isPrevAttackMe = sub_B170BC(optSvt, *(_QWORD *)(*(_QWORD *)isPrevAttackMe + 64LL));
    if ( !isPrevAttackMe )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v246 + 24) )
    goto LABEL_398;
  *(_QWORD *)(v246 + 32) = optSvt;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v246 + 32),
    (System_Int32_array **)optSvt,
    v238,
    v241,
    v242,
    v243,
    v244,
    v245);
  *(_QWORD *)(v65 + 56) = v246;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v65 + 56),
    (System_Int32_array **)v246,
    v247,
    v248,
    v249,
    v250,
    v251,
    v252);
  v257 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                           System_Func_BattleServantData__BattleServantData__TypeInfo,
                                                                                           v253,
                                                                                           v254,
                                                                                           v255,
                                                                                           v256);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v257,
    (Il2CppObject *)v65,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__,
    (const MethodInfo_2B6C28C *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
  *(_QWORD *)(v65 + 64) = v257;
  v469 = (System_Func_string__string__o **)(v65 + 64);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v65 + 64),
    (System_Int32_array **)v257,
    v258,
    v259,
    v260,
    v261,
    v262,
    v263);
  v475 = (System_Func_T__TResult__o *)sub_B170CC(
                                        System_Func_bool__IEnumerable_BattleServantData___TypeInfo,
                                        v264,
                                        v265,
                                        v266,
                                        v267);
  System_Func_bool__object____ctor(
    v475,
    (Il2CppObject *)v65,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__,
    (const MethodInfo_2B63454 *)Method_System_Func_bool__IEnumerable_BattleServantData____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_397;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v274 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B170CC(
                                                                     BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                     v270,
                                                                     v271,
                                                                     v272,
                                                                     v273);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v274, 0LL);
  v278 = v476;
  v279 = *(_QWORD *)(v476 + 24);
  if ( (int)v279 >= 1 )
  {
    v280 = 0LL;
    do
    {
      if ( v280 >= (unsigned int)v279 )
        goto LABEL_398;
      v281 = *(unsigned __int8 *)(v278 + v280 + 32);
      if ( *(_BYTE *)(v278 + v280 + 32) )
        v282 = 177;
      else
        v282 = 138;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)isPrevAttackMe,
                                    *v473,
                                    v474,
                                    v282,
                                    *v240,
                                    v277);
      if ( !v475 )
        goto LABEL_397;
      v284 = System_Func_bool__object___Invoke(
               v475,
               v281 != 0,
               (const MethodInfo_2B63468 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !v284 )
        goto LABEL_397;
      klass = v284->klass;
      v286 = v284;
      if ( *(_WORD *)&v284->klass->_2.bitflags1 )
      {
        v287 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v287;
          p_offset += 4;
          if ( v287 >= *(unsigned __int16 *)&v284->klass->_2.bitflags1 )
            goto LABEL_91;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_91:
        p_method = sub_AAFEF8(v284, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v290 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v286, *(_QWORD *)(p_method + 8));
      if ( !v290 )
        sub_B170D4();
      while ( 1 )
      {
        v291 = *(_QWORD *)v290;
        if ( *(_WORD *)(*(_QWORD *)v290 + 298LL) )
        {
          v292 = 0LL;
          v293 = (int *)(*(_QWORD *)(v291 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v293 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v292;
            v293 += 4;
            if ( v292 >= *(unsigned __int16 *)(*(_QWORD *)v290 + 298LL) )
              goto LABEL_98;
          }
          v294 = v291 + 16LL * *v293 + 312;
        }
        else
        {
LABEL_98:
          v294 = sub_AAFEF8(v290, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v294)(v290, *(_QWORD *)(v294 + 8)) & 1) == 0 )
          break;
        v295 = *(_QWORD *)v290;
        if ( *(_WORD *)(*(_QWORD *)v290 + 298LL) )
        {
          v296 = 0LL;
          v297 = (int *)(*(_QWORD *)(v295 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v297 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v296;
            v297 += 4;
            if ( v296 >= *(unsigned __int16 *)(*(_QWORD *)v290 + 298LL) )
              goto LABEL_105;
          }
          v298 = v295 + 16LL * *v297 + 312;
        }
        else
        {
LABEL_105:
          v298 = sub_AAFEF8(v290, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v299 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v298)(v290, *(_QWORD *)(v298 + 8));
        if ( !v481 )
          sub_B170D4();
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v481,
                 v299,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          MasterData_WarQuestSelectionMaster,
          *v240,
          TargetCommandCodeBuffList,
          *v94,
          0,
          v274,
          v465);
      }
      *((_DWORD *)&v482[1].fields.list + v483++) = 845;
      v301 = *(_QWORD *)v290;
      if ( *(_WORD *)(*(_QWORD *)v290 + 298LL) )
      {
        v302 = 0LL;
        v303 = (int *)(*(_QWORD *)(v301 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v303 - 1) != System_IDisposable_TypeInfo )
        {
          ++v302;
          v303 += 4;
          if ( v302 >= *(unsigned __int16 *)(*(_QWORD *)v290 + 298LL) )
            goto LABEL_114;
        }
        v304 = v301 + 16LL * *v303 + 312;
      }
      else
      {
LABEL_114:
        v304 = sub_AAFEF8(v290, System_IDisposable_TypeInfo, 0LL);
      }
      isPrevAttackMe = (*(__int64 (__fastcall **)(__int64, _QWORD))v304)(v290, *(_QWORD *)(v304 + 8));
      if ( v483 && *((_DWORD *)&v482[0].fields.current + v483 + 1) == 845 )
        --v483;
      v278 = v476;
      v240 = v480;
      ++v280;
      LODWORD(v279) = *(_DWORD *)(v476 + 24);
    }
    while ( (__int64)v280 < (int)v279 );
    if ( (int)v279 >= 1 )
    {
      v305 = 0LL;
      while ( v305 < (unsigned int)v279 )
      {
        v471 = v305;
        v306 = *(unsigned __int8 *)(v278 + v305 + 32);
        isPrevAttackMe = sub_B17014(BuffList_ACTION___TypeInfo, 2LL, v238);
        if ( !isPrevAttackMe )
          goto LABEL_397;
        v307 = *(_DWORD *)(isPrevAttackMe + 24);
        v308 = (BuffList_ACTION_array *)isPrevAttackMe;
        if ( v306 )
        {
          if ( !v307 )
            break;
          *(_DWORD *)(isPrevAttackMe + 32) = 118;
          if ( v307 == 1 )
            break;
          v309 = 120;
        }
        else
        {
          if ( !v307 )
            break;
          *(_DWORD *)(isPrevAttackMe + 32) = 88;
          if ( v307 == 1 )
            break;
          v309 = 98;
        }
        *(_DWORD *)(isPrevAttackMe + 36) = v309;
        v310 = System_Func_bool__object___Invoke(
                 v475,
                 v306 != 0,
                 (const MethodInfo_2B63468 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !v310 )
          goto LABEL_397;
        v311 = v310->klass;
        v312 = v310;
        attackActs = v308;
        if ( *(_WORD *)&v310->klass->_2.bitflags1 )
        {
          v313 = 0LL;
          v314 = &v311->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v314 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v313;
            v314 += 4;
            if ( v313 >= *(unsigned __int16 *)&v310->klass->_2.bitflags1 )
              goto LABEL_141;
          }
          v315 = (__int64)&v311->vtable[*v314].method;
        }
        else
        {
LABEL_141:
          v315 = sub_AAFEF8(v310, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v316 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v315)(v312, *(_QWORD *)(v315 + 8));
        if ( !v316 )
          sub_B170D4();
        while ( 1 )
        {
          v325 = *(_QWORD *)v316;
          if ( *(_WORD *)(*(_QWORD *)v316 + 298LL) )
          {
            v326 = 0LL;
            v327 = (int *)(*(_QWORD *)(v325 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v327 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v326;
              v327 += 4;
              if ( v326 >= *(unsigned __int16 *)(*(_QWORD *)v316 + 298LL) )
                goto LABEL_155;
            }
            v239 = v479;
            v328 = v325 + 16LL * *v327 + 312;
          }
          else
          {
LABEL_155:
            v239 = v479;
            v328 = sub_AAFEF8(v316, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v328)(v316, *(_QWORD *)(v328 + 8)) & 1) == 0 )
            break;
          v329 = *(_QWORD *)v316;
          if ( *(_WORD *)(*(_QWORD *)v316 + 298LL) )
          {
            v330 = 0LL;
            v331 = (int *)(*(_QWORD *)(v329 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v331 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v330;
              v331 += 4;
              if ( v330 >= *(unsigned __int16 *)(*(_QWORD *)v316 + 298LL) )
                goto LABEL_162;
            }
            v332 = v329 + 16LL * *v331 + 312;
          }
          else
          {
LABEL_162:
            v332 = sub_AAFEF8(v316, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v333 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v332)(v316, *(_QWORD *)(v332 + 8));
          if ( !*v239 )
            sub_B170D4();
          AttackSideEffectBuffList_22759320 = BattleServantData__getAttackSideEffectBuffList_22759320(
                                                *v239,
                                                attackActs,
                                                *v480,
                                                v333,
                                                0LL);
          v334 = AttackSideEffectBuffList_22759320;
          if ( !AttackSideEffectBuffList_22759320 )
            sub_B170D4();
          v317 = *(_QWORD *)&AttackSideEffectBuffList_22759320->max_length;
          if ( (int)v317 >= 1 )
          {
            v318 = 0LL;
            do
            {
              if ( v318 >= (unsigned int)v317 )
              {
                sub_B17100(AttackSideEffectBuffList_22759320, v323, v324);
                sub_B170A0();
              }
              if ( !*v94 )
                sub_B170D4();
              v319 = v334->m_Items[v318];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v94, 3, 0LL);
              if ( !logicfunction )
                sub_B170D4();
              BattleLogicFunction__setAttackSideEffectBuff(
                logicfunction,
                MasterData_WarQuestSelectionMaster,
                SideEffectActionData,
                v319,
                v274,
                0,
                0LL);
              LODWORD(v317) = v334->max_length;
              ++v318;
            }
            while ( (__int64)v318 < (int)v317 );
          }
        }
        *((_DWORD *)&v482[1].fields.list + v483++) = 1050;
        v335 = *(_QWORD *)v316;
        if ( *(_WORD *)(*(_QWORD *)v316 + 298LL) )
        {
          v336 = 0LL;
          v337 = (int *)(*(_QWORD *)(v335 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v337 - 1) != System_IDisposable_TypeInfo )
          {
            ++v336;
            v337 += 4;
            if ( v336 >= *(unsigned __int16 *)(*(_QWORD *)v316 + 298LL) )
              goto LABEL_172;
          }
          v338 = v335 + 16LL * *v337 + 312;
        }
        else
        {
LABEL_172:
          v338 = sub_AAFEF8(v316, System_IDisposable_TypeInfo, 0LL);
        }
        isPrevAttackMe = (*(__int64 (__fastcall **)(__int64, _QWORD))v338)(v316, *(_QWORD *)(v338 + 8));
        if ( v483 && *((_DWORD *)&v482[0].fields.current + v483 + 1) == 1050 )
          --v483;
        v278 = v476;
        v240 = v480;
        v305 = v471 + 1;
        LODWORD(v279) = *(_DWORD *)(v476 + 24);
        if ( (__int64)(v471 + 1) >= (int)v279 )
          goto LABEL_179;
      }
LABEL_398:
      sub_B17100(isPrevAttackMe, v237, v238);
      sub_B170A0();
    }
  }
LABEL_179:
  attackActsa = (BattleLogic_DamageProcessArgs_o *)sub_B170CC(
                                                     BattleLogic_DamageProcessArgs_TypeInfo,
                                                     v237,
                                                     v238,
                                                     v275,
                                                     v276);
  BattleLogic_DamageProcessArgs___ctor(attackActsa, 1, 0LL);
  if ( !v475 )
    goto LABEL_397;
  v339 = System_Func_bool__object___Invoke(
           v475,
           0,
           (const MethodInfo_2B63468 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !v339 )
    goto LABEL_397;
  v340 = v339->klass;
  v341 = v339;
  if ( *(_WORD *)&v339->klass->_2.bitflags1 )
  {
    v342 = 0LL;
    v343 = &v340->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v343 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v342;
      v343 += 4;
      if ( v342 >= *(unsigned __int16 *)&v339->klass->_2.bitflags1 )
        goto LABEL_185;
    }
    v344 = (__int64)&v340->vtable[*v343].method;
  }
  else
  {
LABEL_185:
    v344 = sub_AAFEF8(v339, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v345 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v344)(v341, *(_QWORD *)(v344 + 8));
  v346 = 0LL;
  while ( 1 )
  {
    if ( !v345 )
      sub_B170D4();
    v347 = *(_QWORD *)v345;
    if ( *(_WORD *)(*(_QWORD *)v345 + 298LL) )
    {
      v348 = 0LL;
      v349 = (int *)(*(_QWORD *)(v347 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v349 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v348;
        v349 += 4;
        if ( v348 >= *(unsigned __int16 *)(*(_QWORD *)v345 + 298LL) )
          goto LABEL_193;
      }
      v350 = v347 + 16LL * *v349 + 312;
    }
    else
    {
LABEL_193:
      v350 = sub_AAFEF8(v345, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v350)(v345, *(_QWORD *)(v350 + 8)) & 1) == 0 )
      break;
    v351 = *(_QWORD *)v345;
    if ( *(_WORD *)(*(_QWORD *)v345 + 298LL) )
    {
      v352 = 0LL;
      v353 = (int *)(*(_QWORD *)(v351 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v353 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v352;
        v353 += 4;
        if ( v352 >= *(unsigned __int16 *)(*(_QWORD *)v345 + 298LL) )
          goto LABEL_200;
      }
      v354 = v351 + 16LL * *v353 + 312;
    }
    else
    {
LABEL_200:
      v354 = sub_AAFEF8(v345, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v355 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v354)(v345, *(_QWORD *)(v354 + 8));
    v356 = this->fields.logic;
    if ( !v356 )
      sub_B170D4();
    Damagelist = BattleLogic__getDamagelist(v356, *v239, v355, *v240, attackActsa, 0LL);
    v358 = Damagelist;
    if ( v355 == optSvt )
      v346 = Damagelist;
    if ( !v355 )
      sub_B170D4();
    buffData = v355->fields.buffData;
    if ( !buffData )
      sub_B170D4();
    if ( !buffData->fields.isNoDamage )
    {
      v360 = *v94;
      v361 = BattleBuffData__UseProgressingDoNotAct(v355->fields.buffData, v355, 0, 0LL);
      if ( !v360 )
        sub_B170D4();
      BattleActionData__addSideEffectActionData(v360, v361, 1, 0LL);
    }
    if ( !*v239 )
      sub_B170D4();
    if ( BattleServantData__checkPlayer(*v239, 0LL) )
    {
      if ( !*v239 )
        sub_B170D4();
      v355->fields.overkillTargetId = (*v239)->fields.uniqueId;
    }
    if ( !*v94 )
      sub_B170D4();
    v362 = v358;
    v240 = v480;
    BattleActionData__setDamageData(*v94, v362, 0LL, 0, 0, 0LL);
  }
  *((_DWORD *)&v482[1].fields.list + v483++) = 1259;
  v363 = *(_QWORD *)v345;
  if ( *(_WORD *)(*(_QWORD *)v345 + 298LL) )
  {
    v364 = 0LL;
    v365 = (int *)(*(_QWORD *)(v363 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v365 - 1) != System_IDisposable_TypeInfo )
    {
      ++v364;
      v365 += 4;
      if ( v364 >= *(unsigned __int16 *)(*(_QWORD *)v345 + 298LL) )
        goto LABEL_220;
    }
    v366 = v363 + 16LL * *v365 + 312;
  }
  else
  {
LABEL_220:
    v366 = sub_AAFEF8(v345, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v366)(v345, *(_QWORD *)(v366 + 8));
  if ( v483 && *((_DWORD *)&v482[0].fields.current + v483 + 1) == 1259 )
    --v483;
  if ( !*v469 )
    goto LABEL_397;
  System_Func_string__string___Invoke(
    *v469,
    (System_String_o *)optSvt,
    (const MethodInfo_2B6C2A0 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  if ( !*v480 )
    goto LABEL_397;
  v367 = *v94;
  type = BattleCommandData__get_type(*v480, 0LL);
  if ( !v367 )
    goto LABEL_397;
  v367->fields.type = type;
  if ( !*v94 )
    goto LABEL_397;
  BattleActionData__setCommand(*v94, *v480, 0LL);
  if ( !*v480 )
    goto LABEL_397;
  if ( !*v94 )
    goto LABEL_397;
  (*v94)->fields.actionIndex = (*v480)->fields.actionIndex;
  if ( !*v239 )
    goto LABEL_397;
  v369 = *v94;
  MotionId = BattleServantData__getMotionId(*v239, *v480, 0LL);
  if ( !v369 )
    goto LABEL_397;
  v369->fields.motionId = MotionId;
  if ( !v346 )
    goto LABEL_397;
  v371 = *v94;
  AttackCount = BattleActionData_DamageData__getAttackCount(v346, 0LL);
  if ( !v371 )
    goto LABEL_397;
  v371->fields.attackcount = AttackCount;
  v373 = this->fields.data;
  if ( !v373 )
    goto LABEL_397;
  perf = v373->fields.perf;
  if ( !perf )
    goto LABEL_397;
  if ( !*v480 )
    goto LABEL_397;
  commandPerf = perf->fields.commandPerf;
  if ( !commandPerf )
    goto LABEL_397;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(commandPerf, (*v480)->fields.actionIndex, 0LL);
  if ( !*v239 )
    goto LABEL_397;
  v376 = this->fields.data;
  if ( !v376 )
    goto LABEL_397;
  v377 = *v94;
  isPrevAttackMe = BattleData__isPrevAttackMe(v376, (*v239)->fields.uniqueId, v470, 0LL);
  if ( !v377 )
    goto LABEL_397;
  v379 = v476;
  v377->fields.prevattackme = isPrevAttackMe & 1;
  v380 = v480;
  v381 = *(_QWORD *)(v476 + 24);
  if ( (int)v381 >= 1 )
  {
    v382 = 0LL;
    do
    {
      if ( v382 >= (unsigned int)v381 )
        goto LABEL_398;
      v383 = *(_BYTE *)(v379 + v382 + 32);
      if ( v383 )
        v384 = 178;
      else
        v384 = 159;
      v385 = BattleLogicNomal__GetTargetCommandCodeBuffList(
               (BattleLogicNomal_o *)isPrevAttackMe,
               *v473,
               v474,
               v384,
               *v380,
               v378);
      v386 = System_Func_bool__object___Invoke(
               v475,
               v383,
               (const MethodInfo_2B63468 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !v386 )
        goto LABEL_397;
      v387 = v386->klass;
      v388 = v386;
      if ( *(_WORD *)&v386->klass->_2.bitflags1 )
      {
        v389 = 0LL;
        v390 = &v387->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v390 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v389;
          v390 += 4;
          if ( v389 >= *(unsigned __int16 *)&v386->klass->_2.bitflags1 )
            goto LABEL_255;
        }
        v391 = (__int64)&v387->vtable[*v390].method;
      }
      else
      {
LABEL_255:
        v391 = sub_AAFEF8(v386, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v392 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v391)(v388, *(_QWORD *)(v391 + 8));
      if ( !v392 )
        sub_B170D4();
      while ( 1 )
      {
        v393 = *(_QWORD *)v392;
        if ( *(_WORD *)(*(_QWORD *)v392 + 298LL) )
        {
          v394 = 0LL;
          v395 = (int *)(*(_QWORD *)(v393 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v395 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v394;
            v395 += 4;
            if ( v394 >= *(unsigned __int16 *)(*(_QWORD *)v392 + 298LL) )
              goto LABEL_262;
          }
          v396 = v393 + 16LL * *v395 + 312;
        }
        else
        {
LABEL_262:
          v396 = sub_AAFEF8(v392, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v396)(v392, *(_QWORD *)(v396 + 8)) & 1) == 0 )
          break;
        v397 = *(_QWORD *)v392;
        if ( *(_WORD *)(*(_QWORD *)v392 + 298LL) )
        {
          v398 = 0LL;
          v399 = (int *)(*(_QWORD *)(v397 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v399 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v398;
            v399 += 4;
            if ( v398 >= *(unsigned __int16 *)(*(_QWORD *)v392 + 298LL) )
              goto LABEL_269;
          }
          v400 = v397 + 16LL * *v399 + 312;
        }
        else
        {
LABEL_269:
          v400 = sub_AAFEF8(v392, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v401 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v400)(v392, *(_QWORD *)(v400 + 8));
        if ( !v481 )
          sub_B170D4();
        v402 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v481,
                 v401,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v402,
          MasterData_WarQuestSelectionMaster,
          *v380,
          v385,
          *v94,
          1,
          v274,
          v465);
      }
      *((_DWORD *)&v482[1].fields.list + v483++) = 1590;
      v403 = *(_QWORD *)v392;
      if ( *(_WORD *)(*(_QWORD *)v392 + 298LL) )
      {
        v404 = 0LL;
        v405 = (int *)(*(_QWORD *)(v403 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v405 - 1) != System_IDisposable_TypeInfo )
        {
          ++v404;
          v405 += 4;
          if ( v404 >= *(unsigned __int16 *)(*(_QWORD *)v392 + 298LL) )
            goto LABEL_278;
        }
        v406 = v403 + 16LL * *v405 + 312;
      }
      else
      {
LABEL_278:
        v406 = sub_AAFEF8(v392, System_IDisposable_TypeInfo, 0LL);
      }
      isPrevAttackMe = (*(__int64 (__fastcall **)(__int64, _QWORD))v406)(v392, *(_QWORD *)(v406 + 8));
      if ( v483 && *((_DWORD *)&v482[0].fields.current + v483 + 1) == 1590 )
        --v483;
      v379 = v476;
      v380 = v480;
      ++v382;
      LODWORD(v381) = *(_DWORD *)(v476 + 24);
    }
    while ( (__int64)v382 < (int)v381 );
    if ( (int)v381 >= 1 )
    {
      v407 = 0LL;
      while ( v407 < (unsigned int)v381 )
      {
        v408 = *(unsigned __int8 *)(v379 + v407 + 32);
        isPrevAttackMe = sub_B17014(BuffList_ACTION___TypeInfo, 2LL, v238);
        if ( !isPrevAttackMe )
          goto LABEL_397;
        v409 = *(_DWORD *)(isPrevAttackMe + 24);
        v410 = (BuffList_ACTION_array *)isPrevAttackMe;
        if ( v408 )
        {
          if ( !v409 )
            goto LABEL_398;
          *(_DWORD *)(isPrevAttackMe + 32) = 119;
          if ( v409 == 1 )
            goto LABEL_398;
          v411 = 121;
        }
        else
        {
          if ( !v409 )
            goto LABEL_398;
          *(_DWORD *)(isPrevAttackMe + 32) = 57;
          if ( v409 == 1 )
            goto LABEL_398;
          v411 = 80;
        }
        *(_DWORD *)(isPrevAttackMe + 36) = v411;
        v412 = System_Func_bool__object___Invoke(
                 v475,
                 v408 != 0,
                 (const MethodInfo_2B63468 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !v412 )
          goto LABEL_397;
        v413 = v412->klass;
        v414 = v412;
        if ( *(_WORD *)&v412->klass->_2.bitflags1 )
        {
          v415 = 0LL;
          v416 = &v413->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v416 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v415;
            v416 += 4;
            if ( v415 >= *(unsigned __int16 *)&v412->klass->_2.bitflags1 )
              goto LABEL_304;
          }
          v417 = (__int64)&v413->vtable[*v416].method;
        }
        else
        {
LABEL_304:
          v417 = sub_AAFEF8(v412, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v418 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v417)(v414, *(_QWORD *)(v417 + 8));
        if ( !v418 )
          sub_B170D4();
        while ( 1 )
        {
          v425 = *(_QWORD *)v418;
          if ( *(_WORD *)(*(_QWORD *)v418 + 298LL) )
          {
            v426 = 0LL;
            v427 = (int *)(*(_QWORD *)(v425 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v427 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v426;
              v427 += 4;
              if ( v426 >= *(unsigned __int16 *)(*(_QWORD *)v418 + 298LL) )
                goto LABEL_317;
            }
            v428 = v425 + 16LL * *v427 + 312;
          }
          else
          {
LABEL_317:
            v428 = sub_AAFEF8(v418, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v428)(v418, *(_QWORD *)(v428 + 8)) & 1) == 0 )
            break;
          v429 = *(_QWORD *)v418;
          if ( *(_WORD *)(*(_QWORD *)v418 + 298LL) )
          {
            v430 = 0LL;
            v431 = (int *)(*(_QWORD *)(v429 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v431 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v430;
              v431 += 4;
              if ( v430 >= *(unsigned __int16 *)(*(_QWORD *)v418 + 298LL) )
                goto LABEL_324;
            }
            v432 = v429 + 16LL * *v431 + 312;
          }
          else
          {
LABEL_324:
            v432 = sub_AAFEF8(v418, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v433 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v432)(v418, *(_QWORD *)(v432 + 8));
          if ( !*v479 )
            sub_B170D4();
          v422 = BattleServantData__getAttackSideEffectBuffList_22759320(*v479, v410, *v480, v433, 0LL);
          v434 = v422;
          if ( !v422 )
            sub_B170D4();
          v419 = *(_QWORD *)&v422->max_length;
          if ( (int)v419 >= 1 )
          {
            v420 = 0LL;
            do
            {
              if ( v420 >= (unsigned int)v419 )
              {
                sub_B17100(v422, v423, v424);
                sub_B170A0();
              }
              v421 = this->fields.logicfunction;
              if ( !v421 )
                sub_B170D4();
              BattleLogicFunction__setAttackSideEffectBuff(
                v421,
                MasterData_WarQuestSelectionMaster,
                *v94,
                v434->m_Items[v420],
                v274,
                1,
                0LL);
              LODWORD(v419) = v434->max_length;
              ++v420;
            }
            while ( (__int64)v420 < (int)v419 );
          }
        }
        v239 = v479;
        *((_DWORD *)&v482[1].fields.list + v483++) = 1789;
        v435 = *(_QWORD *)v418;
        if ( *(_WORD *)(*(_QWORD *)v418 + 298LL) )
        {
          v436 = 0LL;
          v437 = (int *)(*(_QWORD *)(v435 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v437 - 1) != System_IDisposable_TypeInfo )
          {
            ++v436;
            v437 += 4;
            if ( v436 >= *(unsigned __int16 *)(*(_QWORD *)v418 + 298LL) )
              goto LABEL_334;
          }
          v438 = v435 + 16LL * *v437 + 312;
        }
        else
        {
LABEL_334:
          v438 = sub_AAFEF8(v418, System_IDisposable_TypeInfo, 0LL);
        }
        isPrevAttackMe = (*(__int64 (__fastcall **)(__int64, _QWORD))v438)(v418, *(_QWORD *)(v438 + 8));
        if ( v483 && *((_DWORD *)&v482[0].fields.current + v483 + 1) == 1789 )
          --v483;
        v379 = v476;
        ++v407;
        LODWORD(v381) = *(_DWORD *)(v476 + 24);
        if ( (__int64)v407 >= (int)v381 )
          goto LABEL_341;
      }
      goto LABEL_398;
    }
  }
LABEL_341:
  v439 = System_Func_bool__object___Invoke(
           v475,
           0,
           (const MethodInfo_2B63468 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !v439 )
    goto LABEL_397;
  v440 = v439->klass;
  v441 = v439;
  if ( *(_WORD *)&v439->klass->_2.bitflags1 )
  {
    v442 = 0LL;
    v443 = &v440->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v443 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v442;
      v443 += 4;
      if ( v442 >= *(unsigned __int16 *)&v439->klass->_2.bitflags1 )
        goto LABEL_346;
    }
    v444 = (__int64)&v440->vtable[*v443].method;
  }
  else
  {
LABEL_346:
    v444 = sub_AAFEF8(v439, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v445 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v444)(v441, *(_QWORD *)(v444 + 8));
  if ( !v445 )
    sub_B170D4();
  while ( 1 )
  {
    v446 = *(_QWORD *)v445;
    if ( *(_WORD *)(*(_QWORD *)v445 + 298LL) )
    {
      v447 = 0LL;
      v448 = (int *)(*(_QWORD *)(v446 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v448 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v447;
        v448 += 4;
        if ( v447 >= *(unsigned __int16 *)(*(_QWORD *)v445 + 298LL) )
          goto LABEL_353;
      }
      v449 = v446 + 16LL * *v448 + 312;
    }
    else
    {
LABEL_353:
      v449 = sub_AAFEF8(v445, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v449)(v445, *(_QWORD *)(v449 + 8)) & 1) == 0 )
      break;
    v450 = *(_QWORD *)v445;
    if ( *(_WORD *)(*(_QWORD *)v445 + 298LL) )
    {
      v451 = 0LL;
      v452 = (int *)(*(_QWORD *)(v450 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v452 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v451;
        v452 += 4;
        if ( v451 >= *(unsigned __int16 *)(*(_QWORD *)v445 + 298LL) )
          goto LABEL_360;
      }
      v453 = v450 + 16LL * *v452 + 312;
    }
    else
    {
LABEL_360:
      v453 = sub_AAFEF8(v445, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v454 = (*(__int64 (__fastcall **)(__int64, _QWORD))v453)(v445, *(_QWORD *)(v453 + 8));
    if ( !*v239 )
      sub_B170D4();
    if ( !v454 )
      sub_B170D4();
    if ( !this->fields.logic )
      sub_B170D4();
    BattleLogic__setDamageSideEffect(
      this->fields.logic,
      *v94,
      (*v239)->fields.uniqueId,
      *(_DWORD *)(v454 + 24),
      *v480,
      0LL);
  }
  *((_DWORD *)&v482[1].fields.list + v483++) = 1897;
  v455 = *(_QWORD *)v445;
  if ( *(_WORD *)(*(_QWORD *)v445 + 298LL) )
  {
    v456 = 0LL;
    v457 = (int *)(*(_QWORD *)(v455 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v457 - 1) != System_IDisposable_TypeInfo )
    {
      ++v456;
      v457 += 4;
      if ( v456 >= *(unsigned __int16 *)(*(_QWORD *)v445 + 298LL) )
        goto LABEL_371;
    }
    v458 = v455 + 16LL * *v457 + 312;
  }
  else
  {
LABEL_371:
    v458 = sub_AAFEF8(v445, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v458)(v445, *(_QWORD *)(v458 + 8));
  if ( v483 && *((_DWORD *)&v482[0].fields.current + v483 + 1) == 1897 )
    --v483;
  if ( !*v467 )
    goto LABEL_397;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v482,
    *v467,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v484 = v482[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v484,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    current = v484.fields.current;
    if ( !v484.fields.current )
      sub_B170D4();
    v460 = v484.fields.current[46].klass;
    if ( !v460 )
      sub_B170D4();
    LOBYTE(v460->_1.methods) = 0;
    if ( v468->fields.isCanCounterTask )
    {
      if ( !*v239 )
        sub_B170D4();
      v461 = this->fields.data;
      if ( !v461 )
        sub_B170D4();
      BattleData__SetWasAttackTargetId(v461, (*v239)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  *((_DWORD *)&v482[1].fields.list + v483++) = 1996;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v484,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( v483 && *((_DWORD *)&v482[0].fields.current + v483 + 1) == 1996 )
    --v483;
  if ( !*v469 )
    goto LABEL_397;
  System_Func_string__string___Invoke(
    *v469,
    (System_String_o *)optSvt,
    (const MethodInfo_2B6C2A0 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  if ( !*v94
    || ((*v94)->fields.isForcedSpeedOne = v468->fields.isForcedSpeedOne, !*v94)
    || ((*v94)->fields.isAllAttack = AttackType == 2, !*v239)
    || (v462 = this->fields.data) == 0LL
    || (BattleData__setCommandAttack(v462, (*v239)->fields.uniqueId, v470, 0LL), (v463 = this->fields.logic) == 0LL)
    || (BattleLogic__checkUsedBuff(v463, 0LL), (v464 = this->fields.logic) == 0LL) )
  {
LABEL_397:
    sub_B170D4();
  }
  BattleLogic__updateConditionsBuffAll(v464, 0LL);
  return *v94;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ProgressIntervalTurnActionData_o *v6; // x20
  BattleData_o *data; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  struct BattleData_o *v9; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  BattleLogic_o *logic; // x0

  if ( (byte_40FC435 & 1) == 0 )
  {
    sub_B16FFC(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_40FC435 = 1;
  }
  v6 = (ProgressIntervalTurnActionData_o *)sub_B170CC(ProgressIntervalTurnActionData_TypeInfo, task, method, v3, v4);
  ProgressIntervalTurnActionData___ctor(v6, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v6 )
    goto LABEL_11;
  ProgressIntervalTurnActionData__AddTurnProgressServants(v6, FieldPlayerServantList, 0LL);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_11;
  if ( !v9->fields.leaderDown || !v9->fields.endbattleFlg )
  {
    FieldEnemyServantList = BattleData__getFieldEnemyServantList(v9, 0, 0LL);
    ProgressIntervalTurnActionData__AddTurnProgressServants(v6, FieldEnemyServantList, 0LL);
  }
  logic = this->fields.logic;
  if ( !logic )
LABEL_11:
    sub_B170D4();
  return BattleLogic__PrevReturnCreateActionData(logic, 0LL, (BattleActionData_o *)v6, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  struct BattleData_o *v9; // x8
  BattleServantData_o *v10; // x19
  __int64 v11; // x22
  int32_t v12; // w0
  int32_t v13; // w22
  System_Int32_array **v14; // x21
  UnityEngine_Object_o *PartsActor; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  BattleServantData_o *monitor; // x0
  struct BattleData_o *v21; // x8
  BattleData_o *v22; // x0
  UnityEngine_Object_o *v23; // x22
  BattleServantData_o *v24; // x0
  struct BattleData_o *v25; // x8
  int32_t m_CachedPtr; // w9
  __int64 *v27; // x10
  BattleData_o *v28; // x0
  UnityEngine_Object_o *v29; // x22
  BattleServantData_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40FC42B & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_6350/*"FOCUS_UNDER"*/, v4);
    sub_B16FFC(&StringLiteral_6348/*"FOCUS_CENTER"*/, v5);
    sub_B16FFC(&StringLiteral_6352/*"FOCUS_UP"*/, v6);
    byte_40FC42B = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData(data, data->fields.justDeadTargetId, 0LL);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_45;
  v10 = ServantData;
  v9->fields.justDeadTargetId = -1;
  if ( !ServantData )
    return 0LL;
  if ( BattleServantData__isMultiTargetUp(ServantData, 0LL)
    || (v11 = 0LL, BattleServantData__isMultiTargetUnder(v10, 0LL)) )
  {
    v12 = BattleServantData__getMultiTargetBattleDeadChangePos(v10, 0LL);
    if ( !this->fields.data )
      goto LABEL_45;
    v13 = v12;
    v14 = (System_Int32_array **)StringLiteral_6348/*"FOCUS_CENTER"*/;
    PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, 1, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL) )
    {
      if ( !PartsActor )
        goto LABEL_45;
      monitor = (BattleServantData_o *)PartsActor[17].monitor;
      if ( !monitor )
        goto LABEL_45;
      if ( BattleServantData__isAlive(monitor, 0, 0LL) )
      {
        v21 = this->fields.data;
        if ( !v21 )
          goto LABEL_45;
        v14 = (System_Int32_array **)StringLiteral_6348/*"FOCUS_CENTER"*/;
        v21->fields.globaltargetId = PartsActor[17].fields.m_CachedPtr;
      }
    }
    if ( v13 == 2 )
    {
      v28 = this->fields.data;
      if ( !v28 )
        goto LABEL_45;
      v29 = (UnityEngine_Object_o *)BattleData__GetPartsActor(v28, 2, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
        goto LABEL_42;
      if ( !v29 )
        goto LABEL_45;
      v30 = (BattleServantData_o *)v29[17].monitor;
      if ( !v30 )
        goto LABEL_45;
      if ( !BattleServantData__isAlive(v30, 0, 0LL) )
        goto LABEL_42;
      v25 = this->fields.data;
      if ( !v25 )
        goto LABEL_45;
      m_CachedPtr = v29[17].fields.m_CachedPtr;
      v27 = &StringLiteral_6350/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v13 )
        goto LABEL_42;
      v22 = this->fields.data;
      if ( !v22 )
        goto LABEL_45;
      v23 = (UnityEngine_Object_o *)BattleData__GetPartsActor(v22, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
        goto LABEL_42;
      if ( !v23 )
        goto LABEL_45;
      v24 = (BattleServantData_o *)v23[17].monitor;
      if ( !v24 )
        goto LABEL_45;
      if ( !BattleServantData__isAlive(v24, 0, 0LL) )
        goto LABEL_42;
      v25 = this->fields.data;
      if ( !v25 )
        goto LABEL_45;
      m_CachedPtr = v23[17].fields.m_CachedPtr;
      v27 = &StringLiteral_6352/*"FOCUS_UP"*/;
    }
    v14 = (System_Int32_array **)*v27;
    v25->fields.globaltargetId = m_CachedPtr;
LABEL_42:
    v11 = sub_B170CC(BattleActionData_TypeInfo, v16, v17, v18, v19);
    BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 32) = v10->fields.uniqueId;
      *(_DWORD *)(v11 + 36) = v10->fields.uniqueId;
      BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
      *(_QWORD *)(v11 + 64) = v14;
      sub_B16F98((BattleServantConfConponent_o *)(v11 + 64), v14, v31, v32, v33, v34, v35, v36);
      return (BattleActionData_o *)v11;
    }
LABEL_45:
    sub_B170D4();
  }
  return (BattleActionData_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal__GetTargetCommandCodeBuffList(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *passiveBuffDict,
        BattleBuffData_o *actSvtBuffData,
        int32_t type,
        BattleCommandData_o *command,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_Generic_IEnumerable_T__o *CommandCardBuffArray; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BattleLogicNomal___c_c *v24; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x20
  Il2CppObject *v27; // x21
  struct BattleLogicNomal___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_BattleBuffData_BuffData__o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC423 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, passiveBuffDict);
    sub_B16FFC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B16FFC(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__, v16);
    sub_B16FFC(&BattleLogicNomal___c_TypeInfo, v17);
    byte_40FC423 = 1;
  }
  value = 0LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  passiveBuffDict,
                                                                                                  actSvtBuffData,
                                                                                                  *(_QWORD *)&type,
                                                                                                  command);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData____TryGetValue(
         passiveBuffDict,
         type,
         &value,
         (const MethodInfo_2E01978 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__) )
  {
    if ( !v18 )
      goto LABEL_18;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetCommandCardBuffArray(
                                                                                actSvtBuffData,
                                                                                command,
                                                                                type,
                                                                                0LL),
        !v18) )
  {
LABEL_18:
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    CommandCardBuffArray,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v24 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v24 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                           v20,
                                                                           v21,
                                                                           v22,
                                                                           v23);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v27,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v28 = BattleLogicNomal___c_TypeInfo->static_fields;
    v28->__9__18_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__18_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18;
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  int32_t v6; // w0
  UnityEngine_Object_o *PartsActor; // x20
  BattleServantData_o *monitor; // x0
  struct BattleData_o *v9; // x8

  if ( (byte_40FC42D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC42D = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  if ( data->fields.isMultiTargetBattle )
  {
    justDeadTargetId = data->fields.justDeadTargetId;
    if ( justDeadTargetId != -1 )
    {
      ServantData = BattleData__getServantData(data, justDeadTargetId, 0LL);
      if ( ServantData )
      {
        v6 = BattleServantData__getMultiTargetBattleDeadChangePos(ServantData, 0LL);
        if ( !this->fields.data )
          goto LABEL_18;
        PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, v6, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL) )
        {
          if ( PartsActor )
          {
            monitor = (BattleServantData_o *)PartsActor[17].monitor;
            if ( monitor )
            {
              if ( !BattleServantData__isAlive(monitor, 0, 0LL) )
                return;
              v9 = this->fields.data;
              if ( v9 )
              {
                v9->fields.globaltargetId = PartsActor[17].fields.m_CachedPtr;
                return;
              }
            }
          }
LABEL_18:
          sub_B170D4();
        }
      }
    }
  }
}


void __fastcall BattleLogicNomal__UpdateEndTurnBuff(
        BattleLogicNomal_o *this,
        System_Int32_array *prevFieldIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x20
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_TSource__o *QuestIndividualities; // x21
  _QWORD **v8; // x22
  __int64 v9; // x21
  __int16 v10; // w8
  __int64 v11; // x21
  __int64 v12; // x21
  __int64 v13; // x21
  _QWORD **v14; // x22
  __int64 v15; // x20
  __int16 v16; // w8
  __int64 v17; // x20
  __int64 v18; // x20
  __int64 v19; // x20
  BattleLogic_o *logic; // x0
  struct BattleData_o *v21; // x8
  BattlePerformance_o *perf; // x0

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_40FC42E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_B16FFC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_40FC42E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_36;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0LL);
  if ( QuestIndividualities )
  {
    if ( v3 )
      goto LABEL_31;
    goto LABEL_19;
  }
  v8 = (_QWORD **)Method_System_Array_Empty_int___;
  v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v10 = *(_WORD *)(v9 + 306);
  if ( (v10 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AAFCFC(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AAFCFC(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(*v8[6]);
  QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v13 + 184);
  if ( !v3 )
  {
LABEL_19:
    v14 = (_QWORD **)Method_System_Array_Empty_int___;
    v15 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v16 = *(_WORD *)(v15 + 306);
    if ( (v16 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v16 = *(_WORD *)(v15 + 306);
    }
    if ( (v16 & 0x400) != 0 )
    {
      v17 = *v14[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*v14[6]);
      if ( !*(_DWORD *)(v17 + 224) )
      {
        v18 = *v14[6];
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AAFCFC(*v14[6]);
        j_il2cpp_runtime_class_init_0(v18);
      }
    }
    v19 = *v14[6];
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AAFCFC(*v14[6]);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v19 + 184);
  }
LABEL_31:
  if ( System_Linq_Enumerable__SequenceEqual_int_(
         QuestIndividualities,
         v3,
         (const MethodInfo_19C21B0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    return;
  }
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__updateConditionsBuffAll(logic, 0LL), (v21 = this->fields.data) == 0LL)
    || (perf = v21->fields.perf) == 0LL )
  {
LABEL_36:
    sub_B170D4();
  }
  BattlePerformance__updateStatus(perf, 0LL);
}


bool __fastcall BattleLogicNomal__checkOverKill(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v5; // x19
  BattleData_o *v6; // x0
  BattleCommandData_o *v7; // x0
  BattleCommandData_o *v8; // x20

  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  SelectCommand = BattleData__getSelectCommand(data, this->fields.commandIndex, 0LL);
  if ( !SelectCommand )
    goto LABEL_12;
  v5 = SelectCommand;
  if ( BattleCommandData__isTreasureDvc(SelectCommand, 0LL) || BattleCommandData__IsAllAttack(v5, 0LL) )
    return 0;
  v6 = this->fields.data;
  if ( !v6 )
LABEL_12:
    sub_B170D4();
  v7 = BattleData__getSelectCommand(v6, this->fields.commandIndex + 1, 0LL);
  if ( !v7 )
    return 1;
  v8 = v7;
  if ( BattleCommandData__isTreasureDvc(v7, 0LL) || BattleCommandData__IsAllAttack(v8, 0LL) )
    return 0;
  return v5->fields.uniqueId == v8->fields.uniqueId;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__checkReflectionTask(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  WebViewManager_o *Instance; // x0
  BattleData_o *v17; // x0
  __int64 FieldEnemyServantList; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  BattleData_o *v21; // x0
  __int64 v22; // x21
  int v23; // w8
  unsigned int v24; // w27
  BattleServantData_o *v25; // x22
  __int64 v26; // x3
  __int64 v27; // x4
  int max_length; // w8
  BattleBuffData_BuffData_array *v29; // x23
  unsigned int v30; // w28
  BattleBuffData_BuffData_o *v31; // x24
  BattleSkillInfoData_o *v32; // x25
  struct System_Int32_array *vals; // x8
  __int64 v34; // x3
  __int64 v35; // x4
  struct System_Int32_array *v36; // x8
  __int64 v37; // x24
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  BattleLogic_o *logic; // x25
  __int64 v46; // x2
  __int64 v47; // x0
  __int64 v48; // x26
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  BattleBuffData_o *buffData; // x0
  BattleLogic_o *v55; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FC432 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v7);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FC432 = 1;
  }
  isFirstAdd = 0;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( ltype == 40 )
  {
    v21 = this->fields.data;
    if ( !v21 )
      goto LABEL_40;
    FieldEnemyServantList = (__int64)BattleData__getFieldEnemyServantList(v21, 1, 0LL);
  }
  else
  {
    if ( ltype != 41 )
      goto LABEL_40;
    v17 = this->fields.data;
    if ( !v17 )
      goto LABEL_40;
    FieldEnemyServantList = (__int64)BattleData__getFieldPlayerServantList(v17, 0LL);
  }
  v22 = FieldEnemyServantList;
  if ( !FieldEnemyServantList )
    goto LABEL_40;
  v23 = *(_DWORD *)(FieldEnemyServantList + 24);
  if ( v23 >= 1 )
  {
    v24 = 0;
    do
    {
      if ( v24 >= v23 )
        goto LABEL_41;
      v25 = *(BattleServantData_o **)(v22 + 8LL * (int)v24 + 32);
      if ( !v25 )
        goto LABEL_40;
      if ( !v25->fields.status )
      {
        FieldEnemyServantList = BattleServantData__isAlive(v25, 0, 0LL);
        if ( (FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = (__int64)BattleServantData__getReflectionEffect(v25, 0LL);
          isFirstAdd = 1;
          if ( !FieldEnemyServantList )
            goto LABEL_40;
          max_length = *(_DWORD *)(FieldEnemyServantList + 24);
          v29 = (BattleBuffData_BuffData_array *)FieldEnemyServantList;
          if ( max_length >= 1 )
          {
            v30 = 0;
            while ( v30 < max_length )
            {
              v31 = v29->m_Items[v30];
              v32 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v19, v20, v26, v27);
              BattleSkillInfoData___ctor(v32, 0LL);
              if ( !v32 )
                goto LABEL_40;
              v32->fields.svtUniqueId = v25->fields.uniqueId;
              if ( !v31 )
                goto LABEL_40;
              vals = v31->fields.vals;
              if ( !vals )
                goto LABEL_40;
              if ( !vals->max_length )
                break;
              FieldEnemyServantList = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v32->klass->vtable._4_set_skillId.method)(
                                        v32,
                                        (unsigned int)vals->m_Items[1],
                                        v32->klass->vtable._5_get_skillId.methodPtr);
              v36 = v31->fields.vals;
              if ( !v36 )
                goto LABEL_40;
              if ( v36->max_length <= 1 )
                break;
              v32->fields.skilllv = v36->m_Items[2];
              v37 = sub_B170CC(BattleLogicTask_TypeInfo, v19, v20, v34, v35);
              BattleLogicTask___ctor((BattleLogicTask_o *)v37, v38);
              if ( !v37 )
                goto LABEL_40;
              *(_QWORD *)(v37 + 72) = v32;
              *(_DWORD *)(v37 + 48) = 25;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v37 + 72),
                (System_Int32_array **)v32,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
              *(_BYTE *)(v37 + 80) = 0;
              logic = this->fields.logic;
              v47 = sub_B17014(BattleLogicTask___TypeInfo, 1LL, v46);
              if ( !v47 )
                goto LABEL_40;
              v48 = v47;
              FieldEnemyServantList = sub_B170BC(v37, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
              if ( !FieldEnemyServantList )
              {
                sub_B170F4(0LL);
                sub_B170A0();
              }
              if ( !*(_DWORD *)(v48 + 24) )
                break;
              *(_QWORD *)(v48 + 32) = v37;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v48 + 32),
                (System_Int32_array **)v37,
                v20,
                v49,
                v50,
                v51,
                v52,
                v53);
              if ( !logic )
                goto LABEL_40;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v25,
                v29,
                (BattleLogicTask_array *)v48,
                0LL);
              if ( !v15 )
                goto LABEL_40;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v15,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
              max_length = v29->max_length;
              if ( (int)++v30 >= max_length )
                goto LABEL_34;
            }
LABEL_41:
            sub_B17100(FieldEnemyServantList, v19, v20);
            sub_B170A0();
          }
LABEL_34:
          buffData = v25->fields.buffData;
          if ( !buffData )
            goto LABEL_40;
          FieldEnemyServantList = (__int64)BattleBuffData__usedProgressing(buffData, 0LL);
        }
      }
      v23 = *(_DWORD *)(v22 + 24);
    }
    while ( (int)++v24 < v23 );
  }
  v55 = this->fields.logic;
  if ( !v55
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          v55,
          (System_Collections_Generic_List_BattleLogicTask__o *)v15,
          1,
          0LL),
        !v15) )
  {
LABEL_40:
    sub_B170D4();
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal__commandCodeBuffProcess(
        BattleLogicNomal_o *this,
        BattleBuffData_CheckInvokeBuff_o *checkInvokeBuff,
        SkillLvMaster_o *skillLvMst,
        BattleCommandData_o *command,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *commandCodeBuffList,
        BattleActionData_o *actionData,
        bool isCommandAfter,
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int v19; // w19
  int v20; // w9
  BattleBuffData_BuffData_o *current; // x27
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x26
  BattleLogicFunction_o *logicfunction; // x27
  int v29; // w23
  BattleLogicFunction_FunctionArgument_o *argument; // x19
  BattleLogicNomal_o *v31; // x21
  BattleActionData_o *v32; // x25
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x20
  BattleActionData_o *v35; // x28
  DataVals_array *DataValsList; // x0
  BattleLogicFunction_o *v37; // x0
  SkillLvMaster_o *v38; // [xsp+38h] [xbp-98h]
  int32_t type; // [xsp+40h] [xbp-90h]
  _BOOL4 v40; // [xsp+44h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+60h] [xbp-70h] BYREF

  v40 = isCommandAfter;
  if ( (byte_40FC436 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18);
    byte_40FC436 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !commandCodeBuffList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)commandCodeBuffList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v19 = arg == 0LL || !v40;
  if ( v40 )
    v20 = 1;
  else
    v20 = 3;
  type = v20;
  v42 = v41;
  v38 = skillLvMst;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !command )
      sub_B170D4();
    current = (BattleBuffData_BuffData_o *)v42.fields.current;
    if ( !BattleCommandData__IsEnableCommandCode(command, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      if ( !BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL)
        && !BattleCommandData__IsEnableCommandAssist(command, 0LL) )
      {
        continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_B170D4();
    v22 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v22 & 1) != 0 )
    {
      if ( (v19 & 1) != 0 )
      {
        if ( !current )
          sub_B170D4();
        vals = current->fields.vals;
        if ( !vals )
          sub_B170D4();
        max_length = vals->max_length;
        if ( !max_length )
        {
          sub_B17100(v22, v23, v24);
          sub_B170A0();
        }
        if ( max_length == 1 )
        {
          sub_B17100(v22, v23, v24);
          sub_B170A0();
        }
        if ( !skillLvMst )
          sub_B170D4();
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        if ( Entity )
        {
          if ( !arg )
            sub_B170D4();
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_B170D4();
          logicfunction = this->fields.logicfunction;
          v29 = v19;
          argument = (BattleLogicFunction_FunctionArgument_o *)arg;
          v31 = this;
          v32 = actionData;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = Entity->fields.funcId;
          v35 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(Entity, 0LL);
          if ( !logicfunction )
            sub_B170D4();
          BattleLogicFunction__procList(
            logicfunction,
            v35,
            funcId,
            DataValsList,
            0,
            0,
            v40,
            0,
            0,
            0,
            0,
            argument,
            0,
            0LL);
          arg = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)argument;
          v19 = v29;
          actionData = v32;
          this = v31;
          skillLvMst = v38;
        }
      }
      else
      {
        v37 = this->fields.logicfunction;
        if ( !v37 )
          sub_B170D4();
        BattleLogicFunction__setAttackSideEffectBuff(v37, skillLvMst, actionData, current, arg, 1, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1

  if ( (byte_40FC425 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B16FFC(&StringLiteral_8760/*"MOTION_BACK"*/, v6);
    byte_40FC425 = 1;
  }
  v7 = sub_B170CC(BattleActionData_TypeInfo, *(_QWORD *)&uniqueId, method, v3, v4);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_DWORD *)(v7 + 32) = uniqueId;
  v14 = (System_Int32_array **)StringLiteral_8760/*"MOTION_BACK"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8760/*"MOTION_BACK"*/;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 64), v14, v8, v9, v10, v11, v12, v13);
  return (BattleActionData_o *)v7;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x8
  BattleServantData_array *v9; // x20
  unsigned __int64 v10; // x22
  BattleServantData_o **m_Items; // x23
  struct BattleData_o *v12; // x9
  struct BaseBattleEvent_o *battleEvent; // x0
  BattleServantData_o *v14; // x0
  int32_t v15; // w21
  BattleServantData_o *v16; // x0
  BattleServantData_o *v17; // x0
  BattleServantData_o *v18; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 0, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_21;
  v8 = *(_QWORD *)&FieldEnemyServantList->max_length;
  v9 = FieldEnemyServantList;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    m_Items = FieldEnemyServantList->m_Items;
    while ( 1 )
    {
      v12 = this->fields.data;
      if ( !v12 )
        break;
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_22;
      battleEvent = v12->fields.battleEvent;
      if ( !battleEvent )
        break;
      FieldEnemyServantList = (BattleServantData_array *)((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BattleServantData_o *, Il2CppMethodPointer))battleEvent->klass->vtable._35_IsPossibleAddBuffParam.method)(
                                                           battleEvent,
                                                           m_Items[v10],
                                                           battleEvent->klass->vtable._36_GetWarBoardSquareIndividualityList.methodPtr);
      if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
      {
        if ( v10 >= v9->max_length )
          goto LABEL_22;
        v14 = m_Items[v10];
        if ( !v14 )
          break;
        FieldEnemyServantList = (BattleServantData_array *)BattleServantData__getMaxHp(v14, 0LL);
        if ( v10 >= v9->max_length )
          goto LABEL_22;
        v15 = (int)FieldEnemyServantList;
        v16 = m_Items[v10];
        if ( !v16 )
          break;
        BattleServantData__turnBuffProgressingIncrease(v16, 0LL);
        if ( v10 >= v9->max_length )
          goto LABEL_22;
        v17 = m_Items[v10];
        if ( !v17 )
          break;
        FieldEnemyServantList = (BattleServantData_array *)BattleServantData__checkUpdateUpdownHp(v17, v15, 1, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          if ( v10 >= v9->max_length )
          {
LABEL_22:
            sub_B17100(FieldEnemyServantList, v6, v7);
            sub_B170A0();
          }
          v18 = m_Items[v10];
          if ( !v18 )
            break;
          BattleServantData__updateHp(v18, 0LL);
        }
      }
      LODWORD(v8) = v9->max_length;
      if ( (__int64)++v10 >= (int)v8 )
        return 0LL;
    }
LABEL_21:
    sub_B170D4();
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleData_o *data; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct BattleData_o *v14; // x8
  __int64 v15; // x10
  BattleServantData_array *v16; // x20
  _BOOL4 v17; // w9
  unsigned __int64 v18; // x22
  BattleServantData_o **m_Items; // x23
  struct BaseBattleEvent_o *battleEvent; // x0
  BattleServantData_o *v21; // x0
  int32_t v22; // w21
  BattleServantData_o *v23; // x0
  BattleServantData_o *v24; // x0
  BattleServantData_o *v25; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x19
  BattleLogicNomal___c_c *v27; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x20
  Il2CppObject *v30; // x21
  struct BattleLogicNomal___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40FC431 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B16FFC(&System_Action_AiNpcBattleServantData__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v5);
    sub_B16FFC(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__, v6);
    sub_B16FFC(&BattleLogicNomal___c_TypeInfo, v7);
    byte_40FC431 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !FieldPlayerServantList )
    goto LABEL_33;
  v14 = this->fields.data;
  v15 = *(_QWORD *)&FieldPlayerServantList->max_length;
  v16 = FieldPlayerServantList;
  v17 = v14 == 0LL;
  if ( (int)v15 >= 1 )
  {
    v18 = 0LL;
    m_Items = FieldPlayerServantList->m_Items;
    while ( !v17 )
    {
      if ( v18 >= (unsigned int)v15 )
        goto LABEL_34;
      battleEvent = v14->fields.battleEvent;
      if ( !battleEvent )
        break;
      FieldPlayerServantList = (BattleServantData_array *)((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BattleServantData_o *, Il2CppMethodPointer))battleEvent->klass->vtable._35_IsPossibleAddBuffParam.method)(
                                                            battleEvent,
                                                            m_Items[v18],
                                                            battleEvent->klass->vtable._36_GetWarBoardSquareIndividualityList.methodPtr);
      if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
      {
        if ( v18 >= v16->max_length )
          goto LABEL_34;
        v21 = m_Items[v18];
        if ( !v21 )
          break;
        FieldPlayerServantList = (BattleServantData_array *)BattleServantData__getMaxHp(v21, 0LL);
        if ( v18 >= v16->max_length )
          goto LABEL_34;
        v22 = (int)FieldPlayerServantList;
        v23 = m_Items[v18];
        if ( !v23 )
          break;
        BattleServantData__turnBuffProgressingIncrease(v23, 0LL);
        if ( v18 >= v16->max_length )
          goto LABEL_34;
        v24 = m_Items[v18];
        if ( !v24 )
          break;
        FieldPlayerServantList = (BattleServantData_array *)BattleServantData__checkUpdateUpdownHp(v24, v22, 1, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          if ( v18 >= v16->max_length )
          {
LABEL_34:
            sub_B17100(FieldPlayerServantList, v10, v11);
            sub_B170A0();
          }
          v25 = m_Items[v18];
          if ( !v25 )
            break;
          BattleServantData__updateHp(v25, 0LL);
        }
      }
      v14 = this->fields.data;
      LODWORD(v15) = v16->max_length;
      ++v18;
      v17 = v14 == 0LL;
      if ( (__int64)v18 >= (int)v15 )
        goto LABEL_22;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_22:
  if ( v17 )
    goto LABEL_33;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v14->fields.aiNpcDataList;
  v27 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v27 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_AiNpcBattleServantData__TypeInfo,
                                                                                      v10,
                                                                                      v11,
                                                                                      v12,
                                                                                      v13);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__36_0,
      v30,
      Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_AiNpcBattleServantData___ctor__);
    v31 = BattleLogicNomal___c_TypeInfo->static_fields;
    v31->__9__36_0 = (struct System_Action_AiNpcBattleServantData__o *)_9__36_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)_9__36_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
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
  __int64 v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Int32_array *targetIdlist; // x23
  __int64 v19; // x21
  __int64 v20; // x2
  BattleServantData_o *isBUSTER; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t uniqueId; // w8
  System_Int32_array **v29; // x1
  BattleServantConfConponent_o *v30; // x0
  __int64 v31; // x2
  System_Array_o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 *v39; // x8
  System_Int32_array **v40; // x1
  __int64 v41; // x8
  char v42; // w21
  unsigned __int64 v43; // x22
  BattleData_o *data; // x0
  __int64 v46; // x2
  System_Array_o *v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_RuntimeFieldHandle_o v54; // 0:w1.4
  System_RuntimeFieldHandle_o v55; // 0:w1.4

  if ( (byte_40FC426 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, task);
    sub_B16FFC(&FunctionEntity_TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v9);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v10);
    sub_B16FFC(&StringLiteral_6331/*"FIELD_PLAYER"*/, v11);
    sub_B16FFC(&StringLiteral_6330/*"FIELD_ENEMY"*/, v12);
    byte_40FC426 = 1;
  }
  v13 = sub_B170CC(BattleActionData_TypeInfo, task, method, v3, v4);
  BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v13, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v19 = sub_B170CC(FunctionEntity_TypeInfo, v14, v15, v16, v17);
  FunctionEntity___ctor((FunctionEntity_o *)v19, 0LL);
  if ( BattleCommand__isARTS(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v13, 0LL);
    isBUSTER = (BattleServantData_o *)sub_B17014(int___TypeInfo, 2LL, v20);
    if ( isBUSTER )
    {
      uniqueId = isBUSTER->fields.uniqueId;
      v29 = (System_Int32_array **)isBUSTER;
      if ( !uniqueId || (LODWORD(isBUSTER->fields.userSvtId.fields.currentCryptoKey) = 102, uniqueId == 1) )
      {
LABEL_30:
        sub_B17100(isBUSTER, v29, v22);
        sub_B170A0();
      }
      HIDWORD(isBUSTER->fields.userSvtId.fields.currentCryptoKey) = 1;
      if ( v19 )
      {
        *(_QWORD *)(v19 + 32) = isBUSTER;
        v30 = (BattleServantConfConponent_o *)(v19 + 32);
LABEL_14:
        sub_B16F98(v30, v29, v22, v23, v24, v25, v26, v27);
        v39 = &StringLiteral_6331/*"FIELD_PLAYER"*/;
LABEL_15:
        v40 = (System_Int32_array **)*v39;
        *(_QWORD *)(v13 + 64) = *v39;
        sub_B16F98((BattleServantConfConponent_o *)(v13 + 64), v40, v33, v34, v35, v36, v37, v38);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_B170D4();
  }
  if ( BattleCommand__isQUICK(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v13, 0LL);
    v32 = (System_Array_o *)sub_B17014(int___TypeInfo, 3LL, v31);
    v54.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v32, v54, 0LL);
    if ( !v19 )
      goto LABEL_29;
    *(_QWORD *)(v19 + 32) = v32;
    v30 = (BattleServantConfConponent_o *)(v19 + 32);
    v29 = (System_Int32_array **)v32;
    goto LABEL_14;
  }
  isBUSTER = (BattleServantData_o *)BattleCommand__isBUSTER(task->fields.ordertype, 0LL);
  if ( ((unsigned __int8)isBUSTER & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v13, 0LL);
    v47 = (System_Array_o *)sub_B17014(int___TypeInfo, 3LL, v46);
    v55.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v47, v55, 0LL);
    if ( v19 )
    {
      *(_QWORD *)(v19 + 32) = v47;
      sub_B16F98((BattleServantConfConponent_o *)(v19 + 32), (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
      v39 = &StringLiteral_6330/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v41 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v41 < 1 )
    return 0LL;
  v42 = 0;
  v43 = 0LL;
  do
  {
    if ( v43 >= (unsigned int)v41 )
      goto LABEL_30;
    data = this->fields.data;
    if ( !data )
      goto LABEL_29;
    isBUSTER = BattleData__getServantData(data, targetIdlist->m_Items[v43 + 1], 0LL);
    LODWORD(v41) = targetIdlist->max_length;
    ++v43;
    v42 |= isBUSTER != 0LL;
  }
  while ( (__int64)v43 < (int)v41 );
  if ( (v42 & 1) != 0 )
    return (BattleActionData_o *)v13;
  else
    return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-8h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_B170D4();
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v33; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x21
  BattleLogic_o *logic; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v64; // x20
  WebViewManager_o *v65; // x0
  WarQuestSelectionMaster_o *v66; // x0
  BattleData_o *data; // x8
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Collections_Generic_List_int__o *v79; // x26
  BattleData_o *v80; // x0
  BattleServantData_o *FieldPlayerServantList; // x0
  __int64 v82; // x1
  BattleServantData_o *v83; // x2
  int uniqueId; // w8
  BattleServantData_o *v85; // x28
  unsigned int v86; // w19
  BattleServantData_c **v87; // x22
  BattleServantData_o **v88; // x22
  BattleServantData_o *v89; // t1
  BattleServantData_o *v90; // x20
  int v91; // w8
  unsigned int v92; // w22
  BattleServantData_c **v93; // x27
  BattleServantData_c *v94; // x8
  char *v95; // x27
  BattleServantData_c *v96; // t1
  struct BattleLogic_o *v97; // x8
  struct BattleData_o *v98; // x8
  int32_t v99; // w9
  BattleLogicNomal_o *v100; // x19
  BattleData_o *v101; // x0
  struct BattleData_o *v102; // x8
  BattleServantData_o *v103; // x28
  int v104; // w8
  unsigned int v105; // w19
  BattleServantData_c **v106; // x22
  BattleServantData_o *v107; // x0
  BattleServantData_o **v108; // x22
  BattleServantData_o *v109; // t1
  BattleData_o *v110; // x0
  bool v111; // w3
  BattleData_o *v112; // x0
  char v113; // w20
  BattleBuffData_o *buffData; // x0
  BattleServantData_o *v115; // x20
  struct BaseBattleEvent_o *battleEvent; // x20
  System_Int32_array *v117; // x0
  struct BattleData_o *v118; // x8
  struct BattlePerformance_o *perf; // x9
  BattleDefenceTargetData_o *defenceTargetData; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  struct BattleData_o *v125; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v127; // x23
  BattleLogicNomal_o *v128; // x23
  struct BattleData_o *v129; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  const MethodInfo *v131; // x2
  struct BattleData_o *v132; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v136; // w22
  char v137; // w19
  BattleBuffData_BuffData_o *v138; // x20
  WarEntity_o *v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  BattleSkillInfoData_o *v144; // x26
  __int64 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  struct System_Int32_array *vals; // x8
  __int64 v149; // x0
  __int64 v150; // x1
  __int64 v151; // x2
  struct System_Int32_array *v152; // x8
  BattleData_o *v153; // x0
  BattleServantData_o *ServantData; // x27
  int32_t v155; // w1
  SkillLvEntity_o *v156; // x0
  SkillLvEntity_o *v157; // x28
  BattleData_o *v158; // x0
  BattleLogic_o *v159; // x0
  __int64 v160; // x2
  int32_t v161; // w23
  __int64 v162; // x0
  __int64 v163; // x1
  __int64 v164; // x2
  System_Int32_array *TargetIds; // x20
  BattleLogicNomal_o *v166; // x23
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v169; // x0
  __int64 v170; // x1
  const MethodInfo *v171; // x7
  System_Collections_ICollection_o *v172; // x0
  BattleLogicTask_array *v173; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v175; // x1
  __int64 v176; // x2
  const MethodInfo *v177; // x3
  BattleLogicTask_o *v178; // x0
  BattleLogic_o *v179; // x0
  BattleData_o *v180; // x0
  int32_t v181; // w23
  Il2CppObject *v182; // x28
  BattleServantData_o *isEndAct; // x0
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x3
  __int64 v187; // x4
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v189; // x20
  int v190; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v192; // x26
  __int64 v193; // x3
  __int64 v194; // x4
  BattleSkillInfoData_o *v195; // x25
  __int64 v196; // x0
  __int64 v197; // x1
  __int64 v198; // x2
  struct System_Int32_array *v199; // x8
  __int64 v200; // x0
  __int64 v201; // x1
  __int64 v202; // x2
  struct System_Int32_array *v203; // x8
  BattleData_o *v204; // x0
  BattleServantData_o *v205; // x20
  int32_t v206; // w1
  SkillLvEntity_o *v207; // x0
  SkillLvEntity_o *v208; // x27
  BattleData_o *v209; // x0
  BattleLogic_o *v210; // x0
  __int64 v211; // x2
  int32_t v212; // w27
  __int64 v213; // x0
  __int64 v214; // x1
  __int64 v215; // x2
  System_Int32_array *v216; // x20
  bool v217; // w26
  BattleLogicSkill_o *v218; // x27
  System_Int32_array *v219; // x0
  __int64 v220; // x1
  const MethodInfo *v221; // x7
  BattleLogicTask_array *v222; // x1
  BattleLogic_o *v223; // x0
  int v224; // w19
  BattleLogic_o *v225; // x0
  BattleActionData_o *v226; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v228; // [xsp+0h] [xbp-100h]
  BattleActionData_o *baseActData; // [xsp+10h] [xbp-F0h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v230; // [xsp+18h] [xbp-E8h]
  char v231; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v232; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v233; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v234; // [xsp+38h] [xbp-C8h] BYREF
  int v235[2]; // [xsp+60h] [xbp-A0h]
  int v236; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v237; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_40FC42F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B16FFC(&System_Action_AiNpcBattleServantData__TypeInfo, v6);
    sub_B16FFC(&BattleActionData_TypeInfo, v7);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v8);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__, v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v20);
    sub_B16FFC(&int___TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v27);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__, v30);
    sub_B16FFC(&BattleLogicNomal___c__DisplayClass34_0_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_8769/*"MOTION_ENEMY_TURN_END"*/, v32);
    byte_40FC42F = 1;
  }
  entity = 0LL;
  memset(&v237, 0, sizeof(v237));
  v236 = 0;
  v33 = sub_B170CC(BattleLogicNomal___c__DisplayClass34_0_TypeInfo, task, method, v3, v4);
  BattleLogicNomal___c__DisplayClass34_0___ctor((BattleLogicNomal___c__DisplayClass34_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_215;
  *(_QWORD *)(v33 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 32), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  v44 = sub_B170CC(BattleActionData_TypeInfo, v40, v41, v42, v43);
  BattleActionData___ctor((BattleActionData_o *)v44, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v33 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_215;
  BattleLogic__updateResultServant(logic, 0LL);
  if ( !v44 )
    goto LABEL_215;
  BattleActionData__setStateField((BattleActionData_o *)v44, 0LL);
  baseActData = (BattleActionData_o *)v44;
  v49 = (System_Int32_array **)StringLiteral_8769/*"MOTION_ENEMY_TURN_END"*/;
  *(_QWORD *)(v44 + 64) = StringLiteral_8769/*"MOTION_ENEMY_TURN_END"*/;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 64), v49, v50, v51, v52, v53, v54, v55);
  v230 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                    v56,
                                                                                                    v57,
                                                                                                    v58,
                                                                                                    v59);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v230,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v64 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                   v60,
                                                                                                   v61,
                                                                                                   v62,
                                                                                                   v63);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v64,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v65 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v65 )
    goto LABEL_215;
  v66 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v65,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v232 = (SkillLvMaster_o *)v66;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v33 + 24) = QuestIndividualities;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 24), QuestIndividualities, v69, v70, v71, v72, v73, v74);
  v79 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v75,
                                                    v76,
                                                    v77,
                                                    v78);
  System_Collections_Generic_List_int____ctor(
    v79,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v80 = this->fields.data;
  if ( !v80 )
    goto LABEL_215;
  v228 = v64;
  v233 = this;
  FieldPlayerServantList = (BattleServantData_o *)BattleData__getFieldPlayerServantList(v80, 0LL);
  if ( !FieldPlayerServantList )
    goto LABEL_215;
  uniqueId = FieldPlayerServantList->fields.uniqueId;
  v85 = FieldPlayerServantList;
  if ( uniqueId >= 1 )
  {
    v86 = 0;
    while ( 1 )
    {
      if ( v86 >= uniqueId )
        goto LABEL_220;
      v87 = &v85->klass + (int)v86;
      v89 = (BattleServantData_o *)v87[4];
      v88 = (BattleServantData_o **)(v87 + 4);
      FieldPlayerServantList = v89;
      if ( !v89 )
        goto LABEL_215;
      if ( FieldPlayerServantList->fields.isBuffProgressFlg )
      {
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__turnBuffProgressing(
                                                          FieldPlayerServantList,
                                                          *(_BYTE *)(v33 + 16),
                                                          *(System_Int32_array **)(v33 + 24),
                                                          this->fields.logic,
                                                          0LL,
                                                          0LL);
        if ( v86 >= v85->fields.uniqueId )
          goto LABEL_220;
        v90 = FieldPlayerServantList;
        if ( !*v88 )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isAlive(*v88, 0, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          if ( v86 >= v85->fields.uniqueId )
            goto LABEL_220;
          if ( !*v88 )
            goto LABEL_215;
          FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isLogicResultAlive(*v88, 0LL);
          if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
            goto LABEL_266;
        }
        if ( v86 >= v85->fields.uniqueId )
          goto LABEL_220;
        if ( !*v88 )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isGuts(*v88, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
LABEL_266:
          if ( !v90 )
            goto LABEL_215;
          if ( *(_QWORD *)&v90->fields.uniqueId )
          {
            if ( v86 >= v85->fields.uniqueId )
              goto LABEL_220;
            if ( !*v88 || !v230 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v230,
              (*v88)->fields.uniqueId,
              (WarBoardEvalValueSquare_EvalValueSquare_o *)v90,
              (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v86 >= v85->fields.uniqueId )
          goto LABEL_220;
        if ( !*v88 )
          goto LABEL_215;
        if ( !v79 )
          goto LABEL_215;
        System_Collections_Generic_List_int___Add(
          v79,
          (*v88)->fields.uniqueId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v90 )
          goto LABEL_215;
        v91 = v90->fields.uniqueId;
        if ( v91 >= 1 )
          break;
      }
LABEL_51:
      uniqueId = v85->fields.uniqueId;
      if ( (int)++v86 >= uniqueId )
        goto LABEL_52;
    }
    v92 = 0;
    while ( v92 < v91 )
    {
      v93 = &v90->klass + (int)v92;
      v96 = v93[4];
      v95 = (char *)(v93 + 4);
      v94 = v96;
      if ( !v96 || !v47 )
        goto LABEL_215;
      FieldPlayerServantList = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                        v47,
                                                        &entity,
                                                        (int32_t)v94->_1.name,
                                                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          v97 = this->fields.logic;
          if ( !v97 )
            goto LABEL_215;
          v98 = v97->fields.data;
          if ( !v98 )
            goto LABEL_215;
          if ( v92 >= v90->fields.uniqueId )
            break;
          if ( !*(_QWORD *)v95 )
            goto LABEL_215;
          v99 = *(_DWORD *)(*(_QWORD *)v95 + 28LL);
          if ( v98->fields.endMasterSkillTurnBuffValue <= v99 )
            v98->fields.endMasterSkillTurnBuffValue = v99;
        }
      }
      v91 = v90->fields.uniqueId;
      if ( (int)++v92 >= v91 )
        goto LABEL_51;
    }
LABEL_220:
    sub_B17100(FieldPlayerServantList, v82, v83);
    sub_B170A0();
  }
LABEL_52:
  v100 = this;
  v101 = this->fields.data;
  if ( !v101 )
    goto LABEL_215;
  FieldPlayerServantList = (BattleServantData_o *)BattleData__getFieldEnemyServantList(v101, 0, 0LL);
  v102 = this->fields.data;
  if ( !v102 )
    goto LABEL_215;
  v103 = FieldPlayerServantList;
  if ( v102->fields.leaderDown && v102->fields.endbattleFlg )
  {
    v231 = 0;
    if ( !v79 )
      goto LABEL_215;
    goto LABEL_113;
  }
  if ( !FieldPlayerServantList )
    goto LABEL_215;
  v104 = FieldPlayerServantList->fields.uniqueId;
  if ( v104 >= 1 )
  {
    v231 = 0;
    v105 = 0;
    while ( v105 < v104 )
    {
      v106 = &v103->klass + (int)v105;
      v109 = (BattleServantData_o *)v106[4];
      v108 = (BattleServantData_o **)(v106 + 4);
      v107 = v109;
      if ( !v109 )
        goto LABEL_215;
      FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isAlive(v107, 0, 0LL);
      if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
      {
        v110 = this->fields.data;
        if ( !v110 )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BattleData__checkAlivePlayers(v110, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          v111 = 1;
        }
        else
        {
          v112 = this->fields.data;
          if ( !v112 )
            goto LABEL_215;
          FieldPlayerServantList = (BattleServantData_o *)BattleData__checkDefeatPoint(v112, 0, 0LL);
          v111 = (unsigned __int8)FieldPlayerServantList & 1;
        }
        if ( v105 >= v103->fields.uniqueId )
          goto LABEL_220;
        if ( !*v108 )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__turnProgressing(
                                                          *v108,
                                                          *(System_Int32_array **)(v33 + 24),
                                                          this->fields.logic,
                                                          v111,
                                                          baseActData,
                                                          0LL);
        if ( v105 >= v103->fields.uniqueId )
          goto LABEL_220;
        v113 = (char)FieldPlayerServantList;
        if ( !*v108 )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isLogicDeadAndNoRevive(*v108, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) == 0 )
        {
          if ( v105 >= v103->fields.uniqueId )
            goto LABEL_220;
          if ( !*v108 )
            goto LABEL_215;
          FieldPlayerServantList = (BattleServantData_o *)BattleServantData__getTTurnEndBufflist(*v108, 0LL);
          if ( !FieldPlayerServantList )
            goto LABEL_215;
          v83 = FieldPlayerServantList;
          if ( *(_QWORD *)&FieldPlayerServantList->fields.uniqueId )
          {
            if ( v105 >= v103->fields.uniqueId )
              goto LABEL_220;
            if ( !*v108 || !v228 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v228,
              (*v108)->fields.uniqueId,
              (WarBoardEvalValueSquare_EvalValueSquare_o *)FieldPlayerServantList,
              (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v105 >= v103->fields.uniqueId )
          goto LABEL_220;
        if ( !*v108 )
          goto LABEL_215;
        buffData = (*v108)->fields.buffData;
        if ( !buffData )
          goto LABEL_215;
        v231 |= v113;
        FieldPlayerServantList = (BattleServantData_o *)BattleBuffData__usedProgressing(buffData, 0LL);
      }
      if ( v105 >= v103->fields.uniqueId )
        goto LABEL_220;
      FieldPlayerServantList = *v108;
      if ( !*v108 )
        goto LABEL_215;
      if ( FieldPlayerServantList->fields.isBuffProgressFlg )
      {
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__turnBuffProgressing(
                                                          FieldPlayerServantList,
                                                          *(_BYTE *)(v33 + 16),
                                                          *(System_Int32_array **)(v33 + 24),
                                                          this->fields.logic,
                                                          0LL,
                                                          0LL);
        if ( v105 >= v103->fields.uniqueId )
          goto LABEL_220;
        v115 = FieldPlayerServantList;
        if ( !*v108 )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isAlive(*v108, 0, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          if ( v105 >= v103->fields.uniqueId )
            goto LABEL_220;
          if ( !*v108 )
            goto LABEL_215;
          FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isLogicResultAlive(*v108, 0LL);
          if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
            goto LABEL_267;
        }
        if ( v105 >= v103->fields.uniqueId )
          goto LABEL_220;
        if ( !*v108 )
          goto LABEL_215;
        FieldPlayerServantList = (BattleServantData_o *)BattleServantData__isGuts(*v108, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
LABEL_267:
          if ( !v115 )
            goto LABEL_215;
          if ( *(_QWORD *)&v115->fields.uniqueId )
          {
            if ( v105 >= v103->fields.uniqueId )
              goto LABEL_220;
            if ( !*v108 || !v230 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v230,
              (*v108)->fields.uniqueId,
              (WarBoardEvalValueSquare_EvalValueSquare_o *)v115,
              (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v105 >= v103->fields.uniqueId )
          goto LABEL_220;
        if ( !*v108 || !v79 )
          goto LABEL_215;
        System_Collections_Generic_List_int___Add(
          v79,
          (*v108)->fields.uniqueId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v104 = v103->fields.uniqueId;
      if ( (int)++v105 >= v104 )
        goto LABEL_111;
    }
    goto LABEL_220;
  }
  v231 = 0;
LABEL_111:
  v100 = this;
  v102 = this->fields.data;
  if ( !v102 || !v79 )
LABEL_215:
    sub_B170D4();
LABEL_113:
  battleEvent = v102->fields.battleEvent;
  v117 = System_Collections_Generic_List_int___ToArray(
           v79,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  ((void (__fastcall *)(struct BaseBattleEvent_o *, System_Int32_array *, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
    battleEvent,
    v117,
    *(unsigned __int8 *)(v33 + 16),
    battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v118 = v100->fields.data;
  if ( !v118 )
    goto LABEL_215;
  perf = v118->fields.perf;
  if ( !perf )
    goto LABEL_215;
  defenceTargetData = v118->fields.defenceTargetData;
  if ( !defenceTargetData )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress(defenceTargetData, perf->fields.defenceTarget, 0LL);
  v125 = v100->fields.data;
  if ( !v125 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v125->fields.aiNpcDataList;
  v127 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                System_Action_AiNpcBattleServantData__TypeInfo,
                                                                                v121,
                                                                                v122,
                                                                                v123,
                                                                                v124);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v127,
    (Il2CppObject *)v33,
    Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v127,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v128 = v233;
  v129 = v233->fields.data;
  if ( !v129 )
    goto LABEL_215;
  FieldEnvData_k__BackingField = v129->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    FieldEnvData_k__BackingField,
    v233->fields.logic,
    *(_BYTE *)(v33 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(v233, *(System_Int32_array **)(v33 + 24), v131);
  v132 = v233->fields.data;
  if ( !v132 )
    goto LABEL_215;
  v132->fields.currentTurn = 0;
  if ( !v228 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v234,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v228,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v237 = v234;
  while ( 1 )
  {
    v139 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v237,
                            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v139 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v237.fields.current.fields.value;
    if ( !v237.fields.current.fields.value )
      sub_B170D4();
    monitor = (int)v237.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v237.fields.current.fields.key;
      v136 = 0;
      v137 = 1;
LABEL_127:
      if ( v136 >= monitor )
      {
        sub_B17100(v139, v140, v141);
        sub_B170A0();
      }
      v138 = value->m_Items[v136];
      if ( !v138 )
        sub_B170D4();
      if ( v138->fields._isRemove )
        goto LABEL_163;
      if ( !v47 )
        sub_B170D4();
      v139 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v47,
               v138->fields.buffId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v139 )
        goto LABEL_163;
      v144 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v140, v141, v142, v143);
      BattleSkillInfoData___ctor(v144, 0LL);
      if ( !v144 )
        sub_B170D4();
      v144->fields.svtUniqueId = key;
      vals = v138->fields.vals;
      if ( !vals )
        sub_B170D4();
      if ( !vals->max_length )
      {
        sub_B17100(v145, v146, v147);
        sub_B170A0();
      }
      v149 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v144->klass->vtable._4_set_skillId.method)(
               v144,
               (unsigned int)vals->m_Items[1],
               v144->klass->vtable._5_get_skillId.methodPtr);
      v152 = v138->fields.vals;
      if ( !v152 )
        sub_B170D4();
      if ( v152->max_length <= 1 )
      {
        sub_B17100(v149, v150, v151);
        sub_B170A0();
      }
      v144->fields.skilllv = v152->m_Items[2];
      v153 = v128->fields.data;
      if ( !v153 )
        sub_B170D4();
      ServantData = BattleData__getServantData(v153, v144->fields.svtUniqueId, 0LL);
      v155 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v144->klass->vtable._5_get_skillId.method)(
               v144,
               v144->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v232 )
        sub_B170D4();
      v156 = SkillLvMaster__GetEntity(v232, v155, v144->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B170D4();
      v157 = v156;
      v158 = v128->fields.data;
      if ( !v158 )
        sub_B170D4();
      if ( !BattleData__checkAliveOther(v158, ServantData->fields.uniqueId, 0LL) )
      {
        if ( !v157 )
          sub_B170D4();
        v159 = v128->fields.logic;
        if ( !v159 )
          sub_B170D4();
        v139 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v159, v157->fields.funcId, 0LL);
        if ( ((unsigned __int8)v139 & 1) == 0 )
          goto LABEL_163;
      }
      v161 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v138, 0LL);
      if ( (v161 & 0x80000000) != 0 )
      {
        v166 = v233;
        TargetIds = Target__getTargetIds(v233->fields.data, v144->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v144, 0LL);
      }
      else
      {
        v162 = sub_B17014(int___TypeInfo, 1LL, v160);
        TargetIds = (System_Int32_array *)v162;
        if ( !v162 )
          sub_B170D4();
        if ( !*(_DWORD *)(v162 + 24) )
        {
          sub_B17100(v162, v163, v164);
          sub_B170A0();
        }
        *(_DWORD *)(v162 + 32) = v161;
        v166 = v233;
        exists = 0;
      }
      logicskill = v166->fields.logicskill;
      v169 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v164);
      if ( !v169 )
        sub_B170D4();
      if ( !v169->max_length )
      {
        sub_B17100(v169, v170, v169);
        sub_B170A0();
      }
      v169->m_Items[1] = key;
      if ( !logicskill )
        sub_B170D4();
      v172 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v144,
                                                   v169,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v171);
      v128 = v233;
      v173 = (BattleLogicTask_array *)v172;
      if ( (v137 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v172, 0LL);
        if ( IsNullOrEmpty )
        {
          v137 = 1;
          goto LABEL_161;
        }
        if ( !v173 )
          sub_B170D4();
        if ( !v173->max_length )
        {
          sub_B17100(IsNullOrEmpty, v175, v176);
          sub_B170A0();
        }
        v178 = v173->m_Items[0];
        if ( !v178 )
          sub_B170D4();
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v178, ServantData, value, v177);
      }
      v137 = 0;
LABEL_161:
      v179 = v233->fields.logic;
      if ( !v179 )
        sub_B170D4();
      BattleLogic__addBattleLogicTask(v179, v173, 0LL);
LABEL_163:
      monitor = value->max_length;
      if ( (int)++v136 >= monitor )
        continue;
      goto LABEL_127;
    }
  }
  v235[0] = 1282;
  v236 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v237,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v236 = 0;
  if ( !v230 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v234,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v230,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v237 = v234;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v237,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v180 = v233->fields.data;
    if ( !v180 )
      sub_B170D4();
    v181 = (int32_t)v237.fields.current.fields.key;
    v182 = v237.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v180, (int32_t)v237.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v189 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v184,
                                                            v185,
                                                            v186,
                                                            v187);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v189,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v189 )
        sub_B170D4();
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v189->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v182 )
      sub_B170D4();
    v190 = (int)v182[1].monitor;
    if ( v190 >= 1 )
    {
      for ( i = 0; i < v190; ++i )
      {
        if ( i >= (unsigned int)v190 )
        {
          sub_B17100(isEndAct, v184, v185);
          sub_B170A0();
        }
        v192 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v182[2].klass + i);
        if ( !v192 )
          sub_B170D4();
        if ( !v192->fields._isRemove )
        {
          if ( !v47 )
            sub_B170D4();
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v47,
                                              v192->fields.buffId,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v192, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v195 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v184, v185, v193, v194);
                BattleSkillInfoData___ctor(v195, 0LL);
                if ( !v195 )
                  sub_B170D4();
                v195->fields.svtUniqueId = v181;
                v199 = v192->fields.vals;
                if ( !v199 )
                  sub_B170D4();
                if ( !v199->max_length )
                {
                  sub_B17100(v196, v197, v198);
                  sub_B170A0();
                }
                v200 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v195->klass->vtable._4_set_skillId.method)(
                         v195,
                         (unsigned int)v199->m_Items[1],
                         v195->klass->vtable._5_get_skillId.methodPtr);
                v203 = v192->fields.vals;
                if ( !v203 )
                  sub_B170D4();
                if ( v203->max_length <= 1 )
                {
                  sub_B17100(v200, v201, v202);
                  sub_B170A0();
                }
                v195->fields.skilllv = v203->m_Items[2];
                v204 = v233->fields.data;
                if ( !v204 )
                  sub_B170D4();
                v205 = BattleData__getServantData(v204, v195->fields.svtUniqueId, 0LL);
                v206 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v195->klass->vtable._5_get_skillId.method)(
                         v195,
                         v195->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v232 )
                  sub_B170D4();
                v207 = SkillLvMaster__GetEntity(v232, v206, v195->fields.skilllv, 0LL);
                if ( !v205 )
                  sub_B170D4();
                v208 = v207;
                v209 = v233->fields.data;
                if ( !v209 )
                  sub_B170D4();
                if ( BattleData__checkAliveOther(v209, v205->fields.uniqueId, 0LL) )
                  goto LABEL_197;
                if ( !v208 )
                  sub_B170D4();
                v210 = v233->fields.logic;
                if ( !v210 )
                  sub_B170D4();
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v210, v208->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_197:
                  v212 = BattleServantData__GetRevengeIdCheckOpponentOnly(v205, v192, 0LL);
                  if ( (v212 & 0x80000000) != 0 )
                  {
                    v216 = Target__getTargetIds(v233->fields.data, v195->fields.svtUniqueId, -1, v181, 13, 0LL, 0LL);
                    v217 = BattleSkillInfoData__ExistsNoTargetNoActionType(v195, 0LL);
                  }
                  else
                  {
                    v213 = sub_B17014(int___TypeInfo, 1LL, v211);
                    v216 = (System_Int32_array *)v213;
                    if ( !v213 )
                      sub_B170D4();
                    if ( !*(_DWORD *)(v213 + 24) )
                    {
                      sub_B17100(v213, v214, v215);
                      sub_B170A0();
                    }
                    v217 = 0;
                    *(_DWORD *)(v213 + 32) = v212;
                  }
                  v218 = v233->fields.logicskill;
                  v219 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v215);
                  if ( !v219 )
                    sub_B170D4();
                  if ( !v219->max_length )
                  {
                    sub_B17100(v219, v220, v219);
                    sub_B170A0();
                  }
                  v219->m_Items[1] = v181;
                  if ( !v218 )
                    sub_B170D4();
                  v222 = BattleLogicSkill__taskSkill(v218, v195, v219, v216, 1, v217, 0, v221);
                  v223 = v233->fields.logic;
                  if ( !v223 )
                    sub_B170D4();
                  BattleLogic__addBattleLogicTask(v223, v222, 0LL);
                }
              }
            }
          }
        }
        v190 = (int)v182[1].monitor;
      }
    }
  }
  v235[0] = 1743;
  v224 = ++v236;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v237,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v224 && v235[v224 - 1] == 1743 )
    v236 = v224 - 1;
  v225 = v233->fields.logic;
  if ( !v225 )
    goto LABEL_215;
  if ( (v231 & 1) != 0 )
    v226 = baseActData;
  else
    v226 = 0LL;
  return BattleLogic__PrevReturnCreateActionData(v225, v226, baseActData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v33; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x21
  BattleLogic_o *logic; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  WebViewManager_o *v64; // x0
  WarQuestSelectionMaster_o *v65; // x0
  BattleData_o *data; // x8
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_Collections_Generic_List_int__o *v78; // x26
  BattleData_o *v79; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *FieldPlayerServantList; // x0
  __int64 v81; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *v82; // x2
  int EvalValueWarsituation_k__BackingField_low; // w8
  WarBoardEvalValueSquare_EvalValueSquare_o *v84; // x28
  unsigned int v85; // w23
  WarBoardEvalValueSquare_EvalValueSquare_c **v86; // x19
  BattleServantData_o *v87; // x0
  BattleServantData_o **v88; // x19
  BattleServantData_o *v89; // t1
  BattleData_o *v90; // x0
  bool v91; // w3
  BattleData_o *v92; // x0
  char v93; // w20
  BattleBuffData_o *buffData; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v95; // x20
  int v96; // w8
  unsigned int v97; // w19
  WarBoardEvalValueSquare_EvalValueSquare_c **v98; // x22
  WarBoardEvalValueSquare_EvalValueSquare_c *v99; // x8
  char *v100; // x22
  WarBoardEvalValueSquare_EvalValueSquare_c *v101; // t1
  struct BattleLogic_o *v102; // x8
  struct BattleData_o *v103; // x8
  int32_t v104; // w9
  BattleLogicNomal_o *v105; // x19
  BattleData_o *v106; // x0
  struct BattleData_o *v107; // x8
  WarBoardEvalValueSquare_EvalValueSquare_o *v108; // x20
  int v109; // w8
  unsigned int v110; // w19
  WarBoardEvalValueSquare_EvalValueSquare_c **v111; // x25
  BattleServantData_o **v112; // x25
  BattleServantData_o *v113; // t1
  WarBoardEvalValueSquare_EvalValueSquare_o *v114; // x27
  struct BaseBattleEvent_o *battleEvent; // x20
  System_Int32_array *v116; // x0
  struct BattleData_o *v117; // x8
  struct BattlePerformance_o *perf; // x9
  BattleDefenceTargetData_o *defenceTargetData; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  struct BattleData_o *v124; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v126; // x23
  BattleLogicNomal_o *v127; // x23
  struct BattleData_o *v128; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  const MethodInfo *v130; // x2
  struct BattleData_o *v131; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v135; // w22
  char v136; // w19
  BattleBuffData_BuffData_o *v137; // x20
  WarEntity_o *v138; // x0
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  BattleSkillInfoData_o *v143; // x26
  __int64 v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  struct System_Int32_array *vals; // x8
  __int64 v148; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  struct System_Int32_array *v151; // x8
  BattleData_o *v152; // x0
  BattleServantData_o *ServantData; // x27
  int32_t v154; // w1
  SkillLvEntity_o *v155; // x0
  SkillLvEntity_o *v156; // x28
  BattleData_o *v157; // x0
  BattleLogic_o *v158; // x0
  __int64 v159; // x2
  int32_t v160; // w23
  __int64 v161; // x0
  __int64 v162; // x1
  __int64 v163; // x2
  System_Int32_array *TargetIds; // x20
  BattleLogicNomal_o *v165; // x23
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v168; // x0
  __int64 v169; // x1
  const MethodInfo *v170; // x7
  System_Collections_ICollection_o *v171; // x0
  BattleLogicTask_array *v172; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v174; // x1
  __int64 v175; // x2
  const MethodInfo *v176; // x3
  BattleLogicTask_o *v177; // x0
  BattleLogic_o *v178; // x0
  BattleData_o *v179; // x0
  int32_t v180; // w23
  Il2CppObject *v181; // x28
  BattleServantData_o *isEndAct; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v188; // x20
  int v189; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v191; // x26
  __int64 v192; // x3
  __int64 v193; // x4
  BattleSkillInfoData_o *v194; // x25
  __int64 v195; // x0
  __int64 v196; // x1
  __int64 v197; // x2
  struct System_Int32_array *v198; // x8
  __int64 v199; // x0
  __int64 v200; // x1
  __int64 v201; // x2
  struct System_Int32_array *v202; // x8
  BattleData_o *v203; // x0
  BattleServantData_o *v204; // x20
  int32_t v205; // w1
  SkillLvEntity_o *v206; // x0
  SkillLvEntity_o *v207; // x27
  BattleData_o *v208; // x0
  BattleLogic_o *v209; // x0
  __int64 v210; // x2
  int32_t v211; // w27
  __int64 v212; // x0
  __int64 v213; // x1
  __int64 v214; // x2
  System_Int32_array *v215; // x20
  bool v216; // w26
  BattleLogicSkill_o *v217; // x27
  System_Int32_array *v218; // x0
  __int64 v219; // x1
  const MethodInfo *v220; // x7
  BattleLogicTask_array *v221; // x1
  BattleLogic_o *v222; // x0
  int v223; // w19
  BattleLogic_o *v224; // x0
  BattleActionData_o *v225; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v227; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v228; // [xsp+10h] [xbp-F0h]
  BattleActionData_o *actiondata; // [xsp+18h] [xbp-E8h]
  char v230; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v231; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v232; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v233; // [xsp+38h] [xbp-C8h] BYREF
  int v234[2]; // [xsp+60h] [xbp-A0h]
  int v235; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v236; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_40FC42C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B16FFC(&System_Action_AiNpcBattleServantData__TypeInfo, v6);
    sub_B16FFC(&BattleActionData_TypeInfo, v7);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v8);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__, v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v20);
    sub_B16FFC(&int___TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v27);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B16FFC(&Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__, v30);
    sub_B16FFC(&BattleLogicNomal___c__DisplayClass31_0_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_8773/*"MOTION_PLAYER_TURN_END"*/, v32);
    byte_40FC42C = 1;
  }
  entity = 0LL;
  memset(&v236, 0, sizeof(v236));
  v235 = 0;
  v33 = sub_B170CC(BattleLogicNomal___c__DisplayClass31_0_TypeInfo, task, method, v3, v4);
  BattleLogicNomal___c__DisplayClass31_0___ctor((BattleLogicNomal___c__DisplayClass31_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_213;
  *(_QWORD *)(v33 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 32), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  BattleLogicNomal__SetNextTargetId(this, v40);
  actiondata = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v41, v42, v43, v44);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v33 + 16) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_213;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_213;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_213;
  BattleLogic__updateResultServant(logic, 0LL);
  if ( !actiondata )
    goto LABEL_213;
  BattleActionData__setStateField(actiondata, 0LL);
  v49 = (System_Int32_array **)StringLiteral_8773/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8773/*"MOTION_PLAYER_TURN_END"*/;
  sub_B16F98((BattleServantConfConponent_o *)&actiondata->fields.motionname, v49, v50, v51, v52, v53, v54, v55);
  v228 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                    v56,
                                                                                                    v57,
                                                                                                    v58,
                                                                                                    v59);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v228,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v227 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                    v60,
                                                                                                    v61,
                                                                                                    v62,
                                                                                                    v63);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v227,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v64 )
    goto LABEL_213;
  v65 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v64,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v231 = (SkillLvMaster_o *)v65;
  if ( !data )
    goto LABEL_213;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v33 + 24) = QuestIndividualities;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 24), QuestIndividualities, v68, v69, v70, v71, v72, v73);
  v78 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v74,
                                                    v75,
                                                    v76,
                                                    v77);
  System_Collections_Generic_List_int____ctor(
    v78,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v79 = this->fields.data;
  if ( !v79 )
    goto LABEL_213;
  FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleData__getFieldPlayerServantList(v79, 0LL);
  if ( !FieldPlayerServantList )
    goto LABEL_213;
  EvalValueWarsituation_k__BackingField_low = LODWORD(FieldPlayerServantList->fields._EvalValueWarsituation_k__BackingField);
  v84 = FieldPlayerServantList;
  v232 = this;
  if ( EvalValueWarsituation_k__BackingField_low >= 1 )
  {
    v230 = 0;
    v85 = 0;
    while ( 1 )
    {
      if ( v85 >= EvalValueWarsituation_k__BackingField_low )
        goto LABEL_218;
      v86 = &v84->klass + (int)v85;
      v89 = (BattleServantData_o *)v86[4];
      v88 = (BattleServantData_o **)(v86 + 4);
      v87 = v89;
      if ( !v89 )
        goto LABEL_213;
      FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isAlive(v87, 0, 0LL);
      if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
      {
        v90 = v232->fields.data;
        if ( !v90 )
          goto LABEL_213;
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleData__checkAliveEnemys(v90, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          v91 = 1;
        }
        else
        {
          v92 = v232->fields.data;
          if ( !v92 )
            goto LABEL_213;
          FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleData__checkDefeatPoint(
                                                                                  v92,
                                                                                  1,
                                                                                  0LL);
          v91 = (unsigned __int8)FieldPlayerServantList & 1;
        }
        if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
          goto LABEL_218;
        if ( !*v88 )
          goto LABEL_213;
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__turnProgressing(
                                                                                *v88,
                                                                                *(System_Int32_array **)(v33 + 24),
                                                                                v232->fields.logic,
                                                                                v91,
                                                                                actiondata,
                                                                                0LL);
        if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
          goto LABEL_218;
        v93 = (char)FieldPlayerServantList;
        if ( !*v88 )
          goto LABEL_213;
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isLogicDeadAndNoRevive(
                                                                                *v88,
                                                                                0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) == 0 )
        {
          if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
            goto LABEL_218;
          if ( !*v88 )
            goto LABEL_213;
          FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__getTTurnEndBufflist(
                                                                                  *v88,
                                                                                  0LL);
          if ( !FieldPlayerServantList )
            goto LABEL_213;
          v82 = FieldPlayerServantList;
          if ( *(_QWORD *)&FieldPlayerServantList->fields._EvalValueWarsituation_k__BackingField )
          {
            if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
              goto LABEL_218;
            if ( !*v88 || !v227 )
              goto LABEL_213;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v227,
              (*v88)->fields.uniqueId,
              FieldPlayerServantList,
              (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
          goto LABEL_218;
        if ( !*v88 )
          goto LABEL_213;
        buffData = (*v88)->fields.buffData;
        if ( !buffData )
          goto LABEL_213;
        v230 |= v93;
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleBuffData__usedProgressing(
                                                                                buffData,
                                                                                0LL);
      }
      if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
        goto LABEL_218;
      FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)*v88;
      if ( !*v88 )
        goto LABEL_213;
      if ( BYTE4(FieldPlayerServantList[9].klass) )
      {
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__turnBuffProgressing(
                                                                                (BattleServantData_o *)FieldPlayerServantList,
                                                                                *(_BYTE *)(v33 + 16),
                                                                                *(System_Int32_array **)(v33 + 24),
                                                                                v232->fields.logic,
                                                                                0LL,
                                                                                0LL);
        if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
          goto LABEL_218;
        v95 = FieldPlayerServantList;
        if ( !*v88 )
          goto LABEL_213;
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isAlive(*v88, 0, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
            goto LABEL_218;
          if ( !*v88 )
            goto LABEL_213;
          FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isLogicResultAlive(
                                                                                  *v88,
                                                                                  0LL);
          if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
            goto LABEL_264;
        }
        if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
          goto LABEL_218;
        if ( !*v88 )
          goto LABEL_213;
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isGuts(*v88, 0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
LABEL_264:
          if ( !v95 )
            goto LABEL_213;
          if ( *(_QWORD *)&v95->fields._EvalValueWarsituation_k__BackingField )
          {
            if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
              goto LABEL_218;
            if ( !*v88 || !v228 )
              goto LABEL_213;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v228,
              (*v88)->fields.uniqueId,
              v95,
              (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v85 >= LODWORD(v84->fields._EvalValueWarsituation_k__BackingField) )
          goto LABEL_218;
        if ( !*v88 )
          goto LABEL_213;
        if ( !v78 )
          goto LABEL_213;
        System_Collections_Generic_List_int___Add(
          v78,
          (*v88)->fields.uniqueId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v95 )
          goto LABEL_213;
        v96 = LODWORD(v95->fields._EvalValueWarsituation_k__BackingField);
        if ( v96 >= 1 )
          break;
      }
LABEL_76:
      EvalValueWarsituation_k__BackingField_low = LODWORD(v84->fields._EvalValueWarsituation_k__BackingField);
      if ( (int)++v85 >= EvalValueWarsituation_k__BackingField_low )
        goto LABEL_79;
    }
    v97 = 0;
    while ( v97 < v96 )
    {
      v98 = &v95->klass + (int)v97;
      v101 = v98[4];
      v100 = (char *)(v98 + 4);
      v99 = v101;
      if ( !v101 || !v47 )
        goto LABEL_213;
      FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                              v47,
                                                                              &entity,
                                                                              (int32_t)v99->_1.name,
                                                                              (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_213;
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BuffEntity__checkBuffType(
                                                                                (BuffEntity_o *)entity,
                                                                                142,
                                                                                0LL);
        if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
        {
          v102 = v232->fields.logic;
          if ( !v102 )
            goto LABEL_213;
          v103 = v102->fields.data;
          if ( !v103 )
            goto LABEL_213;
          if ( v97 >= LODWORD(v95->fields._EvalValueWarsituation_k__BackingField) )
            break;
          if ( !*(_QWORD *)v100 )
            goto LABEL_213;
          v104 = *(_DWORD *)(*(_QWORD *)v100 + 28LL);
          if ( v103->fields.endMasterSkillTurnBuffValue <= v104 )
            v103->fields.endMasterSkillTurnBuffValue = v104;
        }
      }
      v96 = LODWORD(v95->fields._EvalValueWarsituation_k__BackingField);
      if ( (int)++v97 >= v96 )
        goto LABEL_76;
    }
LABEL_218:
    sub_B17100(FieldPlayerServantList, v81, v82);
    sub_B170A0();
  }
  v230 = 0;
LABEL_79:
  v105 = v232;
  v106 = v232->fields.data;
  if ( !v106 )
    goto LABEL_213;
  FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleData__getFieldEnemyServantList(
                                                                          v106,
                                                                          0,
                                                                          0LL);
  v107 = v232->fields.data;
  if ( !v107 )
    goto LABEL_213;
  v108 = FieldPlayerServantList;
  if ( !v107->fields.leaderDown || !v107->fields.endbattleFlg )
  {
    if ( !FieldPlayerServantList )
      goto LABEL_213;
    v109 = LODWORD(FieldPlayerServantList->fields._EvalValueWarsituation_k__BackingField);
    if ( v109 >= 1 )
    {
      v110 = 0;
      while ( v110 < v109 )
      {
        v111 = &v108->klass + (int)v110;
        v113 = (BattleServantData_o *)v111[4];
        v112 = (BattleServantData_o **)(v111 + 4);
        FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)v113;
        if ( !v113 )
          goto LABEL_213;
        if ( BYTE4(FieldPlayerServantList[9].klass) )
        {
          FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__turnBuffProgressing(
                                                                                  (BattleServantData_o *)FieldPlayerServantList,
                                                                                  *(_BYTE *)(v33 + 16),
                                                                                  *(System_Int32_array **)(v33 + 24),
                                                                                  v232->fields.logic,
                                                                                  0LL,
                                                                                  0LL);
          if ( v110 >= LODWORD(v108->fields._EvalValueWarsituation_k__BackingField) )
            goto LABEL_218;
          v114 = FieldPlayerServantList;
          if ( !*v112 )
            goto LABEL_213;
          FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isAlive(
                                                                                  *v112,
                                                                                  0,
                                                                                  0LL);
          if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
          {
            if ( v110 >= LODWORD(v108->fields._EvalValueWarsituation_k__BackingField) )
              goto LABEL_218;
            if ( !*v112 )
              goto LABEL_213;
            FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isLogicResultAlive(
                                                                                    *v112,
                                                                                    0LL);
            if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
              goto LABEL_265;
          }
          if ( v110 >= LODWORD(v108->fields._EvalValueWarsituation_k__BackingField) )
            goto LABEL_218;
          if ( !*v112 )
            goto LABEL_213;
          FieldPlayerServantList = (WarBoardEvalValueSquare_EvalValueSquare_o *)BattleServantData__isGuts(*v112, 0LL);
          if ( ((unsigned __int8)FieldPlayerServantList & 1) != 0 )
          {
LABEL_265:
            if ( !v114 )
              goto LABEL_213;
            if ( *(_QWORD *)&v114->fields._EvalValueWarsituation_k__BackingField )
            {
              if ( v110 >= LODWORD(v108->fields._EvalValueWarsituation_k__BackingField) )
                goto LABEL_218;
              if ( !*v112 || !v228 )
                goto LABEL_213;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v228,
                (*v112)->fields.uniqueId,
                v114,
                (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v110 >= LODWORD(v108->fields._EvalValueWarsituation_k__BackingField) )
            goto LABEL_218;
          if ( !*v112 || !v78 )
            goto LABEL_213;
          System_Collections_Generic_List_int___Add(
            v78,
            (*v112)->fields.uniqueId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v109 = LODWORD(v108->fields._EvalValueWarsituation_k__BackingField);
        if ( (int)++v110 >= v109 )
          goto LABEL_109;
      }
      goto LABEL_218;
    }
LABEL_109:
    v105 = v232;
    v107 = v232->fields.data;
    if ( !v107 )
      goto LABEL_213;
  }
  if ( !v78 )
    goto LABEL_213;
  battleEvent = v107->fields.battleEvent;
  v116 = System_Collections_Generic_List_int___ToArray(
           v78,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_213;
  ((void (__fastcall *)(struct BaseBattleEvent_o *, System_Int32_array *, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
    battleEvent,
    v116,
    *(unsigned __int8 *)(v33 + 16),
    battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v117 = v105->fields.data;
  if ( !v117 )
    goto LABEL_213;
  perf = v117->fields.perf;
  if ( !perf )
    goto LABEL_213;
  defenceTargetData = v117->fields.defenceTargetData;
  if ( !defenceTargetData )
    goto LABEL_213;
  BattleDefenceTargetData__BuffTurnProgress(defenceTargetData, perf->fields.defenceTarget, 0LL);
  v124 = v105->fields.data;
  if ( !v124 )
    goto LABEL_213;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v124->fields.aiNpcDataList;
  v126 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                System_Action_AiNpcBattleServantData__TypeInfo,
                                                                                v120,
                                                                                v121,
                                                                                v122,
                                                                                v123);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v126,
    (Il2CppObject *)v33,
    Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_213;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v126,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v127 = v232;
  v128 = v232->fields.data;
  if ( !v128
    || (FieldEnvData_k__BackingField = v128->fields._FieldEnvData_k__BackingField) == 0LL
    || (BattleFieldEnvironmentData__TurnProgressing(
          FieldEnvData_k__BackingField,
          v232->fields.logic,
          *(_BYTE *)(v33 + 16),
          0LL),
        BattleLogicNomal__UpdateEndTurnBuff(v232, *(System_Int32_array **)(v33 + 24), v130),
        (v131 = v232->fields.data) == 0LL)
    || (v131->fields.currentTurn = 1, !v227) )
  {
LABEL_213:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v233,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v227,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v236 = v233;
  while ( 1 )
  {
    v138 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v236,
                            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v138 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v236.fields.current.fields.value;
    if ( !v236.fields.current.fields.value )
      sub_B170D4();
    monitor = (int)v236.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v236.fields.current.fields.key;
      v135 = 0;
      v136 = 1;
LABEL_125:
      if ( v135 >= monitor )
      {
        sub_B17100(v138, v139, v140);
        sub_B170A0();
      }
      v137 = value->m_Items[v135];
      if ( !v137 )
        sub_B170D4();
      if ( v137->fields._isRemove )
        goto LABEL_161;
      if ( !v47 )
        sub_B170D4();
      v138 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v47,
               v137->fields.buffId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v138 )
        goto LABEL_161;
      v143 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v139, v140, v141, v142);
      BattleSkillInfoData___ctor(v143, 0LL);
      if ( !v143 )
        sub_B170D4();
      v143->fields.svtUniqueId = key;
      vals = v137->fields.vals;
      if ( !vals )
        sub_B170D4();
      if ( !vals->max_length )
      {
        sub_B17100(v144, v145, v146);
        sub_B170A0();
      }
      v148 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v143->klass->vtable._4_set_skillId.method)(
               v143,
               (unsigned int)vals->m_Items[1],
               v143->klass->vtable._5_get_skillId.methodPtr);
      v151 = v137->fields.vals;
      if ( !v151 )
        sub_B170D4();
      if ( v151->max_length <= 1 )
      {
        sub_B17100(v148, v149, v150);
        sub_B170A0();
      }
      v143->fields.skilllv = v151->m_Items[2];
      v152 = v127->fields.data;
      if ( !v152 )
        sub_B170D4();
      ServantData = BattleData__getServantData(v152, v143->fields.svtUniqueId, 0LL);
      v154 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v143->klass->vtable._5_get_skillId.method)(
               v143,
               v143->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v231 )
        sub_B170D4();
      v155 = SkillLvMaster__GetEntity(v231, v154, v143->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B170D4();
      v156 = v155;
      v157 = v127->fields.data;
      if ( !v157 )
        sub_B170D4();
      if ( !BattleData__checkAliveOther(v157, ServantData->fields.uniqueId, 0LL) )
      {
        if ( !v156 )
          sub_B170D4();
        v158 = v127->fields.logic;
        if ( !v158 )
          sub_B170D4();
        v138 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v158, v156->fields.funcId, 0LL);
        if ( ((unsigned __int8)v138 & 1) == 0 )
          goto LABEL_161;
      }
      v160 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v137, 0LL);
      if ( (v160 & 0x80000000) != 0 )
      {
        v165 = v232;
        TargetIds = Target__getTargetIds(v232->fields.data, v143->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v143, 0LL);
      }
      else
      {
        v161 = sub_B17014(int___TypeInfo, 1LL, v159);
        TargetIds = (System_Int32_array *)v161;
        if ( !v161 )
          sub_B170D4();
        if ( !*(_DWORD *)(v161 + 24) )
        {
          sub_B17100(v161, v162, v163);
          sub_B170A0();
        }
        *(_DWORD *)(v161 + 32) = v160;
        v165 = v232;
        exists = 0;
      }
      logicskill = v165->fields.logicskill;
      v168 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v163);
      if ( !v168 )
        sub_B170D4();
      if ( !v168->max_length )
      {
        sub_B17100(v168, v169, v168);
        sub_B170A0();
      }
      v168->m_Items[1] = key;
      if ( !logicskill )
        sub_B170D4();
      v171 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v143,
                                                   v168,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v170);
      v127 = v232;
      v172 = (BattleLogicTask_array *)v171;
      if ( (v136 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v171, 0LL);
        if ( IsNullOrEmpty )
        {
          v136 = 1;
          goto LABEL_159;
        }
        if ( !v172 )
          sub_B170D4();
        if ( !v172->max_length )
        {
          sub_B17100(IsNullOrEmpty, v174, v175);
          sub_B170A0();
        }
        v177 = v172->m_Items[0];
        if ( !v177 )
          sub_B170D4();
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v177, ServantData, value, v176);
      }
      v136 = 0;
LABEL_159:
      v178 = v232->fields.logic;
      if ( !v178 )
        sub_B170D4();
      BattleLogic__addBattleLogicTask(v178, v172, 0LL);
LABEL_161:
      monitor = value->max_length;
      if ( (int)++v135 >= monitor )
        continue;
      goto LABEL_125;
    }
  }
  v234[0] = 1288;
  v235 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v236,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v235 = 0;
  if ( !v228 )
    goto LABEL_213;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v233,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v228,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v236 = v233;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v236,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v179 = v232->fields.data;
    if ( !v179 )
      sub_B170D4();
    v180 = (int32_t)v236.fields.current.fields.key;
    v181 = v236.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v179, (int32_t)v236.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v188 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v183,
                                                            v184,
                                                            v185,
                                                            v186);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v188,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v188 )
        sub_B170D4();
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v188->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v181 )
      sub_B170D4();
    v189 = (int)v181[1].monitor;
    if ( v189 >= 1 )
    {
      for ( i = 0; i < v189; ++i )
      {
        if ( i >= (unsigned int)v189 )
        {
          sub_B17100(isEndAct, v183, v184);
          sub_B170A0();
        }
        v191 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v181[2].klass + i);
        if ( !v191 )
          sub_B170D4();
        if ( !v191->fields._isRemove )
        {
          if ( !v47 )
            sub_B170D4();
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v47,
                                              v191->fields.buffId,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v191, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v194 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v183, v184, v192, v193);
                BattleSkillInfoData___ctor(v194, 0LL);
                if ( !v194 )
                  sub_B170D4();
                v194->fields.svtUniqueId = v180;
                v198 = v191->fields.vals;
                if ( !v198 )
                  sub_B170D4();
                if ( !v198->max_length )
                {
                  sub_B17100(v195, v196, v197);
                  sub_B170A0();
                }
                v199 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v194->klass->vtable._4_set_skillId.method)(
                         v194,
                         (unsigned int)v198->m_Items[1],
                         v194->klass->vtable._5_get_skillId.methodPtr);
                v202 = v191->fields.vals;
                if ( !v202 )
                  sub_B170D4();
                if ( v202->max_length <= 1 )
                {
                  sub_B17100(v199, v200, v201);
                  sub_B170A0();
                }
                v194->fields.skilllv = v202->m_Items[2];
                v203 = v232->fields.data;
                if ( !v203 )
                  sub_B170D4();
                v204 = BattleData__getServantData(v203, v194->fields.svtUniqueId, 0LL);
                v205 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v194->klass->vtable._5_get_skillId.method)(
                         v194,
                         v194->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v231 )
                  sub_B170D4();
                v206 = SkillLvMaster__GetEntity(v231, v205, v194->fields.skilllv, 0LL);
                if ( !v204 )
                  sub_B170D4();
                v207 = v206;
                v208 = v232->fields.data;
                if ( !v208 )
                  sub_B170D4();
                if ( BattleData__checkAliveOther(v208, v204->fields.uniqueId, 0LL) )
                  goto LABEL_195;
                if ( !v207 )
                  sub_B170D4();
                v209 = v232->fields.logic;
                if ( !v209 )
                  sub_B170D4();
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v209, v207->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_195:
                  v211 = BattleServantData__GetRevengeIdCheckOpponentOnly(v204, v191, 0LL);
                  if ( (v211 & 0x80000000) != 0 )
                  {
                    v215 = Target__getTargetIds(v232->fields.data, v194->fields.svtUniqueId, -1, v180, 13, 0LL, 0LL);
                    v216 = BattleSkillInfoData__ExistsNoTargetNoActionType(v194, 0LL);
                  }
                  else
                  {
                    v212 = sub_B17014(int___TypeInfo, 1LL, v210);
                    v215 = (System_Int32_array *)v212;
                    if ( !v212 )
                      sub_B170D4();
                    if ( !*(_DWORD *)(v212 + 24) )
                    {
                      sub_B17100(v212, v213, v214);
                      sub_B170A0();
                    }
                    v216 = 0;
                    *(_DWORD *)(v212 + 32) = v211;
                  }
                  v217 = v232->fields.logicskill;
                  v218 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v214);
                  if ( !v218 )
                    sub_B170D4();
                  if ( !v218->max_length )
                  {
                    sub_B17100(v218, v219, v218);
                    sub_B170A0();
                  }
                  v218->m_Items[1] = v180;
                  if ( !v217 )
                    sub_B170D4();
                  v221 = BattleLogicSkill__taskSkill(v217, v194, v218, v215, 1, v216, 0, v220);
                  v222 = v232->fields.logic;
                  if ( !v222 )
                    sub_B170D4();
                  BattleLogic__addBattleLogicTask(v222, v221, 0LL);
                }
              }
            }
          }
        }
        v189 = (int)v181[1].monitor;
      }
    }
  }
  v234[0] = 1752;
  v223 = ++v235;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v236,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v223 && v234[v223 - 1] == 1752 )
    v235 = v223 - 1;
  v224 = v232->fields.logic;
  if ( !v224 )
    goto LABEL_213;
  if ( (v230 & 1) != 0 )
    v225 = actiondata;
  else
    v225 = 0LL;
  return BattleLogic__PrevReturnCreateActionData(v224, v225, actiondata, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  const MethodInfo *v7; // x1
  System_Int32_array **motionName; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **motionMessage; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **targetObject; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FC429 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, task);
    byte_40FC429 = 1;
  }
  v6 = sub_B170CC(BattleActionData_TypeInfo, task, method, v3, v4);
  BattleActionData___ctor((BattleActionData_o *)v6, 0LL);
  if ( !v6 || (BattleActionData__setStateMotion((BattleActionData_o *)v6, 0LL), !task) )
    sub_B170D4();
  *(_BYTE *)(v6 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v6 + 32) = BattleLogicTask__getActorId(task, v7);
  motionName = (System_Int32_array **)task->fields.motionName;
  *(_QWORD *)(v6 + 64) = motionName;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 64), motionName, v9, v10, v11, v12, v13, v14);
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(v6 + 128) = motionMessage;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 128), motionMessage, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v6 + 136) = task->fields.messageType;
  targetObject = (System_Int32_array **)task->fields.targetObject;
  *(_QWORD *)(v6 + 72) = targetObject;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 72), targetObject, v23, v24, v25, v26, v27, v28);
  return (BattleActionData_o *)v6;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftGuts(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v8; // x21
  BattleBuffData_o *buffData; // x0
  int32_t ShiftGuts; // w0
  int32_t v11; // w22
  System_String_o *MotionName; // x0
  struct BattleData_o *v13; // x8
  System_String_o *v14; // x23
  BattlePerformance_o *perf; // x0
  BattleBuffData_o *v16; // x0
  RemovedBuffInfo_o *v17; // x0
  const MethodInfo *v18; // x6
  struct BattleLogic_o *logic; // x8
  BuffEntity_o *buffEntity; // [xsp+8h] [xbp-28h] BYREF

  buffEntity = 0LL;
  if ( !task )
    goto LABEL_13;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  buffEntity = 0LL;
  if ( !ServantData )
    goto LABEL_13;
  v8 = ServantData;
  buffData = ServantData->fields.buffData;
  if ( !buffData )
    goto LABEL_13;
  ShiftGuts = BattleBuffData__GetShiftGuts(buffData, v8, &buffEntity, 0LL);
  if ( buffEntity )
  {
    v11 = ShiftGuts;
    MotionName = BuffEntity__GetMotionName(buffEntity, 0LL);
    v13 = this->fields.data;
    if ( v13 )
    {
      v14 = MotionName;
      perf = v13->fields.perf;
      if ( perf )
      {
        BattlePerformance__PlayShiftGuts(perf, 0LL);
        v16 = v8->fields.buffData;
        if ( v16 )
        {
          v17 = BattleBuffData__usedProgressing(v16, 0LL);
          logic = this->fields.logic;
          if ( logic )
          {
            if ( logic->fields.logicReaction )
              return BattleLogicReaction__createResurrectionCommon(
                       (BattleLogicReaction_o *)v17,
                       v8,
                       buffEntity,
                       v11,
                       task->fields.isForcedSpeedOne,
                       v14,
                       v18);
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftServant(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x21
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  BattleActionData_ShiftServant_o *v26; // x22
  BattleLogic_o *logic; // x0

  if ( (byte_40FC433 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, task);
    sub_B16FFC(&BattleActionData_ShiftServant_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8777/*"MOTION_SHIFT"*/, v6);
    byte_40FC433 = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  v14 = sub_B170CC(BattleActionData_TypeInfo, v10, v11, v12, v13);
  BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  if ( !v14 )
    goto LABEL_10;
  *(_DWORD *)(v14 + 32) = ServantData->fields.uniqueId;
  v21 = (System_Int32_array **)StringLiteral_8777/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v14 + 64) = StringLiteral_8777/*"MOTION_SHIFT"*/;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 64), v21, v15, v16, v17, v18, v19, v20);
  v26 = (BattleActionData_ShiftServant_o *)sub_B170CC(BattleActionData_ShiftServant_TypeInfo, v22, v23, v24, v25);
  BattleActionData_ShiftServant___ctor(v26, 0LL);
  if ( !v26
    || (BattleActionData_ShiftServant__setBeforeSvtData(v26, ServantData, 0LL),
        BattleServantData__setShiftServant(ServantData, this->fields.data, 1, 0LL),
        BattleServantData__SetIsBattleShift(ServantData, 1, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v26, ServantData, 0LL),
        BattleActionData__setShiftServant((BattleActionData_o *)v14, v26, 0LL),
        (logic = this->fields.logic) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  BattleLogic__actEnemyPtPassiveSkill(logic, ServantData->fields.uniqueId, 1, 0, 0LL);
  return (BattleActionData_o *)v14;
}


BattleActionData_o *__fastcall BattleLogicNomal__createStartEnemyTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  struct BattleData_o *data; // x8
  BattleActionData_o *v8; // x20
  struct BattleData_o *v9; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x21
  struct BattleData_o *v12; // x8
  struct BattlePerformance_o *v13; // x8
  BattleActionCamera_o *v14; // x0

  if ( (byte_40FC42A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, task);
    sub_B16FFC(&StringLiteral_11051/*"RESET_CAMERA_BAT"*/, v5);
    byte_40FC42A = 1;
  }
  BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0LL;
  v8 = BattleLogicNomal__DeadChangePos(this, v6);
  if ( v8 )
  {
    v9 = this->fields.data;
    if ( !v9 )
      goto LABEL_19;
    perf = v9->fields.perf;
    if ( !perf )
      goto LABEL_19;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actioncamera, 0LL, 0LL) )
    {
      v12 = this->fields.data;
      if ( v12 )
      {
        v13 = v12->fields.perf;
        if ( v13 )
        {
          v14 = v13->fields.actioncamera;
          if ( v14 )
          {
            BattleActionCamera__sendMainEvent(v14, (System_String_o *)StringLiteral_11051/*"RESET_CAMERA_BAT"*/, 0LL);
            return v8;
          }
        }
      }
LABEL_19:
      sub_B170D4();
    }
  }
  return v8;
}


BattleActionData_o *__fastcall BattleLogicNomal__createStartTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldServantList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w10
  unsigned int v10; // w8
  BattleServantData_o *v11; // x10
  struct BattleData_o *v12; // x8
  struct BattleData_o *v13; // x8
  struct BaseBattleEvent_o *battleEvent; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  FieldServantList = BattleData__getFieldServantList(data, 0, 0LL);
  if ( !FieldServantList )
    goto LABEL_13;
  max_length = FieldServantList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(FieldServantList, v7, v8);
        sub_B170A0();
      }
      v11 = FieldServantList->m_Items[v10];
      if ( !v11 )
        break;
      v11->fields.isBuffProgressFlg = 1;
      max_length = FieldServantList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_8;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_8:
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_13;
  v12->fields.systemflg_skipDeadtemp = 0;
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_13;
  if ( !task )
    goto LABEL_13;
  battleEvent = v13->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_13;
  ((void (__fastcall *)(struct BaseBattleEvent_o *, bool, Il2CppMethodPointer))battleEvent->klass->vtable._28_InitBattleStartTurn.method)(
    battleEvent,
    task->fields.actiontype == 20,
    battleEvent->klass->vtable._29_IsRemainBattleEndWave.methodPtr);
  return 0LL;
}


int32_t __fastcall BattleLogicNomal__getCountSubmember(
        BattleLogicNomal_o *this,
        BattleServantData_array *svtList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  int32_t v5; // w20
  unsigned __int64 v6; // x22
  BattleServantData_o *v7; // x21

  if ( !svtList )
    sub_B170D4();
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
    {
      sub_B17100(this, svtList, method);
      sub_B170A0();
    }
    v7 = svtList->m_Items[v6];
    if ( v7 )
    {
      this = (BattleLogicNomal_o *)BattleServantData__isAlive(svtList->m_Items[v6], 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7->fields.isEntry
          || (this = (BattleLogicNomal_o *)BattleServantData__get_isWaitRepop(v7, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          ++v5;
        }
      }
    }
    LODWORD(v3) = svtList->max_length;
    ++v6;
  }
  while ( (__int64)v6 < (int)v3 );
  return v5;
}


int32_t __fastcall BattleLogicNomal__getShiftableUniqueId(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  BattleServantData_array *v9; // x20
  unsigned int v10; // w21
  Il2CppClass **v11; // x22
  char *v12; // x22
  BattleServantData_array *v13; // t1

  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_14;
  max_length = FieldEnemyServantList->max_length;
  v9 = FieldEnemyServantList;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
      goto LABEL_15;
    v11 = &v9->obj.klass + (int)v10;
    v13 = (BattleServantData_array *)v11[4];
    v12 = (char *)(v11 + 4);
    FieldEnemyServantList = v13;
    if ( !v13 )
      goto LABEL_14;
    if ( FieldEnemyServantList->max_length != uniqueId )
    {
      FieldEnemyServantList = (BattleServantData_array *)BattleServantData__isShiftReady(
                                                           (BattleServantData_o *)FieldEnemyServantList,
                                                           0LL);
      if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        break;
    }
    max_length = v9->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
  if ( v10 >= v9->max_length )
  {
LABEL_15:
    sub_B17100(FieldEnemyServantList, v6, v7);
    sub_B170A0();
  }
  if ( !*(_QWORD *)v12 )
LABEL_14:
    sub_B170D4();
  return *(_DWORD *)(*(_QWORD *)v12 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return data->fields.battleEvent;
}


void __fastcall BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  BattleLogic_reactionFunction_o *v9; // x21

  if ( (byte_40FC41E & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v7);
    sub_B16FFC(&BattleLogic_reactionFunction_TypeInfo, v8);
    byte_40FC41E = 1;
  }
  v9 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, list, method, v3, v4);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    36,
    (System_String_o *)v9,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t ActorId; // w0
  const MethodInfo *v11; // x2
  int32_t ShiftableUniqueId; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t v17; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x1
  BattleBuffData_o *buffData; // x0
  bool IsShiftGuts; // w23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  BattleLogicTask_o *v28; // x22
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  struct BattleLogic_o *logic; // x8
  BattleLogicReaction_o *logicReaction; // x0
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  BattleLogicTask_o *v40; // x21
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x3

  if ( (byte_40FC434 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, task);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_40FC434 = 1;
  }
  if ( !task )
    goto LABEL_20;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  ShiftableUniqueId = BattleLogicNomal__getShiftableUniqueId(this, ActorId, v11);
  if ( !ShiftableUniqueId )
    return this->fields.zeroTask;
  v17 = ShiftableUniqueId;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  ServantData = BattleData__getServantData(data, v17, 0LL);
  if ( !ServantData )
    goto LABEL_20;
  v21 = ServantData;
  buffData = ServantData->fields.buffData;
  if ( !buffData )
    goto LABEL_20;
  IsShiftGuts = BattleBuffData__IsShiftGuts(buffData, v21, 0LL);
  v28 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v24, v25, v26, v27);
  BattleLogicTask___ctor(v28, v29);
  if ( !v28 )
    goto LABEL_20;
  if ( IsShiftGuts )
  {
    v28->fields.actiontype = 62;
    BattleLogicTask__setActor(v28, 3, v17, v30);
    if ( v18 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      logic = this->fields.logic;
      if ( logic )
      {
        logicReaction = logic->fields.logicReaction;
        if ( logicReaction )
        {
          TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                      logicReaction,
                                                                      v17,
                                                                      v31);
          if ( TaskGuts )
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
              TaskGuts,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          goto LABEL_18;
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
  v28->fields.actiontype = 37;
  BattleLogicTask__setActor(v28, 3, v17, v30);
  if ( !v18 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v18,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_18:
  v40 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v35, v36, v37, v38);
  BattleLogicTask___ctor(v40, v41);
  if ( !v40 )
    goto LABEL_20;
  v40->fields.actiontype = 36;
  BattleLogicTask__setActor(v40, 3, v17, v42);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v18,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskAddCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct BattleData_o *v13; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v16; // x0
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v18; // x22
  BattleData_o *v19; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  BattleLogicTask_o *v26; // x23
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  BattleLogicTarget_o *logictarget; // x0
  const MethodInfo *v31; // x3

  if ( (byte_40FC420 & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_40FC420 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_24;
  battleEvent = v13->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_24;
  if ( (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer))battleEvent->klass->vtable._30_IsCommandAttackable.method)(
          battleEvent,
          battleEvent->klass->vtable._31_CheckBuffCommonProgressTurn.methodPtr) & 1) == 0 )
    goto LABEL_22;
  if ( !data )
    goto LABEL_24;
  combodata = data->fields.combodata;
  if ( !combodata )
    goto LABEL_24;
  if ( combodata->fields.samecount < 3 )
    goto LABEL_22;
  v16 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v16 = BattleDataDefine_TypeInfo;
  }
  SelectCommand = BattleData__getSelectCommand(data, v16->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !SelectCommand )
    goto LABEL_24;
  v18 = SelectCommand;
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_24;
  ServantData = BattleData__getServantData(v19, v18->fields.uniqueId, 0LL);
  if ( !ServantData )
    goto LABEL_24;
  v21 = ServantData;
  if ( !BattleServantData__isAlive(ServantData, 0, 0LL)
    || !v21->fields.isEntry
    || !BattleServantData__isAction(v21, 0LL) )
  {
LABEL_22:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_24:
    sub_B170D4();
  }
  v26 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v22, v23, v24, v25);
  BattleLogicTask___ctor(v26, v27);
  if ( !v26 )
    goto LABEL_24;
  BattleLogicTask__setActor(v26, 2, v18->fields.uniqueId, v28);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_24;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v26, v29);
  BattleLogicTask__setAddAttackCommand(v26, data->fields.combodata, v18, v31);
  v26->fields.isCanCounterTask = 1;
  if ( !v12 )
    goto LABEL_24;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleLogicTask_o *v15; // x20
  const MethodInfo *v16; // x1
  int v17; // w8
  const MethodInfo *v18; // x1

  if ( (byte_40FC430 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_40FC430 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v15 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v11, v12, v13, v14);
    BattleLogicTask___ctor(v15, v18);
    if ( !v15 )
      goto LABEL_13;
    v17 = 19;
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v10 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
      sub_B170D4();
    }
    v15 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v11, v12, v13, v14);
    BattleLogicTask___ctor(v15, v16);
    if ( !v15 )
      goto LABEL_13;
    v17 = 18;
  }
  v15->fields.actiontype = v17;
  if ( !v10 )
    goto LABEL_13;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCheckShiftServants(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  return BattleLogicNomal__shiftServantTaskReaction(this, this->fields.tmpShiftTask, (const MethodInfo *)data);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskComboOrderAfter(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  BattleLogic_o *logic; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BattleLogicTask_o *v16; // x20
  const MethodInfo *v17; // x1

  if ( (byte_40FC422 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_40FC422 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v16 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v12, v13, v14, v15),
        BattleLogicTask___ctor(v16, v17),
        !v16)
    || (v16->fields.actiontype = 7, !v10) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskComboOrderBefore(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleData_o *v4; // x8
  struct BaseBattleEvent_o *battleEvent; // x0

  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_7;
  battleEvent = v4->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer, BattleData_o *, const MethodInfo *))battleEvent->klass->vtable._30_IsCommandAttackable.method)(
          battleEvent,
          battleEvent->klass->vtable._31_CheckBuffCommonProgressTurn.methodPtr,
          data,
          method) & 1) != 0 )
  {
    if ( data )
    {
      BattleData__ApplyCommandcardFirstBonus(data, 0LL);
      return this->fields.zeroTask;
    }
LABEL_7:
    sub_B170D4();
  }
  return this->fields.zeroTask;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct BattleData_o *v13; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  int32_t v15; // w22
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v17; // x23
  BattleData_o *v18; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v20; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  BattleLogicTask_o *v25; // x24
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x3
  BattleLogic_o *logic; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  int32_t TreasureDvcId; // w0
  const MethodInfo *v34; // x2
  BattleLogicTarget_o *v35; // x0
  const MethodInfo *v36; // x2
  BattleLogicTarget_o *logictarget; // x0

  if ( (byte_40FC41F & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_40FC41F = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_33;
  battleEvent = v13->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_33;
  if ( (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer))battleEvent->klass->vtable._30_IsCommandAttackable.method)(
          battleEvent,
          battleEvent->klass->vtable._31_CheckBuffCommonProgressTurn.methodPtr) & 1) != 0 )
  {
    if ( ltype == 3 )
      v15 = 2;
    else
      v15 = ltype == 2;
    this->fields.commandIndex = v15;
    if ( !data )
      goto LABEL_33;
    SelectCommand = BattleData__getSelectCommand(data, v15, 0LL);
    if ( !SelectCommand )
      goto LABEL_33;
    v17 = SelectCommand;
    if ( !BattleCommandData__isBlank(SelectCommand, 0LL) )
    {
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_33;
      ServantData = BattleData__getServantData(v18, v17->fields.uniqueId, 0LL);
      if ( !ServantData )
        goto LABEL_33;
      v20 = ServantData;
      if ( BattleServantData__isAlive(ServantData, 0, 0LL)
        && v20->fields.isEntry
        && BattleServantData__isAction(v20, 0LL)
        && BattleServantData__isCardTypeAction(v20, v17, 0LL) )
      {
        v25 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v21, v22, v23, v24);
        BattleLogicTask___ctor(v25, v26);
        if ( v25 )
        {
          BattleLogicTask__setActionCommand(v25, data->fields.combodata, v17, v15, v27);
          if ( BattleData__isTutorial(data, 0LL) )
          {
            if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
              BattleCommandData__checkCriticalRate(v17, 0, 0LL);
          }
          else
          {
            BattleCommandData__LotteryPlayerSideCritical(v17, 0LL);
          }
          BattleLogicTask__setActor(v25, 2, v17->fields.uniqueId, v28);
          v25->fields.isCanCounterTask = 1;
          if ( v17->fields.treasureDvc < 1 )
          {
            BattleData__setTDChain(data, 0, 0LL);
            logictarget = this->fields.logictarget;
            if ( logictarget )
            {
              BattleLogicTarget__getTargetBattleServantData(logictarget, v25, v36);
              if ( v12 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
            }
          }
          else
          {
            logic = this->fields.logic;
            if ( logic )
            {
              BattleLogic__resetOverKill(logic, 0LL);
              BattleLogicTask__setActor(v25, 2, v20->fields.uniqueId, v31);
              BattleLogicTask__setActionCommand(v25, data->fields.combodata, v17, v15, v32);
              TreasureDvcId = BattleServantData__getTreasureDvcId(v20, 1, 0LL);
              v25->fields.actiontype = 4;
              v25->fields.treasureDvcId = TreasureDvcId;
              v25->fields.tresureDvcLv = 1;
              v35 = this->fields.logictarget;
              if ( v35 )
              {
                BattleLogicTarget__getTargetBattleServantData(v35, v25, v34);
                if ( v12 )
                {
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v12,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                  BattleData__setTDChain(data, 1, 0LL);
                  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                }
              }
            }
          }
        }
LABEL_33:
        sub_B170D4();
      }
    }
  }
  if ( !v12 )
    goto LABEL_33;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskCounterFunc(
        BattleLogicNomal_o *this,
        BattleData_o *data,
        bool isEnemy,
        bool isSkillCounter,
        bool isInitLogicHp,
        const MethodInfo *method)
{
  _BOOL4 v6; // w24
  _BOOL4 v7; // w26
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v30; // x0
  __int64 ServantData; // x0
  __int64 wasAttackTargetId; // x1
  __int64 v33; // x2
  __int64 v34; // x8
  __int64 v35; // x23
  __int64 v36; // x8
  unsigned __int64 v37; // x28
  BattleServantData_o *v38; // x27
  BattleServantData_o *v39; // x20
  BattleBuffData_o *buffData; // x0
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_IEnumerable_T__o *v43; // x21
  __int64 v44; // x3
  __int64 v45; // x4
  void *monitor; // x8
  __int64 v47; // x24
  BattleBuffData_BuffData_o *v48; // x20
  __int64 v49; // x25
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  const MethodInfo *v53; // x2
  BattleBuffData_o *v54; // x0
  int32_t counterId; // w1
  int32_t counterLv; // w2
  int32_t counterOc; // w8
  __int64 v58; // x22
  BattleSkillInfoData_o *v59; // x26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  __int64 v62; // x2
  System_Int32_array *v63; // x22
  const MethodInfo *v64; // x6
  BuffEntity_o *Entity; // x0
  System_Int32_array **CounterMessage; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x3
  __int64 v74; // x9
  BattleLogicNomal___c_c *v75; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__15_0; // x20
  Il2CppObject *v78; // x21
  struct BattleLogicNomal___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct BattleLogic_o *logic; // x8
  BattleLogicEnemyAi_o *logicEnemyAi; // x0
  BattleLogic_o *v88; // x0
  _BOOL4 v90; // [xsp+Ch] [xbp-94h]
  BattleLogicNomal_o *v91; // [xsp+10h] [xbp-90h]
  _BOOL4 v92; // [xsp+1Ch] [xbp-84h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v94; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *v95; // [xsp+30h] [xbp-70h]
  char v96; // [xsp+3Ch] [xbp-64h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v97; // [xsp+40h] [xbp-60h]

  v6 = isInitLogicHp;
  v7 = isSkillCounter;
  if ( (byte_40FC421 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, data);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v11);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v12);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___66714872, v18);
    sub_B16FFC(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v19);
    sub_B16FFC(&int___TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v24);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__, v27);
    sub_B16FFC(&BattleLogicNomal___c_TypeInfo, v28);
    byte_40FC421 = 1;
  }
  v97 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  data,
                                                                                                  isEnemy,
                                                                                                  isSkillCounter,
                                                                                                  isInitLogicHp);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v97,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_73;
  ServantData = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v30,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  v95 = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantData;
  if ( !data )
    goto LABEL_73;
  v34 = 288LL;
  if ( isEnemy )
    v34 = 296LL;
  v35 = *(__int64 *)((char *)&data->klass + v34);
  if ( !v35 )
    goto LABEL_73;
  v36 = *(_QWORD *)(v35 + 24);
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    do
    {
      if ( v37 >= (unsigned int)v36 )
      {
LABEL_72:
        sub_B17100(ServantData, wasAttackTargetId, v33);
        sub_B170A0();
      }
      ServantData = (__int64)BattleData__getServantData(data, *(_DWORD *)(v35 + 4 * v37 + 32), 0LL);
      if ( ServantData )
      {
        v38 = (BattleServantData_o *)ServantData;
        ServantData = BattleServantData__isAliveLogic((BattleServantData_o *)ServantData, 0, 0LL);
        if ( (ServantData & 1) != 0 )
        {
          ServantData = BattleServantData__isAction(v38, 0LL);
          if ( (ServantData & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v38->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              ServantData = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( ServantData )
              {
                v39 = (BattleServantData_o *)ServantData;
                if ( v38->fields.isEnemy != (*(_BYTE *)(ServantData + 447) != 0) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)ServantData, 0LL);
                  ServantData = BattleServantData__isAliveLogic(v39, 0, 0LL);
                  if ( (ServantData & 1) != 0 )
                  {
                    buffData = v38->fields.buffData;
                    if ( !buffData )
                      goto LABEL_73;
                    ServantData = (__int64)BattleBuffData__GetCounterFuncBuffDataList(buffData, v38, v39, 0, 0LL);
                    if ( !ServantData )
                      goto LABEL_73;
                    v43 = (System_Collections_Generic_IEnumerable_T__o *)ServantData;
                    if ( *(_QWORD *)(ServantData + 24) )
                    {
                      v90 = v6;
                      v91 = this;
                      v94 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B170CC(
                                                                                               System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                                               wasAttackTargetId,
                                                                                               v33,
                                                                                               v41,
                                                                                               v42);
                      System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
                        v94,
                        v43,
                        (const MethodInfo_21DEA2C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___66714872);
                      monitor = v43[1].monitor;
                      if ( (int)monitor >= 1 )
                      {
                        v47 = 4LL;
                        v96 = 1;
                        v92 = v7;
                        do
                        {
                          if ( v47 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_72;
                          v48 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v43->klass + v47);
                          if ( !v7 )
                            goto LABEL_76;
                          if ( !v48 )
                            goto LABEL_73;
                          if ( v48->fields.isSkillReaction )
                          {
LABEL_76:
                            v49 = sub_B170CC(BattleLogicTask_TypeInfo, wasAttackTargetId, v33, v44, v45);
                            BattleLogicTask___ctor((BattleLogicTask_o *)v49, v50);
                            if ( !v49 )
                              goto LABEL_73;
                            v52 = isEnemy ? 3 : 2;
                            BattleLogicTask__setActor((BattleLogicTask_o *)v49, v52, v38->fields.uniqueId, v51);
                            BattleLogicTask__setTarget((BattleLogicTask_o *)v49, v38->fields.wasAttackTargetId, v53);
                            v54 = v38->fields.buffData;
                            if ( !v54 )
                              goto LABEL_73;
                            ServantData = BattleBuffData__checkBuffSuccessful(v54, v48, 1, 0LL);
                            if ( (ServantData & 1) != 0 )
                            {
                              v38->fields.overkillTargetId = -1;
                              if ( !v48 )
                                goto LABEL_73;
                              counterId = v48->fields.counterId;
                              counterLv = v48->fields.counterLv;
                              if ( v48->fields.isUseTreasureDevice )
                              {
                                counterOc = v48->fields.counterOc;
                                *(_DWORD *)(v49 + 48) = 5;
                                *(_DWORD *)(v49 + 84) = counterId;
                                *(_DWORD *)(v49 + 88) = counterLv;
                                *(_DWORD *)(v49 + 164) = counterOc;
                              }
                              else
                              {
                                if ( !MasterData_WarQuestSelectionMaster )
                                  goto LABEL_73;
                                ServantData = (__int64)SkillLvMaster__GetEntity(
                                                         MasterData_WarQuestSelectionMaster,
                                                         counterId,
                                                         counterLv,
                                                         0LL);
                                if ( !ServantData )
                                  goto LABEL_54;
                                v58 = ServantData;
                                v59 = (BattleSkillInfoData_o *)sub_B170CC(
                                                                 BattleSkillInfoData_TypeInfo,
                                                                 wasAttackTargetId,
                                                                 v33,
                                                                 v44,
                                                                 v45);
                                BattleSkillInfoData___ctor(v59, 0LL);
                                if ( !v59 )
                                  goto LABEL_73;
                                v59->fields.type = 20;
                                uniqueId = v38->fields.uniqueId;
                                klass = v59->klass;
                                v59->fields.index = 0;
                                v59->fields.svtUniqueId = uniqueId;
                                ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
                                  v59,
                                  *(unsigned int *)(v58 + 16),
                                  klass->vtable._5_get_skillId.methodPtr);
                                v59->fields.skilllv = *(_DWORD *)(v58 + 20);
                                ServantData = sub_B17014(int___TypeInfo, 1LL, v62);
                                if ( !ServantData )
                                  goto LABEL_73;
                                v63 = (System_Int32_array *)ServantData;
                                if ( !*(_DWORD *)(ServantData + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(ServantData + 32) = v38->fields.wasAttackTargetId;
                                ServantData = sub_B17014(int___TypeInfo, 1LL, v33);
                                if ( !ServantData )
                                  goto LABEL_73;
                                if ( !*(_DWORD *)(ServantData + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(ServantData + 32) = v38->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  (BattleLogicTask_o *)v49,
                                  v59,
                                  v63,
                                  (System_Int32_array *)ServantData,
                                  0,
                                  0,
                                  v64);
                                v7 = v92;
                              }
                              if ( !v95 )
                                goto LABEL_73;
                              Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         v95,
                                                         v48->fields.buffId,
                                                         (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Entity )
                                goto LABEL_73;
                              CounterMessage = (System_Int32_array **)BuffEntity__GetCounterMessage(Entity, 0LL);
                              *(_QWORD *)(v49 + 152) = CounterMessage;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)(v49 + 152),
                                CounterMessage,
                                v67,
                                v68,
                                v69,
                                v70,
                                v71,
                                v72);
                              *(_DWORD *)(v49 + 144) = 2;
                              *(_BYTE *)(v49 + 162) = 1;
                              if ( (v96 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  (BattleLogicTask_o *)v49,
                                  v38,
                                  (BattleBuffData_BuffData_array *)v43,
                                  v73);
                              if ( !v97 )
                                goto LABEL_73;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v97,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
                                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              if ( !v94 )
                                goto LABEL_73;
                              ServantData = System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                              v94,
                                              v48,
                                              (const MethodInfo_21DF190 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v96 = 0;
                            }
                          }
LABEL_54:
                          LODWORD(monitor) = v43[1].monitor;
                          v74 = v47 - 3;
                          ++v47;
                        }
                        while ( v74 < (int)monitor );
                      }
                      v75 = BattleLogicNomal___c_TypeInfo;
                      if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v75 = BattleLogicNomal___c_TypeInfo;
                      }
                      static_fields = v75->static_fields;
                      this = v91;
                      v6 = v90;
                      _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__15_0;
                      if ( !_9__15_0 )
                      {
                        if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v75);
                          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        }
                        v78 = (Il2CppObject *)static_fields->__9;
                        _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(System_Action_BattleBuffData_BuffData__TypeInfo, wasAttackTargetId, v33, v44, v45);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          _9__15_0,
                          v78,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__,
                          (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
                        v79 = BattleLogicNomal___c_TypeInfo->static_fields;
                        v79->__9__15_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__15_0;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&v79->__9__15_0,
                          (System_Int32_array **)_9__15_0,
                          v80,
                          v81,
                          v82,
                          v83,
                          v84,
                          v85);
                      }
                      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        (System_Collections_Generic_IEnumerable_T__o *)v94,
                        (System_Action_T__o *)_9__15_0,
                        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v36) = *(_DWORD *)(v35 + 24);
    }
    while ( (__int64)++v37 < (int)v36 );
  }
  if ( !v97 )
    goto LABEL_73;
  if ( v97->fields._size < 1 )
    goto LABEL_70;
  logic = this->fields.logic;
  if ( !logic || (logicEnemyAi = logic->fields.logicEnemyAi) == 0LL )
LABEL_73:
    sub_B170D4();
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt(logicEnemyAi, 1, 0LL);
LABEL_70:
  v88 = this->fields.logic;
  if ( !v88 )
    goto LABEL_73;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    v88,
    (System_Collections_Generic_List_BattleLogicTask__o *)v97,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v97,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCounterFuncEnemy(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return BattleLogicNomal__taskCounterFunc(this, data, 1, 0, 1, v4);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCounterFuncPlayer(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return BattleLogicNomal__taskCounterFunc(this, data, 0, 0, 1, v4);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskPlayMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        System_String_o *motionName,
        UnityEngine_Transform_o *Tr,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x23
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x3
  int32_t v33; // w1

  if ( (byte_40FC427 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, svtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_40FC427 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  svtData,
                                                                                                  motionName,
                                                                                                  Tr,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v17 = sub_B170CC(BattleLogicTask_TypeInfo, v13, v14, v15, v16);
  BattleLogicTask___ctor((BattleLogicTask_o *)v17, v18);
  if ( !v17 )
    goto LABEL_11;
  *(_QWORD *)(v17 + 104) = motionName;
  *(_DWORD *)(v17 + 48) = 10;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v17 + 104),
    (System_Int32_array **)motionName,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !Tr )
    goto LABEL_11;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v17 + 112) = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 112), gameObject, v26, v27, v28, v29, v30, v31);
  if ( !svtData )
    goto LABEL_11;
  v33 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v17, v33, svtData->fields.uniqueId, v32);
  if ( !v12 )
LABEL_11:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskPlaySubEntryMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        UnityEngine_Transform_o *Tr,
        bool isTactical,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Int32_array ***v20; // x8
  System_Int32_array **v21; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x21
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattleData_o *data; // x8
  BattleEntity_o *battle_ent; // x0
  StageEntity_o *StageEntityAtWave; // x0
  System_String_o *v45; // x0
  const MethodInfo *v46; // x3
  System_String_o *v47; // x0
  BattleData_o *v48; // x8
  System_String_o *v49; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v51; // x2
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  int32_t uniqueId; // w2
  System_Int32_array **v55; // x19
  const MethodInfo *v56; // x3
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_o *v63; // x0
  struct BattleData_o *v64; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v66; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v68; // x2
  Il2CppObject *v69; // x0
  System_Int32_array **v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int v78; // [xsp+8h] [xbp-38h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC428 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, svtData);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_2519/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_B16FFC(&StringLiteral_8770/*"MOTION_ENTRY"*/, v16);
    sub_B16FFC(&StringLiteral_2517/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_B16FFC(&StringLiteral_2518/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_B16FFC(&StringLiteral_8771/*"MOTION_ENTRY_TAC"*/, v19);
    byte_40FC428 = 1;
  }
  v20 = (System_Int32_array ***)&StringLiteral_8771/*"MOTION_ENTRY_TAC"*/;
  if ( !isTactical )
    v20 = (System_Int32_array ***)&StringLiteral_8770/*"MOTION_ENTRY"*/;
  v21 = *v20;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  svtData,
                                                                                                  Tr,
                                                                                                  isTactical,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v27 = sub_B170CC(BattleLogicTask_TypeInfo, v23, v24, v25, v26);
  BattleLogicTask___ctor((BattleLogicTask_o *)v27, v28);
  if ( !v27 )
    goto LABEL_30;
  *(_QWORD *)(v27 + 104) = v21;
  *(_DWORD *)(v27 + 48) = 10;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 104), v21, v29, v30, v31, v32, v33, v34);
  if ( !Tr )
    goto LABEL_30;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v27 + 112) = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 112), gameObject, v36, v37, v38, v39, v40, v41);
  if ( !svtData )
    goto LABEL_30;
  if ( svtData->fields.isEnemy )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_30;
    battle_ent = data->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_30;
    StageEntityAtWave = BattleEntity__GetStageEntityAtWave(battle_ent, data->fields.wavecount, 0LL);
    if ( !StageEntityAtWave )
      goto LABEL_30;
    if ( StageEntity__isNotDisplayRemain(StageEntityAtWave, 0LL) )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_2518/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_2517/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
      v64 = this->fields.data;
      if ( !v64 )
        goto LABEL_30;
      EnemyCountStartValue_k__BackingField = v64->fields._EnemyCountStartValue_k__BackingField;
      v66 = v63;
      EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v64, 0LL);
      v78 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v68)
          + EnemyCountStartValue_k__BackingField;
      v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
      v45 = System_String__Format(v66, v69, 0LL);
    }
    v70 = (System_Int32_array **)v45;
    BattleLogicTask__setActor((BattleLogicTask_o *)v27, 3, svtData->fields.uniqueId, v46);
    *(_QWORD *)(v27 + 152) = v70;
    sub_B16F98((BattleServantConfConponent_o *)(v27 + 152), v70, v71, v72, v73, v74, v75, v76);
    *(_DWORD *)(v27 + 144) = 1;
    if ( v22 )
      goto LABEL_29;
LABEL_30:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2519/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_30;
  v49 = v47;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v48, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v51);
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v53 = System_String__Format(v49, v52, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v55 = (System_Int32_array **)v53;
  BattleLogicTask__setActor((BattleLogicTask_o *)v27, 2, uniqueId, v56);
  *(_QWORD *)(v27 + 152) = v55;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 152), v55, v57, v58, v59, v60, v61, v62);
  *(_DWORD *)(v27 + 144) = 1;
  if ( !v22 )
    goto LABEL_30;
LABEL_29:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F9DCF & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicNomal___c_TypeInfo, v1);
    byte_40F9DCF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicNomal___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicNomal___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BattleLogicNomal___c___ctor(BattleLogicNomal___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__20_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  return targetSvtData;
}


int32_t __fastcall BattleLogicNomal___c___CreateCommandBattle_b__20_2(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__20_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19

  if ( (byte_40F9DD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v5);
    byte_40F9DD0 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 *(_QWORD *)&x,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v6;
}


bool __fastcall BattleLogicNomal___c___CreateCommandBattle_b__20_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0LL);
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__18_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__36_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_B170D4();
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__15_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  BattleBuffData_BuffData__RevertUnused(x, 1, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___ctor(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_CheckInvokeBuff_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__1(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleServantData_o *actSvtData; // x20
  BuffList_c *v9; // x0
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v11; // x22

  if ( (byte_40F9DD1 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, targetSvtData);
    sub_B16FFC(&BattleBuffData_CheckInvokeBuff_TypeInfo, v7);
    byte_40F9DD1 = 1;
  }
  actSvtData = this->fields.actSvtData;
  v9 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v9 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v9->static_fields->CommandCodeFunctionActs;
  v11 = (BattleBuffData_CheckInvokeBuff_o *)sub_B170CC(
                                              BattleBuffData_CheckInvokeBuff_TypeInfo,
                                              targetSvtData,
                                              method,
                                              v3,
                                              v4);
  BattleBuffData_CheckInvokeBuff___ctor(v11, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v11;
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  if ( (byte_40F9DD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    byte_40F9DD2 = 1;
  }
  if ( !buffEnt )
    sub_B170D4();
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)this->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_18B7FA8 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  if ( (byte_40F9DD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    byte_40F9DD3 = 1;
  }
  if ( !buffEnt )
    sub_B170D4();
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)this->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_18B7FA8 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__6(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleCommandData_o *command; // x0
  struct BattleActionData_o *actiondata; // x8
  BattleServantData_o *result; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (command = this->fields.command) == 0LL
    || (BattleCommandData__UpdateCritical(command, this->fields.actSvtData, targetSvtData, _4__this->fields.data, 0LL),
        !targetSvtData)
    || (actiondata = this->fields.actiondata) == 0LL )
  {
    sub_B170D4();
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        bool isOnlyMain,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *mainTarget; // x0
  struct System_Func_BattleServantData__BattleServantData__o *targetTo; // x1

  if ( (byte_40F9DD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_40F9DD4 = 1;
  }
  if ( isOnlyMain )
  {
    mainTarget = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mainTarget;
    targetTo = this->fields.targetTo;
  }
  else
  {
    targetTo = this->fields.targetTo;
    mainTarget = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetSvtList;
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                          mainTarget,
                                                                          (System_Func_TSource__TResult__o *)targetTo,
                                                                          (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleData_o *data; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (data = _4__this->fields.data) == 0LL )
    sub_B170D4();
  return BattleData__getServantData(data, id, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass31_0___ctor(
        BattleLogicNomal___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass31_0___createEndTurnPlayer_b__0(
        BattleLogicNomal___c__DisplayClass31_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_B170D4();
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass34_0___ctor(
        BattleLogicNomal___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass34_0___createEndTurnEnemy_b__0(
        BattleLogicNomal___c__DisplayClass34_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_B170D4();
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}