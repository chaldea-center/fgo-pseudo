void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogicTask_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  BattleLogicTask_o *v13; // x20
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42176C6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___TypeInfo, method);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v3);
    byte_42176C6 = 1;
  }
  v4 = (struct BattleLogicTask_array *)sub_B0D8BC(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v4;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.zeroTask, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v13 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v11, v12);
  BattleLogicTask___ctor(v13, v14);
  this->fields.tmpShiftTask = v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tmpShiftTask,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
  return data->fields.isMultiTargetBattle && data->fields.justDeadTargetId != -1;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        BattleActionData_o **baseActionData,
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
  __int64 v64; // x23
  __int64 ActorId; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x1
  BattleData_o *data; // x21
  System_Int32_array **ServantData; // x0
  BattleServantData_o **v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  BattleActionData_o *v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  BattleActionData_o **v91; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **command; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  BattleActionData_o *v105; // x20
  const MethodInfo *v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **motionMessage; // x1
  const MethodInfo *v114; // x1
  struct BattleData_o *v115; // x8
  int32_t v116; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v117; // x25
  __int64 v118; // x1
  __int64 v119; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v120; // x20
  System_Collections_Generic_IEnumerable_TSource__o **v121; // x25
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  __int64 v128; // x1
  __int64 v129; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v132; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x20
  __int64 v134; // x1
  __int64 v135; // x2
  System_Func_int__BattleActionData_SideEffectData__o *v136; // x22
  __int64 v137; // x1
  __int64 v138; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x20
  BattleLogicNomal___c_c *v140; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__20_9; // x22
  Il2CppObject *v143; // x24
  struct BattleLogicNomal___c_StaticFields *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x20
  BattleLogicNomal___c_c *v152; // x0
  struct BattleLogicNomal___c_StaticFields *v153; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__20_0; // x22
  Il2CppObject *v155; // x24
  struct BattleLogicNomal___c_StaticFields *v156; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v163; // x24
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x9
  BuffList_c *v167; // x8
  BattleLogicNomal___c_c *v168; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  struct BattleLogicNomal___c_StaticFields *v170; // x8
  System_Func_BuffList_TYPE__BuffList_TYPE__o *_9__20_2; // x25
  Il2CppObject *v172; // x22
  struct BattleLogicNomal___c_StaticFields *v173; // x0
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  struct BattleLogicNomal___c_StaticFields *v180; // x8
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *_9__20_3; // x22
  Il2CppObject *v182; // x26
  struct BattleLogicNomal___c_StaticFields *v183; // x0
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_Int32_array **v190; // x0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x8
  int64_t v200; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v201; // x22
  __int64 v202; // x1
  __int64 v203; // x2
  int64_t commandAssistId; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v205; // x22
  __int64 v206; // x8
  BattleServantData_o **v207; // x24
  BattleCommandData_o **v208; // x22
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  __int64 v215; // x20
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  __int64 v222; // x1
  __int64 v223; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v224; // x20
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  __int64 v231; // x1
  __int64 v232; // x2
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x26
  __int64 v234; // x1
  __int64 v235; // x2
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v236; // x23
  __int64 v237; // x1
  __int64 v238; // x2
  const MethodInfo *v239; // x5
  __int64 v240; // x9
  __int64 v241; // x8
  unsigned __int64 v242; // x27
  int v243; // w20
  int32_t v244; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x25
  __int64 v246; // x8
  __int64 v247; // x20
  unsigned __int64 v248; // x10
  int *v249; // x11
  __int64 v250; // x0
  __int64 v251; // x20
  __int64 v252; // x8
  unsigned __int64 v253; // x10
  int *v254; // x11
  __int64 v255; // x0
  __int64 v256; // x8
  unsigned __int64 v257; // x10
  int *v258; // x11
  __int64 v259; // x0
  System_Type_o *v260; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x1
  __int64 v262; // x8
  unsigned __int64 v263; // x10
  int *v264; // x11
  __int64 v265; // x0
  unsigned __int64 v266; // x10
  __int64 v267; // x0
  int v268; // w20
  int v269; // w8
  BuffList_ACTION_array *v270; // x22
  int v271; // w8
  __int64 v272; // x8
  __int64 v273; // x20
  unsigned __int64 v274; // x10
  int *v275; // x11
  __int64 v276; // x0
  __int64 v277; // x20
  __int64 v278; // x8
  unsigned __int64 v279; // x24
  BattleBuffData_BuffData_o *v280; // x28
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_20781520; // x0
  __int64 v284; // x8
  unsigned __int64 v285; // x10
  int *v286; // x11
  __int64 v287; // x0
  __int64 v288; // x8
  unsigned __int64 v289; // x10
  int *v290; // x11
  __int64 v291; // x0
  BattleServantData_o *v292; // x3
  BattleBuffData_BuffData_array *v293; // x22
  __int64 v294; // x8
  unsigned __int64 v295; // x10
  int *v296; // x11
  __int64 v297; // x0
  __int64 v298; // x8
  __int64 v299; // x20
  unsigned __int64 v300; // x10
  int *v301; // x11
  __int64 v302; // x0
  __int64 v303; // x0
  __int64 v304; // x28
  BattleActionData_DamageData_o *v305; // x27
  __int64 v306; // x8
  unsigned __int64 v307; // x10
  int *v308; // x11
  __int64 v309; // x0
  __int64 v310; // x8
  unsigned __int64 v311; // x10
  int *v312; // x11
  __int64 v313; // x0
  BattleServantData_o *v314; // x25
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  BattleActionData_DamageData_o *v317; // x22
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v319; // x20
  BattleActionData_o *v320; // x0
  _BOOL8 v321; // x0
  BattleActionData_DamageData_o *v322; // x1
  __int64 v323; // x8
  unsigned __int64 v324; // x10
  int *v325; // x11
  __int64 v326; // x0
  BattleActionData_o *v327; // x20
  BattleActionData_o *v328; // x20
  BattleActionData_o *v329; // x20
  struct BattleData_o *v330; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v332; // x20
  const MethodInfo *v333; // x5
  __int64 v334; // x9
  BattleCommandData_o **v335; // x22
  __int64 v336; // x8
  unsigned __int64 v337; // x28
  char v338; // w20
  int32_t v339; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v340; // x25
  __int64 v341; // x8
  __int64 v342; // x20
  unsigned __int64 v343; // x10
  int *v344; // x11
  __int64 v345; // x0
  __int64 v346; // x20
  __int64 v347; // x8
  unsigned __int64 v348; // x10
  int *v349; // x11
  __int64 v350; // x0
  __int64 v351; // x8
  unsigned __int64 v352; // x10
  int *v353; // x11
  __int64 v354; // x0
  System_Type_o *v355; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v356; // x1
  __int64 v357; // x8
  unsigned __int64 v358; // x10
  int *v359; // x11
  __int64 v360; // x0
  unsigned __int64 v361; // x25
  __int64 v362; // x0
  int v363; // w20
  int v364; // w8
  BuffList_ACTION_array *v365; // x24
  int v366; // w8
  __int64 v367; // x8
  __int64 v368; // x20
  unsigned __int64 v369; // x10
  int *v370; // x11
  __int64 v371; // x0
  __int64 v372; // x20
  __int64 v373; // x8
  unsigned __int64 v374; // x27
  BattleLogicFunction_o *v375; // x0
  BattleBuffData_BuffData_array *v376; // x0
  __int64 v377; // x8
  unsigned __int64 v378; // x10
  int *v379; // x11
  __int64 v380; // x0
  __int64 v381; // x8
  unsigned __int64 v382; // x10
  int *v383; // x11
  __int64 v384; // x0
  BattleServantData_o *v385; // x3
  BattleBuffData_BuffData_array *v386; // x22
  __int64 v387; // x8
  unsigned __int64 v388; // x10
  int *v389; // x11
  __int64 v390; // x0
  __int64 v391; // x8
  __int64 v392; // x20
  unsigned __int64 v393; // x10
  int *v394; // x11
  __int64 v395; // x0
  __int64 v396; // x20
  __int64 v397; // x8
  unsigned __int64 v398; // x10
  int *v399; // x11
  __int64 v400; // x0
  __int64 v401; // x8
  unsigned __int64 v402; // x10
  int *v403; // x11
  __int64 v404; // x0
  __int64 v405; // x0
  __int64 v406; // x8
  unsigned __int64 v407; // x10
  int *v408; // x11
  __int64 v409; // x0
  _BOOL8 v410; // x0
  Il2CppObject *current; // x8
  _BYTE *monitor; // x9
  BattleData_o *v413; // x0
  __int64 v414; // x0
  __int64 v415; // x0
  const MethodInfo *v416; // [xsp+0h] [xbp-130h]
  int32_t AttackType; // [xsp+14h] [xbp-11Ch]
  __int64 *v418; // [xsp+18h] [xbp-118h]
  BattleLogicTask_o *v419; // [xsp+20h] [xbp-110h]
  __int64 *v420; // [xsp+28h] [xbp-108h]
  int32_t v421; // [xsp+34h] [xbp-FCh]
  unsigned __int64 v422; // [xsp+38h] [xbp-F8h]
  BattleServantData_o *optSvt; // [xsp+40h] [xbp-F0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v424; // [xsp+48h] [xbp-E8h]
  BattleBuffData_o *v425; // [xsp+50h] [xbp-E0h]
  System_Func_T__TResult__o *v426; // [xsp+58h] [xbp-D8h]
  __int64 v427; // [xsp+60h] [xbp-D0h]
  BuffList_ACTION_array *attackActs; // [xsp+68h] [xbp-C8h]
  BattleLogic_DamageProcessArgs_o *attackActsa; // [xsp+68h] [xbp-C8h]
  BattleServantData_o **v430; // [xsp+70h] [xbp-C0h]
  BattleCommandData_o **v431; // [xsp+78h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v432; // [xsp+80h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v433[2]; // [xsp+88h] [xbp-A8h] BYREF
  int v434; // [xsp+BCh] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v435; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_42176B2 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_ACTION___TypeInfo, task);
    sub_B0D8A4(&Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__, v7);
    sub_B0D8A4(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v8);
    sub_B0D8A4(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v9);
    sub_B0D8A4(&BattleActionData_TypeInfo, v10);
    sub_B0D8A4(&BattleServantData___TypeInfo, v11);
    sub_B0D8A4(&bool___TypeInfo, v12);
    sub_B0D8A4(&BuffList_TypeInfo, v13);
    sub_B0D8A4(&BattleLogic_DamageProcessArgs_TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v17);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v18);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v19);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v20);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v24);
    sub_B0D8A4(&Method_System_Func_BattleServantData__BattleServantData__Invoke__, v25);
    sub_B0D8A4(&Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__, v26);
    sub_B0D8A4(&Method_System_Func_bool__IEnumerable_BattleServantData____ctor__, v27);
    sub_B0D8A4(&Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__, v28);
    sub_B0D8A4(&Method_System_Func_BattleServantData__BattleServantData___ctor__, v29);
    sub_B0D8A4(&Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__, v30);
    sub_B0D8A4(&Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__, v31);
    sub_B0D8A4(&Method_System_Func_int__BattleServantData___ctor__, v32);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v33);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v34);
    sub_B0D8A4(&System_Func_bool__IEnumerable_BattleServantData___TypeInfo, v35);
    sub_B0D8A4(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v36);
    sub_B0D8A4(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v37);
    sub_B0D8A4(&System_Func_BattleServantData__BattleServantData__TypeInfo, v38);
    sub_B0D8A4(&System_Func_int__BattleServantData__TypeInfo, v39);
    sub_B0D8A4(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v40);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v41);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v42);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v43);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v44);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v45);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__Add__, v46);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v47);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v48);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v49);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v50);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51);
    sub_B0D8A4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__, v52);
    sub_B0D8A4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__, v53);
    sub_B0D8A4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__, v54);
    sub_B0D8A4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__, v55);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__, v56);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__, v57);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__, v58);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__, v59);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__, v60);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__, v61);
    sub_B0D8A4(&BattleLogicNomal___c__DisplayClass20_0_TypeInfo, v62);
    sub_B0D8A4(&BattleLogicNomal___c_TypeInfo, v63);
    byte_42176B2 = 1;
  }
  memset(&v435, 0, sizeof(v435));
  v434 = 0;
  v64 = sub_B0D974(BattleLogicNomal___c__DisplayClass20_0_TypeInfo, task, baseActionData);
  BattleLogicNomal___c__DisplayClass20_0___ctor((BattleLogicNomal___c__DisplayClass20_0_o *)v64, 0LL);
  if ( !v64 )
    goto LABEL_397;
  *(_QWORD *)(v64 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v64 + 16), (System_Int32_array **)this, v66, v67, v68, v69, v70, v71);
  if ( !task )
    goto LABEL_397;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, v72);
  if ( !data )
    goto LABEL_397;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v64 + 24) = ServantData;
  v75 = (BattleServantData_o **)(v64 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v64 + 24), ServantData, v76, v77, v78, v79, v80, v81);
  v84 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v82, v83);
  BattleActionData___ctor(v84, 0LL);
  *baseActionData = v84;
  sub_B0D840((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v84, v85, v86, v87, v88, v89, v90);
  v91 = (BattleActionData_o **)(v64 + 48);
  *(_QWORD *)(v64 + 48) = v84;
  sub_B0D840((BattleServantConfConponent_o *)(v64 + 48), (System_Int32_array **)v84, v92, v93, v94, v95, v96, v97);
  command = (System_Int32_array **)task->fields.command;
  *(_QWORD *)(v64 + 40) = command;
  sub_B0D840((BattleServantConfConponent_o *)(v64 + 40), command, v99, v100, v101, v102, v103, v104);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v105 = *v91;
  ActorId = BattleLogicTask__getActorId(task, v106);
  if ( !v105 )
    goto LABEL_397;
  v105->fields.actorId = ActorId;
  ActorId = (__int64)*v91;
  v431 = (BattleCommandData_o **)(v64 + 40);
  if ( !*v91 )
    goto LABEL_397;
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_B0D840((BattleServantConfConponent_o *)(ActorId + 128), motionMessage, v107, v108, v109, v110, v111, v112);
  ActorId = BattleLogicTask__getTarget(task, v114);
  v115 = this->fields.data;
  if ( !v115 )
    goto LABEL_397;
  v116 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v115->fields.leaderDown || v115->fields.endbattleFlg )
    return 0LL;
  v117 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getServantData(
                                                                  this->fields.data,
                                                                  ActorId,
                                                                  0LL);
  v120 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                   v118,
                                                                                                   v119);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v120,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v120 )
    goto LABEL_397;
  optSvt = (BattleServantData_o *)v117;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v120,
    v117,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
  *(_QWORD *)(v64 + 72) = v120;
  v121 = (System_Collections_Generic_IEnumerable_TSource__o **)(v64 + 72);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v64 + 72),
    (System_Int32_array **)v120,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  ActorId = *(_QWORD *)(v64 + 40);
  if ( !ActorId )
    goto LABEL_397;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v431;
  if ( !*v431 )
    goto LABEL_397;
  BattleCommandData__UpdateCritical((BattleCommandData_o *)ActorId, *v75, optSvt, this->fields.data, 0LL);
  ActorId = (__int64)*v431;
  if ( !*v431 )
    goto LABEL_397;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v75;
  if ( !*v75 )
    goto LABEL_397;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v431, 0LL);
  v430 = (BattleServantData_o **)(v64 + 24);
  v421 = v116;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_397;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v116, 0LL);
    if ( !this->fields.data )
      goto LABEL_397;
    v130 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                               ? BattleData__getFieldEnemyServantIDList(
                                                                   this->fields.data,
                                                                   1,
                                                                   0LL)
                                                               : BattleData__getFieldPlayerServantIDList(
                                                                   this->fields.data,
                                                                   0LL,
                                                                   0LL));
    v132 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v64 + 72);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v130,
                         (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_397;
    v133 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v116,
      (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
    v136 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                    System_Func_int__BattleServantData__TypeInfo,
                                                                    v134,
                                                                    v135);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v136,
      (Il2CppObject *)v64,
      Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__,
      (const MethodInfo_26145DC *)Method_System_Func_int__BattleServantData___ctor__);
    v139 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                  v133,
                                                                  (System_Func_TSource__TResult__o *)v136,
                                                                  (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v140 = BattleLogicNomal___c_TypeInfo;
    if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v140 = BattleLogicNomal___c_TypeInfo;
    }
    static_fields = v140->static_fields;
    _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__20_9;
    if ( !_9__20_9 )
    {
      if ( (BYTE3(v140->vtable._0_Equals.methodPtr) & 4) != 0 && !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      }
      v143 = (Il2CppObject *)static_fields->__9;
      _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_BattleServantData__bool__TypeInfo,
                                                                                      v137,
                                                                                      v138);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__20_9,
        v143,
        Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
      v144 = BattleLogicNomal___c_TypeInfo->static_fields;
      v144->__9__20_9 = (struct System_Func_BattleServantData__bool__o *)_9__20_9;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v144->__9__20_9,
        (System_Int32_array **)_9__20_9,
        v145,
        v146,
        v147,
        v148,
        v149,
        v150);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                         v139,
                         (System_Func_TSource__bool__o *)_9__20_9,
                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v132 )
      goto LABEL_397;
    v121 = (System_Collections_Generic_IEnumerable_TSource__o **)(v64 + 72);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      *v132,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v151 = *v121;
  v152 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v152 = BattleLogicNomal___c_TypeInfo;
  }
  v153 = v152->static_fields;
  _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v153->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v152->vtable._0_Equals.methodPtr) & 4) != 0 && !v152->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v152);
      v153 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v155 = (Il2CppObject *)v153->__9;
    _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_BattleServantData__BattleServantData__TypeInfo,
                                                                                                 v128,
                                                                                                 v129);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__20_0,
      v155,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
    v156 = BattleLogicNomal___c_TypeInfo->static_fields;
    v156->__9__20_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__20_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v156->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162);
  }
  v163 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                           System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo,
                                                                                           v128,
                                                                                           v129);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v163,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__,
    (const MethodInfo_261A104 *)Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                       v151,
                       (System_Func_TSource__TKey__o *)_9__20_0,
                       (System_Func_TSource__TElement__o *)v163,
                       (const MethodInfo_1B5668C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v166 = *(_QWORD *)(v64 + 24);
  if ( !v166 )
    goto LABEL_397;
  v432 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)ActorId;
  v167 = BuffList_TypeInfo;
  v425 = *(BattleBuffData_o **)(v166 + 760);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v167 = BuffList_TypeInfo;
  }
  v168 = BattleLogicNomal___c_TypeInfo;
  v418 = (__int64 *)v121;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v167->static_fields->CommandCodeBuffHash;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v168 = BattleLogicNomal___c_TypeInfo;
  }
  v170 = v168->static_fields;
  _9__20_2 = v170->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( (BYTE3(v168->vtable._0_Equals.methodPtr) & 4) != 0 && !v168->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v168);
      v170 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v172 = (Il2CppObject *)v170->__9;
    _9__20_2 = (System_Func_BuffList_TYPE__BuffList_TYPE__o *)sub_B0D974(
                                                                System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo,
                                                                v164,
                                                                v165);
    System_Func_BuffList_TYPE__BuffList_TYPE____ctor(
      _9__20_2,
      v172,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__,
      (const MethodInfo_2615804 *)Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__);
    v173 = BattleLogicNomal___c_TypeInfo->static_fields;
    v173->__9__20_2 = _9__20_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v173->__9__20_2,
      (System_Int32_array **)_9__20_2,
      v174,
      v175,
      v176,
      v177,
      v178,
      v179);
    v168 = BattleLogicNomal___c_TypeInfo;
  }
  if ( (BYTE3(v168->vtable._0_Equals.methodPtr) & 4) != 0 && !v168->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v168);
    v168 = BattleLogicNomal___c_TypeInfo;
  }
  v180 = v168->static_fields;
  v419 = task;
  _9__20_3 = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v180->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( (BYTE3(v168->vtable._0_Equals.methodPtr) & 4) != 0 && !v168->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v168);
      v180 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v182 = (Il2CppObject *)v180->__9;
    _9__20_3 = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)sub_B0D974(
                                                                                       System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo,
                                                                                       v164,
                                                                                       v165);
    System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort____ctor(
      _9__20_3,
      v182,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__,
      (const MethodInfo_2615B28 *)Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__);
    v183 = BattleLogicNomal___c_TypeInfo->static_fields;
    v183->__9__20_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__20_3;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v183->__9__20_3,
      (System_Int32_array **)_9__20_3,
      v184,
      v185,
      v186,
      v187,
      v188,
      v189);
  }
  v190 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData__(
                                  CommandCodeBuffHash,
                                  (System_Func_TSource__TKey__o *)_9__20_2,
                                  (System_Func_TSource__TElement__o *)_9__20_3,
                                  (const MethodInfo_1B56614 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v64 + 32) = v190;
  sub_B0D840((BattleServantConfConponent_o *)(v64 + 32), v190, v191, v192, v193, v194, v195, v196);
  v199 = *(_QWORD *)(v64 + 40);
  v424 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v64 + 32);
  if ( !v199 )
    goto LABEL_397;
  v200 = *(_QWORD *)(v199 + 72);
  v201 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B0D974(
                                                                            System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                                                            v197,
                                                                            v198);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v201,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__,
    (const MethodInfo_247CD00 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  ActorId = (__int64)v425;
  if ( !v425 )
    goto LABEL_397;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v425,
    v200,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v201,
    1,
    0LL);
  if ( !*v431 )
    goto LABEL_397;
  commandAssistId = (*v431)->fields.commandAssistId;
  v205 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B0D974(
                                                                            System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                                                            v202,
                                                                            v203);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v205,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__,
    (const MethodInfo_247CD00 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  v206 = *(_QWORD *)(v64 + 40);
  if ( !v206 )
    goto LABEL_397;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v425,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v205,
    1,
    *(_DWORD *)(v206 + 88),
    0LL);
  ActorId = sub_B0D8BC(bool___TypeInfo, 2LL);
  v207 = (BattleServantData_o **)(v64 + 24);
  if ( !ActorId )
    goto LABEL_397;
  v208 = (BattleCommandData_o **)(v64 + 40);
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_398;
  v427 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_B0D8BC(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_397;
  v215 = ActorId;
  if ( optSvt )
  {
    ActorId = sub_B0D964(optSvt, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v415 = sub_B0D99C(0LL);
      sub_B0D948(v415, 0LL);
    }
  }
  if ( !*(_DWORD *)(v215 + 24) )
    goto LABEL_398;
  *(_QWORD *)(v215 + 32) = optSvt;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v215 + 32),
    (System_Int32_array **)optSvt,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214);
  *(_QWORD *)(v64 + 56) = v215;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v64 + 56),
    (System_Int32_array **)v215,
    v216,
    v217,
    v218,
    v219,
    v220,
    v221);
  v224 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                           System_Func_BattleServantData__BattleServantData__TypeInfo,
                                                                                           v222,
                                                                                           v223);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v224,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__,
    (const MethodInfo_261A104 *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
  *(_QWORD *)(v64 + 64) = v224;
  v420 = (__int64 *)(v64 + 64);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v64 + 64),
    (System_Int32_array **)v224,
    v225,
    v226,
    v227,
    v228,
    v229,
    v230);
  v426 = (System_Func_T__TResult__o *)sub_B0D974(System_Func_bool__IEnumerable_BattleServantData___TypeInfo, v231, v232);
  System_Func_bool__object____ctor(
    v426,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__,
    (const MethodInfo_26112CC *)Method_System_Func_bool__IEnumerable_BattleServantData____ctor__);
  ActorId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_397;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)ActorId,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v236 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B0D974(
                                                                     BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                     v234,
                                                                     v235);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v236, 0LL);
  v240 = v427;
  v241 = *(_QWORD *)(v427 + 24);
  if ( (int)v241 >= 1 )
  {
    v242 = 0LL;
    do
    {
      if ( v242 >= (unsigned int)v241 )
        goto LABEL_398;
      v243 = *(unsigned __int8 *)(v240 + v242 + 32);
      if ( *(_BYTE *)(v240 + v242 + 32) )
        v244 = 177;
      else
        v244 = 138;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v424,
                                    v425,
                                    v244,
                                    *v208,
                                    v239);
      ActorId = (__int64)v426;
      if ( !v426 )
        goto LABEL_397;
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v426,
                           v243 != 0,
                           (const MethodInfo_26112E0 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v246 = *(_QWORD *)ActorId;
      v247 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v248 = 0LL;
        v249 = (int *)(*(_QWORD *)(v246 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v249 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v248;
          v249 += 4;
          if ( v248 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_91;
        }
        v250 = v246 + 16LL * *v249 + 312;
      }
      else
      {
LABEL_91:
        v250 = sub_AA67A0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v251 = (*(__int64 (__fastcall **)(__int64, _QWORD))v250)(v247, *(_QWORD *)(v250 + 8));
      if ( !v251 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v252 = *(_QWORD *)v251;
        if ( *(_WORD *)(*(_QWORD *)v251 + 298LL) )
        {
          v253 = 0LL;
          v254 = (int *)(*(_QWORD *)(v252 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v254 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v253;
            v254 += 4;
            if ( v253 >= *(unsigned __int16 *)(*(_QWORD *)v251 + 298LL) )
              goto LABEL_98;
          }
          v255 = v252 + 16LL * *v254 + 312;
        }
        else
        {
LABEL_98:
          v255 = sub_AA67A0(v251, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v255)(v251, *(_QWORD *)(v255 + 8)) & 1) == 0 )
          break;
        v256 = *(_QWORD *)v251;
        if ( *(_WORD *)(*(_QWORD *)v251 + 298LL) )
        {
          v257 = 0LL;
          v258 = (int *)(*(_QWORD *)(v256 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v258 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v257;
            v258 += 4;
            if ( v257 >= *(unsigned __int16 *)(*(_QWORD *)v251 + 298LL) )
              goto LABEL_105;
          }
          v259 = v256 + 16LL * *v258 + 312;
        }
        else
        {
LABEL_105:
          v259 = sub_AA67A0(v251, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v260 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v259)(v251, *(_QWORD *)(v259 + 8));
        if ( !v432 )
          sub_B0D97C(0LL);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v432,
                 v260,
                 (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          MasterData_WarQuestSelectionMaster,
          *v208,
          TargetCommandCodeBuffList,
          *v91,
          0,
          v236,
          v416);
      }
      *((_DWORD *)&v433[1].fields.list + v434++) = 845;
      v262 = *(_QWORD *)v251;
      if ( *(_WORD *)(*(_QWORD *)v251 + 298LL) )
      {
        v263 = 0LL;
        v264 = (int *)(*(_QWORD *)(v262 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v264 - 1) != System_IDisposable_TypeInfo )
        {
          ++v263;
          v264 += 4;
          if ( v263 >= *(unsigned __int16 *)(*(_QWORD *)v251 + 298LL) )
            goto LABEL_114;
        }
        v265 = v262 + 16LL * *v264 + 312;
      }
      else
      {
LABEL_114:
        v265 = sub_AA67A0(v251, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v265)(v251, *(_QWORD *)(v265 + 8));
      if ( v434 && *((_DWORD *)&v433[0].fields.current + v434 + 1) == 845 )
        --v434;
      v240 = v427;
      v208 = v431;
      ++v242;
      LODWORD(v241) = *(_DWORD *)(v427 + 24);
    }
    while ( (__int64)v242 < (int)v241 );
    if ( (int)v241 >= 1 )
    {
      v266 = 0LL;
      while ( v266 < (unsigned int)v241 )
      {
        v422 = v266;
        v268 = *(unsigned __int8 *)(v240 + v266 + 32);
        ActorId = sub_B0D8BC(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v269 = *(_DWORD *)(ActorId + 24);
        v270 = (BuffList_ACTION_array *)ActorId;
        if ( v268 )
        {
          if ( !v269 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v269 == 1 )
            break;
          v271 = 120;
        }
        else
        {
          if ( !v269 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v269 == 1 )
            break;
          v271 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v271;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v426,
                             v268 != 0,
                             (const MethodInfo_26112E0 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v272 = *(_QWORD *)ActorId;
        v273 = ActorId;
        attackActs = v270;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v274 = 0LL;
          v275 = (int *)(*(_QWORD *)(v272 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v275 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v274;
            v275 += 4;
            if ( v274 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_141;
          }
          v276 = v272 + 16LL * *v275 + 312;
        }
        else
        {
LABEL_141:
          v276 = sub_AA67A0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v277 = (*(__int64 (__fastcall **)(__int64, _QWORD))v276)(v273, *(_QWORD *)(v276 + 8));
        if ( !v277 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v284 = *(_QWORD *)v277;
          if ( *(_WORD *)(*(_QWORD *)v277 + 298LL) )
          {
            v285 = 0LL;
            v286 = (int *)(*(_QWORD *)(v284 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v286 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v285;
              v286 += 4;
              if ( v285 >= *(unsigned __int16 *)(*(_QWORD *)v277 + 298LL) )
                goto LABEL_155;
            }
            v207 = v430;
            v287 = v284 + 16LL * *v286 + 312;
          }
          else
          {
LABEL_155:
            v207 = v430;
            v287 = sub_AA67A0(v277, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v287)(v277, *(_QWORD *)(v287 + 8)) & 1) == 0 )
            break;
          v288 = *(_QWORD *)v277;
          if ( *(_WORD *)(*(_QWORD *)v277 + 298LL) )
          {
            v289 = 0LL;
            v290 = (int *)(*(_QWORD *)(v288 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v290 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v289;
              v290 += 4;
              if ( v289 >= *(unsigned __int16 *)(*(_QWORD *)v277 + 298LL) )
                goto LABEL_162;
            }
            v291 = v288 + 16LL * *v290 + 312;
          }
          else
          {
LABEL_162:
            v291 = sub_AA67A0(v277, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v292 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v291)(v277, *(_QWORD *)(v291 + 8));
          if ( !*v207 )
            sub_B0D97C(0LL);
          AttackSideEffectBuffList_20781520 = BattleServantData__getAttackSideEffectBuffList_20781520(
                                                *v207,
                                                attackActs,
                                                *v431,
                                                v292,
                                                0LL);
          v293 = AttackSideEffectBuffList_20781520;
          if ( !AttackSideEffectBuffList_20781520 )
            sub_B0D97C(0LL);
          v278 = *(_QWORD *)&AttackSideEffectBuffList_20781520->max_length;
          if ( (int)v278 >= 1 )
          {
            v279 = 0LL;
            do
            {
              if ( v279 >= (unsigned int)v278 )
              {
                v267 = sub_B0D9A8(AttackSideEffectBuffList_20781520);
                sub_B0D948(v267, 0LL);
              }
              if ( !*v91 )
                sub_B0D97C(0LL);
              v280 = v293->m_Items[v279];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v91, 3, 0LL);
              if ( !logicfunction )
                sub_B0D97C(SideEffectActionData);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                MasterData_WarQuestSelectionMaster,
                SideEffectActionData,
                v280,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v236,
                0,
                0LL);
              LODWORD(v278) = v293->max_length;
              ++v279;
            }
            while ( (__int64)v279 < (int)v278 );
          }
        }
        *((_DWORD *)&v433[1].fields.list + v434++) = 1050;
        v294 = *(_QWORD *)v277;
        if ( *(_WORD *)(*(_QWORD *)v277 + 298LL) )
        {
          v295 = 0LL;
          v296 = (int *)(*(_QWORD *)(v294 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v296 - 1) != System_IDisposable_TypeInfo )
          {
            ++v295;
            v296 += 4;
            if ( v295 >= *(unsigned __int16 *)(*(_QWORD *)v277 + 298LL) )
              goto LABEL_172;
          }
          v297 = v294 + 16LL * *v296 + 312;
        }
        else
        {
LABEL_172:
          v297 = sub_AA67A0(v277, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v297)(v277, *(_QWORD *)(v297 + 8));
        if ( v434 && *((_DWORD *)&v433[0].fields.current + v434 + 1) == 1050 )
          --v434;
        v240 = v427;
        v208 = v431;
        v266 = v422 + 1;
        LODWORD(v241) = *(_DWORD *)(v427 + 24);
        if ( (__int64)(v422 + 1) >= (int)v241 )
          goto LABEL_179;
      }
LABEL_398:
      v414 = sub_B0D9A8(ActorId);
      sub_B0D948(v414, 0LL);
    }
  }
LABEL_179:
  attackActsa = (BattleLogic_DamageProcessArgs_o *)sub_B0D974(BattleLogic_DamageProcessArgs_TypeInfo, v237, v238);
  BattleLogic_DamageProcessArgs___ctor(attackActsa, 1, -1, 0LL);
  ActorId = (__int64)v426;
  if ( !v426 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v426,
                       0,
                       (const MethodInfo_26112E0 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v298 = *(_QWORD *)ActorId;
  v299 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v300 = 0LL;
    v301 = (int *)(*(_QWORD *)(v298 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v301 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v300;
      v301 += 4;
      if ( v300 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_185;
    }
    v302 = v298 + 16LL * *v301 + 312;
  }
  else
  {
LABEL_185:
    v302 = sub_AA67A0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v303 = (*(__int64 (__fastcall **)(__int64, _QWORD))v302)(v299, *(_QWORD *)(v302 + 8));
  v304 = v303;
  v305 = 0LL;
  while ( 1 )
  {
    if ( !v304 )
      sub_B0D97C(v303);
    v306 = *(_QWORD *)v304;
    if ( *(_WORD *)(*(_QWORD *)v304 + 298LL) )
    {
      v307 = 0LL;
      v308 = (int *)(*(_QWORD *)(v306 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v308 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v307;
        v308 += 4;
        if ( v307 >= *(unsigned __int16 *)(*(_QWORD *)v304 + 298LL) )
          goto LABEL_193;
      }
      v309 = v306 + 16LL * *v308 + 312;
    }
    else
    {
LABEL_193:
      v309 = sub_AA67A0(v304, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v309)(v304, *(_QWORD *)(v309 + 8)) & 1) == 0 )
      break;
    v310 = *(_QWORD *)v304;
    if ( *(_WORD *)(*(_QWORD *)v304 + 298LL) )
    {
      v311 = 0LL;
      v312 = (int *)(*(_QWORD *)(v310 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v312 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v311;
        v312 += 4;
        if ( v311 >= *(unsigned __int16 *)(*(_QWORD *)v304 + 298LL) )
          goto LABEL_200;
      }
      v313 = v310 + 16LL * *v312 + 312;
    }
    else
    {
LABEL_200:
      v313 = sub_AA67A0(v304, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v314 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v313)(v304, *(_QWORD *)(v313 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_B0D97C(0LL);
    Damagelist = BattleLogic__getDamagelist(logic, *v207, v314, *v208, attackActsa, 0LL);
    v317 = Damagelist;
    if ( v314 == optSvt )
      v305 = Damagelist;
    if ( !v314 )
      sub_B0D97C(Damagelist);
    buffData = v314->fields.buffData;
    if ( !buffData )
      sub_B0D97C(Damagelist);
    if ( !buffData->fields.isNoDamage )
    {
      v319 = *v91;
      v320 = BattleBuffData__UseProgressingDoNotAct(v314->fields.buffData, v314, 0, 0LL);
      if ( !v319 )
        sub_B0D97C(v320);
      BattleActionData__addSideEffectActionData(v319, v320, 1, 0LL);
    }
    if ( !*v207 )
      sub_B0D97C(0LL);
    v321 = BattleServantData__checkPlayer(*v207, 0LL);
    if ( v321 )
    {
      if ( !*v207 )
        sub_B0D97C(v321);
      v314->fields.overkillTargetId = (*v207)->fields.uniqueId;
    }
    if ( !*v91 )
      sub_B0D97C(0LL);
    v322 = v317;
    v208 = v431;
    BattleActionData__setDamageData(*v91, v322, 0LL, 0, 0, 0LL);
  }
  *((_DWORD *)&v433[1].fields.list + v434++) = 1260;
  v323 = *(_QWORD *)v304;
  if ( *(_WORD *)(*(_QWORD *)v304 + 298LL) )
  {
    v324 = 0LL;
    v325 = (int *)(*(_QWORD *)(v323 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v325 - 1) != System_IDisposable_TypeInfo )
    {
      ++v324;
      v325 += 4;
      if ( v324 >= *(unsigned __int16 *)(*(_QWORD *)v304 + 298LL) )
        goto LABEL_220;
    }
    v326 = v323 + 16LL * *v325 + 312;
  }
  else
  {
LABEL_220:
    v326 = sub_AA67A0(v304, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v326)(v304, *(_QWORD *)(v326 + 8));
  if ( v434 && *((_DWORD *)&v433[0].fields.current + v434 + 1) == 1260 )
    --v434;
  ActorId = *v420;
  if ( !*v420 )
    goto LABEL_397;
  System_Func_string__string___Invoke(
    (System_Func_string__string__o *)ActorId,
    (System_String_o *)optSvt,
    (const MethodInfo_261A118 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  ActorId = (__int64)*v431;
  if ( !*v431 )
    goto LABEL_397;
  v327 = *v91;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v327 )
    goto LABEL_397;
  v327->fields.type = ActorId;
  ActorId = (__int64)*v91;
  if ( !*v91 )
    goto LABEL_397;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v431, 0LL);
  if ( !*v431 )
    goto LABEL_397;
  if ( !*v91 )
    goto LABEL_397;
  (*v91)->fields.actionIndex = (*v431)->fields.actionIndex;
  ActorId = (__int64)*v207;
  if ( !*v207 )
    goto LABEL_397;
  v328 = *v91;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, *v431, 0LL);
  if ( !v328 )
    goto LABEL_397;
  v328->fields.motionId = ActorId;
  if ( !v305 )
    goto LABEL_397;
  v329 = *v91;
  ActorId = BattleActionData_DamageData__getAttackCount(v305, 0LL);
  if ( !v329 )
    goto LABEL_397;
  v329->fields.attackcount = ActorId;
  v330 = this->fields.data;
  if ( !v330 )
    goto LABEL_397;
  perf = v330->fields.perf;
  if ( !perf )
    goto LABEL_397;
  if ( !*v431 )
    goto LABEL_397;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_397;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v431)->fields.actionIndex,
    0LL);
  if ( !*v207 )
    goto LABEL_397;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  v332 = *v91;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v207)->fields.uniqueId, v421, 0LL);
  if ( !v332 )
    goto LABEL_397;
  v334 = v427;
  v332->fields.prevattackme = ActorId & 1;
  v335 = v431;
  v336 = *(_QWORD *)(v427 + 24);
  if ( (int)v336 >= 1 )
  {
    v337 = 0LL;
    do
    {
      if ( v337 >= (unsigned int)v336 )
        goto LABEL_398;
      v338 = *(_BYTE *)(v334 + v337 + 32);
      if ( v338 )
        v339 = 178;
      else
        v339 = 159;
      v340 = BattleLogicNomal__GetTargetCommandCodeBuffList(
               (BattleLogicNomal_o *)ActorId,
               *v424,
               v425,
               v339,
               *v335,
               v333);
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v426,
                           v338,
                           (const MethodInfo_26112E0 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v341 = *(_QWORD *)ActorId;
      v342 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v343 = 0LL;
        v344 = (int *)(*(_QWORD *)(v341 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v344 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v343;
          v344 += 4;
          if ( v343 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_255;
        }
        v345 = v341 + 16LL * *v344 + 312;
      }
      else
      {
LABEL_255:
        v345 = sub_AA67A0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v346 = (*(__int64 (__fastcall **)(__int64, _QWORD))v345)(v342, *(_QWORD *)(v345 + 8));
      if ( !v346 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v347 = *(_QWORD *)v346;
        if ( *(_WORD *)(*(_QWORD *)v346 + 298LL) )
        {
          v348 = 0LL;
          v349 = (int *)(*(_QWORD *)(v347 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v349 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v348;
            v349 += 4;
            if ( v348 >= *(unsigned __int16 *)(*(_QWORD *)v346 + 298LL) )
              goto LABEL_262;
          }
          v350 = v347 + 16LL * *v349 + 312;
        }
        else
        {
LABEL_262:
          v350 = sub_AA67A0(v346, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v350)(v346, *(_QWORD *)(v350 + 8)) & 1) == 0 )
          break;
        v351 = *(_QWORD *)v346;
        if ( *(_WORD *)(*(_QWORD *)v346 + 298LL) )
        {
          v352 = 0LL;
          v353 = (int *)(*(_QWORD *)(v351 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v353 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v352;
            v353 += 4;
            if ( v352 >= *(unsigned __int16 *)(*(_QWORD *)v346 + 298LL) )
              goto LABEL_269;
          }
          v354 = v351 + 16LL * *v353 + 312;
        }
        else
        {
LABEL_269:
          v354 = sub_AA67A0(v346, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v355 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v354)(v346, *(_QWORD *)(v354 + 8));
        if ( !v432 )
          sub_B0D97C(0LL);
        v356 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v432,
                 v355,
                 (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v356,
          MasterData_WarQuestSelectionMaster,
          *v335,
          v340,
          *v91,
          1,
          v236,
          v416);
      }
      *((_DWORD *)&v433[1].fields.list + v434++) = 1591;
      v357 = *(_QWORD *)v346;
      if ( *(_WORD *)(*(_QWORD *)v346 + 298LL) )
      {
        v358 = 0LL;
        v359 = (int *)(*(_QWORD *)(v357 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v359 - 1) != System_IDisposable_TypeInfo )
        {
          ++v358;
          v359 += 4;
          if ( v358 >= *(unsigned __int16 *)(*(_QWORD *)v346 + 298LL) )
            goto LABEL_278;
        }
        v360 = v357 + 16LL * *v359 + 312;
      }
      else
      {
LABEL_278:
        v360 = sub_AA67A0(v346, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v360)(v346, *(_QWORD *)(v360 + 8));
      if ( v434 && *((_DWORD *)&v433[0].fields.current + v434 + 1) == 1591 )
        --v434;
      v334 = v427;
      v335 = v431;
      ++v337;
      LODWORD(v336) = *(_DWORD *)(v427 + 24);
    }
    while ( (__int64)v337 < (int)v336 );
    if ( (int)v336 >= 1 )
    {
      v361 = 0LL;
      while ( v361 < (unsigned int)v336 )
      {
        v363 = *(unsigned __int8 *)(v334 + v361 + 32);
        ActorId = sub_B0D8BC(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v364 = *(_DWORD *)(ActorId + 24);
        v365 = (BuffList_ACTION_array *)ActorId;
        if ( v363 )
        {
          if ( !v364 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v364 == 1 )
            goto LABEL_398;
          v366 = 121;
        }
        else
        {
          if ( !v364 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v364 == 1 )
            goto LABEL_398;
          v366 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v366;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v426,
                             v363 != 0,
                             (const MethodInfo_26112E0 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v367 = *(_QWORD *)ActorId;
        v368 = ActorId;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v369 = 0LL;
          v370 = (int *)(*(_QWORD *)(v367 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v370 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v369;
            v370 += 4;
            if ( v369 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_304;
          }
          v371 = v367 + 16LL * *v370 + 312;
        }
        else
        {
LABEL_304:
          v371 = sub_AA67A0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v372 = (*(__int64 (__fastcall **)(__int64, _QWORD))v371)(v368, *(_QWORD *)(v371 + 8));
        if ( !v372 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v377 = *(_QWORD *)v372;
          if ( *(_WORD *)(*(_QWORD *)v372 + 298LL) )
          {
            v378 = 0LL;
            v379 = (int *)(*(_QWORD *)(v377 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v379 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v378;
              v379 += 4;
              if ( v378 >= *(unsigned __int16 *)(*(_QWORD *)v372 + 298LL) )
                goto LABEL_317;
            }
            v380 = v377 + 16LL * *v379 + 312;
          }
          else
          {
LABEL_317:
            v380 = sub_AA67A0(v372, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v380)(v372, *(_QWORD *)(v380 + 8)) & 1) == 0 )
            break;
          v381 = *(_QWORD *)v372;
          if ( *(_WORD *)(*(_QWORD *)v372 + 298LL) )
          {
            v382 = 0LL;
            v383 = (int *)(*(_QWORD *)(v381 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v383 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v382;
              v383 += 4;
              if ( v382 >= *(unsigned __int16 *)(*(_QWORD *)v372 + 298LL) )
                goto LABEL_324;
            }
            v384 = v381 + 16LL * *v383 + 312;
          }
          else
          {
LABEL_324:
            v384 = sub_AA67A0(v372, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v385 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v384)(v372, *(_QWORD *)(v384 + 8));
          if ( !*v430 )
            sub_B0D97C(0LL);
          v376 = BattleServantData__getAttackSideEffectBuffList_20781520(*v430, v365, *v431, v385, 0LL);
          v386 = v376;
          if ( !v376 )
            sub_B0D97C(0LL);
          v373 = *(_QWORD *)&v376->max_length;
          if ( (int)v373 >= 1 )
          {
            v374 = 0LL;
            do
            {
              if ( v374 >= (unsigned int)v373 )
              {
                v362 = sub_B0D9A8(v376);
                sub_B0D948(v362, 0LL);
              }
              v375 = this->fields.logicfunction;
              if ( !v375 )
                sub_B0D97C(0LL);
              BattleLogicFunction__SetSideEffectBuff(
                v375,
                MasterData_WarQuestSelectionMaster,
                *v91,
                v386->m_Items[v374],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v236,
                1,
                0LL);
              LODWORD(v373) = v386->max_length;
              ++v374;
            }
            while ( (__int64)v374 < (int)v373 );
          }
        }
        v207 = v430;
        *((_DWORD *)&v433[1].fields.list + v434++) = 1790;
        v387 = *(_QWORD *)v372;
        if ( *(_WORD *)(*(_QWORD *)v372 + 298LL) )
        {
          v388 = 0LL;
          v389 = (int *)(*(_QWORD *)(v387 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v389 - 1) != System_IDisposable_TypeInfo )
          {
            ++v388;
            v389 += 4;
            if ( v388 >= *(unsigned __int16 *)(*(_QWORD *)v372 + 298LL) )
              goto LABEL_334;
          }
          v390 = v387 + 16LL * *v389 + 312;
        }
        else
        {
LABEL_334:
          v390 = sub_AA67A0(v372, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v390)(v372, *(_QWORD *)(v390 + 8));
        if ( v434 && *((_DWORD *)&v433[0].fields.current + v434 + 1) == 1790 )
          --v434;
        v334 = v427;
        ++v361;
        LODWORD(v336) = *(_DWORD *)(v427 + 24);
        if ( (__int64)v361 >= (int)v336 )
          goto LABEL_341;
      }
      goto LABEL_398;
    }
  }
LABEL_341:
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v426,
                       0,
                       (const MethodInfo_26112E0 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v391 = *(_QWORD *)ActorId;
  v392 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v393 = 0LL;
    v394 = (int *)(*(_QWORD *)(v391 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v394 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v393;
      v394 += 4;
      if ( v393 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_346;
    }
    v395 = v391 + 16LL * *v394 + 312;
  }
  else
  {
LABEL_346:
    v395 = sub_AA67A0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v396 = (*(__int64 (__fastcall **)(__int64, _QWORD))v395)(v392, *(_QWORD *)(v395 + 8));
  if ( !v396 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v397 = *(_QWORD *)v396;
    if ( *(_WORD *)(*(_QWORD *)v396 + 298LL) )
    {
      v398 = 0LL;
      v399 = (int *)(*(_QWORD *)(v397 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v399 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v398;
        v399 += 4;
        if ( v398 >= *(unsigned __int16 *)(*(_QWORD *)v396 + 298LL) )
          goto LABEL_353;
      }
      v400 = v397 + 16LL * *v399 + 312;
    }
    else
    {
LABEL_353:
      v400 = sub_AA67A0(v396, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v400)(v396, *(_QWORD *)(v400 + 8)) & 1) == 0 )
      break;
    v401 = *(_QWORD *)v396;
    if ( *(_WORD *)(*(_QWORD *)v396 + 298LL) )
    {
      v402 = 0LL;
      v403 = (int *)(*(_QWORD *)(v401 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v403 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v402;
        v403 += 4;
        if ( v402 >= *(unsigned __int16 *)(*(_QWORD *)v396 + 298LL) )
          goto LABEL_360;
      }
      v404 = v401 + 16LL * *v403 + 312;
    }
    else
    {
LABEL_360:
      v404 = sub_AA67A0(v396, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v405 = (*(__int64 (__fastcall **)(__int64, _QWORD))v404)(v396, *(_QWORD *)(v404 + 8));
    if ( !*v207 )
      sub_B0D97C(v405);
    if ( !v405 )
      sub_B0D97C(0LL);
    if ( !this->fields.logic )
      sub_B0D97C(v405);
    BattleLogic__setDamageSideEffect(
      this->fields.logic,
      *v91,
      (*v207)->fields.uniqueId,
      *(_DWORD *)(v405 + 24),
      *v431,
      0LL);
  }
  *((_DWORD *)&v433[1].fields.list + v434++) = 1898;
  v406 = *(_QWORD *)v396;
  if ( *(_WORD *)(*(_QWORD *)v396 + 298LL) )
  {
    v407 = 0LL;
    v408 = (int *)(*(_QWORD *)(v406 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v408 - 1) != System_IDisposable_TypeInfo )
    {
      ++v407;
      v408 += 4;
      if ( v407 >= *(unsigned __int16 *)(*(_QWORD *)v396 + 298LL) )
        goto LABEL_371;
    }
    v409 = v406 + 16LL * *v408 + 312;
  }
  else
  {
LABEL_371:
    v409 = sub_AA67A0(v396, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v409)(v396, *(_QWORD *)(v409 + 8));
  if ( v434 && *((_DWORD *)&v433[0].fields.current + v434 + 1) == 1898 )
    --v434;
  ActorId = *v418;
  if ( !*v418 )
    goto LABEL_397;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v433,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ActorId,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v435 = v433[0];
  while ( 1 )
  {
    v410 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v435,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v410 )
      break;
    current = v435.fields.current;
    if ( !v435.fields.current )
      sub_B0D97C(v410);
    monitor = v435.fields.current[47].monitor;
    if ( !monitor )
      sub_B0D97C(v410);
    monitor[152] = 0;
    if ( v419->fields.isCanCounterTask )
    {
      if ( !*v207 )
        sub_B0D97C(v410);
      v413 = this->fields.data;
      if ( !v413 )
        sub_B0D97C(0LL);
      BattleData__SetWasAttackTargetId(v413, (*v207)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  *((_DWORD *)&v433[1].fields.list + v434++) = 1997;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v435,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( v434 && *((_DWORD *)&v433[0].fields.current + v434 + 1) == 1997 )
    --v434;
  ActorId = *v420;
  if ( !*v420 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_string__string___Invoke(
                       (System_Func_string__string__o *)ActorId,
                       (System_String_o *)optSvt,
                       (const MethodInfo_261A118 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  if ( !*v91
    || ((*v91)->fields.isForcedSpeedOne = v419->fields.isForcedSpeedOne, !*v91)
    || ((*v91)->fields.isAllAttack = AttackType == 2, !*v207)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v207)->fields.uniqueId, v421, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_397:
    sub_B0D97C(ActorId);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v91;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateDoNotActAction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x0
  struct BattleLogic_o *logic; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  UnityEngine_Object_o *DoNotActByCommandSealedObject_k__BackingField; // x20
  bool v12; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1

  if ( (byte_42176C4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, task);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8819/*"MOTION_DO_NOT_ACT"*/, v6);
    byte_42176C4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__setCommandAttack(data, 0, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__ResetWasAttackTargetId(data, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_17;
  perf = logic->fields.perf;
  if ( !perf )
    goto LABEL_17;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_17;
  DoNotActByCommandSealedObject_k__BackingField = (UnityEngine_Object_o *)effectcontrol->fields._DoNotActByCommandSealedObject_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0LL, 0LL);
  v15 = 0LL;
  if ( !v12 )
  {
    v15 = sub_B0D974(BattleActionData_TypeInfo, v13, v14);
    BattleActionData___ctor((BattleActionData_o *)v15, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, v16);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 32) = (_DWORD)data;
        v23 = (System_Int32_array **)StringLiteral_8819/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v15 + 64) = StringLiteral_8819/*"MOTION_DO_NOT_ACT"*/;
        sub_B0D840((BattleServantConfConponent_o *)(v15 + 64), v23, v17, v18, v19, v20, v21, v22);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v15 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v15;
        }
      }
    }
LABEL_17:
    sub_B0D97C(data);
  }
  return (BattleActionData_o *)v15;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0

  if ( (byte_42176C3 & 1) == 0 )
  {
    sub_B0D8A4(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_42176C3 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_B0D974(ProgressIntervalTurnActionData_TypeInfo, task, method);
  ProgressIntervalTurnActionData___ctor(v4, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v4 )
    goto LABEL_11;
  ProgressIntervalTurnActionData__AddTurnProgressServants(v4, (BattleServantData_array *)data, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  if ( !data->fields.leaderDown || !data->fields.endbattleFlg )
  {
    FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 0, 0LL);
    ProgressIntervalTurnActionData__AddTurnProgressServants(v4, FieldEnemyServantList, 0LL);
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
LABEL_11:
    sub_B0D97C(data);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0LL, (BattleActionData_o *)v4, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v8; // x8
  BattleServantData_o *v9; // x19
  __int64 v10; // x22
  int v11; // w22
  System_Int32_array **v12; // x21
  UnityEngine_Object_o *PartsActor; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleData_o *v16; // x8
  UnityEngine_Object_o *v17; // x22
  struct BattleData_o *v18; // x8
  int32_t m_CachedPtr; // w9
  __int64 *v20; // x10
  UnityEngine_Object_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42176B9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_6385/*"FOCUS_UNDER"*/, v4);
    sub_B0D8A4(&StringLiteral_6383/*"FOCUS_CENTER"*/, v5);
    sub_B0D8A4(&StringLiteral_6387/*"FOCUS_UP"*/, v6);
    byte_42176B9 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_45;
  data = (BattleData_o *)BattleData__getServantData(data, data->fields.justDeadTargetId, 0LL);
  v8 = this->fields.data;
  if ( !v8 )
    goto LABEL_45;
  v9 = (BattleServantData_o *)data;
  v8->fields.justDeadTargetId = -1;
  if ( !data )
    return 0LL;
  if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)data, 0LL)
    || (v10 = 0LL, BattleServantData__isMultiTargetUnder(v9, 0LL)) )
  {
    data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(v9, 0LL);
    if ( !this->fields.data )
      goto LABEL_45;
    v11 = (int)data;
    v12 = (System_Int32_array **)StringLiteral_6383/*"FOCUS_CENTER"*/;
    PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, 1, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = (BattleData_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_45;
      data = (BattleData_o *)PartsActor[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v16 = this->fields.data;
        if ( !v16 )
          goto LABEL_45;
        v12 = (System_Int32_array **)StringLiteral_6383/*"FOCUS_CENTER"*/;
        v16->fields.globaltargetId = PartsActor[18].fields.m_CachedPtr;
      }
    }
    if ( v11 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v21 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 2, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v21 )
        goto LABEL_45;
      data = (BattleData_o *)v21[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_45;
      m_CachedPtr = v21[18].fields.m_CachedPtr;
      v20 = &StringLiteral_6385/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v11 )
        goto LABEL_42;
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v17 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v17 )
        goto LABEL_45;
      data = (BattleData_o *)v17[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_45;
      m_CachedPtr = v17[18].fields.m_CachedPtr;
      v20 = &StringLiteral_6387/*"FOCUS_UP"*/;
    }
    v12 = (System_Int32_array **)*v20;
    v18->fields.globaltargetId = m_CachedPtr;
LABEL_42:
    v10 = sub_B0D974(BattleActionData_TypeInfo, v14, v15);
    BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 32) = v9->fields.uniqueId;
      *(_DWORD *)(v10 + 36) = v9->fields.uniqueId;
      BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
      *(_QWORD *)(v10 + 64) = v12;
      sub_B0D840((BattleServantConfConponent_o *)(v10 + 64), v12, v22, v23, v24, v25, v26, v27);
      return (BattleActionData_o *)v10;
    }
LABEL_45:
    sub_B0D97C(data);
  }
  return (BattleActionData_o *)v10;
}


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
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  BattleLogicNomal___c_c *v22; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x20
  Il2CppObject *v25; // x21
  struct BattleLogicNomal___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_BattleBuffData_BuffData__o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42176B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, passiveBuffDict);
    sub_B0D8A4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__, v16);
    sub_B0D8A4(&BattleLogicNomal___c_TypeInfo, v17);
    byte_42176B1 = 1;
  }
  value = 0LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  passiveBuffDict,
                                                                                                  actSvtBuffData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_18;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData____TryGetValue(
                                                            passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_2EA89E4 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_18;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v18) )
  {
LABEL_18:
    sub_B0D97C(CommandCardBuffArray);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v22 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v22 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                           v20,
                                                                           v21);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v25,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v26 = BattleLogicNomal___c_TypeInfo->static_fields;
    v26->__9__18_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__18_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v26->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18;
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *PartsActor; // x20
  struct BattleData_o *v7; // x8

  if ( (byte_42176BB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42176BB = 1;
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
        data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(ServantData, 0LL);
        if ( !this->fields.data )
          goto LABEL_18;
        PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, (int32_t)data, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        data = (BattleData_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( PartsActor )
          {
            data = (BattleData_o *)PartsActor[18].monitor;
            if ( data )
            {
              data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
              if ( ((unsigned __int8)data & 1) == 0 )
                return;
              v7 = this->fields.data;
              if ( v7 )
              {
                v7->fields.globaltargetId = PartsActor[18].fields.m_CachedPtr;
                return;
              }
            }
          }
LABEL_18:
          sub_B0D97C(data);
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
  struct BattleData_o *v20; // x8

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_42176BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_42176BC = 1;
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
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AA65A4(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AA65A4(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AA65A4(*v8[6]);
  QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v13 + 184);
  if ( !v3 )
  {
LABEL_19:
    v14 = (_QWORD **)Method_System_Array_Empty_int___;
    v15 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v16 = *(_WORD *)(v15 + 306);
    if ( (v16 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v16 = *(_WORD *)(v15 + 306);
    }
    if ( (v16 & 0x400) != 0 )
    {
      v17 = *v14[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AA65A4(*v14[6]);
      if ( !*(_DWORD *)(v17 + 224) )
      {
        v18 = *v14[6];
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AA65A4(*v14[6]);
        j_il2cpp_runtime_class_init_0(v18);
      }
    }
    v19 = *v14[6];
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AA65A4(*v14[6]);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v19 + 184);
  }
LABEL_31:
  if ( System_Linq_Enumerable__SequenceEqual_int_(
         QuestIndividualities,
         v3,
         (const MethodInfo_1B53798 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    return;
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL), (v20 = this->fields.data) == 0LL)
    || (data = (BattleData_o *)v20->fields.perf) == 0LL )
  {
LABEL_36:
    sub_B0D97C(data);
  }
  BattlePerformance__updateStatus((BattlePerformance_o *)data, 0LL);
}


bool __fastcall BattleLogicNomal__checkOverKill(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleCommandData_o *v4; // x19
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v6; // x20

  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__getSelectCommand(data, this->fields.commandIndex, 0LL);
  if ( !data )
    goto LABEL_12;
  v4 = (BattleCommandData_o *)data;
  if ( BattleCommandData__isTreasureDvc((BattleCommandData_o *)data, 0LL) || BattleCommandData__IsAllAttack(v4, 0LL) )
    return 0;
  data = this->fields.data;
  if ( !data )
LABEL_12:
    sub_B0D97C(data);
  SelectCommand = BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0LL);
  if ( !SelectCommand )
    return 1;
  v6 = SelectCommand;
  if ( BattleCommandData__isTreasureDvc(SelectCommand, 0LL) || BattleCommandData__IsAllAttack(v6, 0LL) )
    return 0;
  return v4->fields.uniqueId == v6->fields.uniqueId;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__checkReflectionTask(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  __int64 Instance; // x0
  __int64 v16; // x21
  int v17; // w8
  unsigned int v18; // w27
  BattleServantData_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v23; // x23
  unsigned int v24; // w28
  BattleBuffData_BuffData_o *v25; // x24
  BattleSkillInfoData_o *v26; // x25
  struct System_Int32_array *vals; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  struct System_Int32_array *v30; // x8
  __int64 v31; // x24
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleLogic_o *logic; // x25
  __int64 v40; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v48; // x0
  __int64 v49; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42176C0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v6);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_42176C0 = 1;
  }
  isFirstAdd = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( ltype == 40 )
  {
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_40;
    Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 1, 0LL);
  }
  else
  {
    if ( ltype != 41 )
      goto LABEL_40;
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_40;
    Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  }
  v16 = Instance;
  if ( !Instance )
    goto LABEL_40;
  v17 = *(_DWORD *)(Instance + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    do
    {
      if ( v18 >= v17 )
        goto LABEL_41;
      v19 = *(BattleServantData_o **)(v16 + 8LL * (int)v18 + 32);
      if ( !v19 )
        goto LABEL_40;
      if ( !v19->fields.status )
      {
        Instance = BattleServantData__isAlive(v19, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v19, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_40;
          max_length = *(_DWORD *)(Instance + 24);
          v23 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v24 = 0;
            while ( v24 < max_length )
            {
              v25 = v23->m_Items[v24];
              v26 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v20, v21);
              BattleSkillInfoData___ctor(v26, 0LL);
              if ( !v26 )
                goto LABEL_40;
              v26->fields.svtUniqueId = v19->fields.uniqueId;
              if ( !v25 )
                goto LABEL_40;
              vals = v25->fields.vals;
              if ( !vals )
                goto LABEL_40;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._4_set_skillId.method)(
                           v26,
                           (unsigned int)vals->m_Items[1],
                           v26->klass->vtable._5_get_skillId.methodPtr);
              v30 = v25->fields.vals;
              if ( !v30 )
                goto LABEL_40;
              if ( v30->max_length <= 1 )
                break;
              v26->fields.skilllv = v30->m_Items[2];
              v31 = sub_B0D974(BattleLogicTask_TypeInfo, v28, v29);
              BattleLogicTask___ctor((BattleLogicTask_o *)v31, v32);
              if ( !v31 )
                goto LABEL_40;
              *(_QWORD *)(v31 + 72) = v26;
              *(_DWORD *)(v31 + 48) = 25;
              sub_B0D840(
                (BattleServantConfConponent_o *)(v31 + 72),
                (System_Int32_array **)v26,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
              *(_BYTE *)(v31 + 80) = 0;
              logic = this->fields.logic;
              Instance = sub_B0D8BC(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_40;
              v40 = Instance;
              Instance = sub_B0D964(v31, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v49 = sub_B0D99C(0LL);
                sub_B0D948(v49, 0LL);
              }
              if ( !*(_DWORD *)(v40 + 24) )
                break;
              *(_QWORD *)(v40 + 32) = v31;
              sub_B0D840(
                (BattleServantConfConponent_o *)(v40 + 32),
                (System_Int32_array **)v31,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              if ( !logic )
                goto LABEL_40;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v19,
                v23,
                (BattleLogicTask_array *)v40,
                0LL);
              if ( !v14 )
                goto LABEL_40;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
              max_length = v23->max_length;
              if ( (int)++v24 >= max_length )
                goto LABEL_34;
            }
LABEL_41:
            v48 = sub_B0D9A8(Instance);
            sub_B0D948(v48, 0LL);
          }
LABEL_34:
          Instance = (__int64)v19->fields.buffData;
          if ( !Instance )
            goto LABEL_40;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
      }
      v17 = *(_DWORD *)(v16 + 24);
    }
    while ( (int)++v18 < v17 );
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)Instance,
          (System_Collections_Generic_List_BattleLogicTask__o *)v14,
          1,
          0LL),
        !v14) )
  {
LABEL_40:
    sub_B0D97C(Instance);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogicNomal_o *v15; // x25
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int v19; // w19
  int v20; // w9
  _BOOL8 v21; // x0
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v24; // x0
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v28; // x26
  BattleLogicFunction_o *logicfunction; // x27
  int v30; // w23
  BattleLogicFunction_FunctionArgument_o *argument; // x19
  BattleLogicNomal_o *v32; // x21
  BattleActionData_o *v33; // x25
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x20
  BattleActionData_o *v36; // x28
  DataVals_array *DataValsList; // x0
  BattleLogicFunction_o *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  SkillLvMaster_o *v41; // [xsp+38h] [xbp-98h]
  int32_t type; // [xsp+40h] [xbp-90h]
  _BOOL4 v43; // [xsp+44h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+60h] [xbp-70h] BYREF

  v15 = this;
  v43 = isCommandAfter;
  if ( (byte_42176C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17);
    this = (BattleLogicNomal_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v18);
    byte_42176C5 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( !commandCodeBuffList )
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)commandCodeBuffList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v19 = arg == 0LL || !v43;
  if ( v43 )
    v20 = 1;
  else
    v20 = 3;
  type = v20;
  v45 = v44;
  v41 = skillLvMst;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v21 )
      break;
    if ( !command )
      sub_B0D97C(v21);
    current = (BattleBuffData_BuffData_o *)v45.fields.current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_B0D97C(IsEnableCommandCode);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_B0D97C(IsEnableCommandCode);
    v24 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v24 & 1) != 0 )
    {
      if ( (v19 & 1) != 0 )
      {
        if ( !current )
          sub_B0D97C(v24);
        vals = current->fields.vals;
        if ( !vals )
          sub_B0D97C(v24);
        max_length = vals->max_length;
        if ( !max_length )
        {
          v39 = sub_B0D9A8(v24);
          sub_B0D948(v39, 0LL);
        }
        if ( max_length == 1 )
        {
          v40 = sub_B0D9A8(v24);
          sub_B0D948(v40, 0LL);
        }
        if ( !skillLvMst )
          sub_B0D97C(v24);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v28 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_B0D97C(Entity);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_B0D97C(Entity);
          logicfunction = v15->fields.logicfunction;
          v30 = v19;
          argument = (BattleLogicFunction_FunctionArgument_o *)arg;
          v32 = v15;
          v33 = actionData;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v28->fields.funcId;
          v36 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v28, 0LL);
          if ( !logicfunction )
            sub_B0D97C(DataValsList);
          BattleLogicFunction__procList(
            logicfunction,
            v36,
            funcId,
            DataValsList,
            0,
            0,
            v43,
            0,
            0,
            0,
            0,
            argument,
            0,
            0LL);
          arg = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)argument;
          v19 = v30;
          actionData = v33;
          v15 = v32;
          skillLvMst = v41;
        }
      }
      else
      {
        v38 = v15->fields.logicfunction;
        if ( !v38 )
          sub_B0D97C(0LL);
        BattleLogicFunction__SetSideEffectBuff(
          v38,
          skillLvMst,
          actionData,
          current,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
          1,
          0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1

  if ( (byte_42176B3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&StringLiteral_8811/*"MOTION_BACK"*/, v4);
    byte_42176B3 = 1;
  }
  v5 = sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&uniqueId, method);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_DWORD *)(v5 + 32) = uniqueId;
  v13 = (System_Int32_array **)StringLiteral_8811/*"MOTION_BACK"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_8811/*"MOTION_BACK"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 64), v13, v7, v8, v9, v10, v11, v12);
  return (BattleActionData_o *)v5;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v6; // x20
  unsigned __int64 v7; // x22
  struct PlayMakerFSM_o **p_fsm; // x23
  struct BattleData_o *v9; // x9
  int32_t v10; // w21
  __int64 v12; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
  if ( !data )
    goto LABEL_21;
  rootfsm = data->fields.rootfsm;
  v6 = data;
  if ( (int)rootfsm >= 1 )
  {
    v7 = 0LL;
    p_fsm = &data->fields.fsm;
    while ( 1 )
    {
      v9 = this->fields.data;
      if ( !v9 )
        break;
      if ( v7 >= (unsigned int)rootfsm )
        goto LABEL_22;
      data = (BattleData_o *)v9->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_fsm[v7],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v7 >= LODWORD(v6->fields.rootfsm) )
          goto LABEL_22;
        data = (BattleData_o *)p_fsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v7 >= LODWORD(v6->fields.rootfsm) )
          goto LABEL_22;
        v10 = (int)data;
        data = (BattleData_o *)p_fsm[v7];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v7 >= LODWORD(v6->fields.rootfsm) )
          goto LABEL_22;
        data = (BattleData_o *)p_fsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v10, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->fields.rootfsm) )
          {
LABEL_22:
            v12 = sub_B0D9A8(data);
            sub_B0D948(v12, 0LL);
          }
          data = (BattleData_o *)p_fsm[v7];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      LODWORD(rootfsm) = v6->fields.rootfsm;
      if ( (__int64)++v7 >= (int)rootfsm )
        return 0LL;
    }
LABEL_21:
    sub_B0D97C(data);
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
  __int64 data; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleData_o *v11; // x8
  __int64 v12; // x10
  __int64 v13; // x20
  _BOOL4 v14; // w9
  unsigned __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w21
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x19
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x20
  Il2CppObject *v21; // x21
  struct BattleLogicNomal___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0

  if ( (byte_42176BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B0D8A4(&System_Action_AiNpcBattleServantData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v5);
    sub_B0D8A4(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__, v6);
    sub_B0D8A4(&BattleLogicNomal___c_TypeInfo, v7);
    byte_42176BF = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0LL);
  if ( !data )
    goto LABEL_33;
  v11 = this->fields.data;
  v12 = *(_QWORD *)(data + 24);
  v13 = data;
  v14 = v11 == 0LL;
  if ( (int)v12 >= 1 )
  {
    v15 = 0LL;
    v16 = data + 32;
    while ( !v14 )
    {
      if ( v15 >= (unsigned int)v12 )
        goto LABEL_34;
      data = (__int64)v11->fields.battleEvent;
      if ( !data )
        break;
      data = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)data + 872LL))(
               data,
               *(_QWORD *)(v16 + 8 * v15),
               *(_QWORD *)(*(_QWORD *)data + 880LL));
      if ( (data & 1) != 0 )
      {
        if ( v15 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v16 + 8 * v15);
        if ( !data )
          break;
        data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v15 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_34;
        v17 = data;
        data = *(_QWORD *)(v16 + 8 * v15);
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v15 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v16 + 8 * v15);
        if ( !data )
          break;
        data = BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v17, 1, 0LL);
        if ( (data & 1) != 0 )
        {
          if ( v15 >= *(unsigned int *)(v13 + 24) )
          {
LABEL_34:
            v30 = sub_B0D9A8(data);
            sub_B0D948(v30, 0LL);
          }
          data = *(_QWORD *)(v16 + 8 * v15);
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v11 = this->fields.data;
      LODWORD(v12) = *(_DWORD *)(v13 + 24);
      ++v15;
      v14 = v11 == 0LL;
      if ( (__int64)v15 >= (int)v12 )
        goto LABEL_22;
    }
LABEL_33:
    sub_B0D97C(data);
  }
LABEL_22:
  if ( v14 )
    goto LABEL_33;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v11->fields.aiNpcDataList;
  data = (__int64)BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    data = (__int64)BattleLogicNomal___c_TypeInfo;
  }
  static_fields = *(struct BattleLogicNomal___c_StaticFields **)(data + 184);
  _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (*(_BYTE *)(data + 307) & 4) != 0 && !*(_DWORD *)(data + 224) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_AiNpcBattleServantData__TypeInfo,
                                                                                      v9,
                                                                                      v10);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__36_0,
      v21,
      Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_AiNpcBattleServantData___ctor__);
    v22 = BattleLogicNomal___c_TypeInfo->static_fields;
    v22->__9__36_0 = (struct System_Action_AiNpcBattleServantData__o *)_9__36_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v22->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)_9__36_0,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 isBUSTER; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *targetIdlist; // x23
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int v23; // w8
  System_Int32_array **v24; // x1
  BattleServantConfConponent_o *v25; // x0
  System_Array_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 *v33; // x8
  System_Int32_array **v34; // x1
  __int64 v35; // x8
  char v36; // w21
  unsigned __int64 v37; // x22
  System_Array_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x0
  System_RuntimeFieldHandle_o v47; // 0:w1.4
  System_RuntimeFieldHandle_o v48; // 0:w1.4

  if ( (byte_42176B4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, task);
    sub_B0D8A4(&FunctionEntity_TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v7);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v8);
    sub_B0D8A4(&StringLiteral_6366/*"FIELD_PLAYER"*/, v9);
    sub_B0D8A4(&StringLiteral_6365/*"FIELD_ENEMY"*/, v10);
    byte_42176B4 = 1;
  }
  v11 = sub_B0D974(BattleActionData_TypeInfo, task, method);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v16 = sub_B0D974(FunctionEntity_TypeInfo, v13, v14);
  FunctionEntity___ctor((FunctionEntity_o *)v16, 0LL);
  if ( BattleCommand__isARTS(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v11, 0LL);
    isBUSTER = sub_B0D8BC(int___TypeInfo, 2LL);
    if ( isBUSTER )
    {
      v23 = *(_DWORD *)(isBUSTER + 24);
      v24 = (System_Int32_array **)isBUSTER;
      if ( !v23 || (*(_DWORD *)(isBUSTER + 32) = 102, v23 == 1) )
      {
LABEL_30:
        v46 = sub_B0D9A8(isBUSTER);
        sub_B0D948(v46, 0LL);
      }
      *(_DWORD *)(isBUSTER + 36) = 1;
      if ( v16 )
      {
        *(_QWORD *)(v16 + 32) = isBUSTER;
        v25 = (BattleServantConfConponent_o *)(v16 + 32);
LABEL_14:
        sub_B0D840(v25, v24, v17, v18, v19, v20, v21, v22);
        v33 = &StringLiteral_6366/*"FIELD_PLAYER"*/;
LABEL_15:
        v34 = (System_Int32_array **)*v33;
        *(_QWORD *)(v11 + 64) = *v33;
        sub_B0D840((BattleServantConfConponent_o *)(v11 + 64), v34, v27, v28, v29, v30, v31, v32);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_B0D97C(isBUSTER);
  }
  if ( BattleCommand__isQUICK(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v11, 0LL);
    v26 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 3LL);
    v47.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v26, v47, 0LL);
    if ( !v16 )
      goto LABEL_29;
    *(_QWORD *)(v16 + 32) = v26;
    v25 = (BattleServantConfConponent_o *)(v16 + 32);
    v24 = (System_Int32_array **)v26;
    goto LABEL_14;
  }
  isBUSTER = BattleCommand__isBUSTER(task->fields.ordertype, 0LL);
  if ( (isBUSTER & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v11, 0LL);
    v39 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 3LL);
    v48.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v39, v48, 0LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 32) = v39;
      sub_B0D840((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
      v33 = &StringLiteral_6365/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v35 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v35 < 1 )
    return 0LL;
  v36 = 0;
  v37 = 0LL;
  do
  {
    if ( v37 >= (unsigned int)v35 )
      goto LABEL_30;
    isBUSTER = (__int64)this->fields.data;
    if ( !isBUSTER )
      goto LABEL_29;
    isBUSTER = (__int64)BattleData__getServantData((BattleData_o *)isBUSTER, targetIdlist->m_Items[v37 + 1], 0LL);
    LODWORD(v35) = targetIdlist->max_length;
    ++v37;
    v36 |= isBUSTER != 0;
  }
  while ( (__int64)v37 < (int)v35 );
  if ( (v36 & 1) != 0 )
    return (BattleActionData_o *)v11;
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
    sub_B0D97C(v5);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
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
  __int64 v31; // x24
  __int64 Instance; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x21
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v54; // x20
  BattleData_o *data; // x8
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_int__o *v65; // x26
  int v66; // w8
  __int64 v67; // x28
  unsigned int v68; // w19
  __int64 v69; // x25
  __int64 *v70; // x25
  __int64 v71; // t1
  __int64 v72; // x20
  int v73; // w8
  unsigned int v74; // w25
  __int64 v75; // x27
  __int64 v76; // x8
  __int64 v77; // x27
  __int64 v78; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v80; // x8
  int32_t v81; // w9
  BattleLogicNomal_o *v82; // x19
  struct BattleData_o *v83; // x8
  __int64 v84; // x28
  int v85; // w8
  unsigned int v86; // w19
  __int64 v87; // x22
  __int64 *v88; // x22
  __int64 v89; // t1
  bool v90; // w3
  char v91; // w20
  __int64 v92; // x20
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v94; // x8
  struct BattlePerformance_o *perf; // x9
  __int64 v96; // x1
  __int64 v97; // x2
  struct BattleData_o *v98; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v100; // x23
  BattleLogicNomal_o *v101; // x23
  struct BattleData_o *v102; // x8
  const MethodInfo *v103; // x2
  struct BattleData_o *v104; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v108; // w22
  char v109; // w19
  BattleBuffData_BuffData_o *v110; // x20
  WarEntity_o *v111; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  BattleSkillInfoData_o *v114; // x26
  __int64 v115; // x0
  struct System_Int32_array *vals; // x8
  __int64 v117; // x0
  struct System_Int32_array *v118; // x8
  BattleData_o *v119; // x0
  BattleServantData_o *ServantData; // x27
  int32_t v121; // w1
  SkillLvEntity_o *v122; // x0
  SkillLvEntity_o *v123; // x28
  BattleData_o *v124; // x0
  _BOOL8 v125; // x0
  BattleLogic_o *v126; // x0
  int32_t v127; // w23
  __int64 v128; // x0
  System_Int32_array *TargetIds; // x20
  BattleLogicNomal_o *v130; // x23
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v133; // x0
  const MethodInfo *v134; // x7
  System_Collections_ICollection_o *v135; // x0
  BattleLogicTask_array *v136; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v138; // x3
  BattleLogicTask_o *v139; // x0
  BattleLogic_o *v140; // x0
  BattleData_o *v141; // x0
  int32_t v142; // w23
  Il2CppObject *v143; // x28
  BattleServantData_o *isEndAct; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v148; // x20
  int v149; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v151; // x26
  __int64 v152; // x1
  __int64 v153; // x2
  BattleSkillInfoData_o *v154; // x25
  __int64 v155; // x0
  struct System_Int32_array *v156; // x8
  __int64 v157; // x0
  struct System_Int32_array *v158; // x8
  BattleData_o *v159; // x0
  BattleServantData_o *v160; // x20
  int32_t v161; // w1
  SkillLvEntity_o *v162; // x0
  SkillLvEntity_o *v163; // x27
  BattleData_o *v164; // x0
  _BOOL8 v165; // x0
  BattleLogic_o *v166; // x0
  int32_t v167; // w27
  __int64 v168; // x0
  System_Int32_array *v169; // x20
  bool v170; // w26
  BattleLogicSkill_o *v171; // x27
  System_Int32_array *v172; // x0
  const MethodInfo *v173; // x7
  BattleLogicTask_array *v174; // x1
  BattleLogic_o *v175; // x0
  int v176; // w19
  BattleActionData_o *v177; // x1
  __int64 v179; // x0
  __int64 v180; // x0
  __int64 v181; // x0
  __int64 v182; // x0
  __int64 v183; // x0
  __int64 v184; // x0
  __int64 v185; // x0
  __int64 v186; // x0
  __int64 v187; // x0
  __int64 v188; // x0
  __int64 v189; // x0
  __int64 v190; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v191; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v192; // [xsp+8h] [xbp-F8h]
  BattleActionData_o *baseActData; // [xsp+18h] [xbp-E8h]
  char v194; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v195; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v196; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v197; // [xsp+38h] [xbp-C8h] BYREF
  int v198[2]; // [xsp+60h] [xbp-A0h]
  int v199; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v200; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42176BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B0D8A4(&System_Action_AiNpcBattleServantData__TypeInfo, v4);
    sub_B0D8A4(&BattleActionData_TypeInfo, v5);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v6);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__, v17);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v18);
    sub_B0D8A4(&int___TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__, v28);
    sub_B0D8A4(&BattleLogicNomal___c__DisplayClass34_0_TypeInfo, v29);
    sub_B0D8A4(&StringLiteral_8821/*"MOTION_ENEMY_TURN_END"*/, v30);
    byte_42176BD = 1;
  }
  entity = 0LL;
  memset(&v200, 0, sizeof(v200));
  v199 = 0;
  v31 = sub_B0D974(BattleLogicNomal___c__DisplayClass34_0_TypeInfo, task, method);
  BattleLogicNomal___c__DisplayClass34_0___ctor((BattleLogicNomal___c__DisplayClass34_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_209;
  *(_QWORD *)(v31 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  v41 = sub_B0D974(BattleActionData_TypeInfo, v39, v40);
  BattleActionData___ctor((BattleActionData_o *)v41, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v31 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_209;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_209;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !v41 )
    goto LABEL_209;
  BattleActionData__setStateField((BattleActionData_o *)v41, 0LL);
  baseActData = (BattleActionData_o *)v41;
  v43 = (System_Int32_array **)StringLiteral_8821/*"MOTION_ENEMY_TURN_END"*/;
  *(_QWORD *)(v41 + 64) = StringLiteral_8821/*"MOTION_ENEMY_TURN_END"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v41 + 64), v43, v44, v45, v46, v47, v48, v49);
  v192 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                    v50,
                                                                                                    v51);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v192,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v54 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                   v52,
                                                                                                   v53);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v54,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v195 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_209;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v31 + 24) = QuestIndividualities;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), QuestIndividualities, v57, v58, v59, v60, v61, v62);
  v65 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v63, v64);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_209;
  v191 = v54;
  v196 = this;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_209;
  v66 = *(_DWORD *)(Instance + 24);
  v67 = Instance;
  if ( v66 >= 1 )
  {
    v68 = 0;
    while ( 1 )
    {
      if ( v68 >= v66 )
        goto LABEL_214;
      v69 = v67 + 8LL * (int)v68;
      v71 = *(_QWORD *)(v69 + 32);
      v70 = (__int64 *)(v69 + 32);
      Instance = v71;
      if ( !v71 )
        goto LABEL_209;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v31 + 16),
                              *(System_Int32_array **)(v31 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v68 >= *(_DWORD *)(v67 + 24) )
          goto LABEL_214;
        v72 = Instance;
        Instance = *v70;
        if ( !*v70 )
          goto LABEL_209;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v68 >= *(_DWORD *)(v67 + 24) )
            goto LABEL_214;
          Instance = *v70;
          if ( !*v70 )
            goto LABEL_209;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v72 )
              goto LABEL_209;
            if ( *(_QWORD *)(v72 + 24) )
            {
              if ( v68 >= *(_DWORD *)(v67 + 24) )
                goto LABEL_214;
              Instance = (__int64)v192;
              if ( !*v70 || !v192 )
                goto LABEL_209;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v192,
                *(_DWORD *)(*v70 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v72,
                (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v68 >= *(_DWORD *)(v67 + 24) )
          goto LABEL_214;
        if ( !*v70 )
          goto LABEL_209;
        if ( !v65 )
          goto LABEL_209;
        System_Collections_Generic_List_int___Add(
          v65,
          *(_DWORD *)(*v70 + 24),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v72 )
          goto LABEL_209;
        v73 = *(_DWORD *)(v72 + 24);
        if ( v73 >= 1 )
          break;
      }
LABEL_48:
      v66 = *(_DWORD *)(v67 + 24);
      if ( (int)++v68 >= v66 )
        goto LABEL_49;
    }
    v74 = 0;
    while ( v74 < v73 )
    {
      v75 = v72 + 8LL * (int)v74;
      v78 = *(_QWORD *)(v75 + 32);
      v77 = v75 + 32;
      v76 = v78;
      if ( !v78 || !v42 )
        goto LABEL_209;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v42,
                   &entity,
                   *(_DWORD *)(v76 + 16),
                   (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_209;
        Instance = BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( (Instance & 1) != 0 )
        {
          logic = this->fields.logic;
          if ( !logic )
            goto LABEL_209;
          v80 = logic->fields.data;
          if ( !v80 )
            goto LABEL_209;
          if ( v74 >= *(_DWORD *)(v72 + 24) )
            break;
          if ( !*(_QWORD *)v77 )
            goto LABEL_209;
          v81 = *(_DWORD *)(*(_QWORD *)v77 + 28LL);
          if ( v80->fields.endMasterSkillTurnBuffValue <= v81 )
            v80->fields.endMasterSkillTurnBuffValue = v81;
        }
      }
      v73 = *(_DWORD *)(v72 + 24);
      if ( (int)++v74 >= v73 )
        goto LABEL_48;
    }
LABEL_214:
    v181 = sub_B0D9A8(Instance);
    sub_B0D948(v181, 0LL);
  }
LABEL_49:
  v82 = this;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v83 = this->fields.data;
  if ( !v83 )
    goto LABEL_209;
  v84 = Instance;
  if ( v83->fields.leaderDown && v83->fields.endbattleFlg )
  {
    v194 = 0;
    if ( !v65 )
      goto LABEL_209;
    goto LABEL_107;
  }
  if ( !Instance )
    goto LABEL_209;
  v85 = *(_DWORD *)(Instance + 24);
  if ( v85 >= 1 )
  {
    v194 = 0;
    v86 = 0;
    while ( v86 < v85 )
    {
      v87 = v84 + 8LL * (int)v86;
      v89 = *(_QWORD *)(v87 + 32);
      v88 = (__int64 *)(v87 + 32);
      Instance = v89;
      if ( !v89 )
        goto LABEL_209;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)this->fields.data;
        if ( !Instance )
          goto LABEL_209;
        Instance = BattleData__checkAlivePlayers((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v90 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_209;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
          v90 = Instance & 1;
        }
        if ( v86 >= *(_DWORD *)(v84 + 24) )
          goto LABEL_214;
        Instance = *v88;
        if ( !*v88 )
          goto LABEL_209;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v31 + 24),
                     this->fields.logic,
                     v90,
                     baseActData,
                     0LL);
        if ( v86 >= *(_DWORD *)(v84 + 24) )
          goto LABEL_214;
        v91 = Instance;
        Instance = *v88;
        if ( !*v88 )
          goto LABEL_209;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v86 >= *(_DWORD *)(v84 + 24) )
            goto LABEL_214;
          Instance = *v88;
          if ( !*v88 )
            goto LABEL_209;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_209;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v86 >= *(_DWORD *)(v84 + 24) )
              goto LABEL_214;
            if ( !*v88 || !v191 )
              goto LABEL_209;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v191,
              *(_DWORD *)(*v88 + 24),
              (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
              (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v86 >= *(_DWORD *)(v84 + 24) )
          goto LABEL_214;
        if ( !*v88 )
          goto LABEL_209;
        Instance = *(_QWORD *)(*v88 + 760);
        if ( !Instance )
          goto LABEL_209;
        v194 |= v91;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v86 >= *(_DWORD *)(v84 + 24) )
        goto LABEL_214;
      Instance = *v88;
      if ( !*v88 )
        goto LABEL_209;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v31 + 16),
                              *(System_Int32_array **)(v31 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v86 >= *(_DWORD *)(v84 + 24) )
          goto LABEL_214;
        v92 = Instance;
        Instance = *v88;
        if ( !*v88 )
          goto LABEL_209;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v86 >= *(_DWORD *)(v84 + 24) )
            goto LABEL_214;
          Instance = *v88;
          if ( !*v88 )
            goto LABEL_209;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v92 )
              goto LABEL_209;
            if ( *(_QWORD *)(v92 + 24) )
            {
              if ( v86 >= *(_DWORD *)(v84 + 24) )
                goto LABEL_214;
              Instance = (__int64)v192;
              if ( !*v88 || !v192 )
                goto LABEL_209;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v192,
                *(_DWORD *)(*v88 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v92,
                (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v86 >= *(_DWORD *)(v84 + 24) )
          goto LABEL_214;
        if ( !*v88 || !v65 )
          goto LABEL_209;
        System_Collections_Generic_List_int___Add(
          v65,
          *(_DWORD *)(*v88 + 24),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v85 = *(_DWORD *)(v84 + 24);
      if ( (int)++v86 >= v85 )
        goto LABEL_105;
    }
    goto LABEL_214;
  }
  v194 = 0;
LABEL_105:
  v82 = this;
  v83 = this->fields.data;
  if ( !v83 || !v65 )
LABEL_209:
    sub_B0D97C(Instance);
LABEL_107:
  battleEvent = v83->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v65,
                        (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_209;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v31 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v94 = v82->fields.data;
  if ( !v94 )
    goto LABEL_209;
  perf = v94->fields.perf;
  if ( !perf )
    goto LABEL_209;
  Instance = (__int64)v94->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_209;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v98 = v82->fields.data;
  if ( !v98 )
    goto LABEL_209;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v98->fields.aiNpcDataList;
  v100 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                System_Action_AiNpcBattleServantData__TypeInfo,
                                                                                v96,
                                                                                v97);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v100,
    (Il2CppObject *)v31,
    Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_209;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v100,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v101 = v196;
  v102 = v196->fields.data;
  if ( !v102 )
    goto LABEL_209;
  Instance = (__int64)v102->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_209;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    v196->fields.logic,
    *(_BYTE *)(v31 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(v196, *(System_Int32_array **)(v31 + 24), v103);
  v104 = v196->fields.data;
  if ( !v104 )
    goto LABEL_209;
  v104->fields.currentTurn = 0;
  if ( !v191 )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v197,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v191,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v200 = v197;
  while ( 1 )
  {
    v111 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v200,
                            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v111 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v200.fields.current.fields.value;
    if ( !v200.fields.current.fields.value )
      sub_B0D97C(v111);
    monitor = (int)v200.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v200.fields.current.fields.key;
      v108 = 0;
      v109 = 1;
LABEL_121:
      if ( v108 >= monitor )
      {
        v180 = sub_B0D9A8(v111);
        sub_B0D948(v180, 0LL);
      }
      v110 = value->m_Items[v108];
      if ( !v110 )
        sub_B0D97C(v111);
      if ( v110->fields._isRemove )
        goto LABEL_157;
      if ( !v42 )
        sub_B0D97C(v111);
      v111 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v42,
               v110->fields.buffId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v111 )
        goto LABEL_157;
      v114 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v112, v113);
      BattleSkillInfoData___ctor(v114, 0LL);
      if ( !v114 )
        sub_B0D97C(v115);
      v114->fields.svtUniqueId = key;
      vals = v110->fields.vals;
      if ( !vals )
        sub_B0D97C(v115);
      if ( !vals->max_length )
      {
        v182 = sub_B0D9A8(v115);
        sub_B0D948(v182, 0LL);
      }
      v117 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v114->klass->vtable._4_set_skillId.method)(
               v114,
               (unsigned int)vals->m_Items[1],
               v114->klass->vtable._5_get_skillId.methodPtr);
      v118 = v110->fields.vals;
      if ( !v118 )
        sub_B0D97C(v117);
      if ( v118->max_length <= 1 )
      {
        v183 = sub_B0D9A8(v117);
        sub_B0D948(v183, 0LL);
      }
      v114->fields.skilllv = v118->m_Items[2];
      v119 = v101->fields.data;
      if ( !v119 )
        sub_B0D97C(0LL);
      ServantData = BattleData__getServantData(v119, v114->fields.svtUniqueId, 0LL);
      v121 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v114->klass->vtable._5_get_skillId.method)(
               v114,
               v114->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v195 )
        sub_B0D97C(0LL);
      v122 = SkillLvMaster__GetEntity(v195, v121, v114->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B0D97C(v122);
      v123 = v122;
      v124 = v101->fields.data;
      if ( !v124 )
        sub_B0D97C(0LL);
      v125 = BattleData__checkAliveOther(v124, ServantData->fields.uniqueId, 0LL);
      if ( !v125 )
      {
        if ( !v123 )
          sub_B0D97C(v125);
        v126 = v101->fields.logic;
        if ( !v126 )
          sub_B0D97C(0LL);
        v111 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v126, v123->fields.funcId, 0LL);
        if ( ((unsigned __int8)v111 & 1) == 0 )
          goto LABEL_157;
      }
      v127 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v110, 0LL);
      if ( (v127 & 0x80000000) != 0 )
      {
        v130 = v196;
        TargetIds = Target__getTargetIds(v196->fields.data, v114->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v114, 0LL);
      }
      else
      {
        v128 = sub_B0D8BC(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v128;
        if ( !v128 )
          sub_B0D97C(0LL);
        if ( !*(_DWORD *)(v128 + 24) )
        {
          v185 = sub_B0D9A8(v128);
          sub_B0D948(v185, 0LL);
        }
        *(_DWORD *)(v128 + 32) = v127;
        v130 = v196;
        exists = 0;
      }
      logicskill = v130->fields.logicskill;
      v133 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !v133 )
        sub_B0D97C(0LL);
      if ( !v133->max_length )
      {
        v184 = sub_B0D9A8(v133);
        sub_B0D948(v184, 0LL);
      }
      v133->m_Items[1] = key;
      if ( !logicskill )
        sub_B0D97C(v133);
      v135 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v114,
                                                   v133,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v134);
      v101 = v196;
      v136 = (BattleLogicTask_array *)v135;
      if ( (v109 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v135, 0LL);
        if ( IsNullOrEmpty )
        {
          v109 = 1;
          goto LABEL_155;
        }
        if ( !v136 )
          sub_B0D97C(IsNullOrEmpty);
        if ( !v136->max_length )
        {
          v190 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v190, 0LL);
        }
        v139 = v136->m_Items[0];
        if ( !v139 )
          sub_B0D97C(0LL);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v139, ServantData, value, v138);
      }
      v109 = 0;
LABEL_155:
      v140 = v196->fields.logic;
      if ( !v140 )
        sub_B0D97C(0LL);
      BattleLogic__addBattleLogicTask(v140, v136, 0LL);
LABEL_157:
      monitor = value->max_length;
      if ( (int)++v108 >= monitor )
        continue;
      goto LABEL_121;
    }
  }
  v198[0] = 1261;
  v199 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v200,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v199 = 0;
  Instance = (__int64)v192;
  if ( !v192 )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v197,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v192,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v200 = v197;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v200,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v141 = v196->fields.data;
    if ( !v141 )
      sub_B0D97C(0LL);
    v142 = (int32_t)v200.fields.current.fields.key;
    v143 = v200.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v141, (int32_t)v200.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v148 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v145,
                                                            v146);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v148,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v148 )
        sub_B0D97C(isEndAct);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v148->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v143 )
      sub_B0D97C(isEndAct);
    v149 = (int)v143[1].monitor;
    if ( v149 >= 1 )
    {
      for ( i = 0; i < v149; ++i )
      {
        if ( i >= (unsigned int)v149 )
        {
          v179 = sub_B0D9A8(isEndAct);
          sub_B0D948(v179, 0LL);
        }
        v151 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v143[2].klass + i);
        if ( !v151 )
          sub_B0D97C(isEndAct);
        if ( !v151->fields._isRemove )
        {
          if ( !v42 )
            sub_B0D97C(isEndAct);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v42,
                                              v151->fields.buffId,
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v151, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v154 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v152, v153);
                BattleSkillInfoData___ctor(v154, 0LL);
                if ( !v154 )
                  sub_B0D97C(v155);
                v154->fields.svtUniqueId = v142;
                v156 = v151->fields.vals;
                if ( !v156 )
                  sub_B0D97C(v155);
                if ( !v156->max_length )
                {
                  v187 = sub_B0D9A8(v155);
                  sub_B0D948(v187, 0LL);
                }
                v157 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v154->klass->vtable._4_set_skillId.method)(
                         v154,
                         (unsigned int)v156->m_Items[1],
                         v154->klass->vtable._5_get_skillId.methodPtr);
                v158 = v151->fields.vals;
                if ( !v158 )
                  sub_B0D97C(v157);
                if ( v158->max_length <= 1 )
                {
                  v186 = sub_B0D9A8(v157);
                  sub_B0D948(v186, 0LL);
                }
                v154->fields.skilllv = v158->m_Items[2];
                v159 = v196->fields.data;
                if ( !v159 )
                  sub_B0D97C(0LL);
                v160 = BattleData__getServantData(v159, v154->fields.svtUniqueId, 0LL);
                v161 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v154->klass->vtable._5_get_skillId.method)(
                         v154,
                         v154->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v195 )
                  sub_B0D97C(0LL);
                v162 = SkillLvMaster__GetEntity(v195, v161, v154->fields.skilllv, 0LL);
                if ( !v160 )
                  sub_B0D97C(v162);
                v163 = v162;
                v164 = v196->fields.data;
                if ( !v164 )
                  sub_B0D97C(0LL);
                v165 = BattleData__checkAliveOther(v164, v160->fields.uniqueId, 0LL);
                if ( v165 )
                  goto LABEL_191;
                if ( !v163 )
                  sub_B0D97C(v165);
                v166 = v196->fields.logic;
                if ( !v166 )
                  sub_B0D97C(0LL);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v166, v163->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_191:
                  v167 = BattleServantData__GetRevengeIdCheckOpponentOnly(v160, v151, 0LL);
                  if ( (v167 & 0x80000000) != 0 )
                  {
                    v169 = Target__getTargetIds(v196->fields.data, v154->fields.svtUniqueId, -1, v142, 13, 0LL, 0LL);
                    v170 = BattleSkillInfoData__ExistsNoTargetNoActionType(v154, 0LL);
                  }
                  else
                  {
                    v168 = sub_B0D8BC(int___TypeInfo, 1LL);
                    v169 = (System_Int32_array *)v168;
                    if ( !v168 )
                      sub_B0D97C(0LL);
                    if ( !*(_DWORD *)(v168 + 24) )
                    {
                      v188 = sub_B0D9A8(v168);
                      sub_B0D948(v188, 0LL);
                    }
                    v170 = 0;
                    *(_DWORD *)(v168 + 32) = v167;
                  }
                  v171 = v196->fields.logicskill;
                  v172 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
                  if ( !v172 )
                    sub_B0D97C(0LL);
                  if ( !v172->max_length )
                  {
                    v189 = sub_B0D9A8(v172);
                    sub_B0D948(v189, 0LL);
                  }
                  v172->m_Items[1] = v142;
                  if ( !v171 )
                    sub_B0D97C(v172);
                  v174 = BattleLogicSkill__taskSkill(v171, v154, v172, v169, 1, v170, 0, v173);
                  v175 = v196->fields.logic;
                  if ( !v175 )
                    sub_B0D97C(0LL);
                  BattleLogic__addBattleLogicTask(v175, v174, 0LL);
                }
              }
            }
          }
        }
        v149 = (int)v143[1].monitor;
      }
    }
  }
  v198[0] = 1722;
  v176 = ++v199;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v200,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v176 && v198[v176 - 1] == 1722 )
    v199 = v176 - 1;
  Instance = (__int64)v196->fields.logic;
  if ( !Instance )
    goto LABEL_209;
  if ( (v194 & 1) != 0 )
    v177 = baseActData;
  else
    v177 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v177, baseActData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
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
  __int64 v31; // x24
  __int64 Instance; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  __int64 v41; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x21
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  System_Collections_Generic_List_int__o *v63; // x26
  int v64; // w8
  __int64 v65; // x28
  unsigned int v66; // w20
  __int64 v67; // x19
  __int64 *v68; // x19
  __int64 v69; // t1
  bool v70; // w3
  char v71; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *v72; // x2
  __int64 v73; // x23
  int v74; // w8
  unsigned int v75; // w19
  __int64 v76; // x22
  __int64 v77; // x8
  __int64 v78; // x22
  __int64 v79; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  int32_t v82; // w9
  struct BattleData_o *v83; // x8
  __int64 v84; // x23
  int v85; // w8
  unsigned int v86; // w19
  __int64 v87; // x25
  __int64 *v88; // x25
  __int64 v89; // t1
  __int64 v90; // x27
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v92; // x8
  struct BattlePerformance_o *perf; // x9
  __int64 v94; // x1
  __int64 v95; // x2
  struct BattleData_o *v96; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v98; // x23
  BattleLogicNomal_o *v99; // x20
  struct BattleData_o *v100; // x8
  const MethodInfo *v101; // x2
  struct BattleData_o *v102; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v106; // w22
  char v107; // w19
  BattleBuffData_BuffData_o *v108; // x23
  WarEntity_o *v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  BattleSkillInfoData_o *v112; // x26
  __int64 v113; // x0
  struct System_Int32_array *vals; // x8
  __int64 v115; // x0
  struct System_Int32_array *v116; // x8
  BattleData_o *v117; // x0
  BattleServantData_o *ServantData; // x27
  int32_t v119; // w1
  SkillLvEntity_o *v120; // x0
  SkillLvEntity_o *v121; // x28
  BattleData_o *v122; // x0
  _BOOL8 v123; // x0
  BattleLogic_o *v124; // x0
  int32_t v125; // w20
  __int64 v126; // x0
  System_Int32_array *TargetIds; // x23
  BattleLogicNomal_o *v128; // x20
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v131; // x0
  const MethodInfo *v132; // x7
  System_Collections_ICollection_o *v133; // x0
  BattleLogicTask_array *v134; // x23
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v136; // x3
  BattleLogicTask_o *v137; // x0
  BattleLogic_o *v138; // x0
  BattleLogicNomal_o *v139; // x20
  BattleData_o *v140; // x0
  int32_t v141; // w23
  Il2CppObject *v142; // x22
  BattleServantData_o *isEndAct; // x0
  __int64 v144; // x1
  __int64 v145; // x2
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v147; // x20
  int v148; // w8
  int i; // w19
  BattleBuffData_BuffData_o *v150; // x26
  __int64 v151; // x1
  __int64 v152; // x2
  BattleSkillInfoData_o *v153; // x25
  __int64 v154; // x0
  struct System_Int32_array *v155; // x8
  __int64 v156; // x0
  struct System_Int32_array *v157; // x8
  BattleData_o *v158; // x0
  BattleServantData_o *v159; // x27
  int32_t v160; // w1
  SkillLvEntity_o *v161; // x0
  SkillLvEntity_o *v162; // x28
  BattleData_o *v163; // x0
  _BOOL8 v164; // x0
  BattleLogic_o *v165; // x0
  int32_t v166; // w20
  __int64 v167; // x0
  System_Int32_array *v168; // x26
  BattleLogicNomal_o *v169; // x20
  bool v170; // w27
  BattleLogicSkill_o *v171; // x20
  System_Int32_array *v172; // x0
  const MethodInfo *v173; // x7
  BattleLogicTask_array *v174; // x1
  BattleLogic_o *v175; // x0
  int v176; // w19
  BattleActionData_o *v177; // x1
  __int64 v179; // x0
  __int64 v180; // x0
  __int64 v181; // x0
  __int64 v182; // x0
  __int64 v183; // x0
  __int64 v184; // x0
  __int64 v185; // x0
  __int64 v186; // x0
  __int64 v187; // x0
  __int64 v188; // x0
  __int64 v189; // x0
  __int64 v190; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v191; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v192; // [xsp+10h] [xbp-F0h]
  BattleActionData_o *actiondata; // [xsp+18h] [xbp-E8h]
  char v194; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v195; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v196; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v197; // [xsp+38h] [xbp-C8h] BYREF
  int v198[2]; // [xsp+60h] [xbp-A0h]
  int v199; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v200; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42176BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B0D8A4(&System_Action_AiNpcBattleServantData__TypeInfo, v4);
    sub_B0D8A4(&BattleActionData_TypeInfo, v5);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v6);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__, v17);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v18);
    sub_B0D8A4(&int___TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B0D8A4(&Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__, v28);
    sub_B0D8A4(&BattleLogicNomal___c__DisplayClass31_0_TypeInfo, v29);
    sub_B0D8A4(&StringLiteral_8825/*"MOTION_PLAYER_TURN_END"*/, v30);
    byte_42176BA = 1;
  }
  v196 = this;
  entity = 0LL;
  memset(&v200, 0, sizeof(v200));
  v199 = 0;
  v31 = sub_B0D974(BattleLogicNomal___c__DisplayClass31_0_TypeInfo, task, method);
  BattleLogicNomal___c__DisplayClass31_0___ctor((BattleLogicNomal___c__DisplayClass31_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_207;
  *(_QWORD *)(v31 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  BattleLogicNomal__SetNextTargetId(this, v39);
  actiondata = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v40, v41);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v31 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_207;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_207;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_207;
  BattleActionData__setStateField(actiondata, 0LL);
  v43 = (System_Int32_array **)StringLiteral_8825/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8825/*"MOTION_PLAYER_TURN_END"*/;
  sub_B0D840((BattleServantConfConponent_o *)&actiondata->fields.motionname, v43, v44, v45, v46, v47, v48, v49);
  v192 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                    v50,
                                                                                                    v51);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v192,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v191 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                                                    v52,
                                                                                                    v53);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v191,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v195 = (SkillLvMaster_o *)Instance;
  if ( !this->fields.data )
    goto LABEL_207;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(this->fields.data, 0LL);
  *(_QWORD *)(v31 + 24) = QuestIndividualities;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), QuestIndividualities, v55, v56, v57, v58, v59, v60);
  v63 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v61, v62);
  System_Collections_Generic_List_int____ctor(
    v63,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_207;
  v64 = *(_DWORD *)(Instance + 24);
  v65 = Instance;
  if ( v64 >= 1 )
  {
    v194 = 0;
    v66 = 0;
    while ( 1 )
    {
      if ( v66 >= v64 )
        goto LABEL_212;
      v67 = v65 + 8LL * (int)v66;
      v69 = *(_QWORD *)(v67 + 32);
      v68 = (__int64 *)(v67 + 32);
      Instance = v69;
      if ( !v69 )
        goto LABEL_207;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v196->fields.data;
        if ( !Instance )
          goto LABEL_207;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v70 = 1;
        }
        else
        {
          Instance = (__int64)v196->fields.data;
          if ( !Instance )
            goto LABEL_207;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v70 = Instance & 1;
        }
        if ( v66 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_212;
        Instance = *v68;
        if ( !*v68 )
          goto LABEL_207;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v31 + 24),
                     v196->fields.logic,
                     v70,
                     actiondata,
                     0LL);
        if ( v66 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_212;
        v71 = Instance;
        Instance = *v68;
        if ( !*v68 )
          goto LABEL_207;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v66 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_212;
          Instance = *v68;
          if ( !*v68 )
            goto LABEL_207;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_207;
          v72 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v66 >= *(_DWORD *)(v65 + 24) )
              goto LABEL_212;
            Instance = (__int64)v191;
            if ( !*v68 || !v191 )
              goto LABEL_207;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v191,
              *(_DWORD *)(*v68 + 24),
              v72,
              (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v66 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_212;
        if ( !*v68 )
          goto LABEL_207;
        Instance = *(_QWORD *)(*v68 + 760);
        if ( !Instance )
          goto LABEL_207;
        v194 |= v71;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v66 >= *(_DWORD *)(v65 + 24) )
        goto LABEL_212;
      Instance = *v68;
      if ( !*v68 )
        goto LABEL_207;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v31 + 16),
                              *(System_Int32_array **)(v31 + 24),
                              v196->fields.logic,
                              0LL,
                              0LL);
        if ( v66 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_212;
        v73 = Instance;
        Instance = *v68;
        if ( !*v68 )
          goto LABEL_207;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v66 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_212;
          Instance = *v68;
          if ( !*v68 )
            goto LABEL_207;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v73 )
              goto LABEL_207;
            if ( *(_QWORD *)(v73 + 24) )
            {
              if ( v66 >= *(_DWORD *)(v65 + 24) )
                goto LABEL_212;
              Instance = (__int64)v192;
              if ( !*v68 || !v192 )
                goto LABEL_207;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v192,
                *(_DWORD *)(*v68 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v73,
                (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v66 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_212;
        if ( !*v68 )
          goto LABEL_207;
        if ( !v63 )
          goto LABEL_207;
        System_Collections_Generic_List_int___Add(
          v63,
          *(_DWORD *)(*v68 + 24),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v73 )
          goto LABEL_207;
        v74 = *(_DWORD *)(v73 + 24);
        if ( v74 >= 1 )
          break;
      }
LABEL_73:
      v64 = *(_DWORD *)(v65 + 24);
      if ( (int)++v66 >= v64 )
        goto LABEL_76;
    }
    v75 = 0;
    while ( v75 < v74 )
    {
      v76 = v73 + 8LL * (int)v75;
      v79 = *(_QWORD *)(v76 + 32);
      v78 = v76 + 32;
      v77 = v79;
      if ( !v79 || !v42 )
        goto LABEL_207;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v42,
                   &entity,
                   *(_DWORD *)(v77 + 16),
                   (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_207;
        Instance = BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( (Instance & 1) != 0 )
        {
          logic = v196->fields.logic;
          if ( !logic )
            goto LABEL_207;
          data = logic->fields.data;
          if ( !data )
            goto LABEL_207;
          if ( v75 >= *(_DWORD *)(v73 + 24) )
            break;
          if ( !*(_QWORD *)v78 )
            goto LABEL_207;
          v82 = *(_DWORD *)(*(_QWORD *)v78 + 28LL);
          if ( data->fields.endMasterSkillTurnBuffValue <= v82 )
            data->fields.endMasterSkillTurnBuffValue = v82;
        }
      }
      v74 = *(_DWORD *)(v73 + 24);
      if ( (int)++v75 >= v74 )
        goto LABEL_73;
    }
LABEL_212:
    v181 = sub_B0D9A8(Instance);
    sub_B0D948(v181, 0LL);
  }
  v194 = 0;
LABEL_76:
  Instance = (__int64)v196->fields.data;
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v83 = v196->fields.data;
  if ( !v83 )
    goto LABEL_207;
  v84 = Instance;
  if ( !v83->fields.leaderDown || !v83->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_207;
    v85 = *(_DWORD *)(Instance + 24);
    if ( v85 >= 1 )
    {
      v86 = 0;
      while ( v86 < v85 )
      {
        v87 = v84 + 8LL * (int)v86;
        v89 = *(_QWORD *)(v87 + 32);
        v88 = (__int64 *)(v87 + 32);
        Instance = v89;
        if ( !v89 )
          goto LABEL_207;
        if ( *(_BYTE *)(Instance + 516) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v31 + 16),
                                *(System_Int32_array **)(v31 + 24),
                                v196->fields.logic,
                                0LL,
                                0LL);
          if ( v86 >= *(_DWORD *)(v84 + 24) )
            goto LABEL_212;
          v90 = Instance;
          Instance = *v88;
          if ( !*v88 )
            goto LABEL_207;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v86 >= *(_DWORD *)(v84 + 24) )
              goto LABEL_212;
            Instance = *v88;
            if ( !*v88 )
              goto LABEL_207;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v90 )
                goto LABEL_207;
              if ( *(_QWORD *)(v90 + 24) )
              {
                if ( v86 >= *(_DWORD *)(v84 + 24) )
                  goto LABEL_212;
                Instance = (__int64)v192;
                if ( !*v88 || !v192 )
                  goto LABEL_207;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v192,
                  *(_DWORD *)(*v88 + 24),
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v90,
                  (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v86 >= *(_DWORD *)(v84 + 24) )
            goto LABEL_212;
          if ( !*v88 || !v63 )
            goto LABEL_207;
          System_Collections_Generic_List_int___Add(
            v63,
            *(_DWORD *)(*v88 + 24),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v85 = *(_DWORD *)(v84 + 24);
        if ( (int)++v86 >= v85 )
          goto LABEL_103;
      }
      goto LABEL_212;
    }
LABEL_103:
    v83 = v196->fields.data;
    if ( !v83 )
      goto LABEL_207;
  }
  if ( !v63 )
    goto LABEL_207;
  battleEvent = v83->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v63,
                        (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_207;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v31 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v92 = v196->fields.data;
  if ( !v92 )
    goto LABEL_207;
  perf = v92->fields.perf;
  if ( !perf )
    goto LABEL_207;
  Instance = (__int64)v92->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_207;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v96 = v196->fields.data;
  if ( !v96 )
    goto LABEL_207;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v96->fields.aiNpcDataList;
  v98 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_AiNpcBattleServantData__TypeInfo,
                                                                               v94,
                                                                               v95);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v98,
    (Il2CppObject *)v31,
    Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_207;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v98,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v99 = v196;
  v100 = v196->fields.data;
  if ( !v100
    || (Instance = (__int64)v100->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__TurnProgressing(
          (BattleFieldEnvironmentData_o *)Instance,
          v196->fields.logic,
          *(_BYTE *)(v31 + 16),
          0LL),
        BattleLogicNomal__UpdateEndTurnBuff(v196, *(System_Int32_array **)(v31 + 24), v101),
        (v102 = v196->fields.data) == 0LL)
    || (Instance = (__int64)v191, v102->fields.currentTurn = 1, !v191) )
  {
LABEL_207:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v197,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v191,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v200 = v197;
  while ( 1 )
  {
    v109 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v200,
                            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v109 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v200.fields.current.fields.value;
    if ( !v200.fields.current.fields.value )
      sub_B0D97C(v109);
    monitor = (int)v200.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v200.fields.current.fields.key;
      v106 = 0;
      v107 = 1;
LABEL_119:
      if ( v106 >= monitor )
      {
        v180 = sub_B0D9A8(v109);
        sub_B0D948(v180, 0LL);
      }
      v108 = value->m_Items[v106];
      if ( !v108 )
        sub_B0D97C(v109);
      if ( v108->fields._isRemove )
        goto LABEL_155;
      if ( !v42 )
        sub_B0D97C(v109);
      v109 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v42,
               v108->fields.buffId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v109 )
        goto LABEL_155;
      v112 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v110, v111);
      BattleSkillInfoData___ctor(v112, 0LL);
      if ( !v112 )
        sub_B0D97C(v113);
      v112->fields.svtUniqueId = key;
      vals = v108->fields.vals;
      if ( !vals )
        sub_B0D97C(v113);
      if ( !vals->max_length )
      {
        v182 = sub_B0D9A8(v113);
        sub_B0D948(v182, 0LL);
      }
      v115 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v112->klass->vtable._4_set_skillId.method)(
               v112,
               (unsigned int)vals->m_Items[1],
               v112->klass->vtable._5_get_skillId.methodPtr);
      v116 = v108->fields.vals;
      if ( !v116 )
        sub_B0D97C(v115);
      if ( v116->max_length <= 1 )
      {
        v183 = sub_B0D9A8(v115);
        sub_B0D948(v183, 0LL);
      }
      v112->fields.skilllv = v116->m_Items[2];
      v117 = v99->fields.data;
      if ( !v117 )
        sub_B0D97C(0LL);
      ServantData = BattleData__getServantData(v117, v112->fields.svtUniqueId, 0LL);
      v119 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v112->klass->vtable._5_get_skillId.method)(
               v112,
               v112->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v195 )
        sub_B0D97C(0LL);
      v120 = SkillLvMaster__GetEntity(v195, v119, v112->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B0D97C(v120);
      v121 = v120;
      v122 = v99->fields.data;
      if ( !v122 )
        sub_B0D97C(0LL);
      v123 = BattleData__checkAliveOther(v122, ServantData->fields.uniqueId, 0LL);
      if ( !v123 )
      {
        if ( !v121 )
          sub_B0D97C(v123);
        v124 = v99->fields.logic;
        if ( !v124 )
          sub_B0D97C(0LL);
        v109 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v124, v121->fields.funcId, 0LL);
        if ( ((unsigned __int8)v109 & 1) == 0 )
          goto LABEL_155;
      }
      v125 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v108, 0LL);
      if ( (v125 & 0x80000000) != 0 )
      {
        v128 = v196;
        TargetIds = Target__getTargetIds(v196->fields.data, v112->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v112, 0LL);
      }
      else
      {
        v126 = sub_B0D8BC(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v126;
        if ( !v126 )
          sub_B0D97C(0LL);
        if ( !*(_DWORD *)(v126 + 24) )
        {
          v185 = sub_B0D9A8(v126);
          sub_B0D948(v185, 0LL);
        }
        *(_DWORD *)(v126 + 32) = v125;
        v128 = v196;
        exists = 0;
      }
      logicskill = v128->fields.logicskill;
      v131 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !v131 )
        sub_B0D97C(0LL);
      if ( !v131->max_length )
      {
        v184 = sub_B0D9A8(v131);
        sub_B0D948(v184, 0LL);
      }
      v131->m_Items[1] = key;
      if ( !logicskill )
        sub_B0D97C(v131);
      v133 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v112,
                                                   v131,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v132);
      v99 = v196;
      v134 = (BattleLogicTask_array *)v133;
      if ( (v107 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v133, 0LL);
        if ( IsNullOrEmpty )
        {
          v107 = 1;
          goto LABEL_153;
        }
        if ( !v134 )
          sub_B0D97C(IsNullOrEmpty);
        if ( !v134->max_length )
        {
          v190 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v190, 0LL);
        }
        v137 = v134->m_Items[0];
        if ( !v137 )
          sub_B0D97C(0LL);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v137, ServantData, value, v136);
      }
      v107 = 0;
LABEL_153:
      v138 = v196->fields.logic;
      if ( !v138 )
        sub_B0D97C(0LL);
      BattleLogic__addBattleLogicTask(v138, v134, 0LL);
LABEL_155:
      monitor = value->max_length;
      if ( (int)++v106 >= monitor )
        continue;
      goto LABEL_119;
    }
  }
  v198[0] = 1264;
  v199 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v200,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v199 = 0;
  v139 = v196;
  Instance = (__int64)v192;
  if ( !v192 )
    goto LABEL_207;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v197,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v192,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v200 = v197;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v200,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v140 = v139->fields.data;
    if ( !v140 )
      sub_B0D97C(0LL);
    v141 = (int32_t)v200.fields.current.fields.key;
    v142 = v200.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v140, (int32_t)v200.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v147 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v144,
                                                            v145);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v147,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v147 )
        sub_B0D97C(isEndAct);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v147->fields._selfConcatSvtIndividualities_k__BackingField;
      v139 = v196;
    }
    if ( !v142 )
      sub_B0D97C(isEndAct);
    v148 = (int)v142[1].monitor;
    if ( v148 >= 1 )
    {
      for ( i = 0; i < v148; ++i )
      {
        if ( i >= (unsigned int)v148 )
        {
          v179 = sub_B0D9A8(isEndAct);
          sub_B0D948(v179, 0LL);
        }
        v150 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v142[2].klass + i);
        if ( !v150 )
          sub_B0D97C(isEndAct);
        if ( !v150->fields._isRemove )
        {
          if ( !v42 )
            sub_B0D97C(isEndAct);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v42,
                                              v150->fields.buffId,
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v150, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v153 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v151, v152);
                BattleSkillInfoData___ctor(v153, 0LL);
                if ( !v153 )
                  sub_B0D97C(v154);
                v153->fields.svtUniqueId = v141;
                v155 = v150->fields.vals;
                if ( !v155 )
                  sub_B0D97C(v154);
                if ( !v155->max_length )
                {
                  v187 = sub_B0D9A8(v154);
                  sub_B0D948(v187, 0LL);
                }
                v156 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v153->klass->vtable._4_set_skillId.method)(
                         v153,
                         (unsigned int)v155->m_Items[1],
                         v153->klass->vtable._5_get_skillId.methodPtr);
                v157 = v150->fields.vals;
                if ( !v157 )
                  sub_B0D97C(v156);
                if ( v157->max_length <= 1 )
                {
                  v186 = sub_B0D9A8(v156);
                  sub_B0D948(v186, 0LL);
                }
                v153->fields.skilllv = v157->m_Items[2];
                v158 = v139->fields.data;
                if ( !v158 )
                  sub_B0D97C(0LL);
                v159 = BattleData__getServantData(v158, v153->fields.svtUniqueId, 0LL);
                v160 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v153->klass->vtable._5_get_skillId.method)(
                         v153,
                         v153->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v195 )
                  sub_B0D97C(0LL);
                v161 = SkillLvMaster__GetEntity(v195, v160, v153->fields.skilllv, 0LL);
                if ( !v159 )
                  sub_B0D97C(v161);
                v162 = v161;
                v163 = v139->fields.data;
                if ( !v163 )
                  sub_B0D97C(0LL);
                v164 = BattleData__checkAliveOther(v163, v159->fields.uniqueId, 0LL);
                if ( v164 )
                  goto LABEL_189;
                if ( !v162 )
                  sub_B0D97C(v164);
                v165 = v139->fields.logic;
                if ( !v165 )
                  sub_B0D97C(0LL);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v165, v162->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_189:
                  v166 = BattleServantData__GetRevengeIdCheckOpponentOnly(v159, v150, 0LL);
                  if ( (v166 & 0x80000000) != 0 )
                  {
                    v169 = v196;
                    v168 = Target__getTargetIds(v196->fields.data, v153->fields.svtUniqueId, -1, v141, 13, 0LL, 0LL);
                    v170 = BattleSkillInfoData__ExistsNoTargetNoActionType(v153, 0LL);
                  }
                  else
                  {
                    v167 = sub_B0D8BC(int___TypeInfo, 1LL);
                    v168 = (System_Int32_array *)v167;
                    if ( !v167 )
                      sub_B0D97C(0LL);
                    if ( !*(_DWORD *)(v167 + 24) )
                    {
                      v188 = sub_B0D9A8(v167);
                      sub_B0D948(v188, 0LL);
                    }
                    *(_DWORD *)(v167 + 32) = v166;
                    v169 = v196;
                    v170 = 0;
                  }
                  v171 = v169->fields.logicskill;
                  v172 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
                  if ( !v172 )
                    sub_B0D97C(0LL);
                  if ( !v172->max_length )
                  {
                    v189 = sub_B0D9A8(v172);
                    sub_B0D948(v189, 0LL);
                  }
                  v172->m_Items[1] = v141;
                  if ( !v171 )
                    sub_B0D97C(v172);
                  v174 = BattleLogicSkill__taskSkill(v171, v153, v172, v168, 1, v170, 0, v173);
                  v139 = v196;
                  v175 = v196->fields.logic;
                  if ( !v175 )
                    sub_B0D97C(0LL);
                  BattleLogic__addBattleLogicTask(v175, v174, 0LL);
                }
              }
            }
          }
        }
        v148 = (int)v142[1].monitor;
      }
    }
  }
  v198[0] = 1728;
  v176 = ++v199;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v200,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v176 && v198[v176 - 1] == 1728 )
    v199 = v176 - 1;
  Instance = (__int64)v139->fields.logic;
  if ( !Instance )
    goto LABEL_207;
  if ( (v194 & 1) != 0 )
    v177 = actiondata;
  else
    v177 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v177, actiondata, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  System_Int32_array **motionName; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **motionMessage; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **targetObject; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42176B7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, task);
    byte_42176B7 = 1;
  }
  v4 = sub_B0D974(BattleActionData_TypeInfo, task, method);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_B0D97C(v5);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, v6);
  motionName = (System_Int32_array **)task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 64), motionName, v8, v9, v10, v11, v12, v13);
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 128), motionMessage, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = (System_Int32_array **)task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 72), targetObject, v22, v23, v24, v25, v26, v27);
  return (BattleActionData_o *)v4;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftGuts(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  BattleLogicNomal_o *v4; // x20
  BattleServantData_o *v6; // x21
  int32_t ShiftGuts; // w0
  int32_t v8; // w22
  struct BattleData_o *v9; // x8
  System_String_o *v10; // x23
  const MethodInfo *v11; // x6
  struct BattleLogic_o *logic; // x8
  BuffEntity_o *buffEntity; // [xsp+8h] [xbp-28h] BYREF

  buffEntity = 0LL;
  if ( !task )
    goto LABEL_13;
  data = this->fields.data;
  v4 = this;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_13;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_13;
  v6 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  buffEntity = 0LL;
  if ( !v6->fields.buffData )
    goto LABEL_13;
  ShiftGuts = BattleBuffData__GetShiftGuts(
                v6->fields.buffData,
                v6,
                (BattleBuffData_CheckIndividualitiesData_array *)this,
                &buffEntity,
                0LL);
  if ( buffEntity )
  {
    v8 = ShiftGuts;
    this = (BattleLogicNomal_o *)BuffEntity__GetMotionName(buffEntity, 0LL);
    v9 = v4->fields.data;
    if ( v9 )
    {
      v10 = (System_String_o *)this;
      this = (BattleLogicNomal_o *)v9->fields.perf;
      if ( this )
      {
        BattlePerformance__PlayShiftGuts((BattlePerformance_o *)this, 0LL);
        this = (BattleLogicNomal_o *)v6->fields.buffData;
        if ( this )
        {
          this = (BattleLogicNomal_o *)BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
          logic = v4->fields.logic;
          if ( logic )
          {
            if ( logic->fields.logicReaction )
              return BattleLogicReaction__createResurrectionCommon(
                       (BattleLogicReaction_o *)this,
                       v6,
                       buffEntity,
                       v8,
                       task->fields.isForcedSpeedOne,
                       v10,
                       v11);
          }
        }
      }
    }
LABEL_13:
    sub_B0D97C(this);
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftServant(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  BattleActionData_ShiftServant_o *v21; // x22

  v4 = this;
  if ( (byte_42176C1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, task);
    sub_B0D8A4(&BattleActionData_ShiftServant_TypeInfo, v5);
    this = (BattleLogicNomal_o *)sub_B0D8A4(&StringLiteral_8829/*"MOTION_SHIFT"*/, v6);
    byte_42176C1 = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v11 = sub_B0D974(BattleActionData_TypeInfo, v9, v10);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  if ( !v11 )
    goto LABEL_10;
  *(_DWORD *)(v11 + 32) = ServantData->fields.uniqueId;
  v18 = (System_Int32_array **)StringLiteral_8829/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8829/*"MOTION_SHIFT"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 64), v18, v12, v13, v14, v15, v16, v17);
  v21 = (BattleActionData_ShiftServant_o *)sub_B0D974(BattleActionData_ShiftServant_TypeInfo, v19, v20);
  BattleActionData_ShiftServant___ctor(v21, 0LL);
  if ( !v21
    || (BattleActionData_ShiftServant__setBeforeSvtData(v21, ServantData, 0LL),
        BattleServantData__setShiftServant(ServantData, v4->fields.data, 1, 0LL),
        BattleServantData__SetIsBattleShift(ServantData, 1, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v21, ServantData, 0LL),
        BattleActionData__setShiftServant((BattleActionData_o *)v11, v21, 0LL),
        (this = (BattleLogicNomal_o *)v4->fields.logic) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, ServantData->fields.uniqueId, 1, 0, 0LL);
  return (BattleActionData_o *)v11;
}


BattleActionData_o *__fastcall BattleLogicNomal__createStartEnemyTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleActionData_o *StartTurn; // x0
  const MethodInfo *v7; // x1
  struct BattleData_o *data; // x8
  BattleActionData_o *v9; // x20
  struct BattleData_o *v10; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x21
  struct BattleData_o *v13; // x8
  struct BattlePerformance_o *v14; // x8

  if ( (byte_42176B8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, task);
    sub_B0D8A4(&StringLiteral_11114/*"RESET_CAMERA_BAT"*/, v5);
    byte_42176B8 = 1;
  }
  StartTurn = BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0LL;
  StartTurn = BattleLogicNomal__DeadChangePos(this, v7);
  v9 = StartTurn;
  if ( StartTurn )
  {
    v10 = this->fields.data;
    if ( !v10 )
      goto LABEL_19;
    perf = v10->fields.perf;
    if ( !perf )
      goto LABEL_19;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    StartTurn = (BattleActionData_o *)UnityEngine_Object__op_Inequality(actioncamera, 0LL, 0LL);
    if ( ((unsigned __int8)StartTurn & 1) != 0 )
    {
      v13 = this->fields.data;
      if ( v13 )
      {
        v14 = v13->fields.perf;
        if ( v14 )
        {
          StartTurn = (BattleActionData_o *)v14->fields.actioncamera;
          if ( StartTurn )
          {
            BattleActionCamera__sendMainEvent(
              (BattleActionCamera_o *)StartTurn,
              (System_String_o *)StringLiteral_11114/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v9;
          }
        }
      }
LABEL_19:
      sub_B0D97C(StartTurn);
    }
  }
  return v9;
}


BattleActionData_o *__fastcall BattleLogicNomal__createStartTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  void *data; // x0
  int v6; // w10
  unsigned int v7; // w8
  __int64 v8; // x10
  struct BattleData_o *v9; // x8
  struct BattleData_o *v10; // x8
  __int64 v12; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_13;
  v6 = *((_DWORD *)data + 6);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
      {
        v12 = sub_B0D9A8(data);
        sub_B0D948(v12, 0LL);
      }
      v8 = *((_QWORD *)data + (int)v7 + 4);
      if ( !v8 )
        break;
      *(_BYTE *)(v8 + 516) = 1;
      v6 = *((_DWORD *)data + 6);
      if ( (int)++v7 >= v6 )
        goto LABEL_8;
    }
LABEL_13:
    sub_B0D97C(data);
  }
LABEL_8:
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_13;
  v9->fields.systemflg_skipDeadtemp = 0;
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_13;
  if ( !task )
    goto LABEL_13;
  data = v10->fields.battleEvent;
  if ( !data )
    goto LABEL_13;
  (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)data + 760LL))(
    data,
    task->fields.actiontype == 20,
    *(_QWORD *)(*(_QWORD *)data + 768LL));
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
  __int64 v9; // x0

  if ( !svtList )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
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
  void *data; // x0
  int v5; // w8
  _DWORD *v6; // x20
  unsigned int v7; // w21
  char *v8; // x22
  char *v9; // x22
  void *v10; // t1
  __int64 v12; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  data = BattleData__getFieldEnemyServantList((BattleData_o *)data, 1, 0LL);
  if ( !data )
    goto LABEL_14;
  v5 = *((_DWORD *)data + 6);
  v6 = data;
  if ( v5 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v5 )
      goto LABEL_15;
    v8 = (char *)&v6[2 * v7];
    v10 = (void *)*((_QWORD *)v8 + 4);
    v9 = v8 + 32;
    data = v10;
    if ( !v10 )
      goto LABEL_14;
    if ( *((_DWORD *)data + 6) != uniqueId )
    {
      data = (void *)BattleServantData__isShiftReady((BattleServantData_o *)data, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
    }
    v5 = v6[6];
    if ( (int)++v7 >= v5 )
      return 0;
  }
  if ( v7 >= v6[6] )
  {
LABEL_15:
    v12 = sub_B0D9A8(data);
    sub_B0D948(v12, 0LL);
  }
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_B0D97C(data);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
  return data->fields.battleEvent;
}


void __fastcall BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattleLogic_reactionFunction_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_42176AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_B0D8A4(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_42176AC = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_B0D97C(v8);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    36,
    (System_String_o *)v7,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v4; // x21
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
  int32_t v15; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  BattleServantData_o *v17; // x22
  bool IsShiftGuts; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  BattleLogicTask_o *v21; // x22
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  BattleLogicTask_o *v30; // x21
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x3

  v4 = this;
  if ( (byte_42176C2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, task);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicNomal_o *)sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_42176C2 = 1;
  }
  if ( !task )
    goto LABEL_20;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  ShiftableUniqueId = BattleLogicNomal__getShiftableUniqueId(v4, ActorId, v11);
  if ( !ShiftableUniqueId )
    return v4->fields.zeroTask;
  v15 = ShiftableUniqueId;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicNomal_o *)v4->fields.data;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicNomal_o *)BattleData__getServantData((BattleData_o *)this, v15, 0LL);
  if ( !this )
    goto LABEL_20;
  v17 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  if ( !v17->fields.buffData )
    goto LABEL_20;
  IsShiftGuts = BattleBuffData__IsShiftGuts(
                  v17->fields.buffData,
                  v17,
                  (BattleBuffData_CheckIndividualitiesData_array *)this,
                  0LL);
  v21 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v19, v20);
  BattleLogicTask___ctor(v21, v22);
  if ( !v21 )
    goto LABEL_20;
  if ( IsShiftGuts )
  {
    v21->fields.actiontype = 62;
    BattleLogicTask__setActor(v21, 3, v15, v23);
    if ( v16 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      logic = v4->fields.logic;
      if ( logic )
      {
        this = (BattleLogicNomal_o *)logic->fields.logicReaction;
        if ( this )
        {
          TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                      (BattleLogicReaction_o *)this,
                                                                      v15,
                                                                      v24);
          if ( TaskGuts )
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
              TaskGuts,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          goto LABEL_18;
        }
      }
    }
LABEL_20:
    sub_B0D97C(this);
  }
  v21->fields.actiontype = 37;
  BattleLogicTask__setActor(v21, 3, v15, v23);
  if ( !v16 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_18:
  v30 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v27, v28);
  BattleLogicTask___ctor(v30, v31);
  if ( !v30 )
    goto LABEL_20;
  v30->fields.actiontype = 36;
  BattleLogicTask__setActor(v30, 3, v15, v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskAddCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  BattleData_o *battleEvent; // x0
  struct BattleData_o *v13; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v15; // x0
  BattleCommandData_o *v16; // x22
  BattleServantData_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogicTask_o *v20; // x23
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3

  if ( (byte_42176AE & 1) == 0 )
  {
    sub_B0D8A4(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_42176AE = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_24;
  battleEvent = (BattleData_o *)v13->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_24;
  battleEvent = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, void *))battleEvent->klass[1].vtable._5_isAiTarget.method)(
                                  battleEvent,
                                  battleEvent->klass[2]._1.image);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_22;
  if ( !data )
    goto LABEL_24;
  combodata = data->fields.combodata;
  if ( !combodata )
    goto LABEL_24;
  if ( combodata->fields.samecount < 3 )
    goto LABEL_22;
  v15 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v15 = BattleDataDefine_TypeInfo;
  }
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v15->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v16 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_24;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v16->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v17 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v17->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v17, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_22:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_24:
    sub_B0D97C(battleEvent);
  }
  v20 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v18, v19);
  BattleLogicTask___ctor(v20, v21);
  if ( !v20 )
    goto LABEL_24;
  BattleLogicTask__setActor(v20, 2, v16->fields.uniqueId, v22);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_24;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v20, v23);
  BattleLogicTask__setAddAttackCommand(v20, data->fields.combodata, v16, v24);
  v20->fields.isCanCounterTask = 1;
  if ( !v11 )
    goto LABEL_24;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  BattleLogicTask_o *v13; // x20
  const MethodInfo *v14; // x1
  int v15; // w8
  const MethodInfo *v16; // x1

  if ( (byte_42176BE & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_42176BE = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                 *(_QWORD *)&ltype,
                                                                                                 data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v13 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v11, v12);
    BattleLogicTask___ctor(v13, v16);
    if ( !v13 )
      goto LABEL_13;
    v15 = 19;
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v9 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
      sub_B0D97C(v10);
    }
    v13 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v11, v12);
    BattleLogicTask___ctor(v13, v14);
    if ( !v13 )
      goto LABEL_13;
    v15 = 18;
  }
  v13->fields.actiontype = v15;
  if ( !v9 )
    goto LABEL_13;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  BattleLogic_o *logic; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  BattleLogicTask_o *v13; // x20
  const MethodInfo *v14; // x1

  if ( (byte_42176B0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_42176B0 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                 *(_QWORD *)&ltype,
                                                                                                 data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v13 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v11, v12),
        BattleLogicTask___ctor(v13, v14),
        !v13)
    || (v13->fields.actiontype = 7, !v9) )
  {
    sub_B0D97C(logic);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskComboOrderBefore(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleData_o *v4; // x8
  BattleLogicNomal_o *v5; // x19

  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_7;
  v5 = this;
  this = (BattleLogicNomal_o *)v4->fields.battleEvent;
  if ( !this )
    goto LABEL_7;
  this = (BattleLogicNomal_o *)(*(__int64 (__fastcall **)(BattleLogicNomal_o *, Il2CppClass *, BattleData_o *, const MethodInfo *))&this->klass[2]._1.this_arg.bits)(
                                 this,
                                 this->klass[2]._1.element_class,
                                 data,
                                 method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( data )
    {
      BattleData__ApplyCommandcardFirstBonus(data, 0LL);
      return v5->fields.zeroTask;
    }
LABEL_7:
    sub_B0D97C(this);
  }
  return v5->fields.zeroTask;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  BattleCommandData_o *battleEvent; // x0
  struct BattleData_o *v13; // x8
  int32_t v14; // w22
  BattleCommandData_o *v15; // x23
  BattleServantData_o *v16; // x25
  __int64 v17; // x1
  __int64 v18; // x2
  BattleLogicTask_o *v19; // x24
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x4
  int32_t TreasureDvcId; // w0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2

  if ( (byte_42176AD & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_42176AD = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)v13->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
  {
    if ( ltype == 3 )
      v14 = 2;
    else
      v14 = ltype == 2;
    this->fields.commandIndex = v14;
    if ( !data )
      goto LABEL_33;
    battleEvent = BattleData__getSelectCommand(data, v14, 0LL);
    if ( !battleEvent )
      goto LABEL_33;
    v15 = battleEvent;
    battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
    if ( ((unsigned __int8)battleEvent & 1) == 0 )
    {
      battleEvent = (BattleCommandData_o *)this->fields.data;
      if ( !battleEvent )
        goto LABEL_33;
      battleEvent = (BattleCommandData_o *)BattleData__getServantData(
                                             (BattleData_o *)battleEvent,
                                             v15->fields.uniqueId,
                                             0LL);
      if ( !battleEvent )
        goto LABEL_33;
      v16 = (BattleServantData_o *)battleEvent;
      battleEvent = (BattleCommandData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
      if ( ((unsigned __int8)battleEvent & 1) != 0 && v16->fields.isEntry )
      {
        battleEvent = (BattleCommandData_o *)BattleServantData__isAction(v16, 0LL);
        if ( ((unsigned __int8)battleEvent & 1) != 0 )
        {
          battleEvent = (BattleCommandData_o *)BattleServantData__isCardTypeAction(v16, v15, 0LL);
          if ( ((unsigned __int8)battleEvent & 1) != 0 )
          {
            v19 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v17, v18);
            BattleLogicTask___ctor(v19, v20);
            if ( v19 )
            {
              BattleLogicTask__setActionCommand(v19, data->fields.combodata, v15, v14, v21);
              if ( BattleData__isTutorial(data, 0LL) )
              {
                if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
                  BattleCommandData__checkCriticalRate(v15, 0, 0LL);
              }
              else
              {
                BattleCommandData__LotteryPlayerSideCritical(v15, 0LL);
              }
              BattleLogicTask__setActor(v19, 2, v15->fields.uniqueId, v22);
              v19->fields.isCanCounterTask = 1;
              if ( v15->fields.treasureDvc < 1 )
              {
                BattleData__setTDChain(data, 0, 0LL);
                battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                if ( battleEvent )
                {
                  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                         (BattleLogicTarget_o *)battleEvent,
                                                         v19,
                                                         v28);
                  if ( v11 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v11,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                  }
                }
              }
              else
              {
                battleEvent = (BattleCommandData_o *)this->fields.logic;
                if ( battleEvent )
                {
                  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
                  BattleLogicTask__setActor(v19, 2, v16->fields.uniqueId, v24);
                  BattleLogicTask__setActionCommand(v19, data->fields.combodata, v15, v14, v25);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(v16, 1, 0LL);
                  v19->fields.actiontype = 4;
                  v19->fields.treasureDvcId = TreasureDvcId;
                  v19->fields.tresureDvcLv = 1;
                  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                  if ( battleEvent )
                  {
                    battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                           (BattleLogicTarget_o *)battleEvent,
                                                           v19,
                                                           v27);
                    if ( v11 )
                    {
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v11,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                      BattleData__setTDChain(data, 1, 0LL);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                    }
                  }
                }
              }
            }
LABEL_33:
            sub_B0D97C(battleEvent);
          }
        }
      }
    }
  }
  if ( !v11 )
    goto LABEL_33;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 Instance; // x0
  __int64 v30; // x8
  __int64 v31; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x28
  BattleServantData_o *v34; // x27
  int32_t wasAttackTargetId; // w1
  BattleServantData_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_IEnumerable_T__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  void *monitor; // x8
  __int64 v43; // x24
  BattleBuffData_BuffData_o *v44; // x20
  __int64 v45; // x25
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  const MethodInfo *v49; // x2
  int32_t counterId; // w1
  int32_t counterLv; // w2
  int32_t counterOc; // w8
  __int64 v53; // x22
  BattleSkillInfoData_o *v54; // x26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  System_Int32_array *v57; // x22
  const MethodInfo *v58; // x6
  System_Int32_array **CounterMessage; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x3
  __int64 v67; // x9
  BattleLogicNomal___c_c *v68; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__15_0; // x20
  Il2CppObject *v71; // x21
  struct BattleLogicNomal___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct BattleLogic_o *logic; // x8
  __int64 v81; // x0
  _BOOL4 v82; // [xsp+Ch] [xbp-94h]
  BattleLogicNomal_o *v83; // [xsp+10h] [xbp-90h]
  _BOOL4 v84; // [xsp+1Ch] [xbp-84h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v86; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *v87; // [xsp+30h] [xbp-70h]
  char v88; // [xsp+3Ch] [xbp-64h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // [xsp+40h] [xbp-60h]

  v6 = isInitLogicHp;
  v7 = isSkillCounter;
  if ( (byte_42176AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, data);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v11);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v12);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67862304, v18);
    sub_B0D8A4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v19);
    sub_B0D8A4(&int___TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__, v27);
    sub_B0D8A4(&BattleLogicNomal___c_TypeInfo, v28);
    byte_42176AF = 1;
  }
  v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  data,
                                                                                                  isEnemy);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v89,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  v87 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( !data )
    goto LABEL_73;
  v30 = 288LL;
  if ( isEnemy )
    v30 = 296LL;
  v31 = *(__int64 *)((char *)&data->klass + v30);
  if ( !v31 )
    goto LABEL_73;
  v32 = *(_QWORD *)(v31 + 24);
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    do
    {
      if ( v33 >= (unsigned int)v32 )
      {
LABEL_72:
        v81 = sub_B0D9A8(Instance);
        sub_B0D948(v81, 0LL);
      }
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v31 + 4 * v33 + 32), 0LL);
      if ( Instance )
      {
        v34 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v34, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = v34->fields.wasAttackTargetId;
            if ( wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v36 = (BattleServantData_o *)Instance;
                if ( v34->fields.isEnemy != (*(_BYTE *)(Instance + 455) != 0) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v36, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v34->fields.buffData;
                    if ( !Instance )
                      goto LABEL_73;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v34,
                                          v36,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_73;
                    v39 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v82 = v6;
                      v83 = this;
                      v86 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B0D974(
                                                                                               System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                                               v37,
                                                                                               v38);
                      System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
                        v86,
                        v39,
                        (const MethodInfo_2C7BAA8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67862304);
                      monitor = v39[1].monitor;
                      if ( (int)monitor >= 1 )
                      {
                        v43 = 4LL;
                        v88 = 1;
                        v84 = v7;
                        do
                        {
                          if ( v43 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_72;
                          v44 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v39->klass + v43);
                          if ( !v7 )
                            goto LABEL_76;
                          if ( !v44 )
                            goto LABEL_73;
                          if ( v44->fields.isSkillReaction )
                          {
LABEL_76:
                            v45 = sub_B0D974(BattleLogicTask_TypeInfo, v40, v41);
                            BattleLogicTask___ctor((BattleLogicTask_o *)v45, v46);
                            if ( !v45 )
                              goto LABEL_73;
                            v48 = isEnemy ? 3 : 2;
                            BattleLogicTask__setActor((BattleLogicTask_o *)v45, v48, v34->fields.uniqueId, v47);
                            BattleLogicTask__setTarget((BattleLogicTask_o *)v45, v34->fields.wasAttackTargetId, v49);
                            Instance = (__int64)v34->fields.buffData;
                            if ( !Instance )
                              goto LABEL_73;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v44, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v34->fields.overkillTargetId = -1;
                              if ( !v44 )
                                goto LABEL_73;
                              counterId = v44->fields.counterId;
                              counterLv = v44->fields.counterLv;
                              if ( v44->fields.isUseTreasureDevice )
                              {
                                counterOc = v44->fields.counterOc;
                                *(_DWORD *)(v45 + 48) = 5;
                                *(_DWORD *)(v45 + 84) = counterId;
                                *(_DWORD *)(v45 + 88) = counterLv;
                                *(_DWORD *)(v45 + 164) = counterOc;
                                *(_BYTE *)(v45 + 81) = 1;
                              }
                              else
                              {
                                Instance = (__int64)MasterData_WarQuestSelectionMaster;
                                if ( !MasterData_WarQuestSelectionMaster )
                                  goto LABEL_73;
                                Instance = (__int64)SkillLvMaster__GetEntity(
                                                      MasterData_WarQuestSelectionMaster,
                                                      counterId,
                                                      counterLv,
                                                      0LL);
                                if ( !Instance )
                                  goto LABEL_54;
                                v53 = Instance;
                                v54 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v40, v41);
                                BattleSkillInfoData___ctor(v54, 0LL);
                                if ( !v54 )
                                  goto LABEL_73;
                                v54->fields.type = 20;
                                uniqueId = v34->fields.uniqueId;
                                klass = v54->klass;
                                v54->fields.index = 0;
                                v54->fields.svtUniqueId = uniqueId;
                                ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
                                  v54,
                                  *(unsigned int *)(v53 + 16),
                                  klass->vtable._5_get_skillId.methodPtr);
                                v54->fields.skilllv = *(_DWORD *)(v53 + 20);
                                Instance = sub_B0D8BC(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                v57 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v34->fields.wasAttackTargetId;
                                Instance = sub_B0D8BC(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v34->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  (BattleLogicTask_o *)v45,
                                  v54,
                                  v57,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  v58);
                                v7 = v84;
                              }
                              Instance = (__int64)v87;
                              if ( !v87 )
                                goto LABEL_73;
                              Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v87,
                                                    v44->fields.buffId,
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_73;
                              CounterMessage = (System_Int32_array **)BuffEntity__GetCounterMessage(
                                                                        (BuffEntity_o *)Instance,
                                                                        0LL);
                              *(_QWORD *)(v45 + 152) = CounterMessage;
                              sub_B0D840(
                                (BattleServantConfConponent_o *)(v45 + 152),
                                CounterMessage,
                                v60,
                                v61,
                                v62,
                                v63,
                                v64,
                                v65);
                              *(_DWORD *)(v45 + 144) = 2;
                              *(_BYTE *)(v45 + 162) = 1;
                              if ( (v88 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  (BattleLogicTask_o *)v45,
                                  v34,
                                  (BattleBuffData_BuffData_array *)v39,
                                  v66);
                              Instance = (__int64)v89;
                              if ( !v89 )
                                goto LABEL_73;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v89,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
                                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              Instance = (__int64)v86;
                              if ( !v86 )
                                goto LABEL_73;
                              Instance = System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                           v86,
                                           v44,
                                           (const MethodInfo_2C7C20C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v88 = 0;
                            }
                          }
LABEL_54:
                          LODWORD(monitor) = v39[1].monitor;
                          v67 = v43 - 3;
                          ++v43;
                        }
                        while ( v67 < (int)monitor );
                      }
                      v68 = BattleLogicNomal___c_TypeInfo;
                      if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v68 = BattleLogicNomal___c_TypeInfo;
                      }
                      static_fields = v68->static_fields;
                      this = v83;
                      v6 = v82;
                      _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__15_0;
                      if ( !_9__15_0 )
                      {
                        if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v68);
                          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        }
                        v71 = (Il2CppObject *)static_fields->__9;
                        _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(System_Action_BattleBuffData_BuffData__TypeInfo, v40, v41);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          _9__15_0,
                          v71,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__,
                          (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
                        v72 = BattleLogicNomal___c_TypeInfo->static_fields;
                        v72->__9__15_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__15_0;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&v72->__9__15_0,
                          (System_Int32_array **)_9__15_0,
                          v73,
                          v74,
                          v75,
                          v76,
                          v77,
                          v78);
                      }
                      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        (System_Collections_Generic_IEnumerable_T__o *)v86,
                        (System_Action_T__o *)_9__15_0,
                        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v32) = *(_DWORD *)(v31 + 24);
    }
    while ( (__int64)++v33 < (int)v32 );
  }
  if ( !v89 )
    goto LABEL_73;
  if ( v89->fields._size < 1 )
    goto LABEL_70;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_73:
    sub_B0D97C(Instance);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_70:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_73;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v89,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v89,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v15; // x23
  const MethodInfo *v16; // x1
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3
  int32_t v32; // w1

  if ( (byte_42176B5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, svtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_42176B5 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  svtData,
                                                                                                  motionName);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v15 = sub_B0D974(BattleLogicTask_TypeInfo, v13, v14);
  BattleLogicTask___ctor((BattleLogicTask_o *)v15, v16);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 104) = motionName;
  *(_DWORD *)(v15 + 48) = 10;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v15 + 104),
    (System_Int32_array **)motionName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !Tr )
    goto LABEL_11;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v15 + 112) = gameObject;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 112), gameObject, v25, v26, v27, v28, v29, v30);
  if ( !svtData )
    goto LABEL_11;
  v32 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, v32, svtData->fields.uniqueId, v31);
  if ( !v12 )
LABEL_11:
    sub_B0D97C(v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


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
  __int64 v25; // x21
  const MethodInfo *v26; // x1
  BattleEntity_o *battle_ent; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct BattleData_o *data; // x8
  System_String_o *v42; // x0
  const MethodInfo *v43; // x3
  BattleData_o *v44; // x8
  System_String_o *v45; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v47; // x2
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  int32_t uniqueId; // w2
  System_Int32_array **v51; // x19
  const MethodInfo *v52; // x3
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct BattleData_o *v59; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v61; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v63; // x2
  Il2CppObject *v64; // x0
  System_Int32_array **v65; // x22
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  int v73; // [xsp+8h] [xbp-38h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42176B6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, svtData);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_2540/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_B0D8A4(&StringLiteral_8822/*"MOTION_ENTRY"*/, v16);
    sub_B0D8A4(&StringLiteral_2538/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_B0D8A4(&StringLiteral_2539/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_B0D8A4(&StringLiteral_8823/*"MOTION_ENTRY_TAC"*/, v19);
    byte_42176B6 = 1;
  }
  v20 = (System_Int32_array ***)&StringLiteral_8823/*"MOTION_ENTRY_TAC"*/;
  if ( !isTactical )
    v20 = (System_Int32_array ***)&StringLiteral_8822/*"MOTION_ENTRY"*/;
  v21 = *v20;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  svtData,
                                                                                                  Tr);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v25 = sub_B0D974(BattleLogicTask_TypeInfo, v23, v24);
  BattleLogicTask___ctor((BattleLogicTask_o *)v25, v26);
  if ( !v25 )
    goto LABEL_30;
  *(_QWORD *)(v25 + 104) = v21;
  *(_DWORD *)(v25 + 48) = 10;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 104), v21, v28, v29, v30, v31, v32, v33);
  if ( !Tr )
    goto LABEL_30;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v25 + 112) = gameObject;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 112), gameObject, v35, v36, v37, v38, v39, v40);
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
    battle_ent = (BattleEntity_o *)BattleEntity__GetStageEntityAtWave(battle_ent, data->fields.wavecount, 0LL);
    if ( !battle_ent )
      goto LABEL_30;
    if ( StageEntity__isNotDisplayRemain((StageEntity_o *)battle_ent, 0LL) )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2539/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2538/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
      v59 = this->fields.data;
      if ( !v59 )
        goto LABEL_30;
      EnemyCountStartValue_k__BackingField = v59->fields._EnemyCountStartValue_k__BackingField;
      v61 = (System_String_o *)battle_ent;
      EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v59, 0LL);
      v73 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v63)
          + EnemyCountStartValue_k__BackingField;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
      v42 = System_String__Format(v61, v64, 0LL);
    }
    v65 = (System_Int32_array **)v42;
    BattleLogicTask__setActor((BattleLogicTask_o *)v25, 3, svtData->fields.uniqueId, v43);
    *(_QWORD *)(v25 + 152) = v65;
    sub_B0D840((BattleServantConfConponent_o *)(v25 + 152), v65, v66, v67, v68, v69, v70, v71);
    *(_DWORD *)(v25 + 144) = 1;
    if ( v22 )
      goto LABEL_29;
LABEL_30:
    sub_B0D97C(battle_ent);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2540/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v44 = this->fields.data;
  if ( !v44 )
    goto LABEL_30;
  v45 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v44, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v47);
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v49 = System_String__Format(v45, v48, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v51 = (System_Int32_array **)v49;
  BattleLogicTask__setActor((BattleLogicTask_o *)v25, 2, uniqueId, v52);
  *(_QWORD *)(v25 + 152) = v51;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 152), v51, v53, v54, v55, v56, v57, v58);
  *(_DWORD *)(v25 + 144) = 1;
  if ( !v22 )
    goto LABEL_30;
LABEL_29:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213BD5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicNomal___c_TypeInfo, v1);
    byte_4213BD5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicNomal___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicNomal___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19

  if ( (byte_4213BD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_4213BD6 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 *(_QWORD *)&x,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
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
    sub_B0D97C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__36_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_B0D97C(this);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__15_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
  __int64 v5; // x1
  BattleServantData_o *actSvtData; // x20
  BuffList_c *v7; // x0
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v9; // x22

  if ( (byte_4213BD7 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, targetSvtData);
    sub_B0D8A4(&BattleBuffData_CheckInvokeBuff_TypeInfo, v5);
    byte_4213BD7 = 1;
  }
  actSvtData = this->fields.actSvtData;
  v7 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v7 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v7->static_fields->CommandCodeFunctionActs;
  v9 = (BattleBuffData_CheckInvokeBuff_o *)sub_B0D974(BattleBuffData_CheckInvokeBuff_TypeInfo, targetSvtData, method);
  BattleBuffData_CheckInvokeBuff___ctor(v9, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v9;
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass20_0_o *v6; // x21
  __int64 v7; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  v6 = this;
  if ( (byte_4213BD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B0D8A4(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_4213BD8 = 1;
  }
  if ( !buffEnt )
    sub_B0D97C(this);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_1709118 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass20_0_o *v6; // x21
  __int64 v7; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  v6 = this;
  if ( (byte_4213BD9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B0D8A4(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_4213BD9 = 1;
  }
  if ( !buffEnt )
    sub_B0D97C(this);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_1709118 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__6(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleLogicNomal___c__DisplayClass20_0_o *v4; // x20
  struct BattleActionData_o *actiondata; // x8
  BattleServantData_o *result; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass20_0_o *)this->fields.command) == 0LL)
    || (BattleCommandData__UpdateCritical(
          (BattleCommandData_o *)this,
          v4->fields.actSvtData,
          targetSvtData,
          _4__this->fields.data,
          0LL),
        !targetSvtData)
    || (actiondata = v4->fields.actiondata) == 0LL )
  {
    sub_B0D97C(this);
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

  if ( (byte_4213BDA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_4213BDA = 1;
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
                                                                          (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass20_0_o *)_4__this->fields.data) == 0LL )
    sub_B0D97C(this);
  return BattleData__getServantData((BattleData_o *)this, id, 0LL);
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
  BattleLogicNomal___c__DisplayClass31_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass31_0_o *)npc) == 0LL) )
    sub_B0D97C(this);
  AiNpcBattleServantData__TurnProgress(
    npc,
    v4->fields.isEndEnemyTurn,
    v4->fields.fieldIndiv,
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
  BattleLogicNomal___c__DisplayClass34_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass34_0_o *)npc) == 0LL) )
    sub_B0D97C(this);
  AiNpcBattleServantData__TurnProgress(
    npc,
    v4->fields.isEndEnemyTurn,
    v4->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}