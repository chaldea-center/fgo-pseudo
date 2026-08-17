void BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  BattleLogicTask_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5973C9E & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask___TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    byte_5973C9E = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_2213B20(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0);
  this->fields.tmpShiftTask = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tmpShiftTask,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields.isMultiTargetBattle && data->fields.justDeadTargetId != -1;
}


BattleActionData_o *BattleLogicNomal__CreateCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  __int64 v7; // x24
  __int64 ActorId; // x0
  BattleCommandData_o *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  BattleData_o *data; // x19
  BattleServantData_o *ServantData; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  BattleActionData_o *v24; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  BattleActionData_o **v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct BattleCommandData_o *command; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  BattleActionData_o *v45; // x19
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_String_o *motionMessage; // x1
  int Target; // w27
  Il2CppObject *v54; // x22
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v56; // x23
  System_Nullable_int__o v57; // x4
  bool v58; // w8
  BattleActionData_o *result; // x0
  System_Collections_Generic_List_object__o *v60; // x23
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_Collections_Generic_List_object__o **v77; // x28
  bool isEnemyID; // w8
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantIDList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x23
  System_Func_T__TResult__o *v81; // x19
  __int64 v82; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x23
  BattleLogicNomal___c_c *v84; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__30_9; // x25
  Il2CppObject *v87; // x19
  struct BattleLogicNomal___c_StaticFields *v88; // x0
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  bool IsForceAttackFunctionTargetAll; // w0
  __int64 v96; // x1
  System_Collections_Generic_List_object__o *v97; // x23
  BattleLogicNomal___c_c *v98; // x8
  struct BattleLogicNomal___c_StaticFields *v99; // x9
  System_Func_object__object__o *_9__30_0; // x25
  Il2CppObject *v101; // x19
  struct BattleLogicNomal___c_StaticFields *v102; // x0
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  System_Func_object__object__o *v109; // x19
  __int64 v110; // x9
  System_Collections_Generic_Dictionary_object__object__o *v111; // x28
  BattleServantData_o **v112; // x26
  BuffList_c *v113; // x8
  BattleLogicNomal___c_c *v114; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x23
  struct BattleLogicNomal___c_StaticFields *v116; // x8
  System_Func_T__TResult__o *_9__30_2; // x25
  Il2CppObject *v118; // x19
  struct BattleLogicNomal___c_StaticFields *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  struct BattleLogicNomal___c_StaticFields *v126; // x8
  System_Func_T__TResult__o *_9__30_3; // x27
  Il2CppObject *v128; // x19
  struct BattleLogicNomal___c_StaticFields *v129; // x0
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v136; // x0
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  __int64 v143; // x8
  int64_t v144; // x23
  System_Action_object__object__o *v145; // x19
  int64_t commandAssistId; // x23
  System_Action_object__object__o *v147; // x19
  __int64 v148; // x8
  BattleCommandData_o **v149; // x22
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  __int64 v156; // x23
  __int64 v157; // x1
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  System_Func_object__object__o *v164; // x19
  System_String_o *v165; // x2
  System_String_o *v166; // x3
  int32_t v167; // w4
  int32_t v168; // w5
  bool v169; // w6
  bool v170; // w7
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v172; // x24
  const MethodInfo *v173; // x1
  const MethodInfo *v174; // x5
  __int64 v175; // x9
  __int64 v176; // x8
  unsigned __int64 v177; // x10
  int v178; // w19
  int32_t v179; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v180; // x23
  __int64 v181; // x8
  __int64 v182; // x27
  __int64 v183; // x9
  int *v184; // x10
  __int64 v185; // x0
  __int64 v186; // x0
  __int64 v187; // x1
  __int64 v188; // x27
  __int64 v189; // x8
  __int64 v190; // x9
  int *v191; // x10
  __int64 v192; // x0
  __int64 v193; // x27
  __int64 v194; // x8
  __int64 v195; // x9
  int *v196; // x10
  __int64 v197; // x0
  Il2CppObject *v198; // x0
  Il2CppObject *Item; // x1
  __int64 v200; // x27
  __int64 v201; // x8
  __int64 v202; // x9
  int *v203; // x10
  __int64 v204; // x0
  unsigned __int64 v205; // x10
  int v206; // w19
  BuffList_ACTION_array *v207; // x23
  int v208; // w8
  int v209; // w8
  int v210; // w8
  __int64 v211; // x8
  __int64 v212; // x27
  __int64 v213; // x9
  int *v214; // x10
  __int64 v215; // x0
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_53446068; // x0
  __int64 v217; // x1
  BattleBuffData_BuffData_array *v218; // x27
  Il2CppClass *klass; // x8
  __int64 v220; // x9
  int *p_offset; // x10
  __int64 v222; // x0
  __int64 v223; // x27
  __int64 v224; // x8
  __int64 v225; // x9
  int *v226; // x10
  __int64 v227; // x0
  __int64 v228; // x1
  BattleServantData_o *v229; // x3
  BattleBuffData_BuffData_array *v230; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v232; // x22
  BattleBuffData_BuffData_o *v233; // x29
  BattleLogicFunction_o *logicfunction; // x19
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v236; // x1
  __int64 v237; // x27
  __int64 v238; // x8
  __int64 v239; // x9
  int *v240; // x10
  __int64 v241; // x0
  __int64 v242; // x0
  __int64 v243; // x1
  BattleActionData_DamageData_o *v244; // x23
  __int64 v245; // x27
  __int64 v246; // x8
  __int64 v247; // x9
  int *v248; // x10
  __int64 v249; // x0
  __int64 v250; // x0
  __int64 v251; // x1
  __int64 v252; // x27
  __int64 v253; // x8
  __int64 v254; // x9
  int *v255; // x10
  __int64 v256; // x0
  __int64 v257; // x1
  BattleServantData_o *v258; // x27
  BattleLogic_o *v259; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v261; // x1
  BattleActionData_DamageData_o *v262; // x29
  BattleBuffData_o *buffData; // x0
  BattleActionData_o *v264; // x19
  BattleActionData_o *v265; // x0
  __int64 v266; // x1
  bool v267; // w8
  BattleActionData_o *v268; // x0
  __int64 v269; // x0
  BattleActionData_o *v270; // x19
  BattleActionData_o *v271; // x19
  BattleActionData_o *v272; // x19
  __int64 v273; // x23
  struct BattleData_o *v274; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v276; // x19
  const MethodInfo *v277; // x5
  __int64 v278; // x8
  unsigned __int64 v279; // x29
  unsigned int v280; // w19
  int32_t v281; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x23
  __int64 v283; // x8
  __int64 v284; // x27
  __int64 v285; // x9
  int *v286; // x10
  __int64 v287; // x0
  __int64 v288; // x0
  __int64 v289; // x1
  __int64 v290; // x27
  __int64 v291; // x8
  __int64 v292; // x9
  int *v293; // x10
  __int64 v294; // x0
  __int64 v295; // x1
  __int64 v296; // x27
  __int64 v297; // x8
  __int64 v298; // x9
  int *v299; // x10
  __int64 v300; // x0
  Il2CppObject *v301; // x0
  Il2CppObject *v302; // x1
  __int64 v303; // x27
  __int64 v304; // x8
  __int64 v305; // x9
  int *v306; // x10
  __int64 v307; // x0
  unsigned __int64 v308; // x19
  int v309; // w22
  BuffList_ACTION_array *v310; // x23
  int v311; // w8
  int v312; // w8
  int v313; // w8
  __int64 v314; // x8
  __int64 v315; // x27
  __int64 v316; // x9
  int *v317; // x10
  __int64 v318; // x0
  BattleBuffData_BuffData_array *v319; // x0
  __int64 v320; // x1
  BattleBuffData_BuffData_array *v321; // x27
  Il2CppClass *v322; // x8
  __int64 v323; // x9
  int *v324; // x10
  __int64 v325; // x0
  __int64 v326; // x1
  __int64 v327; // x27
  __int64 v328; // x8
  __int64 v329; // x9
  int *v330; // x10
  __int64 v331; // x0
  __int64 v332; // x1
  BattleServantData_o *v333; // x3
  BattleBuffData_BuffData_array *v334; // x27
  il2cpp_array_size_t v335; // x8
  unsigned __int64 v336; // x22
  BattleLogicFunction_o *v337; // x0
  __int64 v338; // x27
  __int64 v339; // x8
  __int64 v340; // x9
  int *v341; // x10
  __int64 v342; // x0
  __int64 v343; // x0
  __int64 v344; // x1
  __int64 v345; // x23
  __int64 v346; // x8
  __int64 v347; // x9
  int *v348; // x10
  __int64 v349; // x0
  __int64 v350; // x0
  __int64 v351; // x1
  __int64 v352; // x23
  __int64 v353; // x8
  __int64 v354; // x9
  int *v355; // x10
  __int64 v356; // x0
  __int64 v357; // x0
  __int64 v358; // x1
  _BOOL8 v359; // x0
  __int64 v360; // x1
  Il2CppObject *current; // x8
  Il2CppClass *v362; // x9
  BattleData_o *v363; // x0
  BattleActionData_o *v364; // x8
  bool isForcedSpeedOne; // w9
  BattleLogic_o *v366; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v367; // x23
  System_Nullable_int__o v368; // x4
  __int64 v369; // x1
  const MethodInfo *v370; // [xsp+0h] [xbp-120h]
  __int64 *v371; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v372; // [xsp+28h] [xbp-F8h]
  __int64 v373; // [xsp+30h] [xbp-F0h]
  int32_t targetId; // [xsp+38h] [xbp-E8h]
  int32_t AttackType; // [xsp+3Ch] [xbp-E4h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v376; // [xsp+40h] [xbp-E0h]
  Il2CppObject *v377; // [xsp+48h] [xbp-D8h]
  BattleBuffData_o *actSvtBuffData; // [xsp+50h] [xbp-D0h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+58h] [xbp-C8h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+58h] [xbp-C8h]
  BattleLogic_DamageProcessArgs_o *processArgsb; // [xsp+58h] [xbp-C8h]
  bool v382; // [xsp+64h] [xbp-BCh]
  __int64 v383; // [xsp+68h] [xbp-B8h]
  __int64 v384; // [xsp+70h] [xbp-B0h]
  BattleServantData_o **v385; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v386; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v387; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v388; // [xsp+A0h] [xbp-80h] BYREF
  __int64 v389; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_5973C87 & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    sub_2213A60(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleAddSkillTaskAfterCommandAttack_TypeInfo);
    sub_2213A60(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
    sub_2213A60(&BattleServantData___TypeInfo);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&BuffList_TypeInfo);
    sub_2213A60(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_2213A60(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_2213A60(&System_Func_int__BattleServantData__TypeInfo);
    sub_2213A60(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_2213A60(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__);
    sub_2213A60(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__);
    sub_2213A60(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__);
    sub_2213A60(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C87 = 1;
  }
  v389 = 0;
  memset(&v388, 0, sizeof(v388));
  v7 = sub_2213CCC(BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass30_0___ctor((BattleLogicNomal___c__DisplayClass30_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_418;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( !task )
    goto LABEL_418;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_418;
  ServantData = BattleData__getServantData(data, ActorId, 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  v385 = (BattleServantData_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)ServantData, v18, v19, v20, v21, v22, v23);
  v24 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v24, 0);
  *baseActionData = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)baseActionData, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v7 + 48) = v24;
  v31 = (BattleActionData_o **)(v7 + 48);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)v24, v32, v33, v34, v35, v36, v37);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)command, v39, v40, v41, v42, v43, v44);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_418;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0);
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_418;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)ActorId, 0);
  }
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_418;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0);
  v45 = *v31;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !v45 )
    goto LABEL_418;
  v45->fields.actorId = ActorId;
  ActorId = (__int64)*v31;
  if ( !*v31 )
    goto LABEL_418;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 144) = motionMessage;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(ActorId + 144), (int32_t)motionMessage, v46, v47, v48, v49, v50, v51);
  if ( !*v31 )
    goto LABEL_418;
  (*v31)->fields.isCounter = task->fields.isCounter;
  Target = BattleLogicTask__getTarget(task, 0);
  ActorId = (__int64)this->fields.data;
  if ( Target <= 0 )
  {
    if ( !ActorId )
      goto LABEL_418;
    BattleData__setCommandAttack((BattleData_o *)ActorId, 0, 0, 0);
    return 0;
  }
  if ( !ActorId )
    goto LABEL_418;
  if ( *(_BYTE *)(ActorId + 296) || *(_BYTE *)(ActorId + 297) )
    return 0;
  v386 = (BattleCommandData_o **)(v7 + 40);
  ActorId = (__int64)BattleData__getServantData((BattleData_o *)ActorId, Target, 0);
  if ( !*v31 )
    goto LABEL_418;
  v54 = (Il2CppObject *)ActorId;
  if ( (*v31)->fields.isCounter )
  {
    if ( !ActorId )
      goto LABEL_418;
    if ( *(_BYTE *)(ActorId + 514) )
      return 0;
  }
  logic = this->fields.logic;
  v56 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_2213CCC(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v56, 0);
  if ( !logic )
    goto LABEL_418;
  v57 = 0;
  v58 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v56, task, Target, v57, 0);
  result = 0;
  if ( !v58 )
  {
    v60 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v60,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
    if ( !v60 )
      goto LABEL_418;
    items = v60->fields._items;
    v68 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v60->fields._version;
    if ( !items )
      goto LABEL_418;
    size = v60->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v60,
        v54,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &items->obj.klass + size;
      v60->fields._size = size + 1;
      v70[4] = (Il2CppClass *)v54;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 4), (int32_t)v54, v61, v62, v63, v64, v65, v66);
    }
    *(_QWORD *)(v7 + 56) = v60;
    v77 = (System_Collections_Generic_List_object__o **)(v7 + 56);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 56), (int32_t)v60, v71, v72, v73, v74, v75, v76);
    ActorId = *(_QWORD *)(v7 + 40);
    if ( !ActorId )
      goto LABEL_418;
    BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0);
    ActorId = (__int64)*v386;
    if ( !*v386 )
      goto LABEL_418;
    BattleCommandData__UpdateCritical(
      (BattleCommandData_o *)ActorId,
      *v385,
      (BattleServantData_o *)v54,
      this->fields.data,
      0);
    ActorId = (__int64)*v386;
    if ( !*v386 )
      goto LABEL_418;
    BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v385, 0);
    ActorId = (__int64)*v385;
    if ( !*v385 )
      goto LABEL_418;
    AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v386, 0);
    v377 = v54;
    if ( AttackType != 2 )
      goto LABEL_53;
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_418;
    isEnemyID = BattleData__isEnemyID((BattleData_o *)ActorId, Target, 0);
    ActorId = (__int64)this->fields.data;
    if ( isEnemyID )
    {
      if ( !ActorId )
        goto LABEL_418;
      FieldEnemyServantIDList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldEnemyServantIDList(
                                                                                       (BattleData_o *)ActorId,
                                                                                       1,
                                                                                       0);
    }
    else
    {
      if ( !ActorId )
        goto LABEL_418;
      FieldEnemyServantIDList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantIDList(
                                                                                       (BattleData_o *)ActorId,
                                                                                       0,
                                                                                       0);
    }
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         FieldEnemyServantIDList,
                         (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( ActorId )
    {
      v80 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)ActorId,
        Target,
        (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
      v81 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__object____ctor(
        v81,
        (Il2CppObject *)v7,
        Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__,
        0);
      v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v80,
                                                                   (System_Func_TSource__TResult__o *)v81,
                                                                   (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v84 = BattleLogicNomal___c_TypeInfo;
      if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v82);
        v84 = BattleLogicNomal___c_TypeInfo;
      }
      static_fields = v84->static_fields;
      _9__30_9 = (System_Func_object__bool__o *)static_fields->__9__30_9;
      if ( !_9__30_9 )
      {
        if ( !*(&v84->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v84, v82);
          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
        }
        v87 = (Il2CppObject *)static_fields->__9;
        _9__30_9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__30_9, v87, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__, 0);
        v88 = BattleLogicNomal___c_TypeInfo->static_fields;
        v88->__9__30_9 = (struct System_Func_BattleServantData__bool__o *)_9__30_9;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v88->__9__30_9,
          (int32_t)_9__30_9,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
      }
      ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                           v83,
                           (System_Func_TSource__bool__o *)_9__30_9,
                           (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      if ( *v77 )
      {
        System_Collections_Generic_List_object___AddRange(
          *v77,
          (System_Collections_Generic_IEnumerable_T__o *)ActorId,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
LABEL_53:
        BattleLogicTask__RevertUnusedNoNeedUpHateBuff(task, AttackType != 2, 0);
        if ( *v77 )
        {
          ActorId = (__int64)*v386;
          if ( *v386 )
          {
            *(_DWORD *)(ActorId + 128) = (*v77)->fields._size;
            IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                               (BattleCommandData_o *)ActorId,
                                               0);
            v97 = *v77;
            v382 = IsForceAttackFunctionTargetAll;
            v98 = BattleLogicNomal___c_TypeInfo;
            if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v96);
              v98 = BattleLogicNomal___c_TypeInfo;
            }
            v99 = v98->static_fields;
            _9__30_0 = (System_Func_object__object__o *)v99->__9__30_0;
            if ( !_9__30_0 )
            {
              if ( !*(&v98->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v98, v96);
                v99 = BattleLogicNomal___c_TypeInfo->static_fields;
              }
              v101 = (Il2CppObject *)v99->__9;
              _9__30_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleServantData__BattleServantData__TypeInfo);
              System_Func_object__object____ctor(
                _9__30_0,
                v101,
                Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__,
                0);
              v102 = BattleLogicNomal___c_TypeInfo->static_fields;
              v102->__9__30_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__30_0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v102->__9__30_0,
                (int32_t)_9__30_0,
                v103,
                v104,
                v105,
                v106,
                v107,
                v108);
            }
            v371 = (__int64 *)(v7 + 56);
            v372 = task;
            targetId = Target;
            v109 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
            System_Func_object__object____ctor(
              v109,
              (Il2CppObject *)v7,
              Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__,
              0);
            ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v97,
                                 (System_Func_TSource__TKey__o *)_9__30_0,
                                 (System_Func_TSource__TElement__o *)v109,
                                 (const MethodInfo_389C670 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
            v110 = *(_QWORD *)(v7 + 24);
            if ( v110 )
            {
              v111 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
              v112 = (BattleServantData_o **)(v7 + 24);
              v113 = BuffList_TypeInfo;
              actSvtBuffData = *(BattleBuffData_o **)(v110 + 848);
              if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v9);
                v113 = BuffList_TypeInfo;
              }
              v114 = BattleLogicNomal___c_TypeInfo;
              CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v113->static_fields->CommandCodeBuffHash;
              if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v9);
                v114 = BattleLogicNomal___c_TypeInfo;
              }
              v116 = v114->static_fields;
              _9__30_2 = (System_Func_T__TResult__o *)v116->__9__30_2;
              if ( !_9__30_2 )
              {
                if ( !*(&v114->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v114, v9);
                  v116 = BattleLogicNomal___c_TypeInfo->static_fields;
                }
                v118 = (Il2CppObject *)v116->__9;
                _9__30_2 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
                System_Func_Int32Enum__Int32Enum____ctor(
                  _9__30_2,
                  v118,
                  Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__,
                  0);
                v119 = BattleLogicNomal___c_TypeInfo->static_fields;
                v119->__9__30_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__30_2;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v119->__9__30_2,
                  (int32_t)_9__30_2,
                  v120,
                  v121,
                  v122,
                  v123,
                  v124,
                  v125);
                v114 = BattleLogicNomal___c_TypeInfo;
              }
              if ( !*(&v114->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v114, v9);
                v114 = BattleLogicNomal___c_TypeInfo;
              }
              v126 = v114->static_fields;
              _9__30_3 = (System_Func_T__TResult__o *)v126->__9__30_3;
              if ( !_9__30_3 )
              {
                if ( !*(&v114->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v114, v9);
                  v126 = BattleLogicNomal___c_TypeInfo->static_fields;
                }
                v128 = (Il2CppObject *)v126->__9;
                _9__30_3 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
                System_Func_Int32Enum__object____ctor(
                  _9__30_3,
                  v128,
                  Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__,
                  0);
                v129 = BattleLogicNomal___c_TypeInfo->static_fields;
                v129->__9__30_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__30_3;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v129->__9__30_3,
                  (int32_t)_9__30_3,
                  v130,
                  v131,
                  v132,
                  v133,
                  v134,
                  v135);
              }
              v136 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
                       CommandCodeBuffHash,
                       (System_Func_TSource__TKey__o *)_9__30_2,
                       (System_Func_TSource__TElement__o *)_9__30_3,
                       (const MethodInfo_389C37C *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
              *(_QWORD *)(v7 + 32) = v136;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v7 + 32),
                (int32_t)v136,
                v137,
                v138,
                v139,
                v140,
                v141,
                v142);
              v143 = *(_QWORD *)(v7 + 40);
              v376 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
              if ( v143 )
              {
                v144 = *(_QWORD *)(v143 + 72);
                v145 = (System_Action_object__object__o *)sub_2213CCC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
                System_Action_object__object____ctor(
                  v145,
                  (Il2CppObject *)v7,
                  Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__,
                  0);
                ActorId = (__int64)actSvtBuffData;
                if ( actSvtBuffData )
                {
                  BattleBuffData__SetCommandCodeBuffActiveFlg(
                    actSvtBuffData,
                    v144,
                    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v145,
                    1,
                    0);
                  if ( *v386 )
                  {
                    commandAssistId = (*v386)->fields.commandAssistId;
                    v147 = (System_Action_object__object__o *)sub_2213CCC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
                    System_Action_object__object____ctor(
                      v147,
                      (Il2CppObject *)v7,
                      Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__,
                      0);
                    v148 = *(_QWORD *)(v7 + 40);
                    if ( v148 )
                    {
                      BattleBuffData__SetCommandAssistBuffActiveFlg(
                        actSvtBuffData,
                        commandAssistId,
                        (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v147,
                        1,
                        *(_DWORD *)(v148 + 88),
                        0);
                      ActorId = sub_2213B20(bool___TypeInfo, 2);
                      v149 = (BattleCommandData_o **)(v7 + 40);
                      if ( ActorId )
                      {
                        if ( !*(_DWORD *)(ActorId + 24) )
                          goto LABEL_380;
                        *(_BYTE *)(ActorId + 32) = 1;
                        v384 = ActorId;
                        ActorId = sub_2213B20(BattleServantData___TypeInfo, 1);
                        if ( ActorId )
                        {
                          v156 = ActorId;
                          if ( v377 )
                          {
                            ActorId = sub_2213BB4(v377, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
                            if ( !ActorId )
                            {
                              v269 = sub_2213D00(0, v157);
                              sub_2213BA0(v269, 0);
                            }
                          }
                          if ( !*(_DWORD *)(v156 + 24) )
                            goto LABEL_380;
                          *(_QWORD *)(v156 + 32) = v377;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v156 + 32),
                            (int32_t)v377,
                            v150,
                            v151,
                            v152,
                            v153,
                            v154,
                            v155);
                          *(_QWORD *)(v7 + 72) = v156;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v7 + 72),
                            v156,
                            v158,
                            v159,
                            v160,
                            v161,
                            v162,
                            v163);
                          v164 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleServantData__BattleServantData__TypeInfo);
                          System_Func_object__object____ctor(
                            v164,
                            (Il2CppObject *)v7,
                            Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__,
                            0);
                          *(_QWORD *)(v7 + 64) = v164;
                          v373 = v7 + 64;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v7 + 64),
                            (int32_t)v164,
                            v165,
                            v166,
                            v167,
                            v168,
                            v169,
                            v170);
                          v383 = sub_2213CCC(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
                          System_Func_bool__bool__object____ctor(
                            (System_Func_T1__T2__TResult__o *)v383,
                            (Il2CppObject *)v7,
                            Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__,
                            0);
                          ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( ActorId )
                          {
                            MasterData_object = DataManager__GetMasterData_object_(
                                                  (DataManager_o *)ActorId,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
                            v172 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_2213CCC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
                            BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v172, v173);
                            v175 = v384;
                            v176 = *(_QWORD *)(v384 + 24);
                            if ( (int)v176 >= 1 )
                            {
                              v177 = 0;
                              do
                              {
                                if ( v177 >= (unsigned int)v176 )
                                  goto LABEL_380;
                                v178 = *(unsigned __int8 *)(v175 + v177 + 32);
                                processArgs = (BattleLogic_DamageProcessArgs_o *)v177;
                                if ( *(_BYTE *)(v175 + v177 + 32) )
                                  v179 = 177;
                                else
                                  v179 = 138;
                                ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                                                     (BattleLogicNomal_o *)ActorId,
                                                     *v376,
                                                     actSvtBuffData,
                                                     v179,
                                                     *v386,
                                                     v174);
                                if ( !v383 )
                                  goto LABEL_418;
                                v180 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
                                ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v383 + 24))(
                                            *(_QWORD *)(v383 + 64),
                                            v178 != 0,
                                            v382,
                                            *(_QWORD *)(v383 + 40));
                                if ( !ActorId )
                                  goto LABEL_418;
                                v181 = *(_QWORD *)ActorId;
                                v182 = ActorId;
                                v183 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                {
                                  v184 = (int *)(*(_QWORD *)(v181 + 176) + 8LL);
                                  while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v184 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                  {
                                    --v183;
                                    v184 += 4;
                                    if ( !v183 )
                                      goto LABEL_99;
                                  }
                                  v185 = v181 + 16LL * *v184 + 312;
                                }
                                else
                                {
LABEL_99:
                                  v185 = sub_224BC3C(
                                           ActorId,
                                           System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                           0);
                                }
                                v186 = (*(__int64 (__fastcall **)(__int64, _QWORD))v185)(v182, *(_QWORD *)(v185 + 8));
                                v389 = v186;
                                v387.fields._list = 0;
                                *(_QWORD *)&v387.fields._index = &v389;
                                if ( !v186 )
LABEL_119:
                                  sub_2213CDC(v186, v187);
                                v188 = v186;
                                while ( 1 )
                                {
                                  v189 = *(_QWORD *)v188;
                                  v190 = *(unsigned __int16 *)(*(_QWORD *)v188 + 302LL);
                                  if ( *(_WORD *)(*(_QWORD *)v188 + 302LL) )
                                  {
                                    v191 = (int *)(*(_QWORD *)(v189 + 176) + 8LL);
                                    while ( *((System_Collections_IEnumerator_c **)v191 - 1) != System_Collections_IEnumerator_TypeInfo )
                                    {
                                      --v190;
                                      v191 += 4;
                                      if ( !v190 )
                                        goto LABEL_107;
                                    }
                                    v192 = v189 + 16LL * *v191 + 312;
                                  }
                                  else
                                  {
LABEL_107:
                                    v192 = sub_224BC3C(v188, System_Collections_IEnumerator_TypeInfo, 0);
                                  }
                                  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v192)(
                                              v188,
                                              *(_QWORD *)(v192 + 8));
                                  if ( (ActorId & 1) == 0 )
                                    break;
                                  v193 = v389;
                                  if ( !v389 )
                                    sub_2213CDC(ActorId, v9);
                                  v194 = *(_QWORD *)v389;
                                  v195 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                  if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                  {
                                    v196 = (int *)(*(_QWORD *)(v194 + 176) + 8LL);
                                    while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v196 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                    {
                                      --v195;
                                      v196 += 4;
                                      if ( !v195 )
                                        goto LABEL_115;
                                    }
                                    v197 = v194 + 16LL * *v196 + 312;
                                  }
                                  else
                                  {
LABEL_115:
                                    v197 = sub_224BC3C(
                                             v389,
                                             System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                             0);
                                  }
                                  v198 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v197)(
                                                           v193,
                                                           *(_QWORD *)(v197 + 8));
                                  if ( !v111 )
                                    sub_2213CDC(v198, v198);
                                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                                           v111,
                                           v198,
                                           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                                  BattleLogicNomal__commandCodeBuffProcess(
                                    this,
                                    (BattleBuffData_CheckInvokeBuff_o *)Item,
                                    (SkillLvMaster_o *)MasterData_object,
                                    *v386,
                                    v180,
                                    *v31,
                                    0,
                                    v172,
                                    v370);
                                  v188 = v389;
                                  if ( !v389 )
                                    goto LABEL_119;
                                }
                                v200 = v389;
                                if ( v389 )
                                {
                                  v201 = *(_QWORD *)v389;
                                  v202 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                  if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                  {
                                    v203 = (int *)(*(_QWORD *)(v201 + 176) + 8LL);
                                    while ( *((System_IDisposable_c **)v203 - 1) != System_IDisposable_TypeInfo )
                                    {
                                      --v202;
                                      v203 += 4;
                                      if ( !v202 )
                                        goto LABEL_125;
                                    }
                                    v204 = v201 + 16LL * *v203 + 312;
                                  }
                                  else
                                  {
LABEL_125:
                                    v204 = sub_224BC3C(v389, System_IDisposable_TypeInfo, 0);
                                  }
                                  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v204)(
                                              v200,
                                              *(_QWORD *)(v204 + 8));
                                }
                                v175 = v384;
                                LODWORD(v176) = *(_DWORD *)(v384 + 24);
                                v177 = (unsigned __int64)&processArgs->klass + 1;
                              }
                              while ( (__int64)&processArgs->klass + 1 < (int)v176 );
                              if ( (int)v176 >= 1 )
                              {
                                v205 = 0;
                                while ( v205 < (unsigned int)v176 )
                                {
                                  processArgsa = (BattleLogic_DamageProcessArgs_o *)v205;
                                  v206 = *(unsigned __int8 *)(v175 + v205 + 32);
                                  ActorId = sub_2213B20(BuffList_ACTION___TypeInfo, 2);
                                  v207 = (BuffList_ACTION_array *)ActorId;
                                  if ( v206 )
                                  {
                                    if ( !ActorId )
                                      goto LABEL_418;
                                    v208 = *(_DWORD *)(ActorId + 24);
                                    if ( !v208 )
                                      break;
                                    *(_DWORD *)(ActorId + 32) = 118;
                                    if ( v208 == 1 )
                                      break;
                                    v209 = 120;
                                  }
                                  else
                                  {
                                    if ( !ActorId )
                                      goto LABEL_418;
                                    v210 = *(_DWORD *)(ActorId + 24);
                                    if ( !v210 )
                                      break;
                                    *(_DWORD *)(ActorId + 32) = 88;
                                    if ( v210 == 1 )
                                      break;
                                    v209 = 98;
                                  }
                                  *(_DWORD *)(ActorId + 36) = v209;
                                  ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v383 + 24))(
                                              *(_QWORD *)(v383 + 64),
                                              v206 != 0,
                                              v382,
                                              *(_QWORD *)(v383 + 40));
                                  if ( !ActorId )
                                    goto LABEL_418;
                                  v211 = *(_QWORD *)ActorId;
                                  v212 = ActorId;
                                  v213 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                  {
                                    v214 = (int *)(*(_QWORD *)(v211 + 176) + 8LL);
                                    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v214 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                    {
                                      --v213;
                                      v214 += 4;
                                      if ( !v213 )
                                        goto LABEL_149;
                                    }
                                    v215 = v211 + 16LL * *v214 + 312;
                                  }
                                  else
                                  {
LABEL_149:
                                    v215 = sub_224BC3C(
                                             ActorId,
                                             System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                             0);
                                  }
                                  AttackSideEffectBuffList_53446068 = (BattleBuffData_BuffData_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v215)(v212, *(_QWORD *)(v215 + 8));
                                  v218 = AttackSideEffectBuffList_53446068;
                                  v389 = (__int64)AttackSideEffectBuffList_53446068;
                                  v387.fields._list = 0;
                                  *(_QWORD *)&v387.fields._index = &v389;
                                  if ( !AttackSideEffectBuffList_53446068 )
LABEL_175:
                                    sub_2213CDC(AttackSideEffectBuffList_53446068, v217);
                                  while ( 1 )
                                  {
                                    klass = v218->obj.klass;
                                    v220 = *(unsigned __int16 *)&v218->obj.klass->_2.rank;
                                    if ( *(_WORD *)&v218->obj.klass->_2.rank )
                                    {
                                      p_offset = &klass->_1.interfaceOffsets->offset;
                                      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                                      {
                                        --v220;
                                        p_offset += 4;
                                        if ( !v220 )
                                          goto LABEL_156;
                                      }
                                      v222 = (__int64)&klass->vtable[*p_offset];
                                    }
                                    else
                                    {
LABEL_156:
                                      v222 = sub_224BC3C(v218, System_Collections_IEnumerator_TypeInfo, 0);
                                    }
                                    ActorId = (*(__int64 (__fastcall **)(BattleBuffData_BuffData_array *, _QWORD))v222)(
                                                v218,
                                                *(_QWORD *)(v222 + 8));
                                    if ( (ActorId & 1) == 0 )
                                      break;
                                    v223 = v389;
                                    if ( !v389 )
                                      sub_2213CDC(ActorId, v9);
                                    v224 = *(_QWORD *)v389;
                                    v225 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                    if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                    {
                                      v226 = (int *)(*(_QWORD *)(v224 + 176) + 8LL);
                                      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v226 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                      {
                                        --v225;
                                        v226 += 4;
                                        if ( !v225 )
                                          goto LABEL_164;
                                      }
                                      v227 = v224 + 16LL * *v226 + 312;
                                    }
                                    else
                                    {
LABEL_164:
                                      v227 = sub_224BC3C(
                                               v389,
                                               System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                               0);
                                    }
                                    v229 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v227)(
                                                                    v223,
                                                                    *(_QWORD *)(v227 + 8));
                                    if ( !*v112 )
                                      sub_2213CDC(0, v228);
                                    AttackSideEffectBuffList_53446068 = BattleServantData__getAttackSideEffectBuffList_53446068(
                                                                          *v112,
                                                                          v207,
                                                                          *v149,
                                                                          v229,
                                                                          0);
                                    v230 = AttackSideEffectBuffList_53446068;
                                    if ( !AttackSideEffectBuffList_53446068 )
                                      sub_2213CDC(0, v217);
                                    max_length = AttackSideEffectBuffList_53446068->max_length;
                                    if ( (int)max_length >= 1 )
                                    {
                                      v232 = 0;
                                      do
                                      {
                                        if ( v232 >= (unsigned int)max_length )
                                          sub_2213CE4(AttackSideEffectBuffList_53446068);
                                        if ( !*v31 )
                                          sub_2213CDC(0, v217);
                                        v233 = v230->m_Items[v232];
                                        logicfunction = this->fields.logicfunction;
                                        SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v31, 3, 0);
                                        if ( !logicfunction )
                                          sub_2213CDC(SideEffectActionData, v236);
                                        BattleLogicFunction__SetSideEffectBuff(
                                          logicfunction,
                                          (SkillLvMaster_o *)MasterData_object,
                                          SideEffectActionData,
                                          v233,
                                          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v172,
                                          0,
                                          0);
                                        LODWORD(max_length) = v230->max_length;
                                        ++v232;
                                      }
                                      while ( (__int64)v232 < (int)max_length );
                                    }
                                    v112 = v385;
                                    v149 = v386;
                                    v218 = (BattleBuffData_BuffData_array *)v389;
                                    if ( !v389 )
                                      goto LABEL_175;
                                  }
                                  v237 = v389;
                                  if ( v389 )
                                  {
                                    v238 = *(_QWORD *)v389;
                                    v239 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                    if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                    {
                                      v240 = (int *)(*(_QWORD *)(v238 + 176) + 8LL);
                                      while ( *((System_IDisposable_c **)v240 - 1) != System_IDisposable_TypeInfo )
                                      {
                                        --v239;
                                        v240 += 4;
                                        if ( !v239 )
                                          goto LABEL_181;
                                      }
                                      v241 = v238 + 16LL * *v240 + 312;
                                    }
                                    else
                                    {
LABEL_181:
                                      v241 = sub_224BC3C(v389, System_IDisposable_TypeInfo, 0);
                                    }
                                    ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v241)(
                                                v237,
                                                *(_QWORD *)(v241 + 8));
                                  }
                                  v175 = v384;
                                  LODWORD(v176) = *(_DWORD *)(v384 + 24);
                                  v205 = (unsigned __int64)&processArgsa->klass + 1;
                                  if ( (__int64)&processArgsa->klass + 1 >= (int)v176 )
                                    goto LABEL_192;
                                }
LABEL_380:
                                sub_2213CE4(ActorId);
                              }
                            }
LABEL_192:
                            ActorId = (__int64)this->fields.logic;
                            if ( ActorId )
                            {
                              BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0, 0);
                              ActorId = (__int64)*v149;
                              if ( *v149 )
                              {
                                BattleCommandData__SetOverwriteRatesIndex((BattleCommandData_o *)ActorId, 0);
                                processArgsb = (BattleLogic_DamageProcessArgs_o *)sub_2213CCC(BattleLogic_DamageProcessArgs_TypeInfo);
                                BattleLogic_DamageProcessArgs___ctor(processArgsb, 1, -1, 0, 0);
                                if ( v383 )
                                {
                                  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v383 + 24))(
                                              *(_QWORD *)(v383 + 64),
                                              0,
                                              0,
                                              *(_QWORD *)(v383 + 40));
                                  if ( ActorId )
                                  {
                                    v242 = sub_200B5F0(
                                             0,
                                             System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                             ActorId);
                                    v244 = 0;
                                    v389 = v242;
                                    v387.fields._list = 0;
                                    *(_QWORD *)&v387.fields._index = &v389;
                                    while ( 1 )
                                    {
                                      v245 = v389;
                                      if ( !v389 )
                                        sub_2213CDC(v242, v243);
                                      v246 = *(_QWORD *)v389;
                                      v247 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                      if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                      {
                                        v248 = (int *)(*(_QWORD *)(v246 + 176) + 8LL);
                                        while ( *((System_Collections_IEnumerator_c **)v248 - 1) != System_Collections_IEnumerator_TypeInfo )
                                        {
                                          --v247;
                                          v248 += 4;
                                          if ( !v247 )
                                            goto LABEL_202;
                                        }
                                        v249 = v246 + 16LL * *v248 + 312;
                                      }
                                      else
                                      {
LABEL_202:
                                        v249 = sub_224BC3C(v389, System_Collections_IEnumerator_TypeInfo, 0);
                                      }
                                      v250 = (*(__int64 (__fastcall **)(__int64, _QWORD))v249)(
                                               v245,
                                               *(_QWORD *)(v249 + 8));
                                      if ( (v250 & 1) == 0 )
                                        break;
                                      v252 = v389;
                                      if ( !v389 )
                                        sub_2213CDC(v250, v251);
                                      v253 = *(_QWORD *)v389;
                                      v254 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                      if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                      {
                                        v255 = (int *)(*(_QWORD *)(v253 + 176) + 8LL);
                                        while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v255
                                                - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                        {
                                          --v254;
                                          v255 += 4;
                                          if ( !v254 )
                                            goto LABEL_210;
                                        }
                                        v256 = v253 + 16LL * *v255 + 312;
                                      }
                                      else
                                      {
LABEL_210:
                                        v256 = sub_224BC3C(
                                                 v389,
                                                 System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                 0);
                                      }
                                      v258 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v256)(
                                                                      v252,
                                                                      *(_QWORD *)(v256 + 8));
                                      v259 = this->fields.logic;
                                      if ( !v259 )
                                        sub_2213CDC(0, v257);
                                      DamageList = BattleLogic__GetDamageList(
                                                     v259,
                                                     *v112,
                                                     v258,
                                                     *v149,
                                                     processArgsb,
                                                     *v31,
                                                     0);
                                      v262 = DamageList;
                                      if ( v258 == (BattleServantData_o *)v377 )
                                        v244 = DamageList;
                                      if ( !v258 )
                                        sub_2213CDC(DamageList, v261);
                                      buffData = v258->fields.buffData;
                                      if ( !buffData )
                                        sub_2213CDC(0, v261);
                                      if ( !buffData->fields.isNoDamage )
                                      {
                                        v264 = *v31;
                                        v265 = BattleBuffData__UseProgressingDoNotAct(buffData, v258, 0, 0);
                                        if ( !v264 )
                                          sub_2213CDC(v265, v265);
                                        BattleActionData__addSideEffectActionData(v264, v265, 1, 0);
                                      }
                                      if ( !*v112 )
                                        sub_2213CDC(0, v261);
                                      v267 = BattleServantData__checkPlayer(*v112, 0);
                                      v268 = *v31;
                                      if ( v267 )
                                      {
                                        if ( !v268 )
                                          sub_2213CDC(0, v266);
                                        if ( AttackType != 2 && !v268->fields.isCounter )
                                        {
                                          if ( !*v112 )
                                            sub_2213CDC(v268, v266);
                                          v258->fields.overkillTargetId = (*v112)->fields.uniqueId;
                                        }
                                      }
                                      else if ( !v268 )
                                      {
                                        sub_2213CDC(0, v266);
                                      }
                                      BattleActionData__setDamageData(v268, v262, 0, 0, 0, 0);
                                    }
                                    ActorId = sub_1FF98EC(&v387);
                                    if ( *(_QWORD *)v373 )
                                    {
                                      (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v373 + 24LL))(
                                        *(_QWORD *)(*(_QWORD *)v373 + 64LL),
                                        v377,
                                        *(_QWORD *)(*(_QWORD *)v373 + 40LL));
                                      ActorId = (__int64)*v149;
                                      if ( *v149 )
                                      {
                                        v270 = *v31;
                                        ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0);
                                        if ( v270 )
                                        {
                                          v270->fields.type = ActorId;
                                          ActorId = (__int64)*v31;
                                          if ( *v31 )
                                          {
                                            BattleActionData__setCommand((BattleActionData_o *)ActorId, *v149, 0);
                                            v9 = *v149;
                                            if ( *v149 )
                                            {
                                              v271 = *v31;
                                              if ( *v31 )
                                              {
                                                v271->fields.actionIndex = v9->fields.actionIndex;
                                                ActorId = (__int64)*v112;
                                                if ( *v112 )
                                                {
                                                  ActorId = BattleServantData__getMotionId(
                                                              (BattleServantData_o *)ActorId,
                                                              v9,
                                                              0);
                                                  v271->fields.motionId = ActorId;
                                                  if ( v244 )
                                                  {
                                                    v272 = *v31;
                                                    ActorId = BattleActionData_DamageData__getAttackCount(v244, 0);
                                                    if ( v272 )
                                                    {
                                                      v272->fields.attackcount = ActorId;
                                                      v273 = v384;
                                                      v274 = this->fields.data;
                                                      if ( v274 )
                                                      {
                                                        perf = v274->fields.perf;
                                                        if ( perf )
                                                        {
                                                          if ( *v149 )
                                                          {
                                                            ActorId = (__int64)perf->fields.commandPerf;
                                                            if ( ActorId )
                                                            {
                                                              BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                                                (BattlePerformanceCommandCard_o *)ActorId,
                                                                (*v149)->fields.actionIndex,
                                                                0);
                                                              if ( *v112 )
                                                              {
                                                                ActorId = (__int64)this->fields.data;
                                                                if ( ActorId )
                                                                {
                                                                  v276 = *v31;
                                                                  ActorId = BattleData__isPrevAttackMe(
                                                                              (BattleData_o *)ActorId,
                                                                              (*v112)->fields.uniqueId,
                                                                              targetId,
                                                                              0);
                                                                  if ( v276 )
                                                                  {
                                                                    v276->fields.prevattackme = ActorId & 1;
                                                                    v278 = *(_QWORD *)(v384 + 24);
                                                                    if ( (int)v278 >= 1 )
                                                                    {
                                                                      v279 = 0;
                                                                      do
                                                                      {
                                                                        if ( v279 >= (unsigned int)v278 )
                                                                          goto LABEL_380;
                                                                        v280 = *(unsigned __int8 *)(v273 + v279 + 32);
                                                                        if ( *(_BYTE *)(v273 + v279 + 32) )
                                                                          v281 = 178;
                                                                        else
                                                                          v281 = 159;
                                                                        TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList((BattleLogicNomal_o *)ActorId, *v376, actSvtBuffData, v281, *v386, v277);
                                                                        ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v383 + 24))(
                                                                                    *(_QWORD *)(v383 + 64),
                                                                                    v280,
                                                                                    v382,
                                                                                    *(_QWORD *)(v383 + 40));
                                                                        if ( !ActorId )
                                                                          goto LABEL_418;
                                                                        v283 = *(_QWORD *)ActorId;
                                                                        v284 = ActorId;
                                                                        v285 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                                        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                                        {
                                                                          v286 = (int *)(*(_QWORD *)(v283 + 176) + 8LL);
                                                                          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v286
                                                                                  - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                          {
                                                                            --v285;
                                                                            v286 += 4;
                                                                            if ( !v285 )
                                                                              goto LABEL_267;
                                                                          }
                                                                          v287 = v283 + 16LL * *v286 + 312;
                                                                        }
                                                                        else
                                                                        {
LABEL_267:
                                                                          v287 = sub_224BC3C(
                                                                                   ActorId,
                                                                                   System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                                   0);
                                                                        }
                                                                        v288 = (*(__int64 (__fastcall **)(__int64, _QWORD))v287)(
                                                                                 v284,
                                                                                 *(_QWORD *)(v287 + 8));
                                                                        v389 = v288;
                                                                        v387.fields._list = 0;
                                                                        *(_QWORD *)&v387.fields._index = &v389;
                                                                        if ( !v288 )
LABEL_287:
                                                                          sub_2213CDC(v288, v289);
                                                                        v290 = v288;
                                                                        while ( 1 )
                                                                        {
                                                                          v291 = *(_QWORD *)v290;
                                                                          v292 = *(unsigned __int16 *)(*(_QWORD *)v290 + 302LL);
                                                                          if ( *(_WORD *)(*(_QWORD *)v290 + 302LL) )
                                                                          {
                                                                            v293 = (int *)(*(_QWORD *)(v291 + 176) + 8LL);
                                                                            while ( *((System_Collections_IEnumerator_c **)v293
                                                                                    - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                            {
                                                                              --v292;
                                                                              v293 += 4;
                                                                              if ( !v292 )
                                                                                goto LABEL_275;
                                                                            }
                                                                            v294 = v291 + 16LL * *v293 + 312;
                                                                          }
                                                                          else
                                                                          {
LABEL_275:
                                                                            v294 = sub_224BC3C(
                                                                                     v290,
                                                                                     System_Collections_IEnumerator_TypeInfo,
                                                                                     0);
                                                                          }
                                                                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v294)(
                                                                                      v290,
                                                                                      *(_QWORD *)(v294 + 8));
                                                                          if ( (ActorId & 1) == 0 )
                                                                            break;
                                                                          v296 = v389;
                                                                          if ( !v389 )
                                                                            sub_2213CDC(ActorId, v295);
                                                                          v297 = *(_QWORD *)v389;
                                                                          v298 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                                                          if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                                                          {
                                                                            v299 = (int *)(*(_QWORD *)(v297 + 176) + 8LL);
                                                                            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v299
                                                                                    - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                            {
                                                                              --v298;
                                                                              v299 += 4;
                                                                              if ( !v298 )
                                                                                goto LABEL_283;
                                                                            }
                                                                            v300 = v297 + 16LL * *v299 + 312;
                                                                          }
                                                                          else
                                                                          {
LABEL_283:
                                                                            v300 = sub_224BC3C(
                                                                                     v389,
                                                                                     System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                                     0);
                                                                          }
                                                                          v301 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v300)(
                                                                                                   v296,
                                                                                                   *(_QWORD *)(v300 + 8));
                                                                          if ( !v111 )
                                                                            sub_2213CDC(v301, v301);
                                                                          v302 = System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                   v111,
                                                                                   v301,
                                                                                   (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                                                                          BattleLogicNomal__commandCodeBuffProcess(
                                                                            this,
                                                                            (BattleBuffData_CheckInvokeBuff_o *)v302,
                                                                            (SkillLvMaster_o *)MasterData_object,
                                                                            *v386,
                                                                            TargetCommandCodeBuffList,
                                                                            *v31,
                                                                            1,
                                                                            v172,
                                                                            v370);
                                                                          v290 = v389;
                                                                          if ( !v389 )
                                                                            goto LABEL_287;
                                                                        }
                                                                        v303 = v389;
                                                                        if ( v389 )
                                                                        {
                                                                          v304 = *(_QWORD *)v389;
                                                                          v305 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                                                          if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                                                          {
                                                                            v306 = (int *)(*(_QWORD *)(v304 + 176) + 8LL);
                                                                            while ( *((System_IDisposable_c **)v306 - 1) != System_IDisposable_TypeInfo )
                                                                            {
                                                                              --v305;
                                                                              v306 += 4;
                                                                              if ( !v305 )
                                                                                goto LABEL_293;
                                                                            }
                                                                            v307 = v304 + 16LL * *v306 + 312;
                                                                          }
                                                                          else
                                                                          {
LABEL_293:
                                                                            v307 = sub_224BC3C(
                                                                                     v389,
                                                                                     System_IDisposable_TypeInfo,
                                                                                     0);
                                                                          }
                                                                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v307)(
                                                                                      v303,
                                                                                      *(_QWORD *)(v307 + 8));
                                                                        }
                                                                        v273 = v384;
                                                                        ++v279;
                                                                        LODWORD(v278) = *(_DWORD *)(v384 + 24);
                                                                      }
                                                                      while ( (__int64)v279 < (int)v278 );
                                                                      if ( (int)v278 >= 1 )
                                                                      {
                                                                        v308 = 0;
                                                                        while ( v308 < (unsigned int)v278 )
                                                                        {
                                                                          v309 = *(unsigned __int8 *)(v273 + v308 + 32);
                                                                          ActorId = sub_2213B20(
                                                                                      BuffList_ACTION___TypeInfo,
                                                                                      2);
                                                                          v310 = (BuffList_ACTION_array *)ActorId;
                                                                          if ( v309 )
                                                                          {
                                                                            if ( !ActorId )
                                                                              goto LABEL_418;
                                                                            v311 = *(_DWORD *)(ActorId + 24);
                                                                            if ( !v311 )
                                                                              goto LABEL_380;
                                                                            *(_DWORD *)(ActorId + 32) = 119;
                                                                            if ( v311 == 1 )
                                                                              goto LABEL_380;
                                                                            v312 = 121;
                                                                          }
                                                                          else
                                                                          {
                                                                            if ( !ActorId )
                                                                              goto LABEL_418;
                                                                            v313 = *(_DWORD *)(ActorId + 24);
                                                                            if ( !v313 )
                                                                              goto LABEL_380;
                                                                            *(_DWORD *)(ActorId + 32) = 57;
                                                                            if ( v313 == 1 )
                                                                              goto LABEL_380;
                                                                            v312 = 80;
                                                                          }
                                                                          *(_DWORD *)(ActorId + 36) = v312;
                                                                          ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v383 + 24))(
                                                                                      *(_QWORD *)(v383 + 64),
                                                                                      v309 != 0,
                                                                                      v382,
                                                                                      *(_QWORD *)(v383 + 40));
                                                                          if ( !ActorId )
                                                                            goto LABEL_418;
                                                                          v314 = *(_QWORD *)ActorId;
                                                                          v315 = ActorId;
                                                                          v316 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                                          if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                                          {
                                                                            v317 = (int *)(*(_QWORD *)(v314 + 176) + 8LL);
                                                                            while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v317
                                                                                    - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                            {
                                                                              --v316;
                                                                              v317 += 4;
                                                                              if ( !v316 )
                                                                                goto LABEL_317;
                                                                            }
                                                                            v318 = v314 + 16LL * *v317 + 312;
                                                                          }
                                                                          else
                                                                          {
LABEL_317:
                                                                            v318 = sub_224BC3C(
                                                                                     ActorId,
                                                                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                                     0);
                                                                          }
                                                                          v319 = (BattleBuffData_BuffData_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v318)(v315, *(_QWORD *)(v318 + 8));
                                                                          v321 = v319;
                                                                          v387.fields._list = 0;
                                                                          *(_QWORD *)&v387.fields._index = &v389;
                                                                          v389 = (__int64)v319;
                                                                          if ( !v319 )
LABEL_342:
                                                                            sub_2213CDC(v319, v320);
                                                                          while ( 1 )
                                                                          {
                                                                            v322 = v321->obj.klass;
                                                                            v323 = *(unsigned __int16 *)&v321->obj.klass->_2.rank;
                                                                            if ( *(_WORD *)&v321->obj.klass->_2.rank )
                                                                            {
                                                                              v324 = &v322->_1.interfaceOffsets->offset;
                                                                              while ( *((System_Collections_IEnumerator_c **)v324
                                                                                      - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                              {
                                                                                --v323;
                                                                                v324 += 4;
                                                                                if ( !v323 )
                                                                                  goto LABEL_324;
                                                                              }
                                                                              v325 = (__int64)&v322->vtable[*v324];
                                                                            }
                                                                            else
                                                                            {
LABEL_324:
                                                                              v325 = sub_224BC3C(
                                                                                       v321,
                                                                                       System_Collections_IEnumerator_TypeInfo,
                                                                                       0);
                                                                            }
                                                                            ActorId = (*(__int64 (__fastcall **)(BattleBuffData_BuffData_array *, _QWORD))v325)(
                                                                                        v321,
                                                                                        *(_QWORD *)(v325 + 8));
                                                                            if ( (ActorId & 1) == 0 )
                                                                              break;
                                                                            v327 = v389;
                                                                            if ( !v389 )
                                                                              sub_2213CDC(ActorId, v326);
                                                                            v328 = *(_QWORD *)v389;
                                                                            v329 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                                                            if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                                                            {
                                                                              v330 = (int *)(*(_QWORD *)(v328 + 176)
                                                                                           + 8LL);
                                                                              while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v330
                                                                                      - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                              {
                                                                                --v329;
                                                                                v330 += 4;
                                                                                if ( !v329 )
                                                                                  goto LABEL_332;
                                                                              }
                                                                              v331 = v328 + 16LL * *v330 + 312;
                                                                            }
                                                                            else
                                                                            {
LABEL_332:
                                                                              v331 = sub_224BC3C(
                                                                                       v389,
                                                                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                                       0);
                                                                            }
                                                                            v333 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v331)(v327, *(_QWORD *)(v331 + 8));
                                                                            if ( !*v112 )
                                                                              sub_2213CDC(0, v332);
                                                                            v319 = BattleServantData__getAttackSideEffectBuffList_53446068(
                                                                                     *v112,
                                                                                     v310,
                                                                                     *v386,
                                                                                     v333,
                                                                                     0);
                                                                            v334 = v319;
                                                                            if ( !v319 )
                                                                              sub_2213CDC(0, v320);
                                                                            v335 = v319->max_length;
                                                                            if ( (int)v335 >= 1 )
                                                                            {
                                                                              v336 = 0;
                                                                              do
                                                                              {
                                                                                if ( v336 >= (unsigned int)v335 )
                                                                                  sub_2213CE4(v319);
                                                                                v337 = this->fields.logicfunction;
                                                                                if ( !v337 )
                                                                                  sub_2213CDC(0, v320);
                                                                                BattleLogicFunction__SetSideEffectBuff(
                                                                                  v337,
                                                                                  (SkillLvMaster_o *)MasterData_object,
                                                                                  *v31,
                                                                                  v334->m_Items[v336],
                                                                                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v172,
                                                                                  1,
                                                                                  0);
                                                                                LODWORD(v335) = v334->max_length;
                                                                                ++v336;
                                                                              }
                                                                              while ( (__int64)v336 < (int)v335 );
                                                                            }
                                                                            v321 = (BattleBuffData_BuffData_array *)v389;
                                                                            v112 = v385;
                                                                            if ( !v389 )
                                                                              goto LABEL_342;
                                                                          }
                                                                          v338 = v389;
                                                                          if ( v389 )
                                                                          {
                                                                            v339 = *(_QWORD *)v389;
                                                                            v340 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                                                            if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                                                            {
                                                                              v341 = (int *)(*(_QWORD *)(v339 + 176)
                                                                                           + 8LL);
                                                                              while ( *((System_IDisposable_c **)v341 - 1) != System_IDisposable_TypeInfo )
                                                                              {
                                                                                --v340;
                                                                                v341 += 4;
                                                                                if ( !v340 )
                                                                                  goto LABEL_348;
                                                                              }
                                                                              v342 = v339 + 16LL * *v341 + 312;
                                                                            }
                                                                            else
                                                                            {
LABEL_348:
                                                                              v342 = sub_224BC3C(
                                                                                       v389,
                                                                                       System_IDisposable_TypeInfo,
                                                                                       0);
                                                                            }
                                                                            ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v342)(
                                                                                        v338,
                                                                                        *(_QWORD *)(v342 + 8));
                                                                          }
                                                                          v273 = v384;
                                                                          ++v308;
                                                                          LODWORD(v278) = *(_DWORD *)(v384 + 24);
                                                                          if ( (__int64)v308 >= (int)v278 )
                                                                            goto LABEL_358;
                                                                        }
                                                                        goto LABEL_380;
                                                                      }
                                                                    }
LABEL_358:
                                                                    ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v383 + 24))(
                                                                                *(_QWORD *)(v383 + 64),
                                                                                0,
                                                                                0,
                                                                                *(_QWORD *)(v383 + 40));
                                                                    if ( ActorId )
                                                                    {
                                                                      v343 = sub_200B5F0(
                                                                               0,
                                                                               System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                               ActorId);
                                                                      v387.fields._list = 0;
                                                                      *(_QWORD *)&v387.fields._index = &v389;
                                                                      v389 = v343;
                                                                      if ( !v343 )
LABEL_379:
                                                                        sub_2213CDC(v343, v344);
                                                                      v345 = v343;
                                                                      while ( 1 )
                                                                      {
                                                                        v346 = *(_QWORD *)v345;
                                                                        v347 = *(unsigned __int16 *)(*(_QWORD *)v345 + 302LL);
                                                                        if ( *(_WORD *)(*(_QWORD *)v345 + 302LL) )
                                                                        {
                                                                          v348 = (int *)(*(_QWORD *)(v346 + 176) + 8LL);
                                                                          while ( *((System_Collections_IEnumerator_c **)v348
                                                                                  - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                          {
                                                                            --v347;
                                                                            v348 += 4;
                                                                            if ( !v347 )
                                                                              goto LABEL_365;
                                                                          }
                                                                          v349 = v346 + 16LL * *v348 + 312;
                                                                        }
                                                                        else
                                                                        {
LABEL_365:
                                                                          v349 = sub_224BC3C(
                                                                                   v345,
                                                                                   System_Collections_IEnumerator_TypeInfo,
                                                                                   0);
                                                                        }
                                                                        v350 = (*(__int64 (__fastcall **)(__int64, _QWORD))v349)(
                                                                                 v345,
                                                                                 *(_QWORD *)(v349 + 8));
                                                                        if ( (v350 & 1) == 0 )
                                                                          break;
                                                                        v352 = v389;
                                                                        if ( !v389 )
                                                                          sub_2213CDC(v350, v351);
                                                                        v353 = *(_QWORD *)v389;
                                                                        v354 = *(unsigned __int16 *)(*(_QWORD *)v389 + 302LL);
                                                                        if ( *(_WORD *)(*(_QWORD *)v389 + 302LL) )
                                                                        {
                                                                          v355 = (int *)(*(_QWORD *)(v353 + 176) + 8LL);
                                                                          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v355
                                                                                  - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                          {
                                                                            --v354;
                                                                            v355 += 4;
                                                                            if ( !v354 )
                                                                              goto LABEL_373;
                                                                          }
                                                                          v356 = v353 + 16LL * *v355 + 312;
                                                                        }
                                                                        else
                                                                        {
LABEL_373:
                                                                          v356 = sub_224BC3C(
                                                                                   v389,
                                                                                   System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                                   0);
                                                                        }
                                                                        v357 = (*(__int64 (__fastcall **)(__int64, _QWORD))v356)(
                                                                                 v352,
                                                                                 *(_QWORD *)(v356 + 8));
                                                                        if ( !*v112 )
                                                                          sub_2213CDC(v357, v358);
                                                                        if ( !v357 )
                                                                          sub_2213CDC(0, v358);
                                                                        if ( !this->fields.logic )
                                                                          sub_2213CDC(v357, v358);
                                                                        v343 = BattleLogic__SetDamageSideEffect(
                                                                                 this->fields.logic,
                                                                                 *v31,
                                                                                 (*v112)->fields.uniqueId,
                                                                                 *(_DWORD *)(v357 + 24),
                                                                                 *v386,
                                                                                 -1,
                                                                                 0);
                                                                        v345 = v389;
                                                                        if ( !v389 )
                                                                          goto LABEL_379;
                                                                      }
                                                                      sub_1FF98EC(&v387);
                                                                      ActorId = *v371;
                                                                      if ( *v371 )
                                                                      {
                                                                        System_Collections_Generic_List_object___GetEnumerator(
                                                                          (System_Collections_Generic_List_Enumerator_T__o *)&v387,
                                                                          (System_Collections_Generic_List_object__o *)ActorId,
                                                                          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
                                                                        v388 = v387;
                                                                        v387.fields._list = 0;
                                                                        *(_QWORD *)&v387.fields._index = &v388;
                                                                        while ( 1 )
                                                                        {
                                                                          v359 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                                                   &v388,
                                                                                   (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
                                                                          if ( !v359 )
                                                                            break;
                                                                          current = v388.fields._current;
                                                                          if ( !v388.fields._current )
                                                                            sub_2213CDC(v359, v360);
                                                                          v362 = v388.fields._current[53].klass;
                                                                          if ( !v362 )
                                                                            sub_2213CDC(v359, v360);
                                                                          LOBYTE(v362->_1.nestedTypes) = 0;
                                                                          if ( v372->fields.isCanCounterTask )
                                                                          {
                                                                            if ( !*v112 )
                                                                              sub_2213CDC(v359, v360);
                                                                            v363 = this->fields.data;
                                                                            if ( !v363 )
                                                                              sub_2213CDC(0, v360);
                                                                            BattleData__SetWasAttackTargetId(
                                                                              v363,
                                                                              (*v112)->fields.uniqueId,
                                                                              (int32_t)current[1].monitor,
                                                                              0);
                                                                          }
                                                                        }
                                                                        sub_2010280(&v387);
                                                                        ActorId = (__int64)this->fields.logicfunction;
                                                                        if ( ActorId )
                                                                        {
                                                                          BattleLogicFunction__SetSubstituteAction(
                                                                            (BattleLogicFunction_o *)ActorId,
                                                                            *v31,
                                                                            0,
                                                                            0);
                                                                          if ( *(_QWORD *)v373 )
                                                                          {
                                                                            ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v373 + 24LL))(
                                                                                        *(_QWORD *)(*(_QWORD *)v373
                                                                                                  + 64LL),
                                                                                        v377,
                                                                                        *(_QWORD *)(*(_QWORD *)v373
                                                                                                  + 40LL));
                                                                            v364 = *v31;
                                                                            if ( *v31 )
                                                                            {
                                                                              isForcedSpeedOne = v372->fields.isForcedSpeedOne;
                                                                              v364->fields.isAllAttack = AttackType == 2;
                                                                              v364->fields.isForcedSpeedOne = isForcedSpeedOne;
                                                                              if ( *v112 )
                                                                              {
                                                                                ActorId = (__int64)this->fields.data;
                                                                                if ( ActorId )
                                                                                {
                                                                                  BattleData__setCommandAttack(
                                                                                    (BattleData_o *)ActorId,
                                                                                    (*v112)->fields.uniqueId,
                                                                                    targetId,
                                                                                    0);
                                                                                  ActorId = (__int64)this->fields.logic;
                                                                                  if ( ActorId )
                                                                                  {
                                                                                    BattleLogic__checkUsedBuff(
                                                                                      (BattleLogic_o *)ActorId,
                                                                                      0);
                                                                                    ActorId = (__int64)this->fields.logic;
                                                                                    if ( ActorId )
                                                                                    {
                                                                                      BattleLogic__updateConditionsBuffAll(
                                                                                        (BattleLogic_o *)ActorId,
                                                                                        0,
                                                                                        0,
                                                                                        0);
                                                                                      v366 = this->fields.logic;
                                                                                      v367 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_2213CCC(BattleAddSkillTaskAfterCommandAttack_TypeInfo);
                                                                                      BattleAddSkillTaskAfterCommandAttack___ctor(
                                                                                        v367,
                                                                                        0);
                                                                                      if ( v366 )
                                                                                      {
                                                                                        v368 = 0;
                                                                                        BattleLogic__AddSkillTask(
                                                                                          v366,
                                                                                          (BattleAddSkillTaskAroundTargetTask_o *)v367,
                                                                                          v372,
                                                                                          targetId,
                                                                                          v368,
                                                                                          0);
                                                                                        ActorId = *v371;
                                                                                        if ( *v371 )
                                                                                        {
                                                                                          System_Collections_Generic_List_object___GetEnumerator(
                                                                                            (System_Collections_Generic_List_Enumerator_T__o *)&v387,
                                                                                            (System_Collections_Generic_List_object__o *)ActorId,
                                                                                            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
                                                                                          v388 = v387;
                                                                                          v387.fields._list = 0;
                                                                                          *(_QWORD *)&v387.fields._index = &v388;
                                                                                          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                                                                    &v388,
                                                                                                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
                                                                                          {
                                                                                            if ( !v388.fields._current )
                                                                                              sub_2213CDC(0, v369);
                                                                                            BattleServantData__SetEnableLastAttackToSelfHistory(
                                                                                              (BattleServantData_o *)v388.fields._current,
                                                                                              1,
                                                                                              0);
                                                                                          }
                                                                                          sub_2010280(&v387);
                                                                                          ActorId = ((__int64 (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v372->klass->vtable._10_SetAttacked.methodPtr)(v372, this->fields.data, 1, v372->klass->vtable._10_SetAttacked.method);
                                                                                          if ( *v112 )
                                                                                          {
                                                                                            if ( (*v112)->fields.isEnemy )
                                                                                              return *v31;
                                                                                            ActorId = (__int64)*v31;
                                                                                            if ( *v31 )
                                                                                            {
                                                                                              BattleActionData__SetExistTargetLock(
                                                                                                (BattleActionData_o *)ActorId,
                                                                                                v372,
                                                                                                0);
                                                                                              ActorId = (__int64)*v31;
                                                                                              if ( *v31 )
                                                                                              {
                                                                                                BattleActionData__SetRestoreGlobalTargetAfterAction(
                                                                                                  (BattleActionData_o *)ActorId,
                                                                                                  0);
                                                                                                return *v31;
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
LABEL_418:
    sub_2213CDC(ActorId, v9);
  }
  return result;
}


BattleActionData_o *BattleLogicNomal__CreateDoNotActAction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleLogic_o *logic; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  UnityEngine_Object_o *DoNotActByCommandSealedObject_k__BackingField; // x20
  bool v10; // w0
  __int64 v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1

  if ( (byte_5973C9B & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9116/*"MOTION_DO_NOT_ACT"*/);
    byte_5973C9B = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  BattleData__setCommandAttack(data, 0, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  BattleData__ResetWasAttackTargetId(data, 0);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_16;
  perf = logic->fields.perf;
  if ( !perf )
    goto LABEL_16;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_16;
  DoNotActByCommandSealedObject_k__BackingField = (UnityEngine_Object_o *)effectcontrol->fields._DoNotActByCommandSealedObject_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, task);
  v10 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0, 0);
  v11 = 0;
  if ( !v10 )
  {
    v11 = sub_2213CCC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0);
      if ( v11 )
      {
        v18 = StringLiteral_9116/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 72) = StringLiteral_9116/*"MOTION_DO_NOT_ACT"*/;
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 72), v18, v12, v13, v14, v15, v16, v17);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 64) = BattleCommandData__get_type((BattleCommandData_o *)data, 0);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_2213CDC(data, task);
  }
  return (BattleActionData_o *)v11;
}


BattleActionData_o *BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  __int64 v5; // x1
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0

  if ( (byte_5973C9A & 1) == 0 )
  {
    sub_2213A60(&ProgressIntervalTurnActionData_TypeInfo);
    byte_5973C9A = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_2213CCC(ProgressIntervalTurnActionData_TypeInfo);
  ProgressIntervalTurnActionData___ctor(v4, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
  if ( !v4 )
    goto LABEL_11;
  ProgressIntervalTurnActionData__AddTurnProgressServants(v4, (BattleServantData_array *)data, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  if ( !data->fields.leaderDown || !data->fields.endbattleFlg )
  {
    FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 0, 0);
    ProgressIntervalTurnActionData__AddTurnProgressServants(v4, FieldEnemyServantList, 0);
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
LABEL_11:
    sub_2213CDC(data, v5);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0, (BattleActionData_o *)v4, 0);
}


BattleLogicTask_array *BattleLogicNomal__CreateTaskAfterTreasureDvc(
        BattleLogicNomal_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 IsExistUsedTdInfo; // x0
  __int64 v7; // x1
  struct BattleData_UsedTreasureDvcInfo_o *UsedTdInfo_k__BackingField; // x8
  __int64 v9; // x1
  BattleServantData_array *FieldAliveServantArray; // x22
  BattleLogicNomal___c_c *v11; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__62_0; // x24
  Il2CppObject *v14; // x25
  struct BattleLogicNomal___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v23; // x9
  Il2CppClass **v24; // x8
  BattleServantData_o *v25; // x24
  __int64 v26; // x8
  __int64 v27; // x25
  unsigned __int64 v28; // x23
  struct BattleData_o *data; // x8
  struct BattleData_UsedTreasureDvcInfo_o *v30; // x8
  __int64 v31; // x26
  Il2CppClass *v32; // x0
  BattleLogicSkill_o *logicskill; // x27
  System_Int32_array *v34; // x28
  Il2CppClass *v35; // x0
  struct BattleData_o *v36; // x8
  struct BattleData_UsedTreasureDvcInfo_o *v37; // x8
  struct BattleLogicNomal___c_StaticFields *v38; // x8
  System_Action_object__o *_9__62_1; // x20
  Il2CppObject *v40; // x21
  struct BattleLogicNomal___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  BattleData_o *v49; // [xsp+10h] [xbp-80h]
  BattleServantData_array *v50; // [xsp+18h] [xbp-78h]
  BattleServantData_o *targetSvtData; // [xsp+20h] [xbp-70h]
  unsigned __int64 v52; // [xsp+28h] [xbp-68h]

  if ( (byte_5973C9D & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_System_Array_Sort_BattleServantData___);
    sub_2213A60(&System_Comparison_BattleServantData__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__62_0__);
    sub_2213A60(&Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__62_1__);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C9D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !bData )
    goto LABEL_46;
  IsExistUsedTdInfo = BattleData__IsExistUsedTdInfo(bData, 0);
  if ( (IsExistUsedTdInfo & 1) == 0 )
    goto LABEL_44;
  UsedTdInfo_k__BackingField = bData->fields._UsedTdInfo_k__BackingField;
  if ( !UsedTdInfo_k__BackingField )
    goto LABEL_46;
  targetSvtData = BattleData__getServantData(bData, UsedTdInfo_k__BackingField->fields._ActorId_k__BackingField, 0);
  if ( !targetSvtData )
  {
    BattleData__ResetUsedTdInfo(bData, 0);
LABEL_44:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_46:
    sub_2213CDC(IsExistUsedTdInfo, v7);
  }
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(bData, 3, 0, 1, 0);
  v49 = bData;
  v11 = BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v9);
    v11 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__62_0 = (System_Comparison_T__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__62_0,
      v14,
      Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__62_0__,
      0);
    v15 = BattleLogicNomal___c_TypeInfo->static_fields;
    v15->__9__62_0 = (struct System_Comparison_BattleServantData__o *)_9__62_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__62_0, (int32_t)_9__62_0, v16, v17, v18, v19, v20, v21);
  }
  System_Array__Sort_object__58432120(
    (System_Object_array *)FieldAliveServantArray,
    _9__62_0,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_BattleServantData___);
  if ( !FieldAliveServantArray )
    goto LABEL_46;
  max_length_low = LODWORD(FieldAliveServantArray->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v23 = 0;
    v50 = FieldAliveServantArray;
    while ( 1 )
    {
      if ( v23 >= max_length_low )
        goto LABEL_47;
      v24 = &FieldAliveServantArray->obj.klass + v23;
      v25 = (BattleServantData_o *)v24[4];
      if ( !v25 )
        goto LABEL_46;
      v52 = v23;
      IsExistUsedTdInfo = (__int64)BattleServantData__GetTreasureDvcPostAfterBuffList(
                                     (BattleServantData_o *)v24[4],
                                     this->fields.data,
                                     targetSvtData,
                                     0);
      if ( !IsExistUsedTdInfo )
        goto LABEL_46;
      v26 = *(_QWORD *)(IsExistUsedTdInfo + 24);
      v27 = IsExistUsedTdInfo;
      if ( (int)v26 >= 1 )
        break;
LABEL_34:
      FieldAliveServantArray = v50;
      max_length_low = LODWORD(v50->max_length);
      v23 = v52 + 1;
      if ( (int)v52 + 1 >= (int)max_length_low )
        goto LABEL_35;
    }
    v28 = 0;
    while ( v28 < (unsigned int)v26 )
    {
      IsExistUsedTdInfo = (__int64)BattleServantData__CreateFunctionSkillInfoData(
                                     v25,
                                     *(BattleBuffData_BuffData_o **)(v27 + 32 + 8 * v28),
                                     0);
      data = this->fields.data;
      if ( !data )
        goto LABEL_46;
      v30 = data->fields._UsedTdInfo_k__BackingField;
      if ( !v30 )
        goto LABEL_46;
      v31 = IsExistUsedTdInfo;
      if ( !IsExistUsedTdInfo )
        goto LABEL_46;
      v32 = int___TypeInfo;
      logicskill = this->fields.logicskill;
      *(_QWORD *)(v31 + 168) = *(_QWORD *)&v30->fields._NpValue_k__BackingField;
      IsExistUsedTdInfo = sub_2213B20(v32, 1);
      if ( !IsExistUsedTdInfo )
        goto LABEL_46;
      v34 = (System_Int32_array *)IsExistUsedTdInfo;
      if ( !*(_DWORD *)(IsExistUsedTdInfo + 24) )
        break;
      v35 = int___TypeInfo;
      v34->m_Items[0] = *(_DWORD *)(v31 + 24);
      IsExistUsedTdInfo = sub_2213B20(v35, 1);
      v36 = this->fields.data;
      if ( !v36 )
        goto LABEL_46;
      v37 = v36->fields._UsedTdInfo_k__BackingField;
      if ( !v37 || !IsExistUsedTdInfo )
        goto LABEL_46;
      if ( !*(_DWORD *)(IsExistUsedTdInfo + 24) )
        break;
      *(_DWORD *)(IsExistUsedTdInfo + 32) = v37->fields._ActorId_k__BackingField;
      if ( !logicskill )
        goto LABEL_46;
      IsExistUsedTdInfo = (__int64)BattleLogicSkill__taskSkill(
                                     logicskill,
                                     (BattleSkillInfoData_o *)v31,
                                     v34,
                                     (System_Int32_array *)IsExistUsedTdInfo,
                                     0,
                                     0,
                                     0,
                                     0,
                                     0,
                                     0);
      if ( !v5 )
        goto LABEL_46;
      System_Collections_Generic_List_object___AddRange(
        v5,
        (System_Collections_Generic_IEnumerable_T__o *)IsExistUsedTdInfo,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      LODWORD(v26) = *(_DWORD *)(v27 + 24);
      if ( (__int64)++v28 >= (int)v26 )
        goto LABEL_34;
    }
LABEL_47:
    sub_2213CE4(IsExistUsedTdInfo);
  }
LABEL_35:
  BattleData__ResetUsedTdInfo(v49, 0);
  IsExistUsedTdInfo = (__int64)BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v7);
    IsExistUsedTdInfo = (__int64)BattleLogicNomal___c_TypeInfo;
  }
  v38 = *(struct BattleLogicNomal___c_StaticFields **)(IsExistUsedTdInfo + 184);
  _9__62_1 = (System_Action_object__o *)v38->__9__62_1;
  if ( !_9__62_1 )
  {
    if ( !*(_DWORD *)(IsExistUsedTdInfo + 228) )
    {
      j_il2cpp_runtime_class_init_0(IsExistUsedTdInfo, v7);
      v38 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__62_1 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleLogicTask__TypeInfo);
    System_Action_object____ctor(_9__62_1, v40, Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__62_1__, 0);
    v41 = BattleLogicNomal___c_TypeInfo->static_fields;
    v41->__9__62_1 = (struct System_Action_BattleLogicTask__o *)_9__62_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->__9__62_1, (int32_t)_9__62_1, v42, v43, v44, v45, v46, v47);
  }
  if ( !v5 )
    goto LABEL_46;
  System_Collections_Generic_List_object___ForEach(
    v5,
    (System_Action_T__o *)_9__62_1,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNomal__CreateTaskAttackPhaseStart(
        BattleLogicNomal_o *this,
        int32_t logicType,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  long double v4; // q0
  BattleLogicNomal_o *v7; // x20
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v9; // x1
  BattleServantData_array *v10; // x23
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v12; // x19
  Il2CppClass *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 i; // x22
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  BattleServantData_o *v33; // x0
  BattleServantData_o *v34; // x22
  _QWORD *AttackPhaseStartFunctionBuffList; // x0
  __int64 v36; // x1
  _QWORD *v37; // x23
  __int64 v38; // x8
  unsigned __int64 v39; // x27
  BattleBuffData_BuffData_o *v40; // x24
  BattleSkillInfoData_o *FunctionSkillInfoData; // x24
  BattleLogicSkill_o *logicskill; // x25
  __int64 v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // [xsp+28h] [xbp-68h]

  v7 = this;
  if ( (byte_5973C80 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleLogicTask___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicNomal_o *)sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973C80 = 1;
  }
  if ( logicType == 77 )
  {
    if ( !battleData )
      goto LABEL_78;
    FieldPlayerServantList = BattleData__getFieldPlayerServantList(battleData, 0);
    goto LABEL_9;
  }
  if ( logicType == 78 )
  {
    if ( !battleData )
      goto LABEL_78;
    FieldPlayerServantList = BattleData__getFieldEnemyServantList(battleData, 0, 0);
LABEL_9:
    v10 = FieldPlayerServantList;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    if ( logicType == 77 )
    {
      this = (BattleLogicNomal_o *)v7->fields.logic;
      if ( !this )
        goto LABEL_78;
      this = (BattleLogicNomal_o *)BattleLogic__GetPlayerAttackPreselectTargetTaskArray((BattleLogic_o *)this, 0);
      if ( !v12 )
        goto LABEL_78;
      System_Collections_Generic_List_object___AddRange(
        v12,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    }
    if ( v10 )
    {
      klass = v10->obj.klass;
      v14 = *(unsigned __int16 *)&v10->obj.klass->_2.rank;
      if ( *(_WORD *)&v10->obj.klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_20;
        }
        v16 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_20:
        v16 = sub_224BC3C(v10, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(BattleServantData_array *, _QWORD))v16)(v10, *(_QWORD *)(v16 + 8));
      v50 = v22;
      if ( !v22 )
        sub_2213CDC(0, v23);
      for ( i = v22; ; i = v50 )
      {
        v25 = *(_QWORD *)i;
        v26 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
        if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_37;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_37:
          v28 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        this = (BattleLogicNomal_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(i, *(_QWORD *)(v28 + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !v50 )
          sub_2213CDC(this, *(_QWORD *)&logicType);
        v29 = *(_QWORD *)v50;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_45;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_45:
          v32 = sub_224BC3C(v50, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v33 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v50, *(_QWORD *)(v32 + 8));
        v34 = v33;
        if ( v33 && BattleServantData__isAliveLogic(v33, 1, 0) )
        {
          AttackPhaseStartFunctionBuffList = BattleServantData__GetAttackPhaseStartFunctionBuffList(v34, 0);
          v37 = AttackPhaseStartFunctionBuffList;
          if ( !AttackPhaseStartFunctionBuffList )
            sub_2213CDC(0, v36);
          v38 = AttackPhaseStartFunctionBuffList[3];
          if ( (int)v38 >= 1 )
          {
            v39 = 0;
            do
            {
              if ( v39 >= (unsigned int)v38 )
                sub_2213CE4(AttackPhaseStartFunctionBuffList);
              v40 = (BattleBuffData_BuffData_o *)v37[v39 + 4];
              AttackPhaseStartFunctionBuffList = BattleServantData__getSkillFromBuff(
                                                   (SkillLvMaster_o *)Master_object,
                                                   v40,
                                                   0);
              if ( AttackPhaseStartFunctionBuffList )
              {
                FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(v34, v40, 0);
                logicskill = v7->fields.logicskill;
                v43 = sub_2213B20(int___TypeInfo, 1);
                if ( !v43 )
                  goto LABEL_72;
                if ( !*(_DWORD *)(v43 + 24) )
                  sub_2213CE4(v43);
                *(_DWORD *)(v43 + 32) = v34->fields.uniqueId;
                if ( !logicskill )
LABEL_72:
                  sub_2213CDC(v43, v44);
                v45 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                       logicskill,
                                                                       FunctionSkillInfoData,
                                                                       (System_Int32_array *)v43,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0);
                if ( !v12 )
                  sub_2213CDC(v45, v45);
                System_Collections_Generic_List_object___AddRange(
                  v12,
                  v45,
                  (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              }
              LODWORD(v38) = *((_DWORD *)v37 + 6);
              ++v39;
            }
            while ( (__int64)v39 < (int)v38 );
          }
        }
      }
      if ( v50 )
      {
        v46 = *(_QWORD *)v50;
        v47 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
        {
          v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
          {
            --v47;
            v48 += 4;
            if ( !v47 )
              goto LABEL_67;
          }
          v49 = v46 + 16LL * *v48 + 312;
        }
        else
        {
LABEL_67:
          v49 = sub_224BC3C(v50, System_IDisposable_TypeInfo, 0);
        }
        this = (BattleLogicNomal_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v50, *(_QWORD *)(v49 + 8));
      }
      if ( v12 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_78:
    sub_2213CDC(this, *(_QWORD *)&logicType);
  }
  v17 = Method_System_Array_Empty_BattleLogicTask___;
  v18 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v18 )
  {
    sub_224B964(Method_System_Array_Empty_BattleLogicTask___);
    v18 = v17[7];
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_224B908(v4);
  if ( !*(_DWORD *)(v19 + 228) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v19, *(_QWORD *)&logicType);
  v20 = *(_QWORD *)(v17[7] + 16LL);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_224B908(v4);
  return **(BattleLogicTask_array ***)(v20 + 184);
}


BattleActionData_o *BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  BattleServantData_o *v5; // x19
  __int64 v6; // x22
  int v7; // w22
  __int64 v8; // x21
  __int64 v9; // x1
  BattleActorControl_o *PartsActor; // x23
  __int64 v11; // x1
  BattleActorControl_o *v12; // x22
  __int64 *v13; // x8
  __int64 v14; // x1
  int32_t uniqueId; // w8
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5973C8E & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6717/*"FOCUS_UNDER"*/);
    sub_2213A60(&StringLiteral_6715/*"FOCUS_CENTER"*/);
    sub_2213A60(&StringLiteral_6719/*"FOCUS_UP"*/);
    byte_5973C8E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, data->fields.justDeadTargetId, 0);
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_42;
  v5 = (BattleServantData_o *)data;
  v4->fields.justDeadTargetId = -1;
  if ( !data )
    return 0;
  if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)data, 0)
    || (v6 = 0, BattleServantData__isMultiTargetUnder(v5, 0)) )
  {
    data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(v5, 0);
    if ( !this->fields.data )
      goto LABEL_42;
    v7 = (int)data;
    v8 = StringLiteral_6715/*"FOCUS_CENTER"*/;
    PartsActor = BattleData__GetPartsActor(this->fields.data, 1, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_42;
      data = (BattleData_o *)PartsActor->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_42;
        v8 = StringLiteral_6715/*"FOCUS_CENTER"*/;
        BattleData__SetTargetId(data, PartsActor->fields.uniqueID, 0);
      }
    }
    if ( v7 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v12 = BattleData__GetPartsActor(data, 2, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v12 )
        goto LABEL_42;
      data = (BattleData_o *)v12->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      if ( !BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v13 = &StringLiteral_6717/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v7 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v12 = BattleData__GetPartsActor(data, 0, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v12 )
        goto LABEL_42;
      data = (BattleData_o *)v12->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      if ( !BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v13 = &StringLiteral_6719/*"FOCUS_UP"*/;
    }
    v8 = *v13;
    BattleData__SetTargetId(data, v12->fields.uniqueID, 0);
LABEL_39:
    v6 = sub_2213CCC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0);
    if ( v6 )
    {
      uniqueId = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = uniqueId;
      *(_DWORD *)(v6 + 36) = uniqueId;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0);
      *(_QWORD *)(v6 + 72) = v8;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 72), v8, v16, v17, v18, v19, v20, v21);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_2213CDC(data, method);
  }
  return (BattleActionData_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNomal__EndReactionPlayerComboEnd(
        BattleLogicNomal_o *this,
        int32_t logicType,
        BattleData_o *data,
        const MethodInfo *method)
{
  long double v4; // q0
  BattleLogicNomal_o *v5; // x19
  struct BattleLogic_o *logic; // x8
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  v5 = this;
  if ( (byte_5973C82 & 1) == 0 )
  {
    this = (BattleLogicNomal_o *)sub_2213A60(&Method_System_Array_Empty_BattleLogicTask___);
    byte_5973C82 = 1;
  }
  logic = v5->fields.logic;
  if ( !logic )
    sub_2213CDC(this, *(_QWORD *)&logicType);
  logic->fields.isCheckInterruptMotionTask = 1;
  v7 = Method_System_Array_Empty_BattleLogicTask___;
  v8 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v8 )
  {
    sub_224B964(Method_System_Array_Empty_BattleLogicTask___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v4);
  if ( !*(_DWORD *)(v9 + 228) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v9, *(_QWORD *)&logicType);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v4);
  return **(BattleLogicTask_array ***)(v10 + 184);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973C84 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_5973C84 = 1;
  }
  v3 = sub_2213CCC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26___ctor(
    (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *)v3,
    -2,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)v3;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *BattleLogicNomal__GetTargetCommandCodeBuffList(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *passiveBuffDict,
        BattleBuffData_o *actSvtBuffData,
        int32_t type,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x19
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  BattleLogicNomal___c_c *v14; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__28_0; // x20
  Il2CppObject *v17; // x21
  struct BattleLogicNomal___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5973C86 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C86 = 1;
  }
  value = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_3FBDE7C *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0), !v10) )
  {
LABEL_16:
    sub_2213CDC(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v14 = BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v13);
    v14 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__28_0 = (System_Comparison_T__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v13);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__28_0,
      v17,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__,
      0);
    v18 = BattleLogicNomal___c_TypeInfo->static_fields;
    v18->__9__28_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__28_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__28_0, (int32_t)_9__28_0, v19, v20, v21, v22, v23, v24);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v10,
    _9__28_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
}


void BattleLogicNomal__IncreaseFieldBuffParamOnTurnProgress(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  BattleLogicNomal_o *v3; // x19
  int v4; // w20
  struct BattleData_o *v5; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_8;
  v3 = this;
  this = (BattleLogicNomal_o *)data->fields.battleAtkManager;
  if ( !this )
    goto LABEL_8;
  this = (BattleLogicNomal_o *)((__int64 (__fastcall *)(BattleLogicNomal_o *, void *))this->klass[1]._1.image)(
                                 this,
                                 this->klass[1]._1.gc_desc);
  if ( !v3->fields.data )
    goto LABEL_8;
  v4 = (int)this;
  this = (BattleLogicNomal_o *)BattleData__get_IsPlayerTypeTurn(v3->fields.data, 0);
  if ( ((v4 ^ (unsigned int)this) & 1) != 0 )
    return;
  v5 = v3->fields.data;
  if ( !v5 || (this = (BattleLogicNomal_o *)v5->fields._FieldEnvData_k__BackingField) == 0 )
LABEL_8:
    sub_2213CDC(this, method);
  BattleFieldEnvironmentData__TurnBuffProgressingIncrease((BattleFieldEnvironmentData_o *)this, 0);
}


bool BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex - 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicNomal__IsContinueCombo(BattleLogicNomal_o *this, bool isCheckNext, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v7; // x19
  int32_t commandIndex; // w8
  int32_t v9; // w1
  BattleCommandData_o *v10; // x0
  BattleCommandData_o *v11; // x20

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  SelectCommand = BattleData__getSelectCommand(data, this->fields.commandIndex, 0);
  if ( !SelectCommand )
    return (char)SelectCommand;
  v7 = SelectCommand;
  if ( BattleCommandData__isTreasureDvc(SelectCommand, 0) || BattleCommandData__IsAllAttack(v7, 0) )
    goto LABEL_12;
  data = this->fields.data;
  if ( !data )
LABEL_16:
    sub_2213CDC(data, isCheckNext);
  commandIndex = this->fields.commandIndex;
  if ( isCheckNext )
    v9 = commandIndex + 1;
  else
    v9 = commandIndex - 1;
  v10 = BattleData__getSelectCommand(data, v9, 0);
  if ( v10 )
  {
    v11 = v10;
    if ( BattleCommandData__isTreasureDvc(v10, 0) || BattleCommandData__IsAllAttack(v11, 0) )
    {
LABEL_12:
      LOBYTE(SelectCommand) = 0;
      return (char)SelectCommand;
    }
    LOBYTE(SelectCommand) = v7->fields.uniqueId == v11->fields.uniqueId;
  }
  else
  {
    LOBYTE(SelectCommand) = 1;
  }
  return (char)SelectCommand;
}


bool BattleLogicNomal__IsEnableToAttack(
        BattleServantData_o *attackSvtData,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  return attackSvtData
      && command
      && BattleServantData__isAlive(attackSvtData, 0, 0)
      && attackSvtData->fields.isEntry
      && BattleServantData__isAction(attackSvtData, 0)
      && BattleServantData__IsCardAction(attackSvtData, command, 0);
}


bool BattleLogicNomal__IsNotRelatedToUpdateHpBuffType(BattleBuffData_BuffData_o *buff, const MethodInfo *method)
{
  return !BattleLogicNomal__IsRelatedToUpdateHpBuffType(buff, method);
}


bool BattleLogicNomal__IsRelatedToUpdateHpBuffType(BattleBuffData_BuffData_o *buff, const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v2; // x19
  __int64 v3; // x1
  int32_t BuffType; // w19

  v2 = buff;
  if ( (byte_5973C8F & 1) == 0 )
  {
    buff = (BattleBuffData_BuffData_o *)sub_2213A60(&BuffList_TypeInfo);
    byte_5973C8F = 1;
  }
  if ( !v2 )
    sub_2213CDC(buff, method);
  BuffType = BattleBuffData_BuffData__get_BuffType(v2, 0);
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v3);
  return BuffList__CheckUpdateHp(BuffType, 0);
}


void BattleLogicNomal__PreCheckUseShiftGuts(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  __int64 v5; // x1
  BattleLogicNomal___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__55_0; // x20
  Il2CppObject *v10; // x21
  struct BattleLogicNomal___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BattleData_c *klass; // x8
  BattleData_o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 IsShiftGuts; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  BattleServantData_o *v33; // x0
  __int64 v34; // x1
  BattleServantData_o *v35; // x19
  __int64 v36; // x1
  BattleBuffData_CheckIndividualitiesData_array *v37; // x2
  BattleBuffData_o *buffData; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // [xsp+18h] [xbp-38h]

  if ( (byte_5973C97 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__PreCheckUseShiftGuts_b__55_0__);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C97 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_45;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 1, 0);
  v6 = BattleLogicNomal___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldEnemyServantList;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v5);
    v6 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__55_0 = (System_Func_object__bool__o *)static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__55_0, v10, Method_BattleLogicNomal___c__PreCheckUseShiftGuts_b__55_0__, 0);
    v11 = BattleLogicNomal___c_TypeInfo->static_fields;
    v11->__9__55_0 = (struct System_Func_BattleServantData__bool__o *)_9__55_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__55_0, (int32_t)_9__55_0, v12, v13, v14, v15, v16, v17);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           v7,
                           (System_Func_TSource__bool__o *)_9__55_0,
                           (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_45:
    sub_2213CDC(data, method);
  klass = data->klass;
  v19 = data;
  v20 = *(unsigned __int16 *)&data->klass->_2.rank;
  if ( *(_WORD *)&data->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_15;
    }
    v22 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v22 = sub_224BC3C(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  IsShiftGuts = (*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  v43 = IsShiftGuts;
  while ( 1 )
  {
    if ( !v43 )
      sub_2213CDC(IsShiftGuts, v24);
    v25 = *(_QWORD *)v43;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_224BC3C(v43, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v43, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v43;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_30;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_30:
      v32 = sub_224BC3C(v43, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v33 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v43, *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      sub_2213CDC(0, v34);
    v37 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(v33, 0);
    buffData = v35->fields.buffData;
    if ( !buffData )
      sub_2213CDC(0, v36);
    IsShiftGuts = BattleBuffData__IsShiftGuts(buffData, v35, v37, 0);
  }
  v39 = *(_QWORD *)v43;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_39;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_39:
    v42 = sub_224BC3C(v43, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v43, *(_QWORD *)(v42 + 8));
}


void BattleLogicNomal__ResetCommandIndex(BattleLogicNomal_o *this, const MethodInfo *method)
{
  this->fields.commandIndex = 0;
}


void BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  __int64 v6; // x1
  BattleActorControl_o *PartsActor; // x20

  if ( (byte_5973C91 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973C91 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( data->fields.isMultiTargetBattle )
  {
    justDeadTargetId = data->fields.justDeadTargetId;
    if ( justDeadTargetId != -1 )
    {
      ServantData = BattleData__getServantData(data, justDeadTargetId, 0);
      if ( ServantData )
      {
        data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(ServantData, 0);
        if ( !this->fields.data )
          goto LABEL_17;
        PartsActor = BattleData__GetPartsActor(this->fields.data, (int32_t)data, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( !PartsActor )
            goto LABEL_17;
          data = (BattleData_o *)PartsActor->fields.battleSvtData;
          if ( !data )
            goto LABEL_17;
          if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) )
          {
            data = this->fields.data;
            if ( data )
            {
              BattleData__SetTargetId(data, PartsActor->fields.uniqueID, 0);
              return;
            }
LABEL_17:
            sub_2213CDC(data, method);
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNomal__StartReactionPlayerComboEnd(
        BattleLogicNomal_o *this,
        int32_t logicType,
        BattleData_o *data,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *IsComboEnd; // x0
  __int64 v7; // x1
  long double v8; // q0
  struct BattleLogic_o *logic; // x8
  struct BattleLogic_o *v10; // x8
  BattleLogicReaction_o *logicReaction; // x19
  PlayerComboEndServantReactTaskCreator_o *v12; // x20
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_5973C81 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleLogicTask___);
    sub_2213A60(&PlayerComboEndServantReactTaskCreator_TypeInfo);
    byte_5973C81 = 1;
  }
  IsComboEnd = (ServantReactTaskCreator_o *)BattleLogicNomal__IsComboEnd(this, *(const MethodInfo **)&logicType);
  if ( ((unsigned __int8)IsComboEnd & 1) != 0 )
  {
    if ( !data )
      goto LABEL_20;
    if ( data->fields._IsCommandAttacked_k__BackingField )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        logic->fields.isCheckInterruptMotionTask = 0;
        BattleData__SetCommandAttacked(data, 0, 0);
        v10 = this->fields.logic;
        if ( v10 )
        {
          logicReaction = v10->fields.logicReaction;
          v12 = (PlayerComboEndServantReactTaskCreator_o *)sub_2213CCC(PlayerComboEndServantReactTaskCreator_TypeInfo);
          PlayerComboEndServantReactTaskCreator___ctor(v12, 0);
          if ( v12 )
          {
            IsComboEnd = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v12, 0);
            if ( logicReaction )
              return BattleLogicReaction__CreateTasks(logicReaction, IsComboEnd, 0);
          }
        }
      }
LABEL_20:
      sub_2213CDC(IsComboEnd, v7);
    }
  }
  v14 = Method_System_Array_Empty_BattleLogicTask___;
  v15 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v15 )
  {
    sub_224B964(Method_System_Array_Empty_BattleLogicTask___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908(v8);
  if ( !*(_DWORD *)(v16 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v16, v7);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_224B908(v8);
  return **(BattleLogicTask_array ***)(v17 + 184);
}


void BattleLogicNomal__UpdateApplyAttachCardBuffIndexList(
        BattleLogicNomal_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data || (this = (BattleLogicNomal_o *)data->fields._FieldEnvData_k__BackingField) == 0 )
    sub_2213CDC(this, targetSvtData);
  BattleFieldEnvironmentData__UpdateAttachCardBuffTargetCardIndex(
    (BattleFieldEnvironmentData_o *)this,
    targetSvtData,
    0);
}


void BattleLogicNomal__UpdateEndTurnBuff(
        BattleLogicNomal_o *this,
        System_Int32_array *prevFieldIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x20
  BattleData_o *data; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *QuestIndividualities; // x21
  long double v8; // q0
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  struct BattleData_o *v17; // x8

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_5973C92 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_5973C92 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0);
  if ( !QuestIndividualities )
  {
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v8);
    if ( !*(_DWORD *)(v11 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v11, v6);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_224B908(v8);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v12 + 184);
  }
  if ( !v3 )
  {
    v13 = Method_System_Array_Empty_int___;
    v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v14 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_224B908(v8);
    if ( !*(_DWORD *)(v15 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v15, v6);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
      v16 = sub_224B908(v8);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v16 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
      v17 = this->fields.data;
      if ( v17 )
      {
        data = (BattleData_o *)v17->fields.perf;
        if ( data )
        {
          BattlePerformance__updateStatus((BattlePerformance_o *)data, 0);
          return;
        }
      }
    }
LABEL_29:
    sub_2213CDC(data, prevFieldIndiv);
  }
}


BattleLogicTask_array *BattleLogicNomal__checkReflectionTask(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  int v10; // w8
  unsigned int v11; // w27
  BattleServantData_o *v12; // x22
  int v13; // w8
  __int64 v14; // x23
  unsigned int v15; // w28
  __int64 v16; // x24
  BattleSkillInfoData_o *v17; // x25
  __int64 v18; // x8
  __int64 v19; // x8
  BattleLogicTask_o *v20; // x24
  BattleLogic_o *logic; // x25
  __int64 v22; // x26
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5973C96 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask___TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973C96 = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( ltype == 40 )
  {
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_44;
    Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 1, 0);
  }
  else
  {
    if ( ltype != 41 )
      goto LABEL_44;
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_44;
    Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  }
  v9 = Instance;
  if ( !Instance )
    goto LABEL_44;
  v10 = *(_DWORD *)(Instance + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= v10 )
        goto LABEL_45;
      v12 = *(BattleServantData_o **)(v9 + 8LL * (int)v11 + 32);
      if ( !v12 )
        goto LABEL_44;
      if ( !v12->fields.status )
      {
        Instance = BattleServantData__isAlive(v12, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v12, 0);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_44;
          v13 = *(_DWORD *)(Instance + 24);
          v14 = Instance;
          if ( v13 >= 1 )
          {
            v15 = 0;
            while ( v15 < v13 )
            {
              v16 = *(_QWORD *)(v14 + 8LL * (int)v15 + 32);
              v17 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v17, 0);
              if ( !v17 )
                goto LABEL_44;
              v17->fields.svtUniqueId = v12->fields.uniqueId;
              if ( !v16 )
                goto LABEL_44;
              v18 = *(_QWORD *)(v16 + 40);
              if ( !v18 )
                goto LABEL_44;
              if ( !*(_DWORD *)(v18 + 24) )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v17->klass->vtable._4_set_skillId.methodPtr)(
                           v17,
                           *(unsigned int *)(v18 + 32),
                           v17->klass->vtable._4_set_skillId.method);
              v19 = *(_QWORD *)(v16 + 40);
              if ( !v19 )
                goto LABEL_44;
              if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFE) == 0 )
                break;
              v17->fields.skilllv = *(_DWORD *)(v19 + 36);
              v20 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v20, 0);
              if ( !v20 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v20, v17, 0, 0);
              logic = this->fields.logic;
              Instance = sub_2213B20(BattleLogicTask___TypeInfo, 1);
              if ( !Instance )
                goto LABEL_44;
              v22 = Instance;
              Instance = sub_2213BB4(v20, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v41 = sub_2213D00(0, v23);
                sub_2213BA0(v41, 0);
              }
              if ( !*(_DWORD *)(v22 + 24) )
                break;
              *(_QWORD *)(v22 + 32) = v20;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 32), (int32_t)v20, v24, v25, v26, v27, v28, v29);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v12,
                (BattleBuffData_BuffData_array *)v14,
                (BattleLogicTask_array *)v22,
                0);
              if ( !v6 )
                goto LABEL_44;
              items = v6->fields._items;
              v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v20,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v20;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v20, v30, v31, v32, v33, v34, v35);
              }
              v13 = *(_DWORD *)(v14 + 24);
              if ( (int)++v15 >= v13 )
                goto LABEL_38;
            }
LABEL_45:
            sub_2213CE4(Instance);
          }
LABEL_38:
          Instance = (__int64)v12->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 1, 0, 0);
        }
      }
      v10 = *(_DWORD *)(v9 + 24);
    }
    while ( (int)++v11 < v10 );
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)Instance,
          (System_Collections_Generic_List_BattleLogicTask__o *)v6,
          1,
          0),
        !v6) )
  {
LABEL_44:
    sub_2213CDC(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicNomal__commandCodeBuffProcess(
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
  int v15; // w8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  BattleLogicFunction_o *logicfunction; // x0
  struct System_Int32_array *vals; // x8
  int max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v27; // x1
  SkillLvEntity_o *v28; // x26
  BattleLogicFunction_o *v29; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x29
  BattleActionData_o *v32; // x28
  DataVals_array *DataValsList; // x0
  __int64 v34; // x1
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v37; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+60h] [xbp-80h] BYREF

  v37 = this;
  if ( (byte_5973C9C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_5973C9C = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !commandCodeBuffList )
    sub_2213CDC(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v39.fields._current = v38.fields._current;
  if ( isCommandAfter )
    v15 = 1;
  else
    v15 = 3;
  *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields._list;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  type = v15;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_2213CDC(v16, v17);
    current = (BattleBuffData_BuffData_o *)v39.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_2213CDC(IsEnableCommandCode, v20);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_2213CDC(IsEnableCommandCode, v20);
    v21 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, const MethodInfo *))checkInvokeBuff->klass->vtable._4_IsInvoke.methodPtr)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass->vtable._4_IsInvoke.method);
    if ( (v21 & 1) != 0 )
    {
      if ( arg != 0 && isCommandAfter )
      {
        logicfunction = v37->fields.logicfunction;
        if ( !logicfunction )
          sub_2213CDC(0, v22);
        BattleLogicFunction__SetSideEffectBuff(
          logicfunction,
          skillLvMst,
          actionData,
          current,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
          1,
          0);
      }
      else
      {
        if ( !current )
          sub_2213CDC(v21, v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_2213CDC(v21, v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_2213CE4(v21);
        if ( max_length == 1 )
          sub_2213CE4(v21);
        if ( !skillLvMst )
          sub_2213CDC(v21, v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[0], vals->m_Items[1], 0);
        v28 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_2213CDC(Entity, v27);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_2213CDC(Entity, v27);
          v29 = v37->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0);
          funcId = v28->fields.funcId;
          v32 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v28, 0);
          if ( !v29 )
            sub_2213CDC(DataValsList, v34);
          BattleLogicFunction__procList(
            v29,
            v32,
            funcId,
            DataValsList,
            0,
            0,
            isCommandAfter,
            0,
            0,
            0,
            0,
            (BattleLogicFunction_FunctionArgument_o *)arg,
            0,
            0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleActionData_o *BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleData_o *data; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w1
  BattleServantData_o *ServantData; // x0

  if ( (byte_5973C88 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&StringLiteral_9106/*"MOTION_BACK"*/);
    byte_5973C88 = 1;
  }
  v5 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5
    || (v14 = StringLiteral_9106/*"MOTION_BACK"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_9106/*"MOTION_BACK"*/,
        *(_DWORD *)(v5 + 32) = uniqueId,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 72), v14, v8, v9, v10, v11, v12, v13),
        (data = this->fields.data) == 0) )
  {
    sub_2213CDC(data, v7);
  }
  ServantData = BattleData__getServantData(data, uniqueId, 0);
  if ( ServantData && ServantData->fields.isEnemy )
    BattleActionData__UpdateBuffAfterActionFlag((BattleActionData_o *)v5, 0, 0);
  return (BattleActionData_o *)v5;
}


BattleActionData_o *BattleLogicNomal__createBuffAddEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v6; // x20
  unsigned __int64 v7; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  struct BattleData_o *v9; // x9
  int32_t v10; // w21

  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
  if ( !data )
    goto LABEL_23;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v6 = data;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    p_rootfsm = &data->fields.rootfsm;
    while ( 1 )
    {
      v9 = this->fields.data;
      if ( !v9 )
        break;
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_24;
      data = (BattleData_o *)v9->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))&data->klass[2]._1.this_arg.bits)(
                               data,
                               p_rootfsm[v7],
                               data->klass[2]._1.element_class);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_24;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0);
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_24;
        v10 = (int)data;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0);
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_24;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v10, 1, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
LABEL_24:
            sub_2213CE4(data);
          data = (BattleData_o *)p_rootfsm[v7];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0, 0);
        }
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        goto LABEL_20;
    }
LABEL_23:
    sub_2213CDC(data, task);
  }
LABEL_20:
  BattleLogicNomal__IncreaseFieldBuffParamOnTurnProgress(this, (const MethodInfo *)task);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_23;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_23;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
  return 0;
}


BattleActionData_o *BattleLogicNomal__createBuffAddPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 data; // x0
  struct BattleData_o *v5; // x8
  __int64 v6; // x10
  __int64 v7; // x20
  _BOOL4 v8; // w9
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w21
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__49_0; // x21
  Il2CppObject *v15; // x22
  struct BattleLogicNomal___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1

  if ( (byte_5973C95 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_2213A60(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C95 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0);
  if ( !data )
    goto LABEL_33;
  v5 = this->fields.data;
  v6 = *(_QWORD *)(data + 24);
  v7 = data;
  v8 = v5 == 0;
  if ( (int)v6 >= 1 )
  {
    v9 = 0;
    v10 = data + 32;
    while ( !v8 )
    {
      if ( v9 >= (unsigned int)v6 )
        goto LABEL_34;
      data = (__int64)v5->fields.battleEvent;
      if ( !data )
        break;
      data = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)data + 872LL))(
               data,
               *(_QWORD *)(v10 + 8 * v9),
               *(_QWORD *)(*(_QWORD *)data + 880LL));
      if ( (data & 1) != 0 )
      {
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0);
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_34;
        v11 = data;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0);
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        data = BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v11, 1, 0);
        if ( (data & 1) != 0 )
        {
          if ( v9 >= *(unsigned int *)(v7 + 24) )
LABEL_34:
            sub_2213CE4(data);
          data = *(_QWORD *)(v10 + 8 * v9);
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0, 0);
        }
      }
      v5 = this->fields.data;
      LODWORD(v6) = *(_DWORD *)(v7 + 24);
      ++v9;
      v8 = v5 == 0;
      if ( (__int64)v9 >= (int)v6 )
        goto LABEL_22;
    }
LABEL_33:
    sub_2213CDC(data, task);
  }
LABEL_22:
  if ( v8 )
    goto LABEL_33;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v5->fields.aiNpcDataList;
  data = (__int64)BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, task);
    data = (__int64)BattleLogicNomal___c_TypeInfo;
  }
  static_fields = *(struct BattleLogicNomal___c_StaticFields **)(data + 184);
  _9__49_0 = (System_Action_object__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !*(_DWORD *)(data + 228) )
    {
      j_il2cpp_runtime_class_init_0(data, task);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Action_object__o *)sub_2213CCC(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(_9__49_0, v15, Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__, 0);
    v16 = BattleLogicNomal___c_TypeInfo->static_fields;
    v16->__9__49_0 = (struct System_Action_AiNpcBattleServantData__o *)_9__49_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__49_0, (int32_t)_9__49_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)_9__49_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  BattleLogicNomal__IncreaseFieldBuffParamOnTurnProgress(this, v23);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_33;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_33;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
  return 0;
}


BattleActionData_o *BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 isBuster; // x0
  __int64 v7; // x1
  struct System_Int32_array *targetIdlist; // x23
  __int64 v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int v16; // w8
  MissionNaviTransitionBoardItem_o *v17; // x0
  System_Array_o *v18; // x22
  System_RuntimeFieldHandle_o v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 *v26; // x8
  __int64 v27; // x1
  il2cpp_array_size_t max_length; // x8
  char v29; // w21
  unsigned __int64 v30; // x22
  System_Array_o *v32; // x22
  System_RuntimeFieldHandle_o v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5973C89 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&FunctionEntity_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_2213A60(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_2213A60(&StringLiteral_6700/*"FIELD_PLAYER"*/);
    sub_2213A60(&StringLiteral_6699/*"FIELD_ENEMY"*/);
    byte_5973C89 = 1;
  }
  v5 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_2213CCC(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0);
  if ( BattleLogicTask__isArts(task, 0) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0);
    isBuster = sub_2213B20(int___TypeInfo, 2);
    if ( isBuster )
    {
      v16 = *(_DWORD *)(isBuster + 24);
      v7 = isBuster;
      if ( !v16 || (*(_DWORD *)(isBuster + 32) = 102, v16 == 1) )
LABEL_30:
        sub_2213CE4(isBuster);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBuster;
        v17 = (MissionNaviTransitionBoardItem_o *)(v9 + 32);
LABEL_14:
        sub_2213A04(v17, v7, v10, v11, v12, v13, v14, v15);
        v26 = &StringLiteral_6700/*"FIELD_PLAYER"*/;
LABEL_15:
        v27 = *v26;
        *(_QWORD *)(v5 + 72) = *v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 72), v27, v20, v21, v22, v23, v24, v25);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_2213CDC(isBuster, v7);
  }
  if ( BattleLogicTask__isQuick(task, 0) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0);
    v18 = (System_Array_o *)sub_2213B20(int___TypeInfo, 3);
    v19.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v18, v19, 0);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(v9 + 32) = v18;
    v17 = (MissionNaviTransitionBoardItem_o *)(v9 + 32);
    LODWORD(v7) = (_DWORD)v18;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v5, 0);
    v32 = (System_Array_o *)sub_2213B20(int___TypeInfo, 3);
    v33.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v32, v33, 0);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v32;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v32, v34, v35, v36, v37, v38, v39);
      v26 = &StringLiteral_6699/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  max_length = targetIdlist->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v29 = 0;
  v30 = 0;
  do
  {
    if ( v30 >= (unsigned int)max_length )
      goto LABEL_30;
    isBuster = (__int64)this->fields.data;
    if ( !isBuster )
      goto LABEL_29;
    isBuster = (__int64)BattleData__getServantData((BattleData_o *)isBuster, targetIdlist->m_Items[v30], 0);
    LODWORD(max_length) = targetIdlist->max_length;
    ++v30;
    v29 |= isBuster != 0;
  }
  while ( (__int64)v30 < (int)max_length );
  if ( (v29 & 1) != 0 )
    return (BattleActionData_o *)v5;
  else
    return 0;
}


BattleActionData_o *BattleLogicNomal__createCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  __int64 v6; // x1
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  logic = this->fields.logic;
  baseActionData = 0;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_2213CDC(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0);
}


BattleActionData_o *BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x29
  __int64 Instance; // x0
  unsigned __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_Dictionary_int__object__o *v21; // x21
  SkillLvMaster_o *v22; // x24
  System_Int32_array *QuestIndividualities; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_int__o *v30; // x27
  int v31; // w8
  __int64 v32; // x21
  unsigned int v33; // w23
  __int64 v34; // x20
  __int64 *v35; // x20
  BattleServantData_o *v36; // t1
  BattleBuffData_BuffData_array *v37; // x26
  unsigned int v38; // w8
  struct System_Int32_array *items; // x9
  _QWORD *v40; // x10
  __int64 size; // x11
  BattleData_o *data; // x20
  struct BattleData_o *v43; // x8
  __int64 v44; // x24
  unsigned int v45; // w28
  System_Collections_Generic_List_object__o *v46; // x21
  __int64 v47; // x8
  __int64 v48; // x26
  BattleServantData_o *v49; // x20
  BattleServantData_o **v50; // x26
  BattleServantData_o *v51; // t1
  char v52; // w23
  System_Int32_array *v53; // x24
  BattleLogic_o *logic; // x25
  System_Func_object__bool__o *v55; // x27
  int v56; // w20
  char v57; // w20
  Il2CppObject *v58; // x2
  struct BattleData_o *v59; // x8
  BattleBuffData_BuffData_array *v60; // x20
  __int64 v61; // x8
  BattleServantData_o *v62; // x23
  int v63; // w29
  System_Int32_array *v64; // x25
  BattleLogic_o *v65; // x27
  System_Func_object__bool__o *v66; // x24
  __int64 v67; // x20
  __int64 v68; // x23
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x1
  System_Func_object__bool__o *v76; // x24
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  int32_t v87; // w9
  __int64 v88; // x25
  __int64 v89; // x0
  __int64 v90; // x1
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t current; // w1
  __int64 v98; // x1
  BattleBuffData_BuffData_o *v99; // x0
  System_Func_object__bool__o *v100; // x23
  _BOOL8 v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Object_array *v108; // x8
  Il2CppObject *v109; // x1
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  int32_t uniqueId; // w20
  System_Object_array *v114; // x2
  BattleLogicNomal___c_c *v115; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__46_1; // x20
  Il2CppObject *v118; // x23
  struct BattleLogicNomal___c_StaticFields *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x0
  int32_t v127; // w20
  struct System_Int32_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  struct BattleData_o *v131; // x8
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v133; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v135; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v137; // x21
  struct BattleData_o *v138; // x8
  const MethodInfo *v139; // x2
  struct BattleData_o *v140; // x8
  char v141; // w21
  BattleLogicFunction_o *logicfunction; // x23
  TurnAnimEffectLogicTask_o *v143; // x20
  Il2CppObject *Entity; // x0
  __int64 v145; // x1
  Il2CppObject *value; // x21
  int32_t key; // w24
  int32_t monitor; // w8
  int32_t v149; // w9
  char v150; // w29
  BattleBuffData_BuffData_o *v151; // x27
  BattleSkillInfoData_o *v152; // x25
  __int64 v153; // x0
  __int64 v154; // x1
  struct System_Int32_array *vals; // x8
  __int64 v156; // x0
  __int64 v157; // x1
  struct System_Int32_array *v158; // x8
  BattleData_o *v159; // x0
  BattleServantData_o *ServantData; // x26
  __int64 v161; // x1
  SkillLvEntity_o *v162; // x0
  __int64 v163; // x1
  SkillLvEntity_o *v164; // x20
  BattleData_o *v165; // x0
  _BOOL8 v166; // x0
  __int64 v167; // x1
  BattleLogic_o *v168; // x0
  int32_t v169; // w23
  __int64 v170; // x0
  __int64 v171; // x1
  System_Int32_array *TargetIds; // x20
  bool exists; // w27
  BattleLogicSkill_o *logicskill; // x28
  __int64 v175; // x0
  __int64 v176; // x1
  System_Collections_ICollection_o *v177; // x0
  __int64 v178; // x1
  System_Collections_ICollection_o *v179; // x20
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v182; // x0
  __int64 v183; // x1
  BattleData_o *v184; // x0
  int32_t v185; // w25
  Il2CppObject *v186; // x24
  BuffEntity_o *v187; // x0
  __int64 v188; // x1
  BattleServantData_o *v189; // x21
  BattleBuffData_CheckIndividualitiesData_o *v190; // x20
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x26
  int32_t v192; // w8
  int32_t v193; // w9
  BattleBuffData_BuffData_o *v194; // x27
  __int64 v195; // x1
  BattleSkillInfoData_o *v196; // x28
  __int64 v197; // x0
  __int64 v198; // x1
  struct System_Int32_array *v199; // x8
  __int64 v200; // x0
  __int64 v201; // x1
  struct System_Int32_array *v202; // x8
  BattleData_o *v203; // x0
  BattleServantData_o *v204; // x20
  __int64 v205; // x1
  SkillLvEntity_o *v206; // x0
  __int64 v207; // x1
  SkillLvEntity_o *v208; // x23
  BattleData_o *v209; // x0
  _BOOL8 v210; // x0
  __int64 v211; // x1
  BattleLogic_o *v212; // x0
  int32_t v213; // w23
  __int64 v214; // x0
  __int64 v215; // x1
  System_Int32_array *v216; // x20
  bool v217; // w29
  BattleLogicSkill_o *v218; // x23
  __int64 v219; // x0
  __int64 v220; // x1
  BattleLogicTask_array *v221; // x1
  BattleLogic_o *v222; // x0
  BattleData_o *v223; // x0
  BattleLogicNomal___c_c *v224; // x0
  struct BattleLogicNomal___c_StaticFields *v225; // x8
  System_Func_object__bool__o *_9__46_4; // x20
  Il2CppObject *v227; // x23
  struct BattleLogicNomal___c_StaticFields *v228; // x0
  System_String_o *v229; // x2
  System_String_o *v230; // x3
  int32_t v231; // w4
  int32_t v232; // w5
  bool v233; // w6
  bool v234; // w7
  const MethodInfo *v235; // x2
  struct BattleData_o *v236; // x8
  BattleActionData_o *v237; // x1
  System_Collections_Generic_Dictionary_int__object__o *v239; // [xsp+20h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v240; // [xsp+28h] [xbp-128h]
  System_Collections_Generic_Dictionary_int__object__o *v241; // [xsp+30h] [xbp-120h]
  __int64 v242; // [xsp+38h] [xbp-118h]
  System_Int32_array **v243; // [xsp+40h] [xbp-110h]
  BattleActionData_o *baseActData; // [xsp+48h] [xbp-108h]
  char v245; // [xsp+54h] [xbp-FCh]
  System_Collections_Generic_List_int__o *v246; // [xsp+58h] [xbp-F8h]
  System_Collections_Generic_List_object__o *v247; // [xsp+60h] [xbp-F0h]
  __int64 v248; // [xsp+68h] [xbp-E8h]
  SkillLvMaster_o *v249; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v250; // [xsp+78h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v251; // [xsp+A0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v252; // [xsp+D0h] [xbp-80h] BYREF
  int32_t targetIndex; // [xsp+ECh] [xbp-64h] BYREF

  if ( (byte_5973C93 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_BattleBuffData_BuffData____91711696);
    sub_2213A60(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_2213A60(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_BuffData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TurnAnimEffectLogicTask_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__createEndTurnEnemy_b__46_1__);
    sub_2213A60(&Method_BattleLogicNomal___c__createEndTurnEnemy_b__46_4__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass46_1__createEndTurnEnemy_b__2__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass46_1_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass46_2__createEndTurnEnemy_b__3__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass46_2_TypeInfo);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    sub_2213A60(&StringLiteral_9118/*"MOTION_ENEMY_TURN_END"*/);
    byte_5973C93 = 1;
  }
  targetIndex = 0;
  memset(&v252, 0, sizeof(v252));
  memset(&v251, 0, sizeof(v251));
  v4 = sub_2213CCC(BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass46_0___ctor((BattleLogicNomal___c__DisplayClass46_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_292;
  *(_QWORD *)(v4 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)this, v7, v8, v9, v10, v11, v12);
  baseActData = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_292;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v4 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_292;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_292;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !baseActData )
    goto LABEL_292;
  BattleActionData__setStateField(baseActData, 0);
  v14 = StringLiteral_9118/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_9118/*"MOTION_ENEMY_TURN_END"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&baseActData->fields.motionname, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v241 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v241,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v240 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v240,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_292;
  v239 = v21;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this->fields.data )
    goto LABEL_292;
  v22 = (SkillLvMaster_o *)Instance;
  QuestIndividualities = BattleData__getQuestIndividualities(this->fields.data, 0);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  v243 = (System_Int32_array **)(v4 + 24);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v4 + 24),
    (int32_t)QuestIndividualities,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_292;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_292;
  v31 = *(_DWORD *)(Instance + 24);
  v32 = Instance;
  if ( v31 >= 1 )
  {
    v33 = 0;
    do
    {
      if ( v33 >= v31 )
        goto LABEL_295;
      v34 = v32 + 8LL * (int)v33;
      v36 = *(BattleServantData_o **)(v34 + 32);
      v35 = (__int64 *)(v34 + 32);
      Instance = (__int64)v36;
      if ( !v36 )
        goto LABEL_292;
      if ( *(_BYTE *)(Instance + 572) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              this->fields.logic,
                              0,
                              0);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_295;
        v37 = (BattleBuffData_BuffData_array *)Instance;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_292;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_295;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_292;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_292;
            if ( v37->max_length )
            {
              if ( v33 >= *(_DWORD *)(v32 + 24) )
                goto LABEL_295;
              Instance = (__int64)v241;
              if ( !*v35 || !v241 )
                goto LABEL_292;
              System_Collections_Generic_Dictionary_int__object___Add(
                v241,
                *(_DWORD *)(*v35 + 24),
                &v37->obj,
                (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v38 = *(_DWORD *)(v32 + 24);
        if ( v33 >= v38 )
          goto LABEL_295;
        if ( !*v35 )
          goto LABEL_292;
        if ( !v30 )
          goto LABEL_292;
        items = v30->fields._items;
        v6 = *(unsigned int *)(*v35 + 24);
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_292;
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v30,
            v6,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          v38 = *(_DWORD *)(v32 + 24);
        }
        else
        {
          v30->fields._size = size + 1;
          items->m_Items[size] = v6;
        }
        if ( v33 >= v38 )
          goto LABEL_295;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_292;
        data = this->fields.data;
        Instance = (__int64)BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        if ( !data )
          goto LABEL_292;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(data, (BattleBuffData_o *)Instance, v37, 0);
      }
      v31 = *(_DWORD *)(v32 + 24);
    }
    while ( (int)++v33 < v31 );
  }
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_292;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v43 = this->fields.data;
  v248 = Instance;
  if ( !v43 )
    goto LABEL_292;
  v249 = v22;
  if ( v43->fields.leaderDown && v43->fields.endbattleFlg )
  {
    v245 = 0;
  }
  else
  {
    v44 = Instance;
    if ( !Instance )
      goto LABEL_292;
    if ( *(int *)(Instance + 24) >= 1 )
    {
      v45 = 0;
      v245 = 0;
      v246 = v30;
      v242 = v4;
      while ( 1 )
      {
        v46 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v46,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
        v247 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v247,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
        v47 = *(_QWORD *)(v44 + 24);
        if ( v45 >= (unsigned int)v47 )
          goto LABEL_295;
        v48 = v44 + 8LL * (int)v45;
        v51 = *(BattleServantData_o **)(v48 + 32);
        v50 = (BattleServantData_o **)(v48 + 32);
        v49 = v51;
        if ( !v51 )
          goto LABEL_292;
        if ( v49->fields.isBuffProgressFlg )
        {
          v52 = *(_BYTE *)(v4 + 16);
          v53 = *(System_Int32_array **)(v4 + 24);
          logic = this->fields.logic;
          v55 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v55, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
          v6 = (unsigned __int64)BattleServantData__turnBuffProgressing(
                                   v49,
                                   v52,
                                   v53,
                                   logic,
                                   (System_Func_BattleBuffData_BuffData__bool__o *)v55,
                                   0);
          Instance = (__int64)v247;
          if ( !v247 )
            goto LABEL_292;
          System_Collections_Generic_List_object___AddRange(
            v247,
            (System_Collections_Generic_IEnumerable_T__o *)v6,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v44 = v248;
          if ( v45 >= *(_DWORD *)(v248 + 24) )
            goto LABEL_295;
          Instance = (__int64)*v50;
          v30 = v246;
          if ( !*v50 )
            goto LABEL_292;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 464LL));
          if ( v45 >= *(_DWORD *)(v248 + 24) )
            goto LABEL_295;
          v56 = Instance;
          Instance = (__int64)*v50;
          if ( !*v50 )
            goto LABEL_292;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 528LL));
          v47 = *(_QWORD *)(v248 + 24);
          if ( v56 != (_DWORD)Instance )
          {
            if ( v45 >= (unsigned int)v47 )
              goto LABEL_295;
            Instance = (__int64)*v50;
            if ( !*v50 )
              goto LABEL_292;
            BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
            v47 = *(_QWORD *)(v248 + 24);
          }
        }
        if ( v45 >= (unsigned int)v47 )
          goto LABEL_295;
        Instance = (__int64)*v50;
        if ( !*v50 )
          goto LABEL_292;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_292;
          if ( BattleData__checkAlivePlayers((BattleData_o *)Instance, 0) )
            goto LABEL_68;
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_292;
          if ( BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0) )
            goto LABEL_68;
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_292;
          if ( !BattleData__IsWaveSetupAsOneParty((BattleData_o *)Instance, 0) )
            goto LABEL_131;
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_292;
          if ( BattleData__IsChangeNextPartyForWaveMyDecks((BattleData_o *)Instance, 0) )
          {
LABEL_68:
            Instance = 1;
          }
          else
          {
LABEL_131:
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_292;
            if ( BattleData__IsWaveSetupSwitchParty((BattleData_o *)Instance, 0) )
            {
              Instance = (__int64)this->fields.data;
              if ( !Instance )
                goto LABEL_292;
              Instance = BattleData__TrySearchNextAlivePartyIndex((BattleData_o *)Instance, &targetIndex, 0);
            }
            else
            {
              Instance = 0;
            }
          }
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_295;
          if ( !*v50 )
            goto LABEL_292;
          Instance = BattleServantData__turnProgressing(*v50, *v243, this->fields.logic, Instance & 1, baseActData, 0);
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_295;
          v57 = Instance;
          Instance = (__int64)*v50;
          if ( !*v50 )
            goto LABEL_292;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v45 >= *(_DWORD *)(v44 + 24) )
              goto LABEL_295;
            Instance = (__int64)*v50;
            if ( !*v50 )
              goto LABEL_292;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_292;
            v58 = (Il2CppObject *)Instance;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v45 >= *(_DWORD *)(v44 + 24) )
                goto LABEL_295;
              Instance = (__int64)v240;
              if ( !*v50 || !v240 )
                goto LABEL_292;
              System_Collections_Generic_Dictionary_int__object___Add(
                v240,
                (*v50)->fields.uniqueId,
                v58,
                (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_295;
          if ( !*v50 )
            goto LABEL_292;
          Instance = (__int64)(*v50)->fields.buffData;
          if ( !Instance )
            goto LABEL_292;
          v245 |= v57;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 1, 1, 0);
        }
        if ( v45 >= *(_DWORD *)(v44 + 24) )
          goto LABEL_295;
        Instance = (__int64)*v50;
        if ( !*v50 )
          goto LABEL_292;
        if ( *(_BYTE *)(Instance + 572) )
        {
          Instance = (__int64)BattleServantData__GetTurnAnimEffectBuffArray((BattleServantData_o *)Instance, 0);
          v59 = this->fields.data;
          if ( !v59 )
            goto LABEL_292;
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_295;
          if ( !*v50 )
            goto LABEL_292;
          v60 = (BattleBuffData_BuffData_array *)Instance;
          Instance = (__int64)v59->fields.perf;
          if ( !Instance )
            goto LABEL_292;
          Instance = (__int64)BattlePerformance__getServantActor(
                                (BattlePerformance_o *)Instance,
                                (*v50)->fields.uniqueId,
                                0);
          if ( !Instance )
            goto LABEL_292;
          BattleActorControl__ReserveTurnAnimEffectUpdate_54388052((BattleActorControl_o *)Instance, v60, 0);
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_295;
          v61 = v4;
          v62 = *v50;
          v63 = *(unsigned __int8 *)(v4 + 16);
          v64 = *(System_Int32_array **)(v61 + 24);
          v65 = this->fields.logic;
          v66 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v66, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
          if ( !v62 )
            goto LABEL_292;
          v6 = (unsigned __int64)BattleServantData__turnBuffProgressing(
                                   v62,
                                   v63 != 0,
                                   v64,
                                   v65,
                                   (System_Func_BattleBuffData_BuffData__bool__o *)v66,
                                   0);
          Instance = (__int64)v247;
          if ( !v247 )
            goto LABEL_292;
          System_Collections_Generic_List_object___AddRange(
            v247,
            (System_Collections_Generic_IEnumerable_T__o *)v6,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v44 = v248;
          v4 = v242;
          v30 = v246;
          if ( v45 >= *(_DWORD *)(v248 + 24) )
            goto LABEL_295;
          Instance = (__int64)*v50;
          if ( !*v50 )
            goto LABEL_292;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v45 >= *(_DWORD *)(v248 + 24) )
              goto LABEL_295;
            Instance = (__int64)*v50;
            if ( !*v50 )
              goto LABEL_292;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v46 )
                goto LABEL_292;
              System_Collections_Generic_List_object___AddRange(
                v46,
                (System_Collections_Generic_IEnumerable_T__o *)v60,
                (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
              if ( v45 >= *(_DWORD *)(v248 + 24) )
                goto LABEL_295;
              Instance = (__int64)*v50;
              if ( !*v50 )
                goto LABEL_292;
              Instance = (__int64)BattleServantData__GetTurnProgressFuncBuffList((BattleServantData_o *)Instance, 0);
              targetIndex = 0;
              if ( !Instance )
                goto LABEL_292;
              v67 = Instance;
              if ( *(int *)(Instance + 24) >= 1 )
              {
                while ( 1 )
                {
                  v68 = sub_2213CCC(BattleLogicNomal___c__DisplayClass46_1_TypeInfo);
                  BattleLogicNomal___c__DisplayClass46_1___ctor((BattleLogicNomal___c__DisplayClass46_1_o *)v68, 0);
                  if ( (unsigned int)targetIndex >= *(_DWORD *)(v67 + 24) )
                    break;
                  if ( !v68 )
                    goto LABEL_292;
                  v75 = *(_QWORD *)(v67 + 8LL * targetIndex + 32);
                  *(_QWORD *)(v68 + 16) = v75;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 16), v75, v69, v70, v71, v72, v73, v74);
                  v76 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v76,
                    (Il2CppObject *)v68,
                    Method_BattleLogicNomal___c__DisplayClass46_1__createEndTurnEnemy_b__2__,
                    0);
                  Instance = BasicHelper__Any_object_(
                               (System_Collections_Generic_List_T__o *)v46,
                               (System_Func_T__bool__o *)v76,
                               (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                  v44 = v248;
                  if ( (Instance & 1) == 0 )
                  {
                    v83 = v46->fields._items;
                    v6 = *(_QWORD *)(v68 + 16);
                    v84 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
                    ++v46->fields._version;
                    if ( !v83 )
                      goto LABEL_292;
                    v85 = v46->fields._size;
                    if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v46,
                        (Il2CppObject *)v6,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v86 = &v83->obj.klass + v85;
                      v46->fields._size = v85 + 1;
                      v86[4] = (Il2CppClass *)v6;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v86 + 4), v6, v77, v78, v79, v80, v81, v82);
                    }
                  }
                  v87 = *(_DWORD *)(v67 + 24);
                  if ( ++targetIndex >= v87 )
                    goto LABEL_116;
                }
LABEL_295:
                sub_2213CE4(Instance);
              }
LABEL_116:
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v247, 0) )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v250,
                  v247,
                  (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                v252.fields._current = v250.fields._current.fields.key;
                *(_OWORD *)&v252.fields._list = *(_OWORD *)&v250.fields._dictionary;
                v250.fields._dictionary = 0;
                *(_QWORD *)&v250.fields._version = &v252;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v252,
                          (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
                {
                  v88 = sub_2213CCC(BattleLogicNomal___c__DisplayClass46_2_TypeInfo);
                  BattleLogicNomal___c__DisplayClass46_2___ctor((BattleLogicNomal___c__DisplayClass46_2_o *)v88, 0);
                  if ( !v88 )
                    sub_2213CDC(v89, v90);
                  current = (int32_t)v252.fields._current;
                  *(_QWORD *)(v88 + 16) = v252.fields._current;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 16), current, v91, v92, v93, v94, v95, v96);
                  v99 = *(BattleBuffData_BuffData_o **)(v88 + 16);
                  if ( !v99 )
                    sub_2213CDC(0, v98);
                  if ( BattleBuffData_BuffData__IsSelfTurnProgressBuff(v99, 0) )
                  {
                    v100 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v100,
                      (Il2CppObject *)v88,
                      Method_BattleLogicNomal___c__DisplayClass46_2__createEndTurnEnemy_b__3__,
                      0);
                    v101 = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)v46,
                             (System_Func_T__bool__o *)v100,
                             (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                    if ( !v101 )
                    {
                      v108 = v46->fields._items;
                      v109 = *(Il2CppObject **)(v88 + 16);
                      v110 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
                      ++v46->fields._version;
                      if ( !v108 )
                        sub_2213CDC(v101, v109);
                      v111 = v46->fields._size;
                      if ( (unsigned int)v111 >= LODWORD(v108->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v46,
                          v109,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v112 = &v108->obj.klass + v111;
                        v46->fields._size = v111 + 1;
                        v112[4] = (Il2CppClass *)v109;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v112 + 4),
                          (int32_t)v109,
                          v102,
                          v103,
                          v104,
                          v105,
                          v106,
                          v107);
                      }
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v252,
                  (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                if ( v45 >= *(_DWORD *)(v44 + 24) )
                  goto LABEL_295;
                if ( !*v50 )
                  goto LABEL_292;
                uniqueId = (*v50)->fields.uniqueId;
                v114 = System_Collections_Generic_List_object___ToArray(
                         v247,
                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                Instance = (__int64)v241;
                if ( !v241 )
                  goto LABEL_292;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v241,
                  uniqueId,
                  &v114->obj,
                  (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
              Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v46, 0);
              if ( (Instance & 1) == 0 )
              {
                v115 = BattleLogicNomal___c_TypeInfo;
                if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v6);
                  v115 = BattleLogicNomal___c_TypeInfo;
                }
                static_fields = v115->static_fields;
                _9__46_1 = (System_Func_object__int__o *)static_fields->__9__46_1;
                if ( !_9__46_1 )
                {
                  if ( !*(&v115->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(v115, v6);
                    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                  }
                  v118 = (Il2CppObject *)static_fields->__9;
                  _9__46_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__46_1,
                    v118,
                    Method_BattleLogicNomal___c__createEndTurnEnemy_b__46_1__,
                    0);
                  v119 = BattleLogicNomal___c_TypeInfo->static_fields;
                  v119->__9__46_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__46_1;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v119->__9__46_1,
                    (int32_t)_9__46_1,
                    v120,
                    v121,
                    v122,
                    v123,
                    v124,
                    v125);
                }
                v126 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                                              (System_Func_TSource__TKey__o *)_9__46_1,
                                                                              (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_BuffData__int___);
                Instance = (__int64)System_Linq_Enumerable__ToList_object_(
                                      v126,
                                      (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                if ( v45 >= *(_DWORD *)(v44 + 24) )
                  goto LABEL_295;
                if ( !*v50 )
                  goto LABEL_292;
                if ( !Instance )
                  goto LABEL_292;
                v127 = (*v50)->fields.uniqueId;
                Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                if ( !v239 )
                  goto LABEL_292;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v239,
                  v127,
                  (Il2CppObject *)Instance,
                  (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_295;
          if ( !*v50 )
            goto LABEL_292;
          if ( !v246 )
            goto LABEL_292;
          v6 = (unsigned int)(*v50)->fields.uniqueId;
          v128 = v246->fields._items;
          v129 = Method_System_Collections_Generic_List_int__Add__;
          ++v246->fields._version;
          if ( !v128 )
            goto LABEL_292;
          v130 = v246->fields._size;
          if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v246,
              v6,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          }
          else
          {
            v246->fields._size = v130 + 1;
            v128->m_Items[v130] = v6;
          }
        }
        if ( (signed int)++v45 >= *(_DWORD *)(v44 + 24) )
          goto LABEL_165;
      }
    }
    v245 = 0;
LABEL_165:
    v43 = this->fields.data;
    if ( !v43 )
      goto LABEL_292;
  }
  Instance = (__int64)v43->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_292;
  BattleFieldEnvironmentData__ProgressApplyBuffAfterServantUse((BattleFieldEnvironmentData_o *)Instance, 1, 0);
  v131 = this->fields.data;
  if ( !v131 )
    goto LABEL_292;
  if ( !v30 )
    goto LABEL_292;
  battleEvent = v131->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v30,
                        (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_292;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v4 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v133 = this->fields.data;
  if ( !v133 )
    goto LABEL_292;
  perf = v133->fields.perf;
  if ( !perf )
    goto LABEL_292;
  Instance = (__int64)v133->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_292;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  v135 = this->fields.data;
  if ( !v135 )
    goto LABEL_292;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v135->fields.aiNpcDataList;
  v137 = (System_Action_object__o *)sub_2213CCC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v137,
    (Il2CppObject *)v4,
    Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_292;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v137,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v138 = this->fields.data;
  if ( !v138 )
    goto LABEL_292;
  Instance = (__int64)v138->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_292;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v4 + 16),
    0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_292;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)Instance, 0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *v243, v139);
  v140 = this->fields.data;
  if ( !v140 )
    goto LABEL_292;
  v140->fields.currentTurn = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v239, 0) )
  {
    v141 = *(_BYTE *)(v4 + 16);
    logicfunction = this->fields.logicfunction;
    v143 = (TurnAnimEffectLogicTask_o *)sub_2213CCC(TurnAnimEffectLogicTask_TypeInfo);
    TurnAnimEffectLogicTask___ctor(
      v143,
      v141,
      logicfunction,
      (System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____o *)v239,
      0);
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_292;
    BattleLogic__AddBattleLogicTask((BattleLogic_o *)Instance, (BattleLogicTask_o *)v143, 0);
  }
  Instance = (__int64)v240;
  if ( !v240 )
    goto LABEL_292;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v250,
    v240,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v251 = v250;
  v250.fields._dictionary = 0;
  *(_QWORD *)&v250.fields._version = &v251;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v251,
                               (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v251.fields._current.fields.value;
    key = (int32_t)v251.fields._current.fields.key;
    targetIndex = 0;
    if ( !v251.fields._current.fields.value )
      sub_2213CDC(Entity, v145);
    monitor = (int32_t)v251.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      v149 = 0;
      v150 = 1;
LABEL_188:
      if ( v149 >= (unsigned int)monitor )
        sub_2213CE4(Entity);
      v151 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v149);
      if ( !v151 )
        sub_2213CDC(Entity, v145);
      if ( v151->fields._isRemove )
        goto LABEL_224;
      if ( !v13 )
        sub_2213CDC(Entity, v145);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v13,
                 v151->fields.buffId,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_224;
      v152 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v152, 0);
      if ( !v152 )
        sub_2213CDC(v153, v154);
      v152->fields.svtUniqueId = key;
      vals = v151->fields.vals;
      if ( !vals )
        sub_2213CDC(v153, v154);
      if ( !LODWORD(vals->max_length) )
        sub_2213CE4(v153);
      v156 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v152->klass->vtable._4_set_skillId.methodPtr)(
               v152,
               (unsigned int)vals->m_Items[0],
               v152->klass->vtable._4_set_skillId.method);
      v158 = v151->fields.vals;
      if ( !v158 )
        sub_2213CDC(v156, v157);
      if ( (v158->max_length & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v156);
      v152->fields.skilllv = v158->m_Items[1];
      v159 = this->fields.data;
      if ( !v159 )
        sub_2213CDC(0, v157);
      ServantData = BattleData__getServantData(v159, v152->fields.svtUniqueId, 0);
      v161 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v152->klass->vtable._5_get_skillId.methodPtr)(
               v152,
               v152->klass->vtable._5_get_skillId.method);
      if ( !v249 )
        sub_2213CDC(0, v161);
      v162 = SkillLvMaster__GetEntity(v249, v161, v152->fields.skilllv, 0);
      if ( !ServantData )
        sub_2213CDC(v162, v163);
      v164 = v162;
      v165 = this->fields.data;
      if ( !v165 )
        sub_2213CDC(0, v163);
      v166 = BattleData__checkAliveOther(v165, ServantData->fields.uniqueId, 0);
      if ( !v166 )
      {
        if ( !v164 )
          sub_2213CDC(v166, v167);
        v168 = this->fields.logic;
        if ( !v168 )
          sub_2213CDC(0, v167);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v168, v164->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_224;
      }
      v169 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v151, 0);
      if ( v169 < 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v152->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v152, 0);
      }
      else
      {
        v170 = sub_2213B20(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v170;
        if ( !v170 )
          sub_2213CDC(0, v171);
        if ( !*(_DWORD *)(v170 + 24) )
          sub_2213CE4(v170);
        exists = 0;
        *(_DWORD *)(v170 + 32) = v169;
      }
      logicskill = this->fields.logicskill;
      v175 = sub_2213B20(int___TypeInfo, 1);
      if ( !v175 )
        sub_2213CDC(0, v176);
      if ( !*(_DWORD *)(v175 + 24) )
        sub_2213CE4(v175);
      *(_DWORD *)(v175 + 32) = key;
      if ( !logicskill )
        sub_2213CDC(v175, v176);
      v177 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v152,
                                                   (System_Int32_array *)v175,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0);
      v179 = v177;
      if ( (v150 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v177, 0);
        if ( IsNullOrEmpty )
        {
          v150 = 1;
          goto LABEL_222;
        }
        if ( !v179 )
          sub_2213CDC(IsNullOrEmpty, v178);
        if ( !LODWORD(v179[1].monitor) )
          sub_2213CE4(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v179[2].klass;
        if ( !klass )
          sub_2213CDC(0, v178);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v150 = 0;
LABEL_222:
      v182 = this->fields.logic;
      if ( !v182 )
        sub_2213CDC(0, v178);
      BattleLogic__addBattleLogicTask(v182, (BattleLogicTask_array *)v179, 0);
LABEL_224:
      monitor = (int32_t)value[1].monitor;
      v149 = ++targetIndex;
      if ( targetIndex >= monitor )
        continue;
      goto LABEL_188;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v251,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v241;
  if ( !v241 )
    goto LABEL_292;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v250,
    v241,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v251 = v250;
  v250.fields._dictionary = 0;
  *(_QWORD *)&v250.fields._version = &v251;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v251,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v184 = this->fields.data;
    if ( !v184 )
      sub_2213CDC(0, v183);
    v185 = (int32_t)v251.fields._current.fields.key;
    v186 = v251.fields._current.fields.value;
    v187 = (BuffEntity_o *)BattleData__getServantData(v184, (int32_t)v251.fields._current.fields.key, 0);
    v189 = (BattleServantData_o *)v187;
    if ( v187 )
    {
      v190 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_52826232(v190, v189, 0, 0, 0, 0, 0, 1, 0);
      if ( !v190 )
        sub_2213CDC(v187, v188);
      selfConcatSvtIndividualities_k__BackingField = v190->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
    }
    targetIndex = 0;
    if ( !v186 )
      sub_2213CDC(v187, v188);
    v192 = (int32_t)v186[1].monitor;
    if ( v192 >= 1 )
    {
      v193 = 0;
      do
      {
        if ( v193 >= (unsigned int)v192 )
          sub_2213CE4(v187);
        v194 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v186[2].klass + v193);
        if ( !v194 )
          sub_2213CDC(v187, v188);
        if ( !v194->fields._isRemove )
        {
          if ( !v13 )
            sub_2213CDC(v187, v188);
          v187 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v13,
                                   v194->fields.buffId,
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v187 )
          {
            if ( BuffEntity__isEndAct(v187, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v194, 1, 1, 0) )
            {
              v196 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v196, 0);
              if ( !v196 )
                sub_2213CDC(v197, v198);
              v196->fields.svtUniqueId = v185;
              v199 = v194->fields.vals;
              if ( !v199 )
                sub_2213CDC(v197, v198);
              if ( !LODWORD(v199->max_length) )
                sub_2213CE4(v197);
              v200 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v196->klass->vtable._4_set_skillId.methodPtr)(
                       v196,
                       (unsigned int)v199->m_Items[0],
                       v196->klass->vtable._4_set_skillId.method);
              v202 = v194->fields.vals;
              if ( !v202 )
                sub_2213CDC(v200, v201);
              if ( (v202->max_length & 0xFFFFFFFE) == 0 )
                sub_2213CE4(v200);
              v196->fields.skilllv = v202->m_Items[1];
              v203 = this->fields.data;
              if ( !v203 )
                sub_2213CDC(0, v201);
              v204 = BattleData__getServantData(v203, v196->fields.svtUniqueId, 0);
              v205 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v196->klass->vtable._5_get_skillId.methodPtr)(
                       v196,
                       v196->klass->vtable._5_get_skillId.method);
              if ( !v249 )
                sub_2213CDC(0, v205);
              v206 = SkillLvMaster__GetEntity(v249, v205, v196->fields.skilllv, 0);
              if ( !v204 )
                sub_2213CDC(v206, v207);
              v208 = v206;
              v209 = this->fields.data;
              if ( !v209 )
                sub_2213CDC(0, v207);
              v210 = BattleData__checkAliveOther(v209, v204->fields.uniqueId, 0);
              if ( v210 )
                goto LABEL_257;
              if ( !v208 )
                sub_2213CDC(v210, v211);
              v212 = this->fields.logic;
              if ( !v212 )
                sub_2213CDC(0, v211);
              if ( BattleLogic__checkPtTargetFunction(v212, v208->fields.funcId, 0) )
              {
LABEL_257:
                v213 = BattleServantData__GetRevengeIdCheckOpponentOnly(v204, v194, 0);
                if ( v213 < 0 )
                {
                  v216 = Target__getTargetIds(this->fields.data, v196->fields.svtUniqueId, -1, v185, 13, 0, 0);
                  v217 = BattleSkillInfoData__ExistsNoTargetNoActionType(v196, 0);
                }
                else
                {
                  v214 = sub_2213B20(int___TypeInfo, 1);
                  v216 = (System_Int32_array *)v214;
                  if ( !v214 )
                    sub_2213CDC(0, v215);
                  if ( !*(_DWORD *)(v214 + 24) )
                    sub_2213CE4(v214);
                  v217 = 0;
                  *(_DWORD *)(v214 + 32) = v213;
                }
                v218 = this->fields.logicskill;
                v219 = sub_2213B20(int___TypeInfo, 1);
                if ( !v219 )
                  sub_2213CDC(0, v220);
                if ( !*(_DWORD *)(v219 + 24) )
                  sub_2213CE4(v219);
                *(_DWORD *)(v219 + 32) = v185;
                if ( !v218 )
                  sub_2213CDC(v219, v220);
                v221 = BattleLogicSkill__taskSkill(v218, v196, (System_Int32_array *)v219, v216, 1, v217, 0, 0, 0, 0);
                v222 = this->fields.logic;
                if ( !v222 )
                  sub_2213CDC(0, v221);
                BattleLogic__addBattleLogicTask(v222, v221, 0);
              }
            }
            v223 = this->fields.data;
            if ( !v223 )
              sub_2213CDC(0, v195);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(v223, v194, 0);
          }
        }
        v192 = (int32_t)v186[1].monitor;
        v193 = ++targetIndex;
      }
      while ( targetIndex < v192 );
    }
    v224 = BattleLogicNomal___c_TypeInfo;
    if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v188);
      v224 = BattleLogicNomal___c_TypeInfo;
    }
    v225 = v224->static_fields;
    _9__46_4 = (System_Func_object__bool__o *)v225->__9__46_4;
    if ( !_9__46_4 )
    {
      if ( !*(&v224->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v224, v188);
        v225 = BattleLogicNomal___c_TypeInfo->static_fields;
      }
      v227 = (Il2CppObject *)v225->__9;
      _9__46_4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__46_4, v227, Method_BattleLogicNomal___c__createEndTurnEnemy_b__46_4__, 0);
      v228 = BattleLogicNomal___c_TypeInfo->static_fields;
      v228->__9__46_4 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__46_4;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v228->__9__46_4,
        (int32_t)_9__46_4,
        v229,
        v230,
        v231,
        v232,
        v233,
        v234);
    }
    if ( BasicHelper__Any_object__58785420(
           (System_Object_array *)v186,
           (System_Func_T__bool__o *)_9__46_4,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleBuffData_BuffData____91711696) )
    {
      BattleLogicNomal__UpdateApplyAttachCardBuffIndexList(this, v189, v235);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v251,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v241, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_292;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0, 0);
  }
  v236 = this->fields.data;
  if ( !v236
    || (Instance = (__int64)v236->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_292:
    sub_2213CDC(Instance, v6);
  }
  if ( (v245 & 1) != 0 )
    v237 = baseActData;
  else
    v237 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v237, baseActData, 0);
}


BattleActionData_o *BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x25
  __int64 Instance; // x0
  unsigned __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  const MethodInfo_47A29F8 *v13; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_Dictionary_int__object__o *v22; // x24
  SkillLvMaster_o *v23; // x23
  System_Int32_array *QuestIndividualities; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_int__o *v31; // x19
  __int64 v32; // x29
  unsigned int v33; // w27
  System_Collections_Generic_List_object__o *v34; // x26
  System_Collections_Generic_List_object__o *v35; // x19
  __int64 v36; // x8
  __int64 v37; // x21
  BattleServantData_o *v38; // x20
  BattleServantData_o **v39; // x21
  BattleServantData_o *v40; // t1
  char v41; // w23
  System_Int32_array *v42; // x24
  BattleLogic_o *logic; // x25
  System_Func_object__bool__o *v44; // x28
  int v45; // w20
  char v46; // w20
  Il2CppObject *v47; // x2
  struct BattleData_o *data; // x8
  BattleBuffData_BuffData_array *v49; // x20
  BattleServantData_o *v50; // x23
  int v51; // w19
  System_Int32_array *v52; // x25
  BattleLogic_o *v53; // x28
  System_Func_object__bool__o *v54; // x24
  System_Collections_Generic_List_object__o *v55; // x19
  __int64 v56; // x20
  unsigned __int64 v57; // x19
  __int64 v58; // x23
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 v65; // x1
  System_Func_object__bool__o *v66; // x24
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  __int64 v77; // x25
  __int64 v78; // x0
  __int64 v79; // x1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  int32_t current; // w1
  __int64 v87; // x1
  BattleBuffData_BuffData_o *v88; // x0
  System_Func_object__bool__o *v89; // x23
  _BOOL8 v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  struct System_Object_array *v97; // x8
  Il2CppObject *v98; // x1
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  int32_t uniqueId; // w20
  System_Object_array *v103; // x2
  BattleLogicNomal___c_c *v104; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__43_1; // x20
  Il2CppObject *v107; // x23
  struct BattleLogicNomal___c_StaticFields *v108; // x0
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0
  int32_t v116; // w20
  unsigned int v117; // w8
  struct System_Int32_array *v118; // x9
  _QWORD *v119; // x10
  __int64 v120; // x11
  BattleData_o *v121; // x20
  BattleBuffData_o *BuffData; // x23
  struct BattleData_o *v123; // x8
  struct BattleData_o *v124; // x8
  __int64 v125; // x21
  int v126; // w8
  unsigned int v127; // w19
  __int64 v128; // x23
  __int64 *v129; // x23
  BattleServantData_o *v130; // t1
  Il2CppObject *v131; // x20
  struct System_Int32_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v136; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v138; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v140; // x21
  struct BattleData_o *v141; // x8
  const MethodInfo *v142; // x2
  struct BattleData_o *v143; // x8
  char v144; // w21
  BattleLogicFunction_o *logicfunction; // x23
  TurnAnimEffectLogicTask_o *v146; // x20
  Il2CppObject *Entity; // x0
  __int64 v148; // x1
  Il2CppObject *value; // x21
  int monitor; // w8
  int32_t key; // w24
  unsigned int v152; // w29
  char v153; // w19
  BattleBuffData_BuffData_o *v154; // x27
  BattleSkillInfoData_o *v155; // x25
  __int64 v156; // x0
  __int64 v157; // x1
  struct System_Int32_array *vals; // x8
  __int64 v159; // x0
  __int64 v160; // x1
  struct System_Int32_array *v161; // x8
  BattleData_o *v162; // x0
  BattleServantData_o *ServantData; // x26
  __int64 v164; // x1
  SkillLvEntity_o *v165; // x0
  __int64 v166; // x1
  SkillLvEntity_o *v167; // x20
  BattleData_o *v168; // x0
  _BOOL8 v169; // x0
  __int64 v170; // x1
  BattleLogic_o *v171; // x0
  int32_t v172; // w23
  __int64 v173; // x0
  __int64 v174; // x1
  System_Int32_array *TargetIds; // x20
  bool exists; // w27
  BattleLogicSkill_o *logicskill; // x28
  __int64 v178; // x0
  __int64 v179; // x1
  System_Collections_ICollection_o *v180; // x0
  __int64 v181; // x1
  System_Collections_ICollection_o *v182; // x20
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v185; // x0
  __int64 v186; // x1
  BattleData_o *v187; // x0
  int32_t v188; // w25
  Il2CppObject *v189; // x24
  BuffEntity_o *v190; // x0
  __int64 v191; // x1
  BattleServantData_o *v192; // x21
  BattleBuffData_CheckIndividualitiesData_o *v193; // x20
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x26
  int v195; // w8
  int i; // w19
  BattleBuffData_BuffData_o *v197; // x27
  __int64 v198; // x1
  BattleSkillInfoData_o *v199; // x28
  __int64 v200; // x0
  __int64 v201; // x1
  struct System_Int32_array *v202; // x8
  __int64 v203; // x0
  __int64 v204; // x1
  struct System_Int32_array *v205; // x8
  BattleData_o *v206; // x0
  BattleServantData_o *v207; // x20
  __int64 v208; // x1
  SkillLvEntity_o *v209; // x0
  __int64 v210; // x1
  SkillLvEntity_o *v211; // x23
  BattleData_o *v212; // x0
  _BOOL8 v213; // x0
  __int64 v214; // x1
  BattleLogic_o *v215; // x0
  int32_t v216; // w23
  __int64 v217; // x0
  __int64 v218; // x1
  System_Int32_array *v219; // x20
  bool v220; // w29
  BattleLogicSkill_o *v221; // x23
  __int64 v222; // x0
  __int64 v223; // x1
  BattleLogicTask_array *v224; // x1
  BattleLogic_o *v225; // x0
  BattleData_o *v226; // x0
  BattleLogicNomal___c_c *v227; // x0
  struct BattleLogicNomal___c_StaticFields *v228; // x8
  System_Func_object__bool__o *_9__43_4; // x20
  Il2CppObject *v230; // x23
  struct BattleLogicNomal___c_StaticFields *v231; // x0
  System_String_o *v232; // x2
  System_String_o *v233; // x3
  int32_t v234; // w4
  int32_t v235; // w5
  bool v236; // w6
  bool v237; // w7
  const MethodInfo *v238; // x2
  struct BattleData_o *v239; // x8
  BattleActionData_o *v240; // x1
  System_Collections_Generic_Dictionary_int__object__o *v242; // [xsp+20h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v243; // [xsp+28h] [xbp-128h]
  System_Collections_Generic_Dictionary_int__object__o *v244; // [xsp+30h] [xbp-120h]
  System_Int32_array **v245; // [xsp+38h] [xbp-118h]
  BattleActionData_o *baseActData; // [xsp+40h] [xbp-110h]
  System_Collections_Generic_List_int__o *v247; // [xsp+48h] [xbp-108h]
  char v248; // [xsp+54h] [xbp-FCh]
  __int64 v249; // [xsp+58h] [xbp-F8h]
  System_Collections_Generic_List_object__o *v250; // [xsp+60h] [xbp-F0h]
  SkillLvMaster_o *v251; // [xsp+68h] [xbp-E8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v253; // [xsp+78h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v254; // [xsp+A0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v255; // [xsp+D0h] [xbp-80h] BYREF

  if ( (byte_5973C90 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_BattleBuffData_BuffData____91711696);
    sub_2213A60(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_2213A60(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_BuffData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TurnAnimEffectLogicTask_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__createEndTurnPlayer_b__43_1__);
    sub_2213A60(&Method_BattleLogicNomal___c__createEndTurnPlayer_b__43_4__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass43_1__createEndTurnPlayer_b__2__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass43_1_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass43_2__createEndTurnPlayer_b__3__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass43_2_TypeInfo);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    sub_2213A60(&StringLiteral_9129/*"MOTION_PLAYER_TURN_END"*/);
    byte_5973C90 = 1;
  }
  memset(&v255, 0, sizeof(v255));
  memset(&v254, 0, sizeof(v254));
  v3 = sub_2213CCC(BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass43_0___ctor((BattleLogicNomal___c__DisplayClass43_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_283;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  BattleLogicNomal__SetNextTargetId(this, v12);
  baseActData = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0);
  v13 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_BYTE *)(v3 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(v13);
  if ( !Instance )
    goto LABEL_283;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_283;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_283;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !baseActData )
    goto LABEL_283;
  BattleActionData__setStateField(baseActData, 0);
  v15 = StringLiteral_9129/*"MOTION_PLAYER_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_9129/*"MOTION_PLAYER_TURN_END"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&baseActData->fields.motionname, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v244 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v244,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v243 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v243,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_283;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this->fields.data )
    goto LABEL_283;
  v23 = (SkillLvMaster_o *)Instance;
  QuestIndividualities = BattleData__getQuestIndividualities(this->fields.data, 0);
  *(_QWORD *)(v3 + 24) = QuestIndividualities;
  v245 = (System_Int32_array **)(v3 + 24);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 24),
    (int32_t)QuestIndividualities,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_283;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_283;
  v32 = Instance;
  v247 = v31;
  v242 = v22;
  v249 = v3;
  v251 = v23;
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v33 = 0;
    v248 = 0;
    while ( 1 )
    {
      v34 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v34,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      v35 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      v36 = *(_QWORD *)(v32 + 24);
      if ( v33 >= (unsigned int)v36 )
        goto LABEL_284;
      v37 = v32 + 8LL * (int)v33;
      v40 = *(BattleServantData_o **)(v37 + 32);
      v39 = (BattleServantData_o **)(v37 + 32);
      v38 = v40;
      if ( !v40 )
        goto LABEL_283;
      if ( v38->fields.isBuffProgressFlg )
      {
        v41 = *(_BYTE *)(v249 + 16);
        v42 = *(System_Int32_array **)(v249 + 24);
        logic = this->fields.logic;
        v44 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v44, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v38,
                              v41,
                              v42,
                              logic,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v44,
                              0);
        if ( !v35 )
          goto LABEL_283;
        System_Collections_Generic_List_object___AddRange(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        Instance = (__int64)*v39;
        if ( !*v39 )
          goto LABEL_283;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 464LL));
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        v45 = Instance;
        Instance = (__int64)*v39;
        if ( !*v39 )
          goto LABEL_283;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 528LL));
        v36 = *(_QWORD *)(v32 + 24);
        if ( v45 != (_DWORD)Instance )
        {
          if ( v33 >= (unsigned int)v36 )
            goto LABEL_284;
          Instance = (__int64)*v39;
          if ( !*v39 )
            goto LABEL_283;
          BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
          v36 = *(_QWORD *)(v32 + 24);
        }
      }
      if ( v33 >= (unsigned int)v36 )
        goto LABEL_284;
      Instance = (__int64)*v39;
      if ( !*v39 )
        goto LABEL_283;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)this->fields.data;
        if ( !Instance )
          goto LABEL_283;
        if ( BattleData__checkAliveEnemys((BattleData_o *)Instance, 0) )
        {
          Instance = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_283;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0);
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        if ( !*v39 )
          goto LABEL_283;
        Instance = BattleServantData__turnProgressing(*v39, *v245, this->fields.logic, Instance & 1, baseActData, 0);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        v46 = Instance;
        Instance = (__int64)*v39;
        if ( !*v39 )
          goto LABEL_283;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_284;
          Instance = (__int64)*v39;
          if ( !*v39 )
            goto LABEL_283;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_283;
          v47 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v33 >= *(_DWORD *)(v32 + 24) )
              goto LABEL_284;
            Instance = (__int64)v243;
            if ( !*v39 || !v243 )
              goto LABEL_283;
            System_Collections_Generic_Dictionary_int__object___Add(
              v243,
              (*v39)->fields.uniqueId,
              v47,
              (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        if ( !*v39 )
          goto LABEL_283;
        Instance = (__int64)(*v39)->fields.buffData;
        if ( !Instance )
          goto LABEL_283;
        v248 |= v46;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 1, 1, 0);
      }
      if ( v33 >= *(_DWORD *)(v32 + 24) )
        goto LABEL_284;
      Instance = (__int64)*v39;
      if ( !*v39 )
        goto LABEL_283;
      if ( *(_BYTE *)(Instance + 572) )
      {
        Instance = (__int64)BattleServantData__GetTurnAnimEffectBuffArray((BattleServantData_o *)Instance, 0);
        data = this->fields.data;
        if ( !data )
          goto LABEL_283;
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        if ( !*v39 )
          goto LABEL_283;
        v49 = (BattleBuffData_BuffData_array *)Instance;
        Instance = (__int64)data->fields.perf;
        if ( !Instance )
          goto LABEL_283;
        Instance = (__int64)BattlePerformance__getServantActor(
                              (BattlePerformance_o *)Instance,
                              (*v39)->fields.uniqueId,
                              0);
        if ( !Instance )
          goto LABEL_283;
        v250 = v35;
        BattleActorControl__ReserveTurnAnimEffectUpdate_54388052((BattleActorControl_o *)Instance, v49, 0);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        v50 = *v39;
        v51 = *(unsigned __int8 *)(v249 + 16);
        v52 = *(System_Int32_array **)(v249 + 24);
        v53 = this->fields.logic;
        v54 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v54, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
        if ( !v50 )
          goto LABEL_283;
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v50,
                              v51 != 0,
                              v52,
                              v53,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v54,
                              0);
        v55 = v250;
        if ( !v250 )
          goto LABEL_283;
        System_Collections_Generic_List_object___AddRange(
          v250,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_284;
        Instance = (__int64)*v39;
        if ( !*v39 )
          goto LABEL_283;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_284;
          Instance = (__int64)*v39;
          if ( !*v39 )
            goto LABEL_283;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_283;
            System_Collections_Generic_List_object___AddRange(
              v34,
              (System_Collections_Generic_IEnumerable_T__o *)v49,
              (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
            if ( v33 >= *(_DWORD *)(v32 + 24) )
              goto LABEL_284;
            Instance = (__int64)*v39;
            if ( !*v39 )
              goto LABEL_283;
            Instance = (__int64)BattleServantData__GetTurnProgressFuncBuffList((BattleServantData_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_283;
            v56 = Instance;
            if ( *(int *)(Instance + 24) >= 1 )
            {
              v57 = 0;
              while ( 1 )
              {
                v58 = sub_2213CCC(BattleLogicNomal___c__DisplayClass43_1_TypeInfo);
                BattleLogicNomal___c__DisplayClass43_1___ctor((BattleLogicNomal___c__DisplayClass43_1_o *)v58, 0);
                if ( v57 >= *(unsigned int *)(v56 + 24) )
                  break;
                if ( !v58 )
                  goto LABEL_283;
                v65 = *(_QWORD *)(v56 + 32 + 8 * v57);
                *(_QWORD *)(v58 + 16) = v65;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 16), v65, v59, v60, v61, v62, v63, v64);
                v66 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v66,
                  (Il2CppObject *)v58,
                  Method_BattleLogicNomal___c__DisplayClass43_1__createEndTurnPlayer_b__2__,
                  0);
                Instance = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)v34,
                             (System_Func_T__bool__o *)v66,
                             (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                if ( (Instance & 1) == 0 )
                {
                  items = v34->fields._items;
                  v5 = *(_QWORD *)(v58 + 16);
                  v74 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
                  ++v34->fields._version;
                  if ( !items )
                    goto LABEL_283;
                  size = v34->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v34,
                      (Il2CppObject *)v5,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v76 = &items->obj.klass + size;
                    v34->fields._size = size + 1;
                    v76[4] = (Il2CppClass *)v5;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 4), v5, v67, v68, v69, v70, v71, v72);
                  }
                }
                if ( (__int64)++v57 >= *(int *)(v56 + 24) )
                  goto LABEL_82;
              }
LABEL_284:
              sub_2213CE4(Instance);
            }
LABEL_82:
            v55 = v250;
            if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v250, 0) )
            {
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v253,
                v250,
                (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
              v255.fields._current = v253.fields._current.fields.key;
              *(_OWORD *)&v255.fields._list = *(_OWORD *)&v253.fields._dictionary;
              v253.fields._dictionary = 0;
              *(_QWORD *)&v253.fields._version = &v255;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v255,
                        (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
              {
                v77 = sub_2213CCC(BattleLogicNomal___c__DisplayClass43_2_TypeInfo);
                BattleLogicNomal___c__DisplayClass43_2___ctor((BattleLogicNomal___c__DisplayClass43_2_o *)v77, 0);
                if ( !v77 )
                  sub_2213CDC(v78, v79);
                current = (int32_t)v255.fields._current;
                *(_QWORD *)(v77 + 16) = v255.fields._current;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 16), current, v80, v81, v82, v83, v84, v85);
                v88 = *(BattleBuffData_BuffData_o **)(v77 + 16);
                if ( !v88 )
                  sub_2213CDC(0, v87);
                if ( BattleBuffData_BuffData__IsSelfTurnProgressBuff(v88, 0) )
                {
                  v89 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v89,
                    (Il2CppObject *)v77,
                    Method_BattleLogicNomal___c__DisplayClass43_2__createEndTurnPlayer_b__3__,
                    0);
                  v90 = BasicHelper__Any_object_(
                          (System_Collections_Generic_List_T__o *)v34,
                          (System_Func_T__bool__o *)v89,
                          (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                  if ( !v90 )
                  {
                    v97 = v34->fields._items;
                    v98 = *(Il2CppObject **)(v77 + 16);
                    v99 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
                    ++v34->fields._version;
                    if ( !v97 )
                      sub_2213CDC(v90, v98);
                    v100 = v34->fields._size;
                    if ( (unsigned int)v100 >= LODWORD(v97->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v34,
                        v98,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v101 = &v97->obj.klass + v100;
                      v34->fields._size = v100 + 1;
                      v101[4] = (Il2CppClass *)v98;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v101 + 4),
                        (int32_t)v98,
                        v91,
                        v92,
                        v93,
                        v94,
                        v95,
                        v96);
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v255,
                (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
              if ( v33 >= *(_DWORD *)(v32 + 24) )
                goto LABEL_284;
              if ( !*v39 )
                goto LABEL_283;
              uniqueId = (*v39)->fields.uniqueId;
              v103 = System_Collections_Generic_List_object___ToArray(
                       v250,
                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
              Instance = (__int64)v244;
              if ( !v244 )
                goto LABEL_283;
              System_Collections_Generic_Dictionary_int__object___Add(
                v244,
                uniqueId,
                &v103->obj,
                (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
            Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v34, 0);
            if ( (Instance & 1) == 0 )
            {
              v104 = BattleLogicNomal___c_TypeInfo;
              if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v5);
                v104 = BattleLogicNomal___c_TypeInfo;
              }
              static_fields = v104->static_fields;
              _9__43_1 = (System_Func_object__int__o *)static_fields->__9__43_1;
              if ( !_9__43_1 )
              {
                if ( !*(&v104->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v104, v5);
                  static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                }
                v107 = (Il2CppObject *)static_fields->__9;
                _9__43_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__43_1,
                  v107,
                  Method_BattleLogicNomal___c__createEndTurnPlayer_b__43_1__,
                  0);
                v108 = BattleLogicNomal___c_TypeInfo->static_fields;
                v108->__9__43_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__43_1;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v108->__9__43_1,
                  (int32_t)_9__43_1,
                  v109,
                  v110,
                  v111,
                  v112,
                  v113,
                  v114);
              }
              v115 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                                                            (System_Func_TSource__TKey__o *)_9__43_1,
                                                                            (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_BuffData__int___);
              Instance = (__int64)System_Linq_Enumerable__ToList_object_(
                                    v115,
                                    (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
              if ( v33 >= *(_DWORD *)(v32 + 24) )
                goto LABEL_284;
              if ( !*v39 )
                goto LABEL_283;
              if ( !Instance )
                goto LABEL_283;
              v116 = (*v39)->fields.uniqueId;
              Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
              if ( !v242 )
                goto LABEL_283;
              System_Collections_Generic_Dictionary_int__object___Add(
                v242,
                v116,
                (Il2CppObject *)Instance,
                (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              v55 = v250;
            }
          }
        }
        v117 = *(_DWORD *)(v32 + 24);
        if ( v33 >= v117 )
          goto LABEL_284;
        Instance = (__int64)v247;
        if ( !*v39 )
          goto LABEL_283;
        if ( !v247 )
          goto LABEL_283;
        v5 = (unsigned int)(*v39)->fields.uniqueId;
        v118 = v247->fields._items;
        v119 = Method_System_Collections_Generic_List_int__Add__;
        ++v247->fields._version;
        if ( !v118 )
          goto LABEL_283;
        v120 = v247->fields._size;
        if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v247,
            v5,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
          v117 = *(_DWORD *)(v32 + 24);
        }
        else
        {
          v247->fields._size = v120 + 1;
          v118->m_Items[v120] = v5;
        }
        if ( v33 >= v117 )
          goto LABEL_284;
        Instance = (__int64)*v39;
        if ( !*v39 )
          goto LABEL_283;
        v121 = this->fields.data;
        BuffData = BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v55,
                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v121 )
          goto LABEL_283;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(
          v121,
          BuffData,
          (BattleBuffData_BuffData_array *)Instance,
          0);
      }
      if ( (signed int)++v33 >= *(_DWORD *)(v32 + 24) )
        goto LABEL_126;
    }
  }
  v248 = 0;
LABEL_126:
  v123 = this->fields.data;
  if ( !v123 )
    goto LABEL_283;
  Instance = (__int64)v123->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_283;
  BattleFieldEnvironmentData__ProgressApplyBuffAfterServantUse((BattleFieldEnvironmentData_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_283;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v124 = this->fields.data;
  if ( !v124 )
    goto LABEL_283;
  v125 = Instance;
  if ( !v124->fields.leaderDown || !v124->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_283;
    v126 = *(_DWORD *)(Instance + 24);
    if ( v126 >= 1 )
    {
      v127 = 0;
      while ( v127 < v126 )
      {
        v128 = v125 + 8LL * (int)v127;
        v130 = *(BattleServantData_o **)(v128 + 32);
        v129 = (__int64 *)(v128 + 32);
        Instance = (__int64)v130;
        if ( !v130 )
          goto LABEL_283;
        if ( *(_BYTE *)(Instance + 572) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v249 + 16),
                                *(System_Int32_array **)(v249 + 24),
                                this->fields.logic,
                                0,
                                0);
          if ( v127 >= *(_DWORD *)(v125 + 24) )
            goto LABEL_284;
          v131 = (Il2CppObject *)Instance;
          Instance = *v129;
          if ( !*v129 )
            goto LABEL_283;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v127 >= *(_DWORD *)(v125 + 24) )
              goto LABEL_284;
            Instance = *v129;
            if ( !*v129 )
              goto LABEL_283;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v131 )
                goto LABEL_283;
              if ( v131[1].monitor )
              {
                if ( v127 >= *(_DWORD *)(v125 + 24) )
                  goto LABEL_284;
                Instance = (__int64)v244;
                if ( !*v129 || !v244 )
                  goto LABEL_283;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v244,
                  *(_DWORD *)(*v129 + 24),
                  v131,
                  (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v127 >= *(_DWORD *)(v125 + 24) )
            goto LABEL_284;
          if ( !*v129 )
            goto LABEL_283;
          if ( !v247 )
            goto LABEL_283;
          v5 = *(unsigned int *)(*v129 + 24);
          v132 = v247->fields._items;
          v133 = Method_System_Collections_Generic_List_int__Add__;
          ++v247->fields._version;
          if ( !v132 )
            goto LABEL_283;
          v134 = v247->fields._size;
          if ( (unsigned int)v134 >= LODWORD(v132->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v247,
              v5,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          }
          else
          {
            v247->fields._size = v134 + 1;
            v132->m_Items[v134] = v5;
          }
        }
        v126 = *(_DWORD *)(v125 + 24);
        if ( (int)++v127 >= v126 )
          goto LABEL_158;
      }
      goto LABEL_284;
    }
LABEL_158:
    v124 = this->fields.data;
    if ( !v124 )
      goto LABEL_283;
  }
  if ( !v247 )
    goto LABEL_283;
  battleEvent = v124->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v247,
                        (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_283;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v249 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v136 = this->fields.data;
  if ( !v136 )
    goto LABEL_283;
  perf = v136->fields.perf;
  if ( !perf )
    goto LABEL_283;
  Instance = (__int64)v136->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_283;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  v138 = this->fields.data;
  if ( !v138 )
    goto LABEL_283;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v138->fields.aiNpcDataList;
  v140 = (System_Action_object__o *)sub_2213CCC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v140,
    (Il2CppObject *)v249,
    Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_283;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v140,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v141 = this->fields.data;
  if ( !v141 )
    goto LABEL_283;
  Instance = (__int64)v141->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_283;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v249 + 16),
    0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v249 + 24), v142);
  v143 = this->fields.data;
  if ( !v143 )
    goto LABEL_283;
  v143->fields.currentTurn = 1;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v242, 0) )
  {
    v144 = *(_BYTE *)(v249 + 16);
    logicfunction = this->fields.logicfunction;
    v146 = (TurnAnimEffectLogicTask_o *)sub_2213CCC(TurnAnimEffectLogicTask_TypeInfo);
    TurnAnimEffectLogicTask___ctor(
      v146,
      v144,
      logicfunction,
      (System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____o *)v242,
      0);
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_283;
    BattleLogic__AddBattleLogicTask((BattleLogic_o *)Instance, (BattleLogicTask_o *)v146, 0);
  }
  Instance = (__int64)v243;
  if ( !v243 )
    goto LABEL_283;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v253,
    v243,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v254 = v253;
  v253.fields._dictionary = 0;
  *(_QWORD *)&v253.fields._version = &v254;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v254,
                               (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v254.fields._current.fields.value;
    if ( !v254.fields._current.fields.value )
      sub_2213CDC(Entity, v148);
    monitor = (int)v254.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v254.fields._current.fields.key;
      v152 = 0;
      v153 = 1;
LABEL_178:
      if ( v152 >= monitor )
        sub_2213CE4(Entity);
      v154 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + (int)v152);
      if ( !v154 )
        sub_2213CDC(Entity, v148);
      if ( v154->fields._isRemove )
        goto LABEL_214;
      if ( !v14 )
        sub_2213CDC(Entity, v148);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v14,
                 v154->fields.buffId,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_214;
      v155 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v155, 0);
      if ( !v155 )
        sub_2213CDC(v156, v157);
      v155->fields.svtUniqueId = key;
      vals = v154->fields.vals;
      if ( !vals )
        sub_2213CDC(v156, v157);
      if ( !LODWORD(vals->max_length) )
        sub_2213CE4(v156);
      v159 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v155->klass->vtable._4_set_skillId.methodPtr)(
               v155,
               (unsigned int)vals->m_Items[0],
               v155->klass->vtable._4_set_skillId.method);
      v161 = v154->fields.vals;
      if ( !v161 )
        sub_2213CDC(v159, v160);
      if ( (v161->max_length & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v159);
      v155->fields.skilllv = v161->m_Items[1];
      v162 = this->fields.data;
      if ( !v162 )
        sub_2213CDC(0, v160);
      ServantData = BattleData__getServantData(v162, v155->fields.svtUniqueId, 0);
      v164 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v155->klass->vtable._5_get_skillId.methodPtr)(
               v155,
               v155->klass->vtable._5_get_skillId.method);
      if ( !v251 )
        sub_2213CDC(0, v164);
      v165 = SkillLvMaster__GetEntity(v251, v164, v155->fields.skilllv, 0);
      if ( !ServantData )
        sub_2213CDC(v165, v166);
      v167 = v165;
      v168 = this->fields.data;
      if ( !v168 )
        sub_2213CDC(0, v166);
      v169 = BattleData__checkAliveOther(v168, ServantData->fields.uniqueId, 0);
      if ( !v169 )
      {
        if ( !v167 )
          sub_2213CDC(v169, v170);
        v171 = this->fields.logic;
        if ( !v171 )
          sub_2213CDC(0, v170);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v171, v167->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_214;
      }
      v172 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v154, 0);
      if ( v172 < 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v155->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v155, 0);
      }
      else
      {
        v173 = sub_2213B20(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v173;
        if ( !v173 )
          sub_2213CDC(0, v174);
        if ( !*(_DWORD *)(v173 + 24) )
          sub_2213CE4(v173);
        exists = 0;
        *(_DWORD *)(v173 + 32) = v172;
      }
      logicskill = this->fields.logicskill;
      v178 = sub_2213B20(int___TypeInfo, 1);
      if ( !v178 )
        sub_2213CDC(0, v179);
      if ( !*(_DWORD *)(v178 + 24) )
        sub_2213CE4(v178);
      *(_DWORD *)(v178 + 32) = key;
      if ( !logicskill )
        sub_2213CDC(v178, v179);
      v180 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v155,
                                                   (System_Int32_array *)v178,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0);
      v182 = v180;
      if ( (v153 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v180, 0);
        if ( IsNullOrEmpty )
        {
          v153 = 1;
          goto LABEL_212;
        }
        if ( !v182 )
          sub_2213CDC(IsNullOrEmpty, v181);
        if ( !LODWORD(v182[1].monitor) )
          sub_2213CE4(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v182[2].klass;
        if ( !klass )
          sub_2213CDC(0, v181);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v153 = 0;
LABEL_212:
      v185 = this->fields.logic;
      if ( !v185 )
        sub_2213CDC(0, v181);
      BattleLogic__addBattleLogicTask(v185, (BattleLogicTask_array *)v182, 0);
LABEL_214:
      monitor = (int)value[1].monitor;
      if ( (int)++v152 >= monitor )
        continue;
      goto LABEL_178;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v254,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v244;
  if ( !v244 )
    goto LABEL_283;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v253,
    v244,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v254 = v253;
  v253.fields._dictionary = 0;
  *(_QWORD *)&v253.fields._version = &v254;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v254,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v187 = this->fields.data;
    if ( !v187 )
      sub_2213CDC(0, v186);
    v188 = (int32_t)v254.fields._current.fields.key;
    v189 = v254.fields._current.fields.value;
    v190 = (BuffEntity_o *)BattleData__getServantData(v187, (int32_t)v254.fields._current.fields.key, 0);
    v192 = (BattleServantData_o *)v190;
    if ( v190 )
    {
      v193 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_52826232(v193, v192, 0, 0, 0, 0, 0, 1, 0);
      if ( !v193 )
        sub_2213CDC(v190, v191);
      selfConcatSvtIndividualities_k__BackingField = v193->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v189 )
LABEL_315:
        sub_2213CDC(v190, v191);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
      if ( !v189 )
        goto LABEL_315;
    }
    v195 = (int)v189[1].monitor;
    if ( v195 >= 1 )
    {
      for ( i = 0; i < v195; ++i )
      {
        if ( i >= (unsigned int)v195 )
          sub_2213CE4(v190);
        v197 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v189[2].klass + i);
        if ( !v197 )
          sub_2213CDC(v190, v191);
        if ( !v197->fields._isRemove )
        {
          if ( !v14 )
            sub_2213CDC(v190, v191);
          v190 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v14,
                                   v197->fields.buffId,
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v190 )
          {
            if ( BuffEntity__isEndAct(v190, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v197, 1, 1, 0) )
            {
              v199 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v199, 0);
              if ( !v199 )
                sub_2213CDC(v200, v201);
              v199->fields.svtUniqueId = v188;
              v202 = v197->fields.vals;
              if ( !v202 )
                sub_2213CDC(v200, v201);
              if ( !LODWORD(v202->max_length) )
                sub_2213CE4(v200);
              v203 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v199->klass->vtable._4_set_skillId.methodPtr)(
                       v199,
                       (unsigned int)v202->m_Items[0],
                       v199->klass->vtable._4_set_skillId.method);
              v205 = v197->fields.vals;
              if ( !v205 )
                sub_2213CDC(v203, v204);
              if ( (v205->max_length & 0xFFFFFFFE) == 0 )
                sub_2213CE4(v203);
              v199->fields.skilllv = v205->m_Items[1];
              v206 = this->fields.data;
              if ( !v206 )
                sub_2213CDC(0, v204);
              v207 = BattleData__getServantData(v206, v199->fields.svtUniqueId, 0);
              v208 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v199->klass->vtable._5_get_skillId.methodPtr)(
                       v199,
                       v199->klass->vtable._5_get_skillId.method);
              if ( !v251 )
                sub_2213CDC(0, v208);
              v209 = SkillLvMaster__GetEntity(v251, v208, v199->fields.skilllv, 0);
              if ( !v207 )
                sub_2213CDC(v209, v210);
              v211 = v209;
              v212 = this->fields.data;
              if ( !v212 )
                sub_2213CDC(0, v210);
              v213 = BattleData__checkAliveOther(v212, v207->fields.uniqueId, 0);
              if ( v213 )
                goto LABEL_247;
              if ( !v211 )
                sub_2213CDC(v213, v214);
              v215 = this->fields.logic;
              if ( !v215 )
                sub_2213CDC(0, v214);
              if ( BattleLogic__checkPtTargetFunction(v215, v211->fields.funcId, 0) )
              {
LABEL_247:
                v216 = BattleServantData__GetRevengeIdCheckOpponentOnly(v207, v197, 0);
                if ( v216 < 0 )
                {
                  v219 = Target__getTargetIds(this->fields.data, v199->fields.svtUniqueId, -1, v188, 13, 0, 0);
                  v220 = BattleSkillInfoData__ExistsNoTargetNoActionType(v199, 0);
                }
                else
                {
                  v217 = sub_2213B20(int___TypeInfo, 1);
                  v219 = (System_Int32_array *)v217;
                  if ( !v217 )
                    sub_2213CDC(0, v218);
                  if ( !*(_DWORD *)(v217 + 24) )
                    sub_2213CE4(v217);
                  v220 = 0;
                  *(_DWORD *)(v217 + 32) = v216;
                }
                v221 = this->fields.logicskill;
                v222 = sub_2213B20(int___TypeInfo, 1);
                if ( !v222 )
                  sub_2213CDC(0, v223);
                if ( !*(_DWORD *)(v222 + 24) )
                  sub_2213CE4(v222);
                *(_DWORD *)(v222 + 32) = v188;
                if ( !v221 )
                  sub_2213CDC(v222, v223);
                v224 = BattleLogicSkill__taskSkill(v221, v199, (System_Int32_array *)v222, v219, 1, v220, 0, 0, 0, 0);
                v225 = this->fields.logic;
                if ( !v225 )
                  sub_2213CDC(0, v224);
                BattleLogic__addBattleLogicTask(v225, v224, 0);
              }
            }
            v226 = this->fields.data;
            if ( !v226 )
              sub_2213CDC(0, v198);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(v226, v197, 0);
          }
        }
        v195 = (int)v189[1].monitor;
      }
    }
    v227 = BattleLogicNomal___c_TypeInfo;
    if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v191);
      v227 = BattleLogicNomal___c_TypeInfo;
    }
    v228 = v227->static_fields;
    _9__43_4 = (System_Func_object__bool__o *)v228->__9__43_4;
    if ( !_9__43_4 )
    {
      if ( !*(&v227->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v227, v191);
        v228 = BattleLogicNomal___c_TypeInfo->static_fields;
      }
      v230 = (Il2CppObject *)v228->__9;
      _9__43_4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__43_4, v230, Method_BattleLogicNomal___c__createEndTurnPlayer_b__43_4__, 0);
      v231 = BattleLogicNomal___c_TypeInfo->static_fields;
      v231->__9__43_4 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__43_4;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v231->__9__43_4,
        (int32_t)_9__43_4,
        v232,
        v233,
        v234,
        v235,
        v236,
        v237);
    }
    if ( BasicHelper__Any_object__58785420(
           (System_Object_array *)v189,
           (System_Func_T__bool__o *)_9__43_4,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleBuffData_BuffData____91711696) )
    {
      BattleLogicNomal__UpdateApplyAttachCardBuffIndexList(this, v192, v238);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v254,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_283;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)Instance, 0);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v244, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_283;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0, 0);
  }
  v239 = this->fields.data;
  if ( !v239
    || (Instance = (__int64)v239->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_283:
    sub_2213CDC(Instance, v5);
  }
  if ( (v248 & 1) != 0 )
    v240 = baseActData;
  else
    v240 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v240, baseActData, 0);
}


BattleActionData_o *BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t ActorId; // w0
  struct System_String_o *motionName; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_String_o *motionMessage; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UnityEngine_GameObject_o *targetObject; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5973C8C & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973C8C = 1;
  }
  v4 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0), !task) )
    sub_2213CDC(v5, v6);
  *(_BYTE *)(v4 + 257) = task->fields.isForcedSpeedOne;
  ActorId = BattleLogicTask__getActorId(task, 0);
  motionName = task->fields.motionName;
  *(_DWORD *)(v4 + 32) = ActorId;
  *(_QWORD *)(v4 + 72) = motionName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 72), (int32_t)motionName, v9, v10, v11, v12, v13, v14);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 144) = motionMessage;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 144), (int32_t)motionMessage, v16, v17, v18, v19, v20, v21);
  targetObject = task->fields.targetObject;
  *(_DWORD *)(v4 + 152) = task->fields.messageType;
  *(_QWORD *)(v4 + 80) = targetObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 80), (int32_t)targetObject, v23, v24, v25, v26, v27, v28);
  return (BattleActionData_o *)v4;
}


BattleActionData_o *BattleLogicNomal__createShiftGuts(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v4; // x20
  BattleData_o *data; // x21
  BattleLogicNomal_o *v6; // x21
  BattleBuffData_CheckIndividualitiesData_array *v7; // x2
  int32_t ShiftGuts; // w0
  int32_t v9; // w22
  BattleActionData_o *result; // x0
  struct BattleData_o *v11; // x8
  BattleLogicNomal_o *v12; // x23
  struct BattleLogic_o *logic; // x8
  BattleBuffData_BuffData_o *v14; // [xsp+0h] [xbp-40h] BYREF
  BuffEntity_o *buffEntity; // [xsp+8h] [xbp-38h] BYREF

  v14 = 0;
  buffEntity = 0;
  if ( !task )
    goto LABEL_15;
  v4 = this;
  data = this->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_15;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0);
  if ( !this )
    goto LABEL_15;
  v6 = this;
  v7 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts((BattleServantData_o *)this, 0);
  this = (BattleLogicNomal_o *)v6[10].fields.logicfunction;
  buffEntity = 0;
  if ( !this )
    goto LABEL_15;
  ShiftGuts = BattleBuffData__GetShiftGuts(
                (BattleBuffData_o *)this,
                (BattleServantData_o *)v6,
                v7,
                &buffEntity,
                &v14,
                0);
  if ( !v14 )
    return 0;
  v9 = ShiftGuts;
  result = (BattleActionData_o *)buffEntity;
  if ( buffEntity )
  {
    this = (BattleLogicNomal_o *)BuffEntity__GetMotionName(buffEntity, 0);
    v11 = v4->fields.data;
    if ( v11 )
    {
      v12 = this;
      this = (BattleLogicNomal_o *)v11->fields.perf;
      if ( this )
      {
        BattlePerformance__PlayShiftGuts((BattlePerformance_o *)this, 0);
        this = (BattleLogicNomal_o *)v14;
        if ( v14 )
        {
          BattleBuffData_BuffData__SetApplyBuffProgressAfterServantUse(v14, 1, 0);
          logic = v4->fields.logic;
          if ( logic )
          {
            this = (BattleLogicNomal_o *)logic->fields.logicReaction;
            if ( this )
              return BattleLogicReaction__createResurrectionCommon(
                       (BattleLogicReaction_o *)this,
                       (BattleServantData_o *)v6,
                       buffEntity,
                       v9,
                       task->fields.isForcedSpeedOne,
                       (System_String_o *)v12,
                       v14,
                       0);
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(this, task);
  }
  return result;
}


BattleActionData_o *BattleLogicNomal__createShiftServant(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v4; // x19
  BattleData_o *data; // x21
  BattleLogicNomal_o *v6; // x20
  __int64 v7; // x22
  char v8; // w21
  __int64 v9; // x1
  int32_t ShiftMotionOverwriteNumber; // w22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  int logic; // w8
  BattleActionData_ShiftServant_o *v19; // x23
  bool isOverwriteShift; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_5973C98 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActorControl_TypeInfo);
    this = (BattleLogicNomal_o *)sub_2213A60(&BattleActionData_ShiftServant_TypeInfo);
    byte_5973C98 = 1;
  }
  motionName = 0;
  isOverwriteShift = 0;
  if ( !task )
    goto LABEL_20;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_20;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0);
  if ( !this )
    goto LABEL_20;
  v6 = this;
  v7 = 0;
  if ( !BattleServantData__isShiftReady((BattleServantData_o *)this, 0) )
    return (BattleActionData_o *)v7;
  this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicNomal_o *)BattleDeckServantData__IsBreakShiftHp0((BattleDeckServantData_o *)this, 0);
  if ( !v6[3].fields.tmpShiftTask )
    goto LABEL_20;
  v8 = (char)this;
  ShiftMotionOverwriteNumber = BattleDeckServantData__GetShiftMotionOverwriteNumber(
                                 (BattleDeckServantData_o *)v6[3].fields.tmpShiftTask,
                                 0);
  if ( !*(&BattleActorControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v9);
  BattleActorControl__GetShiftMotionNameAndOverwriteFlag(ShiftMotionOverwriteNumber, &motionName, &isOverwriteShift, 0);
  v7 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  v17 = (int)motionName;
  logic = (int)v6->fields.logic;
  *(_QWORD *)(v7 + 72) = motionName;
  *(_DWORD *)(v7 + 32) = logic;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 72), v17, v11, v12, v13, v14, v15, v16);
  this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
  *(_BYTE *)(v7 + 260) = isOverwriteShift;
  if ( !this )
    goto LABEL_20;
  *(_BYTE *)(v7 + 261) = BattleDeckServantData__IsIgnoreShiftWhiteFade((BattleDeckServantData_o *)this, 0);
  v19 = (BattleActionData_ShiftServant_o *)sub_2213CCC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v19, 0, 0);
  if ( !v19 )
    goto LABEL_20;
  BattleActionData_ShiftServant__setBeforeSvtData(v19, (BattleServantData_o *)v6, 0);
  if ( *(_BYTE *)(v7 + 260) )
    BattleActionData_ShiftServant__SetBeforeWeapon(v19, (BattleServantData_o *)v6, 0);
  BattleServantData__setShiftServant((BattleServantData_o *)v6, v4->fields.data, 1, 0);
  BattleServantData__SetIsBattleShift((BattleServantData_o *)v6, 1, 0);
  BattleActionData_ShiftServant__setCheckSvtData(v19, (BattleServantData_o *)v6, 0);
  BattleActionData__setShiftServant((BattleActionData_o *)v7, v19, 0);
  this = (BattleLogicNomal_o *)v4->fields.logic;
  if ( !this )
LABEL_20:
    sub_2213CDC(this, task);
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, (int32_t)v6->fields.logic, 1, 0, 0);
  if ( (v8 & 1) != 0 )
    BattleServantData__setHp((BattleServantData_o *)v6, 0, 0, 0, 0);
  return (BattleActionData_o *)v7;
}


BattleActionData_o *BattleLogicNomal__createStartEnemyTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleActionData_o *StartTurn; // x0
  const MethodInfo *v6; // x1
  struct BattleData_o *data; // x8
  BattleActionData_o *v8; // x20
  struct BattleData_o *v9; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x21
  struct BattleData_o *v12; // x8
  struct BattlePerformance_o *v13; // x8

  if ( (byte_5973C8D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11573/*"RESET_CAMERA_BAT"*/);
    byte_5973C8D = 1;
  }
  StartTurn = BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0;
  StartTurn = BattleLogicNomal__DeadChangePos(this, v6);
  v8 = StartTurn;
  if ( StartTurn )
  {
    v9 = this->fields.data;
    if ( !v9 )
      goto LABEL_18;
    perf = v9->fields.perf;
    if ( !perf )
      goto LABEL_18;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    StartTurn = (BattleActionData_o *)UnityEngine_Object__op_Inequality(actioncamera, 0, 0);
    if ( ((unsigned __int8)StartTurn & 1) != 0 )
    {
      v12 = this->fields.data;
      if ( v12 )
      {
        v13 = v12->fields.perf;
        if ( v13 )
        {
          StartTurn = (BattleActionData_o *)v13->fields.actioncamera;
          if ( StartTurn )
          {
            BattleActionCamera__sendMainEvent(
              (BattleActionCamera_o *)StartTurn,
              (System_String_o *)StringLiteral_11573/*"RESET_CAMERA_BAT"*/,
              0,
              0);
            return v8;
          }
        }
      }
LABEL_18:
      sub_2213CDC(StartTurn, v6);
    }
  }
  return v8;
}


BattleActionData_o *BattleLogicNomal__createStartTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  void *data; // x0
  int v6; // w8
  int v7; // w9
  __int64 v8; // x12
  struct BattleData_o *v9; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0);
  if ( !data )
    goto LABEL_12;
  v6 = *((_DWORD *)data + 6);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v6 == v7 )
        sub_2213CE4(data);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 572) = 1;
      if ( (v6 & ~(v6 >> 31)) == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_2213CDC(data, task);
  }
LABEL_8:
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_12;
  v9->fields.systemflg_skipDeadtemp = 0;
  if ( !task )
    goto LABEL_12;
  data = v9->fields.battleEvent;
  if ( !data )
    goto LABEL_12;
  (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)data + 760LL))(
    data,
    task->fields.actiontype == 20,
    *(_QWORD *)(*(_QWORD *)data + 768LL));
  return 0;
}


int32_t BattleLogicNomal__getCountSubmember(
        BattleLogicNomal_o *this,
        BattleServantData_array *svtList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  int32_t v5; // w20
  unsigned __int64 v6; // x22
  BattleServantData_o *v7; // x21

  if ( !svtList )
    sub_2213CDC(this, 0);
  max_length = svtList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_2213CE4(this);
    v7 = svtList->m_Items[v6];
    if ( v7 )
    {
      this = (BattleLogicNomal_o *)BattleServantData__isAlive(svtList->m_Items[v6], 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7->fields.isEntry
          || (this = (BattleLogicNomal_o *)BattleServantData__get_isWaitRepop(v7, 0), ((unsigned __int8)this & 1) != 0) )
        {
          ++v5;
        }
      }
    }
    LODWORD(max_length) = svtList->max_length;
    ++v6;
  }
  while ( (__int64)v6 < (int)max_length );
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleLogicNomal__getShiftableUniqueId(BattleLogicNomal_o *this, int32_t uniqueId, const MethodInfo *method)
{
  void *data; // x0
  int v5; // w8
  _DWORD *v6; // x20
  unsigned int v7; // w21
  char *v8; // x22
  char *v9; // x22
  void *v10; // t1

  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  data = BattleData__getFieldEnemyServantList((BattleData_o *)data, 1, 0);
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
      data = (void *)BattleServantData__isShiftReady((BattleServantData_o *)data, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
    }
    v5 = v6[6];
    if ( (int)++v7 >= v5 )
      return 0;
  }
  if ( v7 >= v6[6] )
LABEL_15:
    sub_2213CE4(data);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_2213CDC(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BattleAttackManager_o *BattleLogicNomal__get_AtkManager(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields.battleAtkManager;
}


BaseBattleEvent_o *BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields.battleEvent;
}


BattleFieldEnvironmentData_o *BattleLogicNomal__get_FieldEnvData(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields._FieldEnvData_k__BackingField;
}


void BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5973C7C & 1) == 0 )
  {
    sub_2213A60(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_2213A60(&BattleLogic_reactionFunction_TypeInfo);
    byte_5973C7C = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_2213CCC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0);
  if ( !list )
    sub_2213CDC(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass58_0_o *v5; // x21
  BattleData_o *ShiftableUniqueId; // x0
  __int64 v7; // x1
  int32_t ActorId; // w0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  BattleServantData_o *v11; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicTask_o *v13; // x22
  int32_t uniqueId; // w2
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct BattleData_o *data; // x8
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x20
  BattleLogicNomal___c_c *v28; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__58_0; // x21
  Il2CppObject *v31; // x22
  struct BattleLogicNomal___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  BeforeShiftServantReactTaskCreator_o *v40; // x22
  ServantReactTaskCreator_o *v41; // x22
  __int64 v42; // x23
  System_Func_object__bool__o *v43; // x24
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct BattleLogic_o *v56; // x8
  BattleLogicTask_o *v57; // x19
  int32_t v58; // w2
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  struct BattleLogic_o *v69; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v71; // x19
  int32_t v72; // w2
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0

  if ( (byte_5973C99 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&ReactTaskTargetFilter_TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__shiftServantTaskReaction_b__58_0__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass58_0__shiftServantTaskReaction_b__2__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass58_0_TypeInfo);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C99 = 1;
  }
  v5 = (BattleLogicNomal___c__DisplayClass58_0_o *)sub_2213CCC(BattleLogicNomal___c__DisplayClass58_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass58_0___ctor(v5, 0);
  if ( !task )
    goto LABEL_48;
  ActorId = BattleLogicTask__getActorId(task, 0);
  ShiftableUniqueId = (BattleData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v9);
  if ( !v5 )
    goto LABEL_48;
  v5->fields.uniqueId = (int)ShiftableUniqueId;
  if ( (_DWORD)ShiftableUniqueId )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    ShiftableUniqueId = this->fields.data;
    if ( !ShiftableUniqueId )
      goto LABEL_48;
    ShiftableUniqueId = (BattleData_o *)BattleData__getServantData(ShiftableUniqueId, v5->fields.uniqueId, 0);
    if ( !ShiftableUniqueId )
      goto LABEL_48;
    v11 = (BattleServantData_o *)ShiftableUniqueId;
    ShiftableUniqueId = (BattleData_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                          (BattleServantData_o *)ShiftableUniqueId,
                                          0);
    if ( !v11->fields.buffData )
      goto LABEL_48;
    ShiftableUniqueId = (BattleData_o *)BattleBuffData__IsShiftGuts(
                                          v11->fields.buffData,
                                          v11,
                                          (BattleBuffData_CheckIndividualitiesData_array *)ShiftableUniqueId,
                                          0);
    if ( ((unsigned __int8)ShiftableUniqueId & 1) != 0 )
    {
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_48;
      ShiftableUniqueId = (BattleData_o *)logic->fields.logicReaction;
      if ( !ShiftableUniqueId )
        goto LABEL_48;
      ShiftableUniqueId = (BattleData_o *)BattleLogicReaction__createTaskGuts(
                                            (BattleLogicReaction_o *)ShiftableUniqueId,
                                            v5->fields.uniqueId,
                                            1,
                                            0);
      if ( !v10 )
        goto LABEL_48;
      System_Collections_Generic_List_object___AddRange(
        v10,
        (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      v13 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v13, 0);
      if ( !v13 )
        goto LABEL_48;
      uniqueId = v5->fields.uniqueId;
      v13->fields.actiontype = 62;
      BattleLogicTask__setActor(v13, 3, uniqueId, 0);
      items = v10->fields._items;
      v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_48;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)v13,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
      v69 = this->fields.logic;
      if ( !v69 )
        goto LABEL_48;
      ShiftableUniqueId = (BattleData_o *)v69->fields.logicReaction;
      if ( !ShiftableUniqueId )
        goto LABEL_48;
      TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                  (BattleLogicReaction_o *)ShiftableUniqueId,
                                                                  v5->fields.uniqueId,
                                                                  0,
                                                                  0);
      System_Collections_Generic_List_object___AddRange(
        v10,
        TaskGuts,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    }
    else
    {
      BattleServantData__UsedProgressingAppliedFailedGuts(v11, 0);
      v40 = (BeforeShiftServantReactTaskCreator_o *)sub_2213CCC(BeforeShiftServantReactTaskCreator_TypeInfo);
      BeforeShiftServantReactTaskCreator___ctor(v40, 24, 0);
      if ( !v40 )
        goto LABEL_48;
      v41 = ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v40, 0);
      v42 = sub_2213CCC(ReactTaskTargetFilter_TypeInfo);
      ReactTaskTargetFilter___ctor((ReactTaskTargetFilter_o *)v42, 0);
      v43 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v43,
        (Il2CppObject *)v5,
        Method_BattleLogicNomal___c__DisplayClass58_0__shiftServantTaskReaction_b__2__,
        0);
      if ( !v42 )
        goto LABEL_48;
      *(_QWORD *)(v42 + 16) = v43;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 16), (int32_t)v43, v44, v45, v46, v47, v48, v49);
      if ( !v41 )
        goto LABEL_48;
      v41->fields._TargetFilter_k__BackingField = (struct ReactTaskTargetFilter_o *)v42;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v41->fields._TargetFilter_k__BackingField,
        v42,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      v56 = this->fields.logic;
      if ( !v56 )
        goto LABEL_48;
      ShiftableUniqueId = (BattleData_o *)v56->fields.logicReaction;
      if ( !ShiftableUniqueId )
        goto LABEL_48;
      ShiftableUniqueId = (BattleData_o *)BattleLogicReaction__CreateTasks(
                                            (BattleLogicReaction_o *)ShiftableUniqueId,
                                            v41,
                                            0);
      if ( !v10 )
        goto LABEL_48;
      System_Collections_Generic_List_object___AddRange(
        v10,
        (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      v57 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v57, 0);
      if ( !v57 )
        goto LABEL_48;
      v58 = v5->fields.uniqueId;
      v57->fields.actiontype = 37;
      BattleLogicTask__setActor(v57, 3, v58, 0);
      v65 = v10->fields._items;
      v66 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v10->fields._version;
      if ( !v65 )
        goto LABEL_48;
      v67 = v10->fields._size;
      if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)v57,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &v65->obj.klass + v67;
        v10->fields._size = v67 + 1;
        v68[4] = (Il2CppClass *)v57;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 4), (int32_t)v57, v59, v60, v61, v62, v63, v64);
      }
    }
    v71 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v71, 0);
    if ( v71 )
    {
      v72 = v5->fields.uniqueId;
      v71->fields.actiontype = 36;
      BattleLogicTask__setActor(v71, 3, v72, 0);
      v79 = v10->fields._items;
      v80 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v10->fields._version;
      if ( v79 )
      {
        v81 = v10->fields._size;
        if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v71,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &v79->obj.klass + v81;
          v10->fields._size = v81 + 1;
          v82[4] = (Il2CppClass *)v71;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v82 + 4), (int32_t)v71, v73, v74, v75, v76, v77, v78);
        }
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
    }
LABEL_48:
    sub_2213CDC(ShiftableUniqueId, v7);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_48;
  ShiftableUniqueId = (BattleData_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !ShiftableUniqueId )
    goto LABEL_48;
  BattleFieldEnvironmentData__ProgressApplyBuffAfterServantUse((BattleFieldEnvironmentData_o *)ShiftableUniqueId, 1, 0);
  ShiftableUniqueId = this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_48;
  FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                           ShiftableUniqueId,
                                                                           1,
                                                                           0);
  v28 = BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v26);
    v28 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__58_0 = (System_Action_object__o *)static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v26);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__58_0, v31, Method_BattleLogicNomal___c__shiftServantTaskReaction_b__58_0__, 0);
    v32 = BattleLogicNomal___c_TypeInfo->static_fields;
    v32->__9__58_0 = (struct System_Action_BattleServantData__o *)_9__58_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__58_0, (int32_t)_9__58_0, v33, v34, v35, v36, v37, v38);
  }
  BasicHelper__ForEach_object_(
    FieldEnemyServantList,
    (System_Action_T__o *)_9__58_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleServantData___);
  return this->fields.zeroTask;
}


BattleLogicTask_array *BattleLogicNomal__taskAddCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleData_o *battleEvent; // x0
  __int64 v8; // x1
  struct BattleData_o *v9; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v11; // x0
  int32_t COMMAND_CARD_NUM_TO_SELECT; // w1
  BattleCommandData_o *v13; // x22
  BattleServantData_o *v14; // x24
  BattleCommandCardTask_o *v15; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_5973C7E & 1) == 0 )
  {
    sub_2213A60(&BattleCommandCardTask_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973C7E = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_29;
  battleEvent = (BattleData_o *)v9->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_29;
  battleEvent = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, Il2CppMethodPointer))battleEvent->klass[1].vtable._4_getAiParam.method)(
                                  battleEvent,
                                  battleEvent->klass[1].vtable._5_isAiTarget.methodPtr);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_26;
  if ( !data )
    goto LABEL_29;
  combodata = data->fields.combodata;
  if ( !combodata )
    goto LABEL_29;
  if ( combodata->fields.samecount < 3 )
    goto LABEL_26;
  v11 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v8);
    v11 = BattleDataDefine_TypeInfo;
  }
  COMMAND_CARD_NUM_TO_SELECT = v11->static_fields->COMMAND_CARD_NUM_TO_SELECT;
  this->fields.commandIndex = COMMAND_CARD_NUM_TO_SELECT;
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, COMMAND_CARD_NUM_TO_SELECT, 0);
  if ( !battleEvent )
    goto LABEL_29;
  v13 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_29;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v13->fields.uniqueId, 0);
  if ( !battleEvent )
    goto LABEL_29;
  v14 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v14->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v14, 0), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_26:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_29;
  }
  v15 = (BattleCommandCardTask_o *)sub_2213CCC(BattleCommandCardTask_TypeInfo);
  BattleCommandCardTask___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_29;
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, 2, v13->fields.uniqueId, 0);
  if ( BattleServantData__IsAllAttack(v14, v13, 0) )
  {
    battleEvent = (BattleData_o *)this->fields.logic;
    if ( !battleEvent )
      goto LABEL_29;
    BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0);
  }
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent
    || (BattleLogicTarget__getTargetBattleServantData(
          (BattleLogicTarget_o *)battleEvent,
          (BattleLogicTask_o *)v15,
          v13,
          0),
        BattleLogicTask__setAddAttackCommand((BattleLogicTask_o *)v15, data->fields.combodata, v13, 0),
        v15->fields.isCanCounterTask = 1,
        !v6)
    || (items = v6->fields._items,
        v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_29:
    sub_2213CDC(battleEvent, v8);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v15,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  BattleLogicTask_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5973C94 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973C94 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, 0);
    if ( !v8 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddEnemy(v8, 0);
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v5 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_2213CDC(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, 0);
    if ( !v8 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v8, 0);
  }
  if ( !v5 )
    goto LABEL_14;
  items = v5->fields._items;
  v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNomal__taskCheckShiftServants(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  BattleLogicNomal__PreCheckUseShiftGuts(this, *(const MethodInfo **)&ltype);
  return BattleLogicNomal__shiftServantTaskReaction(this, this->fields.tmpShiftTask, v5);
}


BattleLogicTask_array *BattleLogicNomal__taskComboOrderAfter(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x1
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5973C85 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973C85 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_12;
  BattleLogic__resetOverKill(logic, 0);
  if ( !data
    || (BattleData__SetCommandAttacked(data, 0, 0),
        v9 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v9, 0),
        !v9)
    || (BattleLogicTask__setSystem(v9, 0), !v6)
    || (items = v6->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_12:
    sub_2213CDC(logic, v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskComboOrderBefore(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 battleEvent; // x0
  __int64 v8; // x1
  struct BattleData_o *v9; // x8

  if ( (byte_5973C83 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973C83 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !data )
    goto LABEL_10;
  BattleData__SetCommandAttacked(data, 0, 0);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_10;
  battleEvent = (__int64)v9->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_10;
  battleEvent = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)battleEvent + 792LL))(
                  battleEvent,
                  *(_QWORD *)(*(_QWORD *)battleEvent + 800LL));
  if ( (battleEvent & 1) == 0 )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_10:
    sub_2213CDC(battleEvent, v8);
  }
  BattleData__ApplyCommandcardFirstBonus(data, 0);
  if ( !v6 )
    goto LABEL_10;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  BattleCommandData_o *battleEvent; // x0
  __int64 v9; // x1
  struct BattleData_o *v10; // x8
  int32_t v11; // w24
  BattleCommandData_o *v12; // x23
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v14; // x2
  BattleCommandCardTask_o *v15; // x22
  int treasureDvc; // w8
  int32_t TreasureDvcId; // w0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_5973C7D & 1) == 0 )
  {
    sub_2213A60(&BattleCommandCardTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973C7D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_41;
  battleEvent = (BattleCommandData_o *)v10->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_41;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, void *))&battleEvent->klass[2]._1.byval_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.this_arg.data);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_18;
  if ( ltype == 3 )
    v11 = 2;
  else
    v11 = ltype == 2;
  this->fields.commandIndex = v11;
  if ( !data )
    goto LABEL_41;
  battleEvent = BattleData__getSelectCommand(data, v11, 0);
  if ( !battleEvent )
    goto LABEL_41;
  v12 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_18;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_41;
  ServantData = BattleData__getServantData((BattleData_o *)battleEvent, v12->fields.uniqueId, 0);
  battleEvent = (BattleCommandData_o *)BattleLogicNomal__IsEnableToAttack(ServantData, v12, v14);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
  {
LABEL_18:
    if ( v7 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v7,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_41;
  }
  v15 = (BattleCommandCardTask_o *)sub_2213CCC(BattleCommandCardTask_TypeInfo);
  BattleCommandCardTask___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_41;
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v15, data->fields.combodata, v12, v11, 0);
  if ( BattleData__isTutorial(data, 0) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0) )
      BattleCommandData__checkCriticalRate(v12, 0, 0);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v12, 0);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, 2, v12->fields.uniqueId, 0);
  treasureDvc = v12->fields.treasureDvc;
  v15->fields.isCanCounterTask = 1;
  if ( treasureDvc < 1 )
  {
    if ( !ServantData )
      goto LABEL_41;
    if ( BattleServantData__IsAllAttack(ServantData, v12, 0) )
    {
      battleEvent = (BattleCommandData_o *)this->fields.logic;
      if ( !battleEvent )
        goto LABEL_41;
      BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0);
    }
    BattleData__setTDChain(data, 0, 0);
    battleEvent = (BattleCommandData_o *)this->fields.logictarget;
    if ( battleEvent )
    {
      battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                             (BattleLogicTarget_o *)battleEvent,
                                             (BattleLogicTask_o *)v15,
                                             v12,
                                             0);
      if ( v7 )
      {
        items = v7->fields._items;
        v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v15,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v15;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v15, v29, v30, v31, v32, v33, v34);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_41:
    sub_2213CDC(battleEvent, v9);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_41;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0);
  if ( !ServantData )
    goto LABEL_41;
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, 2, ServantData->fields.uniqueId, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v15, data->fields.combodata, v12, v11, 0);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v15, TreasureDvcId, 1, 0);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_41;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         (BattleLogicTask_o *)v15,
                                         v12,
                                         0);
  if ( !v7 )
    goto LABEL_41;
  v25 = v7->fields._items;
  v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v7->fields._version;
  if ( !v25 )
    goto LABEL_41;
  v27 = v7->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v15,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v7->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v15, v19, v20, v21, v22, v23, v24);
  }
  BattleData__setTDChain(data, 1, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskCounterFunc(
        BattleLogicNomal_o *this,
        BattleData_o *data,
        bool isEnemy,
        bool isSkillCounter,
        bool isInitLogicHp,
        const MethodInfo *method)
{
  _BOOL4 v6; // w26
  __int64 Instance; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v10; // x1
  bool v11; // w23
  __int64 v12; // x8
  __int64 v13; // x28
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  BattleServantData_o *v16; // x27
  int32_t wasAttackTargetId; // w1
  BattleServantData_o *v18; // x20
  System_Collections_Generic_IEnumerable_T__o *v19; // x29
  void *monitor; // x8
  bool v21; // w20
  __int64 v22; // x24
  BattleBuffData_BuffData_o *v23; // x21
  BattleLogicTask_o *v24; // x25
  int32_t v25; // w1
  _BOOL4 v26; // w20
  int32_t LimitCount; // w26
  BattleCommandData_o *v28; // x0
  int32_t v29; // w3
  BattleCommandData_o *v30; // x23
  BattleComboData_o *v31; // x20
  BattleComboData_o *v32; // x1
  BattleCommandData_o *v33; // x2
  __int64 v34; // x23
  __int64 v35; // x20
  __int64 v36; // x8
  int32_t uniqueId; // w9
  __int64 v38; // x2
  void (__fastcall *v39)(__int64, __int64, __int64); // x10
  __int64 v40; // x1
  System_Int32_array *v41; // x23
  System_String_o *CounterMessage; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x9
  BattleLogicNomal___c_c *v54; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__21_1; // x20
  Il2CppObject *v57; // x21
  struct BattleLogicNomal___c_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct BattleLogic_o *logic; // x8
  __int64 v66; // x1
  BattleLogicNomal___c_c *v67; // x0
  struct BattleLogicNomal___c_StaticFields *v68; // x8
  System_Action_object__o *_9__21_0; // x19
  Il2CppObject *v70; // x20
  struct BattleLogicNomal___c_StaticFields *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  BattleLogicNomal_o *v79; // [xsp+8h] [xbp-A8h]
  int32_t SvtId; // [xsp+10h] [xbp-A0h]
  int32_t counterId; // [xsp+14h] [xbp-9Ch]
  SkillLvMaster_o *MasterData_object; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_HashSet_object__o *v84; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // [xsp+30h] [xbp-80h]
  char v87; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_object__o *v88; // [xsp+48h] [xbp-68h]

  v6 = isInitLogicHp;
  if ( (byte_5973C7F & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleLogicTask__TypeInfo);
    sub_2213A60(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___91631288);
    sub_2213A60(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__);
    sub_2213A60(&Method_BattleLogicNomal___c__taskCounterFunc_b__21_1__);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C7F = 1;
  }
  v88 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v88,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v11 = isEnemy;
  if ( !Instance )
    goto LABEL_85;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !data )
    goto LABEL_85;
  v12 = 312;
  if ( isEnemy )
    v12 = 320;
  v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = *(__int64 *)((char *)&data->klass + v12);
  if ( !v13 )
    goto LABEL_85;
  v14 = *(_QWORD *)(v13 + 24);
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)v14 )
LABEL_86:
        sub_2213CE4(Instance);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v13 + 4 * v15 + 32), 0);
      if ( Instance )
      {
        v16 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v16, 0);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = v16->fields.wasAttackTargetId;
            if ( wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0);
              if ( Instance )
              {
                v18 = (BattleServantData_o *)Instance;
                if ( v16->fields.isEnemy != *(unsigned __int8 *)(Instance + 515) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
                  Instance = BattleServantData__isAliveLogic(v18, 0, 0);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v16->fields.buffData;
                    if ( !Instance )
                      goto LABEL_85;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v16,
                                          v18,
                                          0,
                                          0);
                    if ( !Instance )
                      goto LABEL_85;
                    v19 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v79 = this;
                      v84 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_69968828(
                        v84,
                        v19,
                        (const MethodInfo_42BA3BC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___91631288);
                      monitor = v19[1].monitor;
                      v21 = isSkillCounter;
                      if ( (int)monitor >= 1 )
                      {
                        v22 = 4;
                        v87 = 1;
                        do
                        {
                          if ( v22 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_86;
                          v23 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v19->klass + v22);
                          if ( !v21 )
                            goto LABEL_89;
                          if ( !v23 )
                            goto LABEL_85;
                          if ( v23->fields.isSkillReaction )
                          {
LABEL_89:
                            v24 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v24, 0);
                            if ( v11 )
                            {
                              if ( !v24 )
                                goto LABEL_85;
                              v25 = 3;
                            }
                            else
                            {
                              if ( !v24 )
                                goto LABEL_85;
                              v25 = 2;
                            }
                            BattleLogicTask__setActor(v24, v25, v16->fields.uniqueId, 0);
                            BattleLogicTask__setTarget(v24, v16->fields.wasAttackTargetId, 0);
                            Instance = (__int64)v16->fields.buffData;
                            if ( !Instance )
                              goto LABEL_85;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v23, 1, 0);
                            if ( (Instance & 1) != 0 )
                            {
                              v16->fields.overkillTargetId = -1;
                              if ( !v23 )
                                goto LABEL_85;
                              if ( v23->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v24,
                                  v23->fields.counterId,
                                  v23->fields.counterLv,
                                  v23->fields.counterOc,
                                  1,
                                  0);
                              }
                              else if ( v23->fields.isUseAttack )
                              {
                                counterId = v23->fields.counterId;
                                SvtId = BattleServantData__getSvtId(v16, 0);
                                v26 = v6;
                                LimitCount = BattleServantData__getLimitCount(v16, 0);
                                v28 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
                                v29 = LimitCount;
                                v30 = v28;
                                v6 = v26;
                                BattleCommandData___ctor_53637188(v28, counterId, SvtId, v29, 0, -1, 0);
                                BattleServantData__SetOverwriteSvtCardType(v16, v30, 0);
                                BattleServantData__AddServantCommandCard(v16, v23->fields.counterId, 0);
                                v31 = (BattleComboData_o *)sub_2213CCC(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v31, 0);
                                v32 = v31;
                                v21 = isSkillCounter;
                                v33 = v30;
                                v11 = isEnemy;
                                BattleLogicTask__setActionCommand(v24, v32, v33, 0, 0);
                              }
                              else
                              {
                                Instance = (__int64)MasterData_object;
                                if ( !MasterData_object )
                                  goto LABEL_85;
                                Instance = (__int64)SkillLvMaster__GetEntity(
                                                      MasterData_object,
                                                      v23->fields.counterId,
                                                      v23->fields.counterLv,
                                                      0);
                                if ( !Instance )
                                {
                                  v11 = isEnemy;
                                  goto LABEL_61;
                                }
                                v34 = Instance;
                                v35 = sub_2213CCC(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v35, 0);
                                if ( !v35 )
                                  goto LABEL_85;
                                v36 = *(_QWORD *)v35;
                                uniqueId = v16->fields.uniqueId;
                                *(_QWORD *)(v35 + 16) = 20;
                                v39 = *(void (__fastcall **)(__int64, __int64, __int64))(v36 + 376);
                                v38 = *(_QWORD *)(v36 + 384);
                                v40 = *(unsigned int *)(v34 + 16);
                                *(_DWORD *)(v35 + 24) = uniqueId;
                                v39(v35, v40, v38);
                                *(_DWORD *)(v35 + 36) = *(_DWORD *)(v34 + 20);
                                Instance = sub_2213B20(int___TypeInfo, 1);
                                if ( !Instance )
                                  goto LABEL_85;
                                v41 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_86;
                                *(_DWORD *)(Instance + 32) = v16->fields.wasAttackTargetId;
                                Instance = sub_2213B20(int___TypeInfo, 1);
                                if ( !Instance )
                                  goto LABEL_85;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_86;
                                *(_DWORD *)(Instance + 32) = v16->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  v24,
                                  (BattleSkillInfoData_o *)v35,
                                  v41,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  0);
                                v21 = isSkillCounter;
                                v11 = isEnemy;
                              }
                              Instance = (__int64)v85;
                              if ( !v85 )
                                goto LABEL_85;
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v85,
                                                    v23->fields.buffId,
                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_85;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0);
                              BattleLogicTask__setMessage(v24, CounterMessage, 2, 0);
                              v24->fields.isCounter = 1;
                              if ( (v87 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v24,
                                  v16,
                                  (BattleBuffData_BuffData_array *)v19,
                                  0);
                              if ( !v88 )
                                goto LABEL_85;
                              items = v88->fields._items;
                              v50 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v88->fields._version;
                              if ( !items )
                                goto LABEL_85;
                              size = v88->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v88,
                                  (Il2CppObject *)v24,
                                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v52 = &items->obj.klass + size;
                                v88->fields._size = size + 1;
                                v52[4] = (Il2CppClass *)v24;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)(v52 + 4),
                                  (int32_t)v24,
                                  v43,
                                  v44,
                                  v45,
                                  v46,
                                  v47,
                                  v48);
                              }
                              Instance = (__int64)v84;
                              if ( !v84 )
                                goto LABEL_85;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v84,
                                           (Il2CppObject *)v23,
                                           (const MethodInfo_42BABA0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v87 = 0;
                            }
                          }
LABEL_61:
                          LODWORD(monitor) = v19[1].monitor;
                          v53 = v22 - 3;
                          ++v22;
                        }
                        while ( v53 < (int)monitor );
                      }
                      v54 = BattleLogicNomal___c_TypeInfo;
                      if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v10);
                        v54 = BattleLogicNomal___c_TypeInfo;
                      }
                      static_fields = v54->static_fields;
                      this = v79;
                      _9__21_1 = (System_Action_object__o *)static_fields->__9__21_1;
                      if ( !_9__21_1 )
                      {
                        if ( !*(&v54->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(v54, v10);
                          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        }
                        v57 = (Il2CppObject *)static_fields->__9;
                        _9__21_1 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__21_1,
                          v57,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__21_1__,
                          0);
                        v58 = BattleLogicNomal___c_TypeInfo->static_fields;
                        v58->__9__21_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__21_1;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)&v58->__9__21_1,
                          (int32_t)_9__21_1,
                          v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v84,
                        (System_Action_T__o *)_9__21_1,
                        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v14) = *(_DWORD *)(v13 + 24);
    }
    while ( (__int64)++v15 < (int)v14 );
  }
  v10 = (System_Collections_Generic_List_BattleLogicTask__o *)v88;
  if ( !v88 )
    goto LABEL_85;
  if ( v88->fields._size < 1 )
    goto LABEL_77;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_85:
    sub_2213CDC(Instance, v10);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0);
  v10 = (System_Collections_Generic_List_BattleLogicTask__o *)v88;
LABEL_77:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_85;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks((BattleLogic_o *)Instance, v10, 1, 0);
  BattleData__ResetWasAttackTargetId(data, 0);
  v67 = BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v66);
    v67 = BattleLogicNomal___c_TypeInfo;
  }
  v68 = v67->static_fields;
  _9__21_0 = (System_Action_object__o *)v68->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v67->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v67, v66);
      v68 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)v68->__9;
    _9__21_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleLogicTask__TypeInfo);
    System_Action_object____ctor(_9__21_0, v70, Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__, 0);
    v71 = BattleLogicNomal___c_TypeInfo->static_fields;
    v71->__9__21_0 = (struct System_Action_BattleLogicTask__o *)_9__21_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71->__9__21_0, (int32_t)_9__21_0, v72, v73, v74, v75, v76, v77);
  }
  System_Collections_Generic_List_object___ForEach(
    v88,
    (System_Action_T__o *)_9__21_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v88,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskPlayMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        System_String_o *motionName,
        UnityEngine_Transform_o *Tr,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_5973C8A & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973C8A = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v9 + 128) = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 128), (int32_t)gameObject, v13, v14, v15, v16, v17, v18);
  if ( !svtData )
    goto LABEL_15;
  v19 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v9, v19, svtData->fields.uniqueId, 0);
  if ( !v8
    || (items = v8->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_15:
    sub_2213CDC(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), v9, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskPlaySubEntryMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        UnityEngine_Transform_o *Tr,
        bool isTactical,
        const MethodInfo *method)
{
  __int64 v9; // x25
  __int64 v10; // x26
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x21
  BattleEntity_o *battle_ent; // x0
  __int64 v14; // x1
  System_String_o *v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct BattleData_o *data; // x8
  __int64 v24; // x1
  bool isNotDisplayRemain; // w8
  int v26; // w9
  System_String_o *v27; // x0
  BattleData_o *v28; // x8
  System_String_o *v29; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v31; // x2
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int32_t uniqueId; // w2
  System_String_o *v35; // x20
  BattleLogicTask_o *v36; // x0
  System_String_o *v37; // x1
  struct BattleData_o *v38; // x8
  System_String_o *v39; // x22
  int32_t EnemyCountStartValue_k__BackingField; // w23
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v42; // x2
  Il2CppObject *v43; // x0
  System_String_o *v44; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  int v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5973C8B & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3002/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_2213A60(&StringLiteral_9120/*"MOTION_ENTRY"*/);
    sub_2213A60(&StringLiteral_3000/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_2213A60(&StringLiteral_3001/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_2213A60(&StringLiteral_9123/*"MOTION_ENTRY_TAC"*/);
    byte_5973C8B = 1;
  }
  v9 = StringLiteral_9123/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_9120/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0);
  if ( !v12 )
    goto LABEL_32;
  v15 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v15, 0);
  if ( !Tr )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v12 + 128) = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 128), (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
  if ( !svtData )
    goto LABEL_32;
  if ( svtData->fields.isEnemy )
  {
    data = this->fields.data;
    if ( data )
    {
      battle_ent = data->fields.battle_ent;
      if ( battle_ent )
      {
        battle_ent = (BattleEntity_o *)BattleEntity__GetStageEntityAtWave(battle_ent, data->fields.wavecount, 0);
        if ( battle_ent )
        {
          isNotDisplayRemain = StageEntity__isNotDisplayRemain((StageEntity_o *)battle_ent, 0);
          v26 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
          if ( isNotDisplayRemain )
          {
            if ( !v26 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
            v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0);
            goto LABEL_25;
          }
          if ( !v26 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"BATTLE_SUBENTRY_ENEMY"*/, 0);
          v38 = this->fields.data;
          if ( v38 )
          {
            v39 = (System_String_o *)battle_ent;
            EnemyCountStartValue_k__BackingField = v38->fields._EnemyCountStartValue_k__BackingField;
            EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v38, 0);
            v56 = BattleLogicNomal__getCountSubmember(
                    EnemyServantList,
                    (BattleServantData_array *)EnemyServantList,
                    v42)
                + EnemyCountStartValue_k__BackingField;
            v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v56);
            v27 = System_String__Format(v39, v43, 0);
LABEL_25:
            v44 = v27;
            BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, 0);
            v36 = (BattleLogicTask_o *)v12;
            v37 = v44;
            goto LABEL_26;
          }
        }
      }
    }
LABEL_32:
    sub_2213CDC(battle_ent, v14);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"BATTLE_SUBENTRY_PLAYER"*/, 0);
  v28 = this->fields.data;
  if ( !v28 )
    goto LABEL_32;
  v29 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v28, 0);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v31);
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &CountSubmember);
  v33 = System_String__Format(v29, v32, 0);
  uniqueId = svtData->fields.uniqueId;
  v35 = v33;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, 0);
  v36 = (BattleLogicTask_o *)v12;
  v37 = v35;
LABEL_26:
  BattleLogicTask__setMessage(v36, v37, 1, 0);
  if ( !v11 )
    goto LABEL_32;
  items = v11->fields._items;
  v52 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), v12, v45, v46, v47, v48, v49, v50);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26___ctor(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26__MoveNext(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  Il2CppObject *v11; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct BattleData_o *data; // x8
  struct BattleCommandData_array *selectcommandlist; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v45; // x0
  int32_t v46; // w8
  int32_t _7__wrap7; // w8
  int32_t v48; // w8
  int32_t _7__wrap4; // w8
  int32_t v50; // w8
  bool result; // w0
  MissionNaviTransitionBoardItem_o *p__7__wrap3; // x0
  struct BattleCommandData_array *v53; // x9
  struct BattleCommandData_array *_7__wrap3; // t1
  int32_t max_length; // w10
  BattleCommandData_o *v56; // x19
  BattleData_o *v57; // x0
  __int64 v58; // x1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  Il2CppObject *ServantData; // x20
  System_Collections_Generic_List_object__o *v66; // x0
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x8
  _BOOL8 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v74; // x20
  BattleLogicNomal___c_c *v75; // x0
  struct BattleLogicNomal___c_StaticFields *v76; // x8
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v77; // x19
  System_Func_object__int__o *_9__26_1; // x21
  Il2CppObject *v79; // x22
  struct BattleLogicNomal___c_StaticFields *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v87; // x0
  __int64 v88; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v89; // x20
  System_Linq_IOrderedEnumerable_TSource__c *v90; // x8
  __int64 v91; // x9
  int32_t *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  __int64 v101; // x0
  __int64 v102; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v103; // x8
  __int64 v104; // x0
  __int64 v105; // x1
  BattleData_o *v106; // x0
  struct BattleLogicNomal___c__DisplayClass26_0_o *_8__1; // x19
  System_Collections_Generic_IEnumerable_T__o *FieldAliveServantArray; // x21
  System_Collections_Generic_List_object__o *v109; // x20
  __int64 v110; // x0
  __int64 v111; // x1
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  System_Collections_Generic_List_object__o *selectSvtList_5__2; // x19
  Il2CppObject *v119; // x21
  System_Action_object__o *v120; // x20
  __int64 v121; // x0
  __int64 v122; // x1
  BattleCommandData_o *v123; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v124; // x0
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  __int64 v131; // x0
  __int64 v132; // x1
  struct BattleData_o *v133; // x8
  BattleCommandData_o *notSelectedCommand_5__3; // x0
  __int64 v135; // x1
  struct BattleCommandData_o *v136; // x0
  __int64 v137; // x0
  __int64 v138; // x1
  struct BattleLogicNomal___c__DisplayClass26_0_o *v139; // x8
  System_Collections_Generic_List_object__o *otherSvtList; // x0
  Il2CppObject *current; // x8
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v142; // x9
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v149; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v150; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v151; // x8
  __int64 v152; // x9
  int32_t *v153; // x10
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x1
  BattleSkillInfoData_o *v157; // x19
  BattleLogicSkill_o *v158; // x20
  __int64 v159; // x0
  __int64 v160; // x1
  struct BattleLogicTask_array *v161; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v162; // x0
  System_String_o *v163; // x2
  System_String_o *v164; // x3
  int32_t v165; // w4
  int32_t v166; // w5
  bool v167; // w6
  bool v168; // w7
  MissionNaviTransitionBoardItem_o *v169; // x0
  struct BattleLogicTask_array *v170; // x9
  int32_t v171; // w10
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v172; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v173; // x8
  __int64 v174; // x9
  int *v175; // x10
  __int64 v176; // x0
  const MethodInfo *v177; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v178; // x0
  System_String_o *v179; // x2
  System_String_o *v180; // x3
  int32_t v181; // w4
  int32_t v182; // w5
  bool v183; // w6
  bool v184; // w7
  struct BattleLogicTask_o *v185; // x1
  int32_t v186; // w8
  __int64 v187; // x19
  const MethodInfo *v188; // x1
  BattleServantData_o *v189; // x19
  _BOOL8 IsEnableToAttack; // x0
  __int64 v191; // x1
  __int64 v192; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v193; // x20
  BattleLogicNomal___c_c *v194; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v196; // x19
  System_Func_object__int__o *_9__26_2; // x21
  Il2CppObject *v198; // x22
  struct BattleLogicNomal___c_StaticFields *v199; // x0
  System_String_o *v200; // x2
  System_String_o *v201; // x3
  int32_t v202; // w4
  int32_t v203; // w5
  bool v204; // w6
  bool v205; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v206; // x0
  __int64 v207; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v208; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v210; // x9
  int32_t *p_offset; // x10
  __int64 v212; // x0
  __int64 v213; // x0
  System_String_o *v214; // x2
  System_String_o *v215; // x3
  int32_t v216; // w4
  int32_t v217; // w5
  bool v218; // w6
  bool v219; // w7
  __int64 v220; // x0
  __int64 v221; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v222; // x8
  __int64 v223; // x0
  __int64 v224; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v225; // x8
  BattleData_o *v226; // x0
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v227; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v228; // x8
  __int64 v229; // x9
  int32_t *v230; // x10
  __int64 v231; // x0
  __int64 v232; // x0
  __int64 v233; // x1
  BattleSkillInfoData_o *v234; // x19
  BattleLogicSkill_o *logicskill; // x20
  __int64 v236; // x0
  __int64 v237; // x1
  struct BattleLogicTask_array *v238; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v239; // x0
  System_String_o *v240; // x2
  System_String_o *v241; // x3
  int32_t v242; // w4
  int32_t v243; // w5
  bool v244; // w6
  bool v245; // w7
  MissionNaviTransitionBoardItem_o *p__7__wrap6; // x0
  struct BattleLogicTask_array *_7__wrap6; // x9
  int32_t v248; // w10
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v250; // x8
  __int64 v251; // x9
  int *v252; // x10
  __int64 v253; // x0
  const MethodInfo *v254; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v255; // x0
  System_String_o *v256; // x2
  System_String_o *v257; // x3
  int32_t v258; // w4
  int32_t v259; // w5
  bool v260; // w6
  bool v261; // w7
  struct BattleLogicTask_o *v262; // x1
  const MethodInfo *v263; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v264[2]; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v265; // [xsp+48h] [xbp-78h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o **v266; // [xsp+50h] [xbp-70h] BYREF
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v267; // [xsp+58h] [xbp-68h] BYREF

  v8 = this;
  v267 = this;
  if ( (byte_5973CA7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleServantData__TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_2213A60(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData___ctor___91640248);
    sub_2213A60(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__);
    sub_2213A60(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__);
    sub_2213A60(&Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__);
    sub_2213A60(&BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973CA7 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  v265 = 0;
  v266 = &v267;
  if ( _1__state == 2 )
  {
    _7__wrap4 = v8->fields.__7__wrap4;
    v8->fields.__1__state = -5;
    v50 = _7__wrap4 + 1;
    v8->fields.__7__wrap4 = v50;
    goto LABEL_145;
  }
  if ( _1__state == 1 )
  {
    _7__wrap7 = v8->fields.__7__wrap7;
    v8->fields.__1__state = -3;
    v48 = _7__wrap7 + 1;
    v8->fields.__7__wrap7 = v48;
    goto LABEL_82;
  }
  if ( _1__state )
    goto LABEL_13;
  v8->fields.__1__state = -1;
  v11 = (Il2CppObject *)sub_2213CCC(BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v11, 0);
  v12 = v267;
  v267->fields.__8__1 = (struct BattleLogicNomal___c__DisplayClass26_0_o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v20 = v267;
  v267->fields._selectSvtList_5__2 = (struct System_Collections_Generic_List_BattleServantData__o *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v20->fields._selectSvtList_5__2,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !_4__this )
    sub_2213CDC(v27, v28);
  data = _4__this->fields.data;
  if ( !data )
    sub_2213CDC(v27, v28);
  selectcommandlist = data->fields.selectcommandlist;
  v37 = v267;
  v267->fields.__7__wrap3 = selectcommandlist;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v37->fields.__7__wrap3,
    (int32_t)selectcommandlist,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v45 = v267;
  v46 = 0;
  v267->fields.__7__wrap4 = 0;
LABEL_14:
  _7__wrap3 = v45->fields.__7__wrap3;
  p__7__wrap3 = (MissionNaviTransitionBoardItem_o *)&v45->fields.__7__wrap3;
  v53 = _7__wrap3;
  if ( !_7__wrap3 )
    sub_2213CDC(p__7__wrap3, v38);
  max_length = v53->max_length;
  if ( v46 >= max_length )
  {
    p__7__wrap3->klass = 0;
    sub_2213A04(p__7__wrap3, 0, v39, v40, v41, v42, v43, v44);
    if ( !_4__this )
      sub_2213CDC(v104, v105);
    v106 = _4__this->fields.data;
    if ( !v106 )
      sub_2213CDC(0, v105);
    _8__1 = v267->fields.__8__1;
    FieldAliveServantArray = (System_Collections_Generic_IEnumerable_T__o *)BattleData__GetFieldAliveServantArray(
                                                                              v106,
                                                                              1,
                                                                              0,
                                                                              0,
                                                                              0);
    v109 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v109,
      FieldAliveServantArray,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_BattleServantData___ctor___91640248);
    if ( !_8__1 )
      sub_2213CDC(v110, v111);
    _8__1->fields.otherSvtList = (struct System_Collections_Generic_List_BattleServantData__o *)v109;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_8__1->fields, (int32_t)v109, v112, v113, v114, v115, v116, v117);
    v119 = (Il2CppObject *)v267->fields.__8__1;
    selectSvtList_5__2 = (System_Collections_Generic_List_object__o *)v267->fields._selectSvtList_5__2;
    v120 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(
      v120,
      v119,
      Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__,
      0);
    if ( !selectSvtList_5__2 )
      sub_2213CDC(v121, v122);
    System_Collections_Generic_List_object___ForEach(
      selectSvtList_5__2,
      (System_Action_T__o *)v120,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    v123 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v123, 0);
    v124 = v267;
    v267->fields._notSelectedCommand_5__3 = v123;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v124->fields._notSelectedCommand_5__3,
      (int32_t)v123,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
    v133 = _4__this->fields.data;
    if ( !v133 )
      sub_2213CDC(v131, v132);
    notSelectedCommand_5__3 = v267->fields._notSelectedCommand_5__3;
    if ( !notSelectedCommand_5__3 )
      sub_2213CDC(0, v132);
    BattleCommandData__setCombo(notSelectedCommand_5__3, v133->fields.combodata, 0, 0);
    v136 = v267->fields._notSelectedCommand_5__3;
    if ( !v136 )
      sub_2213CDC(0, v135);
    v136->fields._type = -1;
    BattleCommandData__ResetOverwriteSvtCardType(v136, 0);
    v139 = v267->fields.__8__1;
    if ( !v139 )
      sub_2213CDC(v137, v138);
    otherSvtList = (System_Collections_Generic_List_object__o *)v139->fields.otherSvtList;
    if ( !otherSvtList )
      sub_2213CDC(0, v138);
    System_Collections_Generic_List_object___GetEnumerator(
      v264,
      otherSvtList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    current = v264[0].fields._current;
    v142 = v267;
    v264[1] = v264[0];
    *(_OWORD *)&v267->fields.__7__wrap8.fields._list = *(_OWORD *)&v264[0].fields._list;
    v142->fields.__7__wrap8.fields._current = (struct BattleServantData_o *)current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v142->fields.__7__wrap8, 0, v143, v144, v145, v146, v147, v148);
    v149 = v267;
    v267->fields.__1__state = -4;
LABEL_107:
    if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v149->fields.__7__wrap8,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
    {
      v189 = v267->fields.__7__wrap8.fields._current;
      IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(v189, v267->fields._notSelectedCommand_5__3, 0);
      if ( !v189 )
        sub_2213CDC(IsEnableToAttack, v191);
      v193 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
               v189,
               v267->fields._notSelectedCommand_5__3,
               IsEnableToAttack,
               1,
               0);
      v194 = BattleLogicNomal___c_TypeInfo;
      if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v192);
        v194 = BattleLogicNomal___c_TypeInfo;
      }
      static_fields = v194->static_fields;
      v196 = v267;
      _9__26_2 = (System_Func_object__int__o *)static_fields->__9__26_2;
      if ( !_9__26_2 )
      {
        if ( !*(&v194->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v194, v192);
          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
        }
        v198 = (Il2CppObject *)static_fields->__9;
        _9__26_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleSkillInfoData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__26_2,
          v198,
          Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__,
          0);
        v199 = BattleLogicNomal___c_TypeInfo->static_fields;
        v199->__9__26_2 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v199->__9__26_2,
          (int32_t)_9__26_2,
          v200,
          v201,
          v202,
          v203,
          v204,
          v205);
      }
      v206 = System_Linq_Enumerable__OrderBy_object__int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v193,
               (System_Func_TSource__TKey__o *)_9__26_2,
               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
      v208 = v206;
      if ( !v206 )
        sub_2213CDC(0, v207);
      klass = v206->klass;
      v210 = *(unsigned __int16 *)&v206->klass->_2.rank;
      if ( *(_WORD *)&v206->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
        {
          --v210;
          p_offset += 4;
          if ( !v210 )
            goto LABEL_120;
        }
        v212 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_120:
        v212 = sub_224BC3C(v206, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
      }
      v213 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v212)(
               v208,
               *(_QWORD *)(v212 + 8));
      if ( !v196 )
        sub_2213CDC(v213, v213);
      v196->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v213;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v196->fields.__7__wrap5,
        v213,
        v214,
        v215,
        v216,
        v217,
        v218,
        v219);
      v222 = v267;
      v267->fields.__1__state = -5;
      while ( 1 )
      {
        _7__wrap5 = v222->fields.__7__wrap5;
        if ( !_7__wrap5 )
          sub_2213CDC(v220, v221);
        v250 = _7__wrap5->klass;
        v251 = *(unsigned __int16 *)&_7__wrap5->klass->_2.rank;
        if ( *(_WORD *)&_7__wrap5->klass->_2.rank )
        {
          v252 = &v250->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)v252 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v251;
            v252 += 4;
            if ( !v251 )
              goto LABEL_153;
          }
          v253 = (__int64)&v250->vtable[*v252];
        }
        else
        {
LABEL_153:
          v253 = sub_224BC3C(_7__wrap5, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v253)(
                _7__wrap5,
                *(_QWORD *)(v253 + 8))
            & 1) == 0 )
        {
          BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally3(v267, v254);
          v255 = v267;
          v267->fields.__7__wrap5 = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v255->fields.__7__wrap5,
            0,
            v256,
            v257,
            v258,
            v259,
            v260,
            v261);
          v149 = v267;
          goto LABEL_107;
        }
        v227 = v267->fields.__7__wrap5;
        if ( !v227 )
          sub_2213CDC(v267, v254);
        v228 = v227->klass;
        v229 = *(unsigned __int16 *)&v227->klass->_2.rank;
        if ( *(_WORD *)&v227->klass->_2.rank )
        {
          v230 = &v228->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v230 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
          {
            --v229;
            v230 += 4;
            if ( !v229 )
              goto LABEL_137;
          }
          v231 = (__int64)&v228->vtable[*v230];
        }
        else
        {
LABEL_137:
          v231 = sub_224BC3C(
                   v267->fields.__7__wrap5,
                   System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
                   0);
        }
        v232 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v231)(
                 v227,
                 *(_QWORD *)(v231 + 8));
        if ( !_4__this )
          sub_2213CDC(v232, v233);
        v234 = (BattleSkillInfoData_o *)v232;
        logicskill = _4__this->fields.logicskill;
        v236 = sub_2213B20(int___TypeInfo, 1);
        if ( !v234 )
          sub_2213CDC(v236, v237);
        if ( !v236 )
          goto LABEL_161;
        if ( !*(_DWORD *)(v236 + 24) )
          sub_2213CE4(v236);
        *(_DWORD *)(v236 + 32) = v234->fields.svtUniqueId;
        if ( !logicskill )
LABEL_161:
          sub_2213CDC(v236, v237);
        v238 = BattleLogicSkill__taskSkill(logicskill, v234, (System_Int32_array *)v236, 0, 0, 0, 0, 0, 0, v263);
        v239 = v267;
        v267->fields.__7__wrap6 = v238;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v239->fields.__7__wrap6,
          (int32_t)v238,
          v240,
          v241,
          v242,
          v243,
          v244,
          v245);
        v8 = v267;
        v50 = 0;
        v267->fields.__7__wrap4 = 0;
LABEL_145:
        p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap6;
        _7__wrap6 = v8->fields.__7__wrap6;
        if ( !_7__wrap6 )
          sub_2213CDC(p__7__wrap6, method);
        v248 = _7__wrap6->max_length;
        if ( v50 < v248 )
          break;
        p__7__wrap6->klass = 0;
        sub_2213A04(p__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
        v222 = v267;
      }
      if ( v50 >= (unsigned int)v248 )
        sub_2213CE4(p__7__wrap6);
      v262 = _7__wrap6->m_Items[v50];
      v8->fields.__2__current = v262;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current, (int32_t)v262, v2, v3, v4, v5, v6, v7);
      v186 = 2;
      goto LABEL_104;
    }
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally2(v267, v188);
    v225 = v267;
    *(_QWORD *)&v267->fields.__7__wrap8.fields._index = 0;
    v225->fields.__7__wrap8.fields._current = 0;
    v225->fields.__7__wrap8.fields._list = 0;
    if ( !_4__this )
      sub_2213CDC(v223, v224);
    v226 = _4__this->fields.data;
    if ( !v226 )
      sub_2213CDC(0, v224);
    BattleData__ClearAllExecutedOnceConfirmCommandFunctionBuffList(v226, 0);
LABEL_13:
    result = 0;
    goto LABEL_105;
  }
  if ( v46 >= (unsigned int)max_length )
    sub_2213CE4(p__7__wrap3);
  if ( !_4__this )
    sub_2213CDC(p__7__wrap3, v38);
  v56 = v53->m_Items[v46];
  if ( !v56 )
    sub_2213CDC(p__7__wrap3, v38);
  v57 = _4__this->fields.data;
  if ( !v57 )
    sub_2213CDC(0, v38);
  ServantData = (Il2CppObject *)BattleData__getServantData(v57, v56->fields.uniqueId, 0);
  v66 = (System_Collections_Generic_List_object__o *)v267->fields._selectSvtList_5__2;
  if ( !v66
    || (items = v66->fields._items,
        v68 = Method_System_Collections_Generic_List_BattleServantData__Add__,
        ++v66->fields._version,
        !items) )
  {
    sub_2213CDC(v66, v58);
  }
  size = v66->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v66,
      ServantData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &items->obj.klass + size;
    v66->fields._size = size + 1;
    v70[4] = (Il2CppClass *)ServantData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 4), (int32_t)ServantData, v59, v60, v61, v62, v63, v64);
  }
  v71 = BattleLogicNomal__IsEnableToAttack((BattleServantData_o *)ServantData, v56, 0);
  if ( !ServantData )
    sub_2213CDC(v71, v72);
  v74 = BattleServantData__EnumerateConfirmCommandFunctionSkill((BattleServantData_o *)ServantData, v56, v71, 0, 0);
  v75 = BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v73);
    v75 = BattleLogicNomal___c_TypeInfo;
  }
  v76 = v75->static_fields;
  v77 = v267;
  _9__26_1 = (System_Func_object__int__o *)v76->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !*(&v75->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v75, v73);
      v76 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v79 = (Il2CppObject *)v76->__9;
    _9__26_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v79,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__,
      0);
    v80 = BattleLogicNomal___c_TypeInfo->static_fields;
    v80->__9__26_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v80->__9__26_1, (int32_t)_9__26_1, v81, v82, v83, v84, v85, v86);
  }
  v87 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v74,
          (System_Func_TSource__TKey__o *)_9__26_1,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v89 = v87;
  if ( !v87 )
    sub_2213CDC(0, v88);
  v90 = v87->klass;
  v91 = *(unsigned __int16 *)&v87->klass->_2.rank;
  if ( *(_WORD *)&v87->klass->_2.rank )
  {
    v92 = &v90->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v92 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v91;
      v92 += 4;
      if ( !v91 )
        goto LABEL_37;
    }
    v93 = (__int64)&v90->vtable[*v92];
  }
  else
  {
LABEL_37:
    v93 = sub_224BC3C(v87, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v94 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8));
  if ( !v77 )
    sub_2213CDC(v94, v94);
  v77->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v94;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v77->fields.__7__wrap5, v94, v95, v96, v97, v98, v99, v100);
  v103 = v267;
  v267->fields.__1__state = -3;
  while ( 1 )
  {
    v172 = v103->fields.__7__wrap5;
    if ( !v172 )
      sub_2213CDC(v101, v102);
    v173 = v172->klass;
    v174 = *(unsigned __int16 *)&v172->klass->_2.rank;
    if ( *(_WORD *)&v172->klass->_2.rank )
    {
      v175 = &v173->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v175 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v174;
        v175 += 4;
        if ( !v174 )
          goto LABEL_90;
      }
      v176 = (__int64)&v173->vtable[*v175];
    }
    else
    {
LABEL_90:
      v176 = sub_224BC3C(v172, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v176)(
            v172,
            *(_QWORD *)(v176 + 8))
        & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally1(v267, v177);
      v178 = v267;
      v267->fields.__7__wrap5 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v178->fields.__7__wrap5, 0, v179, v180, v181, v182, v183, v184);
      v45 = v267;
      v46 = v267->fields.__7__wrap4 + 1;
      v267->fields.__7__wrap4 = v46;
      goto LABEL_14;
    }
    v150 = v267->fields.__7__wrap5;
    if ( !v150 )
      sub_2213CDC(v267, v177);
    v151 = v150->klass;
    v152 = *(unsigned __int16 *)&v150->klass->_2.rank;
    if ( *(_WORD *)&v150->klass->_2.rank )
    {
      v153 = &v151->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v153 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v152;
        v153 += 4;
        if ( !v152 )
          goto LABEL_74;
      }
      v154 = (__int64)&v151->vtable[*v153];
    }
    else
    {
LABEL_74:
      v154 = sub_224BC3C(
               v267->fields.__7__wrap5,
               System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
               0);
    }
    v155 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v154)(
             v150,
             *(_QWORD *)(v154 + 8));
    if ( !_4__this )
      sub_2213CDC(v155, v156);
    v157 = (BattleSkillInfoData_o *)v155;
    v158 = _4__this->fields.logicskill;
    v159 = sub_2213B20(int___TypeInfo, 1);
    if ( !v157 )
      sub_2213CDC(v159, v160);
    if ( !v159 )
      goto LABEL_97;
    if ( !*(_DWORD *)(v159 + 24) )
      sub_2213CE4(v159);
    *(_DWORD *)(v159 + 32) = v157->fields.svtUniqueId;
    if ( !v158 )
LABEL_97:
      sub_2213CDC(v159, v160);
    v161 = BattleLogicSkill__taskSkill(v158, v157, (System_Int32_array *)v159, 0, 0, 0, 0, 0, 0, v263);
    v162 = v267;
    v267->fields.__7__wrap6 = v161;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v162->fields.__7__wrap6,
      (int32_t)v161,
      v163,
      v164,
      v165,
      v166,
      v167,
      v168);
    v8 = v267;
    v48 = 0;
    v267->fields.__7__wrap7 = 0;
LABEL_82:
    v169 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap6;
    v170 = v8->fields.__7__wrap6;
    if ( !v170 )
      sub_2213CDC(v169, method);
    v171 = v170->max_length;
    if ( v48 < v171 )
      break;
    v169->klass = 0;
    sub_2213A04(v169, 0, v2, v3, v4, v5, v6, v7);
    v103 = v267;
  }
  if ( v48 >= (unsigned int)v171 )
    sub_2213CE4(v169);
  v185 = v170->m_Items[v48];
  v8->fields.__2__current = v185;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current, (int32_t)v185, v2, v3, v4, v5, v6, v7);
  v186 = 1;
LABEL_104:
  result = 1;
  v267->fields.__1__state = v186;
LABEL_105:
  v187 = v265;
  if ( v265 )
  {
    sub_2012AD0(&v266, method);
    sub_2213CD4(v187);
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct BattleLogicNomal_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5973CAB & 1) == 0 )
  {
    sub_2213A60(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_5973CAB = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_2213CCC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)this;
}


BattleLogicTask_o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26__System_Collections_Generic_IEnumerator_BattleLogicTask__get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26__System_Collections_IEnumerator_Reset(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26__System_Collections_IEnumerator_get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26__System_IDisposable_Dispose(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  int v3; // w9

  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state + 5) <= 7 )
  {
    v3 = 1 << (_1__state + 5);
    if ( (v3 & 0x83) != 0 )
    {
      if ( _1__state == 2 || _1__state == -5 )
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally3(this, method);
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally2(this, method);
    }
    else if ( (v3 & 0x44) != 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally1(this, method);
    }
  }
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally1(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5973CA8 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_5973CA8 = 1;
  }
  _7__wrap5 = this->fields.__7__wrap5;
  this->fields.__1__state = -1;
  if ( _7__wrap5 )
  {
    klass = _7__wrap5->klass;
    v5 = *(unsigned __int16 *)&_7__wrap5->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_224BC3C(_7__wrap5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v7)(
      _7__wrap5,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally2(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_5973CA9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    byte_5973CA9 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap8,
    v3);
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally3(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5973CAA & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_5973CAA = 1;
  }
  _7__wrap5 = this->fields.__7__wrap5;
  this->fields.__1__state = -4;
  if ( _7__wrap5 )
  {
    klass = _7__wrap5->klass;
    v5 = *(unsigned __int16 *)&_7__wrap5->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_224BC3C(_7__wrap5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v7)(
      _7__wrap5,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973C9F & 1) == 0 )
  {
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973C9F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicNomal___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicNomal___c___ctor(BattleLogicNomal___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleServantData_o *BattleLogicNomal___c___CreateCommandBattle_b__30_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  return targetSvtData;
}


int32_t BattleLogicNomal___c___CreateCommandBattle_b__30_2(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *BattleLogicNomal___c___CreateCommandBattle_b__30_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_5973CA0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_5973CA0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
}


bool BattleLogicNomal___c___CreateCommandBattle_b__30_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0);
}


int32_t BattleLogicNomal___c___CreateTaskAfterTreasureDvc_b__62_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  char v4; // w19
  _BOOL4 isEnemy; // w20

  if ( !a || !b )
    sub_2213CDC(this, a);
  v4 = (char)a;
  isEnemy = b->fields.isEnemy;
  if ( !*(_DWORD *)(qword_5984328 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984328, a);
  return System_Boolean__CompareTo_76655012(v4 + 3, isEnemy, 0);
}


void BattleLogicNomal___c___CreateTaskAfterTreasureDvc_b__62_1(
        BattleLogicNomal___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields._IsBuffTriggeredTask_k__BackingField = 1;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_1(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_2(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__28_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool BattleLogicNomal___c___PreCheckUseShiftGuts_b__55_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_2213CDC(this, 0);
  return BattleServantData__isShiftReady(svt, 0);
}


void BattleLogicNomal___c___createBuffAddPlayer_b__49_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_2213CDC(this, 0);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0);
}


int32_t BattleLogicNomal___c___createEndTurnEnemy_b__46_1(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__GetExecutePriority(x, 0);
}


bool BattleLogicNomal___c___createEndTurnEnemy_b__46_4(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__IsChangeCommandCardTypeBuff(x, 0);
}


int32_t BattleLogicNomal___c___createEndTurnPlayer_b__43_1(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__GetExecutePriority(x, 0);
}


bool BattleLogicNomal___c___createEndTurnPlayer_b__43_4(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__IsChangeCommandCardTypeBuff(x, 0);
}


void BattleLogicNomal___c___shiftServantTaskReaction_b__58_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleLogicNomal___c_c *v4; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__58_1; // x20
  Il2CppObject *v7; // x21
  struct BattleLogicNomal___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973CA1 & 1) == 0 )
  {
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicNomal___c__shiftServantTaskReaction_b__58_1__);
    sub_2213A60(&BattleLogicNomal___c_TypeInfo);
    byte_5973CA1 = 1;
  }
  v4 = BattleLogicNomal___c_TypeInfo;
  if ( !*(&BattleLogicNomal___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, svt);
    v4 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__58_1 = (System_Func_object__bool__o *)static_fields->__9__58_1;
  if ( !_9__58_1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, svt);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__58_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__58_1, v7, Method_BattleLogicNomal___c__shiftServantTaskReaction_b__58_1__, 0);
    v8 = BattleLogicNomal___c_TypeInfo->static_fields;
    v8->__9__58_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__58_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__58_1, (int32_t)_9__58_1, v9, v10, v11, v12, v13, v14);
  }
  if ( !svt )
    sub_2213CDC(v4, svt);
  BattleServantData__UseSyncGutsBuffAfterRevertUnused(svt, (System_Func_BattleBuffData_BuffData__bool__o *)_9__58_1, 0);
}


bool BattleLogicNomal___c___shiftServantTaskReaction_b__58_1(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__get_IsShiftGuts(buff, 0) && buff->fields._SyncUsedGutsBuffData_k__BackingField != 0;
}


void BattleLogicNomal___c___taskCounterFunc_b__21_0(
        BattleLogicNomal___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields._IsBuffTriggeredTask_k__BackingField = 1;
}


void BattleLogicNomal___c___taskCounterFunc_b__21_1(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleBuffData_BuffData__RevertUnused(x, 1, 0);
}


void BattleLogicNomal___c__DisplayClass26_0___ctor(
        BattleLogicNomal___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass26_0___GetConfirmCommandFunctionBuffTask_b__0(
        BattleLogicNomal___c__DisplayClass26_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *otherSvtList; // x0

  if ( (byte_5973CA2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Remove__);
    byte_5973CA2 = 1;
  }
  otherSvtList = (System_Collections_Generic_List_object__o *)this->fields.otherSvtList;
  if ( !otherSvtList )
    sub_2213CDC(0, svt);
  System_Collections_Generic_List_object___Remove(
    otherSvtList,
    (Il2CppObject *)svt,
    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_BattleServantData__Remove__);
}


void BattleLogicNomal___c__DisplayClass30_0___ctor(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleBuffData_CheckInvokeBuff_o *BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__1(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  BuffList_c *v5; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v8; // x22

  if ( (byte_5973CA3 & 1) == 0 )
  {
    sub_2213A60(&BuffList_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_5973CA3 = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, targetSvtData);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_2213CCC(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v8, actSvtData, targetSvtData, CommandCodeFunctionActs, 0);
  return v8;
}


void BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass30_0_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BattleLogicNomal___c__DisplayClass30_0_o *v13; // x8
  struct BattleLogicNomal_o *_4__this; // x9
  _QWORD *v15; // x10
  __int64 actSvtData_low; // x11
  BattleLogicNomal_c **v17; // x0

  v6 = this;
  if ( (byte_5973CA4 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_5973CA4 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_3814608 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  v13 = this;
  _4__this = this->fields.__4__this;
  v15 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_2213CDC(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &_4__this->klass + actSvtData_low;
    LODWORD(v13->fields.actSvtData) = actSvtData_low + 1;
    v17[4] = (BattleLogicNomal_c *)buff;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)buff, v7, v8, v9, v10, v11, v12);
  }
}


void BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass30_0_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BattleLogicNomal___c__DisplayClass30_0_o *v13; // x8
  struct BattleLogicNomal_o *_4__this; // x9
  _QWORD *v15; // x10
  __int64 actSvtData_low; // x11
  BattleLogicNomal_c **v17; // x0

  v6 = this;
  if ( (byte_5973CA5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_5973CA5 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_3814608 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  v13 = this;
  _4__this = this->fields.__4__this;
  v15 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_2213CDC(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &_4__this->klass + actSvtData_low;
    LODWORD(v13->fields.actSvtData) = actSvtData_low + 1;
    v17[4] = (BattleLogicNomal_c *)buff;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)buff, v7, v8, v9, v10, v11, v12);
  }
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__6(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleLogicNomal___c__DisplayClass30_0_o *v4; // x20
  struct BattleActionData_o *actiondata; // x8
  BattleServantData_o *result; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass30_0_o *)this->fields.command) == 0)
    || (BattleCommandData__UpdateCritical(
          (BattleCommandData_o *)this,
          v4->fields.actSvtData,
          targetSvtData,
          _4__this->fields.data,
          0),
        !targetSvtData)
    || (actiondata = v4->fields.actiondata) == 0 )
  {
    sub_2213CDC(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


System_Collections_Generic_IEnumerable_BattleServantData__o *BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetSvtList; // x0
  struct System_Func_BattleServantData__BattleServantData__o *targetTo; // x1
  const MethodInfo_38911C8 *v9; // x2

  if ( (byte_5973CA6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_5973CA6 = 1;
  }
  if ( isFunctionAll )
  {
    targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetSvtList;
    targetTo = this->fields.targetTo;
    v9 = (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___;
  }
  else
  {
    targetTo = this->fields.targetTo;
    v9 = (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___;
    if ( isOnlyMain )
      targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mainTarget;
    else
      targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetSvtList;
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)targetTo,
                                                                          v9);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass30_0_o *)_4__this->fields.data) == 0 )
    sub_2213CDC(this, *(_QWORD *)&id);
  return BattleData__getServantData((BattleData_o *)this, id, 0);
}


void BattleLogicNomal___c__DisplayClass43_0___ctor(
        BattleLogicNomal___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass43_0___createEndTurnPlayer_b__0(
        BattleLogicNomal___c__DisplayClass43_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_2213CDC(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
}


void BattleLogicNomal___c__DisplayClass43_1___ctor(
        BattleLogicNomal___c__DisplayClass43_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass43_1___createEndTurnPlayer_b__2(
        BattleLogicNomal___c__DisplayClass43_1_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_o *progressBuff; // x8

  if ( !buff || (progressBuff = this->fields.progressBuff) == 0 )
    sub_2213CDC(this, buff);
  return buff->fields.addOrder == progressBuff->fields.addOrder;
}


void BattleLogicNomal___c__DisplayClass43_2___ctor(
        BattleLogicNomal___c__DisplayClass43_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass43_2___createEndTurnPlayer_b__3(
        BattleLogicNomal___c__DisplayClass43_2_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_o *endBuff; // x8

  if ( !buff || (endBuff = this->fields.endBuff) == 0 )
    sub_2213CDC(this, buff);
  return buff->fields.addOrder == endBuff->fields.addOrder;
}


void BattleLogicNomal___c__DisplayClass46_0___ctor(
        BattleLogicNomal___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass46_0___createEndTurnEnemy_b__0(
        BattleLogicNomal___c__DisplayClass46_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_2213CDC(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
}


void BattleLogicNomal___c__DisplayClass46_1___ctor(
        BattleLogicNomal___c__DisplayClass46_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass46_1___createEndTurnEnemy_b__2(
        BattleLogicNomal___c__DisplayClass46_1_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_o *progressBuff; // x8

  if ( !buff || (progressBuff = this->fields.progressBuff) == 0 )
    sub_2213CDC(this, buff);
  return buff->fields.addOrder == progressBuff->fields.addOrder;
}


void BattleLogicNomal___c__DisplayClass46_2___ctor(
        BattleLogicNomal___c__DisplayClass46_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass46_2___createEndTurnEnemy_b__3(
        BattleLogicNomal___c__DisplayClass46_2_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_o *endBuff; // x8

  if ( !buff || (endBuff = this->fields.endBuff) == 0 )
    sub_2213CDC(this, buff);
  return buff->fields.addOrder == endBuff->fields.addOrder;
}


void BattleLogicNomal___c__DisplayClass58_0___ctor(
        BattleLogicNomal___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass58_0___shiftServantTaskReaction_b__2(
        BattleLogicNomal___c__DisplayClass58_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.uniqueId == this->fields.uniqueId;
}