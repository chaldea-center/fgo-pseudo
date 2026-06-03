void BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BattleLogicTask_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E7AA2F & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask___TypeInfo);
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    byte_4E7AA2F = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1D0F15C(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0);
  this->fields.tmpShiftTask = v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.tmpShiftTask, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, method);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BattleData_o *data; // x19
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v18; // x28
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  BattleActionData_o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  BattleActionData_o **v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct BattleCommandData_o *command; // x1
  BattleCommandData_o **v40; // x26
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  BattleActionData_o *v47; // x19
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v55; // x8
  int32_t v56; // w25
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v58; // x22
  System_Nullable_int__o v59; // x4
  bool v60; // w8
  BattleActionData_o *result; // x0
  System_Collections_Generic_List_object__o *v62; // x19
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  BattleLogicTask_o *v79; // x22
  System_Collections_Generic_List_object__o **v80; // x27
  int32_t AttackType; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x19
  System_Func_T__TResult__o *v84; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x19
  BattleLogicNomal___c_c *v86; // x8
  System_Func_object__bool__o *_9__30_9; // x25
  Il2CppObject *v88; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_List_object__o *v97; // x19
  BattleLogicNomal___c_c *v98; // x8
  System_Func_object__object__o *_9__30_0; // x23
  Il2CppObject *v100; // x22
  struct BattleLogicNomal___c_StaticFields *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  System_Func_object__object__o *v108; // x22
  __int64 v109; // x9
  BuffList_c *v110; // x8
  BattleLogicNomal___c_c *v111; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x23
  System_Func_T__TResult__o *_9__30_2; // x25
  Il2CppObject *v114; // x19
  struct BattleLogicNomal___c_StaticFields *v115; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  System_Func_T__TResult__o *_9__30_3; // x19
  Il2CppObject *v123; // x22
  struct BattleLogicNomal___c_StaticFields *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v131; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  __int64 v138; // x8
  int64_t v139; // x19
  System_Action_object__object__o *v140; // x22
  BattleCommandData_o **v141; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v143; // x22
  __int64 v144; // x8
  __int64 v145; // x23
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  __int64 v152; // x19
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  System_Func_object__object__o *v159; // x19
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v167; // x24
  const MethodInfo *v168; // x1
  const MethodInfo *v169; // x5
  __int64 v170; // x8
  unsigned __int64 v171; // x22
  int v172; // w19
  int32_t v173; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v174; // x27
  __int64 v175; // x8
  __int64 v176; // x19
  __int64 v177; // x9
  int *v178; // x10
  __int64 v179; // x0
  __int64 v180; // x0
  __int64 v181; // x1
  __int64 v182; // x23
  __int64 v183; // x8
  __int64 v184; // x9
  int *v185; // x10
  __int64 v186; // x0
  __int64 v187; // x8
  __int64 v188; // x9
  int *v189; // x10
  __int64 v190; // x0
  Il2CppObject *v191; // x0
  Il2CppObject *v192; // x1
  __int64 v193; // x8
  __int64 v194; // x9
  int *v195; // x10
  __int64 v196; // x0
  unsigned __int64 v197; // x9
  int v198; // w19
  int v199; // w8
  BuffList_ACTION_array *v200; // x27
  int v201; // w8
  __int64 v202; // x8
  __int64 v203; // x19
  __int64 v204; // x9
  int *v205; // x10
  __int64 v206; // x0
  __int64 v207; // x1
  __int64 v208; // x23
  __int64 v209; // x8
  __int64 v210; // x9
  int *v211; // x10
  __int64 v212; // x0
  __int64 v213; // x8
  __int64 v214; // x9
  int *v215; // x10
  __int64 v216; // x0
  __int64 v217; // x1
  BattleServantData_o *v218; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_47770676; // x0
  __int64 v220; // x1
  BattleBuffData_BuffData_array *v221; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v223; // x26
  BattleBuffData_BuffData_o *v224; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v227; // x1
  __int64 v228; // x8
  __int64 v229; // x9
  int *v230; // x10
  __int64 v231; // x0
  __int64 v232; // x8
  __int64 v233; // x19
  __int64 v234; // x9
  int *v235; // x10
  __int64 v236; // x0
  __int64 v237; // x0
  __int64 v238; // x1
  __int64 v239; // x29
  BattleActionData_DamageData_o *v240; // x23
  __int64 v241; // x8
  __int64 v242; // x9
  int *v243; // x10
  __int64 v244; // x0
  __int64 v245; // x8
  __int64 v246; // x9
  int *v247; // x10
  __int64 v248; // x0
  __int64 v249; // x1
  BattleServantData_o *v250; // x27
  BattleLogic_o *v251; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v253; // x1
  BattleActionData_DamageData_o *v254; // x19
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v256; // x22
  BattleActionData_o *v257; // x0
  _BOOL8 v258; // x0
  __int64 v259; // x1
  BattleActionData_o *v260; // x8
  __int64 v261; // x8
  __int64 v262; // x9
  int *v263; // x10
  __int64 v264; // x0
  BattleActionData_o *v265; // x19
  BattleActionData_o *v266; // x19
  BattleActionData_o *v267; // x19
  struct BattleData_o *v268; // x8
  __int64 v269; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v271; // x19
  const MethodInfo *v272; // x5
  __int64 v273; // x8
  unsigned __int64 v274; // x26
  unsigned int v275; // w19
  int32_t v276; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x27
  __int64 v278; // x8
  __int64 v279; // x19
  __int64 v280; // x9
  int *v281; // x10
  __int64 v282; // x0
  __int64 v283; // x0
  __int64 v284; // x1
  __int64 v285; // x23
  __int64 v286; // x8
  __int64 v287; // x9
  int *v288; // x10
  __int64 v289; // x0
  __int64 v290; // x8
  __int64 v291; // x9
  int *v292; // x10
  __int64 v293; // x0
  Il2CppObject *v294; // x0
  Il2CppObject *v295; // x1
  __int64 v296; // x8
  __int64 v297; // x9
  int *v298; // x10
  __int64 v299; // x0
  unsigned __int64 v300; // x26
  int v301; // w19
  int v302; // w8
  BuffList_ACTION_array *v303; // x27
  int v304; // w8
  __int64 v305; // x8
  __int64 v306; // x19
  __int64 v307; // x9
  int *v308; // x10
  __int64 v309; // x0
  __int64 v310; // x1
  __int64 v311; // x23
  __int64 v312; // x8
  __int64 v313; // x9
  int *v314; // x10
  __int64 v315; // x0
  __int64 v316; // x8
  __int64 v317; // x9
  int *v318; // x10
  __int64 v319; // x0
  __int64 v320; // x1
  BattleServantData_o *v321; // x3
  BattleBuffData_BuffData_array *v322; // x0
  __int64 v323; // x1
  BattleBuffData_BuffData_array *v324; // x19
  il2cpp_array_size_t v325; // x8
  unsigned __int64 v326; // x22
  BattleLogicFunction_o *v327; // x0
  __int64 v328; // x8
  __int64 v329; // x9
  int *v330; // x10
  __int64 v331; // x0
  __int64 v332; // x8
  __int64 v333; // x19
  __int64 v334; // x9
  int *v335; // x10
  __int64 v336; // x0
  __int64 v337; // x0
  __int64 v338; // x1
  __int64 v339; // x23
  __int64 v340; // x8
  __int64 v341; // x9
  int *v342; // x10
  __int64 v343; // x0
  __int64 v344; // x8
  __int64 v345; // x9
  int *v346; // x10
  __int64 v347; // x0
  __int64 v348; // x0
  __int64 v349; // x1
  __int64 v350; // x8
  __int64 v351; // x9
  int *v352; // x10
  __int64 v353; // x0
  _BOOL8 v354; // x0
  __int64 v355; // x1
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v358; // x0
  BattleActionData_o *v359; // x8
  BattleLogic_o *v360; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v361; // x22
  System_Nullable_int__o v362; // x4
  __int64 v363; // x1
  __int64 v364; // x0
  const MethodInfo *v365; // [xsp+0h] [xbp-120h]
  bool v366; // [xsp+14h] [xbp-10Ch]
  __int64 *v367; // [xsp+18h] [xbp-108h]
  __int64 v368; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v369; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  BattleBuffData_o *actSvtBuffData; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_Dictionary_object__object__o *v372; // [xsp+40h] [xbp-E0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v373; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+50h] [xbp-D0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+50h] [xbp-D0h]
  Il2CppObject *item; // [xsp+58h] [xbp-C8h]
  bool v377; // [xsp+64h] [xbp-BCh]
  __int64 v378; // [xsp+68h] [xbp-B8h]
  __int64 v379; // [xsp+70h] [xbp-B0h]
  BattleServantData_o **v380; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v381; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v382; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4E7AA19 & 1) == 0 )
  {
    sub_1D0F0B4(&BuffList_ACTION___TypeInfo);
    sub_1D0F0B4(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_1D0F0B4(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&BattleAddSkillTaskAfterCommandAttack_TypeInfo);
    sub_1D0F0B4(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
    sub_1D0F0B4(&BattleServantData___TypeInfo);
    sub_1D0F0B4(&bool___TypeInfo);
    sub_1D0F0B4(&BuffList_TypeInfo);
    sub_1D0F0B4(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1D0F0B4(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_1D0F0B4(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_1D0F0B4(&System_Func_int__BattleServantData__TypeInfo);
    sub_1D0F0B4(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_1D0F0B4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_1D0F0B4(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__);
    sub_1D0F0B4(&BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    byte_4E7AA19 = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = sub_1D0F300(BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass30_0___ctor((BattleLogicNomal___c__DisplayClass30_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_392;
  *(_QWORD *)(v7 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( !task )
    goto LABEL_392;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_392;
  ServantData = BattleData__getServantData(data, ActorId, 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  v18 = (BattleServantData_o **)(v7 + 24);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)ServantData, v19, v20, v21, v22, v23, v24);
  v25 = (BattleActionData_o *)sub_1D0F300(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0);
  *baseActionData = v25;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)baseActionData, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v7 + 48) = v25;
  v32 = (BattleActionData_o **)(v7 + 48);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)v25, v33, v34, v35, v36, v37, v38);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  v40 = (BattleCommandData_o **)(v7 + 40);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)command, v41, v42, v43, v44, v45, v46);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_392;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0);
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_392;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)ActorId, 0);
  }
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0);
  v47 = *v32;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !v47 )
    goto LABEL_392;
  v47->fields.actorId = ActorId;
  ActorId = (__int64)*v32;
  if ( !*v32 )
    goto LABEL_392;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 144) = motionMessage;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(ActorId + 144), (int32_t)motionMessage, v48, v49, v50, v51, v52, v53);
  if ( !*v32 )
    goto LABEL_392;
  (*v32)->fields.isCounter = task->fields.isCounter;
  ActorId = BattleLogicTask__getTarget(task, 0);
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_392;
  v56 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0);
    return 0;
  }
  if ( v55->fields.leaderDown || v55->fields.endbattleFlg )
    return 0;
  ActorId = (__int64)BattleData__getServantData(this->fields.data, ActorId, 0);
  if ( !*v32 )
    goto LABEL_392;
  if ( (*v32)->fields.isCounter )
  {
    if ( !ActorId )
      goto LABEL_392;
    if ( *(_BYTE *)(ActorId + 514) )
      return 0;
  }
  item = (Il2CppObject *)ActorId;
  logic = this->fields.logic;
  v58 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1D0F300(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v58, 0);
  if ( !logic )
    goto LABEL_392;
  v59 = 0;
  v369 = task;
  targetId = v56;
  v60 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v58, task, v56, v59, 0);
  result = 0;
  if ( v60 )
    return result;
  v62 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v62 )
    goto LABEL_392;
  items = v62->fields._items;
  v70 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v62->fields._version;
  if ( !items )
    goto LABEL_392;
  size = v62->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v62,
      item,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &items->obj.klass + size;
    v62->fields._size = size + 1;
    v72[4] = (Il2CppClass *)item;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v72 + 4), (int32_t)item, v63, v64, v65, v66, v67, v68);
  }
  v79 = task;
  *(_QWORD *)(v7 + 56) = v62;
  v80 = (System_Collections_Generic_List_object__o **)(v7 + 56);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 56), (int32_t)v62, v73, v74, v75, v76, v77, v78);
  ActorId = *(_QWORD *)(v7 + 40);
  if ( !ActorId )
    goto LABEL_392;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0);
  ActorId = (__int64)*v40;
  if ( !*v40 )
    goto LABEL_392;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v18,
    (BattleServantData_o *)item,
    this->fields.data,
    0);
  ActorId = (__int64)*v40;
  if ( !*v40 )
    goto LABEL_392;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v18, 0);
  ActorId = (__int64)*v18;
  if ( !*v18 )
    goto LABEL_392;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v40, 0);
  v366 = AttackType == 2;
  v381 = (BattleCommandData_o **)(v7 + 40);
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_392;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v56, 0);
    if ( !this->fields.data )
      goto LABEL_392;
    v82 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0,
                                                                  0));
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v82,
                         (const MethodInfo_3295130 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_392;
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v56,
      (const MethodInfo_39408E8 *)Method_System_Collections_Generic_List_int__Remove__);
    v84 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(
      v84,
      (Il2CppObject *)v7,
      Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__,
      0);
    v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v83,
                                                                 (System_Func_TSource__TResult__o *)v84,
                                                                 (const MethodInfo_3283684 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v86 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v86 = BattleLogicNomal___c_TypeInfo;
    }
    _9__30_9 = (System_Func_object__bool__o *)v86->static_fields->__9__30_9;
    if ( !_9__30_9 )
    {
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = BattleLogicNomal___c_TypeInfo;
      }
      v88 = (Il2CppObject *)v86->static_fields->__9;
      _9__30_9 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__30_9, v88, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__, 0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__30_9 = (struct System_Func_BattleServantData__bool__o *)_9__30_9;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_9,
        (int32_t)_9__30_9,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v85,
                         (System_Func_TSource__bool__o *)_9__30_9,
                         (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v80 )
      goto LABEL_392;
    System_Collections_Generic_List_object___AddRange(
      *v80,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v79 = v369;
    v40 = (BattleCommandData_o **)(v7 + 40);
  }
  BattleLogicTask__RevertUnusedNoNeedUpHateBuff(v79, AttackType != 2, 0);
  if ( !*v80 )
    goto LABEL_392;
  ActorId = (__int64)*v40;
  if ( !*v40 )
    goto LABEL_392;
  *(_DWORD *)(ActorId + 128) = (*v80)->fields._size;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll((BattleCommandData_o *)ActorId, 0);
  v97 = *v80;
  v367 = (__int64 *)(v7 + 56);
  v377 = IsForceAttackFunctionTargetAll;
  v98 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v98 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__object__o *)v98->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v98 = BattleLogicNomal___c_TypeInfo;
    }
    v100 = (Il2CppObject *)v98->static_fields->__9;
    _9__30_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__30_0, v100, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__, 0);
    v101 = BattleLogicNomal___c_TypeInfo->static_fields;
    v101->__9__30_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__30_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v101->__9__30_0, (int32_t)_9__30_0, v102, v103, v104, v105, v106, v107);
  }
  v108 = (System_Func_object__object__o *)sub_1D0F300(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_object__object____ctor(
    v108,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__,
    0);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v97,
                       (System_Func_TSource__TKey__o *)_9__30_0,
                       (System_Func_TSource__TElement__o *)v108,
                       (const MethodInfo_329092C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v109 = *(_QWORD *)(v7 + 24);
  v372 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  if ( !v109 )
    goto LABEL_392;
  v110 = BuffList_TypeInfo;
  actSvtBuffData = *(BattleBuffData_o **)(v109 + 848);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v110 = BuffList_TypeInfo;
  }
  v111 = BattleLogicNomal___c_TypeInfo;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v110->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v111 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_2 = (System_Func_T__TResult__o *)v111->static_fields->__9__30_2;
  if ( !_9__30_2 )
  {
    if ( !v111->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v111);
      v111 = BattleLogicNomal___c_TypeInfo;
    }
    v114 = (Il2CppObject *)v111->static_fields->__9;
    _9__30_2 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__30_2,
      v114,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__,
      0);
    v115 = BattleLogicNomal___c_TypeInfo->static_fields;
    v115->__9__30_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__30_2;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v115->__9__30_2, (int32_t)_9__30_2, v116, v117, v118, v119, v120, v121);
    v111 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v111->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v111);
    v111 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_3 = (System_Func_T__TResult__o *)v111->static_fields->__9__30_3;
  if ( !_9__30_3 )
  {
    if ( !v111->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v111);
      v111 = BattleLogicNomal___c_TypeInfo;
    }
    v123 = (Il2CppObject *)v111->static_fields->__9;
    _9__30_3 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Int32Enum__object____ctor(_9__30_3, v123, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__, 0);
    v124 = BattleLogicNomal___c_TypeInfo->static_fields;
    v124->__9__30_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__30_3;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v124->__9__30_3, (int32_t)_9__30_3, v125, v126, v127, v128, v129, v130);
  }
  v131 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
           CommandCodeBuffHash,
           (System_Func_TSource__TKey__o *)_9__30_2,
           (System_Func_TSource__TElement__o *)_9__30_3,
           (const MethodInfo_3290638 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v7 + 32) = v131;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v131, v132, v133, v134, v135, v136, v137);
  v138 = *(_QWORD *)(v7 + 40);
  v373 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
  if ( !v138 )
    goto LABEL_392;
  v139 = *(_QWORD *)(v138 + 72);
  v140 = (System_Action_object__object__o *)sub_1D0F300(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v140,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__,
    0);
  v141 = (BattleCommandData_o **)(v7 + 40);
  ActorId = (__int64)actSvtBuffData;
  if ( !actSvtBuffData )
    goto LABEL_392;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    actSvtBuffData,
    v139,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v140,
    1,
    0);
  if ( !*v381 )
    goto LABEL_392;
  commandAssistId = (*v381)->fields.commandAssistId;
  v143 = (System_Action_object__object__o *)sub_1D0F300(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v143,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__,
    0);
  v144 = *(_QWORD *)(v7 + 40);
  if ( !v144 )
    goto LABEL_392;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    actSvtBuffData,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v143,
    1,
    *(_DWORD *)(v144 + 88),
    0);
  ActorId = sub_1D0F15C(bool___TypeInfo, 2);
  if ( !ActorId )
    goto LABEL_392;
  v145 = ActorId;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_393;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1D0F15C(BattleServantData___TypeInfo, 1);
  if ( !ActorId )
    goto LABEL_392;
  v152 = ActorId;
  ActorId = (__int64)item;
  if ( item )
  {
    ActorId = sub_1D0F1F0(item, *(_QWORD *)(*(_QWORD *)v152 + 64LL));
    if ( !ActorId )
    {
      v364 = sub_1D0F330(0);
      sub_1D0F1DC(v364, 0);
    }
  }
  if ( !*(_DWORD *)(v152 + 24) )
    goto LABEL_393;
  *(_QWORD *)(v152 + 32) = item;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v152 + 32), (int32_t)item, v146, v147, v148, v149, v150, v151);
  *(_QWORD *)(v7 + 72) = v152;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 72), v152, v153, v154, v155, v156, v157, v158);
  v159 = (System_Func_object__object__o *)sub_1D0F300(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_object__object____ctor(
    v159,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__,
    0);
  *(_QWORD *)(v7 + 64) = v159;
  v368 = v7 + 64;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 64), (int32_t)v159, v160, v161, v162, v163, v164, v165);
  v379 = sub_1D0F300(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v379,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__,
    0);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_392;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v167 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1D0F300(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v167, v168);
  v170 = *(_QWORD *)(v145 + 24);
  v380 = v18;
  v378 = v145;
  if ( (int)v170 >= 1 )
  {
    v171 = 0;
    do
    {
      if ( v171 >= (unsigned int)v170 )
        goto LABEL_393;
      v172 = *(unsigned __int8 *)(v145 + v171 + 32);
      if ( *(_BYTE *)(v145 + v171 + 32) )
        v173 = 177;
      else
        v173 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v373,
                           actSvtBuffData,
                           v173,
                           *v381,
                           v169);
      if ( !v379 )
        goto LABEL_392;
      v174 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v379 + 24))(
                  *(_QWORD *)(v379 + 64),
                  v172 != 0,
                  v377,
                  *(_QWORD *)(v379 + 40));
      if ( !ActorId )
        goto LABEL_392;
      v175 = *(_QWORD *)ActorId;
      v176 = ActorId;
      v177 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v178 = (int *)(*(_QWORD *)(v175 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v178 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v177;
          v178 += 4;
          if ( !v177 )
            goto LABEL_97;
        }
        v179 = v175 + 16LL * *v178 + 312;
      }
      else
      {
LABEL_97:
        v179 = sub_1CE5430(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v180 = (*(__int64 (__fastcall **)(__int64, _QWORD))v179)(v176, *(_QWORD *)(v179 + 8));
      v182 = v180;
      while ( 1 )
      {
        if ( !v182 )
          sub_1D0F30C(v180, v181);
        v183 = *(_QWORD *)v182;
        v184 = *(unsigned __int16 *)(*(_QWORD *)v182 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v182 + 302LL) )
        {
          v185 = (int *)(*(_QWORD *)(v183 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v185 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v184;
            v185 += 4;
            if ( !v184 )
              goto LABEL_105;
          }
          v186 = v183 + 16LL * *v185 + 312;
        }
        else
        {
LABEL_105:
          v186 = sub_1CE5430(v182, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v186)(v182, *(_QWORD *)(v186 + 8)) & 1) == 0 )
          break;
        v187 = *(_QWORD *)v182;
        v188 = *(unsigned __int16 *)(*(_QWORD *)v182 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v182 + 302LL) )
        {
          v189 = (int *)(*(_QWORD *)(v187 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v189 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v188;
            v189 += 4;
            if ( !v188 )
              goto LABEL_112;
          }
          v190 = v187 + 16LL * *v189 + 312;
        }
        else
        {
LABEL_112:
          v190 = sub_1CE5430(v182, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v191 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v190)(v182, *(_QWORD *)(v190 + 8));
        if ( !v372 )
          sub_1D0F30C(v191, v191);
        v192 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v372,
                 v191,
                 (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v192,
          (SkillLvMaster_o *)MasterData_object,
          *v381,
          v174,
          *v32,
          0,
          v167,
          v365);
      }
      v193 = *(_QWORD *)v182;
      v194 = *(unsigned __int16 *)(*(_QWORD *)v182 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v182 + 302LL) )
      {
        v195 = (int *)(*(_QWORD *)(v193 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v195 - 1) != System_IDisposable_TypeInfo )
        {
          --v194;
          v195 += 4;
          if ( !v194 )
            goto LABEL_120;
        }
        v196 = v193 + 16LL * *v195 + 312;
      }
      else
      {
LABEL_120:
        v196 = sub_1CE5430(v182, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v196)(v182, *(_QWORD *)(v196 + 8));
      v145 = v378;
      LODWORD(v170) = *(_DWORD *)(v378 + 24);
      ++v171;
    }
    while ( (__int64)v171 < (int)v170 );
    if ( (int)v170 >= 1 )
    {
      v197 = 0;
      while ( v197 < (unsigned int)v170 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v197;
        v198 = *(unsigned __int8 *)(v145 + v197 + 32);
        ActorId = sub_1D0F15C(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_392;
        v199 = *(_DWORD *)(ActorId + 24);
        v200 = (BuffList_ACTION_array *)ActorId;
        if ( v198 )
        {
          if ( !v199 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v199 == 1 )
            break;
          v201 = 120;
        }
        else
        {
          if ( !v199 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v199 == 1 )
            break;
          v201 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v201;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v379 + 24))(
                    *(_QWORD *)(v379 + 64),
                    v198 != 0,
                    v377,
                    *(_QWORD *)(v379 + 40));
        if ( !ActorId )
          goto LABEL_392;
        v202 = *(_QWORD *)ActorId;
        v203 = ActorId;
        v204 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v205 = (int *)(*(_QWORD *)(v202 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v205 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v204;
            v205 += 4;
            if ( !v204 )
              goto LABEL_142;
          }
          v206 = v202 + 16LL * *v205 + 312;
        }
        else
        {
LABEL_142:
          v206 = sub_1CE5430(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v208 = (*(__int64 (__fastcall **)(__int64, _QWORD))v206)(v203, *(_QWORD *)(v206 + 8));
        if ( !v208 )
          sub_1D0F30C(0, v207);
        while ( 1 )
        {
          v209 = *(_QWORD *)v208;
          v210 = *(unsigned __int16 *)(*(_QWORD *)v208 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v208 + 302LL) )
          {
            v211 = (int *)(*(_QWORD *)(v209 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v211 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v210;
              v211 += 4;
              if ( !v210 )
                goto LABEL_149;
            }
            v18 = v380;
            v141 = v381;
            v212 = v209 + 16LL * *v211 + 312;
          }
          else
          {
LABEL_149:
            v18 = v380;
            v141 = v381;
            v212 = sub_1CE5430(v208, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v212)(v208, *(_QWORD *)(v212 + 8)) & 1) == 0 )
            break;
          v213 = *(_QWORD *)v208;
          v214 = *(unsigned __int16 *)(*(_QWORD *)v208 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v208 + 302LL) )
          {
            v215 = (int *)(*(_QWORD *)(v213 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v215 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v214;
              v215 += 4;
              if ( !v214 )
                goto LABEL_156;
            }
            v216 = v213 + 16LL * *v215 + 312;
          }
          else
          {
LABEL_156:
            v216 = sub_1CE5430(v208, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v218 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v216)(v208, *(_QWORD *)(v216 + 8));
          if ( !*v18 )
            sub_1D0F30C(0, v217);
          AttackSideEffectBuffList_47770676 = BattleServantData__getAttackSideEffectBuffList_47770676(
                                                *v18,
                                                v200,
                                                *v141,
                                                v218,
                                                0);
          v221 = AttackSideEffectBuffList_47770676;
          if ( !AttackSideEffectBuffList_47770676 )
            sub_1D0F30C(0, v220);
          max_length = AttackSideEffectBuffList_47770676->max_length;
          if ( (int)max_length >= 1 )
          {
            v223 = 0;
            do
            {
              if ( v223 >= (unsigned int)max_length )
                sub_1D0F314(AttackSideEffectBuffList_47770676);
              if ( !*v32 )
                sub_1D0F30C(0, v220);
              v224 = v221->m_Items[v223];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v32, 3, 0);
              if ( !logicfunction )
                sub_1D0F30C(SideEffectActionData, v227);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v224,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v167,
                0,
                0);
              LODWORD(max_length) = v221->max_length;
              ++v223;
            }
            while ( (__int64)v223 < (int)max_length );
          }
        }
        v228 = *(_QWORD *)v208;
        v229 = *(unsigned __int16 *)(*(_QWORD *)v208 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v208 + 302LL) )
        {
          v230 = (int *)(*(_QWORD *)(v228 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v230 - 1) != System_IDisposable_TypeInfo )
          {
            --v229;
            v230 += 4;
            if ( !v229 )
              goto LABEL_171;
          }
          v231 = v228 + 16LL * *v230 + 312;
        }
        else
        {
LABEL_171:
          v231 = sub_1CE5430(v208, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v231)(v208, *(_QWORD *)(v231 + 8));
        v145 = v378;
        LODWORD(v170) = *(_DWORD *)(v378 + 24);
        v197 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v170 )
          goto LABEL_181;
      }
LABEL_393:
      sub_1D0F314(ActorId);
    }
  }
LABEL_181:
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0, 0);
  ActorId = (__int64)*v141;
  if ( !*v141 )
    goto LABEL_392;
  BattleCommandData__SetOverwriteRatesIndex((BattleCommandData_o *)ActorId, 0);
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1D0F300(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0, 0);
  if ( !v379 )
    goto LABEL_392;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v379 + 24))(
              *(_QWORD *)(v379 + 64),
              0,
              0,
              *(_QWORD *)(v379 + 40));
  if ( !ActorId )
    goto LABEL_392;
  v232 = *(_QWORD *)ActorId;
  v233 = ActorId;
  v234 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v235 = (int *)(*(_QWORD *)(v232 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v235 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v234;
      v235 += 4;
      if ( !v234 )
        goto LABEL_189;
    }
    v236 = v232 + 16LL * *v235 + 312;
  }
  else
  {
LABEL_189:
    v236 = sub_1CE5430(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v237 = (*(__int64 (__fastcall **)(__int64, _QWORD))v236)(v233, *(_QWORD *)(v236 + 8));
  v239 = v237;
  v240 = 0;
  while ( 1 )
  {
    if ( !v239 )
      sub_1D0F30C(v237, v238);
    v241 = *(_QWORD *)v239;
    v242 = *(unsigned __int16 *)(*(_QWORD *)v239 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v239 + 302LL) )
    {
      v243 = (int *)(*(_QWORD *)(v241 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v243 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v242;
        v243 += 4;
        if ( !v242 )
          goto LABEL_197;
      }
      v244 = v241 + 16LL * *v243 + 312;
    }
    else
    {
LABEL_197:
      v244 = sub_1CE5430(v239, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v244)(v239, *(_QWORD *)(v244 + 8)) & 1) == 0 )
      break;
    v245 = *(_QWORD *)v239;
    v246 = *(unsigned __int16 *)(*(_QWORD *)v239 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v239 + 302LL) )
    {
      v247 = (int *)(*(_QWORD *)(v245 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v247 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v246;
        v247 += 4;
        if ( !v246 )
          goto LABEL_204;
      }
      v248 = v245 + 16LL * *v247 + 312;
    }
    else
    {
LABEL_204:
      v248 = sub_1CE5430(v239, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v250 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v248)(v239, *(_QWORD *)(v248 + 8));
    v251 = this->fields.logic;
    if ( !v251 )
      sub_1D0F30C(0, v249);
    DamageList = BattleLogic__GetDamageList(v251, *v18, v250, *v141, processArgsa, *v32, 0);
    v254 = DamageList;
    if ( v250 == (BattleServantData_o *)item )
      v240 = DamageList;
    if ( !v250 )
      sub_1D0F30C(DamageList, v253);
    buffData = v250->fields.buffData;
    if ( !buffData )
      sub_1D0F30C(DamageList, v253);
    if ( !buffData->fields.isNoDamage )
    {
      v256 = *v32;
      v257 = BattleBuffData__UseProgressingDoNotAct(v250->fields.buffData, v250, 0, 0);
      if ( !v256 )
        sub_1D0F30C(v257, v257);
      BattleActionData__addSideEffectActionData(v256, v257, 1, 0);
    }
    if ( !*v18 )
      sub_1D0F30C(0, v253);
    v258 = BattleServantData__checkPlayer(*v18, 0);
    v260 = *v32;
    if ( v258 )
    {
      if ( !v260 )
        sub_1D0F30C(v258, v259);
      if ( !v260->fields.isCounter )
      {
        if ( !*v18 )
          sub_1D0F30C(v258, v259);
        v250->fields.overkillTargetId = (*v18)->fields.uniqueId;
      }
    }
    else if ( !v260 )
    {
      sub_1D0F30C(v258, v259);
    }
    BattleActionData__setDamageData(v260, v254, 0, 0, 0, 0);
  }
  v261 = *(_QWORD *)v239;
  v262 = *(unsigned __int16 *)(*(_QWORD *)v239 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v239 + 302LL) )
  {
    v263 = (int *)(*(_QWORD *)(v261 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v263 - 1) != System_IDisposable_TypeInfo )
    {
      --v262;
      v263 += 4;
      if ( !v262 )
        goto LABEL_226;
    }
    v264 = v261 + 16LL * *v263 + 312;
  }
  else
  {
LABEL_226:
    v264 = sub_1CE5430(v239, System_IDisposable_TypeInfo, 0);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v264)(v239, *(_QWORD *)(v264 + 8));
  if ( !*(_QWORD *)v368 )
    goto LABEL_392;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v368 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v368 + 64LL),
    item,
    *(_QWORD *)(*(_QWORD *)v368 + 40LL));
  ActorId = (__int64)*v141;
  if ( !*v141 )
    goto LABEL_392;
  v265 = *v32;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0);
  if ( !v265 )
    goto LABEL_392;
  v265->fields.type = ActorId;
  ActorId = (__int64)*v32;
  if ( !*v32 )
    goto LABEL_392;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v141, 0);
  v9 = *v141;
  if ( !*v141 )
    goto LABEL_392;
  v266 = *v32;
  if ( !*v32 )
    goto LABEL_392;
  v266->fields.actionIndex = v9->fields.actionIndex;
  ActorId = (__int64)*v18;
  if ( !*v18 )
    goto LABEL_392;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v9, 0);
  v266->fields.motionId = ActorId;
  if ( !v240 )
    goto LABEL_392;
  v267 = *v32;
  ActorId = BattleActionData_DamageData__getAttackCount(v240, 0);
  if ( !v267 )
    goto LABEL_392;
  v267->fields.attackcount = ActorId;
  v268 = this->fields.data;
  v269 = v378;
  if ( !v268 )
    goto LABEL_392;
  perf = v268->fields.perf;
  if ( !perf )
    goto LABEL_392;
  if ( !*v141 )
    goto LABEL_392;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_392;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v141)->fields.actionIndex,
    0);
  if ( !*v18 )
    goto LABEL_392;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_392;
  v271 = *v32;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v18)->fields.uniqueId, targetId, 0);
  if ( !v271 )
    goto LABEL_392;
  v271->fields.prevattackme = ActorId & 1;
  v273 = *(_QWORD *)(v378 + 24);
  if ( (int)v273 >= 1 )
  {
    v274 = 0;
    do
    {
      if ( v274 >= (unsigned int)v273 )
        goto LABEL_393;
      v275 = *(unsigned __int8 *)(v269 + v274 + 32);
      if ( *(_BYTE *)(v269 + v274 + 32) )
        v276 = 178;
      else
        v276 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v373,
                                    actSvtBuffData,
                                    v276,
                                    *v381,
                                    v272);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v379 + 24))(
                  *(_QWORD *)(v379 + 64),
                  v275,
                  v377,
                  *(_QWORD *)(v379 + 40));
      if ( !ActorId )
        goto LABEL_392;
      v278 = *(_QWORD *)ActorId;
      v279 = ActorId;
      v280 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v281 = (int *)(*(_QWORD *)(v278 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v281 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v280;
          v281 += 4;
          if ( !v280 )
            goto LABEL_255;
        }
        v282 = v278 + 16LL * *v281 + 312;
      }
      else
      {
LABEL_255:
        v282 = sub_1CE5430(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v283 = (*(__int64 (__fastcall **)(__int64, _QWORD))v282)(v279, *(_QWORD *)(v282 + 8));
      v285 = v283;
      while ( 1 )
      {
        if ( !v285 )
          sub_1D0F30C(v283, v284);
        v286 = *(_QWORD *)v285;
        v287 = *(unsigned __int16 *)(*(_QWORD *)v285 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v285 + 302LL) )
        {
          v288 = (int *)(*(_QWORD *)(v286 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v288 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v287;
            v288 += 4;
            if ( !v287 )
              goto LABEL_263;
          }
          v289 = v286 + 16LL * *v288 + 312;
        }
        else
        {
LABEL_263:
          v289 = sub_1CE5430(v285, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v289)(v285, *(_QWORD *)(v289 + 8)) & 1) == 0 )
          break;
        v290 = *(_QWORD *)v285;
        v291 = *(unsigned __int16 *)(*(_QWORD *)v285 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v285 + 302LL) )
        {
          v292 = (int *)(*(_QWORD *)(v290 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v292 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v291;
            v292 += 4;
            if ( !v291 )
              goto LABEL_270;
          }
          v293 = v290 + 16LL * *v292 + 312;
        }
        else
        {
LABEL_270:
          v293 = sub_1CE5430(v285, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v294 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v293)(v285, *(_QWORD *)(v293 + 8));
        if ( !v372 )
          sub_1D0F30C(v294, v294);
        v295 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v372,
                 v294,
                 (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v295,
          (SkillLvMaster_o *)MasterData_object,
          *v381,
          TargetCommandCodeBuffList,
          *v32,
          1,
          v167,
          v365);
      }
      v296 = *(_QWORD *)v285;
      v297 = *(unsigned __int16 *)(*(_QWORD *)v285 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v285 + 302LL) )
      {
        v298 = (int *)(*(_QWORD *)(v296 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v298 - 1) != System_IDisposable_TypeInfo )
        {
          --v297;
          v298 += 4;
          if ( !v297 )
            goto LABEL_278;
        }
        v299 = v296 + 16LL * *v298 + 312;
      }
      else
      {
LABEL_278:
        v299 = sub_1CE5430(v285, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v299)(v285, *(_QWORD *)(v299 + 8));
      v269 = v378;
      LODWORD(v273) = *(_DWORD *)(v378 + 24);
      ++v274;
    }
    while ( (__int64)v274 < (int)v273 );
    if ( (int)v273 >= 1 )
    {
      v300 = 0;
      while ( v300 < (unsigned int)v273 )
      {
        v301 = *(unsigned __int8 *)(v269 + v300 + 32);
        ActorId = sub_1D0F15C(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_392;
        v302 = *(_DWORD *)(ActorId + 24);
        v303 = (BuffList_ACTION_array *)ActorId;
        if ( v301 )
        {
          if ( !v302 )
            goto LABEL_393;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v302 == 1 )
            goto LABEL_393;
          v304 = 121;
        }
        else
        {
          if ( !v302 )
            goto LABEL_393;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v302 == 1 )
            goto LABEL_393;
          v304 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v304;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v379 + 24))(
                    *(_QWORD *)(v379 + 64),
                    v301 != 0,
                    v377,
                    *(_QWORD *)(v379 + 40));
        if ( !ActorId )
          goto LABEL_392;
        v305 = *(_QWORD *)ActorId;
        v306 = ActorId;
        v307 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v308 = (int *)(*(_QWORD *)(v305 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v308 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v307;
            v308 += 4;
            if ( !v307 )
              goto LABEL_300;
          }
          v309 = v305 + 16LL * *v308 + 312;
        }
        else
        {
LABEL_300:
          v309 = sub_1CE5430(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v311 = (*(__int64 (__fastcall **)(__int64, _QWORD))v309)(v306, *(_QWORD *)(v309 + 8));
        if ( !v311 )
          sub_1D0F30C(0, v310);
        while ( 1 )
        {
          v312 = *(_QWORD *)v311;
          v313 = *(unsigned __int16 *)(*(_QWORD *)v311 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v311 + 302LL) )
          {
            v314 = (int *)(*(_QWORD *)(v312 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v314 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v313;
              v314 += 4;
              if ( !v313 )
                goto LABEL_307;
            }
            v315 = v312 + 16LL * *v314 + 312;
          }
          else
          {
LABEL_307:
            v315 = sub_1CE5430(v311, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v315)(v311, *(_QWORD *)(v315 + 8)) & 1) == 0 )
            break;
          v316 = *(_QWORD *)v311;
          v317 = *(unsigned __int16 *)(*(_QWORD *)v311 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v311 + 302LL) )
          {
            v318 = (int *)(*(_QWORD *)(v316 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v318 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v317;
              v318 += 4;
              if ( !v317 )
                goto LABEL_314;
            }
            v319 = v316 + 16LL * *v318 + 312;
          }
          else
          {
LABEL_314:
            v319 = sub_1CE5430(v311, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v321 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v319)(v311, *(_QWORD *)(v319 + 8));
          if ( !*v380 )
            sub_1D0F30C(0, v320);
          v322 = BattleServantData__getAttackSideEffectBuffList_47770676(*v380, v303, *v381, v321, 0);
          v324 = v322;
          if ( !v322 )
            sub_1D0F30C(0, v323);
          v325 = v322->max_length;
          if ( (int)v325 >= 1 )
          {
            v326 = 0;
            do
            {
              if ( v326 >= (unsigned int)v325 )
                sub_1D0F314(v322);
              v327 = this->fields.logicfunction;
              if ( !v327 )
                sub_1D0F30C(0, v323);
              BattleLogicFunction__SetSideEffectBuff(
                v327,
                (SkillLvMaster_o *)MasterData_object,
                *v32,
                v324->m_Items[v326],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v167,
                1,
                0);
              LODWORD(v325) = v324->max_length;
              ++v326;
            }
            while ( (__int64)v326 < (int)v325 );
          }
        }
        v328 = *(_QWORD *)v311;
        v329 = *(unsigned __int16 *)(*(_QWORD *)v311 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v311 + 302LL) )
        {
          v330 = (int *)(*(_QWORD *)(v328 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v330 - 1) != System_IDisposable_TypeInfo )
          {
            --v329;
            v330 += 4;
            if ( !v329 )
              goto LABEL_328;
          }
          v331 = v328 + 16LL * *v330 + 312;
        }
        else
        {
LABEL_328:
          v331 = sub_1CE5430(v311, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v331)(v311, *(_QWORD *)(v331 + 8));
        v269 = v378;
        LODWORD(v273) = *(_DWORD *)(v378 + 24);
        if ( (__int64)++v300 >= (int)v273 )
          goto LABEL_337;
      }
      goto LABEL_393;
    }
  }
LABEL_337:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v379 + 24))(
              *(_QWORD *)(v379 + 64),
              0,
              0,
              *(_QWORD *)(v379 + 40));
  if ( !ActorId )
    goto LABEL_392;
  v332 = *(_QWORD *)ActorId;
  v333 = ActorId;
  v334 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v335 = (int *)(*(_QWORD *)(v332 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v335 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v334;
      v335 += 4;
      if ( !v334 )
        goto LABEL_342;
    }
    v336 = v332 + 16LL * *v335 + 312;
  }
  else
  {
LABEL_342:
    v336 = sub_1CE5430(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v337 = (*(__int64 (__fastcall **)(__int64, _QWORD))v336)(v333, *(_QWORD *)(v336 + 8));
  v339 = v337;
  while ( 1 )
  {
    if ( !v339 )
      sub_1D0F30C(v337, v338);
    v340 = *(_QWORD *)v339;
    v341 = *(unsigned __int16 *)(*(_QWORD *)v339 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v339 + 302LL) )
    {
      v342 = (int *)(*(_QWORD *)(v340 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v342 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v341;
        v342 += 4;
        if ( !v341 )
          goto LABEL_350;
      }
      v343 = v340 + 16LL * *v342 + 312;
    }
    else
    {
LABEL_350:
      v343 = sub_1CE5430(v339, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v343)(v339, *(_QWORD *)(v343 + 8)) & 1) == 0 )
      break;
    v344 = *(_QWORD *)v339;
    v345 = *(unsigned __int16 *)(*(_QWORD *)v339 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v339 + 302LL) )
    {
      v346 = (int *)(*(_QWORD *)(v344 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v346 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v345;
        v346 += 4;
        if ( !v345 )
          goto LABEL_357;
      }
      v347 = v344 + 16LL * *v346 + 312;
    }
    else
    {
LABEL_357:
      v347 = sub_1CE5430(v339, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v348 = (*(__int64 (__fastcall **)(__int64, _QWORD))v347)(v339, *(_QWORD *)(v347 + 8));
    if ( !*v380 )
      sub_1D0F30C(v348, v349);
    if ( !v348 )
      sub_1D0F30C(0, v349);
    if ( !this->fields.logic )
      sub_1D0F30C(v348, v349);
    v337 = BattleLogic__SetDamageSideEffect(
             this->fields.logic,
             *v32,
             (*v380)->fields.uniqueId,
             *(_DWORD *)(v348 + 24),
             *v381,
             -1,
             0);
  }
  v350 = *(_QWORD *)v339;
  v351 = *(unsigned __int16 *)(*(_QWORD *)v339 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v339 + 302LL) )
  {
    v352 = (int *)(*(_QWORD *)(v350 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v352 - 1) != System_IDisposable_TypeInfo )
    {
      --v351;
      v352 += 4;
      if ( !v351 )
        goto LABEL_367;
    }
    v353 = v350 + 16LL * *v352 + 312;
  }
  else
  {
LABEL_367:
    v353 = sub_1CE5430(v339, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v353)(v339, *(_QWORD *)(v353 + 8));
  ActorId = *v367;
  if ( !*v367 )
    goto LABEL_392;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v382,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  i = v382;
  while ( 1 )
  {
    v354 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v354 )
      break;
    current = i.fields._current;
    if ( !i.fields._current )
      sub_1D0F30C(v354, v355);
    klass = i.fields._current[53].klass;
    if ( !klass )
      sub_1D0F30C(v354, v355);
    LOBYTE(klass->_1.nestedTypes) = 0;
    if ( v369->fields.isCanCounterTask )
    {
      if ( !*v380 )
        sub_1D0F30C(v354, v355);
      v358 = this->fields.data;
      if ( !v358 )
        sub_1D0F30C(0, v355);
      BattleData__SetWasAttackTargetId(v358, (*v380)->fields.uniqueId, (int32_t)current[1].monitor, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  ActorId = (__int64)this->fields.logicfunction;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogicFunction__SetSubstituteAction((BattleLogicFunction_o *)ActorId, *v32, 0, 0);
  v9 = (BattleCommandData_o *)item;
  if ( !*(_QWORD *)v368 )
    goto LABEL_392;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v368 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v368 + 64LL),
              item,
              *(_QWORD *)(*(_QWORD *)v368 + 40LL));
  v359 = *v32;
  if ( !*v32 )
    goto LABEL_392;
  v359->fields.isForcedSpeedOne = v369->fields.isForcedSpeedOne;
  v359->fields.isAllAttack = v366;
  if ( !*v380 )
    goto LABEL_392;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_392;
  BattleData__setCommandAttack((BattleData_o *)ActorId, (*v380)->fields.uniqueId, targetId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0, 0),
        v360 = this->fields.logic,
        v361 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1D0F300(BattleAddSkillTaskAfterCommandAttack_TypeInfo),
        BattleAddSkillTaskAfterCommandAttack___ctor(v361, 0),
        !v360)
    || (v362 = 0,
        BattleLogic__AddSkillTask(v360, (BattleAddSkillTaskAroundTargetTask_o *)v361, v369, targetId, v362, 0),
        (ActorId = *v367) == 0) )
  {
LABEL_392:
    sub_1D0F30C(ActorId, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v382,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  for ( i = v382;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
        BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1D0F30C(0, v363);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  ((void (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v369->klass->vtable._10_SetAttacked.methodPtr)(
    v369,
    this->fields.data,
    1,
    v369->klass->vtable._10_SetAttacked.method);
  return *v32;
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1

  if ( (byte_4E7AA2C & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8855/*"MOTION_DO_NOT_ACT"*/);
    byte_4E7AA2C = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0, 0);
  v11 = 0;
  if ( !v10 )
  {
    v11 = sub_1D0F300(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v18 = StringLiteral_8855/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 72) = StringLiteral_8855/*"MOTION_DO_NOT_ACT"*/;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 72), v18, v12, v13, v14, v15, v16, v17);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 64) = BattleCommandData__get_type((BattleCommandData_o *)data, 0);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_1D0F30C(data, task);
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

  if ( (byte_4E7AA2B & 1) == 0 )
  {
    sub_1D0F0B4(&ProgressIntervalTurnActionData_TypeInfo);
    byte_4E7AA2B = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1D0F300(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1D0F30C(data, v5);
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
  BattleServantData_array *FieldAliveServantArray; // x26
  BattleLogicNomal___c_c *v10; // x8
  System_Comparison_T__o *_9__61_0; // x24
  Il2CppObject *v12; // x25
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int max_length; // w8
  unsigned int v21; // w9
  Il2CppClass **v22; // x8
  BattleServantData_o *v23; // x24
  __int64 v24; // x8
  __int64 v25; // x25
  unsigned __int64 v26; // x23
  struct BattleData_o *data; // x8
  struct BattleData_UsedTreasureDvcInfo_o *v28; // x8
  BattleSkillInfoData_o *v29; // x26
  BattleLogicSkill_o *logicskill; // x27
  System_Int32_array *v31; // x28
  struct BattleData_o *v32; // x8
  struct BattleData_UsedTreasureDvcInfo_o *v33; // x8
  System_Action_object__o *v34; // x20
  Il2CppObject *v35; // x21
  struct BattleLogicNomal___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  BattleData_o *v44; // [xsp+10h] [xbp-80h]
  BattleServantData_array *v45; // [xsp+18h] [xbp-78h]
  BattleServantData_o *targetSvtData; // [xsp+20h] [xbp-70h]
  unsigned int v47; // [xsp+2Ch] [xbp-64h]

  if ( (byte_4E7AA2E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&Method_System_Array_Sort_BattleServantData___);
    sub_1D0F0B4(&System_Comparison_BattleServantData__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__61_0__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__61_1__);
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    byte_4E7AA2E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_46:
    sub_1D0F30C(IsExistUsedTdInfo, v7);
  }
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(bData, 3, 0, 1, 0);
  v44 = bData;
  v10 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v10 = BattleLogicNomal___c_TypeInfo;
  }
  _9__61_0 = (System_Comparison_T__o *)v10->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleLogicNomal___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__61_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__61_0,
      v12,
      Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__61_0__,
      0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Comparison_BattleServantData__o *)_9__61_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__61_0,
      (int32_t)_9__61_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  System_Array__Sort_object__52538372(
    (System_Object_array *)FieldAliveServantArray,
    _9__61_0,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_BattleServantData___);
  if ( !FieldAliveServantArray )
    goto LABEL_46;
  max_length = FieldAliveServantArray->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    v45 = FieldAliveServantArray;
    while ( 1 )
    {
      if ( v21 >= max_length )
        goto LABEL_47;
      v22 = &FieldAliveServantArray->obj.klass + (int)v21;
      v23 = (BattleServantData_o *)v22[4];
      if ( !v23 )
        goto LABEL_46;
      v47 = v21;
      IsExistUsedTdInfo = (__int64)BattleServantData__GetTreasureDvcPostAfterBuffList(
                                     (BattleServantData_o *)v22[4],
                                     this->fields.data,
                                     targetSvtData,
                                     0);
      if ( !IsExistUsedTdInfo )
        goto LABEL_46;
      v24 = *(_QWORD *)(IsExistUsedTdInfo + 24);
      v25 = IsExistUsedTdInfo;
      if ( (int)v24 >= 1 )
        break;
LABEL_34:
      FieldAliveServantArray = v45;
      max_length = v45->max_length;
      v21 = v47 + 1;
      if ( (int)(v47 + 1) >= max_length )
        goto LABEL_35;
    }
    v26 = 0;
    while ( v26 < (unsigned int)v24 )
    {
      IsExistUsedTdInfo = (__int64)BattleServantData__CreateFunctionSkillInfoData(
                                     v23,
                                     *(BattleBuffData_BuffData_o **)(v25 + 32 + 8 * v26),
                                     0);
      data = this->fields.data;
      if ( !data )
        goto LABEL_46;
      v28 = data->fields._UsedTdInfo_k__BackingField;
      if ( !v28 )
        goto LABEL_46;
      v29 = (BattleSkillInfoData_o *)IsExistUsedTdInfo;
      if ( !IsExistUsedTdInfo )
        goto LABEL_46;
      *(_QWORD *)(IsExistUsedTdInfo + 168) = *(_QWORD *)&v28->fields._NpValue_k__BackingField;
      logicskill = this->fields.logicskill;
      IsExistUsedTdInfo = sub_1D0F15C(int___TypeInfo, 1);
      if ( !IsExistUsedTdInfo )
        goto LABEL_46;
      v31 = (System_Int32_array *)IsExistUsedTdInfo;
      if ( !*(_DWORD *)(IsExistUsedTdInfo + 24) )
        break;
      *(_DWORD *)(IsExistUsedTdInfo + 32) = v29->fields.svtUniqueId;
      IsExistUsedTdInfo = sub_1D0F15C(int___TypeInfo, 1);
      v32 = this->fields.data;
      if ( !v32 )
        goto LABEL_46;
      v33 = v32->fields._UsedTdInfo_k__BackingField;
      if ( !v33 || !IsExistUsedTdInfo )
        goto LABEL_46;
      if ( !*(_DWORD *)(IsExistUsedTdInfo + 24) )
        break;
      *(_DWORD *)(IsExistUsedTdInfo + 32) = v33->fields._ActorId_k__BackingField;
      if ( !logicskill )
        goto LABEL_46;
      IsExistUsedTdInfo = (__int64)BattleLogicSkill__taskSkill(
                                     logicskill,
                                     v29,
                                     v31,
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
        (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      LODWORD(v24) = *(_DWORD *)(v25 + 24);
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_34;
    }
LABEL_47:
    sub_1D0F314(IsExistUsedTdInfo);
  }
LABEL_35:
  BattleData__ResetUsedTdInfo(v44, 0);
  IsExistUsedTdInfo = (__int64)BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    IsExistUsedTdInfo = (__int64)BattleLogicNomal___c_TypeInfo;
  }
  v34 = *(System_Action_object__o **)(*(_QWORD *)(IsExistUsedTdInfo + 184) + 112LL);
  if ( !v34 )
  {
    if ( !*(_DWORD *)(IsExistUsedTdInfo + 224) )
    {
      j_il2cpp_runtime_class_init_0(IsExistUsedTdInfo);
      IsExistUsedTdInfo = (__int64)BattleLogicNomal___c_TypeInfo;
    }
    v35 = **(Il2CppObject ***)(IsExistUsedTdInfo + 184);
    v34 = (System_Action_object__o *)sub_1D0F300(System_Action_BattleLogicTask__TypeInfo);
    System_Action_object____ctor(v34, v35, Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__61_1__, 0);
    v36 = BattleLogicNomal___c_TypeInfo->static_fields;
    v36->__9__61_1 = (struct System_Action_BattleLogicTask__o *)v34;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v36->__9__61_1, (int32_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v5 )
    goto LABEL_46;
  System_Collections_Generic_List_object___ForEach(
    v5,
    (System_Action_T__o *)v34,
    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNomal__CreateTaskAttackPhaseStart(
        BattleLogicNomal_o *this,
        int32_t logicType,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  long double inited; // q0
  BattleLogicNomal_o *v7; // x21
  BattleServantData_array *FieldPlayerServantList; // x0
  BattleServantData_array *v9; // x23
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v11; // x19
  Il2CppClass *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  BattleServantData_o *v31; // x0
  BattleServantData_o *v32; // x23
  _QWORD *AttackPhaseStartFunctionBuffList; // x0
  __int64 v34; // x1
  _QWORD *v35; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x27
  BattleBuffData_BuffData_o *v38; // x25
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  BattleLogicSkill_o *logicskill; // x26
  BattleSkillInfoData_o *v41; // x25
  __int64 v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  v7 = this;
  if ( (byte_4E7AA12 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicNomal_o *)sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E7AA12 = 1;
  }
  if ( logicType == 77 )
  {
    if ( !battleData )
      goto LABEL_73;
    FieldPlayerServantList = BattleData__getFieldPlayerServantList(battleData, 0);
    goto LABEL_9;
  }
  if ( logicType == 78 )
  {
    if ( !battleData )
      goto LABEL_73;
    FieldPlayerServantList = BattleData__getFieldEnemyServantList(battleData, 0, 0);
LABEL_9:
    v9 = FieldPlayerServantList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v11 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    if ( logicType == 77 )
    {
      this = (BattleLogicNomal_o *)v7->fields.logic;
      if ( !this )
        goto LABEL_73;
      this = (BattleLogicNomal_o *)BattleLogic__GetPlayerAttackPreselectTargetTaskArray((BattleLogic_o *)this, 0);
      if ( !v11 )
        goto LABEL_73;
      System_Collections_Generic_List_object___AddRange(
        v11,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    }
    if ( v9 )
    {
      klass = v9->obj.klass;
      v13 = *(unsigned __int16 *)&v9->obj.klass->_2.rank;
      if ( *(_WORD *)&v9->obj.klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v13;
          p_offset += 4;
          if ( !v13 )
            goto LABEL_20;
        }
        v15 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_20:
        v15 = sub_1CE5430(v9, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(BattleServantData_array *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
      if ( !v22 )
        sub_1D0F30C(0, v21);
      while ( 1 )
      {
        v23 = *(_QWORD *)v22;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 4;
            if ( !v24 )
              goto LABEL_36;
          }
          v26 = v23 + 16LL * *v25 + 312;
        }
        else
        {
LABEL_36:
          v26 = sub_1CE5430(v22, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
          break;
        v27 = *(_QWORD *)v22;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v28;
            v29 += 4;
            if ( !v28 )
              goto LABEL_43;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_43:
          v30 = sub_1CE5430(v22, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v31 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
        v32 = v31;
        if ( v31 && BattleServantData__isAliveLogic(v31, 1, 0) )
        {
          AttackPhaseStartFunctionBuffList = BattleServantData__GetAttackPhaseStartFunctionBuffList(v32, 0);
          v35 = AttackPhaseStartFunctionBuffList;
          if ( !AttackPhaseStartFunctionBuffList )
            sub_1D0F30C(0, v34);
          v36 = AttackPhaseStartFunctionBuffList[3];
          if ( (int)v36 >= 1 )
          {
            v37 = 0;
            do
            {
              if ( v37 >= (unsigned int)v36 )
                sub_1D0F314(AttackPhaseStartFunctionBuffList);
              v38 = (BattleBuffData_BuffData_o *)v35[v37 + 4];
              AttackPhaseStartFunctionBuffList = BattleServantData__getSkillFromBuff(
                                                   (SkillLvMaster_o *)Master_object,
                                                   v38,
                                                   0);
              if ( AttackPhaseStartFunctionBuffList )
              {
                FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(v32, v38, 0);
                logicskill = v7->fields.logicskill;
                v41 = FunctionSkillInfoData;
                v42 = sub_1D0F15C(int___TypeInfo, 1);
                if ( !v42 )
                  sub_1D0F30C(0, v43);
                if ( !*(_DWORD *)(v42 + 24) )
                  sub_1D0F314(v42);
                *(_DWORD *)(v42 + 32) = v32->fields.uniqueId;
                if ( !logicskill )
                  sub_1D0F30C(v42, v43);
                v44 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                       logicskill,
                                                                       v41,
                                                                       (System_Int32_array *)v42,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0);
                if ( !v11 )
                  sub_1D0F30C(v44, v44);
                System_Collections_Generic_List_object___AddRange(
                  v11,
                  v44,
                  (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              }
              LODWORD(v36) = *((_DWORD *)v35 + 6);
              ++v37;
            }
            while ( (__int64)v37 < (int)v36 );
          }
        }
      }
      v45 = *(_QWORD *)v22;
      v46 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_63;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_63:
        v48 = sub_1CE5430(v22, System_IDisposable_TypeInfo, 0);
      }
      this = (BattleLogicNomal_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v22, *(_QWORD *)(v48 + 8));
      if ( v11 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_73:
    sub_1D0F30C(this, *(_QWORD *)&logicType);
  }
  v16 = Method_System_Array_Empty_BattleLogicTask___;
  v17 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v17 )
  {
    sub_1CE5198(Method_System_Array_Empty_BattleLogicTask___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1CE513C(inited);
  return **(BattleLogicTask_array ***)(v19 + 184);
}


BattleActionData_o *BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  BattleServantData_o *v5; // x19
  __int64 v6; // x22
  int v7; // w22
  __int64 v8; // x21
  BattleActorControl_o *PartsActor; // x23
  BattleActorControl_o *v10; // x22
  int32_t uniqueID; // w1
  __int64 *v12; // x8
  BattleActorControl_o *v13; // x22
  int32_t v14; // w8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4E7AA20 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6504/*"FOCUS_UNDER"*/);
    sub_1D0F0B4(&StringLiteral_6502/*"FOCUS_CENTER"*/);
    sub_1D0F0B4(&StringLiteral_6506/*"FOCUS_UP"*/);
    byte_4E7AA20 = 1;
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
    v8 = StringLiteral_6502/*"FOCUS_CENTER"*/;
    PartsActor = BattleData__GetPartsActor(this->fields.data, 1, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v8 = StringLiteral_6502/*"FOCUS_CENTER"*/;
        BattleData__SetTargetId(data, PartsActor->fields.uniqueID, 0);
      }
    }
    if ( v7 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v13 = BattleData__GetPartsActor(data, 2, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v13 )
        goto LABEL_42;
      data = (BattleData_o *)v13->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      if ( !BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      uniqueID = v13->fields.uniqueID;
      v12 = &StringLiteral_6504/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v7 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v10 = BattleData__GetPartsActor(data, 0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v10 )
        goto LABEL_42;
      data = (BattleData_o *)v10->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      if ( !BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      uniqueID = v10->fields.uniqueID;
      v12 = &StringLiteral_6506/*"FOCUS_UP"*/;
    }
    v8 = *v12;
    BattleData__SetTargetId(data, uniqueID, 0);
LABEL_39:
    v6 = sub_1D0F300(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0);
    if ( v6 )
    {
      v14 = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = v14;
      *(_DWORD *)(v6 + 36) = v14;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0);
      *(_QWORD *)(v6 + 72) = v8;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v6 + 72), v8, v15, v16, v17, v18, v19, v20);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_1D0F30C(data, method);
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
  long double inited; // q0
  BattleLogicNomal_o *v5; // x19
  struct BattleLogic_o *logic; // x8
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  v5 = this;
  if ( (byte_4E7AA14 & 1) == 0 )
  {
    this = (BattleLogicNomal_o *)sub_1D0F0B4(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4E7AA14 = 1;
  }
  logic = v5->fields.logic;
  if ( !logic )
    sub_1D0F30C(this, *(_QWORD *)&logicType);
  logic->fields.isCheckInterruptMotionTask = 1;
  v7 = Method_System_Array_Empty_BattleLogicTask___;
  v8 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v8 )
  {
    sub_1CE5198(Method_System_Array_Empty_BattleLogicTask___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1CE513C(inited);
  return **(BattleLogicTask_array ***)(v10 + 184);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E7AA16 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_4E7AA16 = 1;
  }
  v3 = sub_1D0F300(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26___ctor(
    (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *)v3,
    -2,
    0);
  if ( !v3 )
    sub_1D0F30C(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  BattleLogicNomal___c_c *v13; // x0
  System_Comparison_T__o *_9__28_0; // x20
  Il2CppObject *v15; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E7AA18 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__);
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    byte_4E7AA18 = 1;
  }
  value = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_35C9F14 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0), !v10) )
  {
LABEL_16:
    sub_1D0F30C(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v13 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v13 = BattleLogicNomal___c_TypeInfo;
  }
  _9__28_0 = (System_Comparison_T__o *)v13->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleLogicNomal___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__28_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__28_0,
      v15,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__,
      0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__28_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0,
      (int32_t)_9__28_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  System_Collections_Generic_List_object___Sort_60153556(
    v10,
    _9__28_0,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
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
    sub_1D0F30C(this, method);
  BattleFieldEnvironmentData__TurnBuffProgressingIncrease((BattleFieldEnvironmentData_o *)this, 0);
}


bool BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(0, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(0, method);
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
  bool v9; // w20
  int v10; // w9
  BattleCommandData_o *v11; // x0
  BattleCommandData_o *v12; // x21

  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  SelectCommand = BattleData__getSelectCommand(data, this->fields.commandIndex, 0);
  if ( !SelectCommand )
    return 0;
  v7 = SelectCommand;
  if ( BattleCommandData__isTreasureDvc(SelectCommand, 0) || BattleCommandData__IsAllAttack(v7, 0) )
    return 0;
  data = this->fields.data;
  if ( !data )
LABEL_15:
    sub_1D0F30C(data, isCheckNext);
  commandIndex = this->fields.commandIndex;
  v9 = 1;
  if ( isCheckNext )
    v10 = 1;
  else
    v10 = -1;
  v11 = BattleData__getSelectCommand(data, commandIndex + v10, 0);
  if ( v11 )
  {
    v12 = v11;
    if ( !BattleCommandData__isTreasureDvc(v11, 0) && !BattleCommandData__IsAllAttack(v12, 0) )
      return v7->fields.uniqueId == v12->fields.uniqueId;
    return 0;
  }
  return v9;
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
  int32_t BuffType; // w19

  v2 = buff;
  if ( (byte_4E7AA21 & 1) == 0 )
  {
    buff = (BattleBuffData_BuffData_o *)sub_1D0F0B4(&BuffList_TypeInfo);
    byte_4E7AA21 = 1;
  }
  if ( !v2 )
    sub_1D0F30C(buff, method);
  BuffType = BattleBuffData_BuffData__get_BuffType(v2, 0);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return BuffList__CheckUpdateHp(BuffType, 0);
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
  BattleActorControl_o *PartsActor; // x20

  if ( (byte_4E7AA23 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AA23 = 1;
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            sub_1D0F30C(data, method);
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
  long double inited; // q0
  struct BattleLogic_o *logic; // x8
  struct BattleLogic_o *v10; // x8
  BattleLogicReaction_o *logicReaction; // x19
  PlayerComboEndServantReactTaskCreator_o *v12; // x20
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4E7AA13 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1D0F0B4(&PlayerComboEndServantReactTaskCreator_TypeInfo);
    byte_4E7AA13 = 1;
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
          v12 = (PlayerComboEndServantReactTaskCreator_o *)sub_1D0F300(PlayerComboEndServantReactTaskCreator_TypeInfo);
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
      sub_1D0F30C(IsComboEnd, v7);
    }
  }
  v14 = Method_System_Array_Empty_BattleLogicTask___;
  v15 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v15 )
  {
    sub_1CE5198(Method_System_Array_Empty_BattleLogicTask___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1CE513C(inited);
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
    sub_1D0F30C(this, targetSvtData);
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
  System_Collections_Generic_IEnumerable_TSource__o *QuestIndividualities; // x21
  long double inited; // q0
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  struct BattleData_o *v16; // x8

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_4E7AA24 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4E7AA24 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0);
  if ( !QuestIndividualities )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1CE5198(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1CE513C(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !v3 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1CE5198(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1CE513C(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_3289670 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
      v16 = this->fields.data;
      if ( v16 )
      {
        data = (BattleData_o *)v16->fields.perf;
        if ( data )
        {
          BattlePerformance__updateStatus((BattlePerformance_o *)data, 0);
          return;
        }
      }
    }
LABEL_29:
    sub_1D0F30C(data, prevFieldIndiv);
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v40; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4E7AA28 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask___TypeInfo);
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&BattleSkillInfoData_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7AA28 = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
              v17 = (BattleSkillInfoData_o *)sub_1D0F300(BattleSkillInfoData_TypeInfo);
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
              if ( *(_DWORD *)(v19 + 24) <= 1u )
                break;
              v17->fields.skilllv = *(_DWORD *)(v19 + 36);
              v20 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v20, 0);
              if ( !v20 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v20, v17, 0, 0);
              logic = this->fields.logic;
              Instance = sub_1D0F15C(BattleLogicTask___TypeInfo, 1);
              if ( !Instance )
                goto LABEL_44;
              v22 = Instance;
              Instance = sub_1D0F1F0(v20, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v40 = sub_1D0F330(0);
                sub_1D0F1DC(v40, 0);
              }
              if ( !*(_DWORD *)(v22 + 24) )
                break;
              *(_QWORD *)(v22 + 32) = v20;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v22 + 32), (int32_t)v20, v23, v24, v25, v26, v27, v28);
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
              v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v20,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v38[4] = (Il2CppClass *)v20;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v20, v29, v30, v31, v32, v33, v34);
              }
              v13 = *(_DWORD *)(v14 + 24);
              if ( (int)++v15 >= v13 )
                goto LABEL_38;
            }
LABEL_45:
            sub_1D0F314(Instance);
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
    sub_1D0F30C(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  struct System_Int32_array *vals; // x8
  int max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v26; // x1
  SkillLvEntity_o *v27; // x29
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x26
  BattleActionData_o *v31; // x28
  DataVals_array *DataValsList; // x0
  __int64 v33; // x1
  BattleLogicFunction_o *v34; // x0
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v37; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+60h] [xbp-80h] BYREF

  v37 = this;
  if ( (byte_4E7AA2D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4E7AA2D = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !commandCodeBuffList )
    sub_1D0F30C(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v39.fields._current = v38.fields._current;
  if ( isCommandAfter )
    v15 = 1;
  else
    v15 = 3;
  *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields._list;
  type = v15;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_1D0F30C(v16, v17);
    current = (BattleBuffData_BuffData_o *)v39.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1D0F30C(IsEnableCommandCode, v20);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1D0F30C(IsEnableCommandCode, v20);
    v21 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, const MethodInfo *))checkInvokeBuff->klass->vtable._4_IsInvoke.methodPtr)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass->vtable._4_IsInvoke.method);
    if ( (v21 & 1) != 0 )
    {
      if ( arg == 0 || !isCommandAfter )
      {
        if ( !current )
          sub_1D0F30C(v21, v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_1D0F30C(v21, v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1D0F314(v21);
        if ( max_length == 1 )
          sub_1D0F314(v21);
        if ( !skillLvMst )
          sub_1D0F30C(v21, v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[0], vals->m_Items[1], 0);
        v27 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1D0F30C(Entity, v26);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_1D0F30C(Entity, v26);
          logicfunction = v37->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0);
          funcId = v27->fields.funcId;
          v31 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v27, 0);
          if ( !logicfunction )
            sub_1D0F30C(DataValsList, v33);
          BattleLogicFunction__procList(
            logicfunction,
            v31,
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
      else
      {
        v34 = v37->fields.logicfunction;
        if ( !v34 )
          sub_1D0F30C(0, v22);
        BattleLogicFunction__SetSideEffectBuff(
          v34,
          skillLvMst,
          actionData,
          current,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
          1,
          0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleActionData_o *BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleData_o *data; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1
  BattleServantData_o *ServantData; // x0

  if ( (byte_4E7AA1A & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8845/*"MOTION_BACK"*/);
    byte_4E7AA1A = 1;
  }
  v5 = sub_1D0F300(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 32) = uniqueId,
        v14 = StringLiteral_8845/*"MOTION_BACK"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_8845/*"MOTION_BACK"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 72), v14, v8, v9, v10, v11, v12, v13),
        (data = this->fields.data) == 0) )
  {
    sub_1D0F30C(data, v7);
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
            sub_1D0F314(data);
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
    sub_1D0F30C(data, task);
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
  BattleData_o *data; // x0
  struct BattleData_o *v5; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x10
  BattleData_o *v7; // x20
  _BOOL4 v8; // w9
  unsigned __int64 v9; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  int32_t v11; // w21
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *items; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1

  if ( (byte_4E7AA27 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__);
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    byte_4E7AA27 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
  if ( !data )
    goto LABEL_33;
  v5 = this->fields.data;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v7 = data;
  v8 = v5 == 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    p_rootfsm = &data->fields.rootfsm;
    while ( !v8 )
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_34;
      data = (BattleData_o *)v5->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))&data->klass[2]._1.this_arg.bits)(
                               data,
                               p_rootfsm[v9],
                               data->klass[2]._1.element_class);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_34;
        data = (BattleData_o *)p_rootfsm[v9];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0);
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_34;
        v11 = (int)data;
        data = (BattleData_o *)p_rootfsm[v9];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0);
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_34;
        data = (BattleData_o *)p_rootfsm[v9];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v11, 1, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_34:
            sub_1D0F314(data);
          data = (BattleData_o *)p_rootfsm[v9];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0, 0);
        }
      }
      v5 = this->fields.data;
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      ++v9;
      v8 = v5 == 0;
      if ( (__int64)v9 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_33:
    sub_1D0F30C(data, task);
  }
LABEL_22:
  if ( v8 )
    goto LABEL_33;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v5->fields.aiNpcDataList;
  data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
  }
  items = (System_Action_object__o *)data->fields.enemy_datalist[2].fields._items;
  if ( !items )
  {
    if ( !data->fields.limitAct )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
    }
    klass = (Il2CppObject *)data->fields.enemy_datalist->klass;
    items = (System_Action_object__o *)sub_1D0F300(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(items, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__, 0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_AiNpcBattleServantData__o *)items;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__49_0, (int32_t)items, v16, v17, v18, v19, v20, v21);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)items,
    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  BattleLogicNomal__IncreaseFieldBuffParamOnTurnProgress(this, v22);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_33;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
  data = (BattleData_o *)this->fields.logic;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int v16; // w8
  GrandQuestFolderBoardItem_o *v17; // x0
  System_Array_o *v18; // x22
  System_RuntimeFieldHandle_o v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 *v26; // x8
  __int64 v27; // x1
  il2cpp_array_size_t max_length; // x8
  char v29; // w21
  unsigned __int64 v30; // x22
  System_Array_o *v32; // x22
  System_RuntimeFieldHandle_o v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4E7AA1B & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&FunctionEntity_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_1D0F0B4(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_1D0F0B4(&StringLiteral_6488/*"FIELD_PLAYER"*/);
    sub_1D0F0B4(&StringLiteral_6487/*"FIELD_ENEMY"*/);
    byte_4E7AA1B = 1;
  }
  v5 = sub_1D0F300(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_1D0F300(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0);
  if ( BattleLogicTask__isArts(task, 0) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0);
    isBuster = sub_1D0F15C(int___TypeInfo, 2);
    if ( isBuster )
    {
      v16 = *(_DWORD *)(isBuster + 24);
      v7 = isBuster;
      if ( !v16 || (*(_DWORD *)(isBuster + 32) = 102, v16 == 1) )
LABEL_30:
        sub_1D0F314(isBuster);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBuster;
        v17 = (GrandQuestFolderBoardItem_o *)(v9 + 32);
LABEL_14:
        sub_1D0F058(v17, v7, v10, v11, v12, v13, v14, v15);
        v26 = &StringLiteral_6488/*"FIELD_PLAYER"*/;
LABEL_15:
        v27 = *v26;
        *(_QWORD *)(v5 + 72) = *v26;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 72), v27, v20, v21, v22, v23, v24, v25);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1D0F30C(isBuster, v7);
  }
  if ( BattleLogicTask__isQuick(task, 0) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0);
    v18 = (System_Array_o *)sub_1D0F15C(int___TypeInfo, 3);
    v19.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_66261996(v18, v19, 0);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(v9 + 32) = v18;
    v17 = (GrandQuestFolderBoardItem_o *)(v9 + 32);
    LODWORD(v7) = (_DWORD)v18;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v5, 0);
    v32 = (System_Array_o *)sub_1D0F15C(int___TypeInfo, 3);
    v33.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_66261996(v32, v33, 0);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v32;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v32, v34, v35, v36, v37, v38, v39);
      v26 = &StringLiteral_6487/*"FIELD_ENEMY"*/;
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

  baseActionData = 0;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_1D0F30C(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0);
}


BattleActionData_o *BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x25
  __int64 Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  BattleData_o *data; // x8
  BattleLogicNomal_Fields *p_fields; // x23
  System_Int32_array *QuestIndividualities; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x21
  int v31; // w8
  __int64 v32; // x28
  unsigned int v33; // w20
  __int64 v34; // x19
  __int64 *v35; // x19
  __int64 v36; // t1
  BattleBuffData_BuffData_array *v37; // x29
  unsigned int v38; // w8
  struct System_Int32_array *items; // x9
  _QWORD *v40; // x10
  __int64 size; // x11
  BattleData_o *v42; // x19
  struct BattleData_o *v43; // x8
  __int64 v44; // x28
  unsigned int v45; // w24
  System_Collections_Generic_List_object__o *v46; // x29
  __int64 v47; // x27
  BattleServantData_o *v48; // x19
  __int64 *v49; // x27
  BattleServantData_o *v50; // t1
  char v51; // w20
  System_Int32_array *v52; // x21
  BattleLogic_o *logic; // x25
  System_Func_object__bool__o *v54; // x26
  int v55; // w19
  bool v56; // w3
  char v57; // w21
  Il2CppObject *v58; // x2
  BattleServantData_o *v59; // x19
  char v60; // w20
  System_Int32_array *v61; // x21
  BattleLogic_o *v62; // x25
  System_Func_object__bool__o *v63; // x26
  int32_t v64; // w19
  System_Object_array *v65; // x2
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  struct BaseBattleEvent_o *battleEvent; // x19
  struct BattleData_o *v70; // x8
  struct BattlePerformance_o *perf; // x9
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *v73; // x20
  const MethodInfo *v74; // x2
  struct BattleData_o *v75; // x8
  Il2CppObject *Entity; // x0
  __int64 v77; // x1
  Il2CppObject *value; // x24
  int32_t key; // w25
  int monitor; // w9
  int32_t v81; // w8
  char v82; // w29
  BattleBuffData_BuffData_o *v83; // x28
  BattleSkillInfoData_o *v84; // x26
  __int64 v85; // x0
  __int64 v86; // x1
  struct System_Int32_array *vals; // x8
  __int64 v88; // x0
  __int64 v89; // x1
  struct System_Int32_array *v90; // x8
  BattleServantData_o *ServantData; // x27
  __int64 v92; // x1
  SkillLvEntity_o *v93; // x0
  __int64 v94; // x1
  SkillLvEntity_o *v95; // x20
  _BOOL8 v96; // x0
  __int64 v97; // x1
  BattleLogic_o *v98; // x0
  int32_t v99; // w19
  __int64 v100; // x0
  __int64 v101; // x1
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x20
  __int64 v105; // x0
  __int64 v106; // x1
  System_Collections_ICollection_o *v107; // x0
  __int64 v108; // x1
  System_Collections_ICollection_o *v109; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v112; // x0
  __int64 v113; // x1
  int32_t v114; // w26
  Il2CppObject *v115; // x25
  BuffEntity_o *v116; // x0
  __int64 v117; // x1
  BattleServantData_o *v118; // x24
  BattleBuffData_CheckIndividualitiesData_o *v119; // x19
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x27
  int v121; // w8
  int32_t v122; // w9
  BattleBuffData_BuffData_o *v123; // x28
  __int64 v124; // x1
  BattleSkillInfoData_o *v125; // x29
  __int64 v126; // x0
  __int64 v127; // x1
  struct System_Int32_array *v128; // x8
  __int64 v129; // x0
  __int64 v130; // x1
  struct System_Int32_array *v131; // x8
  BattleServantData_o *v132; // x21
  __int64 v133; // x1
  SkillLvEntity_o *v134; // x0
  __int64 v135; // x1
  SkillLvEntity_o *v136; // x20
  _BOOL8 v137; // x0
  __int64 v138; // x1
  BattleLogic_o *v139; // x0
  int32_t v140; // w19
  __int64 v141; // x0
  __int64 v142; // x1
  System_Int32_array *v143; // x21
  bool v144; // w20
  BattleLogicSkill_o *v145; // x19
  __int64 v146; // x0
  __int64 v147; // x1
  BattleLogicTask_array *v148; // x1
  BattleLogic_o *v149; // x0
  BattleLogicNomal___c_c *v150; // x8
  System_Func_object__bool__o *_9__46_1; // x20
  Il2CppObject *v152; // x19
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  const MethodInfo *v160; // x2
  BattleActionData_o *v161; // x1
  System_Collections_Generic_Dictionary_int__object__o *v163; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__object__o *v164; // [xsp+28h] [xbp-F8h]
  BattleActionData_o *v165; // [xsp+30h] [xbp-F0h]
  System_Int32_array **v166; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_List_int__o *v167; // [xsp+40h] [xbp-E0h]
  char v168; // [xsp+4Ch] [xbp-D4h]
  __int64 v169; // [xsp+50h] [xbp-D0h]
  SkillLvMaster_o *v170; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v172; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v173; // [xsp+90h] [xbp-90h] BYREF
  int32_t targetIndex; // [xsp+BCh] [xbp-64h] BYREF

  if ( (byte_4E7AA25 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1D0F0B4(&Method_BasicHelper_Any_BattleBuffData_BuffData____80373112);
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1D0F0B4(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1D0F0B4(&BattleSkillInfoData_TypeInfo);
    sub_1D0F0B4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1D0F0B4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__createEndTurnEnemy_b__46_1__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__);
    sub_1D0F0B4(&BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8857/*"MOTION_ENEMY_TURN_END"*/);
    byte_4E7AA25 = 1;
  }
  targetIndex = 0;
  memset(&v173, 0, sizeof(v173));
  v3 = sub_1D0F300(BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass46_0___ctor((BattleLogicNomal___c__DisplayClass46_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_244;
  *(_QWORD *)(v3 + 32) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = sub_1D0F300(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v12, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v3 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_244;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_244;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !v12 )
    goto LABEL_244;
  BattleActionData__setStateField((BattleActionData_o *)v12, 0);
  v14 = StringLiteral_8857/*"MOTION_ENEMY_TURN_END"*/;
  v165 = (BattleActionData_o *)v12;
  *(_QWORD *)(v12 + 72) = StringLiteral_8857/*"MOTION_ENEMY_TURN_END"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 72), v14, v15, v16, v17, v18, v19, v20);
  v164 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v164,
    (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v163 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v163,
    (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  p_fields = &this->fields;
  data = this->fields.data;
  v170 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_244;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v3 + 24) = QuestIndividualities;
  v166 = (System_Int32_array **)(v3 + 24);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)QuestIndividualities, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_244;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_244;
  v31 = *(_DWORD *)(Instance + 24);
  v32 = Instance;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( v33 < v31 )
    {
      v34 = v32 + 8LL * (int)v33;
      v36 = *(_QWORD *)(v34 + 32);
      v35 = (__int64 *)(v34 + 32);
      Instance = v36;
      if ( !v36 )
        goto LABEL_244;
      if ( *(_BYTE *)(Instance + 572) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v3 + 16),
                              *(System_Int32_array **)(v3 + 24),
                              this->fields.logic,
                              0,
                              0);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          break;
        v37 = (BattleBuffData_BuffData_array *)Instance;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_244;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            break;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_244;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_244;
            if ( v37->max_length )
            {
              if ( v33 >= *(_DWORD *)(v32 + 24) )
                break;
              Instance = (__int64)v164;
              if ( !*v35 || !v164 )
                goto LABEL_244;
              System_Collections_Generic_Dictionary_int__object___Add(
                v164,
                *(_DWORD *)(*v35 + 24),
                &v37->obj,
                (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v38 = *(_DWORD *)(v32 + 24);
        if ( v33 >= v38 )
          break;
        if ( !*v35 )
          goto LABEL_244;
        if ( !v30 )
          goto LABEL_244;
        v5 = *(unsigned int *)(*v35 + 24);
        items = v30->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_244;
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v30,
            v5,
            *(const MethodInfo_393F3EC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          v38 = *(_DWORD *)(v32 + 24);
        }
        else
        {
          v30->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
        if ( v33 >= v38 )
          break;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_244;
        v42 = p_fields->data;
        Instance = (__int64)BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        if ( !v42 )
          goto LABEL_244;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v42, (BattleBuffData_o *)Instance, v37, 0);
      }
      v31 = *(_DWORD *)(v32 + 24);
      if ( (int)++v33 >= v31 )
        goto LABEL_41;
    }
LABEL_247:
    sub_1D0F314(Instance);
  }
LABEL_41:
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_244;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v43 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_244;
  v44 = Instance;
  if ( v43->fields.leaderDown && v43->fields.endbattleFlg )
  {
    v168 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_244;
    v167 = v30;
    if ( *(int *)(Instance + 24) >= 1 )
    {
      v45 = 0;
      v168 = 0;
      v169 = v3;
      while ( 1 )
      {
        v46 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v46,
          (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
        if ( v45 >= *(_DWORD *)(v44 + 24) )
          goto LABEL_247;
        v47 = v44 + 8LL * (int)v45;
        v50 = *(BattleServantData_o **)(v47 + 32);
        v49 = (__int64 *)(v47 + 32);
        v48 = v50;
        if ( !v50 )
          goto LABEL_244;
        if ( v48->fields.isBuffProgressFlg )
        {
          v51 = *(_BYTE *)(v3 + 16);
          v52 = *(System_Int32_array **)(v3 + 24);
          logic = this->fields.logic;
          v54 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v54, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v48,
                                v51,
                                v52,
                                logic,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v54,
                                0);
          if ( !v46 )
            goto LABEL_244;
          System_Collections_Generic_List_object___AddRange(
            v46,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_247;
          Instance = *v49;
          v3 = v169;
          if ( !*v49 )
            goto LABEL_244;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 464LL));
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_247;
          v55 = Instance;
          Instance = *v49;
          if ( !*v49 )
            goto LABEL_244;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 528LL));
          if ( v55 != (_DWORD)Instance )
          {
            if ( v45 >= *(_DWORD *)(v44 + 24) )
              goto LABEL_247;
            Instance = *v49;
            if ( !*v49 )
              goto LABEL_244;
            BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
          }
        }
        if ( v45 >= *(_DWORD *)(v44 + 24) )
          goto LABEL_247;
        Instance = *v49;
        if ( !*v49 )
          goto LABEL_244;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_244;
          Instance = BattleData__checkAlivePlayers((BattleData_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_68;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_244;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_68;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_244;
          if ( !BattleData__IsWaveSetupAsOneParty((BattleData_o *)Instance, 0) )
            goto LABEL_114;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_244;
          Instance = BattleData__IsChangeNextPartyForWaveMyDecks((BattleData_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
LABEL_68:
            v56 = 1;
          }
          else
          {
LABEL_114:
            Instance = (__int64)p_fields->data;
            if ( !p_fields->data )
              goto LABEL_244;
            Instance = BattleData__IsWaveSetupSwitchParty((BattleData_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)p_fields->data;
              if ( !p_fields->data )
                goto LABEL_244;
              Instance = BattleData__TrySearchNextAlivePartyIndex((BattleData_o *)Instance, &targetIndex, 0);
              v56 = Instance & 1;
            }
            else
            {
              v56 = 0;
            }
          }
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_247;
          Instance = *v49;
          if ( !*v49 )
            goto LABEL_244;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *v166,
                       this->fields.logic,
                       v56,
                       v165,
                       0);
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_247;
          v57 = Instance;
          Instance = *v49;
          if ( !*v49 )
            goto LABEL_244;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v45 >= *(_DWORD *)(v44 + 24) )
              goto LABEL_247;
            Instance = *v49;
            if ( !*v49 )
              goto LABEL_244;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_244;
            v58 = (Il2CppObject *)Instance;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v45 >= *(_DWORD *)(v44 + 24) )
                goto LABEL_247;
              Instance = (__int64)v163;
              if ( !*v49 || !v163 )
                goto LABEL_244;
              System_Collections_Generic_Dictionary_int__object___Add(
                v163,
                *(_DWORD *)(*v49 + 24),
                v58,
                (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_247;
          if ( !*v49 )
            goto LABEL_244;
          Instance = *(_QWORD *)(*v49 + 848);
          if ( !Instance )
            goto LABEL_244;
          v168 |= v57;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 1, 1, 0);
        }
        if ( v45 >= *(_DWORD *)(v44 + 24) )
          goto LABEL_247;
        v59 = (BattleServantData_o *)*v49;
        if ( !*v49 )
          goto LABEL_244;
        if ( v59->fields.isBuffProgressFlg )
        {
          v60 = *(_BYTE *)(v3 + 16);
          v61 = *(System_Int32_array **)(v3 + 24);
          v62 = this->fields.logic;
          v63 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v63, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v59,
                                v60,
                                v61,
                                v62,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v63,
                                0);
          if ( !v46 )
            goto LABEL_244;
          System_Collections_Generic_List_object___AddRange(
            v46,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_247;
          Instance = *v49;
          v3 = v169;
          if ( !*v49 )
            goto LABEL_244;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v45 >= *(_DWORD *)(v44 + 24) )
              goto LABEL_247;
            Instance = *v49;
            if ( !*v49 )
              goto LABEL_244;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v46, 0);
              if ( (Instance & 1) == 0 )
              {
                if ( v45 >= *(_DWORD *)(v44 + 24) )
                  goto LABEL_247;
                if ( !*v49 )
                  goto LABEL_244;
                v64 = *(_DWORD *)(*v49 + 24);
                v65 = System_Collections_Generic_List_object___ToArray(
                        v46,
                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                Instance = (__int64)v164;
                if ( !v164 )
                  goto LABEL_244;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v164,
                  v64,
                  &v65->obj,
                  (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v45 >= *(_DWORD *)(v44 + 24) )
            goto LABEL_247;
          if ( !*v49 )
            goto LABEL_244;
          Instance = (__int64)v167;
          if ( !v167 )
            goto LABEL_244;
          v5 = *(unsigned int *)(*v49 + 24);
          v66 = v167->fields._items;
          v67 = Method_System_Collections_Generic_List_int__Add__;
          ++v167->fields._version;
          if ( !v66 )
            goto LABEL_244;
          v68 = v167->fields._size;
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v167,
              v5,
              *(const MethodInfo_393F3EC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v167->fields._size = v68 + 1;
            v66->m_Items[v68] = v5;
          }
        }
        if ( (signed int)++v45 >= *(_DWORD *)(v44 + 24) )
          goto LABEL_120;
      }
    }
    v168 = 0;
LABEL_120:
    v43 = p_fields->data;
    v30 = v167;
    if ( !p_fields->data )
      goto LABEL_244;
  }
  Instance = (__int64)v43->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_244;
  BattleFieldEnvironmentData__ProgressApplyBuffAfterServantUse((BattleFieldEnvironmentData_o *)Instance, 1, 0);
  if ( !p_fields->data )
    goto LABEL_244;
  if ( !v30 )
    goto LABEL_244;
  battleEvent = p_fields->data->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v30,
                        (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_244;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v3 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v70 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_244;
  perf = v70->fields.perf;
  if ( !perf )
    goto LABEL_244;
  Instance = (__int64)v70->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_244;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  if ( !p_fields->data )
    goto LABEL_244;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)p_fields->data->fields.aiNpcDataList;
  v73 = (System_Action_object__o *)sub_1D0F300(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v73,
    (Il2CppObject *)v3,
    Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_244;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v73,
    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  if ( !p_fields->data )
    goto LABEL_244;
  Instance = (__int64)p_fields->data->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_244;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v3 + 16),
    0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_244;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)Instance, 0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *v166, v74);
  v75 = this->fields.data;
  if ( !v75 )
    goto LABEL_244;
  Instance = (__int64)v163;
  v75->fields.currentTurn = 0;
  if ( !v163 )
    goto LABEL_244;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v172,
    v163,
    (const MethodInfo_35A8640 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v173 = v172;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v173,
                               (const MethodInfo_36F21C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v173.fields._current.fields.value;
    key = (int32_t)v173.fields._current.fields.key;
    targetIndex = 0;
    if ( !v173.fields._current.fields.value )
      sub_1D0F30C(Entity, v77);
    monitor = (int)v173.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      v81 = 0;
      v82 = 1;
LABEL_140:
      if ( v81 >= (unsigned int)monitor )
        sub_1D0F314(Entity);
      v83 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v81);
      if ( !v83 )
        sub_1D0F30C(Entity, v77);
      if ( v83->fields._isRemove )
        goto LABEL_176;
      if ( !v13 )
        sub_1D0F30C(Entity, v77);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v13,
                 v83->fields.buffId,
                 (const MethodInfo_3535B7C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_176;
      v84 = (BattleSkillInfoData_o *)sub_1D0F300(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v84, 0);
      if ( !v84 )
        sub_1D0F30C(v85, v86);
      v84->fields.svtUniqueId = key;
      vals = v83->fields.vals;
      if ( !vals )
        sub_1D0F30C(v85, v86);
      if ( !LODWORD(vals->max_length) )
        sub_1D0F314(v85);
      v88 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v84->klass->vtable._4_set_skillId.methodPtr)(
              v84,
              (unsigned int)vals->m_Items[0],
              v84->klass->vtable._4_set_skillId.method);
      v90 = v83->fields.vals;
      if ( !v90 )
        sub_1D0F30C(v88, v89);
      if ( LODWORD(v90->max_length) <= 1 )
        sub_1D0F314(v88);
      v84->fields.skilllv = v90->m_Items[1];
      if ( !p_fields->data )
        sub_1D0F30C(0, v89);
      ServantData = BattleData__getServantData(p_fields->data, v84->fields.svtUniqueId, 0);
      v92 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v84->klass->vtable._5_get_skillId.methodPtr)(
              v84,
              v84->klass->vtable._5_get_skillId.method);
      if ( !v170 )
        sub_1D0F30C(0, v92);
      v93 = SkillLvMaster__GetEntity(v170, v92, v84->fields.skilllv, 0);
      if ( !ServantData )
        sub_1D0F30C(v93, v94);
      v95 = v93;
      if ( !p_fields->data )
        sub_1D0F30C(0, v94);
      v96 = BattleData__checkAliveOther(p_fields->data, ServantData->fields.uniqueId, 0);
      if ( !v96 )
      {
        if ( !v95 )
          sub_1D0F30C(v96, v97);
        v98 = this->fields.logic;
        if ( !v98 )
          sub_1D0F30C(0, v97);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v98, v95->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_176;
      }
      v99 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v83, 0);
      if ( v99 < 0 )
      {
        TargetIds = Target__getTargetIds(p_fields->data, v84->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v84, 0);
      }
      else
      {
        v100 = sub_1D0F15C(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v100;
        if ( !v100 )
          sub_1D0F30C(0, v101);
        if ( !*(_DWORD *)(v100 + 24) )
          sub_1D0F314(v100);
        exists = 0;
        *(_DWORD *)(v100 + 32) = v99;
      }
      logicskill = this->fields.logicskill;
      v105 = sub_1D0F15C(int___TypeInfo, 1);
      if ( !v105 )
        sub_1D0F30C(0, v106);
      if ( !*(_DWORD *)(v105 + 24) )
        sub_1D0F314(v105);
      *(_DWORD *)(v105 + 32) = key;
      if ( !logicskill )
        sub_1D0F30C(v105, v106);
      v107 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v84,
                                                   (System_Int32_array *)v105,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0);
      v109 = v107;
      if ( (v82 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v107, 0);
        if ( IsNullOrEmpty )
        {
          v82 = 1;
          goto LABEL_174;
        }
        if ( !v109 )
          sub_1D0F30C(IsNullOrEmpty, v108);
        if ( !LODWORD(v109[1].monitor) )
          sub_1D0F314(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v109[2].klass;
        if ( !klass )
          sub_1D0F30C(0, v108);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v82 = 0;
LABEL_174:
      v112 = this->fields.logic;
      if ( !v112 )
        sub_1D0F30C(0, v108);
      BattleLogic__addBattleLogicTask(v112, (BattleLogicTask_array *)v109, 0);
LABEL_176:
      v81 = targetIndex + 1;
      targetIndex = v81;
      monitor = (int)value[1].monitor;
      if ( v81 >= monitor )
        continue;
      goto LABEL_140;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v173,
    (const MethodInfo_36F22EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v164;
  if ( !v164 )
    goto LABEL_244;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v172,
    v164,
    (const MethodInfo_35A8640 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v173 = v172;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v173,
            (const MethodInfo_36F21C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1D0F30C(0, v113);
    v114 = (int32_t)v173.fields._current.fields.key;
    v115 = v173.fields._current.fields.value;
    v116 = (BuffEntity_o *)BattleData__getServantData(p_fields->data, (int32_t)v173.fields._current.fields.key, 0);
    v118 = (BattleServantData_o *)v116;
    if ( v116 )
    {
      v119 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1D0F300(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_47354668(v119, v118, 0, 0, 0, 0, 0, 1, 0);
      if ( !v119 )
        sub_1D0F30C(v116, v117);
      selfConcatSvtIndividualities_k__BackingField = v119->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
    }
    targetIndex = 0;
    if ( !v115 )
      sub_1D0F30C(v116, v117);
    v121 = (int)v115[1].monitor;
    if ( v121 >= 1 )
    {
      v122 = 0;
      do
      {
        if ( v122 >= (unsigned int)v121 )
          sub_1D0F314(v116);
        v123 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v115[2].klass + v122);
        if ( !v123 )
          sub_1D0F30C(v116, v117);
        if ( !v123->fields._isRemove )
        {
          if ( !v13 )
            sub_1D0F30C(v116, v117);
          v116 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v13,
                                   v123->fields.buffId,
                                   (const MethodInfo_3535B7C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v116 )
          {
            if ( BuffEntity__isEndAct(v116, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v123, 1, 1, 0) )
            {
              v125 = (BattleSkillInfoData_o *)sub_1D0F300(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v125, 0);
              if ( !v125 )
                sub_1D0F30C(v126, v127);
              v125->fields.svtUniqueId = v114;
              v128 = v123->fields.vals;
              if ( !v128 )
                sub_1D0F30C(v126, v127);
              if ( !LODWORD(v128->max_length) )
                sub_1D0F314(v126);
              v129 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v125->klass->vtable._4_set_skillId.methodPtr)(
                       v125,
                       (unsigned int)v128->m_Items[0],
                       v125->klass->vtable._4_set_skillId.method);
              v131 = v123->fields.vals;
              if ( !v131 )
                sub_1D0F30C(v129, v130);
              if ( LODWORD(v131->max_length) <= 1 )
                sub_1D0F314(v129);
              v125->fields.skilllv = v131->m_Items[1];
              if ( !p_fields->data )
                sub_1D0F30C(0, v130);
              v132 = BattleData__getServantData(p_fields->data, v125->fields.svtUniqueId, 0);
              v133 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v125->klass->vtable._5_get_skillId.methodPtr)(
                       v125,
                       v125->klass->vtable._5_get_skillId.method);
              if ( !v170 )
                sub_1D0F30C(0, v133);
              v134 = SkillLvMaster__GetEntity(v170, v133, v125->fields.skilllv, 0);
              if ( !v132 )
                sub_1D0F30C(v134, v135);
              v136 = v134;
              if ( !p_fields->data )
                sub_1D0F30C(0, v135);
              v137 = BattleData__checkAliveOther(p_fields->data, v132->fields.uniqueId, 0);
              if ( v137 )
                goto LABEL_209;
              if ( !v136 )
                sub_1D0F30C(v137, v138);
              v139 = this->fields.logic;
              if ( !v139 )
                sub_1D0F30C(0, v138);
              if ( BattleLogic__checkPtTargetFunction(v139, v136->fields.funcId, 0) )
              {
LABEL_209:
                v140 = BattleServantData__GetRevengeIdCheckOpponentOnly(v132, v123, 0);
                if ( v140 < 0 )
                {
                  v143 = Target__getTargetIds(p_fields->data, v125->fields.svtUniqueId, -1, v114, 13, 0, 0);
                  v144 = BattleSkillInfoData__ExistsNoTargetNoActionType(v125, 0);
                }
                else
                {
                  v141 = sub_1D0F15C(int___TypeInfo, 1);
                  v143 = (System_Int32_array *)v141;
                  if ( !v141 )
                    sub_1D0F30C(0, v142);
                  if ( !*(_DWORD *)(v141 + 24) )
                    sub_1D0F314(v141);
                  v144 = 0;
                  *(_DWORD *)(v141 + 32) = v140;
                }
                v145 = this->fields.logicskill;
                v146 = sub_1D0F15C(int___TypeInfo, 1);
                if ( !v146 )
                  sub_1D0F30C(0, v147);
                if ( !*(_DWORD *)(v146 + 24) )
                  sub_1D0F314(v146);
                *(_DWORD *)(v146 + 32) = v114;
                if ( !v145 )
                  sub_1D0F30C(v146, v147);
                v148 = BattleLogicSkill__taskSkill(v145, v125, (System_Int32_array *)v146, v143, 1, v144, 0, 0, 0, 0);
                v149 = this->fields.logic;
                if ( !v149 )
                  sub_1D0F30C(0, v148);
                BattleLogic__addBattleLogicTask(v149, v148, 0);
              }
            }
            if ( !p_fields->data )
              sub_1D0F30C(0, v124);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(p_fields->data, v123, 0);
          }
        }
        v122 = targetIndex + 1;
        targetIndex = v122;
        v121 = (int)v115[1].monitor;
      }
      while ( v122 < v121 );
    }
    v150 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v150 = BattleLogicNomal___c_TypeInfo;
    }
    _9__46_1 = (System_Func_object__bool__o *)v150->static_fields->__9__46_1;
    if ( !_9__46_1 )
    {
      if ( !v150->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v150);
        v150 = BattleLogicNomal___c_TypeInfo;
      }
      v152 = (Il2CppObject *)v150->static_fields->__9;
      _9__46_1 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__46_1, v152, Method_BattleLogicNomal___c__createEndTurnEnemy_b__46_1__, 0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__46_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__46_1;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__46_1,
        (int32_t)_9__46_1,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
    }
    if ( BasicHelper__Any_object__52659096(
           (System_Object_array *)v115,
           (System_Func_T__bool__o *)_9__46_1,
           (const MethodInfo_3238398 *)Method_BasicHelper_Any_BattleBuffData_BuffData____80373112) )
    {
      BattleLogicNomal__UpdateApplyAttachCardBuffIndexList(this, v118, v160);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v173,
    (const MethodInfo_36F22EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v164, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_244;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0, 0);
  }
  if ( !p_fields->data
    || (Instance = (__int64)p_fields->data->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_244:
    sub_1D0F30C(Instance, v5);
  }
  if ( (v168 & 1) != 0 )
    v161 = v165;
  else
    v161 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v161, v165, 0);
}


BattleActionData_o *BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass43_0_o *v3; // x19
  __int64 Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  BattleLogicNomal___c__DisplayClass43_0_o *v12; // x25
  GrandQuestFolderBoardItem_o *p__4__this; // x19
  const MethodInfo *v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattleData_o *data; // x8
  BattleLogicNomal_Fields *p_fields; // x21
  BattleLogicNomal___c__DisplayClass43_0_o *v25; // x23
  System_Int32_array *QuestIndividualities; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x28
  unsigned int v34; // w24
  System_Collections_Generic_List_object__o *v35; // x29
  __int64 v36; // x26
  BattleServantData_o *v37; // x19
  __int64 *v38; // x26
  BattleServantData_o *v39; // t1
  bool isEndEnemyTurn; // w20
  System_Int32_array *fieldIndiv; // x21
  BattleLogic_o *logic; // x25
  System_Func_object__bool__o *v43; // x27
  int v44; // w19
  bool v45; // w3
  char v46; // w21
  Il2CppObject *v47; // x2
  BattleServantData_o *v48; // x19
  bool v49; // w20
  System_Int32_array *v50; // x21
  BattleLogic_o *v51; // x25
  System_Func_object__bool__o *v52; // x27
  int32_t v53; // w19
  System_Object_array *v54; // x2
  unsigned int v55; // w8
  struct System_Int32_array *items; // x9
  _QWORD *v57; // x10
  __int64 size; // x11
  BattleData_o *v59; // x19
  BattleBuffData_o *BuffData; // x20
  struct BattleData_o *v61; // x8
  __int64 v62; // x27
  int v63; // w8
  unsigned int v64; // w19
  __int64 v65; // x20
  __int64 *v66; // x20
  __int64 v67; // t1
  Il2CppObject *v68; // x21
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  struct BaseBattleEvent_o *battleEvent; // x19
  struct BattleData_o *v73; // x8
  struct BattlePerformance_o *perf; // x9
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *v76; // x20
  const MethodInfo *v77; // x2
  struct BattleData_o *v78; // x8
  Il2CppObject *Entity; // x0
  __int64 v80; // x1
  Il2CppObject *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v84; // w29
  char v85; // w23
  BattleBuffData_BuffData_o *v86; // x28
  BattleSkillInfoData_o *v87; // x26
  __int64 v88; // x0
  __int64 v89; // x1
  struct System_Int32_array *vals; // x8
  __int64 v91; // x0
  __int64 v92; // x1
  struct System_Int32_array *v93; // x8
  BattleServantData_o *ServantData; // x27
  __int64 v95; // x1
  SkillLvEntity_o *v96; // x0
  __int64 v97; // x1
  SkillLvEntity_o *v98; // x20
  _BOOL8 v99; // x0
  __int64 v100; // x1
  BattleLogic_o *v101; // x0
  int32_t v102; // w19
  __int64 v103; // x0
  __int64 v104; // x1
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x20
  __int64 v108; // x0
  __int64 v109; // x1
  System_Collections_ICollection_o *v110; // x0
  __int64 v111; // x1
  System_Collections_ICollection_o *v112; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v115; // x0
  __int64 v116; // x1
  int32_t v117; // w26
  Il2CppObject *v118; // x25
  BuffEntity_o *v119; // x0
  __int64 v120; // x1
  BattleServantData_o *v121; // x24
  BattleBuffData_CheckIndividualitiesData_o *v122; // x19
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x27
  int v124; // w8
  int i; // w23
  BattleBuffData_BuffData_o *v126; // x28
  __int64 v127; // x1
  BattleSkillInfoData_o *v128; // x29
  __int64 v129; // x0
  __int64 v130; // x1
  struct System_Int32_array *v131; // x8
  __int64 v132; // x0
  __int64 v133; // x1
  struct System_Int32_array *v134; // x8
  BattleServantData_o *v135; // x21
  __int64 v136; // x1
  SkillLvEntity_o *v137; // x0
  __int64 v138; // x1
  SkillLvEntity_o *v139; // x20
  _BOOL8 v140; // x0
  __int64 v141; // x1
  BattleLogic_o *v142; // x0
  int32_t v143; // w19
  __int64 v144; // x0
  __int64 v145; // x1
  System_Int32_array *v146; // x21
  bool v147; // w20
  BattleLogicSkill_o *v148; // x19
  __int64 v149; // x0
  __int64 v150; // x1
  BattleLogicTask_array *v151; // x1
  BattleLogic_o *v152; // x0
  BattleLogicNomal___c_c *v153; // x8
  System_Func_object__bool__o *_9__43_1; // x20
  Il2CppObject *v155; // x19
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  System_String_o *v159; // x4
  int32_t v160; // w5
  int64_t v161; // x6
  System_String_o *v162; // x7
  const MethodInfo *v163; // x2
  BattleActionData_o *v164; // x1
  System_Collections_Generic_Dictionary_int__object__o *v166; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__object__o *v167; // [xsp+28h] [xbp-F8h]
  System_Int32_array **p_fieldIndiv; // [xsp+30h] [xbp-F0h]
  BattleActionData_o *baseActData; // [xsp+38h] [xbp-E8h]
  char v170; // [xsp+44h] [xbp-DCh]
  System_Collections_Generic_List_int__o *v171; // [xsp+48h] [xbp-D8h]
  SkillLvMaster_o *v172; // [xsp+50h] [xbp-D0h]
  BattleLogicNomal_Fields *v174; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v175; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v176; // [xsp+90h] [xbp-90h] BYREF

  if ( (byte_4E7AA22 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1D0F0B4(&Method_BasicHelper_Any_BattleBuffData_BuffData____80373112);
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1D0F0B4(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1D0F0B4(&BattleSkillInfoData_TypeInfo);
    sub_1D0F0B4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1D0F0B4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__createEndTurnPlayer_b__43_1__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__);
    sub_1D0F0B4(&BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8867/*"MOTION_PLAYER_TURN_END"*/);
    byte_4E7AA22 = 1;
  }
  memset(&v176, 0, sizeof(v176));
  v3 = (BattleLogicNomal___c__DisplayClass43_0_o *)sub_1D0F300(BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass43_0___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_234;
  v12 = v3;
  v3->fields.__4__this = this;
  p__4__this = (GrandQuestFolderBoardItem_o *)&v3->fields.__4__this;
  sub_1D0F058(p__4__this, (int32_t)this, v6, v7, v8, v9, v10, v11);
  BattleLogicNomal__SetNextTargetId(this, v14);
  baseActData = (BattleActionData_o *)sub_1D0F300(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0);
  LOBYTE(p__4__this[-1].fields._ListCreatedTime_k__BackingField) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_234;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_234;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_234;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !baseActData )
    goto LABEL_234;
  BattleActionData__setStateField(baseActData, 0);
  v16 = StringLiteral_8867/*"MOTION_PLAYER_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8867/*"MOTION_PLAYER_TURN_END"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&baseActData->fields.motionname, v16, v17, v18, v19, v20, v21, v22);
  v167 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v167,
    (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v166 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v166,
    (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_234;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  p_fields = &this->fields;
  data = this->fields.data;
  v172 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_234;
  v25 = v12;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  v12->fields.fieldIndiv = QuestIndividualities;
  p_fieldIndiv = &v12->fields.fieldIndiv;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v12->fields.fieldIndiv,
    (int32_t)QuestIndividualities,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v171 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v171,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)p_fields->data;
  v174 = &this->fields;
  if ( !p_fields->data )
    goto LABEL_234;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_234;
  v33 = Instance;
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v34 = 0;
    v170 = 0;
    while ( 1 )
    {
      v35 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( v34 >= *(_DWORD *)(v33 + 24) )
        break;
      v36 = v33 + 8LL * (int)v34;
      v39 = *(BattleServantData_o **)(v36 + 32);
      v38 = (__int64 *)(v36 + 32);
      v37 = v39;
      if ( !v39 )
        goto LABEL_234;
      if ( v37->fields.isBuffProgressFlg )
      {
        isEndEnemyTurn = v25->fields.isEndEnemyTurn;
        fieldIndiv = v25->fields.fieldIndiv;
        logic = this->fields.logic;
        v43 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v43, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v37,
                              isEndEnemyTurn,
                              fieldIndiv,
                              logic,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v43,
                              0);
        if ( !v35 )
          goto LABEL_234;
        System_Collections_Generic_List_object___AddRange(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          break;
        Instance = *v38;
        if ( !*v38 )
          goto LABEL_234;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 464LL));
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          break;
        v44 = Instance;
        Instance = *v38;
        if ( !*v38 )
          goto LABEL_234;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 528LL));
        if ( v44 != (_DWORD)Instance )
        {
          if ( v34 >= *(_DWORD *)(v33 + 24) )
            break;
          Instance = *v38;
          if ( !*v38 )
            goto LABEL_234;
          BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
        }
      }
      if ( v34 >= *(_DWORD *)(v33 + 24) )
        break;
      Instance = *v38;
      if ( !*v38 )
        goto LABEL_234;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v174->data;
        if ( !v174->data )
          goto LABEL_234;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0);
        if ( (Instance & 1) != 0 )
        {
          v45 = 1;
        }
        else
        {
          Instance = (__int64)v174->data;
          if ( !v174->data )
            goto LABEL_234;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0);
          v45 = Instance & 1;
        }
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          break;
        Instance = *v38;
        if ( !*v38 )
          goto LABEL_234;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *p_fieldIndiv,
                     this->fields.logic,
                     v45,
                     baseActData,
                     0);
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          break;
        v46 = Instance;
        Instance = *v38;
        if ( !*v38 )
          goto LABEL_234;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v34 >= *(_DWORD *)(v33 + 24) )
            break;
          Instance = *v38;
          if ( !*v38 )
            goto LABEL_234;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_234;
          v47 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v34 >= *(_DWORD *)(v33 + 24) )
              break;
            Instance = (__int64)v166;
            if ( !*v38 || !v166 )
              goto LABEL_234;
            System_Collections_Generic_Dictionary_int__object___Add(
              v166,
              *(_DWORD *)(*v38 + 24),
              v47,
              (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          break;
        if ( !*v38 )
          goto LABEL_234;
        Instance = *(_QWORD *)(*v38 + 848);
        if ( !Instance )
          goto LABEL_234;
        v170 |= v46;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 1, 1, 0);
      }
      if ( v34 >= *(_DWORD *)(v33 + 24) )
        break;
      v48 = (BattleServantData_o *)*v38;
      if ( !*v38 )
        goto LABEL_234;
      if ( v48->fields.isBuffProgressFlg )
      {
        v49 = v25->fields.isEndEnemyTurn;
        v50 = v25->fields.fieldIndiv;
        v51 = this->fields.logic;
        v52 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v52, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v48,
                              v49,
                              v50,
                              v51,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v52,
                              0);
        if ( !v35 )
          goto LABEL_234;
        System_Collections_Generic_List_object___AddRange(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          break;
        Instance = *v38;
        if ( !*v38 )
          goto LABEL_234;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v34 >= *(_DWORD *)(v33 + 24) )
            break;
          Instance = *v38;
          if ( !*v38 )
            goto LABEL_234;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v35, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( v34 >= *(_DWORD *)(v33 + 24) )
                break;
              if ( !*v38 )
                goto LABEL_234;
              v53 = *(_DWORD *)(*v38 + 24);
              v54 = System_Collections_Generic_List_object___ToArray(
                      v35,
                      (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
              Instance = (__int64)v167;
              if ( !v167 )
                goto LABEL_234;
              System_Collections_Generic_Dictionary_int__object___Add(
                v167,
                v53,
                &v54->obj,
                (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v55 = *(_DWORD *)(v33 + 24);
        if ( v34 >= v55 )
          break;
        Instance = (__int64)v171;
        if ( !*v38 )
          goto LABEL_234;
        if ( !v171 )
          goto LABEL_234;
        v5 = *(unsigned int *)(*v38 + 24);
        items = v171->fields._items;
        v57 = Method_System_Collections_Generic_List_int__Add__;
        ++v171->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v171->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v171,
            v5,
            *(const MethodInfo_393F3EC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          v55 = *(_DWORD *)(v33 + 24);
        }
        else
        {
          v171->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
        if ( v34 >= v55 )
          break;
        Instance = *v38;
        if ( !*v38 )
          goto LABEL_234;
        v59 = v174->data;
        BuffData = BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v35,
                              (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v59 )
          goto LABEL_234;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v59, BuffData, (BattleBuffData_BuffData_array *)Instance, 0);
      }
      if ( (signed int)++v34 >= *(_DWORD *)(v33 + 24) )
        goto LABEL_80;
    }
LABEL_237:
    sub_1D0F314(Instance);
  }
  v170 = 0;
LABEL_80:
  if ( !v174->data )
    goto LABEL_234;
  Instance = (__int64)v174->data->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_234;
  BattleFieldEnvironmentData__ProgressApplyBuffAfterServantUse((BattleFieldEnvironmentData_o *)Instance, 1, 0);
  Instance = (__int64)v174->data;
  if ( !v174->data )
    goto LABEL_234;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v61 = v174->data;
  if ( !v174->data )
    goto LABEL_234;
  v62 = Instance;
  Instance = (__int64)v171;
  if ( !v61->fields.leaderDown || !v61->fields.endbattleFlg )
  {
    if ( !v62 )
      goto LABEL_234;
    v63 = *(_DWORD *)(v62 + 24);
    if ( v63 >= 1 )
    {
      v64 = 0;
      while ( v64 < v63 )
      {
        v65 = v62 + 8LL * (int)v64;
        v67 = *(_QWORD *)(v65 + 32);
        v66 = (__int64 *)(v65 + 32);
        Instance = v67;
        if ( !v67 )
          goto LABEL_234;
        if ( *(_BYTE *)(Instance + 572) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                v25->fields.isEndEnemyTurn,
                                v25->fields.fieldIndiv,
                                this->fields.logic,
                                0,
                                0);
          if ( v64 >= *(_DWORD *)(v62 + 24) )
            goto LABEL_237;
          v68 = (Il2CppObject *)Instance;
          Instance = *v66;
          if ( !*v66 )
            goto LABEL_234;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v64 >= *(_DWORD *)(v62 + 24) )
              goto LABEL_237;
            Instance = *v66;
            if ( !*v66 )
              goto LABEL_234;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v68 )
                goto LABEL_234;
              if ( v68[1].monitor )
              {
                if ( v64 >= *(_DWORD *)(v62 + 24) )
                  goto LABEL_237;
                Instance = (__int64)v167;
                if ( !*v66 || !v167 )
                  goto LABEL_234;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v167,
                  *(_DWORD *)(*v66 + 24),
                  v68,
                  (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v64 >= *(_DWORD *)(v62 + 24) )
            goto LABEL_237;
          Instance = (__int64)v171;
          if ( !*v66 )
            goto LABEL_234;
          if ( !v171 )
            goto LABEL_234;
          v5 = *(unsigned int *)(*v66 + 24);
          v69 = v171->fields._items;
          v70 = Method_System_Collections_Generic_List_int__Add__;
          ++v171->fields._version;
          if ( !v69 )
            goto LABEL_234;
          v71 = v171->fields._size;
          if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v171,
              v5,
              *(const MethodInfo_393F3EC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v171->fields._size = v71 + 1;
            v69->m_Items[v71] = v5;
          }
        }
        v63 = *(_DWORD *)(v62 + 24);
        if ( (int)++v64 >= v63 )
          goto LABEL_112;
      }
      goto LABEL_237;
    }
LABEL_112:
    Instance = (__int64)v171;
    v61 = v174->data;
    if ( !v174->data )
      goto LABEL_234;
  }
  if ( !Instance )
    goto LABEL_234;
  battleEvent = v61->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_234;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, bool, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               v25->fields.isEndEnemyTurn,
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v73 = v174->data;
  if ( !v174->data )
    goto LABEL_234;
  perf = v73->fields.perf;
  if ( !perf )
    goto LABEL_234;
  Instance = (__int64)v73->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_234;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  if ( !v174->data )
    goto LABEL_234;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v174->data->fields.aiNpcDataList;
  v76 = (System_Action_object__o *)sub_1D0F300(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v76,
    (Il2CppObject *)v25,
    Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_234;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v76,
    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  if ( !v174->data )
    goto LABEL_234;
  Instance = (__int64)v174->data->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_234;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    v25->fields.isEndEnemyTurn,
    0);
  BattleLogicNomal__UpdateEndTurnBuff(this, v25->fields.fieldIndiv, v77);
  v78 = this->fields.data;
  if ( !v78 )
    goto LABEL_234;
  Instance = (__int64)v166;
  v78->fields.currentTurn = 1;
  if ( !v166 )
    goto LABEL_234;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v175,
    v166,
    (const MethodInfo_35A8640 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v176 = v175;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v176,
                               (const MethodInfo_36F21C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v176.fields._current.fields.value;
    if ( !v176.fields._current.fields.value )
      sub_1D0F30C(Entity, v80);
    monitor = (int)v176.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v176.fields._current.fields.key;
      v84 = 0;
      v85 = 1;
LABEL_129:
      if ( v84 >= monitor )
        sub_1D0F314(Entity);
      v86 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + (int)v84);
      if ( !v86 )
        sub_1D0F30C(Entity, v80);
      if ( v86->fields._isRemove )
        goto LABEL_165;
      if ( !v15 )
        sub_1D0F30C(Entity, v80);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v15,
                 v86->fields.buffId,
                 (const MethodInfo_3535B7C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_165;
      v87 = (BattleSkillInfoData_o *)sub_1D0F300(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v87, 0);
      if ( !v87 )
        sub_1D0F30C(v88, v89);
      v87->fields.svtUniqueId = key;
      vals = v86->fields.vals;
      if ( !vals )
        sub_1D0F30C(v88, v89);
      if ( !LODWORD(vals->max_length) )
        sub_1D0F314(v88);
      v91 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v87->klass->vtable._4_set_skillId.methodPtr)(
              v87,
              (unsigned int)vals->m_Items[0],
              v87->klass->vtable._4_set_skillId.method);
      v93 = v86->fields.vals;
      if ( !v93 )
        sub_1D0F30C(v91, v92);
      if ( LODWORD(v93->max_length) <= 1 )
        sub_1D0F314(v91);
      v87->fields.skilllv = v93->m_Items[1];
      if ( !v174->data )
        sub_1D0F30C(0, v92);
      ServantData = BattleData__getServantData(v174->data, v87->fields.svtUniqueId, 0);
      v95 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v87->klass->vtable._5_get_skillId.methodPtr)(
              v87,
              v87->klass->vtable._5_get_skillId.method);
      if ( !v172 )
        sub_1D0F30C(0, v95);
      v96 = SkillLvMaster__GetEntity(v172, v95, v87->fields.skilllv, 0);
      if ( !ServantData )
        sub_1D0F30C(v96, v97);
      v98 = v96;
      if ( !v174->data )
        sub_1D0F30C(0, v97);
      v99 = BattleData__checkAliveOther(v174->data, ServantData->fields.uniqueId, 0);
      if ( !v99 )
      {
        if ( !v98 )
          sub_1D0F30C(v99, v100);
        v101 = this->fields.logic;
        if ( !v101 )
          sub_1D0F30C(0, v100);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v101, v98->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_165;
      }
      v102 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v86, 0);
      if ( v102 < 0 )
      {
        TargetIds = Target__getTargetIds(v174->data, v87->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v87, 0);
      }
      else
      {
        v103 = sub_1D0F15C(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v103;
        if ( !v103 )
          sub_1D0F30C(0, v104);
        if ( !*(_DWORD *)(v103 + 24) )
          sub_1D0F314(v103);
        exists = 0;
        *(_DWORD *)(v103 + 32) = v102;
      }
      logicskill = this->fields.logicskill;
      v108 = sub_1D0F15C(int___TypeInfo, 1);
      if ( !v108 )
        sub_1D0F30C(0, v109);
      if ( !*(_DWORD *)(v108 + 24) )
        sub_1D0F314(v108);
      *(_DWORD *)(v108 + 32) = key;
      if ( !logicskill )
        sub_1D0F30C(v108, v109);
      v110 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v87,
                                                   (System_Int32_array *)v108,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0);
      v112 = v110;
      if ( (v85 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v110, 0);
        if ( IsNullOrEmpty )
        {
          v85 = 1;
          goto LABEL_163;
        }
        if ( !v112 )
          sub_1D0F30C(IsNullOrEmpty, v111);
        if ( !LODWORD(v112[1].monitor) )
          sub_1D0F314(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v112[2].klass;
        if ( !klass )
          sub_1D0F30C(0, v111);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v85 = 0;
LABEL_163:
      v115 = this->fields.logic;
      if ( !v115 )
        sub_1D0F30C(0, v111);
      BattleLogic__addBattleLogicTask(v115, (BattleLogicTask_array *)v112, 0);
LABEL_165:
      monitor = (int)value[1].monitor;
      if ( (int)++v84 >= monitor )
        continue;
      goto LABEL_129;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v176,
    (const MethodInfo_36F22EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v167;
  if ( !v167 )
    goto LABEL_234;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v175,
    v167,
    (const MethodInfo_35A8640 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v176 = v175;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v176,
            (const MethodInfo_36F21C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    if ( !v174->data )
      sub_1D0F30C(0, v116);
    v117 = (int32_t)v176.fields._current.fields.key;
    v118 = v176.fields._current.fields.value;
    v119 = (BuffEntity_o *)BattleData__getServantData(v174->data, (int32_t)v176.fields._current.fields.key, 0);
    v121 = (BattleServantData_o *)v119;
    if ( v119 )
    {
      v122 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1D0F300(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_47354668(v122, v121, 0, 0, 0, 0, 0, 1, 0);
      if ( !v122 )
        sub_1D0F30C(v119, v120);
      selfConcatSvtIndividualities_k__BackingField = v122->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v118 )
LABEL_266:
        sub_1D0F30C(v119, v120);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
      if ( !v118 )
        goto LABEL_266;
    }
    v124 = (int)v118[1].monitor;
    if ( v124 >= 1 )
    {
      for ( i = 0; i < v124; ++i )
      {
        if ( i >= (unsigned int)v124 )
          sub_1D0F314(v119);
        v126 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v118[2].klass + i);
        if ( !v126 )
          sub_1D0F30C(v119, v120);
        if ( !v126->fields._isRemove )
        {
          if ( !v15 )
            sub_1D0F30C(v119, v120);
          v119 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v15,
                                   v126->fields.buffId,
                                   (const MethodInfo_3535B7C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v119 )
          {
            if ( BuffEntity__isEndAct(v119, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v126, 1, 1, 0) )
            {
              v128 = (BattleSkillInfoData_o *)sub_1D0F300(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v128, 0);
              if ( !v128 )
                sub_1D0F30C(v129, v130);
              v128->fields.svtUniqueId = v117;
              v131 = v126->fields.vals;
              if ( !v131 )
                sub_1D0F30C(v129, v130);
              if ( !LODWORD(v131->max_length) )
                sub_1D0F314(v129);
              v132 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v128->klass->vtable._4_set_skillId.methodPtr)(
                       v128,
                       (unsigned int)v131->m_Items[0],
                       v128->klass->vtable._4_set_skillId.method);
              v134 = v126->fields.vals;
              if ( !v134 )
                sub_1D0F30C(v132, v133);
              if ( LODWORD(v134->max_length) <= 1 )
                sub_1D0F314(v132);
              v128->fields.skilllv = v134->m_Items[1];
              if ( !v174->data )
                sub_1D0F30C(0, v133);
              v135 = BattleData__getServantData(v174->data, v128->fields.svtUniqueId, 0);
              v136 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v128->klass->vtable._5_get_skillId.methodPtr)(
                       v128,
                       v128->klass->vtable._5_get_skillId.method);
              if ( !v172 )
                sub_1D0F30C(0, v136);
              v137 = SkillLvMaster__GetEntity(v172, v136, v128->fields.skilllv, 0);
              if ( !v135 )
                sub_1D0F30C(v137, v138);
              v139 = v137;
              if ( !v174->data )
                sub_1D0F30C(0, v138);
              v140 = BattleData__checkAliveOther(v174->data, v135->fields.uniqueId, 0);
              if ( v140 )
                goto LABEL_198;
              if ( !v139 )
                sub_1D0F30C(v140, v141);
              v142 = this->fields.logic;
              if ( !v142 )
                sub_1D0F30C(0, v141);
              if ( BattleLogic__checkPtTargetFunction(v142, v139->fields.funcId, 0) )
              {
LABEL_198:
                v143 = BattleServantData__GetRevengeIdCheckOpponentOnly(v135, v126, 0);
                if ( v143 < 0 )
                {
                  v146 = Target__getTargetIds(v174->data, v128->fields.svtUniqueId, -1, v117, 13, 0, 0);
                  v147 = BattleSkillInfoData__ExistsNoTargetNoActionType(v128, 0);
                }
                else
                {
                  v144 = sub_1D0F15C(int___TypeInfo, 1);
                  v146 = (System_Int32_array *)v144;
                  if ( !v144 )
                    sub_1D0F30C(0, v145);
                  if ( !*(_DWORD *)(v144 + 24) )
                    sub_1D0F314(v144);
                  v147 = 0;
                  *(_DWORD *)(v144 + 32) = v143;
                }
                v148 = this->fields.logicskill;
                v149 = sub_1D0F15C(int___TypeInfo, 1);
                if ( !v149 )
                  sub_1D0F30C(0, v150);
                if ( !*(_DWORD *)(v149 + 24) )
                  sub_1D0F314(v149);
                *(_DWORD *)(v149 + 32) = v117;
                if ( !v148 )
                  sub_1D0F30C(v149, v150);
                v151 = BattleLogicSkill__taskSkill(v148, v128, (System_Int32_array *)v149, v146, 1, v147, 0, 0, 0, 0);
                v152 = this->fields.logic;
                if ( !v152 )
                  sub_1D0F30C(0, v151);
                BattleLogic__addBattleLogicTask(v152, v151, 0);
              }
            }
            if ( !v174->data )
              sub_1D0F30C(0, v127);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(v174->data, v126, 0);
          }
        }
        v124 = (int)v118[1].monitor;
      }
    }
    v153 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v153 = BattleLogicNomal___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__bool__o *)v153->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v153->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v153);
        v153 = BattleLogicNomal___c_TypeInfo;
      }
      v155 = (Il2CppObject *)v153->static_fields->__9;
      _9__43_1 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__43_1, v155, Method_BattleLogicNomal___c__createEndTurnPlayer_b__43_1__, 0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__43_1;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__43_1,
        (int32_t)_9__43_1,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
    }
    if ( BasicHelper__Any_object__52659096(
           (System_Object_array *)v118,
           (System_Func_T__bool__o *)_9__43_1,
           (const MethodInfo_3238398 *)Method_BasicHelper_Any_BattleBuffData_BuffData____80373112) )
    {
      BattleLogicNomal__UpdateApplyAttachCardBuffIndexList(this, v121, v163);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v176,
    (const MethodInfo_36F22EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_234;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)Instance, 0);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v167, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_234;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0, 0);
  }
  if ( !v174->data
    || (Instance = (__int64)v174->data->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_234:
    sub_1D0F30C(Instance, v5);
  }
  if ( (v170 & 1) != 0 )
    v164 = baseActData;
  else
    v164 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v164, baseActData, 0);
}


BattleActionData_o *BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_String_o *motionName; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_String_o *motionMessage; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UnityEngine_GameObject_o *targetObject; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4E7AA1E & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    byte_4E7AA1E = 1;
  }
  v4 = sub_1D0F300(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0), !task) )
    sub_1D0F30C(v5, v6);
  *(_BYTE *)(v4 + 257) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 72) = motionName;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 72), (int32_t)motionName, v8, v9, v10, v11, v12, v13);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 144) = motionMessage;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 144), (int32_t)motionMessage, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v4 + 152) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 80) = targetObject;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 80), (int32_t)targetObject, v22, v23, v24, v25, v26, v27);
  return (BattleActionData_o *)v4;
}


BattleActionData_o *BattleLogicNomal__createShiftGuts(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  BattleLogicNomal_o *v5; // x20
  BattleServantData_o *v6; // x21
  int32_t ShiftGuts; // w0
  int32_t v8; // w22
  BattleActionData_o *result; // x0
  struct BattleData_o *v10; // x8
  BattleLogicNomal_o *v11; // x23
  struct BattleLogic_o *logic; // x8
  BattleBuffData_BuffData_o *v13; // [xsp+0h] [xbp-40h] BYREF
  BuffEntity_o *buffEntity; // [xsp+8h] [xbp-38h] BYREF

  v13 = 0;
  if ( !task )
    goto LABEL_15;
  data = this->fields.data;
  v5 = this;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_15;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0);
  if ( !this )
    goto LABEL_15;
  v6 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0);
  buffEntity = 0;
  if ( !v6->fields.buffData )
    goto LABEL_15;
  ShiftGuts = BattleBuffData__GetShiftGuts(
                v6->fields.buffData,
                v6,
                (BattleBuffData_CheckIndividualitiesData_array *)this,
                &buffEntity,
                &v13,
                0);
  if ( !v13 )
    return 0;
  v8 = ShiftGuts;
  result = (BattleActionData_o *)buffEntity;
  if ( buffEntity )
  {
    this = (BattleLogicNomal_o *)BuffEntity__GetMotionName(buffEntity, 0);
    v10 = v5->fields.data;
    if ( v10 )
    {
      v11 = this;
      this = (BattleLogicNomal_o *)v10->fields.perf;
      if ( this )
      {
        BattlePerformance__PlayShiftGuts((BattlePerformance_o *)this, 0);
        this = (BattleLogicNomal_o *)v13;
        if ( v13 )
        {
          BattleBuffData_BuffData__SetApplyBuffProgressAfterServantUse(v13, 1, 0);
          logic = v5->fields.logic;
          if ( logic )
          {
            this = (BattleLogicNomal_o *)logic->fields.logicReaction;
            if ( this )
              return BattleLogicReaction__createResurrectionCommon(
                       (BattleLogicReaction_o *)this,
                       v6,
                       buffEntity,
                       v8,
                       task->fields.isForcedSpeedOne,
                       (System_String_o *)v11,
                       v13,
                       0);
          }
        }
      }
    }
LABEL_15:
    sub_1D0F30C(this, task);
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
  int32_t ShiftMotionOverwriteNumber; // w22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w1
  BattleActionData_ShiftServant_o *v17; // x23
  bool isOverwriteShift; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4E7AA29 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&BattleActorControl_TypeInfo);
    this = (BattleLogicNomal_o *)sub_1D0F0B4(&BattleActionData_ShiftServant_TypeInfo);
    byte_4E7AA29 = 1;
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
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  BattleActorControl__GetShiftMotionNameAndOverwriteFlag(ShiftMotionOverwriteNumber, &motionName, &isOverwriteShift, 0);
  v7 = sub_1D0F300(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  v16 = (int)motionName;
  *(_QWORD *)(v7 + 72) = motionName;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 72), v16, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 260) = isOverwriteShift;
  this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
  if ( !this )
    goto LABEL_20;
  *(_BYTE *)(v7 + 261) = BattleDeckServantData__IsIgnoreShiftWhiteFade((BattleDeckServantData_o *)this, 0);
  v17 = (BattleActionData_ShiftServant_o *)sub_1D0F300(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v17, 0, 0);
  if ( !v17 )
    goto LABEL_20;
  BattleActionData_ShiftServant__setBeforeSvtData(v17, (BattleServantData_o *)v6, 0);
  if ( *(_BYTE *)(v7 + 260) )
    BattleActionData_ShiftServant__SetBeforeWeapon(v17, (BattleServantData_o *)v6, 0);
  BattleServantData__setShiftServant((BattleServantData_o *)v6, v4->fields.data, 1, 0);
  BattleServantData__SetIsBattleShift((BattleServantData_o *)v6, 1, 0);
  BattleActionData_ShiftServant__setCheckSvtData(v17, (BattleServantData_o *)v6, 0);
  BattleActionData__setShiftServant((BattleActionData_o *)v7, v17, 0);
  this = (BattleLogicNomal_o *)v4->fields.logic;
  if ( !this )
LABEL_20:
    sub_1D0F30C(this, task);
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

  if ( (byte_4E7AA1F & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11252/*"RESET_CAMERA_BAT"*/);
    byte_4E7AA1F = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              (System_String_o *)StringLiteral_11252/*"RESET_CAMERA_BAT"*/,
              0,
              0);
            return v8;
          }
        }
      }
LABEL_18:
      sub_1D0F30C(StartTurn, v6);
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
  __int64 v8; // x11
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
        sub_1D0F314(data);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 572) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1D0F30C(data, task);
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
    sub_1D0F30C(this, 0);
  max_length = svtList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1D0F314(this);
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
    sub_1D0F314(data);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1D0F30C(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BattleAttackManager_o *BattleLogicNomal__get_AtkManager(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, method);
  return data->fields.battleAtkManager;
}


BaseBattleEvent_o *BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, method);
  return data->fields.battleEvent;
}


BattleFieldEnvironmentData_o *BattleLogicNomal__get_FieldEnvData(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, method);
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

  if ( (byte_4E7AA0E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1D0F0B4(&BattleLogic_reactionFunction_TypeInfo);
    byte_4E7AA0E = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1D0F300(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0);
  if ( !list )
    sub_1D0F30C(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass57_0_o *v5; // x20
  BattleFieldEnvironmentData_o *ShiftableUniqueId; // x0
  __int64 v7; // x1
  int32_t ActorId; // w0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *v10; // x19
  BattleServantData_o *v11; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicTask_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct BattleData_o *data; // x8
  BeforeShiftServantReactTaskCreator_o *v26; // x22
  ServantReactTaskCreator_o *v27; // x22
  __int64 v28; // x23
  System_Func_object__bool__o *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct BattleLogic_o *v42; // x8
  BattleLogicTask_o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  struct BattleLogic_o *v54; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0

  if ( (byte_4E7AA2A & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_1D0F0B4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&ReactTaskTargetFilter_TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass57_0__shiftServantTaskReaction_b__0__);
    sub_1D0F0B4(&BattleLogicNomal___c__DisplayClass57_0_TypeInfo);
    byte_4E7AA2A = 1;
  }
  v5 = (BattleLogicNomal___c__DisplayClass57_0_o *)sub_1D0F300(BattleLogicNomal___c__DisplayClass57_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass57_0___ctor(v5, 0);
  if ( !task )
    goto LABEL_41;
  ActorId = BattleLogicTask__getActorId(task, 0);
  ShiftableUniqueId = (BattleFieldEnvironmentData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v9);
  if ( !v5 )
    goto LABEL_41;
  v5->fields.uniqueId = (int)ShiftableUniqueId;
  if ( !(_DWORD)ShiftableUniqueId )
  {
    data = this->fields.data;
    if ( data )
    {
      ShiftableUniqueId = data->fields._FieldEnvData_k__BackingField;
      if ( ShiftableUniqueId )
      {
        BattleFieldEnvironmentData__ProgressApplyBuffAfterServantUse(ShiftableUniqueId, 1, 0);
        return this->fields.zeroTask;
      }
    }
    goto LABEL_41;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  ShiftableUniqueId = (BattleFieldEnvironmentData_o *)this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_41;
  ShiftableUniqueId = (BattleFieldEnvironmentData_o *)BattleData__getServantData(
                                                        (BattleData_o *)ShiftableUniqueId,
                                                        v5->fields.uniqueId,
                                                        0);
  if ( !ShiftableUniqueId )
    goto LABEL_41;
  v11 = (BattleServantData_o *)ShiftableUniqueId;
  ShiftableUniqueId = (BattleFieldEnvironmentData_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                                        (BattleServantData_o *)ShiftableUniqueId,
                                                        0);
  if ( !v11->fields.buffData )
    goto LABEL_41;
  ShiftableUniqueId = (BattleFieldEnvironmentData_o *)BattleBuffData__IsShiftGuts(
                                                        v11->fields.buffData,
                                                        v11,
                                                        (BattleBuffData_CheckIndividualitiesData_array *)ShiftableUniqueId,
                                                        0);
  if ( ((unsigned __int8)ShiftableUniqueId & 1) != 0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      ShiftableUniqueId = (BattleFieldEnvironmentData_o *)logic->fields.logicReaction;
      if ( ShiftableUniqueId )
      {
        ShiftableUniqueId = (BattleFieldEnvironmentData_o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                              v5->fields.uniqueId,
                                                              1,
                                                              0);
        if ( v10 )
        {
          System_Collections_Generic_List_object___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
            (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          v13 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v13, 0);
          if ( v13 )
          {
            v13->fields.actiontype = 62;
            BattleLogicTask__setActor(v13, 3, v5->fields.uniqueId, 0);
            items = v10->fields._items;
            v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v10->fields._version;
            if ( items )
            {
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  (Il2CppObject *)v13,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v13;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
              }
              v54 = this->fields.logic;
              if ( v54 )
              {
                ShiftableUniqueId = (BattleFieldEnvironmentData_o *)v54->fields.logicReaction;
                if ( ShiftableUniqueId )
                {
                  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                                              v5->fields.uniqueId,
                                                                              0,
                                                                              0);
                  System_Collections_Generic_List_object___AddRange(
                    v10,
                    TaskGuts,
                    (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_35;
                }
              }
            }
          }
        }
      }
    }
LABEL_41:
    sub_1D0F30C(ShiftableUniqueId, v7);
  }
  BattleServantData__UsedProgressingAppliedFailedGuts(v11, 0);
  v26 = (BeforeShiftServantReactTaskCreator_o *)sub_1D0F300(BeforeShiftServantReactTaskCreator_TypeInfo);
  BeforeShiftServantReactTaskCreator___ctor(v26, 24, 0);
  if ( !v26 )
    goto LABEL_41;
  v27 = ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v26, 0);
  v28 = sub_1D0F300(ReactTaskTargetFilter_TypeInfo);
  ReactTaskTargetFilter___ctor((ReactTaskTargetFilter_o *)v28, 0);
  v29 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_BattleLogicNomal___c__DisplayClass57_0__shiftServantTaskReaction_b__0__,
    0);
  if ( !v28 )
    goto LABEL_41;
  *(_QWORD *)(v28 + 16) = v29;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v28 + 16), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  if ( !v27 )
    goto LABEL_41;
  v27->fields._TargetFilter_k__BackingField = (struct ReactTaskTargetFilter_o *)v28;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v27->fields._TargetFilter_k__BackingField,
    v28,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = this->fields.logic;
  if ( !v42 )
    goto LABEL_41;
  ShiftableUniqueId = (BattleFieldEnvironmentData_o *)v42->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_41;
  ShiftableUniqueId = (BattleFieldEnvironmentData_o *)BattleLogicReaction__CreateTasks(
                                                        (BattleLogicReaction_o *)ShiftableUniqueId,
                                                        v27,
                                                        0);
  if ( !v10 )
    goto LABEL_41;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
    (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v43 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v43, 0);
  if ( !v43 )
    goto LABEL_41;
  v43->fields.actiontype = 37;
  BattleLogicTask__setActor(v43, 3, v5->fields.uniqueId, 0);
  v50 = v10->fields._items;
  v51 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v50 )
    goto LABEL_41;
  v52 = v10->fields._size;
  if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v43,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj.klass + v52;
    v10->fields._size = v52 + 1;
    v53[4] = (Il2CppClass *)v43;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v53 + 4), (int32_t)v43, v44, v45, v46, v47, v48, v49);
  }
LABEL_35:
  v56 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v56, 0);
  if ( !v56 )
    goto LABEL_41;
  v56->fields.actiontype = 36;
  BattleLogicTask__setActor(v56, 3, v5->fields.uniqueId, 0);
  v63 = v10->fields._items;
  v64 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v63 )
    goto LABEL_41;
  v65 = v10->fields._size;
  if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v56,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v63->obj.klass + v65;
    v10->fields._size = v65 + 1;
    v66[4] = (Il2CppClass *)v56;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v66 + 4), (int32_t)v56, v57, v58, v59, v60, v61, v62);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleServantData_o *v14; // x23
  BattleCommandCardTask_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4E7AA10 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCommandCardTask_TypeInfo);
    sub_1D0F0B4(&BattleDataDefine_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E7AA10 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_26;
  battleEvent = (BattleData_o *)v9->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, Il2CppMethodPointer))battleEvent->klass[1].vtable._4_getAiParam.method)(
                                  battleEvent,
                                  battleEvent->klass[1].vtable._5_isAiTarget.methodPtr);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_23;
  if ( !data )
    goto LABEL_26;
  combodata = data->fields.combodata;
  if ( !combodata )
    goto LABEL_26;
  if ( combodata->fields.samecount < 3 )
    goto LABEL_23;
  v11 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v11 = BattleDataDefine_TypeInfo;
  }
  COMMAND_CARD_NUM_TO_SELECT = v11->static_fields->COMMAND_CARD_NUM_TO_SELECT;
  this->fields.commandIndex = COMMAND_CARD_NUM_TO_SELECT;
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, COMMAND_CARD_NUM_TO_SELECT, 0);
  if ( !battleEvent )
    goto LABEL_26;
  v13 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v13->fields.uniqueId, 0);
  if ( !battleEvent )
    goto LABEL_26;
  v14 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v14->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v14, 0), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1D0F30C(battleEvent, v8);
  }
  v15 = (BattleCommandCardTask_o *)sub_1D0F300(BattleCommandCardTask_TypeInfo);
  BattleCommandCardTask___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_26;
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, 2, v13->fields.uniqueId, 0);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, (BattleLogicTask_o *)v15, v13, 0);
  BattleLogicTask__setAddAttackCommand((BattleLogicTask_o *)v15, data->fields.combodata, v13, 0);
  v15->fields.isCanCounterTask = 1;
  if ( !v6 )
    goto LABEL_26;
  items = v6->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v15,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v15;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4E7AA26 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E7AA26 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1D0F30C(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
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
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskCheckShiftServants(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  return BattleLogicNomal__shiftServantTaskReaction(this, this->fields.tmpShiftTask, (const MethodInfo *)data);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4E7AA17 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E7AA17 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_12;
  BattleLogic__resetOverKill(logic, 0);
  if ( !data
    || (BattleData__SetCommandAttacked(data, 0, 0),
        v9 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v9, 0),
        !v9)
    || (BattleLogicTask__setSystem(v9, 0), !v6)
    || (items = v6->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_12:
    sub_1D0F30C(logic, v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v9,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v9;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4E7AA15 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E7AA15 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_10:
    sub_1D0F30C(battleEvent, v8);
  }
  BattleData__ApplyCommandcardFirstBonus(data, 0);
  if ( !v6 )
    goto LABEL_10;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t TreasureDvcId; // w0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4E7AA0F & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCommandCardTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E7AA0F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)v10->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_37;
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
    goto LABEL_37;
  battleEvent = BattleData__getSelectCommand(data, v11, 0);
  if ( !battleEvent )
    goto LABEL_37;
  v12 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_18;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_37;
  ServantData = BattleData__getServantData((BattleData_o *)battleEvent, v12->fields.uniqueId, 0);
  battleEvent = (BattleCommandData_o *)BattleLogicNomal__IsEnableToAttack(ServantData, v12, v14);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
  {
LABEL_18:
    if ( v7 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v7,
                                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v15 = (BattleCommandCardTask_o *)sub_1D0F300(BattleCommandCardTask_TypeInfo);
  BattleCommandCardTask___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_37;
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
  v15->fields.isCanCounterTask = 1;
  if ( v12->fields.treasureDvc < 1 )
  {
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
        v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v15,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v15;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v15, v28, v29, v30, v31, v32, v33);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1D0F30C(battleEvent, v9);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_37;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0);
  if ( !ServantData )
    goto LABEL_37;
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, 2, ServantData->fields.uniqueId, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v15, data->fields.combodata, v12, v11, 0);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v15, TreasureDvcId, 1, 0);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         (BattleLogicTask_o *)v15,
                                         v12,
                                         0);
  if ( !v7 )
    goto LABEL_37;
  v24 = v7->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v7->fields._version;
  if ( !v24 )
    goto LABEL_37;
  v26 = v7->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v15,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v7->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v15;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v15, v18, v19, v20, v21, v22, v23);
  }
  BattleData__setTDChain(data, 1, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v10; // x23
  __int64 Instance; // x0
  __int64 wasAttackTargetId; // x1
  __int64 v13; // x8
  __int64 v14; // x28
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  int v17; // w9
  BattleServantData_o *v18; // x27
  BattleServantData_o *v19; // x20
  System_Collections_Generic_IEnumerable_T__o *v20; // x29
  void *monitor; // x8
  bool v22; // w20
  __int64 v23; // x25
  BattleBuffData_BuffData_o *v24; // x21
  BattleLogicTask_o *v25; // x24
  int32_t LimitCount; // w20
  BattleCommandData_o *v27; // x26
  BattleComboData_o *v28; // x20
  BattleComboData_o *v29; // x1
  BattleCommandData_o *v30; // x2
  __int64 v31; // x26
  __int64 v32; // x20
  int32_t uniqueId; // w8
  __int64 v34; // x9
  System_Int32_array *v35; // x26
  System_String_o *CounterMessage; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  __int64 v47; // x9
  BattleLogicNomal___c_c *v48; // x0
  System_Action_object__o *_9__21_1; // x20
  Il2CppObject *v50; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct BattleLogic_o *logic; // x8
  BattleLogicNomal___c_c *v59; // x0
  System_Action_object__o *_9__21_0; // x19
  Il2CppObject *v61; // x20
  struct BattleLogicNomal___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  BattleLogicNomal_o *v70; // [xsp+8h] [xbp-A8h]
  _BOOL4 v71; // [xsp+14h] [xbp-9Ch]
  int32_t SvtId; // [xsp+18h] [xbp-98h]
  int32_t counterId; // [xsp+1Ch] [xbp-94h]
  SkillLvMaster_o *MasterData_object; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v76; // [xsp+30h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // [xsp+38h] [xbp-78h]
  char v78; // [xsp+48h] [xbp-68h]
  int32_t type; // [xsp+4Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4E7AA11 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1D0F0B4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1D0F0B4(&BattleComboData_TypeInfo);
    sub_1D0F0B4(&BattleCommandData_TypeInfo);
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&BattleSkillInfoData_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___80298944);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__taskCounterFunc_b__21_1__);
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    byte_4E7AA11 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  MasterData_object = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !data )
    goto LABEL_84;
  v13 = 312;
  if ( isEnemy )
    v13 = 320;
  v14 = *(__int64 *)((char *)&data->klass + v13);
  v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !v14 )
    goto LABEL_84;
  v15 = *(_QWORD *)(v14 + 24);
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    if ( isEnemy )
      v17 = 3;
    else
      v17 = 2;
    type = v17;
    do
    {
      if ( v16 >= (unsigned int)v15 )
LABEL_85:
        sub_1D0F314(Instance);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v14 + 4 * v16 + 32), 0);
      if ( Instance )
      {
        v18 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v18, 0);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v18->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0);
              if ( Instance )
              {
                v19 = (BattleServantData_o *)Instance;
                if ( v18->fields.isEnemy != *(unsigned __int8 *)(Instance + 515) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
                  Instance = BattleServantData__isAliveLogic(v19, 0, 0);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v18->fields.buffData;
                    if ( !Instance )
                      goto LABEL_84;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v18,
                                          v19,
                                          0,
                                          0);
                    if ( !Instance )
                      goto LABEL_84;
                    v20 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v70 = this;
                      v76 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_58748036(
                        v76,
                        v20,
                        (const MethodInfo_3806C84 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___80298944);
                      monitor = v20[1].monitor;
                      v22 = isSkillCounter;
                      if ( (int)monitor >= 1 )
                      {
                        v23 = 4;
                        v78 = 1;
                        v71 = v6;
                        do
                        {
                          if ( v23 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_85;
                          v24 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v20->klass + v23);
                          if ( !v22 )
                            goto LABEL_88;
                          if ( !v24 )
                            goto LABEL_84;
                          if ( v24->fields.isSkillReaction )
                          {
LABEL_88:
                            v25 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v25, 0);
                            if ( !v25 )
                              goto LABEL_84;
                            BattleLogicTask__setActor(v25, type, v18->fields.uniqueId, 0);
                            BattleLogicTask__setTarget(v25, v18->fields.wasAttackTargetId, 0);
                            Instance = (__int64)v18->fields.buffData;
                            if ( !Instance )
                              goto LABEL_84;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v24, 1, 0);
                            if ( (Instance & 1) != 0 )
                            {
                              v18->fields.overkillTargetId = -1;
                              if ( !v24 )
                                goto LABEL_84;
                              if ( v24->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v25,
                                  v24->fields.counterId,
                                  v24->fields.counterLv,
                                  v24->fields.counterOc,
                                  1,
                                  0);
                              }
                              else
                              {
                                wasAttackTargetId = (unsigned int)v24->fields.counterId;
                                if ( v24->fields.isUseAttack )
                                {
                                  counterId = v24->fields.counterId;
                                  SvtId = BattleServantData__getSvtId(v18, 0);
                                  LimitCount = BattleServantData__getLimitCount(v18, 0);
                                  v27 = (BattleCommandData_o *)sub_1D0F300(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor_48086632(v27, counterId, SvtId, LimitCount, 0, -1, 0);
                                  BattleServantData__SetOverwriteSvtCardType(v18, v27, 0);
                                  BattleServantData__AddServantCommandCard(v18, v24->fields.counterId, 0);
                                  v28 = (BattleComboData_o *)sub_1D0F300(BattleComboData_TypeInfo);
                                  BattleComboData___ctor(v28, 0);
                                  v29 = v28;
                                  v22 = isSkillCounter;
                                  v30 = v27;
                                  v6 = v71;
                                  BattleLogicTask__setActionCommand(v25, v29, v30, 0, 0);
                                }
                                else
                                {
                                  Instance = (__int64)MasterData_object;
                                  if ( !MasterData_object )
                                    goto LABEL_84;
                                  Instance = (__int64)SkillLvMaster__GetEntity(
                                                        MasterData_object,
                                                        wasAttackTargetId,
                                                        v24->fields.counterLv,
                                                        0);
                                  if ( !Instance )
                                  {
                                    v6 = v71;
                                    goto LABEL_60;
                                  }
                                  v31 = Instance;
                                  v32 = sub_1D0F300(BattleSkillInfoData_TypeInfo);
                                  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v32, 0);
                                  if ( !v32 )
                                    goto LABEL_84;
                                  uniqueId = v18->fields.uniqueId;
                                  v34 = *(_QWORD *)v32;
                                  *(_QWORD *)(v32 + 16) = 20;
                                  *(_DWORD *)(v32 + 24) = uniqueId;
                                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v34 + 376))(
                                    v32,
                                    *(unsigned int *)(v31 + 16),
                                    *(_QWORD *)(v34 + 384));
                                  *(_DWORD *)(v32 + 36) = *(_DWORD *)(v31 + 20);
                                  Instance = sub_1D0F15C(int___TypeInfo, 1);
                                  if ( !Instance )
                                    goto LABEL_84;
                                  v35 = (System_Int32_array *)Instance;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_85;
                                  *(_DWORD *)(Instance + 32) = v18->fields.wasAttackTargetId;
                                  Instance = sub_1D0F15C(int___TypeInfo, 1);
                                  if ( !Instance )
                                    goto LABEL_84;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_85;
                                  *(_DWORD *)(Instance + 32) = v18->fields.uniqueId;
                                  BattleLogicTask__setActionSkill(
                                    v25,
                                    (BattleSkillInfoData_o *)v32,
                                    v35,
                                    (System_Int32_array *)Instance,
                                    1,
                                    0,
                                    0);
                                  v6 = v71;
                                  v22 = isSkillCounter;
                                }
                              }
                              Instance = (__int64)v77;
                              if ( !v77 )
                                goto LABEL_84;
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v77,
                                                    v24->fields.buffId,
                                                    (const MethodInfo_3535B7C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_84;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0);
                              BattleLogicTask__setMessage(v25, CounterMessage, 2, 0);
                              v25->fields.isCounter = 1;
                              if ( (v78 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v25,
                                  v18,
                                  (BattleBuffData_BuffData_array *)v20,
                                  0);
                              if ( !v10 )
                                goto LABEL_84;
                              items = v10->fields._items;
                              v44 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_84;
                              size = v10->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v25,
                                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v46 = &items->obj.klass + size;
                                v10->fields._size = size + 1;
                                v46[4] = (Il2CppClass *)v25;
                                sub_1D0F058(
                                  (GrandQuestFolderBoardItem_o *)(v46 + 4),
                                  (int32_t)v25,
                                  v37,
                                  v38,
                                  v39,
                                  v40,
                                  v41,
                                  v42);
                              }
                              Instance = (__int64)v76;
                              if ( !v76 )
                                goto LABEL_84;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v76,
                                           (Il2CppObject *)v24,
                                           (const MethodInfo_3807454 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v78 = 0;
                            }
                          }
LABEL_60:
                          LODWORD(monitor) = v20[1].monitor;
                          v47 = v23 - 3;
                          ++v23;
                        }
                        while ( v47 < (int)monitor );
                      }
                      v48 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v48 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v70;
                      _9__21_1 = (System_Action_object__o *)v48->static_fields->__9__21_1;
                      if ( !_9__21_1 )
                      {
                        if ( !v48->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v48);
                          v48 = BattleLogicNomal___c_TypeInfo;
                        }
                        v50 = (Il2CppObject *)v48->static_fields->__9;
                        _9__21_1 = (System_Action_object__o *)sub_1D0F300(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__21_1,
                          v50,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__21_1__,
                          0);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__21_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__21_1;
                        sub_1D0F058(
                          (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_1,
                          (int32_t)_9__21_1,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56,
                          v57);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v76,
                        (System_Action_T__o *)_9__21_1,
                        (const MethodInfo_323AF0C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v15) = *(_DWORD *)(v14 + 24);
    }
    while ( (__int64)++v16 < (int)v15 );
  }
  if ( !v10 )
    goto LABEL_84;
  if ( v10->fields._size < 1 )
    goto LABEL_76;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_84:
    sub_1D0F30C(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0);
LABEL_76:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_84;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v10,
    1,
    0);
  BattleData__ResetWasAttackTargetId(data, 0);
  v59 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v59 = BattleLogicNomal___c_TypeInfo;
  }
  _9__21_0 = (System_Action_object__o *)v59->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = BattleLogicNomal___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__21_0 = (System_Action_object__o *)sub_1D0F300(System_Action_BattleLogicTask__TypeInfo);
    System_Action_object____ctor(_9__21_0, v61, Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__, 0);
    v62 = BattleLogicNomal___c_TypeInfo->static_fields;
    v62->__9__21_0 = (struct System_Action_BattleLogicTask__o *)_9__21_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v62->__9__21_0, (int32_t)_9__21_0, v63, v64, v65, v66, v67, v68);
  }
  System_Collections_Generic_List_object___ForEach(
    v10,
    (System_Action_T__o *)_9__21_0,
    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskPlayMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        System_String_o *motionName,
        UnityEngine_Transform_o *Tr,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4E7AA1C & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E7AA1C = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_1D0F300(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v9 + 128) = gameObject;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 128), (int32_t)gameObject, v13, v14, v15, v16, v17, v18);
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
    sub_1D0F30C(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v9;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v29 + 4), v9, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  bool v25; // w23
  System_String_o *v26; // x0
  BattleData_o *v27; // x8
  System_String_o *v28; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v30; // x2
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  int32_t uniqueId; // w2
  System_String_o *v34; // x20
  BattleLogicTask_o *v35; // x0
  System_String_o *v36; // x1
  struct BattleData_o *v37; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v39; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v41; // x2
  Il2CppObject *v42; // x0
  System_String_o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int v55; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4E7AA1D & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_2905/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_1D0F0B4(&StringLiteral_8858/*"MOTION_ENTRY"*/);
    sub_1D0F0B4(&StringLiteral_2903/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_1D0F0B4(&StringLiteral_2904/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_1D0F0B4(&StringLiteral_8861/*"MOTION_ENTRY_TAC"*/);
    byte_4E7AA1D = 1;
  }
  v9 = StringLiteral_8861/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_8858/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_1D0F300(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0);
  if ( !v12 )
    goto LABEL_30;
  v15 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v15, 0);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v12 + 128) = gameObject;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 128), (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
  if ( !svtData )
    goto LABEL_30;
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
          v25 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2904/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0);
LABEL_23:
              v43 = v26;
              BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, 0);
              v35 = (BattleLogicTask_o *)v12;
              v36 = v43;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v25 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2903/*"BATTLE_SUBENTRY_ENEMY"*/, 0);
          v37 = this->fields.data;
          if ( !v37 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v37->fields._EnemyCountStartValue_k__BackingField;
          v39 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v37, 0);
          v55 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v41)
              + EnemyCountStartValue_k__BackingField;
          v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
          v26 = System_String__Format(v39, v42, 0);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1D0F30C(battle_ent, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2905/*"BATTLE_SUBENTRY_PLAYER"*/, 0);
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_30;
  v28 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v27, 0);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v30);
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v32 = System_String__Format(v28, v31, 0);
  uniqueId = svtData->fields.uniqueId;
  v34 = v32;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, 0);
  v35 = (BattleLogicTask_o *)v12;
  v36 = v34;
LABEL_24:
  BattleLogicTask__setMessage(v35, v36, 1, 0);
  if ( !v11 )
    goto LABEL_30;
  items = v11->fields._items;
  v51 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v53[4] = (Il2CppClass *)v12;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v53 + 4), v12, v44, v45, v46, v47, v48, v49);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  Il2CppObject *v11; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct BattleData_o *data; // x8
  struct BattleCommandData_array *selectcommandlist; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v46; // x8
  int32_t v47; // w9
  int32_t _7__wrap7; // w8
  int v49; // w9
  int32_t _7__wrap4; // w8
  int v51; // w9
  bool result; // w0
  GrandQuestFolderBoardItem_o *p__7__wrap3; // x8
  struct BattleCommandData_array *v54; // x10
  struct BattleCommandData_array *_7__wrap3; // t1
  int32_t max_length; // w11
  BattleCommandData_o *v57; // x19
  BattleData_o *v58; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  Il2CppObject *ServantData; // x20
  System_Collections_Generic_List_object__o *selectSvtList_5__2; // x0
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x8
  _BOOL8 IsEnableToAttack; // x0
  __int64 v73; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v74; // x20
  BattleLogicNomal___c_c *v75; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v76; // x19
  System_Func_object__int__o *_9__26_1; // x21
  Il2CppObject *v78; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v86; // x0
  __int64 v87; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v88; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v90; // x9
  int32_t *p_offset; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x0
  __int64 v101; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v102; // x8
  __int64 v103; // x0
  __int64 v104; // x1
  BattleData_o *v105; // x0
  struct BattleLogicNomal___c__DisplayClass26_0_o *_8__1; // x19
  System_Collections_Generic_IEnumerable_T__o *FieldAliveServantArray; // x21
  System_Collections_Generic_List_object__o *v108; // x20
  __int64 v109; // x0
  __int64 v110; // x1
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  System_Collections_Generic_List_object__o *v117; // x19
  Il2CppObject *v118; // x21
  System_Action_object__o *v119; // x20
  __int64 v120; // x0
  __int64 v121; // x1
  BattleCommandData_o *v122; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  __int64 v130; // x0
  __int64 v131; // x1
  struct BattleData_o *v132; // x8
  BattleCommandData_o *notSelectedCommand_5__3; // x0
  __int64 v134; // x1
  struct BattleCommandData_o *v135; // x0
  __int64 v136; // x0
  __int64 v137; // x1
  struct BattleLogicNomal___c__DisplayClass26_0_o *v138; // x8
  System_Collections_Generic_List_object__o *otherSvtList; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v140; // x9
  __int128 v141; // q0
  struct System_Collections_Generic_List_Enumerator_BattleServantData__o *p__7__wrap8; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v149; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v150; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v151; // x8
  __int64 v152; // x9
  int32_t *v153; // x10
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x1
  BattleSkillInfoData_o *v157; // x19
  BattleLogicSkill_o *logicskill; // x20
  __int64 v159; // x0
  __int64 v160; // x1
  struct BattleLogicTask_array *v161; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  struct BattleLogicTask_array *_7__wrap6; // x10
  unsigned int v170; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v172; // x8
  __int64 v173; // x9
  int *v174; // x10
  __int64 v175; // x0
  const MethodInfo *v176; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v177; // x0
  int32_t v178; // w2
  int32_t v179; // w3
  System_String_o *v180; // x4
  int32_t v181; // w5
  int64_t v182; // x6
  System_String_o *v183; // x7
  struct BattleLogicTask_o *v184; // x1
  const MethodInfo *v185; // x1
  BattleServantData_o *current; // x19
  _BOOL8 v187; // x0
  __int64 v188; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v189; // x20
  BattleLogicNomal___c_c *v190; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v191; // x19
  System_Func_object__int__o *_9__26_2; // x21
  Il2CppObject *v193; // x22
  struct BattleLogicNomal___c_StaticFields *v194; // x0
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v201; // x0
  __int64 v202; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v203; // x20
  System_Linq_IOrderedEnumerable_TSource__c *v204; // x8
  __int64 v205; // x9
  int32_t *v206; // x10
  __int64 v207; // x0
  __int64 v208; // x0
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  __int64 v215; // x0
  __int64 v216; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v217; // x8
  __int64 v218; // x0
  __int64 v219; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v220; // x8
  BattleData_o *v221; // x0
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v222; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v223; // x8
  __int64 v224; // x9
  int32_t *v225; // x10
  __int64 v226; // x0
  __int64 v227; // x0
  __int64 v228; // x1
  BattleSkillInfoData_o *v229; // x19
  BattleLogicSkill_o *v230; // x20
  __int64 v231; // x0
  __int64 v232; // x1
  struct BattleLogicTask_array *v233; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v234; // x0
  int32_t v235; // w2
  int32_t v236; // w3
  System_String_o *v237; // x4
  int32_t v238; // w5
  int64_t v239; // x6
  System_String_o *v240; // x7
  struct BattleLogicTask_array *v241; // x10
  unsigned int v242; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v243; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v244; // x8
  __int64 v245; // x9
  int *v246; // x10
  __int64 v247; // x0
  const MethodInfo *v248; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v249; // x0
  int32_t v250; // w2
  int32_t v251; // w3
  System_String_o *v252; // x4
  int32_t v253; // w5
  int64_t v254; // x6
  System_String_o *v255; // x7
  struct BattleLogicTask_o *v256; // x1
  const MethodInfo *v257; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v258[2]; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v259; // [xsp+48h] [xbp-78h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o **v260; // [xsp+50h] [xbp-70h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v261; // [xsp+58h] [xbp-68h] BYREF

  v8 = this;
  v261 = this;
  if ( (byte_4E7AA38 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_BattleServantData__TypeInfo);
    sub_1D0F0B4(&BattleCommandData_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1D0F0B4(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData___ctor___80306928);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__);
    sub_1D0F0B4(&Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__);
    sub_1D0F0B4(&BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *)sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    byte_4E7AA38 = 1;
  }
  v259 = 0;
  v260 = &v261;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    _7__wrap4 = v8->fields.__7__wrap4;
    v8->fields.__1__state = -5;
    v51 = _7__wrap4 + 1;
    v8->fields.__7__wrap4 = _7__wrap4 + 1;
    goto LABEL_144;
  }
  if ( _1__state == 1 )
  {
    _7__wrap7 = v8->fields.__7__wrap7;
    v8->fields.__1__state = -3;
    v49 = _7__wrap7 + 1;
    v8->fields.__7__wrap7 = _7__wrap7 + 1;
    goto LABEL_83;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v11 = (Il2CppObject *)sub_1D0F300(BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v11, 0);
  v12 = v261;
  v261->fields.__8__1 = (struct BattleLogicNomal___c__DisplayClass26_0_o *)v11;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v20 = v261;
  v261->fields._selectSvtList_5__2 = (struct System_Collections_Generic_List_BattleServantData__o *)v19;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v20->fields._selectSvtList_5__2,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !_4__this )
    sub_1D0F30C(v27, v28);
  data = _4__this->fields.data;
  if ( !data )
    sub_1D0F30C(v27, v28);
  selectcommandlist = data->fields.selectcommandlist;
  v37 = v261;
  v261->fields.__7__wrap3 = selectcommandlist;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v37->fields.__7__wrap3,
    (int32_t)selectcommandlist,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v46 = v261;
  v47 = 0;
  v261->fields.__7__wrap4 = 0;
LABEL_14:
  _7__wrap3 = v46->fields.__7__wrap3;
  p__7__wrap3 = (GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap3;
  v54 = _7__wrap3;
  if ( !_7__wrap3 )
    sub_1D0F30C(v38, v39);
  max_length = v54->max_length;
  if ( v47 < max_length )
  {
    if ( v47 >= (unsigned int)max_length )
      sub_1D0F314(v38);
    if ( !_4__this )
      sub_1D0F30C(v38, v39);
    v57 = v54->m_Items[v47];
    if ( !v57 )
      sub_1D0F30C(v38, v39);
    v58 = _4__this->fields.data;
    if ( !v58 )
      sub_1D0F30C(0, v39);
    ServantData = (Il2CppObject *)BattleData__getServantData(v58, v57->fields.uniqueId, 0);
    selectSvtList_5__2 = (System_Collections_Generic_List_object__o *)v261->fields._selectSvtList_5__2;
    if ( !selectSvtList_5__2 )
      sub_1D0F30C(0, v59);
    items = selectSvtList_5__2->fields._items;
    v69 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++selectSvtList_5__2->fields._version;
    if ( !items )
      sub_1D0F30C(selectSvtList_5__2, v59);
    size = selectSvtList_5__2->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectSvtList_5__2,
        ServantData,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = &items->obj.klass + size;
      selectSvtList_5__2->fields._size = size + 1;
      v71[4] = (Il2CppClass *)ServantData;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v71 + 4), (int32_t)ServantData, v60, v61, v62, v63, v64, v65);
    }
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack((BattleServantData_o *)ServantData, v57, 0);
    if ( !ServantData )
      sub_1D0F30C(IsEnableToAttack, v73);
    v74 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
            (BattleServantData_o *)ServantData,
            v57,
            IsEnableToAttack,
            0,
            0);
    v75 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v75 = BattleLogicNomal___c_TypeInfo;
    }
    v76 = v261;
    _9__26_1 = (System_Func_object__int__o *)v75->static_fields->__9__26_1;
    if ( !_9__26_1 )
    {
      if ( !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75);
        v75 = BattleLogicNomal___c_TypeInfo;
      }
      v78 = (Il2CppObject *)v75->static_fields->__9;
      _9__26_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__26_1,
        v78,
        Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__,
        0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__26_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_1;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__26_1,
        (int32_t)_9__26_1,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
    }
    v86 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v74,
            (System_Func_TSource__TKey__o *)_9__26_1,
            (const MethodInfo_327F0D4 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    v88 = v86;
    if ( !v86 )
      sub_1D0F30C(0, v87);
    klass = v86->klass;
    v90 = *(unsigned __int16 *)&v86->klass->_2.rank;
    if ( *(_WORD *)&v86->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
      {
        --v90;
        p_offset += 4;
        if ( !v90 )
          goto LABEL_37;
      }
      v92 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_37:
      v92 = sub_1CE5430(v86, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
    }
    v93 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v92)(
            v88,
            *(_QWORD *)(v92 + 8));
    if ( !v76 )
      sub_1D0F30C(v93, v93);
    v76->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v93;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v76->fields.__7__wrap5, v93, v94, v95, v96, v97, v98, v99);
    v102 = v261;
    v261->fields.__1__state = -3;
    while ( 1 )
    {
      _7__wrap5 = v102->fields.__7__wrap5;
      if ( !_7__wrap5 )
        sub_1D0F30C(v100, v101);
      v172 = _7__wrap5->klass;
      v173 = *(unsigned __int16 *)&_7__wrap5->klass->_2.rank;
      if ( *(_WORD *)&_7__wrap5->klass->_2.rank )
      {
        v174 = &v172->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v174 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v173;
          v174 += 4;
          if ( !v173 )
            goto LABEL_91;
        }
        v175 = (__int64)&v172->vtable[*v174];
      }
      else
      {
LABEL_91:
        v175 = sub_1CE5430(_7__wrap5, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v175)(
              _7__wrap5,
              *(_QWORD *)(v175 + 8))
          & 1) == 0 )
      {
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally1(v261, v176);
        v177 = v261;
        v261->fields.__7__wrap5 = 0;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v177->fields.__7__wrap5, 0, v178, v179, v180, v181, v182, v183);
        v46 = v261;
        v47 = v261->fields.__7__wrap4 + 1;
        v261->fields.__7__wrap4 = v47;
        goto LABEL_14;
      }
      v150 = v261->fields.__7__wrap5;
      if ( !v150 )
        sub_1D0F30C(v261, v176);
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
            goto LABEL_75;
        }
        v154 = (__int64)&v151->vtable[*v153];
      }
      else
      {
LABEL_75:
        v154 = sub_1CE5430(
                 v261->fields.__7__wrap5,
                 System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
                 0);
      }
      v155 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v154)(
               v150,
               *(_QWORD *)(v154 + 8));
      if ( !_4__this )
        sub_1D0F30C(v155, v156);
      v157 = (BattleSkillInfoData_o *)v155;
      logicskill = _4__this->fields.logicskill;
      v159 = sub_1D0F15C(int___TypeInfo, 1);
      if ( !v157 )
        sub_1D0F30C(v159, v160);
      if ( !v159 )
        sub_1D0F30C(0, v160);
      if ( !*(_DWORD *)(v159 + 24) )
        sub_1D0F314(v159);
      *(_DWORD *)(v159 + 32) = v157->fields.svtUniqueId;
      if ( !logicskill )
        sub_1D0F30C(v159, v160);
      v161 = BattleLogicSkill__taskSkill(logicskill, v157, (System_Int32_array *)v159, 0, 0, 0, 0, 0, 0, v257);
      v162 = v261;
      v261->fields.__7__wrap6 = v161;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v162->fields.__7__wrap6,
        (int32_t)v161,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168);
      v8 = v261;
      v49 = 0;
      v261->fields.__7__wrap7 = 0;
LABEL_83:
      _7__wrap6 = v8->fields.__7__wrap6;
      if ( !_7__wrap6 )
        sub_1D0F30C(this, method);
      v170 = _7__wrap6->max_length;
      if ( v49 < (int)v170 )
        break;
      v8->fields.__7__wrap6 = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
      v102 = v261;
    }
    if ( v49 >= v170 )
      sub_1D0F314(this);
    v184 = _7__wrap6->m_Items[v49];
    v8->fields.__2__current = v184;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, (int32_t)v184, v2, v3, v4, v5, v6, v7);
    result = 1;
    v261->fields.__1__state = 1;
    return result;
  }
  p__7__wrap3->klass = 0;
  sub_1D0F058(p__7__wrap3, 0, v40, v41, v42, v43, v44, v45);
  if ( !_4__this )
    sub_1D0F30C(v103, v104);
  v105 = _4__this->fields.data;
  if ( !v105 )
    sub_1D0F30C(0, v104);
  _8__1 = v261->fields.__8__1;
  FieldAliveServantArray = (System_Collections_Generic_IEnumerable_T__o *)BattleData__GetFieldAliveServantArray(
                                                                            v105,
                                                                            1,
                                                                            0,
                                                                            0,
                                                                            0);
  v108 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_60144900(
    v108,
    FieldAliveServantArray,
    (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_BattleServantData___ctor___80306928);
  if ( !_8__1 )
    sub_1D0F30C(v109, v110);
  _8__1->fields.otherSvtList = (struct System_Collections_Generic_List_BattleServantData__o *)v108;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&_8__1->fields, (int32_t)v108, v111, v112, v113, v114, v115, v116);
  v118 = (Il2CppObject *)v261->fields.__8__1;
  v117 = (System_Collections_Generic_List_object__o *)v261->fields._selectSvtList_5__2;
  v119 = (System_Action_object__o *)sub_1D0F300(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v119,
    v118,
    Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__,
    0);
  if ( !v117 )
    sub_1D0F30C(v120, v121);
  System_Collections_Generic_List_object___ForEach(
    v117,
    (System_Action_T__o *)v119,
    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v122 = (BattleCommandData_o *)sub_1D0F300(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v122, 0);
  v123 = v261;
  v261->fields._notSelectedCommand_5__3 = v122;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v123->fields._notSelectedCommand_5__3,
    (int32_t)v122,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v132 = _4__this->fields.data;
  if ( !v132 )
    sub_1D0F30C(v130, v131);
  notSelectedCommand_5__3 = v261->fields._notSelectedCommand_5__3;
  if ( !notSelectedCommand_5__3 )
    sub_1D0F30C(0, v131);
  BattleCommandData__setCombo(notSelectedCommand_5__3, v132->fields.combodata, 0, 0);
  v135 = v261->fields._notSelectedCommand_5__3;
  if ( !v135 )
    sub_1D0F30C(0, v134);
  v135->fields._type = -1;
  BattleCommandData__ResetOverwriteSvtCardType(v135, 0);
  v138 = v261->fields.__8__1;
  if ( !v138 )
    sub_1D0F30C(v136, v137);
  otherSvtList = (System_Collections_Generic_List_object__o *)v138->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1D0F30C(0, v137);
  System_Collections_Generic_List_object___GetEnumerator(
    v258,
    otherSvtList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v140 = v261;
  v141 = *(_OWORD *)&v258[0].fields._list;
  p__7__wrap8 = &v261->fields.__7__wrap8;
  v258[1] = v258[0];
  v261->fields.__7__wrap8.fields._current = (struct BattleServantData_o *)v258[0].fields._current;
  *(_OWORD *)&v140->fields.__7__wrap8.fields._list = v141;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)p__7__wrap8, 0, v143, v144, v145, v146, v147, v148);
  v149 = v261;
  v261->fields.__1__state = -4;
LABEL_106:
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v149->fields.__7__wrap8,
          (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally2(v261, v185);
    v220 = v261;
    v261->fields.__7__wrap8.fields._list = 0;
    *(_QWORD *)&v220->fields.__7__wrap8.fields._index = 0;
    v220->fields.__7__wrap8.fields._current = 0;
    if ( !_4__this )
      sub_1D0F30C(v218, v219);
    v221 = _4__this->fields.data;
    if ( !v221 )
      sub_1D0F30C(0, v219);
    BattleData__ClearAllExecutedOnceConfirmCommandFunctionBuffList(v221, 0);
    return 0;
  }
  current = v261->fields.__7__wrap8.fields._current;
  v187 = BattleLogicNomal__IsEnableToAttack(current, v261->fields._notSelectedCommand_5__3, 0);
  if ( !current )
    sub_1D0F30C(v187, v188);
  v189 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
           current,
           v261->fields._notSelectedCommand_5__3,
           v187,
           1,
           0);
  v190 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v190 = BattleLogicNomal___c_TypeInfo;
  }
  v191 = v261;
  _9__26_2 = (System_Func_object__int__o *)v190->static_fields->__9__26_2;
  if ( !_9__26_2 )
  {
    if ( !v190->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v190);
      v190 = BattleLogicNomal___c_TypeInfo;
    }
    v193 = (Il2CppObject *)v190->static_fields->__9;
    _9__26_2 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_2,
      v193,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__,
      0);
    v194 = BattleLogicNomal___c_TypeInfo->static_fields;
    v194->__9__26_2 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_2;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v194->__9__26_2, (int32_t)_9__26_2, v195, v196, v197, v198, v199, v200);
  }
  v201 = System_Linq_Enumerable__OrderBy_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v189,
           (System_Func_TSource__TKey__o *)_9__26_2,
           (const MethodInfo_327F0D4 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v203 = v201;
  if ( !v201 )
    sub_1D0F30C(0, v202);
  v204 = v201->klass;
  v205 = *(unsigned __int16 *)&v201->klass->_2.rank;
  if ( *(_WORD *)&v201->klass->_2.rank )
  {
    v206 = &v204->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v206 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v205;
      v206 += 4;
      if ( !v205 )
        goto LABEL_119;
    }
    v207 = (__int64)&v204->vtable[*v206];
  }
  else
  {
LABEL_119:
    v207 = sub_1CE5430(v201, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v208 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v207)(
           v203,
           *(_QWORD *)(v207 + 8));
  if ( !v191 )
    sub_1D0F30C(v208, v208);
  v191->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v208;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v191->fields.__7__wrap5, v208, v209, v210, v211, v212, v213, v214);
  v217 = v261;
  v261->fields.__1__state = -5;
  while ( 1 )
  {
    v243 = v217->fields.__7__wrap5;
    if ( !v243 )
      sub_1D0F30C(v215, v216);
    v244 = v243->klass;
    v245 = *(unsigned __int16 *)&v243->klass->_2.rank;
    if ( *(_WORD *)&v243->klass->_2.rank )
    {
      v246 = &v244->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v246 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v245;
        v246 += 4;
        if ( !v245 )
          goto LABEL_152;
      }
      v247 = (__int64)&v244->vtable[*v246];
    }
    else
    {
LABEL_152:
      v247 = sub_1CE5430(v243, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v247)(
            v243,
            *(_QWORD *)(v247 + 8))
        & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally3(v261, v248);
      v249 = v261;
      v261->fields.__7__wrap5 = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v249->fields.__7__wrap5, 0, v250, v251, v252, v253, v254, v255);
      v149 = v261;
      goto LABEL_106;
    }
    v222 = v261->fields.__7__wrap5;
    if ( !v222 )
      sub_1D0F30C(v261, v248);
    v223 = v222->klass;
    v224 = *(unsigned __int16 *)&v222->klass->_2.rank;
    if ( *(_WORD *)&v222->klass->_2.rank )
    {
      v225 = &v223->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v225 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v224;
        v225 += 4;
        if ( !v224 )
          goto LABEL_136;
      }
      v226 = (__int64)&v223->vtable[*v225];
    }
    else
    {
LABEL_136:
      v226 = sub_1CE5430(
               v261->fields.__7__wrap5,
               System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
               0);
    }
    v227 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v226)(
             v222,
             *(_QWORD *)(v226 + 8));
    if ( !_4__this )
      sub_1D0F30C(v227, v228);
    v229 = (BattleSkillInfoData_o *)v227;
    v230 = _4__this->fields.logicskill;
    v231 = sub_1D0F15C(int___TypeInfo, 1);
    if ( !v229 )
      sub_1D0F30C(v231, v232);
    if ( !v231 )
      sub_1D0F30C(0, v232);
    if ( !*(_DWORD *)(v231 + 24) )
      sub_1D0F314(v231);
    *(_DWORD *)(v231 + 32) = v229->fields.svtUniqueId;
    if ( !v230 )
      sub_1D0F30C(v231, v232);
    v233 = BattleLogicSkill__taskSkill(v230, v229, (System_Int32_array *)v231, 0, 0, 0, 0, 0, 0, v257);
    v234 = v261;
    v261->fields.__7__wrap6 = v233;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v234->fields.__7__wrap6,
      (int32_t)v233,
      v235,
      v236,
      v237,
      v238,
      v239,
      v240);
    v8 = v261;
    v51 = 0;
    v261->fields.__7__wrap4 = 0;
LABEL_144:
    v241 = v8->fields.__7__wrap6;
    if ( !v241 )
      sub_1D0F30C(this, method);
    v242 = v241->max_length;
    if ( v51 < (int)v242 )
      break;
    v8->fields.__7__wrap6 = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
    v217 = v261;
  }
  if ( v51 >= v242 )
    sub_1D0F314(this);
  v256 = v241->m_Items[v51];
  v8->fields.__2__current = v256;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, (int32_t)v256, v2, v3, v4, v5, v6, v7);
  result = 1;
  v261->fields.__1__state = 2;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E7AA3C & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_4E7AA3C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1D0F300(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
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
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFB:
    case 2:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally3(this, method);
      goto LABEL_3;
    case 0xFFFFFFFC:
LABEL_3:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally2(this, method);
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally1(this, method);
      break;
    default:
      return;
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

  if ( (byte_4E7AA39 & 1) == 0 )
  {
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    byte_4E7AA39 = 1;
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
      v7 = sub_1CE5430(_7__wrap5, System_IDisposable_TypeInfo, 0);
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
  if ( (byte_4E7AA3A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    byte_4E7AA3A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap8,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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

  if ( (byte_4E7AA3B & 1) == 0 )
  {
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    byte_4E7AA3B = 1;
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
      v7 = sub_1CE5430(_7__wrap5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v7)(
      _7__wrap5,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7AA30 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicNomal___c_TypeInfo);
    byte_4E7AA30 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)BattleLogicNomal___c_TypeInfo->static_fields,
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

  if ( (byte_4E7AA31 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4E7AA31 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
}


bool BattleLogicNomal___c___CreateCommandBattle_b__30_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0);
}


int32_t BattleLogicNomal___c___CreateTaskAfterTreasureDvc_b__61_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  _BOOL4 isEnemy; // w20

  if ( (byte_4E7AA32 & 1) == 0 )
  {
    this = (BattleLogicNomal___c_o *)sub_1D0F0B4(&bool_TypeInfo);
    byte_4E7AA32 = 1;
  }
  if ( !a || !b )
    sub_1D0F30C(this, a);
  isEnemy = b->fields.isEnemy;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  return System_Boolean__CompareTo_66613488((_BYTE)a + 3, isEnemy, 0);
}


void BattleLogicNomal___c___CreateTaskAfterTreasureDvc_b__61_1(
        BattleLogicNomal___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  x->fields._IsBuffTriggeredTask_k__BackingField = 1;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_1(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_2(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__28_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1D0F30C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void BattleLogicNomal___c___createBuffAddPlayer_b__49_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1D0F30C(this, 0);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0);
}


bool BattleLogicNomal___c___createEndTurnEnemy_b__46_1(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return BattleBuffData_BuffData__IsChangeCommandCardTypeBuff(x, 0);
}


bool BattleLogicNomal___c___createEndTurnPlayer_b__43_1(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return BattleBuffData_BuffData__IsChangeCommandCardTypeBuff(x, 0);
}


void BattleLogicNomal___c___taskCounterFunc_b__21_0(
        BattleLogicNomal___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  x->fields._IsBuffTriggeredTask_k__BackingField = 1;
}


void BattleLogicNomal___c___taskCounterFunc_b__21_1(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
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

  if ( (byte_4E7AA33 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__Remove__);
    byte_4E7AA33 = 1;
  }
  otherSvtList = (System_Collections_Generic_List_object__o *)this->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1D0F30C(0, svt);
  System_Collections_Generic_List_object___Remove(
    otherSvtList,
    (Il2CppObject *)svt,
    (const MethodInfo_395D938 *)Method_System_Collections_Generic_List_BattleServantData__Remove__);
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

  if ( (byte_4E7AA34 & 1) == 0 )
  {
    sub_1D0F0B4(&BuffList_TypeInfo);
    sub_1D0F0B4(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_4E7AA34 = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_1D0F300(BattleBuffData_CheckInvokeBuff_TypeInfo);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v14; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v16; // x8

  v6 = this;
  if ( (byte_4E7AA35 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4E7AA35 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_323CE24 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1D0F30C(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v16[4] = (BattleLogicNomal_c *)buff;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)buff, v7, v8, v9, v10, v11, v12);
  }
}


void BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass30_0_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v14; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v16; // x8

  v6 = this;
  if ( (byte_4E7AA36 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4E7AA36 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_323CE24 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1D0F30C(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v16[4] = (BattleLogicNomal_c *)buff;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)buff, v7, v8, v9, v10, v11, v12);
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
    sub_1D0F30C(this, targetSvtData);
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
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_4E7AA37 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_4E7AA37 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_32866A4 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass30_0_o *)_4__this->fields.data) == 0 )
    sub_1D0F30C(this, id);
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
    sub_1D0F30C(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
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
    sub_1D0F30C(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
}


void BattleLogicNomal___c__DisplayClass57_0___ctor(
        BattleLogicNomal___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass57_0___shiftServantTaskReaction_b__0(
        BattleLogicNomal___c__DisplayClass57_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.uniqueId == this->fields.uniqueId;
}