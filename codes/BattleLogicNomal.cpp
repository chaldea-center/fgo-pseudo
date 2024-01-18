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
  BattleLogicTask_o *v11; // x20
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4189B1E & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask___TypeInfo, method);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v3);
    byte_4189B1E = 1;
  }
  v4 = (struct BattleLogicTask_array *)sub_B2C374(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.zeroTask, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v11, v12);
  this->fields.tmpShiftTask = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tmpShiftTask,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B2C434(this, method);
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
  const MethodInfo *v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  BattleData_o *data; // x21
  System_Int32_array **ServantData; // x0
  BattleServantData_o **v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  BattleActionData_o *v82; // x22
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  BattleActionData_o **v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **command; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  BattleActionData_o *v103; // x20
  const MethodInfo *v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **motionMessage; // x1
  const MethodInfo *v112; // x1
  struct BattleData_o *v113; // x8
  int32_t v114; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v115; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v116; // x20
  System_Collections_Generic_IEnumerable_TSource__o **v117; // x25
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v126; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v128; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v129; // x20
  BattleLogicNomal___c_c *v130; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__20_9; // x22
  Il2CppObject *v133; // x24
  struct BattleLogicNomal___c_StaticFields *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x20
  BattleLogicNomal___c_c *v142; // x0
  struct BattleLogicNomal___c_StaticFields *v143; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__20_0; // x22
  Il2CppObject *v145; // x24
  struct BattleLogicNomal___c_StaticFields *v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v153; // x24
  __int64 v154; // x9
  BuffList_c *v155; // x8
  BattleLogicNomal___c_c *v156; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  struct BattleLogicNomal___c_StaticFields *v158; // x8
  System_Func_BuffList_TYPE__BuffList_TYPE__o *_9__20_2; // x25
  Il2CppObject *v160; // x22
  struct BattleLogicNomal___c_StaticFields *v161; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  struct BattleLogicNomal___c_StaticFields *v168; // x8
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *_9__20_3; // x22
  Il2CppObject *v170; // x26
  struct BattleLogicNomal___c_StaticFields *v171; // x0
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  __int64 v185; // x8
  int64_t v186; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v187; // x22
  int64_t commandAssistId; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v189; // x22
  __int64 v190; // x8
  BattleServantData_o **v191; // x24
  BattleCommandData_o **v192; // x22
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  __int64 v199; // x20
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v206; // x20
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x26
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v214; // x23
  const MethodInfo *v215; // x5
  __int64 v216; // x9
  __int64 v217; // x8
  unsigned __int64 v218; // x27
  int v219; // w20
  int32_t v220; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x25
  __int64 v222; // x3
  __int64 v223; // x8
  __int64 v224; // x20
  unsigned __int64 v225; // x10
  int *v226; // x11
  __int64 v227; // x0
  __int64 v228; // x1
  __int64 v229; // x3
  __int64 v230; // x20
  __int64 v231; // x8
  unsigned __int64 v232; // x10
  int *v233; // x11
  __int64 v234; // x0
  __int64 v235; // x3
  __int64 v236; // x8
  unsigned __int64 v237; // x10
  int *v238; // x11
  __int64 v239; // x0
  System_Type_o *v240; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x1
  __int64 v242; // x8
  unsigned __int64 v243; // x10
  int *v244; // x11
  __int64 v245; // x0
  unsigned __int64 v246; // x10
  __int64 v247; // x0
  int v248; // w20
  int v249; // w8
  BuffList_ACTION_array *v250; // x22
  int v251; // w8
  __int64 v252; // x3
  __int64 v253; // x8
  __int64 v254; // x20
  unsigned __int64 v255; // x10
  int *v256; // x11
  __int64 v257; // x0
  __int64 v258; // x1
  __int64 v259; // x3
  __int64 v260; // x20
  __int64 v261; // x8
  unsigned __int64 v262; // x24
  BattleBuffData_BuffData_o *v263; // x28
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v266; // x1
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_21293456; // x0
  __int64 v268; // x1
  __int64 v269; // x8
  unsigned __int64 v270; // x10
  int *v271; // x11
  __int64 v272; // x0
  __int64 v273; // x3
  __int64 v274; // x8
  unsigned __int64 v275; // x10
  int *v276; // x11
  __int64 v277; // x0
  __int64 v278; // x1
  BattleServantData_o *v279; // x3
  BattleBuffData_BuffData_array *v280; // x22
  __int64 v281; // x8
  unsigned __int64 v282; // x10
  int *v283; // x11
  __int64 v284; // x0
  __int64 v285; // x3
  __int64 v286; // x8
  __int64 v287; // x20
  unsigned __int64 v288; // x10
  int *v289; // x11
  __int64 v290; // x0
  __int64 v291; // x0
  __int64 v292; // x1
  __int64 v293; // x3
  __int64 v294; // x28
  BattleActionData_DamageData_o *v295; // x27
  __int64 v296; // x8
  unsigned __int64 v297; // x10
  int *v298; // x11
  __int64 v299; // x0
  __int64 v300; // x3
  __int64 v301; // x8
  unsigned __int64 v302; // x10
  int *v303; // x11
  __int64 v304; // x0
  __int64 v305; // x1
  BattleServantData_o *v306; // x25
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  __int64 v309; // x1
  BattleActionData_DamageData_o *v310; // x22
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v312; // x20
  BattleActionData_o *v313; // x0
  _BOOL8 v314; // x0
  __int64 v315; // x1
  BattleActionData_DamageData_o *v316; // x1
  __int64 v317; // x8
  unsigned __int64 v318; // x10
  int *v319; // x11
  __int64 v320; // x0
  BattleActionData_o *v321; // x20
  BattleActionData_o *v322; // x20
  BattleActionData_o *v323; // x20
  struct BattleData_o *v324; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v326; // x20
  const MethodInfo *v327; // x5
  __int64 v328; // x9
  BattleCommandData_o **v329; // x22
  __int64 v330; // x8
  unsigned __int64 v331; // x28
  char v332; // w20
  int32_t v333; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v334; // x25
  __int64 v335; // x3
  __int64 v336; // x8
  __int64 v337; // x20
  unsigned __int64 v338; // x10
  int *v339; // x11
  __int64 v340; // x0
  __int64 v341; // x1
  __int64 v342; // x3
  __int64 v343; // x20
  __int64 v344; // x8
  unsigned __int64 v345; // x10
  int *v346; // x11
  __int64 v347; // x0
  __int64 v348; // x3
  __int64 v349; // x8
  unsigned __int64 v350; // x10
  int *v351; // x11
  __int64 v352; // x0
  System_Type_o *v353; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v354; // x1
  __int64 v355; // x8
  unsigned __int64 v356; // x10
  int *v357; // x11
  __int64 v358; // x0
  unsigned __int64 v359; // x25
  __int64 v360; // x0
  int v361; // w20
  int v362; // w8
  BuffList_ACTION_array *v363; // x24
  int v364; // w8
  __int64 v365; // x3
  __int64 v366; // x8
  __int64 v367; // x20
  unsigned __int64 v368; // x10
  int *v369; // x11
  __int64 v370; // x0
  __int64 v371; // x1
  __int64 v372; // x3
  __int64 v373; // x20
  __int64 v374; // x8
  unsigned __int64 v375; // x27
  BattleLogicFunction_o *v376; // x0
  BattleBuffData_BuffData_array *v377; // x0
  __int64 v378; // x1
  __int64 v379; // x8
  unsigned __int64 v380; // x10
  int *v381; // x11
  __int64 v382; // x0
  __int64 v383; // x3
  __int64 v384; // x8
  unsigned __int64 v385; // x10
  int *v386; // x11
  __int64 v387; // x0
  __int64 v388; // x1
  BattleServantData_o *v389; // x3
  BattleBuffData_BuffData_array *v390; // x22
  __int64 v391; // x8
  unsigned __int64 v392; // x10
  int *v393; // x11
  __int64 v394; // x0
  __int64 v395; // x3
  __int64 v396; // x8
  __int64 v397; // x20
  unsigned __int64 v398; // x10
  int *v399; // x11
  __int64 v400; // x0
  __int64 v401; // x1
  __int64 v402; // x3
  __int64 v403; // x20
  __int64 v404; // x8
  unsigned __int64 v405; // x10
  int *v406; // x11
  __int64 v407; // x0
  __int64 v408; // x3
  __int64 v409; // x8
  unsigned __int64 v410; // x10
  int *v411; // x11
  __int64 v412; // x0
  __int64 v413; // x0
  __int64 v414; // x1
  __int64 v415; // x8
  unsigned __int64 v416; // x10
  int *v417; // x11
  __int64 v418; // x0
  _BOOL8 v419; // x0
  __int64 v420; // x1
  Il2CppObject *current; // x8
  _BYTE *monitor; // x9
  BattleData_o *v423; // x0
  __int64 v424; // x0
  __int64 v425; // x0
  const MethodInfo *v426; // [xsp+0h] [xbp-130h]
  int32_t AttackType; // [xsp+14h] [xbp-11Ch]
  __int64 *v428; // [xsp+18h] [xbp-118h]
  BattleLogicTask_o *v429; // [xsp+20h] [xbp-110h]
  __int64 *v430; // [xsp+28h] [xbp-108h]
  int32_t v431; // [xsp+34h] [xbp-FCh]
  unsigned __int64 v432; // [xsp+38h] [xbp-F8h]
  BattleServantData_o *optSvt; // [xsp+40h] [xbp-F0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v434; // [xsp+48h] [xbp-E8h]
  BattleBuffData_o *v435; // [xsp+50h] [xbp-E0h]
  System_Func_T__TResult__o *v436; // [xsp+58h] [xbp-D8h]
  __int64 v437; // [xsp+60h] [xbp-D0h]
  BuffList_ACTION_array *attackActs; // [xsp+68h] [xbp-C8h]
  BattleLogic_DamageProcessArgs_o *attackActsa; // [xsp+68h] [xbp-C8h]
  BattleServantData_o **v440; // [xsp+70h] [xbp-C0h]
  BattleCommandData_o **v441; // [xsp+78h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v442; // [xsp+80h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v443[2]; // [xsp+88h] [xbp-A8h] BYREF
  int v444; // [xsp+BCh] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v445; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_4189B0B & 1) == 0 )
  {
    sub_B2C35C(&BuffList_ACTION___TypeInfo, task);
    sub_B2C35C(&Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__, v7);
    sub_B2C35C(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v8);
    sub_B2C35C(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v9);
    sub_B2C35C(&BattleActionData_TypeInfo, v10);
    sub_B2C35C(&BattleServantData___TypeInfo, v11);
    sub_B2C35C(&bool___TypeInfo, v12);
    sub_B2C35C(&BuffList_TypeInfo, v13);
    sub_B2C35C(&BattleLogic_DamageProcessArgs_TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v17);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v18);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v19);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v20);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v24);
    sub_B2C35C(&Method_System_Func_BattleServantData__BattleServantData__Invoke__, v25);
    sub_B2C35C(&Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__, v26);
    sub_B2C35C(&Method_System_Func_bool__IEnumerable_BattleServantData____ctor__, v27);
    sub_B2C35C(&Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__, v28);
    sub_B2C35C(&Method_System_Func_BattleServantData__BattleServantData___ctor__, v29);
    sub_B2C35C(&Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__, v30);
    sub_B2C35C(&Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__, v31);
    sub_B2C35C(&Method_System_Func_int__BattleServantData___ctor__, v32);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v33);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v34);
    sub_B2C35C(&System_Func_bool__IEnumerable_BattleServantData___TypeInfo, v35);
    sub_B2C35C(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v36);
    sub_B2C35C(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v37);
    sub_B2C35C(&System_Func_BattleServantData__BattleServantData__TypeInfo, v38);
    sub_B2C35C(&System_Func_int__BattleServantData__TypeInfo, v39);
    sub_B2C35C(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v40);
    sub_B2C35C(&System_IDisposable_TypeInfo, v41);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v42);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v43);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v44);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v45);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__Add__, v46);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v47);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v48);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v49);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData__TypeInfo, v50);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51);
    sub_B2C35C(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__, v52);
    sub_B2C35C(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__, v53);
    sub_B2C35C(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__, v54);
    sub_B2C35C(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__, v55);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__, v56);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__, v57);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__, v58);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__, v59);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__, v60);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__, v61);
    sub_B2C35C(&BattleLogicNomal___c__DisplayClass20_0_TypeInfo, v62);
    sub_B2C35C(&BattleLogicNomal___c_TypeInfo, v63);
    byte_4189B0B = 1;
  }
  memset(&v445, 0, sizeof(v445));
  v444 = 0;
  v64 = sub_B2C42C(BattleLogicNomal___c__DisplayClass20_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass20_0___ctor((BattleLogicNomal___c__DisplayClass20_0_o *)v64, 0LL);
  if ( !v64 )
    goto LABEL_397;
  *(_QWORD *)(v64 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 16), (System_Int32_array **)this, v67, v68, v69, v70, v71, v72);
  if ( !task )
    goto LABEL_397;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, v66);
  if ( !data )
    goto LABEL_397;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v64 + 24) = ServantData;
  v75 = (BattleServantData_o **)(v64 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 24), ServantData, v76, v77, v78, v79, v80, v81);
  v82 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v82, 0LL);
  *baseActionData = v82;
  sub_B2C2F8((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
  v89 = (BattleActionData_o **)(v64 + 48);
  *(_QWORD *)(v64 + 48) = v82;
  sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 48), (System_Int32_array **)v82, v90, v91, v92, v93, v94, v95);
  command = (System_Int32_array **)task->fields.command;
  *(_QWORD *)(v64 + 40) = command;
  sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 40), command, v97, v98, v99, v100, v101, v102);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v103 = *v89;
  ActorId = BattleLogicTask__getActorId(task, v104);
  if ( !v103 )
    goto LABEL_397;
  v103->fields.actorId = ActorId;
  ActorId = (__int64)*v89;
  v441 = (BattleCommandData_o **)(v64 + 40);
  if ( !*v89 )
    goto LABEL_397;
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_B2C2F8((BattleServantConfConponent_o *)(ActorId + 128), motionMessage, v105, v106, v107, v108, v109, v110);
  ActorId = BattleLogicTask__getTarget(task, v112);
  v113 = this->fields.data;
  if ( !v113 )
    goto LABEL_397;
  v114 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v113->fields.leaderDown || v113->fields.endbattleFlg )
    return 0LL;
  v115 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getServantData(
                                                                  this->fields.data,
                                                                  ActorId,
                                                                  0LL);
  v116 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v116,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v116 )
    goto LABEL_397;
  optSvt = (BattleServantData_o *)v115;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v116,
    v115,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
  *(_QWORD *)(v64 + 72) = v116;
  v117 = (System_Collections_Generic_IEnumerable_TSource__o **)(v64 + 72);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v64 + 72),
    (System_Int32_array **)v116,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  ActorId = *(_QWORD *)(v64 + 40);
  if ( !ActorId )
    goto LABEL_397;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v441;
  if ( !*v441 )
    goto LABEL_397;
  BattleCommandData__UpdateCritical((BattleCommandData_o *)ActorId, *v75, optSvt, this->fields.data, 0LL);
  ActorId = (__int64)*v441;
  if ( !*v441 )
    goto LABEL_397;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v75;
  if ( !*v75 )
    goto LABEL_397;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v441, 0LL);
  v440 = (BattleServantData_o **)(v64 + 24);
  v431 = v114;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_397;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v114, 0LL);
    if ( !this->fields.data )
      goto LABEL_397;
    v124 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                               ? BattleData__getFieldEnemyServantIDList(
                                                                   this->fields.data,
                                                                   1,
                                                                   0LL)
                                                               : BattleData__getFieldPlayerServantIDList(
                                                                   this->fields.data,
                                                                   0LL,
                                                                   0LL));
    v126 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v64 + 72);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v124,
                         (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_397;
    v127 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v114,
      (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
    v128 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v128,
      (Il2CppObject *)v64,
      Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__,
      (const MethodInfo_270D828 *)Method_System_Func_int__BattleServantData___ctor__);
    v129 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                  v127,
                                                                  (System_Func_TSource__TResult__o *)v128,
                                                                  (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v130 = BattleLogicNomal___c_TypeInfo;
    if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v130 = BattleLogicNomal___c_TypeInfo;
    }
    static_fields = v130->static_fields;
    _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__20_9;
    if ( !_9__20_9 )
    {
      if ( (BYTE3(v130->vtable._0_Equals.methodPtr) & 4) != 0 && !v130->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v130);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      }
      v133 = (Il2CppObject *)static_fields->__9;
      _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__20_9,
        v133,
        Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
      v134 = BattleLogicNomal___c_TypeInfo->static_fields;
      v134->__9__20_9 = (struct System_Func_BattleServantData__bool__o *)_9__20_9;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v134->__9__20_9,
        (System_Int32_array **)_9__20_9,
        v135,
        v136,
        v137,
        v138,
        v139,
        v140);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                         v129,
                         (System_Func_TSource__bool__o *)_9__20_9,
                         (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v126 )
      goto LABEL_397;
    v117 = (System_Collections_Generic_IEnumerable_TSource__o **)(v64 + 72);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      *v126,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v141 = *v117;
  v142 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v142 = BattleLogicNomal___c_TypeInfo;
  }
  v143 = v142->static_fields;
  _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v143->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v142->vtable._0_Equals.methodPtr) & 4) != 0 && !v142->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v142);
      v143 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v145 = (Il2CppObject *)v143->__9;
    _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__20_0,
      v145,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__,
      (const MethodInfo_2713350 *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
    v146 = BattleLogicNomal___c_TypeInfo->static_fields;
    v146->__9__20_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__20_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v146->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152);
  }
  v153 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v153,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__,
    (const MethodInfo_2713350 *)Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                       v141,
                       (System_Func_TSource__TKey__o *)_9__20_0,
                       (System_Func_TSource__TElement__o *)v153,
                       (const MethodInfo_1A9B3C0 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v154 = *(_QWORD *)(v64 + 24);
  if ( !v154 )
    goto LABEL_397;
  v442 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)ActorId;
  v155 = BuffList_TypeInfo;
  v435 = *(BattleBuffData_o **)(v154 + 760);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v155 = BuffList_TypeInfo;
  }
  v156 = BattleLogicNomal___c_TypeInfo;
  v428 = (__int64 *)v117;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v155->static_fields->CommandCodeBuffHash;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v156 = BattleLogicNomal___c_TypeInfo;
  }
  v158 = v156->static_fields;
  _9__20_2 = v158->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( (BYTE3(v156->vtable._0_Equals.methodPtr) & 4) != 0 && !v156->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v156);
      v158 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v160 = (Il2CppObject *)v158->__9;
    _9__20_2 = (System_Func_BuffList_TYPE__BuffList_TYPE__o *)sub_B2C42C(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_BuffList_TYPE__BuffList_TYPE____ctor(
      _9__20_2,
      v160,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__,
      (const MethodInfo_270EA50 *)Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__);
    v161 = BattleLogicNomal___c_TypeInfo->static_fields;
    v161->__9__20_2 = _9__20_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v161->__9__20_2,
      (System_Int32_array **)_9__20_2,
      v162,
      v163,
      v164,
      v165,
      v166,
      v167);
    v156 = BattleLogicNomal___c_TypeInfo;
  }
  if ( (BYTE3(v156->vtable._0_Equals.methodPtr) & 4) != 0 && !v156->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v156);
    v156 = BattleLogicNomal___c_TypeInfo;
  }
  v168 = v156->static_fields;
  v429 = task;
  _9__20_3 = v168->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( (BYTE3(v156->vtable._0_Equals.methodPtr) & 4) != 0 && !v156->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v156);
      v168 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v170 = (Il2CppObject *)v168->__9;
    _9__20_3 = (System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)sub_B2C42C(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_BuffList_TYPE__List_BattleBuffData_BuffData_____ctor(
      _9__20_3,
      v170,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__,
      (const MethodInfo_270ED74 *)Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__);
    v171 = BattleLogicNomal___c_TypeInfo->static_fields;
    v171->__9__20_3 = _9__20_3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v171->__9__20_3,
      (System_Int32_array **)_9__20_3,
      v172,
      v173,
      v174,
      v175,
      v176,
      v177);
  }
  v178 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData__(
                                  CommandCodeBuffHash,
                                  (System_Func_TSource__TKey__o *)_9__20_2,
                                  (System_Func_TSource__TElement__o *)_9__20_3,
                                  (const MethodInfo_1A9B348 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v64 + 32) = v178;
  sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 32), v178, v179, v180, v181, v182, v183, v184);
  v185 = *(_QWORD *)(v64 + 40);
  v434 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v64 + 32);
  if ( !v185 )
    goto LABEL_397;
  v186 = *(_QWORD *)(v185 + 72);
  v187 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B2C42C(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v187,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__,
    (const MethodInfo_24C9D9C *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  ActorId = (__int64)v435;
  if ( !v435 )
    goto LABEL_397;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v435,
    v186,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v187,
    1,
    0LL);
  if ( !*v441 )
    goto LABEL_397;
  commandAssistId = (*v441)->fields.commandAssistId;
  v189 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B2C42C(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v189,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__,
    (const MethodInfo_24C9D9C *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  v190 = *(_QWORD *)(v64 + 40);
  if ( !v190 )
    goto LABEL_397;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v435,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v189,
    1,
    *(_DWORD *)(v190 + 88),
    0LL);
  ActorId = sub_B2C374(bool___TypeInfo, 2LL);
  v191 = (BattleServantData_o **)(v64 + 24);
  if ( !ActorId )
    goto LABEL_397;
  v192 = (BattleCommandData_o **)(v64 + 40);
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_398;
  v437 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_B2C374(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_397;
  v199 = ActorId;
  if ( optSvt )
  {
    ActorId = sub_B2C41C(optSvt, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v425 = sub_B2C454(0LL);
      sub_B2C400(v425, 0LL);
    }
  }
  if ( !*(_DWORD *)(v199 + 24) )
    goto LABEL_398;
  *(_QWORD *)(v199 + 32) = optSvt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v199 + 32),
    (System_Int32_array **)optSvt,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  *(_QWORD *)(v64 + 56) = v199;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v64 + 56),
    (System_Int32_array **)v199,
    v200,
    v201,
    v202,
    v203,
    v204,
    v205);
  v206 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v206,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__,
    (const MethodInfo_2713350 *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
  *(_QWORD *)(v64 + 64) = v206;
  v430 = (__int64 *)(v64 + 64);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v64 + 64),
    (System_Int32_array **)v206,
    v207,
    v208,
    v209,
    v210,
    v211,
    v212);
  v436 = (System_Func_T__TResult__o *)sub_B2C42C(System_Func_bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__object____ctor(
    v436,
    (Il2CppObject *)v64,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__,
    (const MethodInfo_270A518 *)Method_System_Func_bool__IEnumerable_BattleServantData____ctor__);
  ActorId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_397;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)ActorId,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v214 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B2C42C(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v214, 0LL);
  v216 = v437;
  v217 = *(_QWORD *)(v437 + 24);
  if ( (int)v217 >= 1 )
  {
    v218 = 0LL;
    do
    {
      if ( v218 >= (unsigned int)v217 )
        goto LABEL_398;
      v219 = *(unsigned __int8 *)(v216 + v218 + 32);
      if ( *(_BYTE *)(v216 + v218 + 32) )
        v220 = 177;
      else
        v220 = 138;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v434,
                                    v435,
                                    v220,
                                    *v192,
                                    v215);
      ActorId = (__int64)v436;
      if ( !v436 )
        goto LABEL_397;
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v436,
                           v219 != 0,
                           (const MethodInfo_270A52C *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v223 = *(_QWORD *)ActorId;
      v224 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v225 = 0LL;
        v226 = (int *)(*(_QWORD *)(v223 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v226 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v225;
          v226 += 4;
          if ( v225 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_91;
        }
        v227 = v223 + 16LL * *v226 + 312;
      }
      else
      {
LABEL_91:
        v227 = sub_AC5258(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v222);
      }
      v230 = (*(__int64 (__fastcall **)(__int64, _QWORD))v227)(v224, *(_QWORD *)(v227 + 8));
      if ( !v230 )
        sub_B2C434(0LL, v228);
      while ( 1 )
      {
        v231 = *(_QWORD *)v230;
        if ( *(_WORD *)(*(_QWORD *)v230 + 298LL) )
        {
          v232 = 0LL;
          v233 = (int *)(*(_QWORD *)(v231 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v233 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v232;
            v233 += 4;
            if ( v232 >= *(unsigned __int16 *)(*(_QWORD *)v230 + 298LL) )
              goto LABEL_98;
          }
          v234 = v231 + 16LL * *v233 + 312;
        }
        else
        {
LABEL_98:
          v234 = sub_AC5258(v230, System_Collections_IEnumerator_TypeInfo, 0LL, v229);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v234)(v230, *(_QWORD *)(v234 + 8)) & 1) == 0 )
          break;
        v236 = *(_QWORD *)v230;
        if ( *(_WORD *)(*(_QWORD *)v230 + 298LL) )
        {
          v237 = 0LL;
          v238 = (int *)(*(_QWORD *)(v236 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v238 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v237;
            v238 += 4;
            if ( v237 >= *(unsigned __int16 *)(*(_QWORD *)v230 + 298LL) )
              goto LABEL_105;
          }
          v239 = v236 + 16LL * *v238 + 312;
        }
        else
        {
LABEL_105:
          v239 = sub_AC5258(v230, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v235);
        }
        v240 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v239)(v230, *(_QWORD *)(v239 + 8));
        if ( !v442 )
          sub_B2C434(0LL, v240);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v442,
                 v240,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          MasterData_WarQuestSelectionMaster,
          *v192,
          TargetCommandCodeBuffList,
          *v89,
          0,
          v214,
          v426);
      }
      *((_DWORD *)&v443[1].fields.list + v444++) = 845;
      v242 = *(_QWORD *)v230;
      if ( *(_WORD *)(*(_QWORD *)v230 + 298LL) )
      {
        v243 = 0LL;
        v244 = (int *)(*(_QWORD *)(v242 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v244 - 1) != System_IDisposable_TypeInfo )
        {
          ++v243;
          v244 += 4;
          if ( v243 >= *(unsigned __int16 *)(*(_QWORD *)v230 + 298LL) )
            goto LABEL_114;
        }
        v245 = v242 + 16LL * *v244 + 312;
      }
      else
      {
LABEL_114:
        v245 = sub_AC5258(v230, System_IDisposable_TypeInfo, 0LL, v235);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v245)(v230, *(_QWORD *)(v245 + 8));
      if ( v444 && *((_DWORD *)&v443[0].fields.current + v444 + 1) == 845 )
        --v444;
      v216 = v437;
      v192 = v441;
      ++v218;
      LODWORD(v217) = *(_DWORD *)(v437 + 24);
    }
    while ( (__int64)v218 < (int)v217 );
    if ( (int)v217 >= 1 )
    {
      v246 = 0LL;
      while ( v246 < (unsigned int)v217 )
      {
        v432 = v246;
        v248 = *(unsigned __int8 *)(v216 + v246 + 32);
        ActorId = sub_B2C374(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v249 = *(_DWORD *)(ActorId + 24);
        v250 = (BuffList_ACTION_array *)ActorId;
        if ( v248 )
        {
          if ( !v249 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v249 == 1 )
            break;
          v251 = 120;
        }
        else
        {
          if ( !v249 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v249 == 1 )
            break;
          v251 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v251;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v436,
                             v248 != 0,
                             (const MethodInfo_270A52C *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v253 = *(_QWORD *)ActorId;
        v254 = ActorId;
        attackActs = v250;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v255 = 0LL;
          v256 = (int *)(*(_QWORD *)(v253 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v256 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v255;
            v256 += 4;
            if ( v255 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_141;
          }
          v257 = v253 + 16LL * *v256 + 312;
        }
        else
        {
LABEL_141:
          v257 = sub_AC5258(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v252);
        }
        v260 = (*(__int64 (__fastcall **)(__int64, _QWORD))v257)(v254, *(_QWORD *)(v257 + 8));
        if ( !v260 )
          sub_B2C434(0LL, v258);
        while ( 1 )
        {
          v269 = *(_QWORD *)v260;
          if ( *(_WORD *)(*(_QWORD *)v260 + 298LL) )
          {
            v270 = 0LL;
            v271 = (int *)(*(_QWORD *)(v269 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v271 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v270;
              v271 += 4;
              if ( v270 >= *(unsigned __int16 *)(*(_QWORD *)v260 + 298LL) )
                goto LABEL_155;
            }
            v191 = v440;
            v272 = v269 + 16LL * *v271 + 312;
          }
          else
          {
LABEL_155:
            v191 = v440;
            v272 = sub_AC5258(v260, System_Collections_IEnumerator_TypeInfo, 0LL, v259);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v272)(v260, *(_QWORD *)(v272 + 8)) & 1) == 0 )
            break;
          v274 = *(_QWORD *)v260;
          if ( *(_WORD *)(*(_QWORD *)v260 + 298LL) )
          {
            v275 = 0LL;
            v276 = (int *)(*(_QWORD *)(v274 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v276 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v275;
              v276 += 4;
              if ( v275 >= *(unsigned __int16 *)(*(_QWORD *)v260 + 298LL) )
                goto LABEL_162;
            }
            v277 = v274 + 16LL * *v276 + 312;
          }
          else
          {
LABEL_162:
            v277 = sub_AC5258(v260, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v273);
          }
          v279 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v277)(v260, *(_QWORD *)(v277 + 8));
          if ( !*v191 )
            sub_B2C434(0LL, v278);
          AttackSideEffectBuffList_21293456 = BattleServantData__getAttackSideEffectBuffList_21293456(
                                                *v191,
                                                attackActs,
                                                *v441,
                                                v279,
                                                0LL);
          v280 = AttackSideEffectBuffList_21293456;
          if ( !AttackSideEffectBuffList_21293456 )
            sub_B2C434(0LL, v268);
          v261 = *(_QWORD *)&AttackSideEffectBuffList_21293456->max_length;
          if ( (int)v261 >= 1 )
          {
            v262 = 0LL;
            do
            {
              if ( v262 >= (unsigned int)v261 )
              {
                v247 = sub_B2C460(AttackSideEffectBuffList_21293456);
                sub_B2C400(v247, 0LL);
              }
              if ( !*v89 )
                sub_B2C434(0LL, v268);
              v263 = v280->m_Items[v262];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v89, 3, 0LL);
              if ( !logicfunction )
                sub_B2C434(SideEffectActionData, v266);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                MasterData_WarQuestSelectionMaster,
                SideEffectActionData,
                v263,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v214,
                0,
                0LL);
              LODWORD(v261) = v280->max_length;
              ++v262;
            }
            while ( (__int64)v262 < (int)v261 );
          }
        }
        *((_DWORD *)&v443[1].fields.list + v444++) = 1050;
        v281 = *(_QWORD *)v260;
        if ( *(_WORD *)(*(_QWORD *)v260 + 298LL) )
        {
          v282 = 0LL;
          v283 = (int *)(*(_QWORD *)(v281 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v283 - 1) != System_IDisposable_TypeInfo )
          {
            ++v282;
            v283 += 4;
            if ( v282 >= *(unsigned __int16 *)(*(_QWORD *)v260 + 298LL) )
              goto LABEL_172;
          }
          v284 = v281 + 16LL * *v283 + 312;
        }
        else
        {
LABEL_172:
          v284 = sub_AC5258(v260, System_IDisposable_TypeInfo, 0LL, v273);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v284)(v260, *(_QWORD *)(v284 + 8));
        if ( v444 && *((_DWORD *)&v443[0].fields.current + v444 + 1) == 1050 )
          --v444;
        v216 = v437;
        v192 = v441;
        v246 = v432 + 1;
        LODWORD(v217) = *(_DWORD *)(v437 + 24);
        if ( (__int64)(v432 + 1) >= (int)v217 )
          goto LABEL_179;
      }
LABEL_398:
      v424 = sub_B2C460(ActorId);
      sub_B2C400(v424, 0LL);
    }
  }
LABEL_179:
  attackActsa = (BattleLogic_DamageProcessArgs_o *)sub_B2C42C(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(attackActsa, 1, -1, 0LL);
  ActorId = (__int64)v436;
  if ( !v436 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v436,
                       0,
                       (const MethodInfo_270A52C *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v286 = *(_QWORD *)ActorId;
  v287 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v288 = 0LL;
    v289 = (int *)(*(_QWORD *)(v286 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v289 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v288;
      v289 += 4;
      if ( v288 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_185;
    }
    v290 = v286 + 16LL * *v289 + 312;
  }
  else
  {
LABEL_185:
    v290 = sub_AC5258(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v285);
  }
  v291 = (*(__int64 (__fastcall **)(__int64, _QWORD))v290)(v287, *(_QWORD *)(v290 + 8));
  v294 = v291;
  v295 = 0LL;
  while ( 1 )
  {
    if ( !v294 )
      sub_B2C434(v291, v292);
    v296 = *(_QWORD *)v294;
    if ( *(_WORD *)(*(_QWORD *)v294 + 298LL) )
    {
      v297 = 0LL;
      v298 = (int *)(*(_QWORD *)(v296 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v298 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v297;
        v298 += 4;
        if ( v297 >= *(unsigned __int16 *)(*(_QWORD *)v294 + 298LL) )
          goto LABEL_193;
      }
      v299 = v296 + 16LL * *v298 + 312;
    }
    else
    {
LABEL_193:
      v299 = sub_AC5258(v294, System_Collections_IEnumerator_TypeInfo, 0LL, v293);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v299)(v294, *(_QWORD *)(v299 + 8)) & 1) == 0 )
      break;
    v301 = *(_QWORD *)v294;
    if ( *(_WORD *)(*(_QWORD *)v294 + 298LL) )
    {
      v302 = 0LL;
      v303 = (int *)(*(_QWORD *)(v301 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v303 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v302;
        v303 += 4;
        if ( v302 >= *(unsigned __int16 *)(*(_QWORD *)v294 + 298LL) )
          goto LABEL_200;
      }
      v304 = v301 + 16LL * *v303 + 312;
    }
    else
    {
LABEL_200:
      v304 = sub_AC5258(v294, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v300);
    }
    v306 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v304)(v294, *(_QWORD *)(v304 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_B2C434(0LL, v305);
    Damagelist = BattleLogic__getDamagelist(logic, *v191, v306, *v192, attackActsa, 0LL);
    v310 = Damagelist;
    if ( v306 == optSvt )
      v295 = Damagelist;
    if ( !v306 )
      sub_B2C434(Damagelist, v309);
    buffData = v306->fields.buffData;
    if ( !buffData )
      sub_B2C434(Damagelist, v309);
    if ( !buffData->fields.isNoDamage )
    {
      v312 = *v89;
      v313 = BattleBuffData__UseProgressingDoNotAct(v306->fields.buffData, v306, 0, 0LL);
      if ( !v312 )
        sub_B2C434(v313, v313);
      BattleActionData__addSideEffectActionData(v312, v313, 1, 0LL);
    }
    if ( !*v191 )
      sub_B2C434(0LL, v309);
    v314 = BattleServantData__checkPlayer(*v191, 0LL);
    if ( v314 )
    {
      if ( !*v191 )
        sub_B2C434(v314, v315);
      v306->fields.overkillTargetId = (*v191)->fields.uniqueId;
    }
    if ( !*v89 )
      sub_B2C434(0LL, v315);
    v316 = v310;
    v192 = v441;
    BattleActionData__setDamageData(*v89, v316, 0LL, 0, 0, 0LL);
  }
  *((_DWORD *)&v443[1].fields.list + v444++) = 1260;
  v317 = *(_QWORD *)v294;
  if ( *(_WORD *)(*(_QWORD *)v294 + 298LL) )
  {
    v318 = 0LL;
    v319 = (int *)(*(_QWORD *)(v317 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v319 - 1) != System_IDisposable_TypeInfo )
    {
      ++v318;
      v319 += 4;
      if ( v318 >= *(unsigned __int16 *)(*(_QWORD *)v294 + 298LL) )
        goto LABEL_220;
    }
    v320 = v317 + 16LL * *v319 + 312;
  }
  else
  {
LABEL_220:
    v320 = sub_AC5258(v294, System_IDisposable_TypeInfo, 0LL, v300);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v320)(v294, *(_QWORD *)(v320 + 8));
  if ( v444 && *((_DWORD *)&v443[0].fields.current + v444 + 1) == 1260 )
    --v444;
  ActorId = *v430;
  if ( !*v430 )
    goto LABEL_397;
  System_Func_string__string___Invoke(
    (System_Func_string__string__o *)ActorId,
    (System_String_o *)optSvt,
    (const MethodInfo_2713364 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  ActorId = (__int64)*v441;
  if ( !*v441 )
    goto LABEL_397;
  v321 = *v89;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v321 )
    goto LABEL_397;
  v321->fields.type = ActorId;
  ActorId = (__int64)*v89;
  if ( !*v89 )
    goto LABEL_397;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v441, 0LL);
  if ( !*v441 )
    goto LABEL_397;
  if ( !*v89 )
    goto LABEL_397;
  (*v89)->fields.actionIndex = (*v441)->fields.actionIndex;
  ActorId = (__int64)*v191;
  if ( !*v191 )
    goto LABEL_397;
  v322 = *v89;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, *v441, 0LL);
  if ( !v322 )
    goto LABEL_397;
  v322->fields.motionId = ActorId;
  if ( !v295 )
    goto LABEL_397;
  v323 = *v89;
  ActorId = BattleActionData_DamageData__getAttackCount(v295, 0LL);
  if ( !v323 )
    goto LABEL_397;
  v323->fields.attackcount = ActorId;
  v324 = this->fields.data;
  if ( !v324 )
    goto LABEL_397;
  perf = v324->fields.perf;
  if ( !perf )
    goto LABEL_397;
  if ( !*v441 )
    goto LABEL_397;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_397;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v441)->fields.actionIndex,
    0LL);
  if ( !*v191 )
    goto LABEL_397;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  v326 = *v89;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v191)->fields.uniqueId, v431, 0LL);
  if ( !v326 )
    goto LABEL_397;
  v328 = v437;
  v326->fields.prevattackme = ActorId & 1;
  v329 = v441;
  v330 = *(_QWORD *)(v437 + 24);
  if ( (int)v330 >= 1 )
  {
    v331 = 0LL;
    do
    {
      if ( v331 >= (unsigned int)v330 )
        goto LABEL_398;
      v332 = *(_BYTE *)(v328 + v331 + 32);
      if ( v332 )
        v333 = 178;
      else
        v333 = 159;
      v334 = BattleLogicNomal__GetTargetCommandCodeBuffList(
               (BattleLogicNomal_o *)ActorId,
               *v434,
               v435,
               v333,
               *v329,
               v327);
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v436,
                           v332,
                           (const MethodInfo_270A52C *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v336 = *(_QWORD *)ActorId;
      v337 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v338 = 0LL;
        v339 = (int *)(*(_QWORD *)(v336 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v339 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v338;
          v339 += 4;
          if ( v338 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_255;
        }
        v340 = v336 + 16LL * *v339 + 312;
      }
      else
      {
LABEL_255:
        v340 = sub_AC5258(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v335);
      }
      v343 = (*(__int64 (__fastcall **)(__int64, _QWORD))v340)(v337, *(_QWORD *)(v340 + 8));
      if ( !v343 )
        sub_B2C434(0LL, v341);
      while ( 1 )
      {
        v344 = *(_QWORD *)v343;
        if ( *(_WORD *)(*(_QWORD *)v343 + 298LL) )
        {
          v345 = 0LL;
          v346 = (int *)(*(_QWORD *)(v344 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v346 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v345;
            v346 += 4;
            if ( v345 >= *(unsigned __int16 *)(*(_QWORD *)v343 + 298LL) )
              goto LABEL_262;
          }
          v347 = v344 + 16LL * *v346 + 312;
        }
        else
        {
LABEL_262:
          v347 = sub_AC5258(v343, System_Collections_IEnumerator_TypeInfo, 0LL, v342);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v347)(v343, *(_QWORD *)(v347 + 8)) & 1) == 0 )
          break;
        v349 = *(_QWORD *)v343;
        if ( *(_WORD *)(*(_QWORD *)v343 + 298LL) )
        {
          v350 = 0LL;
          v351 = (int *)(*(_QWORD *)(v349 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v351 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v350;
            v351 += 4;
            if ( v350 >= *(unsigned __int16 *)(*(_QWORD *)v343 + 298LL) )
              goto LABEL_269;
          }
          v352 = v349 + 16LL * *v351 + 312;
        }
        else
        {
LABEL_269:
          v352 = sub_AC5258(v343, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v348);
        }
        v353 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v352)(v343, *(_QWORD *)(v352 + 8));
        if ( !v442 )
          sub_B2C434(0LL, v353);
        v354 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v442,
                 v353,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v354,
          MasterData_WarQuestSelectionMaster,
          *v329,
          v334,
          *v89,
          1,
          v214,
          v426);
      }
      *((_DWORD *)&v443[1].fields.list + v444++) = 1591;
      v355 = *(_QWORD *)v343;
      if ( *(_WORD *)(*(_QWORD *)v343 + 298LL) )
      {
        v356 = 0LL;
        v357 = (int *)(*(_QWORD *)(v355 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v357 - 1) != System_IDisposable_TypeInfo )
        {
          ++v356;
          v357 += 4;
          if ( v356 >= *(unsigned __int16 *)(*(_QWORD *)v343 + 298LL) )
            goto LABEL_278;
        }
        v358 = v355 + 16LL * *v357 + 312;
      }
      else
      {
LABEL_278:
        v358 = sub_AC5258(v343, System_IDisposable_TypeInfo, 0LL, v348);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v358)(v343, *(_QWORD *)(v358 + 8));
      if ( v444 && *((_DWORD *)&v443[0].fields.current + v444 + 1) == 1591 )
        --v444;
      v328 = v437;
      v329 = v441;
      ++v331;
      LODWORD(v330) = *(_DWORD *)(v437 + 24);
    }
    while ( (__int64)v331 < (int)v330 );
    if ( (int)v330 >= 1 )
    {
      v359 = 0LL;
      while ( v359 < (unsigned int)v330 )
      {
        v361 = *(unsigned __int8 *)(v328 + v359 + 32);
        ActorId = sub_B2C374(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v362 = *(_DWORD *)(ActorId + 24);
        v363 = (BuffList_ACTION_array *)ActorId;
        if ( v361 )
        {
          if ( !v362 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v362 == 1 )
            goto LABEL_398;
          v364 = 121;
        }
        else
        {
          if ( !v362 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v362 == 1 )
            goto LABEL_398;
          v364 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v364;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v436,
                             v361 != 0,
                             (const MethodInfo_270A52C *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v366 = *(_QWORD *)ActorId;
        v367 = ActorId;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v368 = 0LL;
          v369 = (int *)(*(_QWORD *)(v366 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v369 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v368;
            v369 += 4;
            if ( v368 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_304;
          }
          v370 = v366 + 16LL * *v369 + 312;
        }
        else
        {
LABEL_304:
          v370 = sub_AC5258(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v365);
        }
        v373 = (*(__int64 (__fastcall **)(__int64, _QWORD))v370)(v367, *(_QWORD *)(v370 + 8));
        if ( !v373 )
          sub_B2C434(0LL, v371);
        while ( 1 )
        {
          v379 = *(_QWORD *)v373;
          if ( *(_WORD *)(*(_QWORD *)v373 + 298LL) )
          {
            v380 = 0LL;
            v381 = (int *)(*(_QWORD *)(v379 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v381 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v380;
              v381 += 4;
              if ( v380 >= *(unsigned __int16 *)(*(_QWORD *)v373 + 298LL) )
                goto LABEL_317;
            }
            v382 = v379 + 16LL * *v381 + 312;
          }
          else
          {
LABEL_317:
            v382 = sub_AC5258(v373, System_Collections_IEnumerator_TypeInfo, 0LL, v372);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v382)(v373, *(_QWORD *)(v382 + 8)) & 1) == 0 )
            break;
          v384 = *(_QWORD *)v373;
          if ( *(_WORD *)(*(_QWORD *)v373 + 298LL) )
          {
            v385 = 0LL;
            v386 = (int *)(*(_QWORD *)(v384 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v386 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v385;
              v386 += 4;
              if ( v385 >= *(unsigned __int16 *)(*(_QWORD *)v373 + 298LL) )
                goto LABEL_324;
            }
            v387 = v384 + 16LL * *v386 + 312;
          }
          else
          {
LABEL_324:
            v387 = sub_AC5258(v373, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v383);
          }
          v389 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v387)(v373, *(_QWORD *)(v387 + 8));
          if ( !*v440 )
            sub_B2C434(0LL, v388);
          v377 = BattleServantData__getAttackSideEffectBuffList_21293456(*v440, v363, *v441, v389, 0LL);
          v390 = v377;
          if ( !v377 )
            sub_B2C434(0LL, v378);
          v374 = *(_QWORD *)&v377->max_length;
          if ( (int)v374 >= 1 )
          {
            v375 = 0LL;
            do
            {
              if ( v375 >= (unsigned int)v374 )
              {
                v360 = sub_B2C460(v377);
                sub_B2C400(v360, 0LL);
              }
              v376 = this->fields.logicfunction;
              if ( !v376 )
                sub_B2C434(0LL, v378);
              BattleLogicFunction__SetSideEffectBuff(
                v376,
                MasterData_WarQuestSelectionMaster,
                *v89,
                v390->m_Items[v375],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v214,
                1,
                0LL);
              LODWORD(v374) = v390->max_length;
              ++v375;
            }
            while ( (__int64)v375 < (int)v374 );
          }
        }
        v191 = v440;
        *((_DWORD *)&v443[1].fields.list + v444++) = 1790;
        v391 = *(_QWORD *)v373;
        if ( *(_WORD *)(*(_QWORD *)v373 + 298LL) )
        {
          v392 = 0LL;
          v393 = (int *)(*(_QWORD *)(v391 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v393 - 1) != System_IDisposable_TypeInfo )
          {
            ++v392;
            v393 += 4;
            if ( v392 >= *(unsigned __int16 *)(*(_QWORD *)v373 + 298LL) )
              goto LABEL_334;
          }
          v394 = v391 + 16LL * *v393 + 312;
        }
        else
        {
LABEL_334:
          v394 = sub_AC5258(v373, System_IDisposable_TypeInfo, 0LL, v383);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v394)(v373, *(_QWORD *)(v394 + 8));
        if ( v444 && *((_DWORD *)&v443[0].fields.current + v444 + 1) == 1790 )
          --v444;
        v328 = v437;
        ++v359;
        LODWORD(v330) = *(_DWORD *)(v437 + 24);
        if ( (__int64)v359 >= (int)v330 )
          goto LABEL_341;
      }
      goto LABEL_398;
    }
  }
LABEL_341:
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v436,
                       0,
                       (const MethodInfo_270A52C *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v396 = *(_QWORD *)ActorId;
  v397 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v398 = 0LL;
    v399 = (int *)(*(_QWORD *)(v396 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v399 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v398;
      v399 += 4;
      if ( v398 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_346;
    }
    v400 = v396 + 16LL * *v399 + 312;
  }
  else
  {
LABEL_346:
    v400 = sub_AC5258(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v395);
  }
  v403 = (*(__int64 (__fastcall **)(__int64, _QWORD))v400)(v397, *(_QWORD *)(v400 + 8));
  if ( !v403 )
    sub_B2C434(0LL, v401);
  while ( 1 )
  {
    v404 = *(_QWORD *)v403;
    if ( *(_WORD *)(*(_QWORD *)v403 + 298LL) )
    {
      v405 = 0LL;
      v406 = (int *)(*(_QWORD *)(v404 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v406 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v405;
        v406 += 4;
        if ( v405 >= *(unsigned __int16 *)(*(_QWORD *)v403 + 298LL) )
          goto LABEL_353;
      }
      v407 = v404 + 16LL * *v406 + 312;
    }
    else
    {
LABEL_353:
      v407 = sub_AC5258(v403, System_Collections_IEnumerator_TypeInfo, 0LL, v402);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v407)(v403, *(_QWORD *)(v407 + 8)) & 1) == 0 )
      break;
    v409 = *(_QWORD *)v403;
    if ( *(_WORD *)(*(_QWORD *)v403 + 298LL) )
    {
      v410 = 0LL;
      v411 = (int *)(*(_QWORD *)(v409 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v411 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v410;
        v411 += 4;
        if ( v410 >= *(unsigned __int16 *)(*(_QWORD *)v403 + 298LL) )
          goto LABEL_360;
      }
      v412 = v409 + 16LL * *v411 + 312;
    }
    else
    {
LABEL_360:
      v412 = sub_AC5258(v403, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v408);
    }
    v413 = (*(__int64 (__fastcall **)(__int64, _QWORD))v412)(v403, *(_QWORD *)(v412 + 8));
    if ( !*v191 )
      sub_B2C434(v413, v414);
    if ( !v413 )
      sub_B2C434(0LL, v414);
    if ( !this->fields.logic )
      sub_B2C434(v413, v414);
    BattleLogic__setDamageSideEffect(
      this->fields.logic,
      *v89,
      (*v191)->fields.uniqueId,
      *(_DWORD *)(v413 + 24),
      *v441,
      0LL);
  }
  *((_DWORD *)&v443[1].fields.list + v444++) = 1898;
  v415 = *(_QWORD *)v403;
  if ( *(_WORD *)(*(_QWORD *)v403 + 298LL) )
  {
    v416 = 0LL;
    v417 = (int *)(*(_QWORD *)(v415 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v417 - 1) != System_IDisposable_TypeInfo )
    {
      ++v416;
      v417 += 4;
      if ( v416 >= *(unsigned __int16 *)(*(_QWORD *)v403 + 298LL) )
        goto LABEL_371;
    }
    v418 = v415 + 16LL * *v417 + 312;
  }
  else
  {
LABEL_371:
    v418 = sub_AC5258(v403, System_IDisposable_TypeInfo, 0LL, v408);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v418)(v403, *(_QWORD *)(v418 + 8));
  if ( v444 && *((_DWORD *)&v443[0].fields.current + v444 + 1) == 1898 )
    --v444;
  ActorId = *v428;
  if ( !*v428 )
    goto LABEL_397;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v443,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ActorId,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v445 = v443[0];
  while ( 1 )
  {
    v419 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v445,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v419 )
      break;
    current = v445.fields.current;
    if ( !v445.fields.current )
      sub_B2C434(v419, v420);
    monitor = v445.fields.current[47].monitor;
    if ( !monitor )
      sub_B2C434(v419, v420);
    monitor[152] = 0;
    if ( v429->fields.isCanCounterTask )
    {
      if ( !*v191 )
        sub_B2C434(v419, v420);
      v423 = this->fields.data;
      if ( !v423 )
        sub_B2C434(0LL, v420);
      BattleData__SetWasAttackTargetId(v423, (*v191)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  *((_DWORD *)&v443[1].fields.list + v444++) = 1997;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v445,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( v444 && *((_DWORD *)&v443[0].fields.current + v444 + 1) == 1997 )
    --v444;
  ActorId = *v430;
  if ( !*v430 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_string__string___Invoke(
                       (System_Func_string__string__o *)ActorId,
                       (System_String_o *)optSvt,
                       (const MethodInfo_2713364 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  if ( !*v89
    || ((*v89)->fields.isForcedSpeedOne = v429->fields.isForcedSpeedOne, !*v89)
    || ((*v89)->fields.isAllAttack = AttackType == 2, !*v191)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v191)->fields.uniqueId, v431, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_397:
    sub_B2C434(ActorId, v66);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v89;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  __int64 v5; // x1
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0

  if ( (byte_4189B1C & 1) == 0 )
  {
    sub_B2C35C(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_4189B1C = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_B2C42C(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_B2C434(data, v5);
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
  BattleActorControl_o *PartsActor; // x23
  struct BattleData_o *v14; // x8
  BattleActorControl_o *v15; // x22
  struct BattleData_o *v16; // x8
  int32_t uniqueID; // w9
  __int64 *v18; // x10
  BattleActorControl_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4189B12 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_6368/*"FOCUS_UNDER"*/, v4);
    sub_B2C35C(&StringLiteral_6366/*"FOCUS_CENTER"*/, v5);
    sub_B2C35C(&StringLiteral_6370/*"FOCUS_UP"*/, v6);
    byte_4189B12 = 1;
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
    v12 = (System_Int32_array **)StringLiteral_6366/*"FOCUS_CENTER"*/;
    PartsActor = BattleData__GetPartsActor(this->fields.data, 1, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_45;
      data = (BattleData_o *)PartsActor->fields.battleSvtData;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v14 = this->fields.data;
        if ( !v14 )
          goto LABEL_45;
        v12 = (System_Int32_array **)StringLiteral_6366/*"FOCUS_CENTER"*/;
        v14->fields.globaltargetId = PartsActor->fields.uniqueID;
      }
    }
    if ( v11 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v19 = BattleData__GetPartsActor(data, 2, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v19 )
        goto LABEL_45;
      data = (BattleData_o *)v19->fields.battleSvtData;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v16 = this->fields.data;
      if ( !v16 )
        goto LABEL_45;
      uniqueID = v19->fields.uniqueID;
      v18 = &StringLiteral_6368/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v11 )
        goto LABEL_42;
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v15 = BattleData__GetPartsActor(data, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v15 )
        goto LABEL_45;
      data = (BattleData_o *)v15->fields.battleSvtData;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v16 = this->fields.data;
      if ( !v16 )
        goto LABEL_45;
      uniqueID = v15->fields.uniqueID;
      v18 = &StringLiteral_6370/*"FOCUS_UP"*/;
    }
    v12 = (System_Int32_array **)*v18;
    v16->fields.globaltargetId = uniqueID;
LABEL_42:
    v10 = sub_B2C42C(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 32) = v9->fields.uniqueId;
      *(_DWORD *)(v10 + 36) = v9->fields.uniqueId;
      BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
      *(_QWORD *)(v10 + 64) = v12;
      sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 64), v12, v20, v21, v22, v23, v24, v25);
      return (BattleActionData_o *)v10;
    }
LABEL_45:
    sub_B2C434(data, method);
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
  BattleLogicNomal___c_c *v21; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x20
  Il2CppObject *v24; // x21
  struct BattleLogicNomal___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_BattleBuffData_BuffData__o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4189B0A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, passiveBuffDict);
    sub_B2C35C(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B2C35C(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__, v16);
    sub_B2C35C(&BattleLogicNomal___c_TypeInfo, v17);
    byte_4189B0A = 1;
  }
  value = 0LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_18;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData____TryGetValue(
                                                            passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_2E480A8 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_18;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v18) )
  {
LABEL_18:
    sub_B2C434(CommandCardBuffArray, v20);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v21 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v21 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v24,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v25 = BattleLogicNomal___c_TypeInfo->static_fields;
    v25->__9__18_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__18_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18;
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  BattleActorControl_o *PartsActor; // x20
  struct BattleData_o *v7; // x8

  if ( (byte_4189B14 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189B14 = 1;
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
        PartsActor = BattleData__GetPartsActor(this->fields.data, (int32_t)data, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( PartsActor )
          {
            data = (BattleData_o *)PartsActor->fields.battleSvtData;
            if ( data )
            {
              data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
              if ( ((unsigned __int8)data & 1) == 0 )
                return;
              v7 = this->fields.data;
              if ( v7 )
              {
                v7->fields.globaltargetId = PartsActor->fields.uniqueID;
                return;
              }
            }
          }
LABEL_18:
          sub_B2C434(data, method);
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
  if ( (byte_4189B15 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_4189B15 = 1;
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
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AC505C(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AC505C(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AC505C(*v8[6]);
  QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v13 + 184);
  if ( !v3 )
  {
LABEL_19:
    v14 = (_QWORD **)Method_System_Array_Empty_int___;
    v15 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v16 = *(_WORD *)(v15 + 306);
    if ( (v16 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v16 = *(_WORD *)(v15 + 306);
    }
    if ( (v16 & 0x400) != 0 )
    {
      v17 = *v14[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AC505C(*v14[6]);
      if ( !*(_DWORD *)(v17 + 224) )
      {
        v18 = *v14[6];
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AC505C(*v14[6]);
        j_il2cpp_runtime_class_init_0(v18);
      }
    }
    v19 = *v14[6];
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AC505C(*v14[6]);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v19 + 184);
  }
LABEL_31:
  if ( System_Linq_Enumerable__SequenceEqual_int_(
         QuestIndividualities,
         v3,
         (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    return;
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL), (v20 = this->fields.data) == 0LL)
    || (data = (BattleData_o *)v20->fields.perf) == 0LL )
  {
LABEL_36:
    sub_B2C434(data, prevFieldIndiv);
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
    sub_B2C434(data, method);
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
  __int64 v16; // x1
  __int64 v17; // x21
  int v18; // w8
  unsigned int v19; // w27
  BattleServantData_o *v20; // x22
  int max_length; // w8
  BattleBuffData_BuffData_array *v22; // x23
  unsigned int v23; // w28
  BattleBuffData_BuffData_o *v24; // x24
  BattleSkillInfoData_o *v25; // x25
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v27; // x8
  __int64 v28; // x24
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BattleLogic_o *logic; // x25
  __int64 v37; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v45; // x0
  __int64 v46; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4189B19 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v6);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4189B19 = 1;
  }
  isFirstAdd = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v17 = Instance;
  if ( !Instance )
    goto LABEL_40;
  v18 = *(_DWORD *)(Instance + 24);
  if ( v18 >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= v18 )
        goto LABEL_41;
      v20 = *(BattleServantData_o **)(v17 + 8LL * (int)v19 + 32);
      if ( !v20 )
        goto LABEL_40;
      if ( !v20->fields.status )
      {
        Instance = BattleServantData__isAlive(v20, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v20, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_40;
          max_length = *(_DWORD *)(Instance + 24);
          v22 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v23 = 0;
            while ( v23 < max_length )
            {
              v24 = v22->m_Items[v23];
              v25 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v25, 0LL);
              if ( !v25 )
                goto LABEL_40;
              v25->fields.svtUniqueId = v20->fields.uniqueId;
              if ( !v24 )
                goto LABEL_40;
              vals = v24->fields.vals;
              if ( !vals )
                goto LABEL_40;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._4_set_skillId.method)(
                           v25,
                           (unsigned int)vals->m_Items[1],
                           v25->klass->vtable._5_get_skillId.methodPtr);
              v27 = v24->fields.vals;
              if ( !v27 )
                goto LABEL_40;
              if ( v27->max_length <= 1 )
                break;
              v25->fields.skilllv = v27->m_Items[2];
              v28 = sub_B2C42C(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor((BattleLogicTask_o *)v28, v29);
              if ( !v28 )
                goto LABEL_40;
              *(_QWORD *)(v28 + 72) = v25;
              *(_DWORD *)(v28 + 48) = 25;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)(v28 + 72),
                (System_Int32_array **)v25,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
              *(_BYTE *)(v28 + 80) = 0;
              logic = this->fields.logic;
              Instance = sub_B2C374(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_40;
              v37 = Instance;
              Instance = sub_B2C41C(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v46 = sub_B2C454(0LL);
                sub_B2C400(v46, 0LL);
              }
              if ( !*(_DWORD *)(v37 + 24) )
                break;
              *(_QWORD *)(v37 + 32) = v28;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)(v37 + 32),
                (System_Int32_array **)v28,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              if ( !logic )
                goto LABEL_40;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v20,
                v22,
                (BattleLogicTask_array *)v37,
                0LL);
              if ( !v14 )
                goto LABEL_40;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
              max_length = v22->max_length;
              if ( (int)++v23 >= max_length )
                goto LABEL_34;
            }
LABEL_41:
            v45 = sub_B2C460(Instance);
            sub_B2C400(v45, 0LL);
          }
LABEL_34:
          Instance = (__int64)v20->fields.buffData;
          if ( !Instance )
            goto LABEL_40;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
      }
      v18 = *(_DWORD *)(v17 + 24);
    }
    while ( (int)++v19 < v18 );
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
    sub_B2C434(Instance, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v22; // x1
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v31; // x1
  SkillLvEntity_o *v32; // x26
  BattleLogicFunction_o *logicfunction; // x27
  int v34; // w23
  BattleLogicFunction_FunctionArgument_o *argument; // x19
  BattleLogicNomal_o *v36; // x21
  BattleActionData_o *v37; // x25
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x20
  BattleActionData_o *v40; // x28
  DataVals_array *DataValsList; // x0
  __int64 v42; // x1
  BattleLogicFunction_o *v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  SkillLvMaster_o *v46; // [xsp+38h] [xbp-98h]
  int32_t type; // [xsp+40h] [xbp-90h]
  _BOOL4 v48; // [xsp+44h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+60h] [xbp-70h] BYREF

  v15 = this;
  v48 = isCommandAfter;
  if ( (byte_4189B1D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17);
    this = (BattleLogicNomal_o *)sub_B2C35C(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v18);
    byte_4189B1D = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !commandCodeBuffList )
    sub_B2C434(this, checkInvokeBuff);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)commandCodeBuffList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v19 = arg == 0LL || !v48;
  if ( v48 )
    v20 = 1;
  else
    v20 = 3;
  type = v20;
  v50 = v49;
  v46 = skillLvMst;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v21 )
      break;
    if ( !command )
      sub_B2C434(v21, v22);
    current = (BattleBuffData_BuffData_o *)v50.fields.current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_B2C434(IsEnableCommandCode, v25);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_B2C434(IsEnableCommandCode, v25);
    v26 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v26 & 1) != 0 )
    {
      if ( (v19 & 1) != 0 )
      {
        if ( !current )
          sub_B2C434(v26, v27);
        vals = current->fields.vals;
        if ( !vals )
          sub_B2C434(v26, v27);
        max_length = vals->max_length;
        if ( !max_length )
        {
          v44 = sub_B2C460(v26);
          sub_B2C400(v44, 0LL);
        }
        if ( max_length == 1 )
        {
          v45 = sub_B2C460(v26);
          sub_B2C400(v45, 0LL);
        }
        if ( !skillLvMst )
          sub_B2C434(v26, v27);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v32 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_B2C434(Entity, v31);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_B2C434(Entity, v31);
          logicfunction = v15->fields.logicfunction;
          v34 = v19;
          argument = (BattleLogicFunction_FunctionArgument_o *)arg;
          v36 = v15;
          v37 = actionData;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v32->fields.funcId;
          v40 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v32, 0LL);
          if ( !logicfunction )
            sub_B2C434(DataValsList, v42);
          BattleLogicFunction__procList(
            logicfunction,
            v40,
            funcId,
            DataValsList,
            0,
            0,
            v48,
            0,
            0,
            0,
            0,
            argument,
            0,
            0LL);
          arg = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)argument;
          v19 = v34;
          actionData = v37;
          v15 = v36;
          skillLvMst = v46;
        }
      }
      else
      {
        v43 = v15->fields.logicfunction;
        if ( !v43 )
          sub_B2C434(0LL, v27);
        BattleLogicFunction__SetSideEffectBuff(
          v43,
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
    &v50,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1

  if ( (byte_4189B0C & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B2C35C(&StringLiteral_8789/*"MOTION_BACK"*/, v4);
    byte_4189B0C = 1;
  }
  v5 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_DWORD *)(v5 + 32) = uniqueId;
  v14 = (System_Int32_array **)StringLiteral_8789/*"MOTION_BACK"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_8789/*"MOTION_BACK"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 64), v14, v8, v9, v10, v11, v12, v13);
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
            v12 = sub_B2C460(data);
            sub_B2C400(v12, 0LL);
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
    sub_B2C434(data, task);
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
  struct BattleData_o *v9; // x8
  __int64 v10; // x10
  __int64 v11; // x20
  _BOOL4 v12; // w9
  unsigned __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w21
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x19
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x20
  Il2CppObject *v19; // x21
  struct BattleLogicNomal___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v28; // x0

  if ( (byte_4189B18 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B2C35C(&System_Action_AiNpcBattleServantData__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v5);
    sub_B2C35C(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__, v6);
    sub_B2C35C(&BattleLogicNomal___c_TypeInfo, v7);
    byte_4189B18 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0LL);
  if ( !data )
    goto LABEL_33;
  v9 = this->fields.data;
  v10 = *(_QWORD *)(data + 24);
  v11 = data;
  v12 = v9 == 0LL;
  if ( (int)v10 >= 1 )
  {
    v13 = 0LL;
    v14 = data + 32;
    while ( !v12 )
    {
      if ( v13 >= (unsigned int)v10 )
        goto LABEL_34;
      data = (__int64)v9->fields.battleEvent;
      if ( !data )
        break;
      data = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)data + 872LL))(
               data,
               *(_QWORD *)(v14 + 8 * v13),
               *(_QWORD *)(*(_QWORD *)data + 880LL));
      if ( (data & 1) != 0 )
      {
        if ( v13 >= *(unsigned int *)(v11 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v14 + 8 * v13);
        if ( !data )
          break;
        data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v13 >= *(unsigned int *)(v11 + 24) )
          goto LABEL_34;
        v15 = data;
        data = *(_QWORD *)(v14 + 8 * v13);
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v13 >= *(unsigned int *)(v11 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v14 + 8 * v13);
        if ( !data )
          break;
        data = BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v15, 1, 0LL);
        if ( (data & 1) != 0 )
        {
          if ( v13 >= *(unsigned int *)(v11 + 24) )
          {
LABEL_34:
            v28 = sub_B2C460(data);
            sub_B2C400(v28, 0LL);
          }
          data = *(_QWORD *)(v14 + 8 * v13);
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v9 = this->fields.data;
      LODWORD(v10) = *(_DWORD *)(v11 + 24);
      ++v13;
      v12 = v9 == 0LL;
      if ( (__int64)v13 >= (int)v10 )
        goto LABEL_22;
    }
LABEL_33:
    sub_B2C434(data, task);
  }
LABEL_22:
  if ( v12 )
    goto LABEL_33;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v9->fields.aiNpcDataList;
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
    v19 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__36_0,
      v19,
      Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_AiNpcBattleServantData___ctor__);
    v20 = BattleLogicNomal___c_TypeInfo->static_fields;
    v20->__9__36_0 = (struct System_Action_AiNpcBattleServantData__o *)_9__36_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)_9__36_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  System_Int32_array **v13; // x1
  struct System_Int32_array *targetIdlist; // x23
  __int64 v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int v22; // w8
  BattleServantConfConponent_o *v23; // x0
  System_Array_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 *v31; // x8
  System_Int32_array **v32; // x1
  __int64 v33; // x8
  char v34; // w21
  unsigned __int64 v35; // x22
  System_Array_o *v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  System_RuntimeFieldHandle_o v45; // 0:w1.4
  System_RuntimeFieldHandle_o v46; // 0:w1.4

  if ( (byte_4189B0D & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, task);
    sub_B2C35C(&FunctionEntity_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v7);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v8);
    sub_B2C35C(&StringLiteral_6349/*"FIELD_PLAYER"*/, v9);
    sub_B2C35C(&StringLiteral_6348/*"FIELD_ENEMY"*/, v10);
    byte_4189B0D = 1;
  }
  v11 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v15 = sub_B2C42C(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v15, 0LL);
  if ( BattleCommand__isARTS(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v11, 0LL);
    isBUSTER = sub_B2C374(int___TypeInfo, 2LL);
    if ( isBUSTER )
    {
      v22 = *(_DWORD *)(isBUSTER + 24);
      v13 = (System_Int32_array **)isBUSTER;
      if ( !v22 || (*(_DWORD *)(isBUSTER + 32) = 102, v22 == 1) )
      {
LABEL_30:
        v44 = sub_B2C460(isBUSTER);
        sub_B2C400(v44, 0LL);
      }
      *(_DWORD *)(isBUSTER + 36) = 1;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 32) = isBUSTER;
        v23 = (BattleServantConfConponent_o *)(v15 + 32);
LABEL_14:
        sub_B2C2F8(v23, v13, v16, v17, v18, v19, v20, v21);
        v31 = &StringLiteral_6349/*"FIELD_PLAYER"*/;
LABEL_15:
        v32 = (System_Int32_array **)*v31;
        *(_QWORD *)(v11 + 64) = *v31;
        sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 64), v32, v25, v26, v27, v28, v29, v30);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_B2C434(isBUSTER, v13);
  }
  if ( BattleCommand__isQUICK(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v11, 0LL);
    v24 = (System_Array_o *)sub_B2C374(int___TypeInfo, 3LL);
    v45.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v24, v45, 0LL);
    if ( !v15 )
      goto LABEL_29;
    *(_QWORD *)(v15 + 32) = v24;
    v23 = (BattleServantConfConponent_o *)(v15 + 32);
    v13 = (System_Int32_array **)v24;
    goto LABEL_14;
  }
  isBUSTER = BattleCommand__isBUSTER(task->fields.ordertype, 0LL);
  if ( (isBUSTER & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v11, 0LL);
    v37 = (System_Array_o *)sub_B2C374(int___TypeInfo, 3LL);
    v46.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v37, v46, 0LL);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = v37;
      sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
      v31 = &StringLiteral_6348/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v33 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v33 < 1 )
    return 0LL;
  v34 = 0;
  v35 = 0LL;
  do
  {
    if ( v35 >= (unsigned int)v33 )
      goto LABEL_30;
    isBUSTER = (__int64)this->fields.data;
    if ( !isBUSTER )
      goto LABEL_29;
    isBUSTER = (__int64)BattleData__getServantData((BattleData_o *)isBUSTER, targetIdlist->m_Items[v35 + 1], 0LL);
    LODWORD(v33) = targetIdlist->max_length;
    ++v35;
    v34 |= isBUSTER != 0;
  }
  while ( (__int64)v35 < (int)v33 );
  if ( (v34 & 1) != 0 )
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
  __int64 v6; // x1
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-8h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_B2C434(v5, v6);
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
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v49; // x20
  BattleData_o *data; // x8
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_int__o *v58; // x26
  int v59; // w8
  __int64 v60; // x28
  unsigned int v61; // w19
  __int64 v62; // x22
  __int64 *v63; // x22
  __int64 v64; // t1
  __int64 v65; // x20
  int v66; // w8
  unsigned int v67; // w22
  __int64 v68; // x27
  __int64 v69; // x8
  __int64 v70; // x27
  __int64 v71; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v73; // x8
  int32_t v74; // w9
  BattleLogicNomal_o *v75; // x19
  struct BattleData_o *v76; // x8
  __int64 v77; // x28
  int v78; // w8
  unsigned int v79; // w19
  __int64 v80; // x22
  __int64 *v81; // x22
  __int64 v82; // t1
  bool v83; // w3
  char v84; // w20
  __int64 v85; // x20
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v87; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v89; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v91; // x23
  BattleLogicNomal_o *v92; // x23
  struct BattleData_o *v93; // x8
  const MethodInfo *v94; // x2
  struct BattleData_o *v95; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v99; // w22
  char v100; // w19
  BattleBuffData_BuffData_o *v101; // x20
  WarEntity_o *v102; // x0
  __int64 v103; // x1
  BattleSkillInfoData_o *v104; // x26
  __int64 v105; // x0
  __int64 v106; // x1
  struct System_Int32_array *vals; // x8
  __int64 v108; // x0
  __int64 v109; // x1
  struct System_Int32_array *v110; // x8
  BattleData_o *v111; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v113; // x1
  SkillLvEntity_o *v114; // x0
  __int64 v115; // x1
  SkillLvEntity_o *v116; // x28
  BattleData_o *v117; // x0
  _BOOL8 v118; // x0
  __int64 v119; // x1
  BattleLogic_o *v120; // x0
  int32_t v121; // w23
  __int64 v122; // x0
  __int64 v123; // x1
  System_Int32_array *TargetIds; // x20
  BattleLogicNomal_o *v125; // x23
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v128; // x0
  __int64 v129; // x1
  const MethodInfo *v130; // x7
  System_Collections_ICollection_o *v131; // x0
  __int64 v132; // x1
  BattleLogicTask_array *v133; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v135; // x3
  BattleLogicTask_o *v136; // x0
  BattleLogic_o *v137; // x0
  __int64 v138; // x1
  BattleData_o *v139; // x0
  int32_t v140; // w23
  Il2CppObject *v141; // x28
  BattleServantData_o *isEndAct; // x0
  __int64 v143; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v145; // x20
  int v146; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v148; // x26
  BattleSkillInfoData_o *v149; // x25
  __int64 v150; // x0
  __int64 v151; // x1
  struct System_Int32_array *v152; // x8
  __int64 v153; // x0
  __int64 v154; // x1
  struct System_Int32_array *v155; // x8
  BattleData_o *v156; // x0
  BattleServantData_o *v157; // x20
  __int64 v158; // x1
  SkillLvEntity_o *v159; // x0
  __int64 v160; // x1
  SkillLvEntity_o *v161; // x27
  BattleData_o *v162; // x0
  _BOOL8 v163; // x0
  __int64 v164; // x1
  BattleLogic_o *v165; // x0
  int32_t v166; // w27
  __int64 v167; // x0
  __int64 v168; // x1
  System_Int32_array *v169; // x20
  bool v170; // w26
  BattleLogicSkill_o *v171; // x27
  System_Int32_array *v172; // x0
  __int64 v173; // x1
  const MethodInfo *v174; // x7
  BattleLogicTask_array *v175; // x1
  BattleLogic_o *v176; // x0
  int v177; // w19
  BattleActionData_o *v178; // x1
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
  __int64 v191; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v192; // [xsp+0h] [xbp-100h]
  BattleActionData_o *baseActData; // [xsp+10h] [xbp-F0h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v194; // [xsp+18h] [xbp-E8h]
  char v195; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v196; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v197; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v198; // [xsp+38h] [xbp-C8h] BYREF
  int v199[2]; // [xsp+60h] [xbp-A0h]
  int v200; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v201; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_4189B16 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B2C35C(&System_Action_AiNpcBattleServantData__TypeInfo, v4);
    sub_B2C35C(&BattleActionData_TypeInfo, v5);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v6);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__, v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v18);
    sub_B2C35C(&int___TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__, v28);
    sub_B2C35C(&BattleLogicNomal___c__DisplayClass34_0_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_8798/*"MOTION_ENEMY_TURN_END"*/, v30);
    byte_4189B16 = 1;
  }
  entity = 0LL;
  memset(&v201, 0, sizeof(v201));
  v200 = 0;
  v31 = sub_B2C42C(BattleLogicNomal___c__DisplayClass34_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass34_0___ctor((BattleLogicNomal___c__DisplayClass34_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_215;
  *(_QWORD *)(v31 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  v40 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v40, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v31 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !v40 )
    goto LABEL_215;
  BattleActionData__setStateField((BattleActionData_o *)v40, 0LL);
  baseActData = (BattleActionData_o *)v40;
  v42 = (System_Int32_array **)StringLiteral_8798/*"MOTION_ENEMY_TURN_END"*/;
  *(_QWORD *)(v40 + 64) = StringLiteral_8798/*"MOTION_ENEMY_TURN_END"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 64), v42, v43, v44, v45, v46, v47, v48);
  v194 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v194,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v49 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v49,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v196 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v31 + 24) = QuestIndividualities;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), QuestIndividualities, v52, v53, v54, v55, v56, v57);
  v58 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v58,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v192 = v49;
  v197 = this;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v59 = *(_DWORD *)(Instance + 24);
  v60 = Instance;
  if ( v59 >= 1 )
  {
    v61 = 0;
    while ( 1 )
    {
      if ( v61 >= v59 )
        goto LABEL_220;
      v62 = v60 + 8LL * (int)v61;
      v64 = *(_QWORD *)(v62 + 32);
      v63 = (__int64 *)(v62 + 32);
      Instance = v64;
      if ( !v64 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v31 + 16),
                              *(System_Int32_array **)(v31 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v61 >= *(_DWORD *)(v60 + 24) )
          goto LABEL_220;
        v65 = Instance;
        Instance = *v63;
        if ( !*v63 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v61 >= *(_DWORD *)(v60 + 24) )
            goto LABEL_220;
          Instance = *v63;
          if ( !*v63 )
            goto LABEL_215;
          Instance = BattleServantData__isLogicResultAlive((BattleServantData_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_266;
        }
        if ( v61 >= *(_DWORD *)(v60 + 24) )
          goto LABEL_220;
        Instance = *v63;
        if ( !*v63 )
          goto LABEL_215;
        Instance = BattleServantData__isGuts((BattleServantData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
LABEL_266:
          if ( !v65 )
            goto LABEL_215;
          if ( *(_QWORD *)(v65 + 24) )
          {
            if ( v61 >= *(_DWORD *)(v60 + 24) )
              goto LABEL_220;
            Instance = (__int64)v194;
            if ( !*v63 || !v194 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v194,
              *(_DWORD *)(*v63 + 24),
              (WarBoardEvalValueSquare_EvalValueSquare_o *)v65,
              (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v61 >= *(_DWORD *)(v60 + 24) )
          goto LABEL_220;
        if ( !*v63 )
          goto LABEL_215;
        if ( !v58 )
          goto LABEL_215;
        System_Collections_Generic_List_int___Add(
          v58,
          *(_DWORD *)(*v63 + 24),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v65 )
          goto LABEL_215;
        v66 = *(_DWORD *)(v65 + 24);
        if ( v66 >= 1 )
          break;
      }
LABEL_51:
      v59 = *(_DWORD *)(v60 + 24);
      if ( (int)++v61 >= v59 )
        goto LABEL_52;
    }
    v67 = 0;
    while ( v67 < v66 )
    {
      v68 = v65 + 8LL * (int)v67;
      v71 = *(_QWORD *)(v68 + 32);
      v70 = v68 + 32;
      v69 = v71;
      if ( !v71 || !v41 )
        goto LABEL_215;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v41,
                   &entity,
                   *(_DWORD *)(v69 + 16),
                   (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_215;
        Instance = BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( (Instance & 1) != 0 )
        {
          logic = this->fields.logic;
          if ( !logic )
            goto LABEL_215;
          v73 = logic->fields.data;
          if ( !v73 )
            goto LABEL_215;
          if ( v67 >= *(_DWORD *)(v65 + 24) )
            break;
          if ( !*(_QWORD *)v70 )
            goto LABEL_215;
          v74 = *(_DWORD *)(*(_QWORD *)v70 + 28LL);
          if ( v73->fields.endMasterSkillTurnBuffValue <= v74 )
            v73->fields.endMasterSkillTurnBuffValue = v74;
        }
      }
      v66 = *(_DWORD *)(v65 + 24);
      if ( (int)++v67 >= v66 )
        goto LABEL_51;
    }
LABEL_220:
    v182 = sub_B2C460(Instance);
    sub_B2C400(v182, 0LL);
  }
LABEL_52:
  v75 = this;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v76 = this->fields.data;
  if ( !v76 )
    goto LABEL_215;
  v77 = Instance;
  if ( v76->fields.leaderDown && v76->fields.endbattleFlg )
  {
    v195 = 0;
    if ( !v58 )
      goto LABEL_215;
    goto LABEL_113;
  }
  if ( !Instance )
    goto LABEL_215;
  v78 = *(_DWORD *)(Instance + 24);
  if ( v78 >= 1 )
  {
    v195 = 0;
    v79 = 0;
    while ( v79 < v78 )
    {
      v80 = v77 + 8LL * (int)v79;
      v82 = *(_QWORD *)(v80 + 32);
      v81 = (__int64 *)(v80 + 32);
      Instance = v82;
      if ( !v82 )
        goto LABEL_215;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)this->fields.data;
        if ( !Instance )
          goto LABEL_215;
        Instance = BattleData__checkAlivePlayers((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v83 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
          v83 = Instance & 1;
        }
        if ( v79 >= *(_DWORD *)(v77 + 24) )
          goto LABEL_220;
        Instance = *v81;
        if ( !*v81 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v31 + 24),
                     this->fields.logic,
                     v83,
                     baseActData,
                     0LL);
        if ( v79 >= *(_DWORD *)(v77 + 24) )
          goto LABEL_220;
        v84 = Instance;
        Instance = *v81;
        if ( !*v81 )
          goto LABEL_215;
        Instance = BattleServantData__isLogicDeadAndNoRevive((BattleServantData_o *)Instance, 0LL);
        if ( (Instance & 1) == 0 )
        {
          if ( v79 >= *(_DWORD *)(v77 + 24) )
            goto LABEL_220;
          Instance = *v81;
          if ( !*v81 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v79 >= *(_DWORD *)(v77 + 24) )
              goto LABEL_220;
            if ( !*v81 || !v192 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v192,
              *(_DWORD *)(*v81 + 24),
              (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
              (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v79 >= *(_DWORD *)(v77 + 24) )
          goto LABEL_220;
        if ( !*v81 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v81 + 760);
        if ( !Instance )
          goto LABEL_215;
        v195 |= v84;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v79 >= *(_DWORD *)(v77 + 24) )
        goto LABEL_220;
      Instance = *v81;
      if ( !*v81 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v31 + 16),
                              *(System_Int32_array **)(v31 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v79 >= *(_DWORD *)(v77 + 24) )
          goto LABEL_220;
        v85 = Instance;
        Instance = *v81;
        if ( !*v81 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v79 >= *(_DWORD *)(v77 + 24) )
            goto LABEL_220;
          Instance = *v81;
          if ( !*v81 )
            goto LABEL_215;
          Instance = BattleServantData__isLogicResultAlive((BattleServantData_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_267;
        }
        if ( v79 >= *(_DWORD *)(v77 + 24) )
          goto LABEL_220;
        Instance = *v81;
        if ( !*v81 )
          goto LABEL_215;
        Instance = BattleServantData__isGuts((BattleServantData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
LABEL_267:
          if ( !v85 )
            goto LABEL_215;
          if ( *(_QWORD *)(v85 + 24) )
          {
            if ( v79 >= *(_DWORD *)(v77 + 24) )
              goto LABEL_220;
            Instance = (__int64)v194;
            if ( !*v81 || !v194 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v194,
              *(_DWORD *)(*v81 + 24),
              (WarBoardEvalValueSquare_EvalValueSquare_o *)v85,
              (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v79 >= *(_DWORD *)(v77 + 24) )
          goto LABEL_220;
        if ( !*v81 || !v58 )
          goto LABEL_215;
        System_Collections_Generic_List_int___Add(
          v58,
          *(_DWORD *)(*v81 + 24),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v78 = *(_DWORD *)(v77 + 24);
      if ( (int)++v79 >= v78 )
        goto LABEL_111;
    }
    goto LABEL_220;
  }
  v195 = 0;
LABEL_111:
  v75 = this;
  v76 = this->fields.data;
  if ( !v76 || !v58 )
LABEL_215:
    sub_B2C434(Instance, v33);
LABEL_113:
  battleEvent = v76->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v58,
                        (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v31 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v87 = v75->fields.data;
  if ( !v87 )
    goto LABEL_215;
  perf = v87->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v87->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v89 = v75->fields.data;
  if ( !v89 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v89->fields.aiNpcDataList;
  v91 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v91,
    (Il2CppObject *)v31,
    Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v91,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v92 = v197;
  v93 = v197->fields.data;
  if ( !v93 )
    goto LABEL_215;
  Instance = (__int64)v93->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    v197->fields.logic,
    *(_BYTE *)(v31 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(v197, *(System_Int32_array **)(v31 + 24), v94);
  v95 = v197->fields.data;
  if ( !v95 )
    goto LABEL_215;
  v95->fields.currentTurn = 0;
  if ( !v192 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v198,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v192,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v201 = v198;
  while ( 1 )
  {
    v102 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v201,
                            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v102 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v201.fields.current.fields.value;
    if ( !v201.fields.current.fields.value )
      sub_B2C434(v102, v103);
    monitor = (int)v201.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v201.fields.current.fields.key;
      v99 = 0;
      v100 = 1;
LABEL_127:
      if ( v99 >= monitor )
      {
        v181 = sub_B2C460(v102);
        sub_B2C400(v181, 0LL);
      }
      v101 = value->m_Items[v99];
      if ( !v101 )
        sub_B2C434(v102, v103);
      if ( v101->fields._isRemove )
        goto LABEL_163;
      if ( !v41 )
        sub_B2C434(v102, v103);
      v102 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v41,
               v101->fields.buffId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v102 )
        goto LABEL_163;
      v104 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v104, 0LL);
      if ( !v104 )
        sub_B2C434(v105, v106);
      v104->fields.svtUniqueId = key;
      vals = v101->fields.vals;
      if ( !vals )
        sub_B2C434(v105, v106);
      if ( !vals->max_length )
      {
        v183 = sub_B2C460(v105);
        sub_B2C400(v183, 0LL);
      }
      v108 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v104->klass->vtable._4_set_skillId.method)(
               v104,
               (unsigned int)vals->m_Items[1],
               v104->klass->vtable._5_get_skillId.methodPtr);
      v110 = v101->fields.vals;
      if ( !v110 )
        sub_B2C434(v108, v109);
      if ( v110->max_length <= 1 )
      {
        v184 = sub_B2C460(v108);
        sub_B2C400(v184, 0LL);
      }
      v104->fields.skilllv = v110->m_Items[2];
      v111 = v92->fields.data;
      if ( !v111 )
        sub_B2C434(0LL, v109);
      ServantData = BattleData__getServantData(v111, v104->fields.svtUniqueId, 0LL);
      v113 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v104->klass->vtable._5_get_skillId.method)(
               v104,
               v104->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v196 )
        sub_B2C434(0LL, v113);
      v114 = SkillLvMaster__GetEntity(v196, v113, v104->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B2C434(v114, v115);
      v116 = v114;
      v117 = v92->fields.data;
      if ( !v117 )
        sub_B2C434(0LL, v115);
      v118 = BattleData__checkAliveOther(v117, ServantData->fields.uniqueId, 0LL);
      if ( !v118 )
      {
        if ( !v116 )
          sub_B2C434(v118, v119);
        v120 = v92->fields.logic;
        if ( !v120 )
          sub_B2C434(0LL, v119);
        v102 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v120, v116->fields.funcId, 0LL);
        if ( ((unsigned __int8)v102 & 1) == 0 )
          goto LABEL_163;
      }
      v121 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v101, 0LL);
      if ( (v121 & 0x80000000) != 0 )
      {
        v125 = v197;
        TargetIds = Target__getTargetIds(v197->fields.data, v104->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v104, 0LL);
      }
      else
      {
        v122 = sub_B2C374(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v122;
        if ( !v122 )
          sub_B2C434(0LL, v123);
        if ( !*(_DWORD *)(v122 + 24) )
        {
          v186 = sub_B2C460(v122);
          sub_B2C400(v186, 0LL);
        }
        *(_DWORD *)(v122 + 32) = v121;
        v125 = v197;
        exists = 0;
      }
      logicskill = v125->fields.logicskill;
      v128 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      if ( !v128 )
        sub_B2C434(0LL, v129);
      if ( !v128->max_length )
      {
        v185 = sub_B2C460(v128);
        sub_B2C400(v185, 0LL);
      }
      v128->m_Items[1] = key;
      if ( !logicskill )
        sub_B2C434(v128, v129);
      v131 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v104,
                                                   v128,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v130);
      v92 = v197;
      v133 = (BattleLogicTask_array *)v131;
      if ( (v100 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v131, 0LL);
        if ( IsNullOrEmpty )
        {
          v100 = 1;
          goto LABEL_161;
        }
        if ( !v133 )
          sub_B2C434(IsNullOrEmpty, v132);
        if ( !v133->max_length )
        {
          v191 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v191, 0LL);
        }
        v136 = v133->m_Items[0];
        if ( !v136 )
          sub_B2C434(0LL, v132);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v136, ServantData, value, v135);
      }
      v100 = 0;
LABEL_161:
      v137 = v197->fields.logic;
      if ( !v137 )
        sub_B2C434(0LL, v132);
      BattleLogic__addBattleLogicTask(v137, v133, 0LL);
LABEL_163:
      monitor = value->max_length;
      if ( (int)++v99 >= monitor )
        continue;
      goto LABEL_127;
    }
  }
  v199[0] = 1282;
  v200 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v201,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v200 = 0;
  Instance = (__int64)v194;
  if ( !v194 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v198,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v194,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v201 = v198;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v201,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v139 = v197->fields.data;
    if ( !v139 )
      sub_B2C434(0LL, v138);
    v140 = (int32_t)v201.fields.current.fields.key;
    v141 = v201.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v139, (int32_t)v201.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v145 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v145,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v145 )
        sub_B2C434(isEndAct, v143);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v145->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v141 )
      sub_B2C434(isEndAct, v143);
    v146 = (int)v141[1].monitor;
    if ( v146 >= 1 )
    {
      for ( i = 0; i < v146; ++i )
      {
        if ( i >= (unsigned int)v146 )
        {
          v180 = sub_B2C460(isEndAct);
          sub_B2C400(v180, 0LL);
        }
        v148 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v141[2].klass + i);
        if ( !v148 )
          sub_B2C434(isEndAct, v143);
        if ( !v148->fields._isRemove )
        {
          if ( !v41 )
            sub_B2C434(isEndAct, v143);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v41,
                                              v148->fields.buffId,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v148, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v149 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v149, 0LL);
                if ( !v149 )
                  sub_B2C434(v150, v151);
                v149->fields.svtUniqueId = v140;
                v152 = v148->fields.vals;
                if ( !v152 )
                  sub_B2C434(v150, v151);
                if ( !v152->max_length )
                {
                  v188 = sub_B2C460(v150);
                  sub_B2C400(v188, 0LL);
                }
                v153 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v149->klass->vtable._4_set_skillId.method)(
                         v149,
                         (unsigned int)v152->m_Items[1],
                         v149->klass->vtable._5_get_skillId.methodPtr);
                v155 = v148->fields.vals;
                if ( !v155 )
                  sub_B2C434(v153, v154);
                if ( v155->max_length <= 1 )
                {
                  v187 = sub_B2C460(v153);
                  sub_B2C400(v187, 0LL);
                }
                v149->fields.skilllv = v155->m_Items[2];
                v156 = v197->fields.data;
                if ( !v156 )
                  sub_B2C434(0LL, v154);
                v157 = BattleData__getServantData(v156, v149->fields.svtUniqueId, 0LL);
                v158 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v149->klass->vtable._5_get_skillId.method)(
                         v149,
                         v149->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v196 )
                  sub_B2C434(0LL, v158);
                v159 = SkillLvMaster__GetEntity(v196, v158, v149->fields.skilllv, 0LL);
                if ( !v157 )
                  sub_B2C434(v159, v160);
                v161 = v159;
                v162 = v197->fields.data;
                if ( !v162 )
                  sub_B2C434(0LL, v160);
                v163 = BattleData__checkAliveOther(v162, v157->fields.uniqueId, 0LL);
                if ( v163 )
                  goto LABEL_197;
                if ( !v161 )
                  sub_B2C434(v163, v164);
                v165 = v197->fields.logic;
                if ( !v165 )
                  sub_B2C434(0LL, v164);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v165, v161->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_197:
                  v166 = BattleServantData__GetRevengeIdCheckOpponentOnly(v157, v148, 0LL);
                  if ( (v166 & 0x80000000) != 0 )
                  {
                    v169 = Target__getTargetIds(v197->fields.data, v149->fields.svtUniqueId, -1, v140, 13, 0LL, 0LL);
                    v170 = BattleSkillInfoData__ExistsNoTargetNoActionType(v149, 0LL);
                  }
                  else
                  {
                    v167 = sub_B2C374(int___TypeInfo, 1LL);
                    v169 = (System_Int32_array *)v167;
                    if ( !v167 )
                      sub_B2C434(0LL, v168);
                    if ( !*(_DWORD *)(v167 + 24) )
                    {
                      v189 = sub_B2C460(v167);
                      sub_B2C400(v189, 0LL);
                    }
                    v170 = 0;
                    *(_DWORD *)(v167 + 32) = v166;
                  }
                  v171 = v197->fields.logicskill;
                  v172 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
                  if ( !v172 )
                    sub_B2C434(0LL, v173);
                  if ( !v172->max_length )
                  {
                    v190 = sub_B2C460(v172);
                    sub_B2C400(v190, 0LL);
                  }
                  v172->m_Items[1] = v140;
                  if ( !v171 )
                    sub_B2C434(v172, v173);
                  v175 = BattleLogicSkill__taskSkill(v171, v149, v172, v169, 1, v170, 0, v174);
                  v176 = v197->fields.logic;
                  if ( !v176 )
                    sub_B2C434(0LL, v175);
                  BattleLogic__addBattleLogicTask(v176, v175, 0LL);
                }
              }
            }
          }
        }
        v146 = (int)v141[1].monitor;
      }
    }
  }
  v199[0] = 1743;
  v177 = ++v200;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v201,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v177 && v199[v177 - 1] == 1743 )
    v200 = v177 - 1;
  Instance = (__int64)v197->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  if ( (v195 & 1) != 0 )
    v178 = baseActData;
  else
    v178 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v178, baseActData, 0LL);
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
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  BattleData_o *data; // x8
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_int__o *v57; // x26
  int v58; // w8
  __int64 v59; // x28
  unsigned int v60; // w23
  __int64 v61; // x19
  __int64 *v62; // x19
  __int64 v63; // t1
  bool v64; // w3
  char v65; // w20
  WarBoardEvalValueSquare_EvalValueSquare_o *v66; // x2
  __int64 v67; // x20
  int v68; // w8
  unsigned int v69; // w19
  __int64 v70; // x22
  __int64 v71; // x8
  __int64 v72; // x22
  __int64 v73; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v75; // x8
  int32_t v76; // w9
  BattleLogicNomal_o *v77; // x19
  struct BattleData_o *v78; // x8
  __int64 v79; // x20
  int v80; // w8
  unsigned int v81; // w19
  __int64 v82; // x25
  __int64 *v83; // x25
  __int64 v84; // t1
  __int64 v85; // x27
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v87; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v89; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v91; // x23
  BattleLogicNomal_o *v92; // x23
  struct BattleData_o *v93; // x8
  const MethodInfo *v94; // x2
  struct BattleData_o *v95; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v99; // w22
  char v100; // w19
  BattleBuffData_BuffData_o *v101; // x20
  WarEntity_o *v102; // x0
  __int64 v103; // x1
  BattleSkillInfoData_o *v104; // x26
  __int64 v105; // x0
  __int64 v106; // x1
  struct System_Int32_array *vals; // x8
  __int64 v108; // x0
  __int64 v109; // x1
  struct System_Int32_array *v110; // x8
  BattleData_o *v111; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v113; // x1
  SkillLvEntity_o *v114; // x0
  __int64 v115; // x1
  SkillLvEntity_o *v116; // x28
  BattleData_o *v117; // x0
  _BOOL8 v118; // x0
  __int64 v119; // x1
  BattleLogic_o *v120; // x0
  int32_t v121; // w23
  __int64 v122; // x0
  __int64 v123; // x1
  System_Int32_array *TargetIds; // x20
  BattleLogicNomal_o *v125; // x23
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v128; // x0
  __int64 v129; // x1
  const MethodInfo *v130; // x7
  System_Collections_ICollection_o *v131; // x0
  __int64 v132; // x1
  BattleLogicTask_array *v133; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v135; // x3
  BattleLogicTask_o *v136; // x0
  BattleLogic_o *v137; // x0
  __int64 v138; // x1
  BattleData_o *v139; // x0
  int32_t v140; // w23
  Il2CppObject *v141; // x28
  BattleServantData_o *isEndAct; // x0
  __int64 v143; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v145; // x20
  int v146; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v148; // x26
  BattleSkillInfoData_o *v149; // x25
  __int64 v150; // x0
  __int64 v151; // x1
  struct System_Int32_array *v152; // x8
  __int64 v153; // x0
  __int64 v154; // x1
  struct System_Int32_array *v155; // x8
  BattleData_o *v156; // x0
  BattleServantData_o *v157; // x20
  __int64 v158; // x1
  SkillLvEntity_o *v159; // x0
  __int64 v160; // x1
  SkillLvEntity_o *v161; // x27
  BattleData_o *v162; // x0
  _BOOL8 v163; // x0
  __int64 v164; // x1
  BattleLogic_o *v165; // x0
  int32_t v166; // w27
  __int64 v167; // x0
  __int64 v168; // x1
  System_Int32_array *v169; // x20
  bool v170; // w26
  BattleLogicSkill_o *v171; // x27
  System_Int32_array *v172; // x0
  __int64 v173; // x1
  const MethodInfo *v174; // x7
  BattleLogicTask_array *v175; // x1
  BattleLogic_o *v176; // x0
  int v177; // w19
  BattleActionData_o *v178; // x1
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
  __int64 v191; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v192; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v193; // [xsp+10h] [xbp-F0h]
  BattleActionData_o *actiondata; // [xsp+18h] [xbp-E8h]
  char v195; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v196; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v197; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v198; // [xsp+38h] [xbp-C8h] BYREF
  int v199[2]; // [xsp+60h] [xbp-A0h]
  int v200; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v201; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_4189B13 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AiNpcBattleServantData___ctor__, task);
    sub_B2C35C(&System_Action_AiNpcBattleServantData__TypeInfo, v4);
    sub_B2C35C(&BattleActionData_TypeInfo, v5);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v6);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__, v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v18);
    sub_B2C35C(&int___TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__, v28);
    sub_B2C35C(&BattleLogicNomal___c__DisplayClass31_0_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_8802/*"MOTION_PLAYER_TURN_END"*/, v30);
    byte_4189B13 = 1;
  }
  entity = 0LL;
  memset(&v201, 0, sizeof(v201));
  v200 = 0;
  v31 = sub_B2C42C(BattleLogicNomal___c__DisplayClass31_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass31_0___ctor((BattleLogicNomal___c__DisplayClass31_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_213;
  *(_QWORD *)(v31 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  BattleLogicNomal__SetNextTargetId(this, v40);
  actiondata = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v31 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_213;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_213;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_213;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_213;
  BattleActionData__setStateField(actiondata, 0LL);
  v42 = (System_Int32_array **)StringLiteral_8802/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8802/*"MOTION_PLAYER_TURN_END"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&actiondata->fields.motionname, v42, v43, v44, v45, v46, v47, v48);
  v193 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v193,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v192 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v192,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_213;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v196 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_213;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v31 + 24) = QuestIndividualities;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), QuestIndividualities, v51, v52, v53, v54, v55, v56);
  v57 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v57,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_213;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_213;
  v58 = *(_DWORD *)(Instance + 24);
  v59 = Instance;
  v197 = this;
  if ( v58 >= 1 )
  {
    v195 = 0;
    v60 = 0;
    while ( 1 )
    {
      if ( v60 >= v58 )
        goto LABEL_218;
      v61 = v59 + 8LL * (int)v60;
      v63 = *(_QWORD *)(v61 + 32);
      v62 = (__int64 *)(v61 + 32);
      Instance = v63;
      if ( !v63 )
        goto LABEL_213;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v197->fields.data;
        if ( !Instance )
          goto LABEL_213;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v64 = 1;
        }
        else
        {
          Instance = (__int64)v197->fields.data;
          if ( !Instance )
            goto LABEL_213;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v64 = Instance & 1;
        }
        if ( v60 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_218;
        Instance = *v62;
        if ( !*v62 )
          goto LABEL_213;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v31 + 24),
                     v197->fields.logic,
                     v64,
                     actiondata,
                     0LL);
        if ( v60 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_218;
        v65 = Instance;
        Instance = *v62;
        if ( !*v62 )
          goto LABEL_213;
        Instance = BattleServantData__isLogicDeadAndNoRevive((BattleServantData_o *)Instance, 0LL);
        if ( (Instance & 1) == 0 )
        {
          if ( v60 >= *(_DWORD *)(v59 + 24) )
            goto LABEL_218;
          Instance = *v62;
          if ( !*v62 )
            goto LABEL_213;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_213;
          v66 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v60 >= *(_DWORD *)(v59 + 24) )
              goto LABEL_218;
            Instance = (__int64)v192;
            if ( !*v62 || !v192 )
              goto LABEL_213;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v192,
              *(_DWORD *)(*v62 + 24),
              v66,
              (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v60 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_218;
        if ( !*v62 )
          goto LABEL_213;
        Instance = *(_QWORD *)(*v62 + 760);
        if ( !Instance )
          goto LABEL_213;
        v195 |= v65;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v60 >= *(_DWORD *)(v59 + 24) )
        goto LABEL_218;
      Instance = *v62;
      if ( !*v62 )
        goto LABEL_213;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v31 + 16),
                              *(System_Int32_array **)(v31 + 24),
                              v197->fields.logic,
                              0LL,
                              0LL);
        if ( v60 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_218;
        v67 = Instance;
        Instance = *v62;
        if ( !*v62 )
          goto LABEL_213;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v60 >= *(_DWORD *)(v59 + 24) )
            goto LABEL_218;
          Instance = *v62;
          if ( !*v62 )
            goto LABEL_213;
          Instance = BattleServantData__isLogicResultAlive((BattleServantData_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_264;
        }
        if ( v60 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_218;
        Instance = *v62;
        if ( !*v62 )
          goto LABEL_213;
        Instance = BattleServantData__isGuts((BattleServantData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
LABEL_264:
          if ( !v67 )
            goto LABEL_213;
          if ( *(_QWORD *)(v67 + 24) )
          {
            if ( v60 >= *(_DWORD *)(v59 + 24) )
              goto LABEL_218;
            Instance = (__int64)v193;
            if ( !*v62 || !v193 )
              goto LABEL_213;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v193,
              *(_DWORD *)(*v62 + 24),
              (WarBoardEvalValueSquare_EvalValueSquare_o *)v67,
              (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v60 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_218;
        if ( !*v62 )
          goto LABEL_213;
        if ( !v57 )
          goto LABEL_213;
        System_Collections_Generic_List_int___Add(
          v57,
          *(_DWORD *)(*v62 + 24),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v67 )
          goto LABEL_213;
        v68 = *(_DWORD *)(v67 + 24);
        if ( v68 >= 1 )
          break;
      }
LABEL_76:
      v58 = *(_DWORD *)(v59 + 24);
      if ( (int)++v60 >= v58 )
        goto LABEL_79;
    }
    v69 = 0;
    while ( v69 < v68 )
    {
      v70 = v67 + 8LL * (int)v69;
      v73 = *(_QWORD *)(v70 + 32);
      v72 = v70 + 32;
      v71 = v73;
      if ( !v73 || !v41 )
        goto LABEL_213;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v41,
                   &entity,
                   *(_DWORD *)(v71 + 16),
                   (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_213;
        Instance = BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( (Instance & 1) != 0 )
        {
          logic = v197->fields.logic;
          if ( !logic )
            goto LABEL_213;
          v75 = logic->fields.data;
          if ( !v75 )
            goto LABEL_213;
          if ( v69 >= *(_DWORD *)(v67 + 24) )
            break;
          if ( !*(_QWORD *)v72 )
            goto LABEL_213;
          v76 = *(_DWORD *)(*(_QWORD *)v72 + 28LL);
          if ( v75->fields.endMasterSkillTurnBuffValue <= v76 )
            v75->fields.endMasterSkillTurnBuffValue = v76;
        }
      }
      v68 = *(_DWORD *)(v67 + 24);
      if ( (int)++v69 >= v68 )
        goto LABEL_76;
    }
LABEL_218:
    v182 = sub_B2C460(Instance);
    sub_B2C400(v182, 0LL);
  }
  v195 = 0;
LABEL_79:
  v77 = v197;
  Instance = (__int64)v197->fields.data;
  if ( !Instance )
    goto LABEL_213;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v78 = v197->fields.data;
  if ( !v78 )
    goto LABEL_213;
  v79 = Instance;
  if ( !v78->fields.leaderDown || !v78->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_213;
    v80 = *(_DWORD *)(Instance + 24);
    if ( v80 >= 1 )
    {
      v81 = 0;
      while ( v81 < v80 )
      {
        v82 = v79 + 8LL * (int)v81;
        v84 = *(_QWORD *)(v82 + 32);
        v83 = (__int64 *)(v82 + 32);
        Instance = v84;
        if ( !v84 )
          goto LABEL_213;
        if ( *(_BYTE *)(Instance + 516) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v31 + 16),
                                *(System_Int32_array **)(v31 + 24),
                                v197->fields.logic,
                                0LL,
                                0LL);
          if ( v81 >= *(_DWORD *)(v79 + 24) )
            goto LABEL_218;
          v85 = Instance;
          Instance = *v83;
          if ( !*v83 )
            goto LABEL_213;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v81 >= *(_DWORD *)(v79 + 24) )
              goto LABEL_218;
            Instance = *v83;
            if ( !*v83 )
              goto LABEL_213;
            Instance = BattleServantData__isLogicResultAlive((BattleServantData_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_265;
          }
          if ( v81 >= *(_DWORD *)(v79 + 24) )
            goto LABEL_218;
          Instance = *v83;
          if ( !*v83 )
            goto LABEL_213;
          Instance = BattleServantData__isGuts((BattleServantData_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
LABEL_265:
            if ( !v85 )
              goto LABEL_213;
            if ( *(_QWORD *)(v85 + 24) )
            {
              if ( v81 >= *(_DWORD *)(v79 + 24) )
                goto LABEL_218;
              Instance = (__int64)v193;
              if ( !*v83 || !v193 )
                goto LABEL_213;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v193,
                *(_DWORD *)(*v83 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v85,
                (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v81 >= *(_DWORD *)(v79 + 24) )
            goto LABEL_218;
          if ( !*v83 || !v57 )
            goto LABEL_213;
          System_Collections_Generic_List_int___Add(
            v57,
            *(_DWORD *)(*v83 + 24),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v80 = *(_DWORD *)(v79 + 24);
        if ( (int)++v81 >= v80 )
          goto LABEL_109;
      }
      goto LABEL_218;
    }
LABEL_109:
    v77 = v197;
    v78 = v197->fields.data;
    if ( !v78 )
      goto LABEL_213;
  }
  if ( !v57 )
    goto LABEL_213;
  battleEvent = v78->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v57,
                        (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_213;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v31 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v87 = v77->fields.data;
  if ( !v87 )
    goto LABEL_213;
  perf = v87->fields.perf;
  if ( !perf )
    goto LABEL_213;
  Instance = (__int64)v87->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_213;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v89 = v77->fields.data;
  if ( !v89 )
    goto LABEL_213;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v89->fields.aiNpcDataList;
  v91 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v91,
    (Il2CppObject *)v31,
    Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_213;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v91,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v92 = v197;
  v93 = v197->fields.data;
  if ( !v93
    || (Instance = (__int64)v93->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__TurnProgressing(
          (BattleFieldEnvironmentData_o *)Instance,
          v197->fields.logic,
          *(_BYTE *)(v31 + 16),
          0LL),
        BattleLogicNomal__UpdateEndTurnBuff(v197, *(System_Int32_array **)(v31 + 24), v94),
        (v95 = v197->fields.data) == 0LL)
    || (Instance = (__int64)v192, v95->fields.currentTurn = 1, !v192) )
  {
LABEL_213:
    sub_B2C434(Instance, v33);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v198,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v192,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v201 = v198;
  while ( 1 )
  {
    v102 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v201,
                            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v102 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v201.fields.current.fields.value;
    if ( !v201.fields.current.fields.value )
      sub_B2C434(v102, v103);
    monitor = (int)v201.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v201.fields.current.fields.key;
      v99 = 0;
      v100 = 1;
LABEL_125:
      if ( v99 >= monitor )
      {
        v181 = sub_B2C460(v102);
        sub_B2C400(v181, 0LL);
      }
      v101 = value->m_Items[v99];
      if ( !v101 )
        sub_B2C434(v102, v103);
      if ( v101->fields._isRemove )
        goto LABEL_161;
      if ( !v41 )
        sub_B2C434(v102, v103);
      v102 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v41,
               v101->fields.buffId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v102 )
        goto LABEL_161;
      v104 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v104, 0LL);
      if ( !v104 )
        sub_B2C434(v105, v106);
      v104->fields.svtUniqueId = key;
      vals = v101->fields.vals;
      if ( !vals )
        sub_B2C434(v105, v106);
      if ( !vals->max_length )
      {
        v183 = sub_B2C460(v105);
        sub_B2C400(v183, 0LL);
      }
      v108 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v104->klass->vtable._4_set_skillId.method)(
               v104,
               (unsigned int)vals->m_Items[1],
               v104->klass->vtable._5_get_skillId.methodPtr);
      v110 = v101->fields.vals;
      if ( !v110 )
        sub_B2C434(v108, v109);
      if ( v110->max_length <= 1 )
      {
        v184 = sub_B2C460(v108);
        sub_B2C400(v184, 0LL);
      }
      v104->fields.skilllv = v110->m_Items[2];
      v111 = v92->fields.data;
      if ( !v111 )
        sub_B2C434(0LL, v109);
      ServantData = BattleData__getServantData(v111, v104->fields.svtUniqueId, 0LL);
      v113 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v104->klass->vtable._5_get_skillId.method)(
               v104,
               v104->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v196 )
        sub_B2C434(0LL, v113);
      v114 = SkillLvMaster__GetEntity(v196, v113, v104->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B2C434(v114, v115);
      v116 = v114;
      v117 = v92->fields.data;
      if ( !v117 )
        sub_B2C434(0LL, v115);
      v118 = BattleData__checkAliveOther(v117, ServantData->fields.uniqueId, 0LL);
      if ( !v118 )
      {
        if ( !v116 )
          sub_B2C434(v118, v119);
        v120 = v92->fields.logic;
        if ( !v120 )
          sub_B2C434(0LL, v119);
        v102 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v120, v116->fields.funcId, 0LL);
        if ( ((unsigned __int8)v102 & 1) == 0 )
          goto LABEL_161;
      }
      v121 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v101, 0LL);
      if ( (v121 & 0x80000000) != 0 )
      {
        v125 = v197;
        TargetIds = Target__getTargetIds(v197->fields.data, v104->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v104, 0LL);
      }
      else
      {
        v122 = sub_B2C374(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v122;
        if ( !v122 )
          sub_B2C434(0LL, v123);
        if ( !*(_DWORD *)(v122 + 24) )
        {
          v186 = sub_B2C460(v122);
          sub_B2C400(v186, 0LL);
        }
        *(_DWORD *)(v122 + 32) = v121;
        v125 = v197;
        exists = 0;
      }
      logicskill = v125->fields.logicskill;
      v128 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      if ( !v128 )
        sub_B2C434(0LL, v129);
      if ( !v128->max_length )
      {
        v185 = sub_B2C460(v128);
        sub_B2C400(v185, 0LL);
      }
      v128->m_Items[1] = key;
      if ( !logicskill )
        sub_B2C434(v128, v129);
      v131 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v104,
                                                   v128,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v130);
      v92 = v197;
      v133 = (BattleLogicTask_array *)v131;
      if ( (v100 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v131, 0LL);
        if ( IsNullOrEmpty )
        {
          v100 = 1;
          goto LABEL_159;
        }
        if ( !v133 )
          sub_B2C434(IsNullOrEmpty, v132);
        if ( !v133->max_length )
        {
          v191 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v191, 0LL);
        }
        v136 = v133->m_Items[0];
        if ( !v136 )
          sub_B2C434(0LL, v132);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v136, ServantData, value, v135);
      }
      v100 = 0;
LABEL_159:
      v137 = v197->fields.logic;
      if ( !v137 )
        sub_B2C434(0LL, v132);
      BattleLogic__addBattleLogicTask(v137, v133, 0LL);
LABEL_161:
      monitor = value->max_length;
      if ( (int)++v99 >= monitor )
        continue;
      goto LABEL_125;
    }
  }
  v199[0] = 1288;
  v200 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v201,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v200 = 0;
  Instance = (__int64)v193;
  if ( !v193 )
    goto LABEL_213;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v198,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v193,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v201 = v198;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v201,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v139 = v197->fields.data;
    if ( !v139 )
      sub_B2C434(0LL, v138);
    v140 = (int32_t)v201.fields.current.fields.key;
    v141 = v201.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v139, (int32_t)v201.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v145 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v145,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v145 )
        sub_B2C434(isEndAct, v143);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v145->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v141 )
      sub_B2C434(isEndAct, v143);
    v146 = (int)v141[1].monitor;
    if ( v146 >= 1 )
    {
      for ( i = 0; i < v146; ++i )
      {
        if ( i >= (unsigned int)v146 )
        {
          v180 = sub_B2C460(isEndAct);
          sub_B2C400(v180, 0LL);
        }
        v148 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v141[2].klass + i);
        if ( !v148 )
          sub_B2C434(isEndAct, v143);
        if ( !v148->fields._isRemove )
        {
          if ( !v41 )
            sub_B2C434(isEndAct, v143);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v41,
                                              v148->fields.buffId,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v148, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v149 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v149, 0LL);
                if ( !v149 )
                  sub_B2C434(v150, v151);
                v149->fields.svtUniqueId = v140;
                v152 = v148->fields.vals;
                if ( !v152 )
                  sub_B2C434(v150, v151);
                if ( !v152->max_length )
                {
                  v188 = sub_B2C460(v150);
                  sub_B2C400(v188, 0LL);
                }
                v153 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v149->klass->vtable._4_set_skillId.method)(
                         v149,
                         (unsigned int)v152->m_Items[1],
                         v149->klass->vtable._5_get_skillId.methodPtr);
                v155 = v148->fields.vals;
                if ( !v155 )
                  sub_B2C434(v153, v154);
                if ( v155->max_length <= 1 )
                {
                  v187 = sub_B2C460(v153);
                  sub_B2C400(v187, 0LL);
                }
                v149->fields.skilllv = v155->m_Items[2];
                v156 = v197->fields.data;
                if ( !v156 )
                  sub_B2C434(0LL, v154);
                v157 = BattleData__getServantData(v156, v149->fields.svtUniqueId, 0LL);
                v158 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v149->klass->vtable._5_get_skillId.method)(
                         v149,
                         v149->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v196 )
                  sub_B2C434(0LL, v158);
                v159 = SkillLvMaster__GetEntity(v196, v158, v149->fields.skilllv, 0LL);
                if ( !v157 )
                  sub_B2C434(v159, v160);
                v161 = v159;
                v162 = v197->fields.data;
                if ( !v162 )
                  sub_B2C434(0LL, v160);
                v163 = BattleData__checkAliveOther(v162, v157->fields.uniqueId, 0LL);
                if ( v163 )
                  goto LABEL_195;
                if ( !v161 )
                  sub_B2C434(v163, v164);
                v165 = v197->fields.logic;
                if ( !v165 )
                  sub_B2C434(0LL, v164);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v165, v161->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_195:
                  v166 = BattleServantData__GetRevengeIdCheckOpponentOnly(v157, v148, 0LL);
                  if ( (v166 & 0x80000000) != 0 )
                  {
                    v169 = Target__getTargetIds(v197->fields.data, v149->fields.svtUniqueId, -1, v140, 13, 0LL, 0LL);
                    v170 = BattleSkillInfoData__ExistsNoTargetNoActionType(v149, 0LL);
                  }
                  else
                  {
                    v167 = sub_B2C374(int___TypeInfo, 1LL);
                    v169 = (System_Int32_array *)v167;
                    if ( !v167 )
                      sub_B2C434(0LL, v168);
                    if ( !*(_DWORD *)(v167 + 24) )
                    {
                      v189 = sub_B2C460(v167);
                      sub_B2C400(v189, 0LL);
                    }
                    v170 = 0;
                    *(_DWORD *)(v167 + 32) = v166;
                  }
                  v171 = v197->fields.logicskill;
                  v172 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
                  if ( !v172 )
                    sub_B2C434(0LL, v173);
                  if ( !v172->max_length )
                  {
                    v190 = sub_B2C460(v172);
                    sub_B2C400(v190, 0LL);
                  }
                  v172->m_Items[1] = v140;
                  if ( !v171 )
                    sub_B2C434(v172, v173);
                  v175 = BattleLogicSkill__taskSkill(v171, v149, v172, v169, 1, v170, 0, v174);
                  v176 = v197->fields.logic;
                  if ( !v176 )
                    sub_B2C434(0LL, v175);
                  BattleLogic__addBattleLogicTask(v176, v175, 0LL);
                }
              }
            }
          }
        }
        v146 = (int)v141[1].monitor;
      }
    }
  }
  v199[0] = 1752;
  v177 = ++v200;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v201,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v177 && v199[v177 - 1] == 1752 )
    v200 = v177 - 1;
  Instance = (__int64)v197->fields.logic;
  if ( !Instance )
    goto LABEL_213;
  if ( (v195 & 1) != 0 )
    v178 = actiondata;
  else
    v178 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v178, actiondata, 0LL);
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

  if ( (byte_4189B10 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, task);
    byte_4189B10 = 1;
  }
  v4 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_B2C434(v5, v6);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, v6);
  motionName = (System_Int32_array **)task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 64), motionName, v8, v9, v10, v11, v12, v13);
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 128), motionMessage, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = (System_Int32_array **)task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 72), targetObject, v22, v23, v24, v25, v26, v27);
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
    sub_B2C434(this, task);
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
  __int64 v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1
  BattleActionData_ShiftServant_o *v17; // x22

  v4 = this;
  if ( (byte_4189B1A & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, task);
    sub_B2C35C(&BattleActionData_ShiftServant_TypeInfo, v5);
    this = (BattleLogicNomal_o *)sub_B2C35C(&StringLiteral_8806/*"MOTION_SHIFT"*/, v6);
    byte_4189B1A = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v9 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v9, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  if ( !v9 )
    goto LABEL_10;
  *(_DWORD *)(v9 + 32) = ServantData->fields.uniqueId;
  v16 = (System_Int32_array **)StringLiteral_8806/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_8806/*"MOTION_SHIFT"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 64), v16, v10, v11, v12, v13, v14, v15);
  v17 = (BattleActionData_ShiftServant_o *)sub_B2C42C(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v17, 0LL);
  if ( !v17
    || (BattleActionData_ShiftServant__setBeforeSvtData(v17, ServantData, 0LL),
        BattleServantData__setShiftServant(ServantData, v4->fields.data, 1, 0LL),
        BattleServantData__SetIsBattleShift(ServantData, 1, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v17, ServantData, 0LL),
        BattleActionData__setShiftServant((BattleActionData_o *)v9, v17, 0LL),
        (this = (BattleLogicNomal_o *)v4->fields.logic) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, task);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, ServantData->fields.uniqueId, 1, 0, 0LL);
  return (BattleActionData_o *)v9;
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

  if ( (byte_4189B11 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, task);
    sub_B2C35C(&StringLiteral_11087/*"RESET_CAMERA_BAT"*/, v5);
    byte_4189B11 = 1;
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
              (System_String_o *)StringLiteral_11087/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v9;
          }
        }
      }
LABEL_19:
      sub_B2C434(StartTurn, v7);
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
        v12 = sub_B2C460(data);
        sub_B2C400(v12, 0LL);
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
    sub_B2C434(data, task);
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
    sub_B2C434(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
    v12 = sub_B2C460(data);
    sub_B2C400(v12, 0LL);
  }
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_B2C434(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B2C434(this, method);
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
  __int64 v9; // x1

  if ( (byte_4189B05 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_B2C35C(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4189B05 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_B2C434(v8, v9);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    36,
    (System_String_o *)v7,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  int32_t v13; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  BattleServantData_o *v15; // x22
  bool IsShiftGuts; // w23
  BattleLogicTask_o *v17; // x22
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v24; // x21
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3

  v4 = this;
  if ( (byte_4189B1B & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, task);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicNomal_o *)sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_4189B1B = 1;
  }
  if ( !task )
    goto LABEL_20;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  ShiftableUniqueId = BattleLogicNomal__getShiftableUniqueId(v4, ActorId, v11);
  if ( !ShiftableUniqueId )
    return v4->fields.zeroTask;
  v13 = ShiftableUniqueId;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicNomal_o *)v4->fields.data;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicNomal_o *)BattleData__getServantData((BattleData_o *)this, v13, 0LL);
  if ( !this )
    goto LABEL_20;
  v15 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  if ( !v15->fields.buffData )
    goto LABEL_20;
  IsShiftGuts = BattleBuffData__IsShiftGuts(
                  v15->fields.buffData,
                  v15,
                  (BattleBuffData_CheckIndividualitiesData_array *)this,
                  0LL);
  v17 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v17, v18);
  if ( !v17 )
    goto LABEL_20;
  if ( IsShiftGuts )
  {
    v17->fields.actiontype = 62;
    BattleLogicTask__setActor(v17, 3, v13, v19);
    if ( v14 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      logic = v4->fields.logic;
      if ( logic )
      {
        this = (BattleLogicNomal_o *)logic->fields.logicReaction;
        if ( this )
        {
          TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                      (BattleLogicReaction_o *)this,
                                                                      v13,
                                                                      v20);
          if ( TaskGuts )
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
              TaskGuts,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          goto LABEL_18;
        }
      }
    }
LABEL_20:
    sub_B2C434(this, task);
  }
  v17->fields.actiontype = 37;
  BattleLogicTask__setActor(v17, 3, v13, v19);
  if ( !v14 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_18:
  v24 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v24, v25);
  if ( !v24 )
    goto LABEL_20;
  v24->fields.actiontype = 36;
  BattleLogicTask__setActor(v24, 3, v13, v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v13; // x1
  struct BattleData_o *v14; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v16; // x0
  BattleCommandData_o *v17; // x22
  BattleServantData_o *v18; // x23
  BattleLogicTask_o *v19; // x23
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3

  if ( (byte_4189B07 & 1) == 0 )
  {
    sub_B2C35C(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4189B07 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_24;
  battleEvent = (BattleData_o *)v14->fields.battleEvent;
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
  v16 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v16 = BattleDataDefine_TypeInfo;
  }
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v16->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v17 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_24;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v17->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v18 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v18->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v18, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_22:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_24:
    sub_B2C434(battleEvent, v13);
  }
  v19 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v19, v20);
  if ( !v19 )
    goto LABEL_24;
  BattleLogicTask__setActor(v19, 2, v17->fields.uniqueId, v21);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_24;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v19, v22);
  BattleLogicTask__setAddAttackCommand(v19, data->fields.combodata, v17, v23);
  v19->fields.isCanCounterTask = 1;
  if ( !v11 )
    goto LABEL_24;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogicTask_o *v12; // x20
  const MethodInfo *v13; // x1
  int v14; // w8
  const MethodInfo *v15; // x1

  if ( (byte_4189B17 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4189B17 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v12 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v12, v15);
    if ( !v12 )
      goto LABEL_13;
    v14 = 19;
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v9 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
      sub_B2C434(v10, v11);
    }
    v12 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v12, v13);
    if ( !v12 )
      goto LABEL_13;
    v14 = 18;
  }
  v12->fields.actiontype = v14;
  if ( !v9 )
    goto LABEL_13;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v10; // x1
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v12; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4189B09 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4189B09 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v12 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v12, v13),
        !v12)
    || (v12->fields.actiontype = 7, !v9) )
  {
    sub_B2C434(logic, v10);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B2C434(this, *(_QWORD *)&ltype);
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
  __int64 v13; // x1
  struct BattleData_o *v14; // x8
  int32_t v15; // w22
  BattleCommandData_o *v16; // x23
  BattleServantData_o *v17; // x25
  BattleLogicTask_o *v18; // x24
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x4
  int32_t TreasureDvcId; // w0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2

  if ( (byte_4189B06 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4189B06 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)v14->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
  {
    if ( ltype == 3 )
      v15 = 2;
    else
      v15 = ltype == 2;
    this->fields.commandIndex = v15;
    if ( !data )
      goto LABEL_33;
    battleEvent = BattleData__getSelectCommand(data, v15, 0LL);
    if ( !battleEvent )
      goto LABEL_33;
    v16 = battleEvent;
    battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
    if ( ((unsigned __int8)battleEvent & 1) == 0 )
    {
      battleEvent = (BattleCommandData_o *)this->fields.data;
      if ( !battleEvent )
        goto LABEL_33;
      battleEvent = (BattleCommandData_o *)BattleData__getServantData(
                                             (BattleData_o *)battleEvent,
                                             v16->fields.uniqueId,
                                             0LL);
      if ( !battleEvent )
        goto LABEL_33;
      v17 = (BattleServantData_o *)battleEvent;
      battleEvent = (BattleCommandData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
      if ( ((unsigned __int8)battleEvent & 1) != 0 && v17->fields.isEntry )
      {
        battleEvent = (BattleCommandData_o *)BattleServantData__isAction(v17, 0LL);
        if ( ((unsigned __int8)battleEvent & 1) != 0 )
        {
          battleEvent = (BattleCommandData_o *)BattleServantData__isCardTypeAction(v17, v16, 0LL);
          if ( ((unsigned __int8)battleEvent & 1) != 0 )
          {
            v18 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v18, v19);
            if ( v18 )
            {
              BattleLogicTask__setActionCommand(v18, data->fields.combodata, v16, v15, v20);
              if ( BattleData__isTutorial(data, 0LL) )
              {
                if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
                  BattleCommandData__checkCriticalRate(v16, 0, 0LL);
              }
              else
              {
                BattleCommandData__LotteryPlayerSideCritical(v16, 0LL);
              }
              BattleLogicTask__setActor(v18, 2, v16->fields.uniqueId, v21);
              v18->fields.isCanCounterTask = 1;
              if ( v16->fields.treasureDvc < 1 )
              {
                BattleData__setTDChain(data, 0, 0LL);
                battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                if ( battleEvent )
                {
                  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                         (BattleLogicTarget_o *)battleEvent,
                                                         v18,
                                                         v27);
                  if ( v11 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v11,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                  }
                }
              }
              else
              {
                battleEvent = (BattleCommandData_o *)this->fields.logic;
                if ( battleEvent )
                {
                  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
                  BattleLogicTask__setActor(v18, 2, v17->fields.uniqueId, v23);
                  BattleLogicTask__setActionCommand(v18, data->fields.combodata, v16, v15, v24);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
                  v18->fields.actiontype = 4;
                  v18->fields.treasureDvcId = TreasureDvcId;
                  v18->fields.tresureDvcLv = 1;
                  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                  if ( battleEvent )
                  {
                    battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                           (BattleLogicTarget_o *)battleEvent,
                                                           v18,
                                                           v26);
                    if ( v11 )
                    {
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v11,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                      BattleData__setTDChain(data, 1, 0LL);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                    }
                  }
                }
              }
            }
LABEL_33:
            sub_B2C434(battleEvent, v13);
          }
        }
      }
    }
  }
  if ( !v11 )
    goto LABEL_33;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


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
  __int64 wasAttackTargetId; // x1
  __int64 v31; // x8
  __int64 v32; // x23
  __int64 v33; // x8
  unsigned __int64 v34; // x28
  BattleServantData_o *v35; // x27
  BattleServantData_o *v36; // x20
  System_Collections_Generic_IEnumerable_T__o *v37; // x21
  void *monitor; // x8
  __int64 v39; // x24
  BattleBuffData_BuffData_o *v40; // x20
  __int64 v41; // x25
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  const MethodInfo *v45; // x2
  int32_t counterLv; // w2
  int32_t counterOc; // w8
  __int64 v48; // x22
  BattleSkillInfoData_o *v49; // x26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  System_Int32_array *v52; // x22
  const MethodInfo *v53; // x6
  System_Int32_array **CounterMessage; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x3
  __int64 v62; // x9
  BattleLogicNomal___c_c *v63; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__15_0; // x20
  Il2CppObject *v66; // x21
  struct BattleLogicNomal___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct BattleLogic_o *logic; // x8
  __int64 v76; // x0
  _BOOL4 v77; // [xsp+Ch] [xbp-94h]
  BattleLogicNomal_o *v78; // [xsp+10h] [xbp-90h]
  _BOOL4 v79; // [xsp+1Ch] [xbp-84h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v81; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *v82; // [xsp+30h] [xbp-70h]
  char v83; // [xsp+3Ch] [xbp-64h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // [xsp+40h] [xbp-60h]

  v6 = isInitLogicHp;
  v7 = isSkillCounter;
  if ( (byte_4189B08 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleBuffData_BuffData___ctor__, data);
    sub_B2C35C(&System_Action_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v11);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v12);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67288832, v18);
    sub_B2C35C(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v19);
    sub_B2C35C(&int___TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v24);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__, v27);
    sub_B2C35C(&BattleLogicNomal___c_TypeInfo, v28);
    byte_4189B08 = 1;
  }
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  v82 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( !data )
    goto LABEL_73;
  v31 = 288LL;
  if ( isEnemy )
    v31 = 296LL;
  v32 = *(__int64 *)((char *)&data->klass + v31);
  if ( !v32 )
    goto LABEL_73;
  v33 = *(_QWORD *)(v32 + 24);
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    do
    {
      if ( v34 >= (unsigned int)v33 )
      {
LABEL_72:
        v76 = sub_B2C460(Instance);
        sub_B2C400(v76, 0LL);
      }
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v32 + 4 * v34 + 32), 0LL);
      if ( Instance )
      {
        v35 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v35, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v35->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v36 = (BattleServantData_o *)Instance;
                if ( v35->fields.isEnemy != (*(_BYTE *)(Instance + 455) != 0) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v36, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v35->fields.buffData;
                    if ( !Instance )
                      goto LABEL_73;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v35,
                                          v36,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_73;
                    v37 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v77 = v6;
                      v78 = this;
                      v81 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B2C42C(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
                        v81,
                        v37,
                        (const MethodInfo_2D8BB2C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67288832);
                      monitor = v37[1].monitor;
                      if ( (int)monitor >= 1 )
                      {
                        v39 = 4LL;
                        v83 = 1;
                        v79 = v7;
                        do
                        {
                          if ( v39 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_72;
                          v40 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v37->klass + v39);
                          if ( !v7 )
                            goto LABEL_76;
                          if ( !v40 )
                            goto LABEL_73;
                          if ( v40->fields.isSkillReaction )
                          {
LABEL_76:
                            v41 = sub_B2C42C(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor((BattleLogicTask_o *)v41, v42);
                            if ( !v41 )
                              goto LABEL_73;
                            v44 = isEnemy ? 3 : 2;
                            BattleLogicTask__setActor((BattleLogicTask_o *)v41, v44, v35->fields.uniqueId, v43);
                            BattleLogicTask__setTarget((BattleLogicTask_o *)v41, v35->fields.wasAttackTargetId, v45);
                            Instance = (__int64)v35->fields.buffData;
                            if ( !Instance )
                              goto LABEL_73;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v40, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v35->fields.overkillTargetId = -1;
                              if ( !v40 )
                                goto LABEL_73;
                              wasAttackTargetId = (unsigned int)v40->fields.counterId;
                              counterLv = v40->fields.counterLv;
                              if ( v40->fields.isUseTreasureDevice )
                              {
                                counterOc = v40->fields.counterOc;
                                *(_DWORD *)(v41 + 48) = 5;
                                *(_DWORD *)(v41 + 84) = wasAttackTargetId;
                                *(_DWORD *)(v41 + 88) = counterLv;
                                *(_DWORD *)(v41 + 164) = counterOc;
                              }
                              else
                              {
                                Instance = (__int64)MasterData_WarQuestSelectionMaster;
                                if ( !MasterData_WarQuestSelectionMaster )
                                  goto LABEL_73;
                                Instance = (__int64)SkillLvMaster__GetEntity(
                                                      MasterData_WarQuestSelectionMaster,
                                                      wasAttackTargetId,
                                                      counterLv,
                                                      0LL);
                                if ( !Instance )
                                  goto LABEL_54;
                                v48 = Instance;
                                v49 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v49, 0LL);
                                if ( !v49 )
                                  goto LABEL_73;
                                v49->fields.type = 20;
                                uniqueId = v35->fields.uniqueId;
                                klass = v49->klass;
                                v49->fields.index = 0;
                                v49->fields.svtUniqueId = uniqueId;
                                ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
                                  v49,
                                  *(unsigned int *)(v48 + 16),
                                  klass->vtable._5_get_skillId.methodPtr);
                                v49->fields.skilllv = *(_DWORD *)(v48 + 20);
                                Instance = sub_B2C374(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                v52 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v35->fields.wasAttackTargetId;
                                Instance = sub_B2C374(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v35->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  (BattleLogicTask_o *)v41,
                                  v49,
                                  v52,
                                  (System_Int32_array *)Instance,
                                  0,
                                  0,
                                  v53);
                                v7 = v79;
                              }
                              Instance = (__int64)v82;
                              if ( !v82 )
                                goto LABEL_73;
                              Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v82,
                                                    v40->fields.buffId,
                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_73;
                              CounterMessage = (System_Int32_array **)BuffEntity__GetCounterMessage(
                                                                        (BuffEntity_o *)Instance,
                                                                        0LL);
                              *(_QWORD *)(v41 + 152) = CounterMessage;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)(v41 + 152),
                                CounterMessage,
                                v55,
                                v56,
                                v57,
                                v58,
                                v59,
                                v60);
                              *(_DWORD *)(v41 + 144) = 2;
                              *(_BYTE *)(v41 + 162) = 1;
                              if ( (v83 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  (BattleLogicTask_o *)v41,
                                  v35,
                                  (BattleBuffData_BuffData_array *)v37,
                                  v61);
                              Instance = (__int64)v84;
                              if ( !v84 )
                                goto LABEL_73;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v84,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
                                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              Instance = (__int64)v81;
                              if ( !v81 )
                                goto LABEL_73;
                              Instance = System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                           v81,
                                           v40,
                                           (const MethodInfo_2D8C290 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v83 = 0;
                            }
                          }
LABEL_54:
                          LODWORD(monitor) = v37[1].monitor;
                          v62 = v39 - 3;
                          ++v39;
                        }
                        while ( v62 < (int)monitor );
                      }
                      v63 = BattleLogicNomal___c_TypeInfo;
                      if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v63 = BattleLogicNomal___c_TypeInfo;
                      }
                      static_fields = v63->static_fields;
                      this = v78;
                      v6 = v77;
                      _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__15_0;
                      if ( !_9__15_0 )
                      {
                        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v63);
                          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        }
                        v66 = (Il2CppObject *)static_fields->__9;
                        _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          _9__15_0,
                          v66,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__,
                          (const MethodInfo_24BBAD8 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
                        v67 = BattleLogicNomal___c_TypeInfo->static_fields;
                        v67->__9__15_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__15_0;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&v67->__9__15_0,
                          (System_Int32_array **)_9__15_0,
                          v68,
                          v69,
                          v70,
                          v71,
                          v72,
                          v73);
                      }
                      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        (System_Collections_Generic_IEnumerable_T__o *)v81,
                        (System_Action_T__o *)_9__15_0,
                        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v33) = *(_DWORD *)(v32 + 24);
    }
    while ( (__int64)++v34 < (int)v33 );
  }
  if ( !v84 )
    goto LABEL_73;
  if ( v84->fields._size < 1 )
    goto LABEL_70;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_73:
    sub_B2C434(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_70:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_73;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v84,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v84,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v13; // x23
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x3
  int32_t v31; // w1

  if ( (byte_4189B0E & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, svtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4189B0E = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, v14);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 104) = motionName;
  *(_DWORD *)(v13 + 48) = 10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 104),
    (System_Int32_array **)motionName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !Tr )
    goto LABEL_11;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v13 + 112) = gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 112), gameObject, v24, v25, v26, v27, v28, v29);
  if ( !svtData )
    goto LABEL_11;
  v31 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v13, v31, svtData->fields.uniqueId, v30);
  if ( !v12 )
LABEL_11:
    sub_B2C434(v15, v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v23; // x21
  const MethodInfo *v24; // x1
  BattleEntity_o *battle_ent; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct BattleData_o *data; // x8
  System_String_o *v41; // x0
  const MethodInfo *v42; // x3
  BattleData_o *v43; // x8
  System_String_o *v44; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v46; // x2
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  int32_t uniqueId; // w2
  System_Int32_array **v50; // x19
  const MethodInfo *v51; // x3
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct BattleData_o *v58; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v60; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v62; // x2
  Il2CppObject *v63; // x0
  System_Int32_array **v64; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int v72; // [xsp+8h] [xbp-38h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4189B0F & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, svtData);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_2529/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_B2C35C(&StringLiteral_8799/*"MOTION_ENTRY"*/, v16);
    sub_B2C35C(&StringLiteral_2527/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_B2C35C(&StringLiteral_2528/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_B2C35C(&StringLiteral_8800/*"MOTION_ENTRY_TAC"*/, v19);
    byte_4189B0F = 1;
  }
  v20 = (System_Int32_array ***)&StringLiteral_8800/*"MOTION_ENTRY_TAC"*/;
  if ( !isTactical )
    v20 = (System_Int32_array ***)&StringLiteral_8799/*"MOTION_ENTRY"*/;
  v21 = *v20;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v23, v24);
  if ( !v23 )
    goto LABEL_30;
  *(_QWORD *)(v23 + 104) = v21;
  *(_DWORD *)(v23 + 48) = 10;
  sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 104), v21, v27, v28, v29, v30, v31, v32);
  if ( !Tr )
    goto LABEL_30;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v23 + 112) = gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 112), gameObject, v34, v35, v36, v37, v38, v39);
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
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2528/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2527/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
      v58 = this->fields.data;
      if ( !v58 )
        goto LABEL_30;
      EnemyCountStartValue_k__BackingField = v58->fields._EnemyCountStartValue_k__BackingField;
      v60 = (System_String_o *)battle_ent;
      EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v58, 0LL);
      v72 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v62)
          + EnemyCountStartValue_k__BackingField;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
      v41 = System_String__Format(v60, v63, 0LL);
    }
    v64 = (System_Int32_array **)v41;
    BattleLogicTask__setActor((BattleLogicTask_o *)v23, 3, svtData->fields.uniqueId, v42);
    *(_QWORD *)(v23 + 152) = v64;
    sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 152), v64, v65, v66, v67, v68, v69, v70);
    *(_DWORD *)(v23 + 144) = 1;
    if ( v22 )
      goto LABEL_29;
LABEL_30:
    sub_B2C434(battle_ent, v26);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v43 = this->fields.data;
  if ( !v43 )
    goto LABEL_30;
  v44 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v43, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v46);
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v48 = System_String__Format(v44, v47, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v50 = (System_Int32_array **)v48;
  BattleLogicTask__setActor((BattleLogicTask_o *)v23, 2, uniqueId, v51);
  *(_QWORD *)(v23 + 152) = v50;
  sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 152), v50, v52, v53, v54, v55, v56, v57);
  *(_DWORD *)(v23 + 144) = 1;
  if ( !v22 )
    goto LABEL_30;
LABEL_29:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41871BE & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicNomal___c_TypeInfo, v1);
    byte_41871BE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicNomal___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_41871BF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_41871BF = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
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
    sub_B2C434(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__36_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_B2C434(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__15_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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

  if ( (byte_41871C0 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, targetSvtData);
    sub_B2C35C(&BattleBuffData_CheckInvokeBuff_TypeInfo, v5);
    byte_41871C0 = 1;
  }
  actSvtData = this->fields.actSvtData;
  v7 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v7 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v7->static_fields->CommandCodeFunctionActs;
  v9 = (BattleBuffData_CheckInvokeBuff_o *)sub_B2C42C(BattleBuffData_CheckInvokeBuff_TypeInfo);
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
  if ( (byte_41871C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B2C35C(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_41871C1 = 1;
  }
  if ( !buffEnt )
    sub_B2C434(this, buffEnt);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_172868C *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
  if ( (byte_41871C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B2C35C(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_41871C2 = 1;
  }
  if ( !buffEnt )
    sub_B2C434(this, buffEnt);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_172868C *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
    sub_B2C434(this, targetSvtData);
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

  if ( (byte_41871C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_41871C3 = 1;
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
                                                                          (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass20_0_o *)_4__this->fields.data) == 0LL )
    sub_B2C434(this, id);
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
    sub_B2C434(this, npc);
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
    sub_B2C434(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    v4->fields.isEndEnemyTurn,
    v4->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}