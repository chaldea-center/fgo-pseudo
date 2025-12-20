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

  if ( (byte_4D2FB67 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask___TypeInfo);
    sub_1C94098(&BattleLogicTask_TypeInfo);
    byte_4D2FB67 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C94140(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0);
  this->fields.tmpShiftTask = v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.tmpShiftTask, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(this, method);
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
  System_Collections_Generic_IEnumerable_TSource__o **v79; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_Generic_List_object__o **v81; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x19
  System_Func_T__TResult__o *v83; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x19
  BattleLogicNomal___c_c *v85; // x8
  System_Func_object__bool__o *_9__30_9; // x23
  Il2CppObject *v87; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x19
  BattleLogicNomal___c_c *v97; // x8
  System_Func_object__object__o *_9__30_0; // x23
  Il2CppObject *v99; // x22
  struct BattleLogicNomal___c_StaticFields *v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  System_Func_object__object__o *v107; // x22
  __int64 v108; // x9
  BuffList_c *v109; // x8
  BattleLogicNomal___c_c *v110; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x23
  System_Func_T__TResult__o *_9__30_2; // x25
  Il2CppObject *v113; // x19
  struct BattleLogicNomal___c_StaticFields *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  System_Func_T__TResult__o *_9__30_3; // x19
  Il2CppObject *v122; // x22
  struct BattleLogicNomal___c_StaticFields *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  __int64 v137; // x8
  int64_t v138; // x19
  System_Action_object__object__o *v139; // x22
  BattleCommandData_o **v140; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v142; // x22
  __int64 v143; // x8
  __int64 v144; // x23
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  __int64 v151; // x19
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  System_Func_object__object__o *v158; // x19
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v166; // x24
  const MethodInfo *v167; // x1
  const MethodInfo *v168; // x5
  __int64 v169; // x8
  unsigned __int64 v170; // x22
  int v171; // w19
  int32_t v172; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v173; // x27
  __int64 v174; // x8
  __int64 v175; // x19
  __int64 v176; // x9
  int *v177; // x10
  __int64 v178; // x0
  __int64 v179; // x0
  __int64 v180; // x1
  __int64 v181; // x23
  __int64 v182; // x8
  __int64 v183; // x9
  int *v184; // x10
  __int64 v185; // x0
  __int64 v186; // x8
  __int64 v187; // x9
  int *v188; // x10
  __int64 v189; // x0
  Il2CppObject *v190; // x0
  Il2CppObject *v191; // x1
  __int64 v192; // x8
  __int64 v193; // x9
  int *v194; // x10
  __int64 v195; // x0
  unsigned __int64 v196; // x9
  int v197; // w19
  int v198; // w8
  BuffList_ACTION_array *v199; // x27
  int v200; // w8
  __int64 v201; // x8
  __int64 v202; // x19
  __int64 v203; // x9
  int *v204; // x10
  __int64 v205; // x0
  __int64 v206; // x1
  __int64 v207; // x23
  __int64 v208; // x8
  __int64 v209; // x9
  int *v210; // x10
  __int64 v211; // x0
  __int64 v212; // x8
  __int64 v213; // x9
  int *v214; // x10
  __int64 v215; // x0
  __int64 v216; // x1
  BattleServantData_o *v217; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_47070280; // x0
  __int64 v219; // x1
  BattleBuffData_BuffData_array *v220; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v222; // x26
  BattleBuffData_BuffData_o *v223; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v226; // x1
  __int64 v227; // x8
  __int64 v228; // x9
  int *v229; // x10
  __int64 v230; // x0
  __int64 v231; // x8
  __int64 v232; // x19
  __int64 v233; // x9
  int *v234; // x10
  __int64 v235; // x0
  __int64 v236; // x0
  __int64 v237; // x1
  __int64 v238; // x29
  BattleActionData_DamageData_o *v239; // x23
  __int64 v240; // x8
  __int64 v241; // x9
  int *v242; // x10
  __int64 v243; // x0
  __int64 v244; // x8
  __int64 v245; // x9
  int *v246; // x10
  __int64 v247; // x0
  __int64 v248; // x1
  BattleServantData_o *v249; // x27
  BattleLogic_o *v250; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v252; // x1
  BattleActionData_DamageData_o *v253; // x19
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v255; // x22
  BattleActionData_o *v256; // x0
  _BOOL8 v257; // x0
  __int64 v258; // x1
  BattleActionData_o *v259; // x8
  __int64 v260; // x8
  __int64 v261; // x9
  int *v262; // x10
  __int64 v263; // x0
  BattleActionData_o *v264; // x19
  BattleActionData_o *v265; // x19
  BattleActionData_o *v266; // x19
  struct BattleData_o *v267; // x8
  __int64 v268; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v270; // x19
  const MethodInfo *v271; // x5
  __int64 v272; // x8
  unsigned __int64 v273; // x26
  unsigned int v274; // w19
  int32_t v275; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x27
  __int64 v277; // x8
  __int64 v278; // x19
  __int64 v279; // x9
  int *v280; // x10
  __int64 v281; // x0
  __int64 v282; // x0
  __int64 v283; // x1
  __int64 v284; // x23
  __int64 v285; // x8
  __int64 v286; // x9
  int *v287; // x10
  __int64 v288; // x0
  __int64 v289; // x8
  __int64 v290; // x9
  int *v291; // x10
  __int64 v292; // x0
  Il2CppObject *v293; // x0
  Il2CppObject *v294; // x1
  __int64 v295; // x8
  __int64 v296; // x9
  int *v297; // x10
  __int64 v298; // x0
  unsigned __int64 v299; // x26
  int v300; // w19
  int v301; // w8
  BuffList_ACTION_array *v302; // x27
  int v303; // w8
  __int64 v304; // x8
  __int64 v305; // x19
  __int64 v306; // x9
  int *v307; // x10
  __int64 v308; // x0
  __int64 v309; // x1
  __int64 v310; // x23
  __int64 v311; // x8
  __int64 v312; // x9
  int *v313; // x10
  __int64 v314; // x0
  __int64 v315; // x8
  __int64 v316; // x9
  int *v317; // x10
  __int64 v318; // x0
  __int64 v319; // x1
  BattleServantData_o *v320; // x3
  BattleBuffData_BuffData_array *v321; // x0
  __int64 v322; // x1
  BattleBuffData_BuffData_array *v323; // x19
  il2cpp_array_size_t v324; // x8
  unsigned __int64 v325; // x22
  BattleLogicFunction_o *v326; // x0
  __int64 v327; // x8
  __int64 v328; // x9
  int *v329; // x10
  __int64 v330; // x0
  __int64 v331; // x8
  __int64 v332; // x19
  __int64 v333; // x9
  int *v334; // x10
  __int64 v335; // x0
  __int64 v336; // x0
  __int64 v337; // x1
  __int64 v338; // x23
  __int64 v339; // x8
  __int64 v340; // x9
  int *v341; // x10
  __int64 v342; // x0
  __int64 v343; // x8
  __int64 v344; // x9
  int *v345; // x10
  __int64 v346; // x0
  __int64 v347; // x0
  __int64 v348; // x1
  __int64 v349; // x8
  __int64 v350; // x9
  int *v351; // x10
  __int64 v352; // x0
  _BOOL8 v353; // x0
  __int64 v354; // x1
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v357; // x0
  BattleActionData_o *v358; // x8
  BattleLogic_o *v359; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v360; // x22
  System_Nullable_int__o v361; // x4
  __int64 v362; // x1
  __int64 v363; // x0
  const MethodInfo *v364; // [xsp+0h] [xbp-120h]
  bool v365; // [xsp+14h] [xbp-10Ch]
  __int64 *v366; // [xsp+18h] [xbp-108h]
  __int64 v367; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v368; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  BattleBuffData_o *actSvtBuffData; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_Dictionary_object__object__o *v371; // [xsp+40h] [xbp-E0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v372; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+50h] [xbp-D0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+50h] [xbp-D0h]
  Il2CppObject *item; // [xsp+58h] [xbp-C8h]
  bool v376; // [xsp+64h] [xbp-BCh]
  __int64 v377; // [xsp+68h] [xbp-B8h]
  __int64 v378; // [xsp+70h] [xbp-B0h]
  BattleServantData_o **v379; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v380; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v381; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4D2FB51 & 1) == 0 )
  {
    sub_1C94098(&BuffList_ACTION___TypeInfo);
    sub_1C94098(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&BattleAddSkillTaskAfterCommandAttack_TypeInfo);
    sub_1C94098(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
    sub_1C94098(&BattleServantData___TypeInfo);
    sub_1C94098(&bool___TypeInfo);
    sub_1C94098(&BuffList_TypeInfo);
    sub_1C94098(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C94098(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_1C94098(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_1C94098(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C94098(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_1C94098(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C94098(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_1C94098(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__);
    sub_1C94098(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__);
    sub_1C94098(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__);
    sub_1C94098(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__);
    sub_1C94098(&BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
    sub_1C94098(&BattleLogicNomal___c_TypeInfo);
    byte_4D2FB51 = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = sub_1C942E4(BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass30_0___ctor((BattleLogicNomal___c__DisplayClass30_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_392;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( !task )
    goto LABEL_392;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_392;
  ServantData = BattleData__getServantData(data, ActorId, 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  v18 = (BattleServantData_o **)(v7 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)ServantData, v19, v20, v21, v22, v23, v24);
  v25 = (BattleActionData_o *)sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0);
  *baseActionData = v25;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)baseActionData, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v7 + 48) = v25;
  v32 = (BattleActionData_o **)(v7 + 48);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)v25, v33, v34, v35, v36, v37, v38);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  v40 = (BattleCommandData_o **)(v7 + 40);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)command, v41, v42, v43, v44, v45, v46);
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
  *(_QWORD *)(ActorId + 136) = motionMessage;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(ActorId + 136), (int32_t)motionMessage, v48, v49, v50, v51, v52, v53);
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
  v58 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1C942E4(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v58, 0);
  if ( !logic )
    goto LABEL_392;
  v59 = 0;
  v368 = task;
  targetId = v56;
  v60 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v58, task, v56, v59, 0);
  result = 0;
  if ( v60 )
    return result;
  v62 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &items->obj.klass + size;
    v62->fields._size = size + 1;
    v72[4] = (Il2CppClass *)item;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v72 + 4), (int32_t)item, v63, v64, v65, v66, v67, v68);
  }
  *(_QWORD *)(v7 + 56) = v62;
  v79 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 56), (int32_t)v62, v73, v74, v75, v76, v77, v78);
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
  ActorId = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v40, 0);
  v365 = (_DWORD)ActorId == 2;
  v380 = (BattleCommandData_o **)(v7 + 40);
  if ( (_DWORD)ActorId == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_392;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, targetId, 0);
    if ( !this->fields.data )
      goto LABEL_392;
    v80 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0,
                                                                  0));
    v81 = (System_Collections_Generic_List_object__o **)(v7 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v80,
                         (const MethodInfo_31E12DC *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_392;
    v82 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      targetId,
      (const MethodInfo_384F30C *)Method_System_Collections_Generic_List_int__Remove__);
    v83 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(
      v83,
      (Il2CppObject *)v7,
      Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__,
      0);
    v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v82,
                                                                 (System_Func_TSource__TResult__o *)v83,
                                                                 (const MethodInfo_31D03C0 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v85 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v85 = BattleLogicNomal___c_TypeInfo;
    }
    _9__30_9 = (System_Func_object__bool__o *)v85->static_fields->__9__30_9;
    if ( !_9__30_9 )
    {
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85);
        v85 = BattleLogicNomal___c_TypeInfo;
      }
      v87 = (Il2CppObject *)v85->static_fields->__9;
      _9__30_9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__30_9, v87, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__, 0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__30_9 = (struct System_Func_BattleServantData__bool__o *)_9__30_9;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_9,
        (int32_t)_9__30_9,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v84,
                         (System_Func_TSource__bool__o *)_9__30_9,
                         (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v81 )
      goto LABEL_392;
    v79 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v81,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v40 = (BattleCommandData_o **)(v7 + 40);
  }
  if ( !*v79 )
    goto LABEL_392;
  ActorId = (__int64)*v40;
  if ( !*v40 )
    goto LABEL_392;
  *(_DWORD *)(ActorId + 128) = (*v79)[1].monitor;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll((BattleCommandData_o *)ActorId, 0);
  v96 = *v79;
  v376 = IsForceAttackFunctionTargetAll;
  v97 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v97 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__object__o *)v97->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v97->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v97);
      v97 = BattleLogicNomal___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v97->static_fields->__9;
    _9__30_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__30_0, v99, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__, 0);
    v100 = BattleLogicNomal___c_TypeInfo->static_fields;
    v100->__9__30_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__30_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v100->__9__30_0, (int32_t)_9__30_0, v101, v102, v103, v104, v105, v106);
  }
  v107 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_object__object____ctor(
    v107,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__,
    0);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v96,
                       (System_Func_TSource__TKey__o *)_9__30_0,
                       (System_Func_TSource__TElement__o *)v107,
                       (const MethodInfo_31DD2C0 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v108 = *(_QWORD *)(v7 + 24);
  v371 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  if ( !v108 )
    goto LABEL_392;
  v109 = BuffList_TypeInfo;
  actSvtBuffData = *(BattleBuffData_o **)(v108 + 848);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v109 = BuffList_TypeInfo;
  }
  v110 = BattleLogicNomal___c_TypeInfo;
  v366 = (__int64 *)v79;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v109->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v110 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_2 = (System_Func_T__TResult__o *)v110->static_fields->__9__30_2;
  if ( !_9__30_2 )
  {
    if ( !v110->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v110);
      v110 = BattleLogicNomal___c_TypeInfo;
    }
    v113 = (Il2CppObject *)v110->static_fields->__9;
    _9__30_2 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__30_2,
      v113,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__,
      0);
    v114 = BattleLogicNomal___c_TypeInfo->static_fields;
    v114->__9__30_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__30_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v114->__9__30_2, (int32_t)_9__30_2, v115, v116, v117, v118, v119, v120);
    v110 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v110->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v110);
    v110 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_3 = (System_Func_T__TResult__o *)v110->static_fields->__9__30_3;
  if ( !_9__30_3 )
  {
    if ( !v110->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v110);
      v110 = BattleLogicNomal___c_TypeInfo;
    }
    v122 = (Il2CppObject *)v110->static_fields->__9;
    _9__30_3 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Int32Enum__object____ctor(_9__30_3, v122, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__, 0);
    v123 = BattleLogicNomal___c_TypeInfo->static_fields;
    v123->__9__30_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__30_3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v123->__9__30_3, (int32_t)_9__30_3, v124, v125, v126, v127, v128, v129);
  }
  v130 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
           CommandCodeBuffHash,
           (System_Func_TSource__TKey__o *)_9__30_2,
           (System_Func_TSource__TElement__o *)_9__30_3,
           (const MethodInfo_31DD074 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v7 + 32) = v130;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v130, v131, v132, v133, v134, v135, v136);
  v137 = *(_QWORD *)(v7 + 40);
  v372 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
  if ( !v137 )
    goto LABEL_392;
  v138 = *(_QWORD *)(v137 + 72);
  v139 = (System_Action_object__object__o *)sub_1C942E4(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v139,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__,
    0);
  v140 = (BattleCommandData_o **)(v7 + 40);
  ActorId = (__int64)actSvtBuffData;
  if ( !actSvtBuffData )
    goto LABEL_392;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    actSvtBuffData,
    v138,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v139,
    1,
    0);
  if ( !*v380 )
    goto LABEL_392;
  commandAssistId = (*v380)->fields.commandAssistId;
  v142 = (System_Action_object__object__o *)sub_1C942E4(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v142,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__,
    0);
  v143 = *(_QWORD *)(v7 + 40);
  if ( !v143 )
    goto LABEL_392;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    actSvtBuffData,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v142,
    1,
    *(_DWORD *)(v143 + 88),
    0);
  ActorId = sub_1C94140(bool___TypeInfo, 2);
  if ( !ActorId )
    goto LABEL_392;
  v144 = ActorId;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_393;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1C94140(BattleServantData___TypeInfo, 1);
  if ( !ActorId )
    goto LABEL_392;
  v151 = ActorId;
  ActorId = (__int64)item;
  if ( item )
  {
    ActorId = sub_1C941D4(item, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !ActorId )
    {
      v363 = sub_1C94314(0);
      sub_1C941C0(v363, 0);
    }
  }
  if ( !*(_DWORD *)(v151 + 24) )
    goto LABEL_393;
  *(_QWORD *)(v151 + 32) = item;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v151 + 32), (int32_t)item, v145, v146, v147, v148, v149, v150);
  *(_QWORD *)(v7 + 72) = v151;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 72), v151, v152, v153, v154, v155, v156, v157);
  v158 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_object__object____ctor(
    v158,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__,
    0);
  *(_QWORD *)(v7 + 64) = v158;
  v367 = v7 + 64;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 64), (int32_t)v158, v159, v160, v161, v162, v163, v164);
  v378 = sub_1C942E4(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v378,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__,
    0);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_392;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v166 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C942E4(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v166, v167);
  v169 = *(_QWORD *)(v144 + 24);
  v379 = v18;
  v377 = v144;
  if ( (int)v169 >= 1 )
  {
    v170 = 0;
    do
    {
      if ( v170 >= (unsigned int)v169 )
        goto LABEL_393;
      v171 = *(unsigned __int8 *)(v144 + v170 + 32);
      if ( *(_BYTE *)(v144 + v170 + 32) )
        v172 = 177;
      else
        v172 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v372,
                           actSvtBuffData,
                           v172,
                           *v380,
                           v168);
      if ( !v378 )
        goto LABEL_392;
      v173 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v378 + 24))(
                  *(_QWORD *)(v378 + 64),
                  v171 != 0,
                  v376,
                  *(_QWORD *)(v378 + 40));
      if ( !ActorId )
        goto LABEL_392;
      v174 = *(_QWORD *)ActorId;
      v175 = ActorId;
      v176 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v177 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v177 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v176;
          v177 += 4;
          if ( !v176 )
            goto LABEL_97;
        }
        v178 = v174 + 16LL * *v177 + 312;
      }
      else
      {
LABEL_97:
        v178 = sub_1C6A420(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v179 = (*(__int64 (__fastcall **)(__int64, _QWORD))v178)(v175, *(_QWORD *)(v178 + 8));
      v181 = v179;
      while ( 1 )
      {
        if ( !v181 )
          sub_1C942F0(v179, v180);
        v182 = *(_QWORD *)v181;
        v183 = *(unsigned __int16 *)(*(_QWORD *)v181 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v181 + 302LL) )
        {
          v184 = (int *)(*(_QWORD *)(v182 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v184 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v183;
            v184 += 4;
            if ( !v183 )
              goto LABEL_105;
          }
          v185 = v182 + 16LL * *v184 + 312;
        }
        else
        {
LABEL_105:
          v185 = sub_1C6A420(v181, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v185)(v181, *(_QWORD *)(v185 + 8)) & 1) == 0 )
          break;
        v186 = *(_QWORD *)v181;
        v187 = *(unsigned __int16 *)(*(_QWORD *)v181 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v181 + 302LL) )
        {
          v188 = (int *)(*(_QWORD *)(v186 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v188 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v187;
            v188 += 4;
            if ( !v187 )
              goto LABEL_112;
          }
          v189 = v186 + 16LL * *v188 + 312;
        }
        else
        {
LABEL_112:
          v189 = sub_1C6A420(v181, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v190 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v189)(v181, *(_QWORD *)(v189 + 8));
        if ( !v371 )
          sub_1C942F0(v190, v190);
        v191 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v371,
                 v190,
                 (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v191,
          (SkillLvMaster_o *)MasterData_object,
          *v380,
          v173,
          *v32,
          0,
          v166,
          v364);
      }
      v192 = *(_QWORD *)v181;
      v193 = *(unsigned __int16 *)(*(_QWORD *)v181 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v181 + 302LL) )
      {
        v194 = (int *)(*(_QWORD *)(v192 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v194 - 1) != System_IDisposable_TypeInfo )
        {
          --v193;
          v194 += 4;
          if ( !v193 )
            goto LABEL_120;
        }
        v195 = v192 + 16LL * *v194 + 312;
      }
      else
      {
LABEL_120:
        v195 = sub_1C6A420(v181, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v195)(v181, *(_QWORD *)(v195 + 8));
      v144 = v377;
      LODWORD(v169) = *(_DWORD *)(v377 + 24);
      ++v170;
    }
    while ( (__int64)v170 < (int)v169 );
    if ( (int)v169 >= 1 )
    {
      v196 = 0;
      while ( v196 < (unsigned int)v169 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v196;
        v197 = *(unsigned __int8 *)(v144 + v196 + 32);
        ActorId = sub_1C94140(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_392;
        v198 = *(_DWORD *)(ActorId + 24);
        v199 = (BuffList_ACTION_array *)ActorId;
        if ( v197 )
        {
          if ( !v198 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v198 == 1 )
            break;
          v200 = 120;
        }
        else
        {
          if ( !v198 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v198 == 1 )
            break;
          v200 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v200;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v378 + 24))(
                    *(_QWORD *)(v378 + 64),
                    v197 != 0,
                    v376,
                    *(_QWORD *)(v378 + 40));
        if ( !ActorId )
          goto LABEL_392;
        v201 = *(_QWORD *)ActorId;
        v202 = ActorId;
        v203 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v204 = (int *)(*(_QWORD *)(v201 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v204 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v203;
            v204 += 4;
            if ( !v203 )
              goto LABEL_142;
          }
          v205 = v201 + 16LL * *v204 + 312;
        }
        else
        {
LABEL_142:
          v205 = sub_1C6A420(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v207 = (*(__int64 (__fastcall **)(__int64, _QWORD))v205)(v202, *(_QWORD *)(v205 + 8));
        if ( !v207 )
          sub_1C942F0(0, v206);
        while ( 1 )
        {
          v208 = *(_QWORD *)v207;
          v209 = *(unsigned __int16 *)(*(_QWORD *)v207 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v207 + 302LL) )
          {
            v210 = (int *)(*(_QWORD *)(v208 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v210 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v209;
              v210 += 4;
              if ( !v209 )
                goto LABEL_149;
            }
            v18 = v379;
            v140 = v380;
            v211 = v208 + 16LL * *v210 + 312;
          }
          else
          {
LABEL_149:
            v18 = v379;
            v140 = v380;
            v211 = sub_1C6A420(v207, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v211)(v207, *(_QWORD *)(v211 + 8)) & 1) == 0 )
            break;
          v212 = *(_QWORD *)v207;
          v213 = *(unsigned __int16 *)(*(_QWORD *)v207 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v207 + 302LL) )
          {
            v214 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v214 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v213;
              v214 += 4;
              if ( !v213 )
                goto LABEL_156;
            }
            v215 = v212 + 16LL * *v214 + 312;
          }
          else
          {
LABEL_156:
            v215 = sub_1C6A420(v207, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v217 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v215)(v207, *(_QWORD *)(v215 + 8));
          if ( !*v18 )
            sub_1C942F0(0, v216);
          AttackSideEffectBuffList_47070280 = BattleServantData__getAttackSideEffectBuffList_47070280(
                                                *v18,
                                                v199,
                                                *v140,
                                                v217,
                                                0);
          v220 = AttackSideEffectBuffList_47070280;
          if ( !AttackSideEffectBuffList_47070280 )
            sub_1C942F0(0, v219);
          max_length = AttackSideEffectBuffList_47070280->max_length;
          if ( (int)max_length >= 1 )
          {
            v222 = 0;
            do
            {
              if ( v222 >= (unsigned int)max_length )
                sub_1C942F8(AttackSideEffectBuffList_47070280);
              if ( !*v32 )
                sub_1C942F0(0, v219);
              v223 = v220->m_Items[v222];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v32, 3, 0);
              if ( !logicfunction )
                sub_1C942F0(SideEffectActionData, v226);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v223,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v166,
                0,
                0);
              LODWORD(max_length) = v220->max_length;
              ++v222;
            }
            while ( (__int64)v222 < (int)max_length );
          }
        }
        v227 = *(_QWORD *)v207;
        v228 = *(unsigned __int16 *)(*(_QWORD *)v207 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v207 + 302LL) )
        {
          v229 = (int *)(*(_QWORD *)(v227 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v229 - 1) != System_IDisposable_TypeInfo )
          {
            --v228;
            v229 += 4;
            if ( !v228 )
              goto LABEL_171;
          }
          v230 = v227 + 16LL * *v229 + 312;
        }
        else
        {
LABEL_171:
          v230 = sub_1C6A420(v207, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v230)(v207, *(_QWORD *)(v230 + 8));
        v144 = v377;
        LODWORD(v169) = *(_DWORD *)(v377 + 24);
        v196 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v169 )
          goto LABEL_181;
      }
LABEL_393:
      sub_1C942F8(ActorId);
    }
  }
LABEL_181:
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0, 0);
  ActorId = (__int64)*v140;
  if ( !*v140 )
    goto LABEL_392;
  BattleCommandData__SetOverwriteRatesIndex((BattleCommandData_o *)ActorId, 0);
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1C942E4(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0, 0);
  if ( !v378 )
    goto LABEL_392;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v378 + 24))(
              *(_QWORD *)(v378 + 64),
              0,
              0,
              *(_QWORD *)(v378 + 40));
  if ( !ActorId )
    goto LABEL_392;
  v231 = *(_QWORD *)ActorId;
  v232 = ActorId;
  v233 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v234 = (int *)(*(_QWORD *)(v231 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v234 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v233;
      v234 += 4;
      if ( !v233 )
        goto LABEL_189;
    }
    v235 = v231 + 16LL * *v234 + 312;
  }
  else
  {
LABEL_189:
    v235 = sub_1C6A420(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v236 = (*(__int64 (__fastcall **)(__int64, _QWORD))v235)(v232, *(_QWORD *)(v235 + 8));
  v238 = v236;
  v239 = 0;
  while ( 1 )
  {
    if ( !v238 )
      sub_1C942F0(v236, v237);
    v240 = *(_QWORD *)v238;
    v241 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
    {
      v242 = (int *)(*(_QWORD *)(v240 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v242 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v241;
        v242 += 4;
        if ( !v241 )
          goto LABEL_197;
      }
      v243 = v240 + 16LL * *v242 + 312;
    }
    else
    {
LABEL_197:
      v243 = sub_1C6A420(v238, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v243)(v238, *(_QWORD *)(v243 + 8)) & 1) == 0 )
      break;
    v244 = *(_QWORD *)v238;
    v245 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
    {
      v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v246 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v245;
        v246 += 4;
        if ( !v245 )
          goto LABEL_204;
      }
      v247 = v244 + 16LL * *v246 + 312;
    }
    else
    {
LABEL_204:
      v247 = sub_1C6A420(v238, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v249 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v247)(v238, *(_QWORD *)(v247 + 8));
    v250 = this->fields.logic;
    if ( !v250 )
      sub_1C942F0(0, v248);
    DamageList = BattleLogic__GetDamageList(v250, *v18, v249, *v140, processArgsa, *v32, 0);
    v253 = DamageList;
    if ( v249 == (BattleServantData_o *)item )
      v239 = DamageList;
    if ( !v249 )
      sub_1C942F0(DamageList, v252);
    buffData = v249->fields.buffData;
    if ( !buffData )
      sub_1C942F0(DamageList, v252);
    if ( !buffData->fields.isNoDamage )
    {
      v255 = *v32;
      v256 = BattleBuffData__UseProgressingDoNotAct(v249->fields.buffData, v249, 0, 0);
      if ( !v255 )
        sub_1C942F0(v256, v256);
      BattleActionData__addSideEffectActionData(v255, v256, 1, 0);
    }
    if ( !*v18 )
      sub_1C942F0(0, v252);
    v257 = BattleServantData__checkPlayer(*v18, 0);
    v259 = *v32;
    if ( v257 )
    {
      if ( !v259 )
        sub_1C942F0(v257, v258);
      if ( !v259->fields.isCounter )
      {
        if ( !*v18 )
          sub_1C942F0(v257, v258);
        v249->fields.overkillTargetId = (*v18)->fields.uniqueId;
      }
    }
    else if ( !v259 )
    {
      sub_1C942F0(v257, v258);
    }
    BattleActionData__setDamageData(v259, v253, 0, 0, 0, 0);
  }
  v260 = *(_QWORD *)v238;
  v261 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
  {
    v262 = (int *)(*(_QWORD *)(v260 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v262 - 1) != System_IDisposable_TypeInfo )
    {
      --v261;
      v262 += 4;
      if ( !v261 )
        goto LABEL_226;
    }
    v263 = v260 + 16LL * *v262 + 312;
  }
  else
  {
LABEL_226:
    v263 = sub_1C6A420(v238, System_IDisposable_TypeInfo, 0);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v263)(v238, *(_QWORD *)(v263 + 8));
  if ( !*(_QWORD *)v367 )
    goto LABEL_392;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v367 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v367 + 64LL),
    item,
    *(_QWORD *)(*(_QWORD *)v367 + 40LL));
  ActorId = (__int64)*v140;
  if ( !*v140 )
    goto LABEL_392;
  v264 = *v32;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0);
  if ( !v264 )
    goto LABEL_392;
  v264->fields.type = ActorId;
  ActorId = (__int64)*v32;
  if ( !*v32 )
    goto LABEL_392;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v140, 0);
  v9 = *v140;
  if ( !*v140 )
    goto LABEL_392;
  v265 = *v32;
  if ( !*v32 )
    goto LABEL_392;
  v265->fields.actionIndex = v9->fields.actionIndex;
  ActorId = (__int64)*v18;
  if ( !*v18 )
    goto LABEL_392;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v9, 0);
  v265->fields.motionId = ActorId;
  if ( !v239 )
    goto LABEL_392;
  v266 = *v32;
  ActorId = BattleActionData_DamageData__getAttackCount(v239, 0);
  if ( !v266 )
    goto LABEL_392;
  v266->fields.attackcount = ActorId;
  v267 = this->fields.data;
  v268 = v377;
  if ( !v267 )
    goto LABEL_392;
  perf = v267->fields.perf;
  if ( !perf )
    goto LABEL_392;
  if ( !*v140 )
    goto LABEL_392;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_392;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v140)->fields.actionIndex,
    0);
  if ( !*v18 )
    goto LABEL_392;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_392;
  v270 = *v32;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v18)->fields.uniqueId, targetId, 0);
  if ( !v270 )
    goto LABEL_392;
  v270->fields.prevattackme = ActorId & 1;
  v272 = *(_QWORD *)(v377 + 24);
  if ( (int)v272 >= 1 )
  {
    v273 = 0;
    do
    {
      if ( v273 >= (unsigned int)v272 )
        goto LABEL_393;
      v274 = *(unsigned __int8 *)(v268 + v273 + 32);
      if ( *(_BYTE *)(v268 + v273 + 32) )
        v275 = 178;
      else
        v275 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v372,
                                    actSvtBuffData,
                                    v275,
                                    *v380,
                                    v271);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v378 + 24))(
                  *(_QWORD *)(v378 + 64),
                  v274,
                  v376,
                  *(_QWORD *)(v378 + 40));
      if ( !ActorId )
        goto LABEL_392;
      v277 = *(_QWORD *)ActorId;
      v278 = ActorId;
      v279 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v280 = (int *)(*(_QWORD *)(v277 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v280 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v279;
          v280 += 4;
          if ( !v279 )
            goto LABEL_255;
        }
        v281 = v277 + 16LL * *v280 + 312;
      }
      else
      {
LABEL_255:
        v281 = sub_1C6A420(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v282 = (*(__int64 (__fastcall **)(__int64, _QWORD))v281)(v278, *(_QWORD *)(v281 + 8));
      v284 = v282;
      while ( 1 )
      {
        if ( !v284 )
          sub_1C942F0(v282, v283);
        v285 = *(_QWORD *)v284;
        v286 = *(unsigned __int16 *)(*(_QWORD *)v284 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v284 + 302LL) )
        {
          v287 = (int *)(*(_QWORD *)(v285 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v287 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v286;
            v287 += 4;
            if ( !v286 )
              goto LABEL_263;
          }
          v288 = v285 + 16LL * *v287 + 312;
        }
        else
        {
LABEL_263:
          v288 = sub_1C6A420(v284, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v288)(v284, *(_QWORD *)(v288 + 8)) & 1) == 0 )
          break;
        v289 = *(_QWORD *)v284;
        v290 = *(unsigned __int16 *)(*(_QWORD *)v284 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v284 + 302LL) )
        {
          v291 = (int *)(*(_QWORD *)(v289 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v291 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v290;
            v291 += 4;
            if ( !v290 )
              goto LABEL_270;
          }
          v292 = v289 + 16LL * *v291 + 312;
        }
        else
        {
LABEL_270:
          v292 = sub_1C6A420(v284, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v293 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v292)(v284, *(_QWORD *)(v292 + 8));
        if ( !v371 )
          sub_1C942F0(v293, v293);
        v294 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v371,
                 v293,
                 (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v294,
          (SkillLvMaster_o *)MasterData_object,
          *v380,
          TargetCommandCodeBuffList,
          *v32,
          1,
          v166,
          v364);
      }
      v295 = *(_QWORD *)v284;
      v296 = *(unsigned __int16 *)(*(_QWORD *)v284 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v284 + 302LL) )
      {
        v297 = (int *)(*(_QWORD *)(v295 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v297 - 1) != System_IDisposable_TypeInfo )
        {
          --v296;
          v297 += 4;
          if ( !v296 )
            goto LABEL_278;
        }
        v298 = v295 + 16LL * *v297 + 312;
      }
      else
      {
LABEL_278:
        v298 = sub_1C6A420(v284, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v298)(v284, *(_QWORD *)(v298 + 8));
      v268 = v377;
      LODWORD(v272) = *(_DWORD *)(v377 + 24);
      ++v273;
    }
    while ( (__int64)v273 < (int)v272 );
    if ( (int)v272 >= 1 )
    {
      v299 = 0;
      while ( v299 < (unsigned int)v272 )
      {
        v300 = *(unsigned __int8 *)(v268 + v299 + 32);
        ActorId = sub_1C94140(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_392;
        v301 = *(_DWORD *)(ActorId + 24);
        v302 = (BuffList_ACTION_array *)ActorId;
        if ( v300 )
        {
          if ( !v301 )
            goto LABEL_393;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v301 == 1 )
            goto LABEL_393;
          v303 = 121;
        }
        else
        {
          if ( !v301 )
            goto LABEL_393;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v301 == 1 )
            goto LABEL_393;
          v303 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v303;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v378 + 24))(
                    *(_QWORD *)(v378 + 64),
                    v300 != 0,
                    v376,
                    *(_QWORD *)(v378 + 40));
        if ( !ActorId )
          goto LABEL_392;
        v304 = *(_QWORD *)ActorId;
        v305 = ActorId;
        v306 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v307 = (int *)(*(_QWORD *)(v304 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v307 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v306;
            v307 += 4;
            if ( !v306 )
              goto LABEL_300;
          }
          v308 = v304 + 16LL * *v307 + 312;
        }
        else
        {
LABEL_300:
          v308 = sub_1C6A420(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v310 = (*(__int64 (__fastcall **)(__int64, _QWORD))v308)(v305, *(_QWORD *)(v308 + 8));
        if ( !v310 )
          sub_1C942F0(0, v309);
        while ( 1 )
        {
          v311 = *(_QWORD *)v310;
          v312 = *(unsigned __int16 *)(*(_QWORD *)v310 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v310 + 302LL) )
          {
            v313 = (int *)(*(_QWORD *)(v311 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v313 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v312;
              v313 += 4;
              if ( !v312 )
                goto LABEL_307;
            }
            v314 = v311 + 16LL * *v313 + 312;
          }
          else
          {
LABEL_307:
            v314 = sub_1C6A420(v310, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v314)(v310, *(_QWORD *)(v314 + 8)) & 1) == 0 )
            break;
          v315 = *(_QWORD *)v310;
          v316 = *(unsigned __int16 *)(*(_QWORD *)v310 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v310 + 302LL) )
          {
            v317 = (int *)(*(_QWORD *)(v315 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v317 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v316;
              v317 += 4;
              if ( !v316 )
                goto LABEL_314;
            }
            v318 = v315 + 16LL * *v317 + 312;
          }
          else
          {
LABEL_314:
            v318 = sub_1C6A420(v310, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v320 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v318)(v310, *(_QWORD *)(v318 + 8));
          if ( !*v379 )
            sub_1C942F0(0, v319);
          v321 = BattleServantData__getAttackSideEffectBuffList_47070280(*v379, v302, *v380, v320, 0);
          v323 = v321;
          if ( !v321 )
            sub_1C942F0(0, v322);
          v324 = v321->max_length;
          if ( (int)v324 >= 1 )
          {
            v325 = 0;
            do
            {
              if ( v325 >= (unsigned int)v324 )
                sub_1C942F8(v321);
              v326 = this->fields.logicfunction;
              if ( !v326 )
                sub_1C942F0(0, v322);
              BattleLogicFunction__SetSideEffectBuff(
                v326,
                (SkillLvMaster_o *)MasterData_object,
                *v32,
                v323->m_Items[v325],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v166,
                1,
                0);
              LODWORD(v324) = v323->max_length;
              ++v325;
            }
            while ( (__int64)v325 < (int)v324 );
          }
        }
        v327 = *(_QWORD *)v310;
        v328 = *(unsigned __int16 *)(*(_QWORD *)v310 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v310 + 302LL) )
        {
          v329 = (int *)(*(_QWORD *)(v327 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v329 - 1) != System_IDisposable_TypeInfo )
          {
            --v328;
            v329 += 4;
            if ( !v328 )
              goto LABEL_328;
          }
          v330 = v327 + 16LL * *v329 + 312;
        }
        else
        {
LABEL_328:
          v330 = sub_1C6A420(v310, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v330)(v310, *(_QWORD *)(v330 + 8));
        v268 = v377;
        LODWORD(v272) = *(_DWORD *)(v377 + 24);
        if ( (__int64)++v299 >= (int)v272 )
          goto LABEL_337;
      }
      goto LABEL_393;
    }
  }
LABEL_337:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v378 + 24))(
              *(_QWORD *)(v378 + 64),
              0,
              0,
              *(_QWORD *)(v378 + 40));
  if ( !ActorId )
    goto LABEL_392;
  v331 = *(_QWORD *)ActorId;
  v332 = ActorId;
  v333 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v334 = (int *)(*(_QWORD *)(v331 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v334 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v333;
      v334 += 4;
      if ( !v333 )
        goto LABEL_342;
    }
    v335 = v331 + 16LL * *v334 + 312;
  }
  else
  {
LABEL_342:
    v335 = sub_1C6A420(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v336 = (*(__int64 (__fastcall **)(__int64, _QWORD))v335)(v332, *(_QWORD *)(v335 + 8));
  v338 = v336;
  while ( 1 )
  {
    if ( !v338 )
      sub_1C942F0(v336, v337);
    v339 = *(_QWORD *)v338;
    v340 = *(unsigned __int16 *)(*(_QWORD *)v338 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v338 + 302LL) )
    {
      v341 = (int *)(*(_QWORD *)(v339 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v341 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v340;
        v341 += 4;
        if ( !v340 )
          goto LABEL_350;
      }
      v342 = v339 + 16LL * *v341 + 312;
    }
    else
    {
LABEL_350:
      v342 = sub_1C6A420(v338, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v342)(v338, *(_QWORD *)(v342 + 8)) & 1) == 0 )
      break;
    v343 = *(_QWORD *)v338;
    v344 = *(unsigned __int16 *)(*(_QWORD *)v338 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v338 + 302LL) )
    {
      v345 = (int *)(*(_QWORD *)(v343 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v345 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v344;
        v345 += 4;
        if ( !v344 )
          goto LABEL_357;
      }
      v346 = v343 + 16LL * *v345 + 312;
    }
    else
    {
LABEL_357:
      v346 = sub_1C6A420(v338, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v347 = (*(__int64 (__fastcall **)(__int64, _QWORD))v346)(v338, *(_QWORD *)(v346 + 8));
    if ( !*v379 )
      sub_1C942F0(v347, v348);
    if ( !v347 )
      sub_1C942F0(0, v348);
    if ( !this->fields.logic )
      sub_1C942F0(v347, v348);
    v336 = BattleLogic__SetDamageSideEffect(
             this->fields.logic,
             *v32,
             (*v379)->fields.uniqueId,
             *(_DWORD *)(v347 + 24),
             *v380,
             0);
  }
  v349 = *(_QWORD *)v338;
  v350 = *(unsigned __int16 *)(*(_QWORD *)v338 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v338 + 302LL) )
  {
    v351 = (int *)(*(_QWORD *)(v349 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v351 - 1) != System_IDisposable_TypeInfo )
    {
      --v350;
      v351 += 4;
      if ( !v350 )
        goto LABEL_367;
    }
    v352 = v349 + 16LL * *v351 + 312;
  }
  else
  {
LABEL_367:
    v352 = sub_1C6A420(v338, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v352)(v338, *(_QWORD *)(v352 + 8));
  ActorId = *v366;
  if ( !*v366 )
    goto LABEL_392;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v381,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  i = v381;
  while ( 1 )
  {
    v353 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v353 )
      break;
    current = i.fields._current;
    if ( !i.fields._current )
      sub_1C942F0(v353, v354);
    klass = i.fields._current[53].klass;
    if ( !klass )
      sub_1C942F0(v353, v354);
    LOBYTE(klass->_1.nestedTypes) = 0;
    if ( v368->fields.isCanCounterTask )
    {
      if ( !*v379 )
        sub_1C942F0(v353, v354);
      v357 = this->fields.data;
      if ( !v357 )
        sub_1C942F0(0, v354);
      BattleData__SetWasAttackTargetId(v357, (*v379)->fields.uniqueId, (int32_t)current[1].monitor, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  ActorId = (__int64)this->fields.logicfunction;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogicFunction__SetSubstituteAction((BattleLogicFunction_o *)ActorId, *v32, 0, 0);
  v9 = (BattleCommandData_o *)item;
  if ( !*(_QWORD *)v367 )
    goto LABEL_392;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v367 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v367 + 64LL),
              item,
              *(_QWORD *)(*(_QWORD *)v367 + 40LL));
  v358 = *v32;
  if ( !*v32 )
    goto LABEL_392;
  v358->fields.isForcedSpeedOne = v368->fields.isForcedSpeedOne;
  v358->fields.isAllAttack = v365;
  if ( !*v379 )
    goto LABEL_392;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_392;
  BattleData__setCommandAttack((BattleData_o *)ActorId, (*v379)->fields.uniqueId, targetId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0, 0),
        v359 = this->fields.logic,
        v360 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1C942E4(BattleAddSkillTaskAfterCommandAttack_TypeInfo),
        BattleAddSkillTaskAfterCommandAttack___ctor(v360, 0),
        !v359)
    || (v361 = 0,
        BattleLogic__AddSkillTask(v359, (BattleAddSkillTaskAroundTargetTask_o *)v360, v368, targetId, v361, 0),
        (ActorId = *v366) == 0) )
  {
LABEL_392:
    sub_1C942F0(ActorId, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v381,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  for ( i = v381;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
        BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C942F0(0, v362);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  ((void (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v368->klass->vtable._10_SetAttacked.methodPtr)(
    v368,
    this->fields.data,
    1,
    v368->klass->vtable._10_SetAttacked.method);
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

  if ( (byte_4D2FB64 & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_8773/*"MOTION_DO_NOT_ACT"*/);
    byte_4D2FB64 = 1;
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
    v11 = sub_1C942E4(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v18 = StringLiteral_8773/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 72) = StringLiteral_8773/*"MOTION_DO_NOT_ACT"*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 72), v18, v12, v13, v14, v15, v16, v17);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 64) = BattleCommandData__get_type((BattleCommandData_o *)data, 0);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_1C942F0(data, task);
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

  if ( (byte_4D2FB63 & 1) == 0 )
  {
    sub_1C94098(&ProgressIntervalTurnActionData_TypeInfo);
    byte_4D2FB63 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1C942E4(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1C942F0(data, v5);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0, (BattleActionData_o *)v4, 0);
}


BattleLogicTask_array *BattleLogicNomal__CreateTaskAfterTreasureDvc(
        BattleLogicNomal_o *this,
        int32_t lType,
        BattleData_o *bData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 IsExistUsedTdInfo; // x0
  __int64 v8; // x1
  struct BattleData_UsedTreasureDvcInfo_o *UsedTdInfo_k__BackingField; // x8
  BattleServantData_array *FieldAliveServantArray; // x26
  BattleLogicNomal___c_c *v11; // x8
  System_Comparison_T__o *_9__61_0; // x24
  Il2CppObject *v13; // x25
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int max_length; // w8
  unsigned int v22; // w9
  Il2CppClass **v23; // x8
  BattleServantData_o *v24; // x24
  __int64 v25; // x8
  __int64 v26; // x25
  unsigned __int64 v27; // x23
  struct BattleData_o *data; // x8
  struct BattleData_UsedTreasureDvcInfo_o *v29; // x8
  BattleSkillInfoData_o *v30; // x26
  BattleLogicSkill_o *logicskill; // x27
  System_Int32_array *v32; // x28
  struct BattleData_o *v33; // x8
  struct BattleData_UsedTreasureDvcInfo_o *v34; // x8
  BattleData_o *v36; // [xsp+10h] [xbp-80h]
  BattleServantData_array *v37; // [xsp+18h] [xbp-78h]
  BattleServantData_o *targetSvtData; // [xsp+20h] [xbp-70h]
  unsigned int v39; // [xsp+2Ch] [xbp-64h]

  if ( (byte_4D2FB66 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Sort_BattleServantData___);
    sub_1C94098(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__61_0__);
    sub_1C94098(&BattleLogicNomal___c_TypeInfo);
    byte_4D2FB66 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !bData )
    goto LABEL_39;
  IsExistUsedTdInfo = BattleData__IsExistUsedTdInfo(bData, 0);
  if ( (IsExistUsedTdInfo & 1) == 0 )
    goto LABEL_36;
  UsedTdInfo_k__BackingField = bData->fields._UsedTdInfo_k__BackingField;
  if ( !UsedTdInfo_k__BackingField )
    goto LABEL_39;
  targetSvtData = BattleData__getServantData(bData, UsedTdInfo_k__BackingField->fields._ActorId_k__BackingField, 0);
  if ( !targetSvtData )
  {
    BattleData__ResetUsedTdInfo(bData, 0);
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_39:
    sub_1C942F0(IsExistUsedTdInfo, v8);
  }
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(bData, 3, 0, 1, 0);
  v36 = bData;
  v11 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v11 = BattleLogicNomal___c_TypeInfo;
  }
  _9__61_0 = (System_Comparison_T__o *)v11->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleLogicNomal___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__61_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__61_0,
      v13,
      Method_BattleLogicNomal___c__CreateTaskAfterTreasureDvc_b__61_0__,
      0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Comparison_BattleServantData__o *)_9__61_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__61_0,
      (int32_t)_9__61_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  System_Array__Sort_object__51807060(
    (System_Object_array *)FieldAliveServantArray,
    _9__61_0,
    (const MethodInfo_3168354 *)Method_System_Array_Sort_BattleServantData___);
  if ( !FieldAliveServantArray )
    goto LABEL_39;
  max_length = FieldAliveServantArray->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    v37 = FieldAliveServantArray;
    while ( 1 )
    {
      if ( v22 >= max_length )
        goto LABEL_40;
      v23 = &FieldAliveServantArray->obj.klass + (int)v22;
      v24 = (BattleServantData_o *)v23[4];
      if ( !v24 )
        goto LABEL_39;
      v39 = v22;
      IsExistUsedTdInfo = (__int64)BattleServantData__GetTreasureDvcPostAfterBuffList(
                                     (BattleServantData_o *)v23[4],
                                     this->fields.data,
                                     targetSvtData,
                                     0);
      if ( !IsExistUsedTdInfo )
        goto LABEL_39;
      v25 = *(_QWORD *)(IsExistUsedTdInfo + 24);
      v26 = IsExistUsedTdInfo;
      if ( (int)v25 >= 1 )
        break;
LABEL_34:
      FieldAliveServantArray = v37;
      max_length = v37->max_length;
      v22 = v39 + 1;
      if ( (int)(v39 + 1) >= max_length )
        goto LABEL_35;
    }
    v27 = 0;
    while ( v27 < (unsigned int)v25 )
    {
      IsExistUsedTdInfo = (__int64)BattleServantData__CreateFunctionSkillInfoData(
                                     v24,
                                     *(BattleBuffData_BuffData_o **)(v26 + 32 + 8 * v27),
                                     0);
      data = this->fields.data;
      if ( !data )
        goto LABEL_39;
      v29 = data->fields._UsedTdInfo_k__BackingField;
      if ( !v29 )
        goto LABEL_39;
      v30 = (BattleSkillInfoData_o *)IsExistUsedTdInfo;
      if ( !IsExistUsedTdInfo )
        goto LABEL_39;
      *(_QWORD *)(IsExistUsedTdInfo + 168) = *(_QWORD *)&v29->fields._NpValue_k__BackingField;
      logicskill = this->fields.logicskill;
      IsExistUsedTdInfo = sub_1C94140(int___TypeInfo, 1);
      if ( !IsExistUsedTdInfo )
        goto LABEL_39;
      v32 = (System_Int32_array *)IsExistUsedTdInfo;
      if ( !*(_DWORD *)(IsExistUsedTdInfo + 24) )
        break;
      *(_DWORD *)(IsExistUsedTdInfo + 32) = v30->fields.svtUniqueId;
      IsExistUsedTdInfo = sub_1C94140(int___TypeInfo, 1);
      v33 = this->fields.data;
      if ( !v33 )
        goto LABEL_39;
      v34 = v33->fields._UsedTdInfo_k__BackingField;
      if ( !v34 || !IsExistUsedTdInfo )
        goto LABEL_39;
      if ( !*(_DWORD *)(IsExistUsedTdInfo + 24) )
        break;
      *(_DWORD *)(IsExistUsedTdInfo + 32) = v34->fields._ActorId_k__BackingField;
      if ( !logicskill )
        goto LABEL_39;
      IsExistUsedTdInfo = (__int64)BattleLogicSkill__taskSkill(
                                     logicskill,
                                     v30,
                                     v32,
                                     (System_Int32_array *)IsExistUsedTdInfo,
                                     0,
                                     0,
                                     0,
                                     0,
                                     0,
                                     0);
      if ( !v6 )
        goto LABEL_39;
      System_Collections_Generic_List_object___AddRange(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)IsExistUsedTdInfo,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      LODWORD(v25) = *(_DWORD *)(v26 + 24);
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_34;
    }
LABEL_40:
    sub_1C942F8(IsExistUsedTdInfo);
  }
LABEL_35:
  BattleData__ResetUsedTdInfo(v36, 0);
LABEL_36:
  if ( !v6 )
    goto LABEL_39;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleServantData_array *FieldEnemyServantList; // x0
  BattleServantData_array *v9; // x20
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
  if ( (byte_4D2FB4B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1C94098(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicNomal_o *)sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FB4B = 1;
  }
  if ( logicType == 81 )
  {
    if ( !battleData )
      goto LABEL_69;
    FieldEnemyServantList = BattleData__getFieldEnemyServantList(battleData, 0, 0);
LABEL_9:
    v9 = FieldEnemyServantList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
            goto LABEL_16;
        }
        v15 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_16:
        v15 = sub_1C6A420(v9, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(BattleServantData_array *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
      if ( !v22 )
        sub_1C942F0(0, v21);
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
              goto LABEL_32;
          }
          v26 = v23 + 16LL * *v25 + 312;
        }
        else
        {
LABEL_32:
          v26 = sub_1C6A420(v22, System_Collections_IEnumerator_TypeInfo, 0);
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
              goto LABEL_39;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_39:
          v30 = sub_1C6A420(v22, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v31 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
        v32 = v31;
        if ( v31 && BattleServantData__isAliveLogic(v31, 1, 0) )
        {
          AttackPhaseStartFunctionBuffList = BattleServantData__GetAttackPhaseStartFunctionBuffList(v32, 0);
          v35 = AttackPhaseStartFunctionBuffList;
          if ( !AttackPhaseStartFunctionBuffList )
            sub_1C942F0(0, v34);
          v36 = AttackPhaseStartFunctionBuffList[3];
          if ( (int)v36 >= 1 )
          {
            v37 = 0;
            do
            {
              if ( v37 >= (unsigned int)v36 )
                sub_1C942F8(AttackPhaseStartFunctionBuffList);
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
                v42 = sub_1C94140(int___TypeInfo, 1);
                if ( !v42 )
                  sub_1C942F0(0, v43);
                if ( !*(_DWORD *)(v42 + 24) )
                  sub_1C942F8(v42);
                *(_DWORD *)(v42 + 32) = v32->fields.uniqueId;
                if ( !logicskill )
                  sub_1C942F0(v42, v43);
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
                  sub_1C942F0(v44, v44);
                System_Collections_Generic_List_object___AddRange(
                  v11,
                  v44,
                  (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
            goto LABEL_59;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_59:
        v48 = sub_1C6A420(v22, System_IDisposable_TypeInfo, 0);
      }
      this = (BattleLogicNomal_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v22, *(_QWORD *)(v48 + 8));
      if ( v11 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_69:
    sub_1C942F0(this, *(_QWORD *)&logicType);
  }
  if ( logicType == 80 )
  {
    if ( !battleData )
      goto LABEL_69;
    FieldEnemyServantList = BattleData__getFieldPlayerServantList(battleData, 0);
    goto LABEL_9;
  }
  v16 = Method_System_Array_Empty_BattleLogicTask___;
  v17 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v17 )
  {
    sub_1C6A188(Method_System_Array_Empty_BattleLogicTask___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C6A12C(inited);
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
  struct BattleData_o *v10; // x8
  BattleActorControl_o *v11; // x22
  struct BattleData_o *v12; // x8
  int32_t uniqueID; // w9
  __int64 *v14; // x10
  BattleActorControl_o *v15; // x22
  int32_t v16; // w8
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2FB58 & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_6439/*"FOCUS_UNDER"*/);
    sub_1C94098(&StringLiteral_6437/*"FOCUS_CENTER"*/);
    sub_1C94098(&StringLiteral_6441/*"FOCUS_UP"*/);
    byte_4D2FB58 = 1;
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
    v8 = StringLiteral_6437/*"FOCUS_CENTER"*/;
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
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v10 = this->fields.data;
        if ( !v10 )
          goto LABEL_42;
        v8 = StringLiteral_6437/*"FOCUS_CENTER"*/;
        v10->fields.globaltargetId = PartsActor->fields.uniqueID;
      }
    }
    if ( v7 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v15 = BattleData__GetPartsActor(data, 2, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v15 )
        goto LABEL_42;
      data = (BattleData_o *)v15->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v12 = this->fields.data;
      if ( !v12 )
        goto LABEL_42;
      uniqueID = v15->fields.uniqueID;
      v14 = &StringLiteral_6439/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v7 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v11 = BattleData__GetPartsActor(data, 0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v11 )
        goto LABEL_42;
      data = (BattleData_o *)v11->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v12 = this->fields.data;
      if ( !v12 )
        goto LABEL_42;
      uniqueID = v11->fields.uniqueID;
      v14 = &StringLiteral_6441/*"FOCUS_UP"*/;
    }
    v8 = *v14;
    v12->fields.globaltargetId = uniqueID;
LABEL_39:
    v6 = sub_1C942E4(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0);
    if ( v6 )
    {
      v16 = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = v16;
      *(_DWORD *)(v6 + 36) = v16;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0);
      *(_QWORD *)(v6 + 72) = v8;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 72), v8, v17, v18, v19, v20, v21, v22);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_1C942F0(data, method);
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
  if ( (byte_4D2FB4D & 1) == 0 )
  {
    this = (BattleLogicNomal_o *)sub_1C94098(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4D2FB4D = 1;
  }
  logic = v5->fields.logic;
  if ( !logic )
    sub_1C942F0(this, *(_QWORD *)&logicType);
  logic->fields.isCheckInterruptMotionTask = 1;
  v7 = Method_System_Array_Empty_BattleLogicTask___;
  v8 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v8 )
  {
    sub_1C6A188(Method_System_Array_Empty_BattleLogicTask___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C6A12C(inited);
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

  if ( (byte_4D2FB4E & 1) == 0 )
  {
    sub_1C94098(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_4D2FB4E = 1;
  }
  v3 = sub_1C942E4(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26___ctor(
    (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *)v3,
    -2,
    0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4D2FB50 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__);
    sub_1C94098(&BattleLogicNomal___c_TypeInfo);
    byte_4D2FB50 = 1;
  }
  value = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_34EC428 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0), !v10) )
  {
LABEL_16:
    sub_1C942F0(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
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
    _9__28_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__28_0,
      v15,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__,
      0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__28_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0,
      (int32_t)_9__28_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  System_Collections_Generic_List_object___Sort_59164920(
    v10,
    _9__28_0,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
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
    sub_1C942F0(this, method);
  BattleFieldEnvironmentData__TurnBuffProgressingIncrease((BattleFieldEnvironmentData_o *)this, 0);
}


bool BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(0, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(0, method);
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
    sub_1C942F0(data, isCheckNext);
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
  if ( (byte_4D2FB59 & 1) == 0 )
  {
    buff = (BattleBuffData_BuffData_o *)sub_1C94098(&BuffList_TypeInfo);
    byte_4D2FB59 = 1;
  }
  if ( !v2 )
    sub_1C942F0(buff, method);
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
  struct BattleData_o *v7; // x8

  if ( (byte_4D2FB5B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FB5B = 1;
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
          if ( PartsActor )
          {
            data = (BattleData_o *)PartsActor->fields.battleSvtData;
            if ( data )
            {
              data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
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
LABEL_17:
          sub_1C942F0(data, method);
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

  if ( (byte_4D2FB4C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1C94098(&PlayerComboEndServantReactTaskCreator_TypeInfo);
    byte_4D2FB4C = 1;
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
          v12 = (PlayerComboEndServantReactTaskCreator_o *)sub_1C942E4(PlayerComboEndServantReactTaskCreator_TypeInfo);
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
      sub_1C942F0(IsComboEnd, v7);
    }
  }
  v14 = Method_System_Array_Empty_BattleLogicTask___;
  v15 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v15 )
  {
    sub_1C6A188(Method_System_Array_Empty_BattleLogicTask___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6A12C(inited);
  return **(BattleLogicTask_array ***)(v17 + 184);
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
  if ( (byte_4D2FB5C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4D2FB5C = 1;
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
      sub_1C6A188(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C6A12C(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !v3 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C6A188(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C6A12C(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_31D66A0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    sub_1C942F0(data, prevFieldIndiv);
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

  if ( (byte_4D2FB60 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask___TypeInfo);
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&BattleSkillInfoData_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2FB60 = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
              v17 = (BattleSkillInfoData_o *)sub_1C942E4(BattleSkillInfoData_TypeInfo);
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
              v20 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v20, 0);
              if ( !v20 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v20, v17, 0, 0);
              logic = this->fields.logic;
              Instance = sub_1C94140(BattleLogicTask___TypeInfo, 1);
              if ( !Instance )
                goto LABEL_44;
              v22 = Instance;
              Instance = sub_1C941D4(v20, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v40 = sub_1C94314(0);
                sub_1C941C0(v40, 0);
              }
              if ( !*(_DWORD *)(v22 + 24) )
                break;
              *(_QWORD *)(v22 + 32) = v20;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 32), (int32_t)v20, v23, v24, v25, v26, v27, v28);
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
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v38[4] = (Il2CppClass *)v20;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v20, v29, v30, v31, v32, v33, v34);
              }
              v13 = *(_DWORD *)(v14 + 24);
              if ( (int)++v15 >= v13 )
                goto LABEL_38;
            }
LABEL_45:
            sub_1C942F8(Instance);
          }
LABEL_38:
          Instance = (__int64)v12->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
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
    sub_1C942F0(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_4D2FB65 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4D2FB65 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !commandCodeBuffList )
    sub_1C942F0(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
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
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_1C942F0(v16, v17);
    current = (BattleBuffData_BuffData_o *)v39.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1C942F0(IsEnableCommandCode, v20);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1C942F0(IsEnableCommandCode, v20);
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
          sub_1C942F0(v21, v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_1C942F0(v21, v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1C942F8(v21);
        if ( max_length == 1 )
          sub_1C942F8(v21);
        if ( !skillLvMst )
          sub_1C942F0(v21, v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[0], vals->m_Items[1], 0);
        v27 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1C942F0(Entity, v26);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_1C942F0(Entity, v26);
          logicfunction = v37->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0);
          funcId = v27->fields.funcId;
          v31 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v27, 0);
          if ( !logicfunction )
            sub_1C942F0(DataValsList, v33);
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
          sub_1C942F0(0, v22);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_4D2FB52 & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&StringLiteral_8763/*"MOTION_BACK"*/);
    byte_4D2FB52 = 1;
  }
  v5 = sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 32) = uniqueId,
        v14 = StringLiteral_8763/*"MOTION_BACK"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_8763/*"MOTION_BACK"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 72), v14, v8, v9, v10, v11, v12, v13),
        (data = this->fields.data) == 0) )
  {
    sub_1C942F0(data, v7);
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
            sub_1C942F8(data);
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
    sub_1C942F0(data, task);
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
  System_Action_object__o *syncRoot; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1

  if ( (byte_4D2FB5F & 1) == 0 )
  {
    sub_1C94098(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C94098(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__);
    sub_1C94098(&BattleLogicNomal___c_TypeInfo);
    byte_4D2FB5F = 1;
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
            sub_1C942F8(data);
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
    sub_1C942F0(data, task);
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
  syncRoot = (System_Action_object__o *)data->fields.enemy_datalist[1].fields._syncRoot;
  if ( !syncRoot )
  {
    if ( !data->fields.limitAct )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
    }
    klass = (Il2CppObject *)data->fields.enemy_datalist->klass;
    syncRoot = (System_Action_object__o *)sub_1C942E4(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(syncRoot, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__, 0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_AiNpcBattleServantData__o *)syncRoot;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__49_0,
      (int32_t)syncRoot,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)syncRoot,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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

  if ( (byte_4D2FB53 & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&FunctionEntity_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_1C94098(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_1C94098(&StringLiteral_6423/*"FIELD_PLAYER"*/);
    sub_1C94098(&StringLiteral_6422/*"FIELD_ENEMY"*/);
    byte_4D2FB53 = 1;
  }
  v5 = sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_1C942E4(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0);
  if ( BattleLogicTask__isArts(task, 0) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0);
    isBuster = sub_1C94140(int___TypeInfo, 2);
    if ( isBuster )
    {
      v16 = *(_DWORD *)(isBuster + 24);
      v7 = isBuster;
      if ( !v16 || (*(_DWORD *)(isBuster + 32) = 102, v16 == 1) )
LABEL_30:
        sub_1C942F8(isBuster);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBuster;
        v17 = (GrandQuestFolderBoardItem_o *)(v9 + 32);
LABEL_14:
        sub_1C9403C(v17, v7, v10, v11, v12, v13, v14, v15);
        v26 = &StringLiteral_6423/*"FIELD_PLAYER"*/;
LABEL_15:
        v27 = *v26;
        *(_QWORD *)(v5 + 72) = *v26;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 72), v27, v20, v21, v22, v23, v24, v25);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1C942F0(isBuster, v7);
  }
  if ( BattleLogicTask__isQuick(task, 0) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0);
    v18 = (System_Array_o *)sub_1C94140(int___TypeInfo, 3);
    v19.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v18, v19, 0);
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
    v32 = (System_Array_o *)sub_1C94140(int___TypeInfo, 3);
    v33.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v32, v33, 0);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v32;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v32, v34, v35, v36, v37, v38, v39);
      v26 = &StringLiteral_6422/*"FIELD_ENEMY"*/;
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
    sub_1C942F0(v5, v6);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleData_o *data; // x8
  BattleLogicNomal_Fields *p_fields; // x19
  System_Int32_array *QuestIndividualities; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_int__o *v29; // x23
  int v30; // w8
  __int64 v31; // x28
  unsigned int v32; // w20
  __int64 v33; // x21
  __int64 *v34; // x21
  __int64 v35; // t1
  BattleBuffData_BuffData_array *v36; // x29
  unsigned int v37; // w8
  struct System_Int32_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  BattleData_o *v41; // x21
  struct BattleData_o *v42; // x8
  __int64 v43; // x28
  unsigned int v44; // w27
  System_Collections_Generic_List_object__o *v45; // x29
  __int64 v46; // x23
  BattleServantData_o *v47; // x21
  __int64 *v48; // x23
  BattleServantData_o *v49; // t1
  char v50; // w20
  System_Int32_array *v51; // x25
  BattleLogic_o *logic; // x26
  System_Func_object__bool__o *v53; // x24
  int v54; // w21
  bool v55; // w3
  char v56; // w21
  Il2CppObject *v57; // x2
  BattleServantData_o *v58; // x21
  char v59; // w20
  System_Int32_array *v60; // x24
  BattleLogic_o *v61; // x25
  System_Func_object__bool__o *v62; // x26
  int32_t v63; // w21
  System_Object_array *v64; // x2
  struct System_Int32_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  struct BaseBattleEvent_o *battleEvent; // x21
  struct BattleData_o *v69; // x8
  struct BattlePerformance_o *perf; // x9
  System_Collections_Generic_List_object__o *aiNpcDataList; // x21
  System_Action_object__o *v72; // x27
  const MethodInfo *v73; // x2
  struct BattleData_o *v74; // x8
  Il2CppObject *Entity; // x0
  __int64 v76; // x1
  Il2CppObject *value; // x24
  int32_t key; // w25
  int monitor; // w9
  int32_t v80; // w8
  char v81; // w23
  BattleBuffData_BuffData_o *v82; // x28
  BattleSkillInfoData_o *v83; // x26
  __int64 v84; // x0
  __int64 v85; // x1
  struct System_Int32_array *vals; // x8
  __int64 v87; // x0
  __int64 v88; // x1
  struct System_Int32_array *v89; // x8
  BattleServantData_o *ServantData; // x27
  __int64 v91; // x1
  SkillLvEntity_o *v92; // x0
  __int64 v93; // x1
  SkillLvEntity_o *v94; // x21
  _BOOL8 v95; // x0
  __int64 v96; // x1
  BattleLogic_o *v97; // x0
  int32_t v98; // w29
  __int64 v99; // x0
  __int64 v100; // x1
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v104; // x0
  __int64 v105; // x1
  System_Collections_ICollection_o *v106; // x0
  __int64 v107; // x1
  System_Collections_ICollection_o *v108; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v111; // x0
  __int64 v112; // x1
  int32_t v113; // w24
  Il2CppObject *v114; // x23
  BuffEntity_o *v115; // x0
  __int64 v116; // x1
  BattleServantData_o *v117; // x21
  BattleBuffData_CheckIndividualitiesData_o *v118; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v120; // w8
  int32_t v121; // w9
  BattleBuffData_BuffData_o *v122; // x26
  __int64 v123; // x1
  BattleSkillInfoData_o *v124; // x27
  __int64 v125; // x0
  __int64 v126; // x1
  struct System_Int32_array *v127; // x8
  __int64 v128; // x0
  __int64 v129; // x1
  struct System_Int32_array *v130; // x8
  BattleServantData_o *v131; // x28
  __int64 v132; // x1
  SkillLvEntity_o *v133; // x0
  __int64 v134; // x1
  SkillLvEntity_o *v135; // x21
  _BOOL8 v136; // x0
  __int64 v137; // x1
  BattleLogic_o *v138; // x0
  int32_t v139; // w29
  __int64 v140; // x0
  __int64 v141; // x1
  System_Int32_array *v142; // x21
  bool v143; // w28
  BattleLogicSkill_o *v144; // x29
  __int64 v145; // x0
  __int64 v146; // x1
  BattleLogicTask_array *v147; // x1
  BattleLogic_o *v148; // x0
  BattleActionData_o *v149; // x1
  System_Collections_Generic_Dictionary_int__object__o *v151; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__object__o *v152; // [xsp+28h] [xbp-F8h]
  System_Int32_array **v153; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_int__o *v154; // [xsp+38h] [xbp-E8h]
  BattleActionData_o *actiondata; // [xsp+40h] [xbp-E0h]
  char v156; // [xsp+4Ch] [xbp-D4h]
  __int64 v157; // [xsp+50h] [xbp-D0h]
  SkillLvMaster_o *v158; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v160; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v161; // [xsp+90h] [xbp-90h] BYREF
  int32_t targetIndex; // [xsp+BCh] [xbp-64h] BYREF

  if ( (byte_4D2FB5D & 1) == 0 )
  {
    sub_1C94098(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C94098(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C94098(&BattleSkillInfoData_TypeInfo);
    sub_1C94098(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__);
    sub_1C94098(&BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
    sub_1C94098(&StringLiteral_8775/*"MOTION_ENEMY_TURN_END"*/);
    byte_4D2FB5D = 1;
  }
  targetIndex = 0;
  memset(&v161, 0, sizeof(v161));
  v3 = sub_1C942E4(BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass46_0___ctor((BattleLogicNomal___c__DisplayClass46_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_235;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  actiondata = (BattleActionData_o *)sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_235;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v3 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_235;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_235;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !actiondata )
    goto LABEL_235;
  BattleActionData__setStateField(actiondata, 0);
  v13 = StringLiteral_8775/*"MOTION_ENEMY_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8775/*"MOTION_ENEMY_TURN_END"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&actiondata->fields.motionname, v13, v14, v15, v16, v17, v18, v19);
  v152 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v152,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v151 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v151,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_235;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  p_fields = &this->fields;
  data = this->fields.data;
  v158 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_235;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v3 + 24) = QuestIndividualities;
  v153 = (System_Int32_array **)(v3 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)QuestIndividualities, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_235;
  v30 = *(_DWORD *)(Instance + 24);
  v31 = Instance;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( v32 < v30 )
    {
      v33 = v31 + 8LL * (int)v32;
      v35 = *(_QWORD *)(v33 + 32);
      v34 = (__int64 *)(v33 + 32);
      Instance = v35;
      if ( !v35 )
        goto LABEL_235;
      if ( *(_BYTE *)(Instance + 572) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v3 + 16),
                              *(System_Int32_array **)(v3 + 24),
                              this->fields.logic,
                              0,
                              0);
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          break;
        v36 = (BattleBuffData_BuffData_array *)Instance;
        Instance = *v34;
        if ( !*v34 )
          goto LABEL_235;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            break;
          Instance = *v34;
          if ( !*v34 )
            goto LABEL_235;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v36 )
              goto LABEL_235;
            if ( v36->max_length )
            {
              if ( v32 >= *(_DWORD *)(v31 + 24) )
                break;
              Instance = (__int64)v152;
              if ( !*v34 || !v152 )
                goto LABEL_235;
              System_Collections_Generic_Dictionary_int__object___Add(
                v152,
                *(_DWORD *)(*v34 + 24),
                &v36->obj,
                (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v37 = *(_DWORD *)(v31 + 24);
        if ( v32 >= v37 )
          break;
        if ( !*v34 )
          goto LABEL_235;
        if ( !v29 )
          goto LABEL_235;
        v5 = *(unsigned int *)(*v34 + 24);
        items = v29->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_235;
        size = v29->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v29,
            v5,
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          v37 = *(_DWORD *)(v31 + 24);
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
        if ( v32 >= v37 )
          break;
        Instance = *v34;
        if ( !*v34 )
          goto LABEL_235;
        v41 = p_fields->data;
        Instance = (__int64)BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        if ( !v41 )
          goto LABEL_235;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v41, (BattleBuffData_o *)Instance, v36, 0);
      }
      v30 = *(_DWORD *)(v31 + 24);
      if ( (int)++v32 >= v30 )
        goto LABEL_41;
    }
LABEL_238:
    sub_1C942F8(Instance);
  }
LABEL_41:
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v42 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  v43 = Instance;
  if ( v42->fields.leaderDown && v42->fields.endbattleFlg )
  {
    v156 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_235;
    v154 = v29;
    if ( *(int *)(Instance + 24) >= 1 )
    {
      v44 = 0;
      v156 = 0;
      v157 = v3;
      while ( 1 )
      {
        v45 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v45,
          (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
        if ( v44 >= *(_DWORD *)(v43 + 24) )
          goto LABEL_238;
        v46 = v43 + 8LL * (int)v44;
        v49 = *(BattleServantData_o **)(v46 + 32);
        v48 = (__int64 *)(v46 + 32);
        v47 = v49;
        if ( !v49 )
          goto LABEL_235;
        if ( v47->fields.isBuffProgressFlg )
        {
          v50 = *(_BYTE *)(v3 + 16);
          v51 = *(System_Int32_array **)(v3 + 24);
          logic = this->fields.logic;
          v53 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v53, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v47,
                                v50,
                                v51,
                                logic,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v53,
                                0);
          if ( !v45 )
            goto LABEL_235;
          System_Collections_Generic_List_object___AddRange(
            v45,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v44 >= *(_DWORD *)(v43 + 24) )
            goto LABEL_238;
          Instance = *v48;
          v3 = v157;
          if ( !*v48 )
            goto LABEL_235;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 464LL));
          if ( v44 >= *(_DWORD *)(v43 + 24) )
            goto LABEL_238;
          v54 = Instance;
          Instance = *v48;
          if ( !*v48 )
            goto LABEL_235;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 528LL));
          if ( v54 != (_DWORD)Instance )
          {
            if ( v44 >= *(_DWORD *)(v43 + 24) )
              goto LABEL_238;
            Instance = *v48;
            if ( !*v48 )
              goto LABEL_235;
            BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
          }
        }
        if ( v44 >= *(_DWORD *)(v43 + 24) )
          goto LABEL_238;
        Instance = *v48;
        if ( !*v48 )
          goto LABEL_235;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_235;
          Instance = BattleData__checkAlivePlayers((BattleData_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_68;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_235;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_68;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_235;
          if ( !BattleData__IsWaveSetupAsOneParty((BattleData_o *)Instance, 0) )
            goto LABEL_114;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_235;
          Instance = BattleData__IsChangeNextPartyForWaveMyDecks((BattleData_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
LABEL_68:
            v55 = 1;
          }
          else
          {
LABEL_114:
            Instance = (__int64)p_fields->data;
            if ( !p_fields->data )
              goto LABEL_235;
            Instance = BattleData__IsWaveSetupSwitchParty((BattleData_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)p_fields->data;
              if ( !p_fields->data )
                goto LABEL_235;
              Instance = BattleData__TrySearchNextAlivePartyIndex((BattleData_o *)Instance, &targetIndex, 0);
              v55 = Instance & 1;
            }
            else
            {
              v55 = 0;
            }
          }
          if ( v44 >= *(_DWORD *)(v43 + 24) )
            goto LABEL_238;
          Instance = *v48;
          if ( !*v48 )
            goto LABEL_235;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *v153,
                       this->fields.logic,
                       v55,
                       actiondata,
                       0);
          if ( v44 >= *(_DWORD *)(v43 + 24) )
            goto LABEL_238;
          v56 = Instance;
          Instance = *v48;
          if ( !*v48 )
            goto LABEL_235;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v44 >= *(_DWORD *)(v43 + 24) )
              goto LABEL_238;
            Instance = *v48;
            if ( !*v48 )
              goto LABEL_235;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_235;
            v57 = (Il2CppObject *)Instance;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v44 >= *(_DWORD *)(v43 + 24) )
                goto LABEL_238;
              Instance = (__int64)v151;
              if ( !*v48 || !v151 )
                goto LABEL_235;
              System_Collections_Generic_Dictionary_int__object___Add(
                v151,
                *(_DWORD *)(*v48 + 24),
                v57,
                (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v44 >= *(_DWORD *)(v43 + 24) )
            goto LABEL_238;
          if ( !*v48 )
            goto LABEL_235;
          Instance = *(_QWORD *)(*v48 + 848);
          if ( !Instance )
            goto LABEL_235;
          v156 |= v56;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
        }
        if ( v44 >= *(_DWORD *)(v43 + 24) )
          goto LABEL_238;
        v58 = (BattleServantData_o *)*v48;
        if ( !*v48 )
          goto LABEL_235;
        if ( v58->fields.isBuffProgressFlg )
        {
          v59 = *(_BYTE *)(v3 + 16);
          v60 = *(System_Int32_array **)(v3 + 24);
          v61 = this->fields.logic;
          v62 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v62, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v58,
                                v59,
                                v60,
                                v61,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v62,
                                0);
          if ( !v45 )
            goto LABEL_235;
          System_Collections_Generic_List_object___AddRange(
            v45,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v44 >= *(_DWORD *)(v43 + 24) )
            goto LABEL_238;
          Instance = *v48;
          v3 = v157;
          if ( !*v48 )
            goto LABEL_235;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v44 >= *(_DWORD *)(v43 + 24) )
              goto LABEL_238;
            Instance = *v48;
            if ( !*v48 )
              goto LABEL_235;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v45, 0);
              if ( (Instance & 1) == 0 )
              {
                if ( v44 >= *(_DWORD *)(v43 + 24) )
                  goto LABEL_238;
                if ( !*v48 )
                  goto LABEL_235;
                v63 = *(_DWORD *)(*v48 + 24);
                v64 = System_Collections_Generic_List_object___ToArray(
                        v45,
                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                Instance = (__int64)v152;
                if ( !v152 )
                  goto LABEL_235;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v152,
                  v63,
                  &v64->obj,
                  (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v44 >= *(_DWORD *)(v43 + 24) )
            goto LABEL_238;
          if ( !*v48 )
            goto LABEL_235;
          Instance = (__int64)v154;
          if ( !v154 )
            goto LABEL_235;
          v5 = *(unsigned int *)(*v48 + 24);
          v65 = v154->fields._items;
          v66 = Method_System_Collections_Generic_List_int__Add__;
          ++v154->fields._version;
          if ( !v65 )
            goto LABEL_235;
          v67 = v154->fields._size;
          if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v154,
              v5,
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v154->fields._size = v67 + 1;
            v65->m_Items[v67] = v5;
          }
        }
        if ( (signed int)++v44 >= *(_DWORD *)(v43 + 24) )
          goto LABEL_120;
      }
    }
    v156 = 0;
LABEL_120:
    v42 = p_fields->data;
    v29 = v154;
    if ( !p_fields->data )
      goto LABEL_235;
  }
  if ( !v29 )
    goto LABEL_235;
  battleEvent = v42->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v29,
                        (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_235;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v3 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v69 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  perf = v69->fields.perf;
  if ( !perf )
    goto LABEL_235;
  Instance = (__int64)v69->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_235;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  if ( !p_fields->data )
    goto LABEL_235;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)p_fields->data->fields.aiNpcDataList;
  v72 = (System_Action_object__o *)sub_1C942E4(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v72,
    (Il2CppObject *)v3,
    Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_235;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v72,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  if ( !p_fields->data )
    goto LABEL_235;
  Instance = (__int64)p_fields->data->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_235;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v3 + 16),
    0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_235;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)Instance, 0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *v153, v73);
  v74 = this->fields.data;
  if ( !v74 )
    goto LABEL_235;
  Instance = (__int64)v151;
  v74->fields.currentTurn = 0;
  if ( !v151 )
    goto LABEL_235;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v160,
    v151,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v161 = v160;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v161,
                               (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v161.fields._current.fields.value;
    key = (int32_t)v161.fields._current.fields.key;
    targetIndex = 0;
    if ( !v161.fields._current.fields.value )
      sub_1C942F0(Entity, v76);
    monitor = (int)v161.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      v80 = 0;
      v81 = 1;
LABEL_138:
      if ( v80 >= (unsigned int)monitor )
        sub_1C942F8(Entity);
      v82 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v80);
      if ( !v82 )
        sub_1C942F0(Entity, v76);
      if ( v82->fields._isRemove )
        goto LABEL_174;
      if ( !v12 )
        sub_1C942F0(Entity, v76);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v12,
                 v82->fields.buffId,
                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_174;
      v83 = (BattleSkillInfoData_o *)sub_1C942E4(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v83, 0);
      if ( !v83 )
        sub_1C942F0(v84, v85);
      v83->fields.svtUniqueId = key;
      vals = v82->fields.vals;
      if ( !vals )
        sub_1C942F0(v84, v85);
      if ( !LODWORD(vals->max_length) )
        sub_1C942F8(v84);
      v87 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v83->klass->vtable._4_set_skillId.methodPtr)(
              v83,
              (unsigned int)vals->m_Items[0],
              v83->klass->vtable._4_set_skillId.method);
      v89 = v82->fields.vals;
      if ( !v89 )
        sub_1C942F0(v87, v88);
      if ( LODWORD(v89->max_length) <= 1 )
        sub_1C942F8(v87);
      v83->fields.skilllv = v89->m_Items[1];
      if ( !p_fields->data )
        sub_1C942F0(0, v88);
      ServantData = BattleData__getServantData(p_fields->data, v83->fields.svtUniqueId, 0);
      v91 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v83->klass->vtable._5_get_skillId.methodPtr)(
              v83,
              v83->klass->vtable._5_get_skillId.method);
      if ( !v158 )
        sub_1C942F0(0, v91);
      v92 = SkillLvMaster__GetEntity(v158, v91, v83->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C942F0(v92, v93);
      v94 = v92;
      if ( !p_fields->data )
        sub_1C942F0(0, v93);
      v95 = BattleData__checkAliveOther(p_fields->data, ServantData->fields.uniqueId, 0);
      if ( !v95 )
      {
        if ( !v94 )
          sub_1C942F0(v95, v96);
        v97 = this->fields.logic;
        if ( !v97 )
          sub_1C942F0(0, v96);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v97, v94->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_174;
      }
      v98 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v82, 0);
      if ( v98 < 0 )
      {
        TargetIds = Target__getTargetIds(p_fields->data, v83->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v83, 0);
      }
      else
      {
        v99 = sub_1C94140(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v99;
        if ( !v99 )
          sub_1C942F0(0, v100);
        if ( !*(_DWORD *)(v99 + 24) )
          sub_1C942F8(v99);
        exists = 0;
        *(_DWORD *)(v99 + 32) = v98;
      }
      logicskill = this->fields.logicskill;
      v104 = sub_1C94140(int___TypeInfo, 1);
      if ( !v104 )
        sub_1C942F0(0, v105);
      if ( !*(_DWORD *)(v104 + 24) )
        sub_1C942F8(v104);
      *(_DWORD *)(v104 + 32) = key;
      if ( !logicskill )
        sub_1C942F0(v104, v105);
      v106 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v83,
                                                   (System_Int32_array *)v104,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0);
      v108 = v106;
      if ( (v81 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v106, 0);
        if ( IsNullOrEmpty )
        {
          v81 = 1;
          goto LABEL_172;
        }
        if ( !v108 )
          sub_1C942F0(IsNullOrEmpty, v107);
        if ( !LODWORD(v108[1].monitor) )
          sub_1C942F8(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v108[2].klass;
        if ( !klass )
          sub_1C942F0(0, v107);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v81 = 0;
LABEL_172:
      v111 = this->fields.logic;
      if ( !v111 )
        sub_1C942F0(0, v107);
      BattleLogic__addBattleLogicTask(v111, (BattleLogicTask_array *)v108, 0);
LABEL_174:
      v80 = targetIndex + 1;
      targetIndex = v80;
      monitor = (int)value[1].monitor;
      if ( v80 >= monitor )
        continue;
      goto LABEL_138;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v161,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v152;
  if ( !v152 )
    goto LABEL_235;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v160,
    v152,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v161 = v160;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v161,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1C942F0(0, v112);
    v113 = (int32_t)v161.fields._current.fields.key;
    v114 = v161.fields._current.fields.value;
    v115 = (BuffEntity_o *)BattleData__getServantData(p_fields->data, (int32_t)v161.fields._current.fields.key, 0);
    v117 = (BattleServantData_o *)v115;
    if ( v115 )
    {
      v118 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C942E4(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_46734412(v118, v117, 0, 0, 0, 0, 0, 1, 0);
      if ( !v118 )
        sub_1C942F0(v115, v116);
      selfConcatSvtIndividualities_k__BackingField = v118->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
    }
    targetIndex = 0;
    if ( !v114 )
      sub_1C942F0(v115, v116);
    v120 = (int)v114[1].monitor;
    if ( v120 >= 1 )
    {
      v121 = 0;
      do
      {
        if ( v121 >= (unsigned int)v120 )
          sub_1C942F8(v115);
        v122 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v114[2].klass + v121);
        if ( !v122 )
          sub_1C942F0(v115, v116);
        if ( !v122->fields._isRemove )
        {
          if ( !v12 )
            sub_1C942F0(v115, v116);
          v115 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v12,
                                   v122->fields.buffId,
                                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v115 )
          {
            if ( BuffEntity__isEndAct(v115, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v122, 1, 0) )
            {
              v124 = (BattleSkillInfoData_o *)sub_1C942E4(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v124, 0);
              if ( !v124 )
                sub_1C942F0(v125, v126);
              v124->fields.svtUniqueId = v113;
              v127 = v122->fields.vals;
              if ( !v127 )
                sub_1C942F0(v125, v126);
              if ( !LODWORD(v127->max_length) )
                sub_1C942F8(v125);
              v128 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v124->klass->vtable._4_set_skillId.methodPtr)(
                       v124,
                       (unsigned int)v127->m_Items[0],
                       v124->klass->vtable._4_set_skillId.method);
              v130 = v122->fields.vals;
              if ( !v130 )
                sub_1C942F0(v128, v129);
              if ( LODWORD(v130->max_length) <= 1 )
                sub_1C942F8(v128);
              v124->fields.skilllv = v130->m_Items[1];
              if ( !p_fields->data )
                sub_1C942F0(0, v129);
              v131 = BattleData__getServantData(p_fields->data, v124->fields.svtUniqueId, 0);
              v132 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v124->klass->vtable._5_get_skillId.methodPtr)(
                       v124,
                       v124->klass->vtable._5_get_skillId.method);
              if ( !v158 )
                sub_1C942F0(0, v132);
              v133 = SkillLvMaster__GetEntity(v158, v132, v124->fields.skilllv, 0);
              if ( !v131 )
                sub_1C942F0(v133, v134);
              v135 = v133;
              if ( !p_fields->data )
                sub_1C942F0(0, v134);
              v136 = BattleData__checkAliveOther(p_fields->data, v131->fields.uniqueId, 0);
              if ( v136 )
                goto LABEL_207;
              if ( !v135 )
                sub_1C942F0(v136, v137);
              v138 = this->fields.logic;
              if ( !v138 )
                sub_1C942F0(0, v137);
              if ( BattleLogic__checkPtTargetFunction(v138, v135->fields.funcId, 0) )
              {
LABEL_207:
                v139 = BattleServantData__GetRevengeIdCheckOpponentOnly(v131, v122, 0);
                if ( v139 < 0 )
                {
                  v142 = Target__getTargetIds(p_fields->data, v124->fields.svtUniqueId, -1, v113, 13, 0, 0);
                  v143 = BattleSkillInfoData__ExistsNoTargetNoActionType(v124, 0);
                }
                else
                {
                  v140 = sub_1C94140(int___TypeInfo, 1);
                  v142 = (System_Int32_array *)v140;
                  if ( !v140 )
                    sub_1C942F0(0, v141);
                  if ( !*(_DWORD *)(v140 + 24) )
                    sub_1C942F8(v140);
                  v143 = 0;
                  *(_DWORD *)(v140 + 32) = v139;
                }
                v144 = this->fields.logicskill;
                v145 = sub_1C94140(int___TypeInfo, 1);
                if ( !v145 )
                  sub_1C942F0(0, v146);
                if ( !*(_DWORD *)(v145 + 24) )
                  sub_1C942F8(v145);
                *(_DWORD *)(v145 + 32) = v113;
                if ( !v144 )
                  sub_1C942F0(v145, v146);
                v147 = BattleLogicSkill__taskSkill(v144, v124, (System_Int32_array *)v145, v142, 1, v143, 0, 0, 0, 0);
                v148 = this->fields.logic;
                if ( !v148 )
                  sub_1C942F0(0, v147);
                BattleLogic__addBattleLogicTask(v148, v147, 0);
              }
            }
            if ( !p_fields->data )
              sub_1C942F0(0, v123);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(p_fields->data, v122, 0);
          }
        }
        v121 = targetIndex + 1;
        targetIndex = v121;
        v120 = (int)v114[1].monitor;
      }
      while ( v121 < v120 );
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v161,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v152, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_235;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0, 0);
  }
  if ( !p_fields->data
    || (Instance = (__int64)p_fields->data->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_235:
    sub_1C942F0(Instance, v5);
  }
  if ( (v156 & 1) != 0 )
    v149 = actiondata;
  else
    v149 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v149, actiondata, 0);
}


BattleActionData_o *BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x26
  __int64 Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x28
  unsigned int v31; // w23
  System_Collections_Generic_List_object__o *v32; // x29
  __int64 v33; // x26
  BattleServantData_o *v34; // x21
  __int64 *v35; // x26
  BattleServantData_o *v36; // t1
  BattleLogic_o *logic; // x27
  char v38; // w20
  System_Int32_array *v39; // x25
  System_Func_object__bool__o *v40; // x24
  int v41; // w21
  bool v42; // w3
  char v43; // w21
  Il2CppObject *v44; // x2
  BattleServantData_o *v45; // x21
  BattleLogic_o *v46; // x25
  char v47; // w20
  System_Int32_array *v48; // x24
  System_Func_object__bool__o *v49; // x27
  int32_t v50; // w21
  System_Object_array *v51; // x2
  unsigned int v52; // w8
  struct System_Int32_array *items; // x9
  _QWORD *v54; // x10
  __int64 size; // x11
  BattleData_o *v56; // x21
  BattleBuffData_o *BuffData; // x20
  struct BattleData_o *v58; // x8
  __int64 v59; // x27
  int v60; // w8
  unsigned int v61; // w20
  __int64 v62; // x23
  __int64 *v63; // x23
  __int64 v64; // t1
  Il2CppObject *v65; // x21
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  struct BaseBattleEvent_o *battleEvent; // x21
  struct BattleData_o *v70; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v72; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x21
  System_Action_object__o *v74; // x26
  struct BattleData_o *v75; // x8
  const MethodInfo *v76; // x2
  struct BattleData_o *v77; // x8
  Il2CppObject *Entity; // x0
  __int64 v79; // x1
  Il2CppObject *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v83; // w23
  char v84; // w20
  BattleBuffData_BuffData_o *v85; // x28
  BattleSkillInfoData_o *v86; // x26
  __int64 v87; // x0
  __int64 v88; // x1
  struct System_Int32_array *vals; // x8
  __int64 v90; // x0
  __int64 v91; // x1
  struct System_Int32_array *v92; // x8
  BattleData_o *v93; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v95; // x1
  SkillLvEntity_o *v96; // x0
  __int64 v97; // x1
  SkillLvEntity_o *v98; // x21
  BattleData_o *v99; // x0
  _BOOL8 v100; // x0
  __int64 v101; // x1
  BattleLogic_o *v102; // x0
  int32_t v103; // w29
  __int64 v104; // x0
  __int64 v105; // x1
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v109; // x0
  __int64 v110; // x1
  System_Collections_ICollection_o *v111; // x0
  __int64 v112; // x1
  System_Collections_ICollection_o *v113; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v116; // x0
  __int64 v117; // x1
  BattleData_o *v118; // x0
  int32_t v119; // w24
  Il2CppObject *v120; // x23
  BuffEntity_o *v121; // x0
  __int64 v122; // x1
  BattleServantData_o *v123; // x21
  BattleBuffData_CheckIndividualitiesData_o *v124; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v126; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v128; // x26
  __int64 v129; // x1
  BattleSkillInfoData_o *v130; // x27
  __int64 v131; // x0
  __int64 v132; // x1
  struct System_Int32_array *v133; // x8
  __int64 v134; // x0
  __int64 v135; // x1
  struct System_Int32_array *v136; // x8
  BattleData_o *v137; // x0
  BattleServantData_o *v138; // x28
  __int64 v139; // x1
  SkillLvEntity_o *v140; // x0
  __int64 v141; // x1
  SkillLvEntity_o *v142; // x21
  BattleData_o *v143; // x0
  _BOOL8 v144; // x0
  __int64 v145; // x1
  BattleLogic_o *v146; // x0
  int32_t v147; // w29
  __int64 v148; // x0
  __int64 v149; // x1
  System_Int32_array *v150; // x21
  bool v151; // w28
  BattleLogicSkill_o *v152; // x29
  __int64 v153; // x0
  __int64 v154; // x1
  BattleLogicTask_array *v155; // x1
  BattleLogic_o *v156; // x0
  BattleData_o *v157; // x0
  struct BattleData_o *v158; // x8
  BattleActionData_o *v159; // x1
  System_Collections_Generic_Dictionary_int__object__o *v161; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v162; // [xsp+20h] [xbp-F0h]
  System_Int32_array **v163; // [xsp+28h] [xbp-E8h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-E0h]
  char v165; // [xsp+3Ch] [xbp-D4h]
  System_Collections_Generic_List_int__o *v166; // [xsp+40h] [xbp-D0h]
  __int64 v167; // [xsp+48h] [xbp-C8h]
  SkillLvMaster_o *v168; // [xsp+50h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v169; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v170; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4D2FB5A & 1) == 0 )
  {
    sub_1C94098(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C94098(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C94098(&BattleSkillInfoData_TypeInfo);
    sub_1C94098(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__);
    sub_1C94098(&BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
    sub_1C94098(&StringLiteral_8785/*"MOTION_PLAYER_TURN_END"*/);
    byte_4D2FB5A = 1;
  }
  memset(&v170, 0, sizeof(v170));
  v4 = sub_1C942E4(BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass43_0___ctor((BattleLogicNomal___c__DisplayClass43_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_225;
  *(_QWORD *)(v4 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)this, v7, v8, v9, v10, v11, v12);
  BattleLogicNomal__SetNextTargetId(this, v13);
  baseActData = (BattleActionData_o *)sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0);
  *(_BYTE *)(v4 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_225;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_225;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !baseActData )
    goto LABEL_225;
  BattleActionData__setStateField(baseActData, 0);
  v15 = StringLiteral_8785/*"MOTION_PLAYER_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8785/*"MOTION_PLAYER_TURN_END"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&baseActData->fields.motionname, v15, v16, v17, v18, v19, v20, v21);
  v162 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v162,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v161 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v161,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v168 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_225;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  v163 = (System_Int32_array **)(v4 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)QuestIndividualities, v24, v25, v26, v27, v28, v29);
  v166 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v166,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_225;
  v30 = Instance;
  v167 = v4;
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v31 = 0;
    v165 = 0;
    while ( 1 )
    {
      v32 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( v31 >= *(_DWORD *)(v30 + 24) )
        break;
      v33 = v30 + 8LL * (int)v31;
      v36 = *(BattleServantData_o **)(v33 + 32);
      v35 = (__int64 *)(v33 + 32);
      v34 = v36;
      if ( !v36 )
        goto LABEL_225;
      if ( v34->fields.isBuffProgressFlg )
      {
        logic = this->fields.logic;
        v38 = *(_BYTE *)(v167 + 16);
        v39 = *(System_Int32_array **)(v167 + 24);
        v40 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v40, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v34,
                              v38,
                              v39,
                              logic,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v40,
                              0);
        if ( !v32 )
          goto LABEL_225;
        System_Collections_Generic_List_object___AddRange(
          v32,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v31 >= *(_DWORD *)(v30 + 24) )
          break;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_225;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 464LL));
        if ( v31 >= *(_DWORD *)(v30 + 24) )
          break;
        v41 = Instance;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_225;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 528LL));
        if ( v41 != (_DWORD)Instance )
        {
          if ( v31 >= *(_DWORD *)(v30 + 24) )
            break;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_225;
          BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
        }
      }
      if ( v31 >= *(_DWORD *)(v30 + 24) )
        break;
      Instance = *v35;
      if ( !*v35 )
        goto LABEL_225;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)this->fields.data;
        if ( !Instance )
          goto LABEL_225;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0);
        if ( (Instance & 1) != 0 )
        {
          v42 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_225;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0);
          v42 = Instance & 1;
        }
        if ( v31 >= *(_DWORD *)(v30 + 24) )
          break;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_225;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *v163,
                     this->fields.logic,
                     v42,
                     baseActData,
                     0);
        if ( v31 >= *(_DWORD *)(v30 + 24) )
          break;
        v43 = Instance;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_225;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v31 >= *(_DWORD *)(v30 + 24) )
            break;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_225;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_225;
          v44 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v31 >= *(_DWORD *)(v30 + 24) )
              break;
            Instance = (__int64)v161;
            if ( !*v35 || !v161 )
              goto LABEL_225;
            System_Collections_Generic_Dictionary_int__object___Add(
              v161,
              *(_DWORD *)(*v35 + 24),
              v44,
              (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v31 >= *(_DWORD *)(v30 + 24) )
          break;
        if ( !*v35 )
          goto LABEL_225;
        Instance = *(_QWORD *)(*v35 + 848);
        if ( !Instance )
          goto LABEL_225;
        v165 |= v43;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
      }
      if ( v31 >= *(_DWORD *)(v30 + 24) )
        break;
      v45 = (BattleServantData_o *)*v35;
      if ( !*v35 )
        goto LABEL_225;
      if ( v45->fields.isBuffProgressFlg )
      {
        v46 = this->fields.logic;
        v47 = *(_BYTE *)(v167 + 16);
        v48 = *(System_Int32_array **)(v167 + 24);
        v49 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v49, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v45,
                              v47,
                              v48,
                              v46,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v49,
                              0);
        if ( !v32 )
          goto LABEL_225;
        System_Collections_Generic_List_object___AddRange(
          v32,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v31 >= *(_DWORD *)(v30 + 24) )
          break;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_225;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v31 >= *(_DWORD *)(v30 + 24) )
            break;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_225;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v32, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( v31 >= *(_DWORD *)(v30 + 24) )
                break;
              if ( !*v35 )
                goto LABEL_225;
              v50 = *(_DWORD *)(*v35 + 24);
              v51 = System_Collections_Generic_List_object___ToArray(
                      v32,
                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
              Instance = (__int64)v162;
              if ( !v162 )
                goto LABEL_225;
              System_Collections_Generic_Dictionary_int__object___Add(
                v162,
                v50,
                &v51->obj,
                (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v52 = *(_DWORD *)(v30 + 24);
        if ( v31 >= v52 )
          break;
        Instance = (__int64)v166;
        if ( !*v35 )
          goto LABEL_225;
        if ( !v166 )
          goto LABEL_225;
        v6 = *(unsigned int *)(*v35 + 24);
        items = v166->fields._items;
        v54 = Method_System_Collections_Generic_List_int__Add__;
        ++v166->fields._version;
        if ( !items )
          goto LABEL_225;
        size = v166->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v166,
            v6,
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          v52 = *(_DWORD *)(v30 + 24);
        }
        else
        {
          v166->fields._size = size + 1;
          items->m_Items[size] = v6;
        }
        if ( v31 >= v52 )
          break;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_225;
        v56 = this->fields.data;
        BuffData = BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v32,
                              (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v56 )
          goto LABEL_225;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v56, BuffData, (BattleBuffData_BuffData_array *)Instance, 0);
      }
      if ( (signed int)++v31 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_80;
    }
LABEL_228:
    sub_1C942F8(Instance);
  }
  v165 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v58 = this->fields.data;
  if ( !v58 )
    goto LABEL_225;
  v59 = Instance;
  Instance = (__int64)v166;
  if ( !v58->fields.leaderDown || !v58->fields.endbattleFlg )
  {
    if ( !v59 )
      goto LABEL_225;
    v60 = *(_DWORD *)(v59 + 24);
    if ( v60 >= 1 )
    {
      v61 = 0;
      while ( v61 < v60 )
      {
        v62 = v59 + 8LL * (int)v61;
        v64 = *(_QWORD *)(v62 + 32);
        v63 = (__int64 *)(v62 + 32);
        Instance = v64;
        if ( !v64 )
          goto LABEL_225;
        if ( *(_BYTE *)(Instance + 572) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v167 + 16),
                                *(System_Int32_array **)(v167 + 24),
                                this->fields.logic,
                                0,
                                0);
          if ( v61 >= *(_DWORD *)(v59 + 24) )
            goto LABEL_228;
          v65 = (Il2CppObject *)Instance;
          Instance = *v63;
          if ( !*v63 )
            goto LABEL_225;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v61 >= *(_DWORD *)(v59 + 24) )
              goto LABEL_228;
            Instance = *v63;
            if ( !*v63 )
              goto LABEL_225;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v65 )
                goto LABEL_225;
              if ( v65[1].monitor )
              {
                if ( v61 >= *(_DWORD *)(v59 + 24) )
                  goto LABEL_228;
                Instance = (__int64)v162;
                if ( !*v63 || !v162 )
                  goto LABEL_225;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v162,
                  *(_DWORD *)(*v63 + 24),
                  v65,
                  (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v61 >= *(_DWORD *)(v59 + 24) )
            goto LABEL_228;
          Instance = (__int64)v166;
          if ( !*v63 )
            goto LABEL_225;
          if ( !v166 )
            goto LABEL_225;
          v6 = *(unsigned int *)(*v63 + 24);
          v66 = v166->fields._items;
          v67 = Method_System_Collections_Generic_List_int__Add__;
          ++v166->fields._version;
          if ( !v66 )
            goto LABEL_225;
          v68 = v166->fields._size;
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v166,
              v6,
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v166->fields._size = v68 + 1;
            v66->m_Items[v68] = v6;
          }
        }
        v60 = *(_DWORD *)(v59 + 24);
        if ( (int)++v61 >= v60 )
          goto LABEL_110;
      }
      goto LABEL_228;
    }
LABEL_110:
    v58 = this->fields.data;
    Instance = (__int64)v166;
    if ( !v58 )
      goto LABEL_225;
  }
  if ( !Instance )
    goto LABEL_225;
  battleEvent = v58->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_225;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v167 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v70 = this->fields.data;
  if ( !v70 )
    goto LABEL_225;
  perf = v70->fields.perf;
  if ( !perf )
    goto LABEL_225;
  Instance = (__int64)v70->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_225;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  v72 = this->fields.data;
  if ( !v72 )
    goto LABEL_225;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v72->fields.aiNpcDataList;
  v74 = (System_Action_object__o *)sub_1C942E4(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v74,
    (Il2CppObject *)v167,
    Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_225;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v74,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v75 = this->fields.data;
  if ( !v75 )
    goto LABEL_225;
  Instance = (__int64)v75->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_225;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v167 + 16),
    0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v167 + 24), v76);
  v77 = this->fields.data;
  if ( !v77 )
    goto LABEL_225;
  Instance = (__int64)v161;
  v77->fields.currentTurn = 1;
  if ( !v161 )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v169,
    v161,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v170 = v169;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v170,
                               (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v170.fields._current.fields.value;
    if ( !v170.fields._current.fields.value )
      sub_1C942F0(Entity, v79);
    monitor = (int)v170.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v170.fields._current.fields.key;
      v83 = 0;
      v84 = 1;
LABEL_127:
      if ( v83 >= monitor )
        sub_1C942F8(Entity);
      v85 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + (int)v83);
      if ( !v85 )
        sub_1C942F0(Entity, v79);
      if ( v85->fields._isRemove )
        goto LABEL_163;
      if ( !v14 )
        sub_1C942F0(Entity, v79);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v14,
                 v85->fields.buffId,
                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_163;
      v86 = (BattleSkillInfoData_o *)sub_1C942E4(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v86, 0);
      if ( !v86 )
        sub_1C942F0(v87, v88);
      v86->fields.svtUniqueId = key;
      vals = v85->fields.vals;
      if ( !vals )
        sub_1C942F0(v87, v88);
      if ( !LODWORD(vals->max_length) )
        sub_1C942F8(v87);
      v90 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v86->klass->vtable._4_set_skillId.methodPtr)(
              v86,
              (unsigned int)vals->m_Items[0],
              v86->klass->vtable._4_set_skillId.method);
      v92 = v85->fields.vals;
      if ( !v92 )
        sub_1C942F0(v90, v91);
      if ( LODWORD(v92->max_length) <= 1 )
        sub_1C942F8(v90);
      v86->fields.skilllv = v92->m_Items[1];
      v93 = this->fields.data;
      if ( !v93 )
        sub_1C942F0(0, v91);
      ServantData = BattleData__getServantData(v93, v86->fields.svtUniqueId, 0);
      v95 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v86->klass->vtable._5_get_skillId.methodPtr)(
              v86,
              v86->klass->vtable._5_get_skillId.method);
      if ( !v168 )
        sub_1C942F0(0, v95);
      v96 = SkillLvMaster__GetEntity(v168, v95, v86->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C942F0(v96, v97);
      v98 = v96;
      v99 = this->fields.data;
      if ( !v99 )
        sub_1C942F0(0, v97);
      v100 = BattleData__checkAliveOther(v99, ServantData->fields.uniqueId, 0);
      if ( !v100 )
      {
        if ( !v98 )
          sub_1C942F0(v100, v101);
        v102 = this->fields.logic;
        if ( !v102 )
          sub_1C942F0(0, v101);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v102, v98->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_163;
      }
      v103 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v85, 0);
      if ( v103 < 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v86->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v86, 0);
      }
      else
      {
        v104 = sub_1C94140(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v104;
        if ( !v104 )
          sub_1C942F0(0, v105);
        if ( !*(_DWORD *)(v104 + 24) )
          sub_1C942F8(v104);
        exists = 0;
        *(_DWORD *)(v104 + 32) = v103;
      }
      logicskill = this->fields.logicskill;
      v109 = sub_1C94140(int___TypeInfo, 1);
      if ( !v109 )
        sub_1C942F0(0, v110);
      if ( !*(_DWORD *)(v109 + 24) )
        sub_1C942F8(v109);
      *(_DWORD *)(v109 + 32) = key;
      if ( !logicskill )
        sub_1C942F0(v109, v110);
      v111 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v86,
                                                   (System_Int32_array *)v109,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0);
      v113 = v111;
      if ( (v84 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v111, 0);
        if ( IsNullOrEmpty )
        {
          v84 = 1;
          goto LABEL_161;
        }
        if ( !v113 )
          sub_1C942F0(IsNullOrEmpty, v112);
        if ( !LODWORD(v113[1].monitor) )
          sub_1C942F8(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v113[2].klass;
        if ( !klass )
          sub_1C942F0(0, v112);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v84 = 0;
LABEL_161:
      v116 = this->fields.logic;
      if ( !v116 )
        sub_1C942F0(0, v112);
      BattleLogic__addBattleLogicTask(v116, (BattleLogicTask_array *)v113, 0);
LABEL_163:
      monitor = (int)value[1].monitor;
      if ( (int)++v83 >= monitor )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v170,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v162;
  if ( !v162 )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v169,
    v162,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v170 = v169;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v170,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v118 = this->fields.data;
    if ( !v118 )
      sub_1C942F0(0, v117);
    v119 = (int32_t)v170.fields._current.fields.key;
    v120 = v170.fields._current.fields.value;
    v121 = (BuffEntity_o *)BattleData__getServantData(v118, (int32_t)v170.fields._current.fields.key, 0);
    v123 = (BattleServantData_o *)v121;
    if ( v121 )
    {
      v124 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C942E4(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_46734412(v124, v123, 0, 0, 0, 0, 0, 1, 0);
      if ( !v124 )
        sub_1C942F0(v121, v122);
      selfConcatSvtIndividualities_k__BackingField = v124->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v120 )
LABEL_257:
        sub_1C942F0(v121, v122);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
      if ( !v120 )
        goto LABEL_257;
    }
    v126 = (int)v120[1].monitor;
    if ( v126 >= 1 )
    {
      for ( i = 0; i < v126; ++i )
      {
        if ( i >= (unsigned int)v126 )
          sub_1C942F8(v121);
        v128 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v120[2].klass + i);
        if ( !v128 )
          sub_1C942F0(v121, v122);
        if ( !v128->fields._isRemove )
        {
          if ( !v14 )
            sub_1C942F0(v121, v122);
          v121 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v14,
                                   v128->fields.buffId,
                                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v121 )
          {
            if ( BuffEntity__isEndAct(v121, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v128, 1, 0) )
            {
              v130 = (BattleSkillInfoData_o *)sub_1C942E4(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v130, 0);
              if ( !v130 )
                sub_1C942F0(v131, v132);
              v130->fields.svtUniqueId = v119;
              v133 = v128->fields.vals;
              if ( !v133 )
                sub_1C942F0(v131, v132);
              if ( !LODWORD(v133->max_length) )
                sub_1C942F8(v131);
              v134 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v130->klass->vtable._4_set_skillId.methodPtr)(
                       v130,
                       (unsigned int)v133->m_Items[0],
                       v130->klass->vtable._4_set_skillId.method);
              v136 = v128->fields.vals;
              if ( !v136 )
                sub_1C942F0(v134, v135);
              if ( LODWORD(v136->max_length) <= 1 )
                sub_1C942F8(v134);
              v130->fields.skilllv = v136->m_Items[1];
              v137 = this->fields.data;
              if ( !v137 )
                sub_1C942F0(0, v135);
              v138 = BattleData__getServantData(v137, v130->fields.svtUniqueId, 0);
              v139 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v130->klass->vtable._5_get_skillId.methodPtr)(
                       v130,
                       v130->klass->vtable._5_get_skillId.method);
              if ( !v168 )
                sub_1C942F0(0, v139);
              v140 = SkillLvMaster__GetEntity(v168, v139, v130->fields.skilllv, 0);
              if ( !v138 )
                sub_1C942F0(v140, v141);
              v142 = v140;
              v143 = this->fields.data;
              if ( !v143 )
                sub_1C942F0(0, v141);
              v144 = BattleData__checkAliveOther(v143, v138->fields.uniqueId, 0);
              if ( v144 )
                goto LABEL_196;
              if ( !v142 )
                sub_1C942F0(v144, v145);
              v146 = this->fields.logic;
              if ( !v146 )
                sub_1C942F0(0, v145);
              if ( BattleLogic__checkPtTargetFunction(v146, v142->fields.funcId, 0) )
              {
LABEL_196:
                v147 = BattleServantData__GetRevengeIdCheckOpponentOnly(v138, v128, 0);
                if ( v147 < 0 )
                {
                  v150 = Target__getTargetIds(this->fields.data, v130->fields.svtUniqueId, -1, v119, 13, 0, 0);
                  v151 = BattleSkillInfoData__ExistsNoTargetNoActionType(v130, 0);
                }
                else
                {
                  v148 = sub_1C94140(int___TypeInfo, 1);
                  v150 = (System_Int32_array *)v148;
                  if ( !v148 )
                    sub_1C942F0(0, v149);
                  if ( !*(_DWORD *)(v148 + 24) )
                    sub_1C942F8(v148);
                  v151 = 0;
                  *(_DWORD *)(v148 + 32) = v147;
                }
                v152 = this->fields.logicskill;
                v153 = sub_1C94140(int___TypeInfo, 1);
                if ( !v153 )
                  sub_1C942F0(0, v154);
                if ( !*(_DWORD *)(v153 + 24) )
                  sub_1C942F8(v153);
                *(_DWORD *)(v153 + 32) = v119;
                if ( !v152 )
                  sub_1C942F0(v153, v154);
                v155 = BattleLogicSkill__taskSkill(v152, v130, (System_Int32_array *)v153, v150, 1, v151, 0, 0, 0, 0);
                v156 = this->fields.logic;
                if ( !v156 )
                  sub_1C942F0(0, v155);
                BattleLogic__addBattleLogicTask(v156, v155, 0);
              }
            }
            v157 = this->fields.data;
            if ( !v157 )
              sub_1C942F0(0, v129);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(v157, v128, 0);
          }
        }
        v126 = (int)v120[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v170,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_225;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)Instance, 0);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v162, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_225;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0, 0);
  }
  v158 = this->fields.data;
  if ( !v158
    || (Instance = (__int64)v158->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_225:
    sub_1C942F0(Instance, v6);
  }
  if ( (v165 & 1) != 0 )
    v159 = baseActData;
  else
    v159 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v159, baseActData, 0);
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

  if ( (byte_4D2FB56 & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    byte_4D2FB56 = 1;
  }
  v4 = sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0), !task) )
    sub_1C942F0(v5, v6);
  *(_BYTE *)(v4 + 249) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 72) = motionName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 72), (int32_t)motionName, v8, v9, v10, v11, v12, v13);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 136) = motionMessage;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 136), (int32_t)motionMessage, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v4 + 144) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 80) = targetObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 80), (int32_t)targetObject, v22, v23, v24, v25, v26, v27);
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
    goto LABEL_14;
  data = this->fields.data;
  v5 = this;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_14;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0);
  if ( !this )
    goto LABEL_14;
  v6 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0);
  buffEntity = 0;
  if ( !v6->fields.buffData )
    goto LABEL_14;
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
LABEL_14:
    sub_1C942F0(this, task);
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
  __int64 v7; // x21
  int32_t ShiftMotionOverwriteNumber; // w21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  BattleActionData_ShiftServant_o *v16; // x22
  bool isOverwriteShift; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *motionName; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D2FB61 & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&BattleActorControl_TypeInfo);
    this = (BattleLogicNomal_o *)sub_1C94098(&BattleActionData_ShiftServant_TypeInfo);
    byte_4D2FB61 = 1;
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
  ShiftMotionOverwriteNumber = BattleDeckServantData__GetShiftMotionOverwriteNumber((BattleDeckServantData_o *)this, 0);
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  BattleActorControl__GetShiftMotionNameAndOverwriteFlag(ShiftMotionOverwriteNumber, &motionName, &isOverwriteShift, 0);
  v7 = sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  v15 = (int)motionName;
  *(_QWORD *)(v7 + 72) = motionName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 72), v15, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v7 + 252) = isOverwriteShift;
  this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
  if ( !this )
    goto LABEL_20;
  *(_BYTE *)(v7 + 253) = BattleDeckServantData__IsIgnoreShiftWhiteFade((BattleDeckServantData_o *)this, 0);
  v16 = (BattleActionData_ShiftServant_o *)sub_1C942E4(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v16, 0, 0);
  if ( !v16 )
    goto LABEL_20;
  BattleActionData_ShiftServant__setBeforeSvtData(v16, (BattleServantData_o *)v6, 0);
  if ( *(_BYTE *)(v7 + 252) )
    BattleActionData_ShiftServant__SetBeforeWeapon(v16, (BattleServantData_o *)v6, 0);
  BattleServantData__setShiftServant((BattleServantData_o *)v6, v4->fields.data, 1, 0);
  BattleServantData__SetIsBattleShift((BattleServantData_o *)v6, 1, 0);
  BattleActionData_ShiftServant__setCheckSvtData(v16, (BattleServantData_o *)v6, 0);
  BattleActionData__setShiftServant((BattleActionData_o *)v7, v16, 0);
  this = (BattleLogicNomal_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, (int32_t)v6->fields.logic, 1, 0, 0),
        (this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask) == 0) )
  {
LABEL_20:
    sub_1C942F0(this, task);
  }
  if ( BattleDeckServantData__IsBreakShiftHp0((BattleDeckServantData_o *)this, 0) )
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

  if ( (byte_4D2FB57 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_11133/*"RESET_CAMERA_BAT"*/);
    byte_4D2FB57 = 1;
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
              (System_String_o *)StringLiteral_11133/*"RESET_CAMERA_BAT"*/,
              0);
            return v8;
          }
        }
      }
LABEL_18:
      sub_1C942F0(StartTurn, v6);
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
        sub_1C942F8(data);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 572) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1C942F0(data, task);
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
    sub_1C942F0(this, 0);
  max_length = svtList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C942F8(this);
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
    sub_1C942F8(data);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1C942F0(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BattleAttackManager_o *BattleLogicNomal__get_AtkManager(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(this, method);
  return data->fields.battleAtkManager;
}


BaseBattleEvent_o *BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(this, method);
  return data->fields.battleEvent;
}


void BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2FB47 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C94098(&BattleLogic_reactionFunction_TypeInfo);
    byte_4D2FB47 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C942E4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0);
  if ( !list )
    sub_1C942F0(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass57_0_o *v5; // x20
  BattleData_o *ShiftableUniqueId; // x0
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
  BeforeShiftServantReactTaskCreator_o *v25; // x22
  ServantReactTaskCreator_o *v26; // x22
  __int64 v27; // x23
  System_Func_object__bool__o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct BattleLogic_o *v41; // x8
  BattleLogicTask_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  struct BattleLogic_o *v53; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0

  if ( (byte_4D2FB62 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_1C94098(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&ReactTaskTargetFilter_TypeInfo);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass57_0__shiftServantTaskReaction_b__0__);
    sub_1C94098(&BattleLogicNomal___c__DisplayClass57_0_TypeInfo);
    byte_4D2FB62 = 1;
  }
  v5 = (BattleLogicNomal___c__DisplayClass57_0_o *)sub_1C942E4(BattleLogicNomal___c__DisplayClass57_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass57_0___ctor(v5, 0);
  if ( !task )
    goto LABEL_39;
  ActorId = BattleLogicTask__getActorId(task, 0);
  ShiftableUniqueId = (BattleData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v9);
  if ( !v5 )
    goto LABEL_39;
  v5->fields.uniqueId = (int)ShiftableUniqueId;
  if ( !(_DWORD)ShiftableUniqueId )
    return this->fields.zeroTask;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  ShiftableUniqueId = this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleData__getServantData(ShiftableUniqueId, v5->fields.uniqueId, 0);
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  v11 = (BattleServantData_o *)ShiftableUniqueId;
  ShiftableUniqueId = (BattleData_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                        (BattleServantData_o *)ShiftableUniqueId,
                                        0);
  if ( !v11->fields.buffData )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleBuffData__IsShiftGuts(
                                        v11->fields.buffData,
                                        v11,
                                        (BattleBuffData_CheckIndividualitiesData_array *)ShiftableUniqueId,
                                        0);
  if ( ((unsigned __int8)ShiftableUniqueId & 1) != 0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      ShiftableUniqueId = (BattleData_o *)logic->fields.logicReaction;
      if ( ShiftableUniqueId )
      {
        ShiftableUniqueId = (BattleData_o *)BattleLogicReaction__createTaskGuts(
                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                              v5->fields.uniqueId,
                                              1,
                                              0);
        if ( v10 )
        {
          System_Collections_Generic_List_object___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
            (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          v13 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
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
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v13;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
              }
              v53 = this->fields.logic;
              if ( v53 )
              {
                ShiftableUniqueId = (BattleData_o *)v53->fields.logicReaction;
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
                    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C942F0(ShiftableUniqueId, v7);
  }
  BattleServantData__UsedProgressingAppliedFailedGuts(v11, 0);
  v25 = (BeforeShiftServantReactTaskCreator_o *)sub_1C942E4(BeforeShiftServantReactTaskCreator_TypeInfo);
  BeforeShiftServantReactTaskCreator___ctor(v25, 24, 0);
  if ( !v25 )
    goto LABEL_39;
  v26 = ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v25, 0);
  v27 = sub_1C942E4(ReactTaskTargetFilter_TypeInfo);
  ReactTaskTargetFilter___ctor((ReactTaskTargetFilter_o *)v27, 0);
  v28 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_BattleLogicNomal___c__DisplayClass57_0__shiftServantTaskReaction_b__0__,
    0);
  if ( !v27 )
    goto LABEL_39;
  *(_QWORD *)(v27 + 16) = v28;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v27 + 16), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  if ( !v26 )
    goto LABEL_39;
  v26->fields._TargetFilter_k__BackingField = (struct ReactTaskTargetFilter_o *)v27;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v26->fields._TargetFilter_k__BackingField,
    v27,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = this->fields.logic;
  if ( !v41 )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)v41->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleLogicReaction__CreateTasks(
                                        (BattleLogicReaction_o *)ShiftableUniqueId,
                                        v26,
                                        0);
  if ( !v10 )
    goto LABEL_39;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v42 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v42, 0);
  if ( !v42 )
    goto LABEL_39;
  v42->fields.actiontype = 37;
  BattleLogicTask__setActor(v42, 3, v5->fields.uniqueId, 0);
  v49 = v10->fields._items;
  v50 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v49 )
    goto LABEL_39;
  v51 = v10->fields._size;
  if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v42,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &v49->obj.klass + v51;
    v10->fields._size = v51 + 1;
    v52[4] = (Il2CppClass *)v42;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v42, v43, v44, v45, v46, v47, v48);
  }
LABEL_33:
  v55 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v55, 0);
  if ( !v55 )
    goto LABEL_39;
  v55->fields.actiontype = 36;
  BattleLogicTask__setActor(v55, 3, v5->fields.uniqueId, 0);
  v62 = v10->fields._items;
  v63 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v62 )
    goto LABEL_39;
  v64 = v10->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v55,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    v10->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)v55;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)v55, v56, v57, v58, v59, v60, v61);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4D2FB49 & 1) == 0 )
  {
    sub_1C94098(&BattleCommandCardTask_TypeInfo);
    sub_1C94098(&BattleDataDefine_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FB49 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1C942F0(battleEvent, v8);
  }
  v15 = (BattleCommandCardTask_o *)sub_1C942E4(BattleCommandCardTask_TypeInfo);
  BattleCommandCardTask___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_26;
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, 2, v13->fields.uniqueId, 0);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, (BattleLogicTask_o *)v15, 0);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v15;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4D2FB5E & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FB5E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1C942F0(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4D2FB4F & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FB4F = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_12;
  BattleLogic__resetOverKill(logic, 0);
  if ( !data
    || (BattleData__SetCommandAttacked(data, 0, 0),
        v9 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v9, 0),
        !v9)
    || (BattleLogicTask__setSystem(v9, 0), !v6)
    || (items = v6->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C942F0(logic, v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v9,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v9;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNomal__taskComboOrderBefore(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v5; // x19
  struct BattleData_o *v6; // x8

  if ( !data
    || (v5 = this, BattleData__SetCommandAttacked(data, 0, 0), (v6 = v5->fields.data) == 0)
    || (this = (BattleLogicNomal_o *)v6->fields.battleEvent) == 0 )
  {
    sub_1C942F0(this, *(_QWORD *)&ltype);
  }
  if ( ((*(__int64 (__fastcall **)(BattleLogicNomal_o *, void *))&this->klass[2]._1.byval_arg.bits)(
          this,
          this->klass[2]._1.this_arg.data)
      & 1) != 0 )
    BattleData__ApplyCommandcardFirstBonus(data, 0);
  return v5->fields.zeroTask;
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
  int32_t v11; // w23
  BattleCommandData_o *v12; // x24
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

  if ( (byte_4D2FB48 & 1) == 0 )
  {
    sub_1C94098(&BattleCommandCardTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FB48 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v15 = (BattleCommandCardTask_o *)sub_1C942E4(BattleCommandCardTask_TypeInfo);
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
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v15;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v15, v28, v29, v30, v31, v32, v33);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1C942F0(battleEvent, v9);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v7->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v15;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v15, v18, v19, v20, v21, v22, v23);
  }
  BattleData__setTDChain(data, 1, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Action_object__o *_9__21_0; // x20
  Il2CppObject *v50; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct BattleLogic_o *logic; // x8
  BattleLogicNomal_o *v60; // [xsp+8h] [xbp-A8h]
  _BOOL4 v61; // [xsp+14h] [xbp-9Ch]
  int32_t SvtId; // [xsp+18h] [xbp-98h]
  int32_t counterId; // [xsp+1Ch] [xbp-94h]
  SkillLvMaster_o *MasterData_object; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v66; // [xsp+30h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // [xsp+38h] [xbp-78h]
  char v68; // [xsp+48h] [xbp-68h]
  int32_t type; // [xsp+4Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4D2FB4A & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C94098(&BattleComboData_TypeInfo);
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&BattleSkillInfoData_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78974936);
    sub_1C94098(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__);
    sub_1C94098(&BattleLogicNomal___c_TypeInfo);
    byte_4D2FB4A = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !data )
    goto LABEL_78;
  v13 = 312;
  if ( isEnemy )
    v13 = 320;
  v14 = *(__int64 *)((char *)&data->klass + v13);
  v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !v14 )
    goto LABEL_78;
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
LABEL_79:
        sub_1C942F8(Instance);
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
                      goto LABEL_78;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v18,
                                          v19,
                                          0,
                                          0);
                    if ( !Instance )
                      goto LABEL_78;
                    v20 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v60 = this;
                      v66 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_57796760(
                        v66,
                        v20,
                        (const MethodInfo_371E898 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78974936);
                      monitor = v20[1].monitor;
                      v22 = isSkillCounter;
                      if ( (int)monitor >= 1 )
                      {
                        v23 = 4;
                        v68 = 1;
                        v61 = v6;
                        do
                        {
                          if ( v23 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_79;
                          v24 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v20->klass + v23);
                          if ( !v22 )
                            goto LABEL_82;
                          if ( !v24 )
                            goto LABEL_78;
                          if ( v24->fields.isSkillReaction )
                          {
LABEL_82:
                            v25 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v25, 0);
                            if ( !v25 )
                              goto LABEL_78;
                            BattleLogicTask__setActor(v25, type, v18->fields.uniqueId, 0);
                            BattleLogicTask__setTarget(v25, v18->fields.wasAttackTargetId, 0);
                            Instance = (__int64)v18->fields.buffData;
                            if ( !Instance )
                              goto LABEL_78;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v24, 1, 0);
                            if ( (Instance & 1) != 0 )
                            {
                              v18->fields.overkillTargetId = -1;
                              if ( !v24 )
                                goto LABEL_78;
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
                                  v27 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor_47436164(v27, counterId, SvtId, LimitCount, 0, -1, 0);
                                  BattleServantData__SetOverwriteSvtCardType(v18, v27, 0);
                                  BattleServantData__AddServantCommandCard(v18, v24->fields.counterId, 0);
                                  v28 = (BattleComboData_o *)sub_1C942E4(BattleComboData_TypeInfo);
                                  BattleComboData___ctor(v28, 0);
                                  v29 = v28;
                                  v22 = isSkillCounter;
                                  v30 = v27;
                                  v6 = v61;
                                  BattleLogicTask__setActionCommand(v25, v29, v30, 0, 0);
                                }
                                else
                                {
                                  Instance = (__int64)MasterData_object;
                                  if ( !MasterData_object )
                                    goto LABEL_78;
                                  Instance = (__int64)SkillLvMaster__GetEntity(
                                                        MasterData_object,
                                                        wasAttackTargetId,
                                                        v24->fields.counterLv,
                                                        0);
                                  if ( !Instance )
                                  {
                                    v6 = v61;
                                    goto LABEL_60;
                                  }
                                  v31 = Instance;
                                  v32 = sub_1C942E4(BattleSkillInfoData_TypeInfo);
                                  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v32, 0);
                                  if ( !v32 )
                                    goto LABEL_78;
                                  uniqueId = v18->fields.uniqueId;
                                  v34 = *(_QWORD *)v32;
                                  *(_QWORD *)(v32 + 16) = 20;
                                  *(_DWORD *)(v32 + 24) = uniqueId;
                                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v34 + 376))(
                                    v32,
                                    *(unsigned int *)(v31 + 16),
                                    *(_QWORD *)(v34 + 384));
                                  *(_DWORD *)(v32 + 36) = *(_DWORD *)(v31 + 20);
                                  Instance = sub_1C94140(int___TypeInfo, 1);
                                  if ( !Instance )
                                    goto LABEL_78;
                                  v35 = (System_Int32_array *)Instance;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_79;
                                  *(_DWORD *)(Instance + 32) = v18->fields.wasAttackTargetId;
                                  Instance = sub_1C94140(int___TypeInfo, 1);
                                  if ( !Instance )
                                    goto LABEL_78;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_79;
                                  *(_DWORD *)(Instance + 32) = v18->fields.uniqueId;
                                  BattleLogicTask__setActionSkill(
                                    v25,
                                    (BattleSkillInfoData_o *)v32,
                                    v35,
                                    (System_Int32_array *)Instance,
                                    1,
                                    0,
                                    0);
                                  v6 = v61;
                                  v22 = isSkillCounter;
                                }
                              }
                              Instance = (__int64)v67;
                              if ( !v67 )
                                goto LABEL_78;
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v67,
                                                    v24->fields.buffId,
                                                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_78;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0);
                              BattleLogicTask__setMessage(v25, CounterMessage, 2, 0);
                              v25->fields.isCounter = 1;
                              if ( (v68 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v25,
                                  v18,
                                  (BattleBuffData_BuffData_array *)v20,
                                  0);
                              if ( !v10 )
                                goto LABEL_78;
                              items = v10->fields._items;
                              v44 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_78;
                              size = v10->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v25,
                                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v46 = &items->obj.klass + size;
                                v10->fields._size = size + 1;
                                v46[4] = (Il2CppClass *)v25;
                                sub_1C9403C(
                                  (GrandQuestFolderBoardItem_o *)(v46 + 4),
                                  (int32_t)v25,
                                  v37,
                                  v38,
                                  v39,
                                  v40,
                                  v41,
                                  v42);
                              }
                              Instance = (__int64)v66;
                              if ( !v66 )
                                goto LABEL_78;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v66,
                                           (Il2CppObject *)v24,
                                           (const MethodInfo_371F068 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v68 = 0;
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
                      this = v60;
                      _9__21_0 = (System_Action_object__o *)v48->static_fields->__9__21_0;
                      if ( !_9__21_0 )
                      {
                        if ( !v48->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v48);
                          v48 = BattleLogicNomal___c_TypeInfo;
                        }
                        v50 = (Il2CppObject *)v48->static_fields->__9;
                        _9__21_0 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__21_0,
                          v50,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__,
                          0);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__21_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__21_0;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0,
                          (int32_t)_9__21_0,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56,
                          v57);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v66,
                        (System_Action_T__o *)_9__21_0,
                        (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    goto LABEL_78;
  if ( v10->fields._size < 1 )
    goto LABEL_76;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_78:
    sub_1C942F0(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0);
LABEL_76:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_78;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v10,
    1,
    0);
  BattleData__ResetWasAttackTargetId(data, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskCounterFuncEnemy(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return BattleLogicNomal__taskCounterFunc(this, data, 1, 0, 1, v4);
}


BattleLogicTask_array *BattleLogicNomal__taskCounterFuncPlayer(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return BattleLogicNomal__taskCounterFunc(this, data, 0, 0, 1, v4);
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

  if ( (byte_4D2FB54 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FB54 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v9 + 128) = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 128), (int32_t)gameObject, v13, v14, v15, v16, v17, v18);
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
    sub_1C942F0(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v9;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v29 + 4), v9, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4D2FB55 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_2883/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_1C94098(&StringLiteral_8776/*"MOTION_ENTRY"*/);
    sub_1C94098(&StringLiteral_2881/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_1C94098(&StringLiteral_2882/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_1C94098(&StringLiteral_8779/*"MOTION_ENTRY_TAC"*/);
    byte_4D2FB55 = 1;
  }
  v9 = StringLiteral_8779/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_8776/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0);
  if ( !v12 )
    goto LABEL_30;
  v15 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v15, 0);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v12 + 128) = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 128), (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
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
              v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0);
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
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2881/*"BATTLE_SUBENTRY_ENEMY"*/, 0);
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
    sub_1C942F0(battle_ent, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2883/*"BATTLE_SUBENTRY_PLAYER"*/, 0);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v53[4] = (Il2CppClass *)v12;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v53 + 4), v12, v44, v45, v46, v47, v48, v49);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_4D2FB70 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleServantData__TypeInfo);
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C94098(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData___ctor___78982864);
    sub_1C94098(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C94098(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__);
    sub_1C94098(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__);
    sub_1C94098(&Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__);
    sub_1C94098(&BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *)sub_1C94098(&BattleLogicNomal___c_TypeInfo);
    byte_4D2FB70 = 1;
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
  v11 = (Il2CppObject *)sub_1C942E4(BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v11, 0);
  v12 = v261;
  v261->fields.__8__1 = (struct BattleLogicNomal___c__DisplayClass26_0_o *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v20 = v261;
  v261->fields._selectSvtList_5__2 = (struct System_Collections_Generic_List_BattleServantData__o *)v19;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v20->fields._selectSvtList_5__2,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !_4__this )
    sub_1C942F0(v27, v28);
  data = _4__this->fields.data;
  if ( !data )
    sub_1C942F0(v27, v28);
  selectcommandlist = data->fields.selectcommandlist;
  v37 = v261;
  v261->fields.__7__wrap3 = selectcommandlist;
  sub_1C9403C(
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
    sub_1C942F0(v38, v39);
  max_length = v54->max_length;
  if ( v47 < max_length )
  {
    if ( v47 >= (unsigned int)max_length )
      sub_1C942F8(v38);
    if ( !_4__this )
      sub_1C942F0(v38, v39);
    v57 = v54->m_Items[v47];
    if ( !v57 )
      sub_1C942F0(v38, v39);
    v58 = _4__this->fields.data;
    if ( !v58 )
      sub_1C942F0(0, v39);
    ServantData = (Il2CppObject *)BattleData__getServantData(v58, v57->fields.uniqueId, 0);
    selectSvtList_5__2 = (System_Collections_Generic_List_object__o *)v261->fields._selectSvtList_5__2;
    if ( !selectSvtList_5__2 )
      sub_1C942F0(0, v59);
    items = selectSvtList_5__2->fields._items;
    v69 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++selectSvtList_5__2->fields._version;
    if ( !items )
      sub_1C942F0(selectSvtList_5__2, v59);
    size = selectSvtList_5__2->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectSvtList_5__2,
        ServantData,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = &items->obj.klass + size;
      selectSvtList_5__2->fields._size = size + 1;
      v71[4] = (Il2CppClass *)ServantData;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v71 + 4), (int32_t)ServantData, v60, v61, v62, v63, v64, v65);
    }
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack((BattleServantData_o *)ServantData, v57, 0);
    if ( !ServantData )
      sub_1C942F0(IsEnableToAttack, v73);
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
      _9__26_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__26_1,
        v78,
        Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__,
        0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__26_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_1;
      sub_1C9403C(
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
            (const MethodInfo_31CC104 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    v88 = v86;
    if ( !v86 )
      sub_1C942F0(0, v87);
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
      v92 = sub_1C6A420(v86, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
    }
    v93 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v92)(
            v88,
            *(_QWORD *)(v92 + 8));
    if ( !v76 )
      sub_1C942F0(v93, v93);
    v76->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v93;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v76->fields.__7__wrap5, v93, v94, v95, v96, v97, v98, v99);
    v102 = v261;
    v261->fields.__1__state = -3;
    while ( 1 )
    {
      _7__wrap5 = v102->fields.__7__wrap5;
      if ( !_7__wrap5 )
        sub_1C942F0(v100, v101);
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
        v175 = sub_1C6A420(_7__wrap5, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v175)(
              _7__wrap5,
              *(_QWORD *)(v175 + 8))
          & 1) == 0 )
      {
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally1(v261, v176);
        v177 = v261;
        v261->fields.__7__wrap5 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v177->fields.__7__wrap5, 0, v178, v179, v180, v181, v182, v183);
        v46 = v261;
        v47 = v261->fields.__7__wrap4 + 1;
        v261->fields.__7__wrap4 = v47;
        goto LABEL_14;
      }
      v150 = v261->fields.__7__wrap5;
      if ( !v150 )
        sub_1C942F0(v261, v176);
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
        v154 = sub_1C6A420(
                 v261->fields.__7__wrap5,
                 System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
                 0);
      }
      v155 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v154)(
               v150,
               *(_QWORD *)(v154 + 8));
      if ( !_4__this )
        sub_1C942F0(v155, v156);
      v157 = (BattleSkillInfoData_o *)v155;
      logicskill = _4__this->fields.logicskill;
      v159 = sub_1C94140(int___TypeInfo, 1);
      if ( !v157 )
        sub_1C942F0(v159, v160);
      if ( !v159 )
        sub_1C942F0(0, v160);
      if ( !*(_DWORD *)(v159 + 24) )
        sub_1C942F8(v159);
      *(_DWORD *)(v159 + 32) = v157->fields.svtUniqueId;
      if ( !logicskill )
        sub_1C942F0(v159, v160);
      v161 = BattleLogicSkill__taskSkill(logicskill, v157, (System_Int32_array *)v159, 0, 0, 0, 0, 0, 0, v257);
      v162 = v261;
      v261->fields.__7__wrap6 = v161;
      sub_1C9403C(
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
        sub_1C942F0(this, method);
      v170 = _7__wrap6->max_length;
      if ( v49 < (int)v170 )
        break;
      v8->fields.__7__wrap6 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
      v102 = v261;
    }
    if ( v49 >= v170 )
      sub_1C942F8(this);
    v184 = _7__wrap6->m_Items[v49];
    v8->fields.__2__current = v184;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, (int32_t)v184, v2, v3, v4, v5, v6, v7);
    result = 1;
    v261->fields.__1__state = 1;
    return result;
  }
  p__7__wrap3->klass = 0;
  sub_1C9403C(p__7__wrap3, 0, v40, v41, v42, v43, v44, v45);
  if ( !_4__this )
    sub_1C942F0(v103, v104);
  v105 = _4__this->fields.data;
  if ( !v105 )
    sub_1C942F0(0, v104);
  _8__1 = v261->fields.__8__1;
  FieldAliveServantArray = (System_Collections_Generic_IEnumerable_T__o *)BattleData__GetFieldAliveServantArray(
                                                                            v105,
                                                                            1,
                                                                            0,
                                                                            0,
                                                                            0);
  v108 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156264(
    v108,
    FieldAliveServantArray,
    (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_BattleServantData___ctor___78982864);
  if ( !_8__1 )
    sub_1C942F0(v109, v110);
  _8__1->fields.otherSvtList = (struct System_Collections_Generic_List_BattleServantData__o *)v108;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&_8__1->fields, (int32_t)v108, v111, v112, v113, v114, v115, v116);
  v118 = (Il2CppObject *)v261->fields.__8__1;
  v117 = (System_Collections_Generic_List_object__o *)v261->fields._selectSvtList_5__2;
  v119 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v119,
    v118,
    Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__,
    0);
  if ( !v117 )
    sub_1C942F0(v120, v121);
  System_Collections_Generic_List_object___ForEach(
    v117,
    (System_Action_T__o *)v119,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v122 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v122, 0);
  v123 = v261;
  v261->fields._notSelectedCommand_5__3 = v122;
  sub_1C9403C(
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
    sub_1C942F0(v130, v131);
  notSelectedCommand_5__3 = v261->fields._notSelectedCommand_5__3;
  if ( !notSelectedCommand_5__3 )
    sub_1C942F0(0, v131);
  BattleCommandData__setCombo(notSelectedCommand_5__3, v132->fields.combodata, 0, 0);
  v135 = v261->fields._notSelectedCommand_5__3;
  if ( !v135 )
    sub_1C942F0(0, v134);
  v135->fields._type = -1;
  BattleCommandData__ResetOverwriteSvtCardType(v135, 0);
  v138 = v261->fields.__8__1;
  if ( !v138 )
    sub_1C942F0(v136, v137);
  otherSvtList = (System_Collections_Generic_List_object__o *)v138->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C942F0(0, v137);
  System_Collections_Generic_List_object___GetEnumerator(
    v258,
    otherSvtList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v140 = v261;
  v141 = *(_OWORD *)&v258[0].fields._list;
  p__7__wrap8 = &v261->fields.__7__wrap8;
  v258[1] = v258[0];
  v261->fields.__7__wrap8.fields._current = (struct BattleServantData_o *)v258[0].fields._current;
  *(_OWORD *)&v140->fields.__7__wrap8.fields._list = v141;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap8, 0, v143, v144, v145, v146, v147, v148);
  v149 = v261;
  v261->fields.__1__state = -4;
LABEL_106:
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v149->fields.__7__wrap8,
          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally2(v261, v185);
    v220 = v261;
    v261->fields.__7__wrap8.fields._list = 0;
    *(_QWORD *)&v220->fields.__7__wrap8.fields._index = 0;
    v220->fields.__7__wrap8.fields._current = 0;
    if ( !_4__this )
      sub_1C942F0(v218, v219);
    v221 = _4__this->fields.data;
    if ( !v221 )
      sub_1C942F0(0, v219);
    BattleData__ClearAllExecutedOnceConfirmCommandFunctionBuffList(v221, 0);
    return 0;
  }
  current = v261->fields.__7__wrap8.fields._current;
  v187 = BattleLogicNomal__IsEnableToAttack(current, v261->fields._notSelectedCommand_5__3, 0);
  if ( !current )
    sub_1C942F0(v187, v188);
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
    _9__26_2 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_2,
      v193,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__,
      0);
    v194 = BattleLogicNomal___c_TypeInfo->static_fields;
    v194->__9__26_2 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v194->__9__26_2, (int32_t)_9__26_2, v195, v196, v197, v198, v199, v200);
  }
  v201 = System_Linq_Enumerable__OrderBy_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v189,
           (System_Func_TSource__TKey__o *)_9__26_2,
           (const MethodInfo_31CC104 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v203 = v201;
  if ( !v201 )
    sub_1C942F0(0, v202);
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
    v207 = sub_1C6A420(v201, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v208 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v207)(
           v203,
           *(_QWORD *)(v207 + 8));
  if ( !v191 )
    sub_1C942F0(v208, v208);
  v191->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v208;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v191->fields.__7__wrap5, v208, v209, v210, v211, v212, v213, v214);
  v217 = v261;
  v261->fields.__1__state = -5;
  while ( 1 )
  {
    v243 = v217->fields.__7__wrap5;
    if ( !v243 )
      sub_1C942F0(v215, v216);
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
      v247 = sub_1C6A420(v243, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v247)(
            v243,
            *(_QWORD *)(v247 + 8))
        & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally3(v261, v248);
      v249 = v261;
      v261->fields.__7__wrap5 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v249->fields.__7__wrap5, 0, v250, v251, v252, v253, v254, v255);
      v149 = v261;
      goto LABEL_106;
    }
    v222 = v261->fields.__7__wrap5;
    if ( !v222 )
      sub_1C942F0(v261, v248);
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
      v226 = sub_1C6A420(
               v261->fields.__7__wrap5,
               System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
               0);
    }
    v227 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v226)(
             v222,
             *(_QWORD *)(v226 + 8));
    if ( !_4__this )
      sub_1C942F0(v227, v228);
    v229 = (BattleSkillInfoData_o *)v227;
    v230 = _4__this->fields.logicskill;
    v231 = sub_1C94140(int___TypeInfo, 1);
    if ( !v229 )
      sub_1C942F0(v231, v232);
    if ( !v231 )
      sub_1C942F0(0, v232);
    if ( !*(_DWORD *)(v231 + 24) )
      sub_1C942F8(v231);
    *(_DWORD *)(v231 + 32) = v229->fields.svtUniqueId;
    if ( !v230 )
      sub_1C942F0(v231, v232);
    v233 = BattleLogicSkill__taskSkill(v230, v229, (System_Int32_array *)v231, 0, 0, 0, 0, 0, 0, v257);
    v234 = v261;
    v261->fields.__7__wrap6 = v233;
    sub_1C9403C(
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
      sub_1C942F0(this, method);
    v242 = v241->max_length;
    if ( v51 < (int)v242 )
      break;
    v8->fields.__7__wrap6 = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
    v217 = v261;
  }
  if ( v51 >= v242 )
    sub_1C942F8(this);
  v256 = v241->m_Items[v51];
  v8->fields.__2__current = v256;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, (int32_t)v256, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4D2FB74 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_4D2FB74 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C942E4(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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

  if ( (byte_4D2FB71 & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    byte_4D2FB71 = 1;
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
      v7 = sub_1C6A420(_7__wrap5, System_IDisposable_TypeInfo, 0);
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
  if ( (byte_4D2FB72 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    byte_4D2FB72 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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

  if ( (byte_4D2FB73 & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    byte_4D2FB73 = 1;
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
      v7 = sub_1C6A420(_7__wrap5, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4D2FB68 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicNomal___c_TypeInfo);
    byte_4D2FB68 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_1C9403C(
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

  if ( (byte_4D2FB69 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4D2FB69 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
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

  if ( (byte_4D2FB6A & 1) == 0 )
  {
    this = (BattleLogicNomal___c_o *)sub_1C94098(&bool_TypeInfo);
    byte_4D2FB6A = 1;
  }
  if ( !a || !b )
    sub_1C942F0(this, a);
  isEnemy = b->fields.isEnemy;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  return System_Boolean__CompareTo_65468460((_BYTE)a + 3, isEnemy, 0);
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_1(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_2(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__28_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void BattleLogicNomal___c___createBuffAddPlayer_b__49_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1C942F0(this, 0);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0);
}


void BattleLogicNomal___c___taskCounterFunc_b__21_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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

  if ( (byte_4D2FB6B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__Remove__);
    byte_4D2FB6B = 1;
  }
  otherSvtList = (System_Collections_Generic_List_object__o *)this->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C942F0(0, svt);
  System_Collections_Generic_List_object___Remove(
    otherSvtList,
    (Il2CppObject *)svt,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_BattleServantData__Remove__);
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

  if ( (byte_4D2FB6C & 1) == 0 )
  {
    sub_1C94098(&BuffList_TypeInfo);
    sub_1C94098(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_4D2FB6C = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_1C942E4(BattleBuffData_CheckInvokeBuff_TypeInfo);
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
  if ( (byte_4D2FB6D & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4D2FB6D = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_3189FA0 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C942F0(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v16[4] = (BattleLogicNomal_c *)buff;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)buff, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4D2FB6E & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4D2FB6E = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_3189FA0 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C942F0(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v16[4] = (BattleLogicNomal_c *)buff;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)buff, v7, v8, v9, v10, v11, v12);
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
    sub_1C942F0(this, targetSvtData);
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

  if ( (byte_4D2FB6F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_4D2FB6F = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass30_0_o *)_4__this->fields.data) == 0 )
    sub_1C942F0(this, id);
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
    sub_1C942F0(this, npc);
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
    sub_1C942F0(this, npc);
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
    sub_1C942F0(this, 0);
  return x->fields.uniqueId == this->fields.uniqueId;
}