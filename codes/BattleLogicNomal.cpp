void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleLogicTask_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleLogicTask_o *v15; // x20
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EBE86 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v5, v6, v7);
    byte_42EBE86 = 1;
  }
  v8 = (struct BattleLogicTask_array *)sub_B5D5DC(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.zeroTask,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v15, v16);
  this->fields.tmpShiftTask = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tmpShiftTask,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  return data->fields.isMultiTargetBattle && data->fields.justDeadTargetId != -1;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  int v154; // w1
  int v155; // w2
  __int64 v156; // x3
  int v157; // w1
  int v158; // w2
  __int64 v159; // x3
  int v160; // w1
  int v161; // w2
  __int64 v162; // x3
  int v163; // w1
  int v164; // w2
  __int64 v165; // x3
  int v166; // w1
  int v167; // w2
  __int64 v168; // x3
  int v169; // w1
  int v170; // w2
  __int64 v171; // x3
  int v172; // w1
  int v173; // w2
  __int64 v174; // x3
  int v175; // w1
  int v176; // w2
  __int64 v177; // x3
  __int64 v178; // x23
  __int64 ActorId; // x0
  const MethodInfo *v180; // x1
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  BattleData_o *data; // x21
  System_Int32_array **ServantData; // x0
  BattleServantData_o **v189; // x24
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  BattleActionData_o *v196; // x22
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  BattleActionData_o **v203; // x21
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Int32_array **command; // x1
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  BattleActionData_o *v217; // x20
  const MethodInfo *v218; // x1
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  System_Int32_array **motionMessage; // x1
  const MethodInfo *v226; // x1
  struct BattleData_o *v227; // x8
  int32_t v228; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v229; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v230; // x20
  System_Collections_Generic_IEnumerable_TSource__o **v231; // x25
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v238; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v240; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v241; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v242; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v243; // x20
  BattleLogicNomal___c_c *v244; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__20_9; // x22
  Il2CppObject *v247; // x24
  struct BattleLogicNomal___c_StaticFields *v248; // x0
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v255; // x20
  BattleLogicNomal___c_c *v256; // x0
  struct BattleLogicNomal___c_StaticFields *v257; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__20_0; // x22
  Il2CppObject *v259; // x24
  struct BattleLogicNomal___c_StaticFields *v260; // x0
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v267; // x24
  __int64 v268; // x9
  BuffList_c *v269; // x8
  BattleLogicNomal___c_c *v270; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  struct BattleLogicNomal___c_StaticFields *v272; // x8
  System_Func_BuffList_TYPE__BuffList_TYPE__o *_9__20_2; // x25
  Il2CppObject *v274; // x22
  struct BattleLogicNomal___c_StaticFields *v275; // x0
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  struct BattleLogicNomal___c_StaticFields *v282; // x8
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *_9__20_3; // x22
  Il2CppObject *v284; // x26
  struct BattleLogicNomal___c_StaticFields *v285; // x0
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  System_Int32_array **v292; // x0
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  __int64 v299; // x8
  int64_t v300; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v301; // x22
  int64_t commandAssistId; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v303; // x22
  __int64 v304; // x8
  BattleServantData_o **v305; // x24
  BattleCommandData_o **v306; // x22
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  __int64 v313; // x20
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v320; // x20
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x26
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v328; // x23
  const MethodInfo *v329; // x5
  __int64 v330; // x9
  __int64 v331; // x8
  unsigned __int64 v332; // x27
  int v333; // w20
  int32_t v334; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x25
  __int64 v336; // x3
  __int64 v337; // x8
  __int64 v338; // x20
  unsigned __int64 v339; // x10
  int *v340; // x11
  __int64 v341; // x0
  __int64 v342; // x1
  __int64 v343; // x3
  __int64 v344; // x20
  __int64 v345; // x8
  unsigned __int64 v346; // x10
  int *v347; // x11
  __int64 v348; // x0
  __int64 v349; // x3
  __int64 v350; // x8
  unsigned __int64 v351; // x10
  int *v352; // x11
  __int64 v353; // x0
  System_Type_o *v354; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x1
  __int64 v356; // x8
  unsigned __int64 v357; // x10
  int *v358; // x11
  __int64 v359; // x0
  unsigned __int64 v360; // x10
  __int64 v361; // x0
  int v362; // w20
  int v363; // w8
  BuffList_ACTION_array *v364; // x22
  int v365; // w8
  __int64 v366; // x3
  __int64 v367; // x8
  __int64 v368; // x20
  unsigned __int64 v369; // x10
  int *v370; // x11
  __int64 v371; // x0
  __int64 v372; // x1
  __int64 v373; // x3
  __int64 v374; // x20
  __int64 v375; // x8
  unsigned __int64 v376; // x24
  BattleBuffData_BuffData_o *v377; // x28
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v380; // x1
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_21185296; // x0
  __int64 v382; // x1
  __int64 v383; // x8
  unsigned __int64 v384; // x10
  int *v385; // x11
  __int64 v386; // x0
  __int64 v387; // x3
  __int64 v388; // x8
  unsigned __int64 v389; // x10
  int *v390; // x11
  __int64 v391; // x0
  __int64 v392; // x1
  BattleServantData_o *v393; // x3
  BattleBuffData_BuffData_array *v394; // x22
  __int64 v395; // x8
  unsigned __int64 v396; // x10
  int *v397; // x11
  __int64 v398; // x0
  __int64 v399; // x3
  __int64 v400; // x8
  __int64 v401; // x20
  unsigned __int64 v402; // x10
  int *v403; // x11
  __int64 v404; // x0
  __int64 v405; // x0
  __int64 v406; // x1
  __int64 v407; // x3
  __int64 v408; // x28
  BattleActionData_DamageData_o *v409; // x27
  __int64 v410; // x8
  unsigned __int64 v411; // x10
  int *v412; // x11
  __int64 v413; // x0
  __int64 v414; // x3
  __int64 v415; // x8
  unsigned __int64 v416; // x10
  int *v417; // x11
  __int64 v418; // x0
  __int64 v419; // x1
  BattleServantData_o *v420; // x25
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  __int64 v423; // x1
  BattleActionData_DamageData_o *v424; // x22
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v426; // x20
  BattleActionData_o *v427; // x0
  _BOOL8 v428; // x0
  __int64 v429; // x1
  BattleActionData_DamageData_o *v430; // x1
  __int64 v431; // x8
  unsigned __int64 v432; // x10
  int *v433; // x11
  __int64 v434; // x0
  BattleActionData_o *v435; // x20
  BattleActionData_o *v436; // x20
  BattleActionData_o *v437; // x20
  struct BattleData_o *v438; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v440; // x20
  const MethodInfo *v441; // x5
  __int64 v442; // x9
  BattleCommandData_o **v443; // x22
  __int64 v444; // x8
  unsigned __int64 v445; // x28
  char v446; // w20
  int32_t v447; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v448; // x25
  __int64 v449; // x3
  __int64 v450; // x8
  __int64 v451; // x20
  unsigned __int64 v452; // x10
  int *v453; // x11
  __int64 v454; // x0
  __int64 v455; // x1
  __int64 v456; // x3
  __int64 v457; // x20
  __int64 v458; // x8
  unsigned __int64 v459; // x10
  int *v460; // x11
  __int64 v461; // x0
  __int64 v462; // x3
  __int64 v463; // x8
  unsigned __int64 v464; // x10
  int *v465; // x11
  __int64 v466; // x0
  System_Type_o *v467; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v468; // x1
  __int64 v469; // x8
  unsigned __int64 v470; // x10
  int *v471; // x11
  __int64 v472; // x0
  unsigned __int64 v473; // x25
  __int64 v474; // x0
  int v475; // w20
  int v476; // w8
  BuffList_ACTION_array *v477; // x24
  int v478; // w8
  __int64 v479; // x3
  __int64 v480; // x8
  __int64 v481; // x20
  unsigned __int64 v482; // x10
  int *v483; // x11
  __int64 v484; // x0
  __int64 v485; // x1
  __int64 v486; // x3
  __int64 v487; // x20
  __int64 v488; // x8
  unsigned __int64 v489; // x27
  BattleLogicFunction_o *v490; // x0
  BattleBuffData_BuffData_array *v491; // x0
  __int64 v492; // x1
  __int64 v493; // x8
  unsigned __int64 v494; // x10
  int *v495; // x11
  __int64 v496; // x0
  __int64 v497; // x3
  __int64 v498; // x8
  unsigned __int64 v499; // x10
  int *v500; // x11
  __int64 v501; // x0
  __int64 v502; // x1
  BattleServantData_o *v503; // x3
  BattleBuffData_BuffData_array *v504; // x22
  __int64 v505; // x8
  unsigned __int64 v506; // x10
  int *v507; // x11
  __int64 v508; // x0
  __int64 v509; // x3
  __int64 v510; // x8
  __int64 v511; // x20
  unsigned __int64 v512; // x10
  int *v513; // x11
  __int64 v514; // x0
  __int64 v515; // x1
  __int64 v516; // x3
  __int64 v517; // x20
  __int64 v518; // x8
  unsigned __int64 v519; // x10
  int *v520; // x11
  __int64 v521; // x0
  __int64 v522; // x3
  __int64 v523; // x8
  unsigned __int64 v524; // x10
  int *v525; // x11
  __int64 v526; // x0
  __int64 v527; // x0
  __int64 v528; // x1
  __int64 v529; // x8
  unsigned __int64 v530; // x10
  int *v531; // x11
  __int64 v532; // x0
  _BOOL8 v533; // x0
  __int64 v534; // x1
  Il2CppObject *current; // x8
  _BYTE *monitor; // x9
  BattleData_o *v537; // x0
  __int64 v538; // x0
  __int64 v539; // x0
  const MethodInfo *v540; // [xsp+0h] [xbp-130h]
  int32_t AttackType; // [xsp+14h] [xbp-11Ch]
  __int64 *v542; // [xsp+18h] [xbp-118h]
  BattleLogicTask_o *v543; // [xsp+20h] [xbp-110h]
  __int64 *v544; // [xsp+28h] [xbp-108h]
  int32_t v545; // [xsp+34h] [xbp-FCh]
  unsigned __int64 v546; // [xsp+38h] [xbp-F8h]
  BattleServantData_o *optSvt; // [xsp+40h] [xbp-F0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v548; // [xsp+48h] [xbp-E8h]
  BattleBuffData_o *v549; // [xsp+50h] [xbp-E0h]
  System_Func_T__TResult__o *v550; // [xsp+58h] [xbp-D8h]
  __int64 v551; // [xsp+60h] [xbp-D0h]
  BuffList_ACTION_array *attackActs; // [xsp+68h] [xbp-C8h]
  BattleLogic_DamageProcessArgs_o *attackActsa; // [xsp+68h] [xbp-C8h]
  BattleServantData_o **v554; // [xsp+70h] [xbp-C0h]
  BattleCommandData_o **v555; // [xsp+78h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v556; // [xsp+80h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v557[2]; // [xsp+88h] [xbp-A8h] BYREF
  int v558; // [xsp+BCh] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v559; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_42EBE72 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_ACTION___TypeInfo, (_DWORD)task, (_DWORD)baseActionData, method);
    sub_B5D5C4(&Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&BattleActionData_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleServantData___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&bool___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&BuffList_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&BattleLogic_DamageProcessArgs_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v31, v32, v33);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v34,
      v35,
      v36);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v37, v38, v39);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v40,
      v41,
      v42);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v43,
      v44,
      v45);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v46, v47, v48);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Func_BattleServantData__BattleServantData__Invoke__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Func_bool__IEnumerable_BattleServantData____ctor__, v67, v68, v69);
    sub_B5D5C4(&Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__, v70, v71, v72);
    sub_B5D5C4(&Method_System_Func_BattleServantData__BattleServantData___ctor__, v73, v74, v75);
    sub_B5D5C4(&Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__, v76, v77, v78);
    sub_B5D5C4(&Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__, v79, v80, v81);
    sub_B5D5C4(&Method_System_Func_int__BattleServantData___ctor__, v82, v83, v84);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v85, v86, v87);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v88, v89, v90);
    sub_B5D5C4(&System_Func_bool__IEnumerable_BattleServantData___TypeInfo, v91, v92, v93);
    sub_B5D5C4(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v94, v95, v96);
    sub_B5D5C4(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v97, v98, v99);
    sub_B5D5C4(&System_Func_BattleServantData__BattleServantData__TypeInfo, v100, v101, v102);
    sub_B5D5C4(&System_Func_int__BattleServantData__TypeInfo, v103, v104, v105);
    sub_B5D5C4(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v106, v107, v108);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v109, v110, v111);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v112, v113, v114);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v115, v116, v117);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v118, v119, v120);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v121, v122, v123);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__Add__, v124, v125, v126);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v127, v128, v129);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v130, v131, v132);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v133, v134, v135);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v136, v137, v138);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v139, v140, v141);
    sub_B5D5C4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__, v142, v143, v144);
    sub_B5D5C4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__, v145, v146, v147);
    sub_B5D5C4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__, v148, v149, v150);
    sub_B5D5C4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__, v151, v152, v153);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__, v154, v155, v156);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__, v157, v158, v159);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__, v160, v161, v162);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__, v163, v164, v165);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__, v166, v167, v168);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__, v169, v170, v171);
    sub_B5D5C4(&BattleLogicNomal___c__DisplayClass20_0_TypeInfo, v172, v173, v174);
    sub_B5D5C4(&BattleLogicNomal___c_TypeInfo, v175, v176, v177);
    byte_42EBE72 = 1;
  }
  memset(&v559, 0, sizeof(v559));
  v558 = 0;
  v178 = sub_B5D694(BattleLogicNomal___c__DisplayClass20_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass20_0___ctor((BattleLogicNomal___c__DisplayClass20_0_o *)v178, 0LL);
  if ( !v178 )
    goto LABEL_397;
  *(_QWORD *)(v178 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v178 + 16),
    (System_Int32_array **)this,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  if ( !task )
    goto LABEL_397;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, v180);
  if ( !data )
    goto LABEL_397;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v178 + 24) = ServantData;
  v189 = (BattleServantData_o **)(v178 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v178 + 24), ServantData, v190, v191, v192, v193, v194, v195);
  v196 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v196, 0LL);
  *baseActionData = v196;
  sub_B5D560(
    (BattleServantConfConponent_o *)baseActionData,
    (System_Int32_array **)v196,
    v197,
    v198,
    v199,
    v200,
    v201,
    v202);
  v203 = (BattleActionData_o **)(v178 + 48);
  *(_QWORD *)(v178 + 48) = v196;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v178 + 48),
    (System_Int32_array **)v196,
    v204,
    v205,
    v206,
    v207,
    v208,
    v209);
  command = (System_Int32_array **)task->fields.command;
  *(_QWORD *)(v178 + 40) = command;
  sub_B5D560((BattleServantConfConponent_o *)(v178 + 40), command, v211, v212, v213, v214, v215, v216);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v217 = *v203;
  ActorId = BattleLogicTask__getActorId(task, v218);
  if ( !v217 )
    goto LABEL_397;
  v217->fields.actorId = ActorId;
  ActorId = (__int64)*v203;
  v555 = (BattleCommandData_o **)(v178 + 40);
  if ( !*v203 )
    goto LABEL_397;
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_B5D560((BattleServantConfConponent_o *)(ActorId + 128), motionMessage, v219, v220, v221, v222, v223, v224);
  ActorId = BattleLogicTask__getTarget(task, v226);
  v227 = this->fields.data;
  if ( !v227 )
    goto LABEL_397;
  v228 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v227->fields.leaderDown || v227->fields.endbattleFlg )
    return 0LL;
  v229 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getServantData(
                                                                  this->fields.data,
                                                                  ActorId,
                                                                  0LL);
  v230 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v230,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v230 )
    goto LABEL_397;
  optSvt = (BattleServantData_o *)v229;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v230,
    v229,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
  *(_QWORD *)(v178 + 72) = v230;
  v231 = (System_Collections_Generic_IEnumerable_TSource__o **)(v178 + 72);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v178 + 72),
    (System_Int32_array **)v230,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  ActorId = *(_QWORD *)(v178 + 40);
  if ( !ActorId )
    goto LABEL_397;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v555;
  if ( !*v555 )
    goto LABEL_397;
  BattleCommandData__UpdateCritical((BattleCommandData_o *)ActorId, *v189, optSvt, this->fields.data, 0LL);
  ActorId = (__int64)*v555;
  if ( !*v555 )
    goto LABEL_397;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v189;
  if ( !*v189 )
    goto LABEL_397;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v555, 0LL);
  v554 = (BattleServantData_o **)(v178 + 24);
  v545 = v228;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_397;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v228, 0LL);
    if ( !this->fields.data )
      goto LABEL_397;
    v238 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                               ? BattleData__getFieldEnemyServantIDList(
                                                                   this->fields.data,
                                                                   1,
                                                                   0LL)
                                                               : BattleData__getFieldPlayerServantIDList(
                                                                   this->fields.data,
                                                                   0LL,
                                                                   0LL));
    v240 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v178 + 72);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v238,
                         (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_397;
    v241 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v228,
      (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
    v242 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v242,
      (Il2CppObject *)v178,
      Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__BattleServantData___ctor__);
    v243 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                  v241,
                                                                  (System_Func_TSource__TResult__o *)v242,
                                                                  (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v244 = BattleLogicNomal___c_TypeInfo;
    if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v244 = BattleLogicNomal___c_TypeInfo;
    }
    static_fields = v244->static_fields;
    _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__20_9;
    if ( !_9__20_9 )
    {
      if ( (BYTE3(v244->vtable._0_Equals.methodPtr) & 4) != 0 && !v244->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v244);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      }
      v247 = (Il2CppObject *)static_fields->__9;
      _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__20_9,
        v247,
        Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
      v248 = BattleLogicNomal___c_TypeInfo->static_fields;
      v248->__9__20_9 = (struct System_Func_BattleServantData__bool__o *)_9__20_9;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v248->__9__20_9,
        (System_Int32_array **)_9__20_9,
        v249,
        v250,
        v251,
        v252,
        v253,
        v254);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                         v243,
                         (System_Func_TSource__bool__o *)_9__20_9,
                         (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v240 )
      goto LABEL_397;
    v231 = (System_Collections_Generic_IEnumerable_TSource__o **)(v178 + 72);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      *v240,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v255 = *v231;
  v256 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v256 = BattleLogicNomal___c_TypeInfo;
  }
  v257 = v256->static_fields;
  _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v257->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v256->vtable._0_Equals.methodPtr) & 4) != 0 && !v256->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v256);
      v257 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v259 = (Il2CppObject *)v257->__9;
    _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__20_0,
      v259,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
    v260 = BattleLogicNomal___c_TypeInfo->static_fields;
    v260->__9__20_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__20_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v260->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v261,
      v262,
      v263,
      v264,
      v265,
      v266);
  }
  v267 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v267,
    (Il2CppObject *)v178,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__,
    (const MethodInfo_2C3041C *)Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                       v255,
                       (System_Func_TSource__TKey__o *)_9__20_0,
                       (System_Func_TSource__TElement__o *)v267,
                       (const MethodInfo_1CB7C58 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v268 = *(_QWORD *)(v178 + 24);
  if ( !v268 )
    goto LABEL_397;
  v556 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)ActorId;
  v269 = BuffList_TypeInfo;
  v549 = *(BattleBuffData_o **)(v268 + 760);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v269 = BuffList_TypeInfo;
  }
  v270 = BattleLogicNomal___c_TypeInfo;
  v542 = (__int64 *)v231;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v269->static_fields->CommandCodeBuffHash;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v270 = BattleLogicNomal___c_TypeInfo;
  }
  v272 = v270->static_fields;
  _9__20_2 = v272->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( (BYTE3(v270->vtable._0_Equals.methodPtr) & 4) != 0 && !v270->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v270);
      v272 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v274 = (Il2CppObject *)v272->__9;
    _9__20_2 = (System_Func_BuffList_TYPE__BuffList_TYPE__o *)sub_B5D694(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_BuffList_TYPE__BuffList_TYPE____ctor(
      _9__20_2,
      v274,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__,
      (const MethodInfo_2C2B1B0 *)Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__);
    v275 = BattleLogicNomal___c_TypeInfo->static_fields;
    v275->__9__20_2 = _9__20_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v275->__9__20_2,
      (System_Int32_array **)_9__20_2,
      v276,
      v277,
      v278,
      v279,
      v280,
      v281);
    v270 = BattleLogicNomal___c_TypeInfo;
  }
  if ( (BYTE3(v270->vtable._0_Equals.methodPtr) & 4) != 0 && !v270->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v270);
    v270 = BattleLogicNomal___c_TypeInfo;
  }
  v282 = v270->static_fields;
  v543 = task;
  _9__20_3 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)v282->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( (BYTE3(v270->vtable._0_Equals.methodPtr) & 4) != 0 && !v270->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v270);
      v282 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v284 = (Il2CppObject *)v282->__9;
    _9__20_3 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)sub_B5D694(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Voice_BATTLE__BattlePerformance_VoiceParam____ctor(
      _9__20_3,
      v284,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__,
      (const MethodInfo_2C2B7F8 *)Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__);
    v285 = BattleLogicNomal___c_TypeInfo->static_fields;
    v285->__9__20_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__20_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v285->__9__20_3,
      (System_Int32_array **)_9__20_3,
      v286,
      v287,
      v288,
      v289,
      v290,
      v291);
  }
  v292 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData__(
                                  CommandCodeBuffHash,
                                  (System_Func_TSource__TKey__o *)_9__20_2,
                                  (System_Func_TSource__TElement__o *)_9__20_3,
                                  (const MethodInfo_1CB7BE0 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v178 + 32) = v292;
  sub_B5D560((BattleServantConfConponent_o *)(v178 + 32), v292, v293, v294, v295, v296, v297, v298);
  v299 = *(_QWORD *)(v178 + 40);
  v548 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v178 + 32);
  if ( !v299 )
    goto LABEL_397;
  v300 = *(_QWORD *)(v299 + 72);
  v301 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B5D694(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v301,
    (Il2CppObject *)v178,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__,
    (const MethodInfo_25995E4 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  ActorId = (__int64)v549;
  if ( !v549 )
    goto LABEL_397;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v549,
    v300,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v301,
    1,
    0LL);
  if ( !*v555 )
    goto LABEL_397;
  commandAssistId = (*v555)->fields.commandAssistId;
  v303 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B5D694(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v303,
    (Il2CppObject *)v178,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__,
    (const MethodInfo_25995E4 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  v304 = *(_QWORD *)(v178 + 40);
  if ( !v304 )
    goto LABEL_397;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v549,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v303,
    1,
    *(_DWORD *)(v304 + 88),
    0LL);
  ActorId = sub_B5D5DC(bool___TypeInfo, 2LL);
  v305 = (BattleServantData_o **)(v178 + 24);
  if ( !ActorId )
    goto LABEL_397;
  v306 = (BattleCommandData_o **)(v178 + 40);
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_398;
  v551 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_B5D5DC(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_397;
  v313 = ActorId;
  if ( optSvt )
  {
    ActorId = sub_B5D684(optSvt, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v539 = sub_B5D6BC(0LL);
      sub_B5D668(v539, 0LL);
    }
  }
  if ( !*(_DWORD *)(v313 + 24) )
    goto LABEL_398;
  *(_QWORD *)(v313 + 32) = optSvt;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v313 + 32),
    (System_Int32_array **)optSvt,
    v307,
    v308,
    v309,
    v310,
    v311,
    v312);
  *(_QWORD *)(v178 + 56) = v313;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v178 + 56),
    (System_Int32_array **)v313,
    v314,
    v315,
    v316,
    v317,
    v318,
    v319);
  v320 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v320,
    (Il2CppObject *)v178,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__,
    (const MethodInfo_2C3041C *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
  *(_QWORD *)(v178 + 64) = v320;
  v544 = (__int64 *)(v178 + 64);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v178 + 64),
    (System_Int32_array **)v320,
    v321,
    v322,
    v323,
    v324,
    v325,
    v326);
  v550 = (System_Func_T__TResult__o *)sub_B5D694(System_Func_bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__object____ctor(
    v550,
    (Il2CppObject *)v178,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__,
    (const MethodInfo_279BC14 *)Method_System_Func_bool__IEnumerable_BattleServantData____ctor__);
  ActorId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_397;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)ActorId,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v328 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B5D694(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v328, 0LL);
  v330 = v551;
  v331 = *(_QWORD *)(v551 + 24);
  if ( (int)v331 >= 1 )
  {
    v332 = 0LL;
    do
    {
      if ( v332 >= (unsigned int)v331 )
        goto LABEL_398;
      v333 = *(unsigned __int8 *)(v330 + v332 + 32);
      if ( *(_BYTE *)(v330 + v332 + 32) )
        v334 = 177;
      else
        v334 = 138;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v548,
                                    v549,
                                    v334,
                                    *v306,
                                    v329);
      ActorId = (__int64)v550;
      if ( !v550 )
        goto LABEL_397;
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v550,
                           v333 != 0,
                           (const MethodInfo_279BC28 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v337 = *(_QWORD *)ActorId;
      v338 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v339 = 0LL;
        v340 = (int *)(*(_QWORD *)(v337 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v340 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v339;
          v340 += 4;
          if ( v339 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_91;
        }
        v341 = v337 + 16LL * *v340 + 312;
      }
      else
      {
LABEL_91:
        v341 = sub_AF54C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v336);
      }
      v344 = (*(__int64 (__fastcall **)(__int64, _QWORD))v341)(v338, *(_QWORD *)(v341 + 8));
      if ( !v344 )
        sub_B5D69C(0LL, v342);
      while ( 1 )
      {
        v345 = *(_QWORD *)v344;
        if ( *(_WORD *)(*(_QWORD *)v344 + 298LL) )
        {
          v346 = 0LL;
          v347 = (int *)(*(_QWORD *)(v345 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v347 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v346;
            v347 += 4;
            if ( v346 >= *(unsigned __int16 *)(*(_QWORD *)v344 + 298LL) )
              goto LABEL_98;
          }
          v348 = v345 + 16LL * *v347 + 312;
        }
        else
        {
LABEL_98:
          v348 = sub_AF54C0(v344, System_Collections_IEnumerator_TypeInfo, 0LL, v343);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v348)(v344, *(_QWORD *)(v348 + 8)) & 1) == 0 )
          break;
        v350 = *(_QWORD *)v344;
        if ( *(_WORD *)(*(_QWORD *)v344 + 298LL) )
        {
          v351 = 0LL;
          v352 = (int *)(*(_QWORD *)(v350 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v352 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v351;
            v352 += 4;
            if ( v351 >= *(unsigned __int16 *)(*(_QWORD *)v344 + 298LL) )
              goto LABEL_105;
          }
          v353 = v350 + 16LL * *v352 + 312;
        }
        else
        {
LABEL_105:
          v353 = sub_AF54C0(v344, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v349);
        }
        v354 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v353)(v344, *(_QWORD *)(v353 + 8));
        if ( !v556 )
          sub_B5D69C(0LL, v354);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v556,
                 v354,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          MasterData_WarQuestSelectionMaster,
          *v306,
          TargetCommandCodeBuffList,
          *v203,
          0,
          v328,
          v540);
      }
      *((_DWORD *)&v557[1].fields.list + v558++) = 845;
      v356 = *(_QWORD *)v344;
      if ( *(_WORD *)(*(_QWORD *)v344 + 298LL) )
      {
        v357 = 0LL;
        v358 = (int *)(*(_QWORD *)(v356 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v358 - 1) != System_IDisposable_TypeInfo )
        {
          ++v357;
          v358 += 4;
          if ( v357 >= *(unsigned __int16 *)(*(_QWORD *)v344 + 298LL) )
            goto LABEL_114;
        }
        v359 = v356 + 16LL * *v358 + 312;
      }
      else
      {
LABEL_114:
        v359 = sub_AF54C0(v344, System_IDisposable_TypeInfo, 0LL, v349);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v359)(v344, *(_QWORD *)(v359 + 8));
      if ( v558 && *((_DWORD *)&v557[0].fields.current + v558 + 1) == 845 )
        --v558;
      v330 = v551;
      v306 = v555;
      ++v332;
      LODWORD(v331) = *(_DWORD *)(v551 + 24);
    }
    while ( (__int64)v332 < (int)v331 );
    if ( (int)v331 >= 1 )
    {
      v360 = 0LL;
      while ( v360 < (unsigned int)v331 )
      {
        v546 = v360;
        v362 = *(unsigned __int8 *)(v330 + v360 + 32);
        ActorId = sub_B5D5DC(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v363 = *(_DWORD *)(ActorId + 24);
        v364 = (BuffList_ACTION_array *)ActorId;
        if ( v362 )
        {
          if ( !v363 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v363 == 1 )
            break;
          v365 = 120;
        }
        else
        {
          if ( !v363 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v363 == 1 )
            break;
          v365 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v365;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v550,
                             v362 != 0,
                             (const MethodInfo_279BC28 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v367 = *(_QWORD *)ActorId;
        v368 = ActorId;
        attackActs = v364;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v369 = 0LL;
          v370 = (int *)(*(_QWORD *)(v367 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v370 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v369;
            v370 += 4;
            if ( v369 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_141;
          }
          v371 = v367 + 16LL * *v370 + 312;
        }
        else
        {
LABEL_141:
          v371 = sub_AF54C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v366);
        }
        v374 = (*(__int64 (__fastcall **)(__int64, _QWORD))v371)(v368, *(_QWORD *)(v371 + 8));
        if ( !v374 )
          sub_B5D69C(0LL, v372);
        while ( 1 )
        {
          v383 = *(_QWORD *)v374;
          if ( *(_WORD *)(*(_QWORD *)v374 + 298LL) )
          {
            v384 = 0LL;
            v385 = (int *)(*(_QWORD *)(v383 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v385 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v384;
              v385 += 4;
              if ( v384 >= *(unsigned __int16 *)(*(_QWORD *)v374 + 298LL) )
                goto LABEL_155;
            }
            v305 = v554;
            v386 = v383 + 16LL * *v385 + 312;
          }
          else
          {
LABEL_155:
            v305 = v554;
            v386 = sub_AF54C0(v374, System_Collections_IEnumerator_TypeInfo, 0LL, v373);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v386)(v374, *(_QWORD *)(v386 + 8)) & 1) == 0 )
            break;
          v388 = *(_QWORD *)v374;
          if ( *(_WORD *)(*(_QWORD *)v374 + 298LL) )
          {
            v389 = 0LL;
            v390 = (int *)(*(_QWORD *)(v388 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v390 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v389;
              v390 += 4;
              if ( v389 >= *(unsigned __int16 *)(*(_QWORD *)v374 + 298LL) )
                goto LABEL_162;
            }
            v391 = v388 + 16LL * *v390 + 312;
          }
          else
          {
LABEL_162:
            v391 = sub_AF54C0(v374, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v387);
          }
          v393 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v391)(v374, *(_QWORD *)(v391 + 8));
          if ( !*v305 )
            sub_B5D69C(0LL, v392);
          AttackSideEffectBuffList_21185296 = BattleServantData__getAttackSideEffectBuffList_21185296(
                                                *v305,
                                                attackActs,
                                                *v555,
                                                v393,
                                                0LL);
          v394 = AttackSideEffectBuffList_21185296;
          if ( !AttackSideEffectBuffList_21185296 )
            sub_B5D69C(0LL, v382);
          v375 = *(_QWORD *)&AttackSideEffectBuffList_21185296->max_length;
          if ( (int)v375 >= 1 )
          {
            v376 = 0LL;
            do
            {
              if ( v376 >= (unsigned int)v375 )
              {
                v361 = sub_B5D6C8(AttackSideEffectBuffList_21185296);
                sub_B5D668(v361, 0LL);
              }
              if ( !*v203 )
                sub_B5D69C(0LL, v382);
              v377 = v394->m_Items[v376];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v203, 3, 0LL);
              if ( !logicfunction )
                sub_B5D69C(SideEffectActionData, v380);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                MasterData_WarQuestSelectionMaster,
                SideEffectActionData,
                v377,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v328,
                0,
                0LL);
              LODWORD(v375) = v394->max_length;
              ++v376;
            }
            while ( (__int64)v376 < (int)v375 );
          }
        }
        *((_DWORD *)&v557[1].fields.list + v558++) = 1050;
        v395 = *(_QWORD *)v374;
        if ( *(_WORD *)(*(_QWORD *)v374 + 298LL) )
        {
          v396 = 0LL;
          v397 = (int *)(*(_QWORD *)(v395 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v397 - 1) != System_IDisposable_TypeInfo )
          {
            ++v396;
            v397 += 4;
            if ( v396 >= *(unsigned __int16 *)(*(_QWORD *)v374 + 298LL) )
              goto LABEL_172;
          }
          v398 = v395 + 16LL * *v397 + 312;
        }
        else
        {
LABEL_172:
          v398 = sub_AF54C0(v374, System_IDisposable_TypeInfo, 0LL, v387);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v398)(v374, *(_QWORD *)(v398 + 8));
        if ( v558 && *((_DWORD *)&v557[0].fields.current + v558 + 1) == 1050 )
          --v558;
        v330 = v551;
        v306 = v555;
        v360 = v546 + 1;
        LODWORD(v331) = *(_DWORD *)(v551 + 24);
        if ( (__int64)(v546 + 1) >= (int)v331 )
          goto LABEL_179;
      }
LABEL_398:
      v538 = sub_B5D6C8(ActorId);
      sub_B5D668(v538, 0LL);
    }
  }
LABEL_179:
  attackActsa = (BattleLogic_DamageProcessArgs_o *)sub_B5D694(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(attackActsa, 1, -1, 0LL);
  ActorId = (__int64)v550;
  if ( !v550 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v550,
                       0,
                       (const MethodInfo_279BC28 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v400 = *(_QWORD *)ActorId;
  v401 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v402 = 0LL;
    v403 = (int *)(*(_QWORD *)(v400 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v403 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v402;
      v403 += 4;
      if ( v402 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_185;
    }
    v404 = v400 + 16LL * *v403 + 312;
  }
  else
  {
LABEL_185:
    v404 = sub_AF54C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v399);
  }
  v405 = (*(__int64 (__fastcall **)(__int64, _QWORD))v404)(v401, *(_QWORD *)(v404 + 8));
  v408 = v405;
  v409 = 0LL;
  while ( 1 )
  {
    if ( !v408 )
      sub_B5D69C(v405, v406);
    v410 = *(_QWORD *)v408;
    if ( *(_WORD *)(*(_QWORD *)v408 + 298LL) )
    {
      v411 = 0LL;
      v412 = (int *)(*(_QWORD *)(v410 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v412 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v411;
        v412 += 4;
        if ( v411 >= *(unsigned __int16 *)(*(_QWORD *)v408 + 298LL) )
          goto LABEL_193;
      }
      v413 = v410 + 16LL * *v412 + 312;
    }
    else
    {
LABEL_193:
      v413 = sub_AF54C0(v408, System_Collections_IEnumerator_TypeInfo, 0LL, v407);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v413)(v408, *(_QWORD *)(v413 + 8)) & 1) == 0 )
      break;
    v415 = *(_QWORD *)v408;
    if ( *(_WORD *)(*(_QWORD *)v408 + 298LL) )
    {
      v416 = 0LL;
      v417 = (int *)(*(_QWORD *)(v415 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v417 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v416;
        v417 += 4;
        if ( v416 >= *(unsigned __int16 *)(*(_QWORD *)v408 + 298LL) )
          goto LABEL_200;
      }
      v418 = v415 + 16LL * *v417 + 312;
    }
    else
    {
LABEL_200:
      v418 = sub_AF54C0(v408, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v414);
    }
    v420 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v418)(v408, *(_QWORD *)(v418 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_B5D69C(0LL, v419);
    Damagelist = BattleLogic__getDamagelist(logic, *v305, v420, *v306, attackActsa, 0LL);
    v424 = Damagelist;
    if ( v420 == optSvt )
      v409 = Damagelist;
    if ( !v420 )
      sub_B5D69C(Damagelist, v423);
    buffData = v420->fields.buffData;
    if ( !buffData )
      sub_B5D69C(Damagelist, v423);
    if ( !buffData->fields.isNoDamage )
    {
      v426 = *v203;
      v427 = BattleBuffData__UseProgressingDoNotAct(v420->fields.buffData, v420, 0, 0LL);
      if ( !v426 )
        sub_B5D69C(v427, v427);
      BattleActionData__addSideEffectActionData(v426, v427, 1, 0LL);
    }
    if ( !*v305 )
      sub_B5D69C(0LL, v423);
    v428 = BattleServantData__checkPlayer(*v305, 0LL);
    if ( v428 )
    {
      if ( !*v305 )
        sub_B5D69C(v428, v429);
      v420->fields.overkillTargetId = (*v305)->fields.uniqueId;
    }
    if ( !*v203 )
      sub_B5D69C(0LL, v429);
    v430 = v424;
    v306 = v555;
    BattleActionData__setDamageData(*v203, v430, 0LL, 0, 0, 0LL);
  }
  *((_DWORD *)&v557[1].fields.list + v558++) = 1260;
  v431 = *(_QWORD *)v408;
  if ( *(_WORD *)(*(_QWORD *)v408 + 298LL) )
  {
    v432 = 0LL;
    v433 = (int *)(*(_QWORD *)(v431 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v433 - 1) != System_IDisposable_TypeInfo )
    {
      ++v432;
      v433 += 4;
      if ( v432 >= *(unsigned __int16 *)(*(_QWORD *)v408 + 298LL) )
        goto LABEL_220;
    }
    v434 = v431 + 16LL * *v433 + 312;
  }
  else
  {
LABEL_220:
    v434 = sub_AF54C0(v408, System_IDisposable_TypeInfo, 0LL, v414);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v434)(v408, *(_QWORD *)(v434 + 8));
  if ( v558 && *((_DWORD *)&v557[0].fields.current + v558 + 1) == 1260 )
    --v558;
  ActorId = *v544;
  if ( !*v544 )
    goto LABEL_397;
  System_Func_string__string___Invoke(
    (System_Func_string__string__o *)ActorId,
    (System_String_o *)optSvt,
    (const MethodInfo_2C30430 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  ActorId = (__int64)*v555;
  if ( !*v555 )
    goto LABEL_397;
  v435 = *v203;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v435 )
    goto LABEL_397;
  v435->fields.type = ActorId;
  ActorId = (__int64)*v203;
  if ( !*v203 )
    goto LABEL_397;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v555, 0LL);
  if ( !*v555 )
    goto LABEL_397;
  if ( !*v203 )
    goto LABEL_397;
  (*v203)->fields.actionIndex = (*v555)->fields.actionIndex;
  ActorId = (__int64)*v305;
  if ( !*v305 )
    goto LABEL_397;
  v436 = *v203;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, *v555, 0LL);
  if ( !v436 )
    goto LABEL_397;
  v436->fields.motionId = ActorId;
  if ( !v409 )
    goto LABEL_397;
  v437 = *v203;
  ActorId = BattleActionData_DamageData__getAttackCount(v409, 0LL);
  if ( !v437 )
    goto LABEL_397;
  v437->fields.attackcount = ActorId;
  v438 = this->fields.data;
  if ( !v438 )
    goto LABEL_397;
  perf = v438->fields.perf;
  if ( !perf )
    goto LABEL_397;
  if ( !*v555 )
    goto LABEL_397;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_397;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v555)->fields.actionIndex,
    0LL);
  if ( !*v305 )
    goto LABEL_397;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  v440 = *v203;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v305)->fields.uniqueId, v545, 0LL);
  if ( !v440 )
    goto LABEL_397;
  v442 = v551;
  v440->fields.prevattackme = ActorId & 1;
  v443 = v555;
  v444 = *(_QWORD *)(v551 + 24);
  if ( (int)v444 >= 1 )
  {
    v445 = 0LL;
    do
    {
      if ( v445 >= (unsigned int)v444 )
        goto LABEL_398;
      v446 = *(_BYTE *)(v442 + v445 + 32);
      if ( v446 )
        v447 = 178;
      else
        v447 = 159;
      v448 = BattleLogicNomal__GetTargetCommandCodeBuffList(
               (BattleLogicNomal_o *)ActorId,
               *v548,
               v549,
               v447,
               *v443,
               v441);
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v550,
                           v446,
                           (const MethodInfo_279BC28 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v450 = *(_QWORD *)ActorId;
      v451 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v452 = 0LL;
        v453 = (int *)(*(_QWORD *)(v450 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v453 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v452;
          v453 += 4;
          if ( v452 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_255;
        }
        v454 = v450 + 16LL * *v453 + 312;
      }
      else
      {
LABEL_255:
        v454 = sub_AF54C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v449);
      }
      v457 = (*(__int64 (__fastcall **)(__int64, _QWORD))v454)(v451, *(_QWORD *)(v454 + 8));
      if ( !v457 )
        sub_B5D69C(0LL, v455);
      while ( 1 )
      {
        v458 = *(_QWORD *)v457;
        if ( *(_WORD *)(*(_QWORD *)v457 + 298LL) )
        {
          v459 = 0LL;
          v460 = (int *)(*(_QWORD *)(v458 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v460 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v459;
            v460 += 4;
            if ( v459 >= *(unsigned __int16 *)(*(_QWORD *)v457 + 298LL) )
              goto LABEL_262;
          }
          v461 = v458 + 16LL * *v460 + 312;
        }
        else
        {
LABEL_262:
          v461 = sub_AF54C0(v457, System_Collections_IEnumerator_TypeInfo, 0LL, v456);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v461)(v457, *(_QWORD *)(v461 + 8)) & 1) == 0 )
          break;
        v463 = *(_QWORD *)v457;
        if ( *(_WORD *)(*(_QWORD *)v457 + 298LL) )
        {
          v464 = 0LL;
          v465 = (int *)(*(_QWORD *)(v463 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v465 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v464;
            v465 += 4;
            if ( v464 >= *(unsigned __int16 *)(*(_QWORD *)v457 + 298LL) )
              goto LABEL_269;
          }
          v466 = v463 + 16LL * *v465 + 312;
        }
        else
        {
LABEL_269:
          v466 = sub_AF54C0(v457, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v462);
        }
        v467 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v466)(v457, *(_QWORD *)(v466 + 8));
        if ( !v556 )
          sub_B5D69C(0LL, v467);
        v468 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v556,
                 v467,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v468,
          MasterData_WarQuestSelectionMaster,
          *v443,
          v448,
          *v203,
          1,
          v328,
          v540);
      }
      *((_DWORD *)&v557[1].fields.list + v558++) = 1591;
      v469 = *(_QWORD *)v457;
      if ( *(_WORD *)(*(_QWORD *)v457 + 298LL) )
      {
        v470 = 0LL;
        v471 = (int *)(*(_QWORD *)(v469 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v471 - 1) != System_IDisposable_TypeInfo )
        {
          ++v470;
          v471 += 4;
          if ( v470 >= *(unsigned __int16 *)(*(_QWORD *)v457 + 298LL) )
            goto LABEL_278;
        }
        v472 = v469 + 16LL * *v471 + 312;
      }
      else
      {
LABEL_278:
        v472 = sub_AF54C0(v457, System_IDisposable_TypeInfo, 0LL, v462);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v472)(v457, *(_QWORD *)(v472 + 8));
      if ( v558 && *((_DWORD *)&v557[0].fields.current + v558 + 1) == 1591 )
        --v558;
      v442 = v551;
      v443 = v555;
      ++v445;
      LODWORD(v444) = *(_DWORD *)(v551 + 24);
    }
    while ( (__int64)v445 < (int)v444 );
    if ( (int)v444 >= 1 )
    {
      v473 = 0LL;
      while ( v473 < (unsigned int)v444 )
      {
        v475 = *(unsigned __int8 *)(v442 + v473 + 32);
        ActorId = sub_B5D5DC(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v476 = *(_DWORD *)(ActorId + 24);
        v477 = (BuffList_ACTION_array *)ActorId;
        if ( v475 )
        {
          if ( !v476 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v476 == 1 )
            goto LABEL_398;
          v478 = 121;
        }
        else
        {
          if ( !v476 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v476 == 1 )
            goto LABEL_398;
          v478 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v478;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v550,
                             v475 != 0,
                             (const MethodInfo_279BC28 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v480 = *(_QWORD *)ActorId;
        v481 = ActorId;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v482 = 0LL;
          v483 = (int *)(*(_QWORD *)(v480 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v483 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v482;
            v483 += 4;
            if ( v482 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_304;
          }
          v484 = v480 + 16LL * *v483 + 312;
        }
        else
        {
LABEL_304:
          v484 = sub_AF54C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v479);
        }
        v487 = (*(__int64 (__fastcall **)(__int64, _QWORD))v484)(v481, *(_QWORD *)(v484 + 8));
        if ( !v487 )
          sub_B5D69C(0LL, v485);
        while ( 1 )
        {
          v493 = *(_QWORD *)v487;
          if ( *(_WORD *)(*(_QWORD *)v487 + 298LL) )
          {
            v494 = 0LL;
            v495 = (int *)(*(_QWORD *)(v493 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v495 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v494;
              v495 += 4;
              if ( v494 >= *(unsigned __int16 *)(*(_QWORD *)v487 + 298LL) )
                goto LABEL_317;
            }
            v496 = v493 + 16LL * *v495 + 312;
          }
          else
          {
LABEL_317:
            v496 = sub_AF54C0(v487, System_Collections_IEnumerator_TypeInfo, 0LL, v486);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v496)(v487, *(_QWORD *)(v496 + 8)) & 1) == 0 )
            break;
          v498 = *(_QWORD *)v487;
          if ( *(_WORD *)(*(_QWORD *)v487 + 298LL) )
          {
            v499 = 0LL;
            v500 = (int *)(*(_QWORD *)(v498 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v500 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v499;
              v500 += 4;
              if ( v499 >= *(unsigned __int16 *)(*(_QWORD *)v487 + 298LL) )
                goto LABEL_324;
            }
            v501 = v498 + 16LL * *v500 + 312;
          }
          else
          {
LABEL_324:
            v501 = sub_AF54C0(v487, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v497);
          }
          v503 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v501)(v487, *(_QWORD *)(v501 + 8));
          if ( !*v554 )
            sub_B5D69C(0LL, v502);
          v491 = BattleServantData__getAttackSideEffectBuffList_21185296(*v554, v477, *v555, v503, 0LL);
          v504 = v491;
          if ( !v491 )
            sub_B5D69C(0LL, v492);
          v488 = *(_QWORD *)&v491->max_length;
          if ( (int)v488 >= 1 )
          {
            v489 = 0LL;
            do
            {
              if ( v489 >= (unsigned int)v488 )
              {
                v474 = sub_B5D6C8(v491);
                sub_B5D668(v474, 0LL);
              }
              v490 = this->fields.logicfunction;
              if ( !v490 )
                sub_B5D69C(0LL, v492);
              BattleLogicFunction__SetSideEffectBuff(
                v490,
                MasterData_WarQuestSelectionMaster,
                *v203,
                v504->m_Items[v489],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v328,
                1,
                0LL);
              LODWORD(v488) = v504->max_length;
              ++v489;
            }
            while ( (__int64)v489 < (int)v488 );
          }
        }
        v305 = v554;
        *((_DWORD *)&v557[1].fields.list + v558++) = 1790;
        v505 = *(_QWORD *)v487;
        if ( *(_WORD *)(*(_QWORD *)v487 + 298LL) )
        {
          v506 = 0LL;
          v507 = (int *)(*(_QWORD *)(v505 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v507 - 1) != System_IDisposable_TypeInfo )
          {
            ++v506;
            v507 += 4;
            if ( v506 >= *(unsigned __int16 *)(*(_QWORD *)v487 + 298LL) )
              goto LABEL_334;
          }
          v508 = v505 + 16LL * *v507 + 312;
        }
        else
        {
LABEL_334:
          v508 = sub_AF54C0(v487, System_IDisposable_TypeInfo, 0LL, v497);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v508)(v487, *(_QWORD *)(v508 + 8));
        if ( v558 && *((_DWORD *)&v557[0].fields.current + v558 + 1) == 1790 )
          --v558;
        v442 = v551;
        ++v473;
        LODWORD(v444) = *(_DWORD *)(v551 + 24);
        if ( (__int64)v473 >= (int)v444 )
          goto LABEL_341;
      }
      goto LABEL_398;
    }
  }
LABEL_341:
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v550,
                       0,
                       (const MethodInfo_279BC28 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v510 = *(_QWORD *)ActorId;
  v511 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v512 = 0LL;
    v513 = (int *)(*(_QWORD *)(v510 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v513 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v512;
      v513 += 4;
      if ( v512 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_346;
    }
    v514 = v510 + 16LL * *v513 + 312;
  }
  else
  {
LABEL_346:
    v514 = sub_AF54C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v509);
  }
  v517 = (*(__int64 (__fastcall **)(__int64, _QWORD))v514)(v511, *(_QWORD *)(v514 + 8));
  if ( !v517 )
    sub_B5D69C(0LL, v515);
  while ( 1 )
  {
    v518 = *(_QWORD *)v517;
    if ( *(_WORD *)(*(_QWORD *)v517 + 298LL) )
    {
      v519 = 0LL;
      v520 = (int *)(*(_QWORD *)(v518 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v520 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v519;
        v520 += 4;
        if ( v519 >= *(unsigned __int16 *)(*(_QWORD *)v517 + 298LL) )
          goto LABEL_353;
      }
      v521 = v518 + 16LL * *v520 + 312;
    }
    else
    {
LABEL_353:
      v521 = sub_AF54C0(v517, System_Collections_IEnumerator_TypeInfo, 0LL, v516);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v521)(v517, *(_QWORD *)(v521 + 8)) & 1) == 0 )
      break;
    v523 = *(_QWORD *)v517;
    if ( *(_WORD *)(*(_QWORD *)v517 + 298LL) )
    {
      v524 = 0LL;
      v525 = (int *)(*(_QWORD *)(v523 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v525 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v524;
        v525 += 4;
        if ( v524 >= *(unsigned __int16 *)(*(_QWORD *)v517 + 298LL) )
          goto LABEL_360;
      }
      v526 = v523 + 16LL * *v525 + 312;
    }
    else
    {
LABEL_360:
      v526 = sub_AF54C0(v517, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v522);
    }
    v527 = (*(__int64 (__fastcall **)(__int64, _QWORD))v526)(v517, *(_QWORD *)(v526 + 8));
    if ( !*v305 )
      sub_B5D69C(v527, v528);
    if ( !v527 )
      sub_B5D69C(0LL, v528);
    if ( !this->fields.logic )
      sub_B5D69C(v527, v528);
    BattleLogic__setDamageSideEffect(
      this->fields.logic,
      *v203,
      (*v305)->fields.uniqueId,
      *(_DWORD *)(v527 + 24),
      *v555,
      0LL);
  }
  *((_DWORD *)&v557[1].fields.list + v558++) = 1898;
  v529 = *(_QWORD *)v517;
  if ( *(_WORD *)(*(_QWORD *)v517 + 298LL) )
  {
    v530 = 0LL;
    v531 = (int *)(*(_QWORD *)(v529 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v531 - 1) != System_IDisposable_TypeInfo )
    {
      ++v530;
      v531 += 4;
      if ( v530 >= *(unsigned __int16 *)(*(_QWORD *)v517 + 298LL) )
        goto LABEL_371;
    }
    v532 = v529 + 16LL * *v531 + 312;
  }
  else
  {
LABEL_371:
    v532 = sub_AF54C0(v517, System_IDisposable_TypeInfo, 0LL, v522);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v532)(v517, *(_QWORD *)(v532 + 8));
  if ( v558 && *((_DWORD *)&v557[0].fields.current + v558 + 1) == 1898 )
    --v558;
  ActorId = *v542;
  if ( !*v542 )
    goto LABEL_397;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v557,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ActorId,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v559 = v557[0];
  while ( 1 )
  {
    v533 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v559,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v533 )
      break;
    current = v559.fields.current;
    if ( !v559.fields.current )
      sub_B5D69C(v533, v534);
    monitor = v559.fields.current[47].monitor;
    if ( !monitor )
      sub_B5D69C(v533, v534);
    monitor[152] = 0;
    if ( v543->fields.isCanCounterTask )
    {
      if ( !*v305 )
        sub_B5D69C(v533, v534);
      v537 = this->fields.data;
      if ( !v537 )
        sub_B5D69C(0LL, v534);
      BattleData__SetWasAttackTargetId(v537, (*v305)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  *((_DWORD *)&v557[1].fields.list + v558++) = 1997;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v559,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( v558 && *((_DWORD *)&v557[0].fields.current + v558 + 1) == 1997 )
    --v558;
  ActorId = *v544;
  if ( !*v544 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_string__string___Invoke(
                       (System_Func_string__string__o *)ActorId,
                       (System_String_o *)optSvt,
                       (const MethodInfo_2C30430 *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  if ( !*v203
    || ((*v203)->fields.isForcedSpeedOne = v543->fields.isForcedSpeedOne, !*v203)
    || ((*v203)->fields.isAllAttack = AttackType == 2, !*v305)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v305)->fields.uniqueId, v545, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_397:
    sub_B5D69C(ActorId, v180);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v203;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateDoNotActAction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleData_o *data; // x0
  struct BattleLogic_o *logic; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  UnityEngine_Object_o *DoNotActByCommandSealedObject_k__BackingField; // x20
  bool v17; // w0
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1

  if ( (byte_42EBE84 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8887/*"MOTION_DO_NOT_ACT"*/, v9, v10, v11);
    byte_42EBE84 = 1;
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
  v17 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0LL, 0LL);
  v18 = 0LL;
  if ( !v17 )
  {
    v18 = sub_B5D694(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v18, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
      if ( v18 )
      {
        *(_DWORD *)(v18 + 32) = (_DWORD)data;
        v25 = (System_Int32_array **)StringLiteral_8887/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v18 + 64) = StringLiteral_8887/*"MOTION_DO_NOT_ACT"*/;
        sub_B5D560((BattleServantConfConponent_o *)(v18 + 64), v25, v19, v20, v21, v22, v23, v24);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v18 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v18;
        }
      }
    }
LABEL_17:
    sub_B5D69C(data, task);
  }
  return (BattleActionData_o *)v18;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ProgressIntervalTurnActionData_o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0

  if ( (byte_42EBE83 & 1) == 0 )
  {
    sub_B5D5C4(&ProgressIntervalTurnActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    byte_42EBE83 = 1;
  }
  v5 = (ProgressIntervalTurnActionData_o *)sub_B5D694(ProgressIntervalTurnActionData_TypeInfo);
  ProgressIntervalTurnActionData___ctor(v5, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v5 )
    goto LABEL_11;
  ProgressIntervalTurnActionData__AddTurnProgressServants(v5, (BattleServantData_array *)data, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  if ( !data->fields.leaderDown || !data->fields.endbattleFlg )
  {
    FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 0, 0LL);
    ProgressIntervalTurnActionData__AddTurnProgressServants(v5, FieldEnemyServantList, 0LL);
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
LABEL_11:
    sub_B5D69C(data, v6);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0LL, (BattleActionData_o *)v5, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleData_o *data; // x0
  struct BattleData_o *v18; // x8
  BattleServantData_o *v19; // x19
  __int64 v20; // x22
  int v21; // w22
  System_Int32_array **v22; // x21
  UnityEngine_Object_o *PartsActor; // x23
  struct BattleData_o *v24; // x8
  UnityEngine_Object_o *v25; // x22
  struct BattleData_o *v26; // x8
  int32_t m_CachedPtr; // w9
  __int64 *v28; // x10
  UnityEngine_Object_o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42EBE79 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6447/*"FOCUS_UNDER"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6445/*"FOCUS_CENTER"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6449/*"FOCUS_UP"*/, v14, v15, v16);
    byte_42EBE79 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_45;
  data = (BattleData_o *)BattleData__getServantData(data, data->fields.justDeadTargetId, 0LL);
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_45;
  v19 = (BattleServantData_o *)data;
  v18->fields.justDeadTargetId = -1;
  if ( !data )
    return 0LL;
  if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)data, 0LL)
    || (v20 = 0LL, BattleServantData__isMultiTargetUnder(v19, 0LL)) )
  {
    data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(v19, 0LL);
    if ( !this->fields.data )
      goto LABEL_45;
    v21 = (int)data;
    v22 = (System_Int32_array **)StringLiteral_6445/*"FOCUS_CENTER"*/;
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
        v24 = this->fields.data;
        if ( !v24 )
          goto LABEL_45;
        v22 = (System_Int32_array **)StringLiteral_6445/*"FOCUS_CENTER"*/;
        v24->fields.globaltargetId = PartsActor[18].fields.m_CachedPtr;
      }
    }
    if ( v21 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v29 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 2, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v29 )
        goto LABEL_45;
      data = (BattleData_o *)v29[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v26 = this->fields.data;
      if ( !v26 )
        goto LABEL_45;
      m_CachedPtr = v29[18].fields.m_CachedPtr;
      v28 = &StringLiteral_6447/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v21 )
        goto LABEL_42;
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v25 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v25 )
        goto LABEL_45;
      data = (BattleData_o *)v25[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v26 = this->fields.data;
      if ( !v26 )
        goto LABEL_45;
      m_CachedPtr = v25[18].fields.m_CachedPtr;
      v28 = &StringLiteral_6449/*"FOCUS_UP"*/;
    }
    v22 = (System_Int32_array **)*v28;
    v26->fields.globaltargetId = m_CachedPtr;
LABEL_42:
    v20 = sub_B5D694(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v20, 0LL);
    if ( v20 )
    {
      *(_DWORD *)(v20 + 32) = v19->fields.uniqueId;
      *(_DWORD *)(v20 + 36) = v19->fields.uniqueId;
      BattleActionData__setStateField((BattleActionData_o *)v20, 0LL);
      *(_QWORD *)(v20 + 64) = v22;
      sub_B5D560((BattleServantConfConponent_o *)(v20 + 64), v22, v30, v31, v32, v33, v34, v35);
      return (BattleActionData_o *)v20;
    }
LABEL_45:
    sub_B5D69C(data, method);
  }
  return (BattleActionData_o *)v20;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v36; // x1
  BattleLogicNomal___c_c *v37; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x20
  Il2CppObject *v40; // x21
  struct BattleLogicNomal___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_BattleBuffData_BuffData__o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBE71 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_BattleBuffData_BuffData___ctor__,
      (_DWORD)passiveBuffDict,
      (_DWORD)actSvtBuffData,
      *(_QWORD *)&type);
    sub_B5D5C4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__, v28, v29, v30);
    sub_B5D5C4(&BattleLogicNomal___c_TypeInfo, v31, v32, v33);
    byte_42EBE71 = 1;
  }
  value = 0LL;
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_18;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData____TryGetValue(
                                                            passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_2F4B680 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_18;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v34) )
  {
LABEL_18:
    sub_B5D69C(CommandCardBuffArray, v36);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v37 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v37 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v40,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v41 = BattleLogicNomal___c_TypeInfo->static_fields;
    v41->__9__18_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__18_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v41->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v34,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v34;
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *PartsActor; // x20
  struct BattleData_o *v9; // x8

  if ( (byte_42EBE7B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE7B = 1;
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
              v9 = this->fields.data;
              if ( v9 )
              {
                v9->fields.globaltargetId = PartsActor[18].fields.m_CachedPtr;
                return;
              }
            }
          }
LABEL_18:
          sub_B5D69C(data, method);
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
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_TSource__o *QuestIndividualities; // x21
  _QWORD **v11; // x22
  __int64 v12; // x21
  __int16 v13; // w8
  __int64 v14; // x21
  __int64 v15; // x21
  __int64 v16; // x21
  _QWORD **v17; // x22
  __int64 v18; // x20
  __int16 v19; // w8
  __int64 v20; // x20
  __int64 v21; // x20
  __int64 v22; // x20
  struct BattleData_o *v23; // x8

  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_42EBE7C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)prevFieldIndiv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v6, v7, v8);
    byte_42EBE7C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_36;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0LL);
  if ( QuestIndividualities )
  {
    if ( v4 )
      goto LABEL_31;
    goto LABEL_19;
  }
  v11 = (_QWORD **)Method_System_Array_Empty_int___;
  v12 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v13 = *(_WORD *)(v12 + 306);
  if ( (v13 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v13 = *(_WORD *)(v12 + 306);
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 = *v11[6];
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AF52C4(*v11[6]);
    if ( !*(_DWORD *)(v14 + 224) )
    {
      v15 = *v11[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AF52C4(*v11[6]);
      j_il2cpp_runtime_class_init_0(v15);
    }
  }
  v16 = *v11[6];
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AF52C4(*v11[6]);
  QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v16 + 184);
  if ( !v4 )
  {
LABEL_19:
    v17 = (_QWORD **)Method_System_Array_Empty_int___;
    v18 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v19 = *(_WORD *)(v18 + 306);
    if ( (v19 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v19 = *(_WORD *)(v18 + 306);
    }
    if ( (v19 & 0x400) != 0 )
    {
      v20 = *v17[6];
      if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
        sub_AF52C4(*v17[6]);
      if ( !*(_DWORD *)(v20 + 224) )
      {
        v21 = *v17[6];
        if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
          sub_AF52C4(*v17[6]);
        j_il2cpp_runtime_class_init_0(v21);
      }
    }
    v22 = *v17[6];
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      sub_AF52C4(*v17[6]);
    v4 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v22 + 184);
  }
LABEL_31:
  if ( System_Linq_Enumerable__SequenceEqual_int_(
         QuestIndividualities,
         v4,
         (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    return;
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL), (v23 = this->fields.data) == 0LL)
    || (data = (BattleData_o *)v23->fields.perf) == 0LL )
  {
LABEL_36:
    sub_B5D69C(data, prevFieldIndiv);
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
    sub_B5D69C(data, method);
  SelectCommand = BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0LL);
  if ( !SelectCommand )
    return 1;
  v6 = SelectCommand;
  if ( BattleCommandData__isTreasureDvc(SelectCommand, 0LL) || BattleCommandData__IsAllAttack(v6, 0LL) )
    return 0;
  return v4->fields.uniqueId == v6->fields.uniqueId;
}


BattleLogicTask_array *__fastcall BattleLogicNomal__checkReflectionTask(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  __int64 Instance; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  int v34; // w8
  unsigned int v35; // w27
  BattleServantData_o *v36; // x22
  int max_length; // w8
  BattleBuffData_BuffData_array *v38; // x23
  unsigned int v39; // w28
  BattleBuffData_BuffData_o *v40; // x24
  BattleSkillInfoData_o *v41; // x25
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v43; // x8
  __int64 v44; // x24
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattleLogic_o *logic; // x25
  __int64 v53; // x26
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v61; // x0
  __int64 v62; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EBE80 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask___TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    byte_42EBE80 = 1;
  }
  isFirstAdd = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v33 = Instance;
  if ( !Instance )
    goto LABEL_40;
  v34 = *(_DWORD *)(Instance + 24);
  if ( v34 >= 1 )
  {
    v35 = 0;
    do
    {
      if ( v35 >= v34 )
        goto LABEL_41;
      v36 = *(BattleServantData_o **)(v33 + 8LL * (int)v35 + 32);
      if ( !v36 )
        goto LABEL_40;
      if ( !v36->fields.status )
      {
        Instance = BattleServantData__isAlive(v36, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v36, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_40;
          max_length = *(_DWORD *)(Instance + 24);
          v38 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v39 = 0;
            while ( v39 < max_length )
            {
              v40 = v38->m_Items[v39];
              v41 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v41, 0LL);
              if ( !v41 )
                goto LABEL_40;
              v41->fields.svtUniqueId = v36->fields.uniqueId;
              if ( !v40 )
                goto LABEL_40;
              vals = v40->fields.vals;
              if ( !vals )
                goto LABEL_40;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v41->klass->vtable._4_set_skillId.method)(
                           v41,
                           (unsigned int)vals->m_Items[1],
                           v41->klass->vtable._5_get_skillId.methodPtr);
              v43 = v40->fields.vals;
              if ( !v43 )
                goto LABEL_40;
              if ( v43->max_length <= 1 )
                break;
              v41->fields.skilllv = v43->m_Items[2];
              v44 = sub_B5D694(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor((BattleLogicTask_o *)v44, v45);
              if ( !v44 )
                goto LABEL_40;
              *(_QWORD *)(v44 + 72) = v41;
              *(_DWORD *)(v44 + 48) = 25;
              sub_B5D560(
                (BattleServantConfConponent_o *)(v44 + 72),
                (System_Int32_array **)v41,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51);
              *(_BYTE *)(v44 + 80) = 0;
              logic = this->fields.logic;
              Instance = sub_B5D5DC(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_40;
              v53 = Instance;
              Instance = sub_B5D684(v44, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v62 = sub_B5D6BC(0LL);
                sub_B5D668(v62, 0LL);
              }
              if ( !*(_DWORD *)(v53 + 24) )
                break;
              *(_QWORD *)(v53 + 32) = v44;
              sub_B5D560(
                (BattleServantConfConponent_o *)(v53 + 32),
                (System_Int32_array **)v44,
                v54,
                v55,
                v56,
                v57,
                v58,
                v59);
              if ( !logic )
                goto LABEL_40;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v36,
                v38,
                (BattleLogicTask_array *)v53,
                0LL);
              if ( !v30 )
                goto LABEL_40;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v30,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
              max_length = v38->max_length;
              if ( (int)++v39 >= max_length )
                goto LABEL_34;
            }
LABEL_41:
            v61 = sub_B5D6C8(Instance);
            sub_B5D668(v61, 0LL);
          }
LABEL_34:
          Instance = (__int64)v36->fields.buffData;
          if ( !Instance )
            goto LABEL_40;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
      }
      v34 = *(_DWORD *)(v33 + 24);
    }
    while ( (int)++v35 < v34 );
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)Instance,
          (System_Collections_Generic_List_BattleLogicTask__o *)v30,
          1,
          0LL),
        !v30) )
  {
LABEL_40:
    sub_B5D69C(Instance, v32);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  SkillLvMaster_o *v13; // x21
  BattleLogicNomal_o *v15; // x25
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w19
  int v26; // w9
  _BOOL8 v27; // x0
  __int64 v28; // x1
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x1
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v37; // x1
  SkillLvEntity_o *v38; // x26
  BattleLogicFunction_o *logicfunction; // x27
  int v40; // w23
  BattleLogicFunction_FunctionArgument_o *argument; // x19
  BattleLogicNomal_o *v42; // x21
  BattleActionData_o *v43; // x25
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x20
  BattleActionData_o *v46; // x28
  DataVals_array *DataValsList; // x0
  __int64 v48; // x1
  BattleLogicFunction_o *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  SkillLvMaster_o *v52; // [xsp+38h] [xbp-98h]
  int32_t type; // [xsp+40h] [xbp-90h]
  _BOOL4 v54; // [xsp+44h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+60h] [xbp-70h] BYREF

  v13 = skillLvMst;
  v15 = this;
  v54 = isCommandAfter;
  if ( (byte_42EBE85 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)checkInvokeBuff,
      (_DWORD)skillLvMst,
      command);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v19, v20, v21);
    this = (BattleLogicNomal_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v22,
                                   v23,
                                   v24);
    byte_42EBE85 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( !commandCodeBuffList )
    sub_B5D69C(this, checkInvokeBuff);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)commandCodeBuffList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v25 = arg == 0LL || !v54;
  if ( v54 )
    v26 = 1;
  else
    v26 = 3;
  type = v26;
  v56 = v55;
  v52 = v13;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v27 )
      break;
    if ( !command )
      sub_B5D69C(v27, v28);
    current = (BattleBuffData_BuffData_o *)v56.fields.current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_B5D69C(IsEnableCommandCode, v31);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_B5D69C(IsEnableCommandCode, v31);
    v32 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v32 & 1) != 0 )
    {
      if ( (v25 & 1) != 0 )
      {
        if ( !current )
          sub_B5D69C(v32, v33);
        vals = current->fields.vals;
        if ( !vals )
          sub_B5D69C(v32, v33);
        max_length = vals->max_length;
        if ( !max_length )
        {
          v50 = sub_B5D6C8(v32);
          sub_B5D668(v50, 0LL);
        }
        if ( max_length == 1 )
        {
          v51 = sub_B5D6C8(v32);
          sub_B5D668(v51, 0LL);
        }
        if ( !v13 )
          sub_B5D69C(v32, v33);
        Entity = SkillLvMaster__GetEntity(v13, vals->m_Items[1], vals->m_Items[2], 0LL);
        v38 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_B5D69C(Entity, v37);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_B5D69C(Entity, v37);
          logicfunction = v15->fields.logicfunction;
          v40 = v25;
          argument = (BattleLogicFunction_FunctionArgument_o *)arg;
          v42 = v15;
          v43 = actionData;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v38->fields.funcId;
          v46 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v38, 0LL);
          if ( !logicfunction )
            sub_B5D69C(DataValsList, v48);
          BattleLogicFunction__procList(
            logicfunction,
            v46,
            funcId,
            DataValsList,
            0,
            0,
            v54,
            0,
            0,
            0,
            0,
            argument,
            0,
            0LL);
          arg = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)argument;
          v25 = v40;
          actionData = v43;
          v15 = v42;
          v13 = v52;
        }
      }
      else
      {
        v49 = v15->fields.logicfunction;
        if ( !v49 )
          sub_B5D69C(0LL, v33);
        BattleLogicFunction__SetSideEffectBuff(
          v49,
          v13,
          actionData,
          current,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
          1,
          0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleActionData_o *__fastcall BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1

  if ( (byte_42EBE73 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8879/*"MOTION_BACK"*/, v5, v6, v7);
    byte_42EBE73 = 1;
  }
  v8 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_DWORD *)(v8 + 32) = uniqueId;
  v17 = (System_Int32_array **)StringLiteral_8879/*"MOTION_BACK"*/;
  *(_QWORD *)(v8 + 64) = StringLiteral_8879/*"MOTION_BACK"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 64), v17, v11, v12, v13, v14, v15, v16);
  return (BattleActionData_o *)v8;
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
            v12 = sub_B5D6C8(data);
            sub_B5D668(v12, 0LL);
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
    sub_B5D69C(data, task);
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 data; // x0
  struct BattleData_o *v18; // x8
  __int64 v19; // x10
  __int64 v20; // x20
  _BOOL4 v21; // w9
  unsigned __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w21
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x19
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x20
  Il2CppObject *v28; // x21
  struct BattleLogicNomal___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v37; // x0

  if ( (byte_42EBE7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AiNpcBattleServantData___ctor__, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_AiNpcBattleServantData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__, v11, v12, v13);
    sub_B5D5C4(&BattleLogicNomal___c_TypeInfo, v14, v15, v16);
    byte_42EBE7F = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0LL);
  if ( !data )
    goto LABEL_33;
  v18 = this->fields.data;
  v19 = *(_QWORD *)(data + 24);
  v20 = data;
  v21 = v18 == 0LL;
  if ( (int)v19 >= 1 )
  {
    v22 = 0LL;
    v23 = data + 32;
    while ( !v21 )
    {
      if ( v22 >= (unsigned int)v19 )
        goto LABEL_34;
      data = (__int64)v18->fields.battleEvent;
      if ( !data )
        break;
      data = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)data + 872LL))(
               data,
               *(_QWORD *)(v23 + 8 * v22),
               *(_QWORD *)(*(_QWORD *)data + 880LL));
      if ( (data & 1) != 0 )
      {
        if ( v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v23 + 8 * v22);
        if ( !data )
          break;
        data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_34;
        v24 = data;
        data = *(_QWORD *)(v23 + 8 * v22);
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v23 + 8 * v22);
        if ( !data )
          break;
        data = BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v24, 1, 0LL);
        if ( (data & 1) != 0 )
        {
          if ( v22 >= *(unsigned int *)(v20 + 24) )
          {
LABEL_34:
            v37 = sub_B5D6C8(data);
            sub_B5D668(v37, 0LL);
          }
          data = *(_QWORD *)(v23 + 8 * v22);
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v18 = this->fields.data;
      LODWORD(v19) = *(_DWORD *)(v20 + 24);
      ++v22;
      v21 = v18 == 0LL;
      if ( (__int64)v22 >= (int)v19 )
        goto LABEL_22;
    }
LABEL_33:
    sub_B5D69C(data, task);
  }
LABEL_22:
  if ( v21 )
    goto LABEL_33;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v18->fields.aiNpcDataList;
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__36_0,
      v28,
      Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__,
      (const MethodInfo_258B320 *)Method_System_Action_AiNpcBattleServantData___ctor__);
    v29 = BattleLogicNomal___c_TypeInfo->static_fields;
    v29->__9__36_0 = (struct System_Action_AiNpcBattleServantData__o *)_9__36_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v29->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)_9__36_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 isBUSTER; // x0
  System_Int32_array **v26; // x1
  struct System_Int32_array *targetIdlist; // x23
  __int64 v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w8
  BattleServantConfConponent_o *v36; // x0
  System_Array_o *v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 *v44; // x8
  System_Int32_array **v45; // x1
  __int64 v46; // x8
  char v47; // w21
  unsigned __int64 v48; // x22
  System_Array_o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  System_RuntimeFieldHandle_o v58; // 0:w1.4
  System_RuntimeFieldHandle_o v59; // 0:w1.4

  if ( (byte_42EBE74 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&FunctionEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v15,
      v16,
      v17);
    sub_B5D5C4(&StringLiteral_6428/*"FIELD_PLAYER"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_6427/*"FIELD_ENEMY"*/, v21, v22, v23);
    byte_42EBE74 = 1;
  }
  v24 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v24, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v28 = sub_B5D694(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v28, 0LL);
  if ( BattleCommand__isARTS(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v24, 0LL);
    isBUSTER = sub_B5D5DC(int___TypeInfo, 2LL);
    if ( isBUSTER )
    {
      v35 = *(_DWORD *)(isBUSTER + 24);
      v26 = (System_Int32_array **)isBUSTER;
      if ( !v35 || (*(_DWORD *)(isBUSTER + 32) = 102, v35 == 1) )
      {
LABEL_30:
        v57 = sub_B5D6C8(isBUSTER);
        sub_B5D668(v57, 0LL);
      }
      *(_DWORD *)(isBUSTER + 36) = 1;
      if ( v28 )
      {
        *(_QWORD *)(v28 + 32) = isBUSTER;
        v36 = (BattleServantConfConponent_o *)(v28 + 32);
LABEL_14:
        sub_B5D560(v36, v26, v29, v30, v31, v32, v33, v34);
        v44 = &StringLiteral_6428/*"FIELD_PLAYER"*/;
LABEL_15:
        v45 = (System_Int32_array **)*v44;
        *(_QWORD *)(v24 + 64) = *v44;
        sub_B5D560((BattleServantConfConponent_o *)(v24 + 64), v45, v38, v39, v40, v41, v42, v43);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_B5D69C(isBUSTER, v26);
  }
  if ( BattleCommand__isQUICK(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v24, 0LL);
    v37 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 3LL);
    v58.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v37, v58, 0LL);
    if ( !v28 )
      goto LABEL_29;
    *(_QWORD *)(v28 + 32) = v37;
    v36 = (BattleServantConfConponent_o *)(v28 + 32);
    v26 = (System_Int32_array **)v37;
    goto LABEL_14;
  }
  isBUSTER = BattleCommand__isBUSTER(task->fields.ordertype, 0LL);
  if ( (isBUSTER & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v24, 0LL);
    v50 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 3LL);
    v59.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v50, v59, 0LL);
    if ( v28 )
    {
      *(_QWORD *)(v28 + 32) = v50;
      sub_B5D560((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
      v44 = &StringLiteral_6427/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v46 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v46 < 1 )
    return 0LL;
  v47 = 0;
  v48 = 0LL;
  do
  {
    if ( v48 >= (unsigned int)v46 )
      goto LABEL_30;
    isBUSTER = (__int64)this->fields.data;
    if ( !isBUSTER )
      goto LABEL_29;
    isBUSTER = (__int64)BattleData__getServantData((BattleData_o *)isBUSTER, targetIdlist->m_Items[v48 + 1], 0LL);
    LODWORD(v46) = targetIdlist->max_length;
    ++v48;
    v47 |= isBUSTER != 0;
  }
  while ( (__int64)v48 < (int)v46 );
  if ( (v47 & 1) != 0 )
    return (BattleActionData_o *)v24;
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
    sub_B5D69C(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  __int64 v86; // x24
  __int64 Instance; // x0
  __int64 v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v96; // x21
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v104; // x20
  BattleData_o *data; // x8
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Collections_Generic_List_int__o *v113; // x26
  int v114; // w8
  __int64 v115; // x28
  unsigned int v116; // w19
  __int64 v117; // x25
  __int64 *v118; // x25
  __int64 v119; // t1
  __int64 v120; // x20
  int v121; // w8
  unsigned int v122; // w25
  __int64 v123; // x27
  __int64 v124; // x8
  __int64 v125; // x27
  __int64 v126; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v128; // x8
  int32_t v129; // w9
  BattleLogicNomal_o *v130; // x19
  struct BattleData_o *v131; // x8
  __int64 v132; // x28
  int v133; // w8
  unsigned int v134; // w19
  __int64 v135; // x22
  __int64 *v136; // x22
  __int64 v137; // t1
  bool v138; // w3
  char v139; // w20
  __int64 v140; // x20
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v142; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v144; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v146; // x23
  BattleLogicNomal_o *v147; // x23
  struct BattleData_o *v148; // x8
  const MethodInfo *v149; // x2
  struct BattleData_o *v150; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v154; // w22
  char v155; // w19
  BattleBuffData_BuffData_o *v156; // x20
  WarEntity_o *v157; // x0
  __int64 v158; // x1
  BattleSkillInfoData_o *v159; // x26
  __int64 v160; // x0
  __int64 v161; // x1
  struct System_Int32_array *vals; // x8
  __int64 v163; // x0
  __int64 v164; // x1
  struct System_Int32_array *v165; // x8
  BattleData_o *v166; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v168; // x1
  SkillLvEntity_o *v169; // x0
  __int64 v170; // x1
  SkillLvEntity_o *v171; // x28
  BattleData_o *v172; // x0
  _BOOL8 v173; // x0
  __int64 v174; // x1
  BattleLogic_o *v175; // x0
  int32_t v176; // w23
  __int64 v177; // x0
  __int64 v178; // x1
  System_Int32_array *TargetIds; // x20
  BattleLogicNomal_o *v180; // x23
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v183; // x0
  __int64 v184; // x1
  const MethodInfo *v185; // x7
  System_Collections_ICollection_o *v186; // x0
  __int64 v187; // x1
  BattleLogicTask_array *v188; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v190; // x3
  BattleLogicTask_o *v191; // x0
  BattleLogic_o *v192; // x0
  __int64 v193; // x1
  BattleData_o *v194; // x0
  int32_t v195; // w23
  Il2CppObject *v196; // x28
  BattleServantData_o *isEndAct; // x0
  __int64 v198; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v200; // x20
  int v201; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v203; // x26
  BattleSkillInfoData_o *v204; // x25
  __int64 v205; // x0
  __int64 v206; // x1
  struct System_Int32_array *v207; // x8
  __int64 v208; // x0
  __int64 v209; // x1
  struct System_Int32_array *v210; // x8
  BattleData_o *v211; // x0
  BattleServantData_o *v212; // x20
  __int64 v213; // x1
  SkillLvEntity_o *v214; // x0
  __int64 v215; // x1
  SkillLvEntity_o *v216; // x27
  BattleData_o *v217; // x0
  _BOOL8 v218; // x0
  __int64 v219; // x1
  BattleLogic_o *v220; // x0
  int32_t v221; // w27
  __int64 v222; // x0
  __int64 v223; // x1
  System_Int32_array *v224; // x20
  bool v225; // w26
  BattleLogicSkill_o *v226; // x27
  System_Int32_array *v227; // x0
  __int64 v228; // x1
  const MethodInfo *v229; // x7
  BattleLogicTask_array *v230; // x1
  BattleLogic_o *v231; // x0
  int v232; // w19
  BattleActionData_o *v233; // x1
  __int64 v235; // x0
  __int64 v236; // x0
  __int64 v237; // x0
  __int64 v238; // x0
  __int64 v239; // x0
  __int64 v240; // x0
  __int64 v241; // x0
  __int64 v242; // x0
  __int64 v243; // x0
  __int64 v244; // x0
  __int64 v245; // x0
  __int64 v246; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v247; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v248; // [xsp+8h] [xbp-F8h]
  BattleActionData_o *baseActData; // [xsp+18h] [xbp-E8h]
  char v250; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v251; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v252; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v253; // [xsp+38h] [xbp-C8h] BYREF
  int v254[2]; // [xsp+60h] [xbp-A0h]
  int v255; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v256; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42EBE7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AiNpcBattleServantData___ctor__, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_AiNpcBattleServantData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleActionData_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v38, v39, v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__,
      v41,
      v42,
      v43);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v44,
      v45,
      v46);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v47,
      v48,
      v49);
    sub_B5D5C4(&int___TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v53, v54, v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v68, v69, v70);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v74, v75, v76);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__, v77, v78, v79);
    sub_B5D5C4(&BattleLogicNomal___c__DisplayClass34_0_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_8889/*"MOTION_ENEMY_TURN_END"*/, v83, v84, v85);
    byte_42EBE7D = 1;
  }
  entity = 0LL;
  memset(&v256, 0, sizeof(v256));
  v255 = 0;
  v86 = sub_B5D694(BattleLogicNomal___c__DisplayClass34_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass34_0___ctor((BattleLogicNomal___c__DisplayClass34_0_o *)v86, 0LL);
  if ( !v86 )
    goto LABEL_209;
  *(_QWORD *)(v86 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v86 + 32), (System_Int32_array **)this, v89, v90, v91, v92, v93, v94);
  v95 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v95, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v86 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_209;
  v96 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_209;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !v95 )
    goto LABEL_209;
  BattleActionData__setStateField((BattleActionData_o *)v95, 0LL);
  baseActData = (BattleActionData_o *)v95;
  v97 = (System_Int32_array **)StringLiteral_8889/*"MOTION_ENEMY_TURN_END"*/;
  *(_QWORD *)(v95 + 64) = StringLiteral_8889/*"MOTION_ENEMY_TURN_END"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v95 + 64), v97, v98, v99, v100, v101, v102, v103);
  v248 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v248,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v104 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v104,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v251 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_209;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v86 + 24) = QuestIndividualities;
  sub_B5D560((BattleServantConfConponent_o *)(v86 + 24), QuestIndividualities, v107, v108, v109, v110, v111, v112);
  v113 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v113,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_209;
  v247 = v104;
  v252 = this;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_209;
  v114 = *(_DWORD *)(Instance + 24);
  v115 = Instance;
  if ( v114 >= 1 )
  {
    v116 = 0;
    while ( 1 )
    {
      if ( v116 >= v114 )
        goto LABEL_214;
      v117 = v115 + 8LL * (int)v116;
      v119 = *(_QWORD *)(v117 + 32);
      v118 = (__int64 *)(v117 + 32);
      Instance = v119;
      if ( !v119 )
        goto LABEL_209;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v86 + 16),
                              *(System_Int32_array **)(v86 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v116 >= *(_DWORD *)(v115 + 24) )
          goto LABEL_214;
        v120 = Instance;
        Instance = *v118;
        if ( !*v118 )
          goto LABEL_209;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v116 >= *(_DWORD *)(v115 + 24) )
            goto LABEL_214;
          Instance = *v118;
          if ( !*v118 )
            goto LABEL_209;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v120 )
              goto LABEL_209;
            if ( *(_QWORD *)(v120 + 24) )
            {
              if ( v116 >= *(_DWORD *)(v115 + 24) )
                goto LABEL_214;
              Instance = (__int64)v248;
              if ( !*v118 || !v248 )
                goto LABEL_209;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v248,
                *(_DWORD *)(*v118 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v120,
                (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v116 >= *(_DWORD *)(v115 + 24) )
          goto LABEL_214;
        if ( !*v118 )
          goto LABEL_209;
        if ( !v113 )
          goto LABEL_209;
        System_Collections_Generic_List_int___Add(
          v113,
          *(_DWORD *)(*v118 + 24),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v120 )
          goto LABEL_209;
        v121 = *(_DWORD *)(v120 + 24);
        if ( v121 >= 1 )
          break;
      }
LABEL_48:
      v114 = *(_DWORD *)(v115 + 24);
      if ( (int)++v116 >= v114 )
        goto LABEL_49;
    }
    v122 = 0;
    while ( v122 < v121 )
    {
      v123 = v120 + 8LL * (int)v122;
      v126 = *(_QWORD *)(v123 + 32);
      v125 = v123 + 32;
      v124 = v126;
      if ( !v126 || !v96 )
        goto LABEL_209;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v96,
                   &entity,
                   *(_DWORD *)(v124 + 16),
                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v128 = logic->fields.data;
          if ( !v128 )
            goto LABEL_209;
          if ( v122 >= *(_DWORD *)(v120 + 24) )
            break;
          if ( !*(_QWORD *)v125 )
            goto LABEL_209;
          v129 = *(_DWORD *)(*(_QWORD *)v125 + 28LL);
          if ( v128->fields.endMasterSkillTurnBuffValue <= v129 )
            v128->fields.endMasterSkillTurnBuffValue = v129;
        }
      }
      v121 = *(_DWORD *)(v120 + 24);
      if ( (int)++v122 >= v121 )
        goto LABEL_48;
    }
LABEL_214:
    v237 = sub_B5D6C8(Instance);
    sub_B5D668(v237, 0LL);
  }
LABEL_49:
  v130 = this;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v131 = this->fields.data;
  if ( !v131 )
    goto LABEL_209;
  v132 = Instance;
  if ( v131->fields.leaderDown && v131->fields.endbattleFlg )
  {
    v250 = 0;
    if ( !v113 )
      goto LABEL_209;
    goto LABEL_107;
  }
  if ( !Instance )
    goto LABEL_209;
  v133 = *(_DWORD *)(Instance + 24);
  if ( v133 >= 1 )
  {
    v250 = 0;
    v134 = 0;
    while ( v134 < v133 )
    {
      v135 = v132 + 8LL * (int)v134;
      v137 = *(_QWORD *)(v135 + 32);
      v136 = (__int64 *)(v135 + 32);
      Instance = v137;
      if ( !v137 )
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
          v138 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_209;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
          v138 = Instance & 1;
        }
        if ( v134 >= *(_DWORD *)(v132 + 24) )
          goto LABEL_214;
        Instance = *v136;
        if ( !*v136 )
          goto LABEL_209;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v86 + 24),
                     this->fields.logic,
                     v138,
                     baseActData,
                     0LL);
        if ( v134 >= *(_DWORD *)(v132 + 24) )
          goto LABEL_214;
        v139 = Instance;
        Instance = *v136;
        if ( !*v136 )
          goto LABEL_209;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v134 >= *(_DWORD *)(v132 + 24) )
            goto LABEL_214;
          Instance = *v136;
          if ( !*v136 )
            goto LABEL_209;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_209;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v134 >= *(_DWORD *)(v132 + 24) )
              goto LABEL_214;
            if ( !*v136 || !v247 )
              goto LABEL_209;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v247,
              *(_DWORD *)(*v136 + 24),
              (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
              (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v134 >= *(_DWORD *)(v132 + 24) )
          goto LABEL_214;
        if ( !*v136 )
          goto LABEL_209;
        Instance = *(_QWORD *)(*v136 + 760);
        if ( !Instance )
          goto LABEL_209;
        v250 |= v139;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v134 >= *(_DWORD *)(v132 + 24) )
        goto LABEL_214;
      Instance = *v136;
      if ( !*v136 )
        goto LABEL_209;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v86 + 16),
                              *(System_Int32_array **)(v86 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v134 >= *(_DWORD *)(v132 + 24) )
          goto LABEL_214;
        v140 = Instance;
        Instance = *v136;
        if ( !*v136 )
          goto LABEL_209;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v134 >= *(_DWORD *)(v132 + 24) )
            goto LABEL_214;
          Instance = *v136;
          if ( !*v136 )
            goto LABEL_209;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v140 )
              goto LABEL_209;
            if ( *(_QWORD *)(v140 + 24) )
            {
              if ( v134 >= *(_DWORD *)(v132 + 24) )
                goto LABEL_214;
              Instance = (__int64)v248;
              if ( !*v136 || !v248 )
                goto LABEL_209;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v248,
                *(_DWORD *)(*v136 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v140,
                (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v134 >= *(_DWORD *)(v132 + 24) )
          goto LABEL_214;
        if ( !*v136 || !v113 )
          goto LABEL_209;
        System_Collections_Generic_List_int___Add(
          v113,
          *(_DWORD *)(*v136 + 24),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      v133 = *(_DWORD *)(v132 + 24);
      if ( (int)++v134 >= v133 )
        goto LABEL_105;
    }
    goto LABEL_214;
  }
  v250 = 0;
LABEL_105:
  v130 = this;
  v131 = this->fields.data;
  if ( !v131 || !v113 )
LABEL_209:
    sub_B5D69C(Instance, v88);
LABEL_107:
  battleEvent = v131->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v113,
                        (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_209;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v86 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v142 = v130->fields.data;
  if ( !v142 )
    goto LABEL_209;
  perf = v142->fields.perf;
  if ( !perf )
    goto LABEL_209;
  Instance = (__int64)v142->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_209;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v144 = v130->fields.data;
  if ( !v144 )
    goto LABEL_209;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v144->fields.aiNpcDataList;
  v146 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v146,
    (Il2CppObject *)v86,
    Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_209;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v146,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v147 = v252;
  v148 = v252->fields.data;
  if ( !v148 )
    goto LABEL_209;
  Instance = (__int64)v148->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_209;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    v252->fields.logic,
    *(_BYTE *)(v86 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(v252, *(System_Int32_array **)(v86 + 24), v149);
  v150 = v252->fields.data;
  if ( !v150 )
    goto LABEL_209;
  v150->fields.currentTurn = 0;
  if ( !v247 )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v253,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v247,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v256 = v253;
  while ( 1 )
  {
    v157 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v256,
                            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v157 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v256.fields.current.fields.value;
    if ( !v256.fields.current.fields.value )
      sub_B5D69C(v157, v158);
    monitor = (int)v256.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v256.fields.current.fields.key;
      v154 = 0;
      v155 = 1;
LABEL_121:
      if ( v154 >= monitor )
      {
        v236 = sub_B5D6C8(v157);
        sub_B5D668(v236, 0LL);
      }
      v156 = value->m_Items[v154];
      if ( !v156 )
        sub_B5D69C(v157, v158);
      if ( v156->fields._isRemove )
        goto LABEL_157;
      if ( !v96 )
        sub_B5D69C(v157, v158);
      v157 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v96,
               v156->fields.buffId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v157 )
        goto LABEL_157;
      v159 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v159, 0LL);
      if ( !v159 )
        sub_B5D69C(v160, v161);
      v159->fields.svtUniqueId = key;
      vals = v156->fields.vals;
      if ( !vals )
        sub_B5D69C(v160, v161);
      if ( !vals->max_length )
      {
        v238 = sub_B5D6C8(v160);
        sub_B5D668(v238, 0LL);
      }
      v163 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v159->klass->vtable._4_set_skillId.method)(
               v159,
               (unsigned int)vals->m_Items[1],
               v159->klass->vtable._5_get_skillId.methodPtr);
      v165 = v156->fields.vals;
      if ( !v165 )
        sub_B5D69C(v163, v164);
      if ( v165->max_length <= 1 )
      {
        v239 = sub_B5D6C8(v163);
        sub_B5D668(v239, 0LL);
      }
      v159->fields.skilllv = v165->m_Items[2];
      v166 = v147->fields.data;
      if ( !v166 )
        sub_B5D69C(0LL, v164);
      ServantData = BattleData__getServantData(v166, v159->fields.svtUniqueId, 0LL);
      v168 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v159->klass->vtable._5_get_skillId.method)(
               v159,
               v159->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v251 )
        sub_B5D69C(0LL, v168);
      v169 = SkillLvMaster__GetEntity(v251, v168, v159->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B5D69C(v169, v170);
      v171 = v169;
      v172 = v147->fields.data;
      if ( !v172 )
        sub_B5D69C(0LL, v170);
      v173 = BattleData__checkAliveOther(v172, ServantData->fields.uniqueId, 0LL);
      if ( !v173 )
      {
        if ( !v171 )
          sub_B5D69C(v173, v174);
        v175 = v147->fields.logic;
        if ( !v175 )
          sub_B5D69C(0LL, v174);
        v157 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v175, v171->fields.funcId, 0LL);
        if ( ((unsigned __int8)v157 & 1) == 0 )
          goto LABEL_157;
      }
      v176 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v156, 0LL);
      if ( (v176 & 0x80000000) != 0 )
      {
        v180 = v252;
        TargetIds = Target__getTargetIds(v252->fields.data, v159->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v159, 0LL);
      }
      else
      {
        v177 = sub_B5D5DC(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v177;
        if ( !v177 )
          sub_B5D69C(0LL, v178);
        if ( !*(_DWORD *)(v177 + 24) )
        {
          v241 = sub_B5D6C8(v177);
          sub_B5D668(v241, 0LL);
        }
        *(_DWORD *)(v177 + 32) = v176;
        v180 = v252;
        exists = 0;
      }
      logicskill = v180->fields.logicskill;
      v183 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v183 )
        sub_B5D69C(0LL, v184);
      if ( !v183->max_length )
      {
        v240 = sub_B5D6C8(v183);
        sub_B5D668(v240, 0LL);
      }
      v183->m_Items[1] = key;
      if ( !logicskill )
        sub_B5D69C(v183, v184);
      v186 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v159,
                                                   v183,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v185);
      v147 = v252;
      v188 = (BattleLogicTask_array *)v186;
      if ( (v155 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v186, 0LL);
        if ( IsNullOrEmpty )
        {
          v155 = 1;
          goto LABEL_155;
        }
        if ( !v188 )
          sub_B5D69C(IsNullOrEmpty, v187);
        if ( !v188->max_length )
        {
          v246 = sub_B5D6C8(IsNullOrEmpty);
          sub_B5D668(v246, 0LL);
        }
        v191 = v188->m_Items[0];
        if ( !v191 )
          sub_B5D69C(0LL, v187);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v191, ServantData, value, v190);
      }
      v155 = 0;
LABEL_155:
      v192 = v252->fields.logic;
      if ( !v192 )
        sub_B5D69C(0LL, v187);
      BattleLogic__addBattleLogicTask(v192, v188, 0LL);
LABEL_157:
      monitor = value->max_length;
      if ( (int)++v154 >= monitor )
        continue;
      goto LABEL_121;
    }
  }
  v254[0] = 1261;
  v255 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v256,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v255 = 0;
  Instance = (__int64)v248;
  if ( !v248 )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v253,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v248,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v256 = v253;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v256,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v194 = v252->fields.data;
    if ( !v194 )
      sub_B5D69C(0LL, v193);
    v195 = (int32_t)v256.fields.current.fields.key;
    v196 = v256.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v194, (int32_t)v256.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v200 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v200,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v200 )
        sub_B5D69C(isEndAct, v198);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v200->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v196 )
      sub_B5D69C(isEndAct, v198);
    v201 = (int)v196[1].monitor;
    if ( v201 >= 1 )
    {
      for ( i = 0; i < v201; ++i )
      {
        if ( i >= (unsigned int)v201 )
        {
          v235 = sub_B5D6C8(isEndAct);
          sub_B5D668(v235, 0LL);
        }
        v203 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v196[2].klass + i);
        if ( !v203 )
          sub_B5D69C(isEndAct, v198);
        if ( !v203->fields._isRemove )
        {
          if ( !v96 )
            sub_B5D69C(isEndAct, v198);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v96,
                                              v203->fields.buffId,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v203, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v204 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v204, 0LL);
                if ( !v204 )
                  sub_B5D69C(v205, v206);
                v204->fields.svtUniqueId = v195;
                v207 = v203->fields.vals;
                if ( !v207 )
                  sub_B5D69C(v205, v206);
                if ( !v207->max_length )
                {
                  v243 = sub_B5D6C8(v205);
                  sub_B5D668(v243, 0LL);
                }
                v208 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v204->klass->vtable._4_set_skillId.method)(
                         v204,
                         (unsigned int)v207->m_Items[1],
                         v204->klass->vtable._5_get_skillId.methodPtr);
                v210 = v203->fields.vals;
                if ( !v210 )
                  sub_B5D69C(v208, v209);
                if ( v210->max_length <= 1 )
                {
                  v242 = sub_B5D6C8(v208);
                  sub_B5D668(v242, 0LL);
                }
                v204->fields.skilllv = v210->m_Items[2];
                v211 = v252->fields.data;
                if ( !v211 )
                  sub_B5D69C(0LL, v209);
                v212 = BattleData__getServantData(v211, v204->fields.svtUniqueId, 0LL);
                v213 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v204->klass->vtable._5_get_skillId.method)(
                         v204,
                         v204->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v251 )
                  sub_B5D69C(0LL, v213);
                v214 = SkillLvMaster__GetEntity(v251, v213, v204->fields.skilllv, 0LL);
                if ( !v212 )
                  sub_B5D69C(v214, v215);
                v216 = v214;
                v217 = v252->fields.data;
                if ( !v217 )
                  sub_B5D69C(0LL, v215);
                v218 = BattleData__checkAliveOther(v217, v212->fields.uniqueId, 0LL);
                if ( v218 )
                  goto LABEL_191;
                if ( !v216 )
                  sub_B5D69C(v218, v219);
                v220 = v252->fields.logic;
                if ( !v220 )
                  sub_B5D69C(0LL, v219);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v220, v216->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_191:
                  v221 = BattleServantData__GetRevengeIdCheckOpponentOnly(v212, v203, 0LL);
                  if ( (v221 & 0x80000000) != 0 )
                  {
                    v224 = Target__getTargetIds(v252->fields.data, v204->fields.svtUniqueId, -1, v195, 13, 0LL, 0LL);
                    v225 = BattleSkillInfoData__ExistsNoTargetNoActionType(v204, 0LL);
                  }
                  else
                  {
                    v222 = sub_B5D5DC(int___TypeInfo, 1LL);
                    v224 = (System_Int32_array *)v222;
                    if ( !v222 )
                      sub_B5D69C(0LL, v223);
                    if ( !*(_DWORD *)(v222 + 24) )
                    {
                      v244 = sub_B5D6C8(v222);
                      sub_B5D668(v244, 0LL);
                    }
                    v225 = 0;
                    *(_DWORD *)(v222 + 32) = v221;
                  }
                  v226 = v252->fields.logicskill;
                  v227 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
                  if ( !v227 )
                    sub_B5D69C(0LL, v228);
                  if ( !v227->max_length )
                  {
                    v245 = sub_B5D6C8(v227);
                    sub_B5D668(v245, 0LL);
                  }
                  v227->m_Items[1] = v195;
                  if ( !v226 )
                    sub_B5D69C(v227, v228);
                  v230 = BattleLogicSkill__taskSkill(v226, v204, v227, v224, 1, v225, 0, v229);
                  v231 = v252->fields.logic;
                  if ( !v231 )
                    sub_B5D69C(0LL, v230);
                  BattleLogic__addBattleLogicTask(v231, v230, 0LL);
                }
              }
            }
          }
        }
        v201 = (int)v196[1].monitor;
      }
    }
  }
  v254[0] = 1722;
  v232 = ++v255;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v256,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v232 && v254[v232 - 1] == 1722 )
    v255 = v232 - 1;
  Instance = (__int64)v252->fields.logic;
  if ( !Instance )
    goto LABEL_209;
  if ( (v250 & 1) != 0 )
    v233 = baseActData;
  else
    v233 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v233, baseActData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  __int64 v86; // x24
  __int64 Instance; // x0
  __int64 v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  const MethodInfo *v95; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v96; // x21
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Collections_Generic_List_int__o *v111; // x26
  int v112; // w8
  __int64 v113; // x28
  unsigned int v114; // w20
  __int64 v115; // x19
  __int64 *v116; // x19
  __int64 v117; // t1
  bool v118; // w3
  char v119; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *v120; // x2
  __int64 v121; // x23
  int v122; // w8
  unsigned int v123; // w19
  __int64 v124; // x22
  __int64 v125; // x8
  __int64 v126; // x22
  __int64 v127; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  int32_t v130; // w9
  struct BattleData_o *v131; // x8
  __int64 v132; // x23
  int v133; // w8
  unsigned int v134; // w19
  __int64 v135; // x25
  __int64 *v136; // x25
  __int64 v137; // t1
  __int64 v138; // x27
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v140; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v142; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v144; // x23
  BattleLogicNomal_o *v145; // x20
  struct BattleData_o *v146; // x8
  const MethodInfo *v147; // x2
  struct BattleData_o *v148; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v152; // w22
  char v153; // w19
  BattleBuffData_BuffData_o *v154; // x23
  WarEntity_o *v155; // x0
  __int64 v156; // x1
  BattleSkillInfoData_o *v157; // x26
  __int64 v158; // x0
  __int64 v159; // x1
  struct System_Int32_array *vals; // x8
  __int64 v161; // x0
  __int64 v162; // x1
  struct System_Int32_array *v163; // x8
  BattleData_o *v164; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v166; // x1
  SkillLvEntity_o *v167; // x0
  __int64 v168; // x1
  SkillLvEntity_o *v169; // x28
  BattleData_o *v170; // x0
  _BOOL8 v171; // x0
  __int64 v172; // x1
  BattleLogic_o *v173; // x0
  int32_t v174; // w20
  __int64 v175; // x0
  __int64 v176; // x1
  System_Int32_array *TargetIds; // x23
  BattleLogicNomal_o *v178; // x20
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v181; // x0
  __int64 v182; // x1
  const MethodInfo *v183; // x7
  System_Collections_ICollection_o *v184; // x0
  __int64 v185; // x1
  BattleLogicTask_array *v186; // x23
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v188; // x3
  BattleLogicTask_o *v189; // x0
  BattleLogic_o *v190; // x0
  BattleLogicNomal_o *v191; // x20
  __int64 v192; // x1
  BattleData_o *v193; // x0
  int32_t v194; // w23
  Il2CppObject *v195; // x22
  BattleServantData_o *isEndAct; // x0
  __int64 v197; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v199; // x20
  int v200; // w8
  int i; // w19
  BattleBuffData_BuffData_o *v202; // x26
  BattleSkillInfoData_o *v203; // x25
  __int64 v204; // x0
  __int64 v205; // x1
  struct System_Int32_array *v206; // x8
  __int64 v207; // x0
  __int64 v208; // x1
  struct System_Int32_array *v209; // x8
  BattleData_o *v210; // x0
  BattleServantData_o *v211; // x27
  __int64 v212; // x1
  SkillLvEntity_o *v213; // x0
  __int64 v214; // x1
  SkillLvEntity_o *v215; // x28
  BattleData_o *v216; // x0
  _BOOL8 v217; // x0
  __int64 v218; // x1
  BattleLogic_o *v219; // x0
  int32_t v220; // w20
  __int64 v221; // x0
  __int64 v222; // x1
  System_Int32_array *v223; // x26
  BattleLogicNomal_o *v224; // x20
  bool v225; // w27
  BattleLogicSkill_o *v226; // x20
  System_Int32_array *v227; // x0
  __int64 v228; // x1
  const MethodInfo *v229; // x7
  BattleLogicTask_array *v230; // x1
  BattleLogic_o *v231; // x0
  int v232; // w19
  BattleActionData_o *v233; // x1
  __int64 v235; // x0
  __int64 v236; // x0
  __int64 v237; // x0
  __int64 v238; // x0
  __int64 v239; // x0
  __int64 v240; // x0
  __int64 v241; // x0
  __int64 v242; // x0
  __int64 v243; // x0
  __int64 v244; // x0
  __int64 v245; // x0
  __int64 v246; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v247; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v248; // [xsp+10h] [xbp-F0h]
  BattleActionData_o *actiondata; // [xsp+18h] [xbp-E8h]
  char v250; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v251; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v252; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v253; // [xsp+38h] [xbp-C8h] BYREF
  int v254[2]; // [xsp+60h] [xbp-A0h]
  int v255; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v256; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42EBE7A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AiNpcBattleServantData___ctor__, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_AiNpcBattleServantData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleActionData_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v38, v39, v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__,
      v41,
      v42,
      v43);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v44,
      v45,
      v46);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v47,
      v48,
      v49);
    sub_B5D5C4(&int___TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v53, v54, v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v68, v69, v70);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v74, v75, v76);
    sub_B5D5C4(&Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__, v77, v78, v79);
    sub_B5D5C4(&BattleLogicNomal___c__DisplayClass31_0_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_8893/*"MOTION_PLAYER_TURN_END"*/, v83, v84, v85);
    byte_42EBE7A = 1;
  }
  v252 = this;
  entity = 0LL;
  memset(&v256, 0, sizeof(v256));
  v255 = 0;
  v86 = sub_B5D694(BattleLogicNomal___c__DisplayClass31_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass31_0___ctor((BattleLogicNomal___c__DisplayClass31_0_o *)v86, 0LL);
  if ( !v86 )
    goto LABEL_207;
  *(_QWORD *)(v86 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v86 + 32), (System_Int32_array **)this, v89, v90, v91, v92, v93, v94);
  BattleLogicNomal__SetNextTargetId(this, v95);
  actiondata = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v86 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_207;
  v96 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_207;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_207;
  BattleActionData__setStateField(actiondata, 0LL);
  v97 = (System_Int32_array **)StringLiteral_8893/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8893/*"MOTION_PLAYER_TURN_END"*/;
  sub_B5D560((BattleServantConfConponent_o *)&actiondata->fields.motionname, v97, v98, v99, v100, v101, v102, v103);
  v248 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v248,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v247 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v247,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v251 = (SkillLvMaster_o *)Instance;
  if ( !this->fields.data )
    goto LABEL_207;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(this->fields.data, 0LL);
  *(_QWORD *)(v86 + 24) = QuestIndividualities;
  sub_B5D560((BattleServantConfConponent_o *)(v86 + 24), QuestIndividualities, v105, v106, v107, v108, v109, v110);
  v111 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v111,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_207;
  v112 = *(_DWORD *)(Instance + 24);
  v113 = Instance;
  if ( v112 >= 1 )
  {
    v250 = 0;
    v114 = 0;
    while ( 1 )
    {
      if ( v114 >= v112 )
        goto LABEL_212;
      v115 = v113 + 8LL * (int)v114;
      v117 = *(_QWORD *)(v115 + 32);
      v116 = (__int64 *)(v115 + 32);
      Instance = v117;
      if ( !v117 )
        goto LABEL_207;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v252->fields.data;
        if ( !Instance )
          goto LABEL_207;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v118 = 1;
        }
        else
        {
          Instance = (__int64)v252->fields.data;
          if ( !Instance )
            goto LABEL_207;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v118 = Instance & 1;
        }
        if ( v114 >= *(_DWORD *)(v113 + 24) )
          goto LABEL_212;
        Instance = *v116;
        if ( !*v116 )
          goto LABEL_207;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v86 + 24),
                     v252->fields.logic,
                     v118,
                     actiondata,
                     0LL);
        if ( v114 >= *(_DWORD *)(v113 + 24) )
          goto LABEL_212;
        v119 = Instance;
        Instance = *v116;
        if ( !*v116 )
          goto LABEL_207;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v114 >= *(_DWORD *)(v113 + 24) )
            goto LABEL_212;
          Instance = *v116;
          if ( !*v116 )
            goto LABEL_207;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_207;
          v120 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v114 >= *(_DWORD *)(v113 + 24) )
              goto LABEL_212;
            Instance = (__int64)v247;
            if ( !*v116 || !v247 )
              goto LABEL_207;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v247,
              *(_DWORD *)(*v116 + 24),
              v120,
              (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v114 >= *(_DWORD *)(v113 + 24) )
          goto LABEL_212;
        if ( !*v116 )
          goto LABEL_207;
        Instance = *(_QWORD *)(*v116 + 760);
        if ( !Instance )
          goto LABEL_207;
        v250 |= v119;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v114 >= *(_DWORD *)(v113 + 24) )
        goto LABEL_212;
      Instance = *v116;
      if ( !*v116 )
        goto LABEL_207;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v86 + 16),
                              *(System_Int32_array **)(v86 + 24),
                              v252->fields.logic,
                              0LL,
                              0LL);
        if ( v114 >= *(_DWORD *)(v113 + 24) )
          goto LABEL_212;
        v121 = Instance;
        Instance = *v116;
        if ( !*v116 )
          goto LABEL_207;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v114 >= *(_DWORD *)(v113 + 24) )
            goto LABEL_212;
          Instance = *v116;
          if ( !*v116 )
            goto LABEL_207;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v121 )
              goto LABEL_207;
            if ( *(_QWORD *)(v121 + 24) )
            {
              if ( v114 >= *(_DWORD *)(v113 + 24) )
                goto LABEL_212;
              Instance = (__int64)v248;
              if ( !*v116 || !v248 )
                goto LABEL_207;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v248,
                *(_DWORD *)(*v116 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v121,
                (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v114 >= *(_DWORD *)(v113 + 24) )
          goto LABEL_212;
        if ( !*v116 )
          goto LABEL_207;
        if ( !v111 )
          goto LABEL_207;
        System_Collections_Generic_List_int___Add(
          v111,
          *(_DWORD *)(*v116 + 24),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v121 )
          goto LABEL_207;
        v122 = *(_DWORD *)(v121 + 24);
        if ( v122 >= 1 )
          break;
      }
LABEL_73:
      v112 = *(_DWORD *)(v113 + 24);
      if ( (int)++v114 >= v112 )
        goto LABEL_76;
    }
    v123 = 0;
    while ( v123 < v122 )
    {
      v124 = v121 + 8LL * (int)v123;
      v127 = *(_QWORD *)(v124 + 32);
      v126 = v124 + 32;
      v125 = v127;
      if ( !v127 || !v96 )
        goto LABEL_207;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v96,
                   &entity,
                   *(_DWORD *)(v125 + 16),
                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_207;
        Instance = BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( (Instance & 1) != 0 )
        {
          logic = v252->fields.logic;
          if ( !logic )
            goto LABEL_207;
          data = logic->fields.data;
          if ( !data )
            goto LABEL_207;
          if ( v123 >= *(_DWORD *)(v121 + 24) )
            break;
          if ( !*(_QWORD *)v126 )
            goto LABEL_207;
          v130 = *(_DWORD *)(*(_QWORD *)v126 + 28LL);
          if ( data->fields.endMasterSkillTurnBuffValue <= v130 )
            data->fields.endMasterSkillTurnBuffValue = v130;
        }
      }
      v122 = *(_DWORD *)(v121 + 24);
      if ( (int)++v123 >= v122 )
        goto LABEL_73;
    }
LABEL_212:
    v237 = sub_B5D6C8(Instance);
    sub_B5D668(v237, 0LL);
  }
  v250 = 0;
LABEL_76:
  Instance = (__int64)v252->fields.data;
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v131 = v252->fields.data;
  if ( !v131 )
    goto LABEL_207;
  v132 = Instance;
  if ( !v131->fields.leaderDown || !v131->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_207;
    v133 = *(_DWORD *)(Instance + 24);
    if ( v133 >= 1 )
    {
      v134 = 0;
      while ( v134 < v133 )
      {
        v135 = v132 + 8LL * (int)v134;
        v137 = *(_QWORD *)(v135 + 32);
        v136 = (__int64 *)(v135 + 32);
        Instance = v137;
        if ( !v137 )
          goto LABEL_207;
        if ( *(_BYTE *)(Instance + 516) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v86 + 16),
                                *(System_Int32_array **)(v86 + 24),
                                v252->fields.logic,
                                0LL,
                                0LL);
          if ( v134 >= *(_DWORD *)(v132 + 24) )
            goto LABEL_212;
          v138 = Instance;
          Instance = *v136;
          if ( !*v136 )
            goto LABEL_207;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v134 >= *(_DWORD *)(v132 + 24) )
              goto LABEL_212;
            Instance = *v136;
            if ( !*v136 )
              goto LABEL_207;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v138 )
                goto LABEL_207;
              if ( *(_QWORD *)(v138 + 24) )
              {
                if ( v134 >= *(_DWORD *)(v132 + 24) )
                  goto LABEL_212;
                Instance = (__int64)v248;
                if ( !*v136 || !v248 )
                  goto LABEL_207;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v248,
                  *(_DWORD *)(*v136 + 24),
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v138,
                  (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v134 >= *(_DWORD *)(v132 + 24) )
            goto LABEL_212;
          if ( !*v136 || !v111 )
            goto LABEL_207;
          System_Collections_Generic_List_int___Add(
            v111,
            *(_DWORD *)(*v136 + 24),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        v133 = *(_DWORD *)(v132 + 24);
        if ( (int)++v134 >= v133 )
          goto LABEL_103;
      }
      goto LABEL_212;
    }
LABEL_103:
    v131 = v252->fields.data;
    if ( !v131 )
      goto LABEL_207;
  }
  if ( !v111 )
    goto LABEL_207;
  battleEvent = v131->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v111,
                        (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_207;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v86 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v140 = v252->fields.data;
  if ( !v140 )
    goto LABEL_207;
  perf = v140->fields.perf;
  if ( !perf )
    goto LABEL_207;
  Instance = (__int64)v140->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_207;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v142 = v252->fields.data;
  if ( !v142 )
    goto LABEL_207;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v142->fields.aiNpcDataList;
  v144 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v144,
    (Il2CppObject *)v86,
    Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_207;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v144,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v145 = v252;
  v146 = v252->fields.data;
  if ( !v146
    || (Instance = (__int64)v146->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__TurnProgressing(
          (BattleFieldEnvironmentData_o *)Instance,
          v252->fields.logic,
          *(_BYTE *)(v86 + 16),
          0LL),
        BattleLogicNomal__UpdateEndTurnBuff(v252, *(System_Int32_array **)(v86 + 24), v147),
        (v148 = v252->fields.data) == 0LL)
    || (Instance = (__int64)v247, v148->fields.currentTurn = 1, !v247) )
  {
LABEL_207:
    sub_B5D69C(Instance, v88);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v253,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v247,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v256 = v253;
  while ( 1 )
  {
    v155 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                            &v256,
                            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v155 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v256.fields.current.fields.value;
    if ( !v256.fields.current.fields.value )
      sub_B5D69C(v155, v156);
    monitor = (int)v256.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v256.fields.current.fields.key;
      v152 = 0;
      v153 = 1;
LABEL_119:
      if ( v152 >= monitor )
      {
        v236 = sub_B5D6C8(v155);
        sub_B5D668(v236, 0LL);
      }
      v154 = value->m_Items[v152];
      if ( !v154 )
        sub_B5D69C(v155, v156);
      if ( v154->fields._isRemove )
        goto LABEL_155;
      if ( !v96 )
        sub_B5D69C(v155, v156);
      v155 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v96,
               v154->fields.buffId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v155 )
        goto LABEL_155;
      v157 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v157, 0LL);
      if ( !v157 )
        sub_B5D69C(v158, v159);
      v157->fields.svtUniqueId = key;
      vals = v154->fields.vals;
      if ( !vals )
        sub_B5D69C(v158, v159);
      if ( !vals->max_length )
      {
        v238 = sub_B5D6C8(v158);
        sub_B5D668(v238, 0LL);
      }
      v161 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v157->klass->vtable._4_set_skillId.method)(
               v157,
               (unsigned int)vals->m_Items[1],
               v157->klass->vtable._5_get_skillId.methodPtr);
      v163 = v154->fields.vals;
      if ( !v163 )
        sub_B5D69C(v161, v162);
      if ( v163->max_length <= 1 )
      {
        v239 = sub_B5D6C8(v161);
        sub_B5D668(v239, 0LL);
      }
      v157->fields.skilllv = v163->m_Items[2];
      v164 = v145->fields.data;
      if ( !v164 )
        sub_B5D69C(0LL, v162);
      ServantData = BattleData__getServantData(v164, v157->fields.svtUniqueId, 0LL);
      v166 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v157->klass->vtable._5_get_skillId.method)(
               v157,
               v157->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v251 )
        sub_B5D69C(0LL, v166);
      v167 = SkillLvMaster__GetEntity(v251, v166, v157->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B5D69C(v167, v168);
      v169 = v167;
      v170 = v145->fields.data;
      if ( !v170 )
        sub_B5D69C(0LL, v168);
      v171 = BattleData__checkAliveOther(v170, ServantData->fields.uniqueId, 0LL);
      if ( !v171 )
      {
        if ( !v169 )
          sub_B5D69C(v171, v172);
        v173 = v145->fields.logic;
        if ( !v173 )
          sub_B5D69C(0LL, v172);
        v155 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v173, v169->fields.funcId, 0LL);
        if ( ((unsigned __int8)v155 & 1) == 0 )
          goto LABEL_155;
      }
      v174 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v154, 0LL);
      if ( (v174 & 0x80000000) != 0 )
      {
        v178 = v252;
        TargetIds = Target__getTargetIds(v252->fields.data, v157->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v157, 0LL);
      }
      else
      {
        v175 = sub_B5D5DC(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v175;
        if ( !v175 )
          sub_B5D69C(0LL, v176);
        if ( !*(_DWORD *)(v175 + 24) )
        {
          v241 = sub_B5D6C8(v175);
          sub_B5D668(v241, 0LL);
        }
        *(_DWORD *)(v175 + 32) = v174;
        v178 = v252;
        exists = 0;
      }
      logicskill = v178->fields.logicskill;
      v181 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v181 )
        sub_B5D69C(0LL, v182);
      if ( !v181->max_length )
      {
        v240 = sub_B5D6C8(v181);
        sub_B5D668(v240, 0LL);
      }
      v181->m_Items[1] = key;
      if ( !logicskill )
        sub_B5D69C(v181, v182);
      v184 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v157,
                                                   v181,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v183);
      v145 = v252;
      v186 = (BattleLogicTask_array *)v184;
      if ( (v153 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v184, 0LL);
        if ( IsNullOrEmpty )
        {
          v153 = 1;
          goto LABEL_153;
        }
        if ( !v186 )
          sub_B5D69C(IsNullOrEmpty, v185);
        if ( !v186->max_length )
        {
          v246 = sub_B5D6C8(IsNullOrEmpty);
          sub_B5D668(v246, 0LL);
        }
        v189 = v186->m_Items[0];
        if ( !v189 )
          sub_B5D69C(0LL, v185);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v189, ServantData, value, v188);
      }
      v153 = 0;
LABEL_153:
      v190 = v252->fields.logic;
      if ( !v190 )
        sub_B5D69C(0LL, v185);
      BattleLogic__addBattleLogicTask(v190, v186, 0LL);
LABEL_155:
      monitor = value->max_length;
      if ( (int)++v152 >= monitor )
        continue;
      goto LABEL_119;
    }
  }
  v254[0] = 1264;
  v255 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v256,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v255 = 0;
  v191 = v252;
  Instance = (__int64)v248;
  if ( !v248 )
    goto LABEL_207;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v253,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v248,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v256 = v253;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v256,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v193 = v191->fields.data;
    if ( !v193 )
      sub_B5D69C(0LL, v192);
    v194 = (int32_t)v256.fields.current.fields.key;
    v195 = v256.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v193, (int32_t)v256.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v199 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v199,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v199 )
        sub_B5D69C(isEndAct, v197);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v199->fields._selfConcatSvtIndividualities_k__BackingField;
      v191 = v252;
    }
    if ( !v195 )
      sub_B5D69C(isEndAct, v197);
    v200 = (int)v195[1].monitor;
    if ( v200 >= 1 )
    {
      for ( i = 0; i < v200; ++i )
      {
        if ( i >= (unsigned int)v200 )
        {
          v235 = sub_B5D6C8(isEndAct);
          sub_B5D668(v235, 0LL);
        }
        v202 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v195[2].klass + i);
        if ( !v202 )
          sub_B5D69C(isEndAct, v197);
        if ( !v202->fields._isRemove )
        {
          if ( !v96 )
            sub_B5D69C(isEndAct, v197);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v96,
                                              v202->fields.buffId,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v202, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v203 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v203, 0LL);
                if ( !v203 )
                  sub_B5D69C(v204, v205);
                v203->fields.svtUniqueId = v194;
                v206 = v202->fields.vals;
                if ( !v206 )
                  sub_B5D69C(v204, v205);
                if ( !v206->max_length )
                {
                  v243 = sub_B5D6C8(v204);
                  sub_B5D668(v243, 0LL);
                }
                v207 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v203->klass->vtable._4_set_skillId.method)(
                         v203,
                         (unsigned int)v206->m_Items[1],
                         v203->klass->vtable._5_get_skillId.methodPtr);
                v209 = v202->fields.vals;
                if ( !v209 )
                  sub_B5D69C(v207, v208);
                if ( v209->max_length <= 1 )
                {
                  v242 = sub_B5D6C8(v207);
                  sub_B5D668(v242, 0LL);
                }
                v203->fields.skilllv = v209->m_Items[2];
                v210 = v191->fields.data;
                if ( !v210 )
                  sub_B5D69C(0LL, v208);
                v211 = BattleData__getServantData(v210, v203->fields.svtUniqueId, 0LL);
                v212 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v203->klass->vtable._5_get_skillId.method)(
                         v203,
                         v203->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v251 )
                  sub_B5D69C(0LL, v212);
                v213 = SkillLvMaster__GetEntity(v251, v212, v203->fields.skilllv, 0LL);
                if ( !v211 )
                  sub_B5D69C(v213, v214);
                v215 = v213;
                v216 = v191->fields.data;
                if ( !v216 )
                  sub_B5D69C(0LL, v214);
                v217 = BattleData__checkAliveOther(v216, v211->fields.uniqueId, 0LL);
                if ( v217 )
                  goto LABEL_189;
                if ( !v215 )
                  sub_B5D69C(v217, v218);
                v219 = v191->fields.logic;
                if ( !v219 )
                  sub_B5D69C(0LL, v218);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v219, v215->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_189:
                  v220 = BattleServantData__GetRevengeIdCheckOpponentOnly(v211, v202, 0LL);
                  if ( (v220 & 0x80000000) != 0 )
                  {
                    v224 = v252;
                    v223 = Target__getTargetIds(v252->fields.data, v203->fields.svtUniqueId, -1, v194, 13, 0LL, 0LL);
                    v225 = BattleSkillInfoData__ExistsNoTargetNoActionType(v203, 0LL);
                  }
                  else
                  {
                    v221 = sub_B5D5DC(int___TypeInfo, 1LL);
                    v223 = (System_Int32_array *)v221;
                    if ( !v221 )
                      sub_B5D69C(0LL, v222);
                    if ( !*(_DWORD *)(v221 + 24) )
                    {
                      v244 = sub_B5D6C8(v221);
                      sub_B5D668(v244, 0LL);
                    }
                    *(_DWORD *)(v221 + 32) = v220;
                    v224 = v252;
                    v225 = 0;
                  }
                  v226 = v224->fields.logicskill;
                  v227 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
                  if ( !v227 )
                    sub_B5D69C(0LL, v228);
                  if ( !v227->max_length )
                  {
                    v245 = sub_B5D6C8(v227);
                    sub_B5D668(v245, 0LL);
                  }
                  v227->m_Items[1] = v194;
                  if ( !v226 )
                    sub_B5D69C(v227, v228);
                  v230 = BattleLogicSkill__taskSkill(v226, v203, v227, v223, 1, v225, 0, v229);
                  v191 = v252;
                  v231 = v252->fields.logic;
                  if ( !v231 )
                    sub_B5D69C(0LL, v230);
                  BattleLogic__addBattleLogicTask(v231, v230, 0LL);
                }
              }
            }
          }
        }
        v200 = (int)v195[1].monitor;
      }
    }
  }
  v254[0] = 1728;
  v232 = ++v255;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v256,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v232 && v254[v232 - 1] == 1728 )
    v255 = v232 - 1;
  Instance = (__int64)v191->fields.logic;
  if ( !Instance )
    goto LABEL_207;
  if ( (v250 & 1) != 0 )
    v233 = actiondata;
  else
    v233 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v233, actiondata, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
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

  if ( (byte_42EBE77 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    byte_42EBE77 = 1;
  }
  v5 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 || (BattleActionData__setStateMotion((BattleActionData_o *)v5, 0LL), !task) )
    sub_B5D69C(v6, v7);
  *(_BYTE *)(v5 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v5 + 32) = BattleLogicTask__getActorId(task, v7);
  motionName = (System_Int32_array **)task->fields.motionName;
  *(_QWORD *)(v5 + 64) = motionName;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 64), motionName, v9, v10, v11, v12, v13, v14);
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(v5 + 128) = motionMessage;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 128), motionMessage, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v5 + 136) = task->fields.messageType;
  targetObject = (System_Int32_array **)task->fields.targetObject;
  *(_QWORD *)(v5 + 72) = targetObject;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 72), targetObject, v23, v24, v25, v26, v27, v28);
  return (BattleActionData_o *)v5;
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
    sub_B5D69C(this, task);
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftServant(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicNomal_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x21
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  BattleActionData_ShiftServant_o *v22; // x22

  v5 = this;
  if ( (byte_42EBE81 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&BattleActionData_ShiftServant_TypeInfo, v6, v7, v8);
    this = (BattleLogicNomal_o *)sub_B5D5C4(&StringLiteral_8897/*"MOTION_SHIFT"*/, v9, v10, v11);
    byte_42EBE81 = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v5->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v14 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  if ( !v14 )
    goto LABEL_10;
  *(_DWORD *)(v14 + 32) = ServantData->fields.uniqueId;
  v21 = (System_Int32_array **)StringLiteral_8897/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v14 + 64) = StringLiteral_8897/*"MOTION_SHIFT"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 64), v21, v15, v16, v17, v18, v19, v20);
  v22 = (BattleActionData_ShiftServant_o *)sub_B5D694(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v22, 0LL);
  if ( !v22
    || (BattleActionData_ShiftServant__setBeforeSvtData(v22, ServantData, 0LL),
        BattleServantData__setShiftServant(ServantData, v5->fields.data, 1, 0LL),
        BattleServantData__SetIsBattleShift(ServantData, 1, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v22, ServantData, 0LL),
        BattleActionData__setShiftServant((BattleActionData_o *)v14, v22, 0LL),
        (this = (BattleLogicNomal_o *)v5->fields.logic) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, task);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, ServantData->fields.uniqueId, 1, 0, 0LL);
  return (BattleActionData_o *)v14;
}


BattleActionData_o *__fastcall BattleLogicNomal__createStartEnemyTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleActionData_o *StartTurn; // x0
  const MethodInfo *v10; // x1
  struct BattleData_o *data; // x8
  BattleActionData_o *v12; // x20
  struct BattleData_o *v13; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x21
  struct BattleData_o *v16; // x8
  struct BattlePerformance_o *v17; // x8

  if ( (byte_42EBE78 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11220/*"RESET_CAMERA_BAT"*/, v6, v7, v8);
    byte_42EBE78 = 1;
  }
  StartTurn = BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0LL;
  StartTurn = BattleLogicNomal__DeadChangePos(this, v10);
  v12 = StartTurn;
  if ( StartTurn )
  {
    v13 = this->fields.data;
    if ( !v13 )
      goto LABEL_19;
    perf = v13->fields.perf;
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
      v16 = this->fields.data;
      if ( v16 )
      {
        v17 = v16->fields.perf;
        if ( v17 )
        {
          StartTurn = (BattleActionData_o *)v17->fields.actioncamera;
          if ( StartTurn )
          {
            BattleActionCamera__sendMainEvent(
              (BattleActionCamera_o *)StartTurn,
              (System_String_o *)StringLiteral_11220/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v12;
          }
        }
      }
LABEL_19:
      sub_B5D69C(StartTurn, v10);
    }
  }
  return v12;
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
        v12 = sub_B5D6C8(data);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(data, task);
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
    sub_B5D69C(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
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
    v12 = sub_B5D6C8(data);
    sub_B5D668(v12, 0LL);
  }
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_B5D69C(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  return data->fields.battleEvent;
}


void __fastcall BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleLogic_reactionFunction_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EBE6C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleLogicNomal_shiftServantTaskReaction__, (_DWORD)list, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&BattleLogic_reactionFunction_TypeInfo, v9, v10, v11);
    byte_42EBE6C = 1;
  }
  v12 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleLogicNomal_shiftServantTaskReaction__,
    0LL);
  if ( !list )
    sub_B5D69C(v13, v14);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    36,
    (System_String_o *)v12,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicNomal_o *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t ActorId; // w0
  const MethodInfo *v22; // x2
  int32_t ShiftableUniqueId; // w0
  int32_t v24; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  BattleServantData_o *v26; // x22
  bool IsShiftGuts; // w23
  BattleLogicTask_o *v28; // x22
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v35; // x21
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3

  v5 = this;
  if ( (byte_42EBE82 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v15, v16, v17);
    this = (BattleLogicNomal_o *)sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18, v19, v20);
    byte_42EBE82 = 1;
  }
  if ( !task )
    goto LABEL_20;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  ShiftableUniqueId = BattleLogicNomal__getShiftableUniqueId(v5, ActorId, v22);
  if ( !ShiftableUniqueId )
    return v5->fields.zeroTask;
  v24 = ShiftableUniqueId;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicNomal_o *)v5->fields.data;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicNomal_o *)BattleData__getServantData((BattleData_o *)this, v24, 0LL);
  if ( !this )
    goto LABEL_20;
  v26 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  if ( !v26->fields.buffData )
    goto LABEL_20;
  IsShiftGuts = BattleBuffData__IsShiftGuts(
                  v26->fields.buffData,
                  v26,
                  (BattleBuffData_CheckIndividualitiesData_array *)this,
                  0LL);
  v28 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v28, v29);
  if ( !v28 )
    goto LABEL_20;
  if ( IsShiftGuts )
  {
    v28->fields.actiontype = 62;
    BattleLogicTask__setActor(v28, 3, v24, v30);
    if ( v25 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      logic = v5->fields.logic;
      if ( logic )
      {
        this = (BattleLogicNomal_o *)logic->fields.logicReaction;
        if ( this )
        {
          TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                      (BattleLogicReaction_o *)this,
                                                                      v24,
                                                                      v31);
          if ( TaskGuts )
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
              TaskGuts,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          goto LABEL_18;
        }
      }
    }
LABEL_20:
    sub_B5D69C(this, task);
  }
  v28->fields.actiontype = 37;
  BattleLogicTask__setActor(v28, 3, v24, v30);
  if ( !v25 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v25,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_18:
  v35 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v35, v36);
  if ( !v35 )
    goto LABEL_20;
  v35->fields.actiontype = 36;
  BattleLogicTask__setActor(v35, 3, v24, v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v25,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskAddCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  BattleData_o *battleEvent; // x0
  __int64 v23; // x1
  struct BattleData_o *v24; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v26; // x0
  BattleCommandData_o *v27; // x22
  BattleServantData_o *v28; // x23
  BattleLogicTask_o *v29; // x23
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x3

  if ( (byte_42EBE6E & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18, v19, v20);
    byte_42EBE6E = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v24 = this->fields.data;
  if ( !v24 )
    goto LABEL_24;
  battleEvent = (BattleData_o *)v24->fields.battleEvent;
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
  v26 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v26 = BattleDataDefine_TypeInfo;
  }
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v26->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v27 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_24;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v27->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v28 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v28->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v28, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_22:
    if ( v21 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_24:
    sub_B5D69C(battleEvent, v23);
  }
  v29 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v29, v30);
  if ( !v29 )
    goto LABEL_24;
  BattleLogicTask__setActor(v29, 2, v27->fields.uniqueId, v31);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_24;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v29, v32);
  BattleLogicTask__setAddAttackCommand(v29, data->fields.combodata, v27, v33);
  v29->fields.isCanCounterTask = 1;
  if ( !v21 )
    goto LABEL_24;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v21,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  BattleLogicTask_o *v20; // x20
  const MethodInfo *v21; // x1
  int v22; // w8
  const MethodInfo *v23; // x1

  if ( (byte_42EBE7E & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15, v16);
    byte_42EBE7E = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v20 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v20, v23);
    if ( !v20 )
      goto LABEL_13;
    v22 = 19;
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v17 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
      sub_B5D69C(v18, v19);
    }
    v20 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v20, v21);
    if ( !v20 )
      goto LABEL_13;
    v22 = 18;
  }
  v20->fields.actiontype = v22;
  if ( !v17 )
    goto LABEL_13;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v17,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCheckShiftServants(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  return BattleLogicNomal__shiftServantTaskReaction(this, this->fields.tmpShiftTask, (const MethodInfo *)data);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskComboOrderAfter(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 v18; // x1
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v20; // x20
  const MethodInfo *v21; // x1

  if ( (byte_42EBE70 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15, v16);
    byte_42EBE70 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v20 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v20, v21),
        !v20)
    || (v20->fields.actiontype = 7, !v17) )
  {
    sub_B5D69C(logic, v18);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v17,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B5D69C(this, *(_QWORD *)&ltype);
  }
  return v5->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  BattleCommandData_o *battleEvent; // x0
  __int64 v21; // x1
  struct BattleData_o *v22; // x8
  int32_t v23; // w22
  BattleCommandData_o *v24; // x23
  BattleServantData_o *v25; // x25
  BattleLogicTask_o *v26; // x24
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x3
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  int32_t TreasureDvcId; // w0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2

  if ( (byte_42EBE6D & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17, v18);
    byte_42EBE6D = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)v22->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
  {
    if ( ltype == 3 )
      v23 = 2;
    else
      v23 = ltype == 2;
    this->fields.commandIndex = v23;
    if ( !data )
      goto LABEL_33;
    battleEvent = BattleData__getSelectCommand(data, v23, 0LL);
    if ( !battleEvent )
      goto LABEL_33;
    v24 = battleEvent;
    battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
    if ( ((unsigned __int8)battleEvent & 1) == 0 )
    {
      battleEvent = (BattleCommandData_o *)this->fields.data;
      if ( !battleEvent )
        goto LABEL_33;
      battleEvent = (BattleCommandData_o *)BattleData__getServantData(
                                             (BattleData_o *)battleEvent,
                                             v24->fields.uniqueId,
                                             0LL);
      if ( !battleEvent )
        goto LABEL_33;
      v25 = (BattleServantData_o *)battleEvent;
      battleEvent = (BattleCommandData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
      if ( ((unsigned __int8)battleEvent & 1) != 0 && v25->fields.isEntry )
      {
        battleEvent = (BattleCommandData_o *)BattleServantData__isAction(v25, 0LL);
        if ( ((unsigned __int8)battleEvent & 1) != 0 )
        {
          battleEvent = (BattleCommandData_o *)BattleServantData__isCardTypeAction(v25, v24, 0LL);
          if ( ((unsigned __int8)battleEvent & 1) != 0 )
          {
            v26 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v26, v27);
            if ( v26 )
            {
              BattleLogicTask__setActionCommand(v26, data->fields.combodata, v24, v23, v28);
              if ( BattleData__isTutorial(data, 0LL) )
              {
                if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
                  BattleCommandData__checkCriticalRate(v24, 0, 0LL);
              }
              else
              {
                BattleCommandData__LotteryPlayerSideCritical(v24, 0LL);
              }
              BattleLogicTask__setActor(v26, 2, v24->fields.uniqueId, v29);
              v26->fields.isCanCounterTask = 1;
              if ( v24->fields.treasureDvc < 1 )
              {
                BattleData__setTDChain(data, 0, 0LL);
                battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                if ( battleEvent )
                {
                  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                         (BattleLogicTarget_o *)battleEvent,
                                                         v26,
                                                         v35);
                  if ( v19 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v19,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                  }
                }
              }
              else
              {
                battleEvent = (BattleCommandData_o *)this->fields.logic;
                if ( battleEvent )
                {
                  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
                  BattleLogicTask__setActor(v26, 2, v25->fields.uniqueId, v31);
                  BattleLogicTask__setActionCommand(v26, data->fields.combodata, v24, v23, v32);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(v25, 1, 0LL);
                  v26->fields.actiontype = 4;
                  v26->fields.treasureDvcId = TreasureDvcId;
                  v26->fields.tresureDvcLv = 1;
                  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                  if ( battleEvent )
                  {
                    battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                           (BattleLogicTarget_o *)battleEvent,
                                                           v26,
                                                           v34);
                    if ( v19 )
                    {
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v19,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                      BattleData__setTDChain(data, 1, 0LL);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                    }
                  }
                }
              }
            }
LABEL_33:
            sub_B5D69C(battleEvent, v21);
          }
        }
      }
    }
  }
  if ( !v19 )
    goto LABEL_33;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  int v64; // w1
  char v65; // w2
  __int64 v66; // x3
  __int64 Instance; // x0
  __int64 wasAttackTargetId; // x1
  __int64 v69; // x8
  __int64 v70; // x23
  __int64 v71; // x8
  unsigned __int64 v72; // x28
  BattleServantData_o *v73; // x27
  BattleServantData_o *v74; // x20
  System_Collections_Generic_IEnumerable_T__o *v75; // x21
  void *monitor; // x8
  __int64 v77; // x24
  BattleBuffData_BuffData_o *v78; // x20
  __int64 v79; // x25
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x3
  int32_t v82; // w1
  const MethodInfo *v83; // x2
  int32_t counterLv; // w2
  int32_t counterOc; // w8
  __int64 v86; // x22
  BattleSkillInfoData_o *v87; // x26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  System_Int32_array *v90; // x22
  const MethodInfo *v91; // x6
  System_Int32_array **CounterMessage; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  const MethodInfo *v99; // x3
  __int64 v100; // x9
  BattleLogicNomal___c_c *v101; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__15_0; // x20
  Il2CppObject *v104; // x21
  struct BattleLogicNomal___c_StaticFields *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  struct BattleLogic_o *logic; // x8
  __int64 v114; // x0
  _BOOL4 v115; // [xsp+Ch] [xbp-94h]
  BattleLogicNomal_o *v116; // [xsp+10h] [xbp-90h]
  _BOOL4 v117; // [xsp+1Ch] [xbp-84h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v119; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *v120; // [xsp+30h] [xbp-70h]
  char v121; // [xsp+3Ch] [xbp-64h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v122; // [xsp+40h] [xbp-60h]

  v6 = isInitLogicHp;
  v7 = isSkillCounter;
  if ( (byte_42EBE6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)data, isEnemy, isSkillCounter);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v13, v14, v15);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___68717232, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&int___TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v52, v53, v54);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v55, v56, v57);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58, v59, v60);
    sub_B5D5C4(&Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__, v61, v62, v63);
    sub_B5D5C4(&BattleLogicNomal___c_TypeInfo, v64, v65, v66);
    byte_42EBE6F = 1;
  }
  v122 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v122,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  v120 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( !data )
    goto LABEL_73;
  v69 = 288LL;
  if ( isEnemy )
    v69 = 296LL;
  v70 = *(__int64 *)((char *)&data->klass + v69);
  if ( !v70 )
    goto LABEL_73;
  v71 = *(_QWORD *)(v70 + 24);
  if ( (int)v71 >= 1 )
  {
    v72 = 0LL;
    do
    {
      if ( v72 >= (unsigned int)v71 )
      {
LABEL_72:
        v114 = sub_B5D6C8(Instance);
        sub_B5D668(v114, 0LL);
      }
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v70 + 4 * v72 + 32), 0LL);
      if ( Instance )
      {
        v73 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v73, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v73->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v74 = (BattleServantData_o *)Instance;
                if ( v73->fields.isEnemy != (*(_BYTE *)(Instance + 455) != 0) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v74, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v73->fields.buffData;
                    if ( !Instance )
                      goto LABEL_73;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v73,
                                          v74,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_73;
                    v75 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v115 = v6;
                      v116 = this;
                      v119 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B5D694(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
                        v119,
                        v75,
                        (const MethodInfo_2505F24 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___68717232);
                      monitor = v75[1].monitor;
                      if ( (int)monitor >= 1 )
                      {
                        v77 = 4LL;
                        v121 = 1;
                        v117 = v7;
                        do
                        {
                          if ( v77 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_72;
                          v78 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v75->klass + v77);
                          if ( !v7 )
                            goto LABEL_76;
                          if ( !v78 )
                            goto LABEL_73;
                          if ( v78->fields.isSkillReaction )
                          {
LABEL_76:
                            v79 = sub_B5D694(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor((BattleLogicTask_o *)v79, v80);
                            if ( !v79 )
                              goto LABEL_73;
                            v82 = isEnemy ? 3 : 2;
                            BattleLogicTask__setActor((BattleLogicTask_o *)v79, v82, v73->fields.uniqueId, v81);
                            BattleLogicTask__setTarget((BattleLogicTask_o *)v79, v73->fields.wasAttackTargetId, v83);
                            Instance = (__int64)v73->fields.buffData;
                            if ( !Instance )
                              goto LABEL_73;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v78, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v73->fields.overkillTargetId = -1;
                              if ( !v78 )
                                goto LABEL_73;
                              wasAttackTargetId = (unsigned int)v78->fields.counterId;
                              counterLv = v78->fields.counterLv;
                              if ( v78->fields.isUseTreasureDevice )
                              {
                                counterOc = v78->fields.counterOc;
                                *(_DWORD *)(v79 + 48) = 5;
                                *(_DWORD *)(v79 + 84) = wasAttackTargetId;
                                *(_DWORD *)(v79 + 88) = counterLv;
                                *(_DWORD *)(v79 + 164) = counterOc;
                                *(_BYTE *)(v79 + 81) = 1;
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
                                v86 = Instance;
                                v87 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v87, 0LL);
                                if ( !v87 )
                                  goto LABEL_73;
                                v87->fields.type = 20;
                                uniqueId = v73->fields.uniqueId;
                                klass = v87->klass;
                                v87->fields.index = 0;
                                v87->fields.svtUniqueId = uniqueId;
                                ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
                                  v87,
                                  *(unsigned int *)(v86 + 16),
                                  klass->vtable._5_get_skillId.methodPtr);
                                v87->fields.skilllv = *(_DWORD *)(v86 + 20);
                                Instance = sub_B5D5DC(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                v90 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v73->fields.wasAttackTargetId;
                                Instance = sub_B5D5DC(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v73->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  (BattleLogicTask_o *)v79,
                                  v87,
                                  v90,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  v91);
                                v7 = v117;
                              }
                              Instance = (__int64)v120;
                              if ( !v120 )
                                goto LABEL_73;
                              Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v120,
                                                    v78->fields.buffId,
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_73;
                              CounterMessage = (System_Int32_array **)BuffEntity__GetCounterMessage(
                                                                        (BuffEntity_o *)Instance,
                                                                        0LL);
                              *(_QWORD *)(v79 + 152) = CounterMessage;
                              sub_B5D560(
                                (BattleServantConfConponent_o *)(v79 + 152),
                                CounterMessage,
                                v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98);
                              *(_DWORD *)(v79 + 144) = 2;
                              *(_BYTE *)(v79 + 162) = 1;
                              if ( (v121 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  (BattleLogicTask_o *)v79,
                                  v73,
                                  (BattleBuffData_BuffData_array *)v75,
                                  v99);
                              Instance = (__int64)v122;
                              if ( !v122 )
                                goto LABEL_73;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v122,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
                                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              Instance = (__int64)v119;
                              if ( !v119 )
                                goto LABEL_73;
                              Instance = System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                           v119,
                                           v78,
                                           (const MethodInfo_2506688 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v121 = 0;
                            }
                          }
LABEL_54:
                          LODWORD(monitor) = v75[1].monitor;
                          v100 = v77 - 3;
                          ++v77;
                        }
                        while ( v100 < (int)monitor );
                      }
                      v101 = BattleLogicNomal___c_TypeInfo;
                      if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v101 = BattleLogicNomal___c_TypeInfo;
                      }
                      static_fields = v101->static_fields;
                      this = v116;
                      v6 = v115;
                      _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__15_0;
                      if ( !_9__15_0 )
                      {
                        if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v101);
                          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        }
                        v104 = (Il2CppObject *)static_fields->__9;
                        _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          _9__15_0,
                          v104,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__,
                          (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
                        v105 = BattleLogicNomal___c_TypeInfo->static_fields;
                        v105->__9__15_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__15_0;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&v105->__9__15_0,
                          (System_Int32_array **)_9__15_0,
                          v106,
                          v107,
                          v108,
                          v109,
                          v110,
                          v111);
                      }
                      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        (System_Collections_Generic_IEnumerable_T__o *)v119,
                        (System_Action_T__o *)_9__15_0,
                        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v71) = *(_DWORD *)(v70 + 24);
    }
    while ( (__int64)++v72 < (int)v71 );
  }
  if ( !v122 )
    goto LABEL_73;
  if ( v122->fields._size < 1 )
    goto LABEL_70;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_73:
    sub_B5D69C(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_70:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_73;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v122,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v122,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x23
  const MethodInfo *v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x3
  int32_t v39; // w1

  if ( (byte_42EBE75 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)svtData, (_DWORD)motionName, Tr);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18, v19);
    byte_42EBE75 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v21 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v21, v22);
  if ( !v21 )
    goto LABEL_11;
  *(_QWORD *)(v21 + 104) = motionName;
  *(_DWORD *)(v21 + 48) = 10;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 104),
    (System_Int32_array **)motionName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !Tr )
    goto LABEL_11;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v21 + 112) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 112), gameObject, v32, v33, v34, v35, v36, v37);
  if ( !svtData )
    goto LABEL_11;
  v39 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v21, v39, svtData->fields.uniqueId, v38);
  if ( !v20 )
LABEL_11:
    sub_B5D69C(v23, v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskPlaySubEntryMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        UnityEngine_Transform_o *Tr,
        bool isTactical,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Int32_array ***v42; // x8
  System_Int32_array **v43; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  __int64 v45; // x21
  const MethodInfo *v46; // x1
  BattleEntity_o *battle_ent; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct BattleData_o *data; // x8
  System_String_o *v63; // x0
  const MethodInfo *v64; // x3
  BattleData_o *v65; // x8
  System_String_o *v66; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v68; // x2
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  int32_t uniqueId; // w2
  System_Int32_array **v72; // x19
  const MethodInfo *v73; // x3
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct BattleData_o *v80; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v82; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v84; // x2
  Il2CppObject *v85; // x0
  System_Int32_array **v86; // x22
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int v94; // [xsp+8h] [xbp-38h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EBE76 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)svtData, (_DWORD)Tr, isTactical);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2583/*"BATTLE_SUBENTRY_PLAYER"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_8890/*"MOTION_ENTRY"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_2581/*"BATTLE_SUBENTRY_ENEMY"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_2582/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_8891/*"MOTION_ENTRY_TAC"*/, v39, v40, v41);
    byte_42EBE76 = 1;
  }
  v42 = (System_Int32_array ***)&StringLiteral_8891/*"MOTION_ENTRY_TAC"*/;
  if ( !isTactical )
    v42 = (System_Int32_array ***)&StringLiteral_8890/*"MOTION_ENTRY"*/;
  v43 = *v42;
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v45 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v45, v46);
  if ( !v45 )
    goto LABEL_30;
  *(_QWORD *)(v45 + 104) = v43;
  *(_DWORD *)(v45 + 48) = 10;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 104), v43, v49, v50, v51, v52, v53, v54);
  if ( !Tr )
    goto LABEL_30;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v45 + 112) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 112), gameObject, v56, v57, v58, v59, v60, v61);
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
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_2582/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2581/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
      v80 = this->fields.data;
      if ( !v80 )
        goto LABEL_30;
      EnemyCountStartValue_k__BackingField = v80->fields._EnemyCountStartValue_k__BackingField;
      v82 = (System_String_o *)battle_ent;
      EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v80, 0LL);
      v94 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v84)
          + EnemyCountStartValue_k__BackingField;
      v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
      v63 = System_String__Format(v82, v85, 0LL);
    }
    v86 = (System_Int32_array **)v63;
    BattleLogicTask__setActor((BattleLogicTask_o *)v45, 3, svtData->fields.uniqueId, v64);
    *(_QWORD *)(v45 + 152) = v86;
    sub_B5D560((BattleServantConfConponent_o *)(v45 + 152), v86, v87, v88, v89, v90, v91, v92);
    *(_DWORD *)(v45 + 144) = 1;
    if ( v44 )
      goto LABEL_29;
LABEL_30:
    sub_B5D69C(battle_ent, v48);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2583/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v65 = this->fields.data;
  if ( !v65 )
    goto LABEL_30;
  v66 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v65, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v68);
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v70 = System_String__Format(v66, v69, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v72 = (System_Int32_array **)v70;
  BattleLogicTask__setActor((BattleLogicTask_o *)v45, 2, uniqueId, v73);
  *(_QWORD *)(v45 + 152) = v72;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 152), v72, v74, v75, v76, v77, v78, v79);
  *(_DWORD *)(v45 + 144) = 1;
  if ( !v44 )
    goto LABEL_30;
LABEL_29:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7CA9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicNomal___c_TypeInfo, v1, v2, v3);
    byte_42E7CA9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicNomal___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__20_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19

  if ( (byte_42E7CAA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, x, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v4, v5, v6);
    byte_42E7CAA = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7;
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
    sub_B5D69C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__36_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_B5D69C(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__15_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleServantData_o *actSvtData; // x20
  BuffList_c *v10; // x0
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v12; // x22

  if ( (byte_42E7CAB & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)targetSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&BattleBuffData_CheckInvokeBuff_TypeInfo, v6, v7, v8);
    byte_42E7CAB = 1;
  }
  actSvtData = this->fields.actSvtData;
  v10 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v10 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v10->static_fields->CommandCodeFunctionActs;
  v12 = (BattleBuffData_CheckInvokeBuff_o *)sub_B5D694(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v12, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v12;
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass20_0_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  v6 = this;
  if ( (byte_42E7CAC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____,
      (_DWORD)buffEnt,
      (_DWORD)buff,
      method);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B5D5C4(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7,
                                                         v8,
                                                         v9);
    byte_42E7CAC = 1;
  }
  if ( !buffEnt )
    sub_B5D69C(this, buffEnt);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_1AD8D14 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass20_0_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  v6 = this;
  if ( (byte_42E7CAD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____,
      (_DWORD)buffEnt,
      (_DWORD)buff,
      method);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B5D5C4(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7,
                                                         v8,
                                                         v9);
    byte_42E7CAD = 1;
  }
  if ( !buffEnt )
    sub_B5D69C(this, buffEnt);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_1AD8D14 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
    sub_B5D69C(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        bool isOnlyMain,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *mainTarget; // x0
  struct System_Func_BattleServantData__BattleServantData__o *targetTo; // x1

  if ( (byte_42E7CAE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___,
      isOnlyMain,
      (_DWORD)method,
      v3);
    byte_42E7CAE = 1;
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
                                                                          (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass20_0_o *)_4__this->fields.data) == 0LL )
    sub_B5D69C(this, id);
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
    sub_B5D69C(this, npc);
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
    sub_B5D69C(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    v4->fields.isEndEnemyTurn,
    v4->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}