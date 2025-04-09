void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogicTask_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleLogicTask_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BDCAE & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask___TypeInfo, method);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v3);
    byte_49BDCAE = 1;
  }
  v4 = (struct BattleLogicTask_array *)sub_1B4D038(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.zeroTask, (int32_t)v4, v5, v6);
  v7 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  this->fields.tmpShiftTask = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.tmpShiftTask, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B4D1EC(this, method);
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
  __int64 v56; // x24
  __int64 ActorId; // x0
  BattleCommandData_o *v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v63; // x28
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  BattleActionData_o *v66; // x22
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  BattleActionData_o **v69; // x21
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct BattleCommandData_o *command; // x1
  BattleCommandData_o **v73; // x26
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  BattleActionData_o *v76; // x19
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v80; // x8
  int32_t v81; // w25
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v83; // x22
  bool v84; // w8
  BattleActionData_o *result; // x0
  Il2CppObject *v86; // x23
  System_Collections_Generic_List_object__o *v87; // x19
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Collections_Generic_IEnumerable_TSource__o **v96; // x25
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  System_Collections_Generic_List_object__o **v99; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x19
  System_Func_T__TResult__o *v101; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x19
  BattleLogicNomal___c_c *v103; // x8
  System_Func_object__bool__o *_9__24_9; // x23
  Il2CppObject *v105; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x19
  BattleLogicNomal___c_c *v111; // x8
  System_Func_object__object__o *_9__24_0; // x23
  Il2CppObject *v113; // x22
  struct BattleLogicNomal___c_StaticFields *v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  System_Func_object__object__o *v117; // x22
  __int64 v118; // x9
  BuffList_c *v119; // x8
  BattleLogicNomal___c_c *v120; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x19
  System_Func_T__TResult__o *_9__24_2; // x23
  Il2CppObject *v123; // x22
  struct BattleLogicNomal___c_StaticFields *v124; // x0
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  System_Func_T__TResult__o *_9__24_3; // x25
  Il2CppObject *v128; // x22
  struct BattleLogicNomal___c_StaticFields *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v132; // x0
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  __int64 v135; // x8
  int64_t v136; // x19
  System_Action_object__object__o *v137; // x22
  BattleCommandData_o **v138; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v140; // x22
  __int64 v141; // x8
  __int64 v142; // x23
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  __int64 v145; // x19
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  System_Func_object__object__o *v148; // x19
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v152; // x24
  const MethodInfo *v153; // x5
  __int64 v154; // x8
  unsigned __int64 v155; // x22
  int v156; // w23
  int32_t v157; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v158; // x19
  __int64 v159; // x8
  __int64 v160; // x23
  __int64 v161; // x9
  int *v162; // x10
  __int64 v163; // x0
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x23
  __int64 v167; // x8
  __int64 v168; // x9
  int *v169; // x10
  __int64 v170; // x0
  __int64 v171; // x8
  __int64 v172; // x9
  int *v173; // x10
  __int64 v174; // x0
  Il2CppObject *v175; // x1
  Il2CppObject *Item; // x1
  __int64 v177; // x8
  __int64 v178; // x9
  int *v179; // x10
  __int64 v180; // x0
  unsigned __int64 v181; // x9
  int v182; // w22
  int v183; // w8
  BuffList_ACTION_array *v184; // x19
  int v185; // w8
  __int64 v186; // x8
  __int64 v187; // x23
  __int64 v188; // x9
  int *v189; // x10
  __int64 v190; // x0
  __int64 v191; // x1
  __int64 v192; // x23
  __int64 v193; // x8
  __int64 v194; // x9
  int *v195; // x10
  __int64 v196; // x0
  __int64 v197; // x8
  __int64 v198; // x9
  int *v199; // x10
  __int64 v200; // x0
  __int64 v201; // x1
  BattleServantData_o *v202; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_43656588; // x0
  __int64 v204; // x1
  BattleBuffData_BuffData_array *v205; // x27
  __int64 v206; // x8
  unsigned __int64 v207; // x26
  BattleBuffData_BuffData_o *v208; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v211; // x1
  __int64 v212; // x8
  __int64 v213; // x9
  int *v214; // x10
  __int64 v215; // x0
  __int64 v216; // x8
  __int64 v217; // x19
  __int64 v218; // x9
  int *v219; // x10
  __int64 v220; // x0
  __int64 v221; // x0
  __int64 v222; // x1
  __int64 v223; // x29
  BattleActionData_DamageData_o *v224; // x23
  __int64 v225; // x8
  __int64 v226; // x9
  int *v227; // x10
  __int64 v228; // x0
  __int64 v229; // x8
  __int64 v230; // x9
  int *v231; // x10
  __int64 v232; // x0
  __int64 v233; // x1
  BattleServantData_o *v234; // x27
  BattleLogic_o *v235; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v237; // x1
  BattleActionData_DamageData_o *v238; // x19
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v240; // x22
  BattleActionData_o *v241; // x0
  _BOOL8 v242; // x0
  __int64 v243; // x1
  __int64 v244; // x8
  __int64 v245; // x9
  int *v246; // x10
  __int64 v247; // x0
  BattleActionData_o *v248; // x19
  BattleActionData_o *v249; // x19
  BattleActionData_o *v250; // x19
  struct BattleData_o *v251; // x8
  __int64 v252; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v254; // x19
  const MethodInfo *v255; // x5
  __int64 v256; // x8
  unsigned __int64 v257; // x27
  unsigned int v258; // w22
  int32_t v259; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x19
  __int64 v261; // x8
  __int64 v262; // x23
  __int64 v263; // x9
  int *v264; // x10
  __int64 v265; // x0
  __int64 v266; // x0
  __int64 v267; // x1
  __int64 v268; // x23
  __int64 v269; // x8
  __int64 v270; // x9
  int *v271; // x10
  __int64 v272; // x0
  __int64 v273; // x8
  __int64 v274; // x9
  int *v275; // x10
  __int64 v276; // x0
  Il2CppObject *v277; // x0
  Il2CppObject *v278; // x1
  __int64 v279; // x8
  __int64 v280; // x9
  int *v281; // x10
  __int64 v282; // x0
  unsigned __int64 v283; // x22
  int v284; // w23
  int v285; // w8
  BuffList_ACTION_array *v286; // x19
  int v287; // w8
  __int64 v288; // x8
  __int64 v289; // x23
  __int64 v290; // x9
  int *v291; // x10
  __int64 v292; // x0
  __int64 v293; // x1
  __int64 v294; // x23
  __int64 v295; // x8
  __int64 v296; // x9
  int *v297; // x10
  BattleCommandData_o **v298; // x26
  __int64 v299; // x0
  __int64 v300; // x8
  __int64 v301; // x9
  int *v302; // x10
  __int64 v303; // x0
  __int64 v304; // x1
  BattleServantData_o *v305; // x3
  BattleBuffData_BuffData_array *v306; // x0
  __int64 v307; // x1
  BattleBuffData_BuffData_array *v308; // x27
  __int64 v309; // x8
  unsigned __int64 v310; // x26
  BattleLogicFunction_o *v311; // x0
  __int64 v312; // x8
  __int64 v313; // x9
  int *v314; // x10
  __int64 v315; // x0
  __int64 v316; // x8
  __int64 v317; // x19
  __int64 v318; // x9
  int *v319; // x10
  __int64 v320; // x0
  __int64 v321; // x0
  __int64 v322; // x1
  __int64 v323; // x23
  __int64 v324; // x8
  __int64 v325; // x9
  int *v326; // x10
  __int64 v327; // x0
  __int64 v328; // x8
  __int64 v329; // x9
  int *v330; // x10
  __int64 v331; // x0
  __int64 v332; // x0
  __int64 v333; // x1
  __int64 v334; // x8
  __int64 v335; // x9
  int *v336; // x10
  __int64 v337; // x0
  _BOOL8 v338; // x0
  __int64 v339; // x1
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v342; // x0
  BattleActionData_o *v343; // x8
  BattleLogic_o *v344; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v345; // x20
  __int64 v346; // x0
  const MethodInfo *v347; // [xsp+0h] [xbp-120h]
  __int64 *v348; // [xsp+10h] [xbp-110h]
  bool v349; // [xsp+1Ch] [xbp-104h]
  __int64 v350; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v351; // [xsp+28h] [xbp-F8h]
  int32_t uniqueId; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v353; // [xsp+38h] [xbp-E8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+40h] [xbp-E0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+40h] [xbp-E0h]
  BattleBuffData_o *actSvtBuffData; // [xsp+48h] [xbp-D8h]
  Il2CppObject *v357; // [xsp+50h] [xbp-D0h]
  bool v358; // [xsp+5Ch] [xbp-C4h]
  __int64 v359; // [xsp+60h] [xbp-C0h]
  __int64 v360; // [xsp+68h] [xbp-B8h]
  BattleServantData_o **v361; // [xsp+70h] [xbp-B0h]
  System_Collections_Generic_Dictionary_object__object__o *v362; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v363; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v364; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v365; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_49BDC9A & 1) == 0 )
  {
    sub_1B4CF90(&BuffList_ACTION___TypeInfo, task);
    sub_1B4CF90(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B4CF90(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v8);
    sub_1B4CF90(&BattleActionData_TypeInfo, v9);
    sub_1B4CF90(&BattleAddSkillTaskAfterCommandAttack_TypeInfo, v10);
    sub_1B4CF90(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo, v11);
    sub_1B4CF90(&BattleServantData___TypeInfo, v12);
    sub_1B4CF90(&bool___TypeInfo, v13);
    sub_1B4CF90(&BuffList_TypeInfo, v14);
    sub_1B4CF90(&BattleLogic_DamageProcessArgs_TypeInfo, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v17);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v18);
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v19);
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v20);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_int___, v21);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_BattleServantData___, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v25);
    sub_1B4CF90(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v26);
    sub_1B4CF90(&System_Func_BattleServantData__BattleServantData__TypeInfo, v27);
    sub_1B4CF90(&System_Func_int__BattleServantData__TypeInfo, v28);
    sub_1B4CF90(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v29);
    sub_1B4CF90(&System_Func_BattleServantData__bool__TypeInfo, v30);
    sub_1B4CF90(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v31);
    sub_1B4CF90(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v32);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v33);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v34);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v35);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__Add__, v38);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v39);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Remove__, v40);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v41);
    sub_1B4CF90(&System_Collections_Generic_List_BattleServantData__TypeInfo, v42);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B4CF90(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__, v44);
    sub_1B4CF90(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__, v45);
    sub_1B4CF90(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__, v46);
    sub_1B4CF90(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__, v47);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__, v48);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__, v49);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__, v50);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__, v51);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__, v52);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__, v53);
    sub_1B4CF90(&BattleLogicNomal___c__DisplayClass24_0_TypeInfo, v54);
    sub_1B4CF90(&BattleLogicNomal___c_TypeInfo, v55);
    byte_49BDC9A = 1;
  }
  memset(&v365, 0, sizeof(v365));
  v56 = sub_1B4D1DC(BattleLogicNomal___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v56, 0LL);
  if ( !v56 )
    goto LABEL_375;
  *(_QWORD *)(v56 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 16), (int32_t)this, v59, v60);
  if ( !task )
    goto LABEL_375;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_375;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v56 + 24) = ServantData;
  v63 = (BattleServantData_o **)(v56 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 24), (int32_t)ServantData, v64, v65);
  v66 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v66, 0LL);
  *baseActionData = v66;
  sub_1B4CF34((CGThumbnailListItem_o *)baseActionData, (int32_t)v66, v67, v68);
  *(_QWORD *)(v56 + 48) = v66;
  v69 = (BattleActionData_o **)(v56 + 48);
  sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 48), (int32_t)v66, v70, v71);
  command = task->fields.command;
  *(_QWORD *)(v56 + 40) = command;
  v73 = (BattleCommandData_o **)(v56 + 40);
  sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 40), (int32_t)command, v74, v75);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_375;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_375;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_375;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v76 = *v69;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v76 )
    goto LABEL_375;
  v76->fields.actorId = ActorId;
  ActorId = (__int64)*v69;
  if ( !*v69 )
    goto LABEL_375;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_1B4CF34((CGThumbnailListItem_o *)(ActorId + 128), (int32_t)motionMessage, v77, v78);
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v80 = this->fields.data;
  if ( !v80 )
    goto LABEL_375;
  v81 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v80->fields.leaderDown || v80->fields.endbattleFlg )
    return 0LL;
  logic = this->fields.logic;
  v83 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1B4D1DC(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v83, 0LL);
  if ( !logic )
    goto LABEL_375;
  v351 = task;
  uniqueId = v81;
  v84 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v83, task, v81, 0LL);
  result = 0LL;
  if ( !v84 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_375;
    v86 = (Il2CppObject *)BattleData__getServantData((BattleData_o *)ActorId, v81, 0LL);
    v87 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v87,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
    if ( !v87 )
      goto LABEL_375;
    items = v87->fields._items;
    v91 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v87->fields._version;
    if ( !items )
      goto LABEL_375;
    size = v87->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v87,
        v86,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = &items->obj.klass + size;
      v87->fields._size = size + 1;
      v93[4] = (Il2CppClass *)v86;
      sub_1B4CF34((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v86, v88, v89);
    }
    *(_QWORD *)(v56 + 56) = v87;
    v96 = (System_Collections_Generic_IEnumerable_TSource__o **)(v56 + 56);
    sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 56), (int32_t)v87, v94, v95);
    ActorId = *(_QWORD *)(v56 + 40);
    if ( !ActorId )
      goto LABEL_375;
    BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
    ActorId = (__int64)*v73;
    if ( !*v73 )
      goto LABEL_375;
    BattleCommandData__UpdateCritical(
      (BattleCommandData_o *)ActorId,
      *v63,
      (BattleServantData_o *)v86,
      this->fields.data,
      0LL);
    ActorId = (__int64)*v73;
    if ( !*v73 )
      goto LABEL_375;
    BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v63, 0LL);
    ActorId = (__int64)*v63;
    if ( !*v63 )
      goto LABEL_375;
    AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v73, 0LL);
    v349 = AttackType == 2;
    v357 = v86;
    v363 = (BattleCommandData_o **)(v56 + 40);
    if ( AttackType == 2 )
    {
      ActorId = (__int64)this->fields.data;
      if ( !ActorId )
        goto LABEL_375;
      ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, uniqueId, 0LL);
      if ( !this->fields.data )
        goto LABEL_375;
      v98 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                                ? BattleData__getFieldEnemyServantIDList(
                                                                    this->fields.data,
                                                                    1,
                                                                    0LL)
                                                                : BattleData__getFieldPlayerServantIDList(
                                                                    this->fields.data,
                                                                    0LL,
                                                                    0LL));
      v99 = (System_Collections_Generic_List_object__o **)(v56 + 56);
      ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                           v98,
                           (const MethodInfo_2F3FF5C *)Method_System_Linq_Enumerable_ToList_int___);
      if ( !ActorId )
        goto LABEL_375;
      v100 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)ActorId,
        uniqueId,
        (const MethodInfo_35646B4 *)Method_System_Collections_Generic_List_int__Remove__);
      v101 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__object____ctor(
        v101,
        (Il2CppObject *)v56,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__,
        0LL);
      v102 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                    v100,
                                                                    (System_Func_TSource__TResult__o *)v101,
                                                                    (const MethodInfo_2F31AE4 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v103 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v103 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_9 = (System_Func_object__bool__o *)v103->static_fields->__9__24_9;
      if ( !_9__24_9 )
      {
        if ( !v103->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v103);
          v103 = BattleLogicNomal___c_TypeInfo;
        }
        v105 = (Il2CppObject *)v103->static_fields->__9;
        _9__24_9 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__24_9,
          v105,
          Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__,
          0LL);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
        static_fields->__9__24_9 = (struct System_Func_BattleServantData__bool__o *)_9__24_9;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__24_9, (int32_t)_9__24_9, v107, v108);
      }
      ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                           v102,
                           (System_Func_TSource__bool__o *)_9__24_9,
                           (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      if ( !*v99 )
        goto LABEL_375;
      v96 = (System_Collections_Generic_IEnumerable_TSource__o **)(v56 + 56);
      System_Collections_Generic_List_object___AddRange(
        *v99,
        (System_Collections_Generic_IEnumerable_T__o *)ActorId,
        (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
      v73 = (BattleCommandData_o **)(v56 + 40);
    }
    ActorId = (__int64)*v73;
    if ( *v73 )
    {
      IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                         (BattleCommandData_o *)ActorId,
                                         0LL);
      v110 = *v96;
      v358 = IsForceAttackFunctionTargetAll;
      v111 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v111 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_0 = (System_Func_object__object__o *)v111->static_fields->__9__24_0;
      if ( !_9__24_0 )
      {
        if ( !v111->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v111);
          v111 = BattleLogicNomal___c_TypeInfo;
        }
        v113 = (Il2CppObject *)v111->static_fields->__9;
        _9__24_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BattleServantData__BattleServantData__TypeInfo);
        System_Func_object__object____ctor(
          _9__24_0,
          v113,
          Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__,
          0LL);
        v114 = BattleLogicNomal___c_TypeInfo->static_fields;
        v114->__9__24_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__24_0;
        sub_1B4CF34((CGThumbnailListItem_o *)&v114->__9__24_0, (int32_t)_9__24_0, v115, v116);
      }
      v117 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
      System_Func_object__object____ctor(
        v117,
        (Il2CppObject *)v56,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__,
        0LL);
      ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                           v110,
                           (System_Func_TSource__TKey__o *)_9__24_0,
                           (System_Func_TSource__TElement__o *)v117,
                           (const MethodInfo_2F3CC40 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
      v118 = *(_QWORD *)(v56 + 24);
      v362 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
      if ( v118 )
      {
        v119 = BuffList_TypeInfo;
        actSvtBuffData = *(BattleBuffData_o **)(v118 + 784);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          v119 = BuffList_TypeInfo;
        }
        v120 = BattleLogicNomal___c_TypeInfo;
        CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v119->static_fields->CommandCodeBuffHash;
        if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
          v120 = BattleLogicNomal___c_TypeInfo;
        }
        _9__24_2 = (System_Func_T__TResult__o *)v120->static_fields->__9__24_2;
        if ( !_9__24_2 )
        {
          if ( !v120->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v120);
            v120 = BattleLogicNomal___c_TypeInfo;
          }
          v123 = (Il2CppObject *)v120->static_fields->__9;
          _9__24_2 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
          System_Func_Int32Enum__Int32Enum____ctor(
            _9__24_2,
            v123,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__,
            0LL);
          v124 = BattleLogicNomal___c_TypeInfo->static_fields;
          v124->__9__24_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__24_2;
          sub_1B4CF34((CGThumbnailListItem_o *)&v124->__9__24_2, (int32_t)_9__24_2, v125, v126);
          v120 = BattleLogicNomal___c_TypeInfo;
        }
        v348 = (__int64 *)v96;
        if ( !v120->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v120);
          v120 = BattleLogicNomal___c_TypeInfo;
        }
        _9__24_3 = (System_Func_T__TResult__o *)v120->static_fields->__9__24_3;
        if ( !_9__24_3 )
        {
          if ( !v120->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v120);
            v120 = BattleLogicNomal___c_TypeInfo;
          }
          v128 = (Il2CppObject *)v120->static_fields->__9;
          _9__24_3 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
          System_Func_Int32Enum__object____ctor(
            _9__24_3,
            v128,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__,
            0LL);
          v129 = BattleLogicNomal___c_TypeInfo->static_fields;
          v129->__9__24_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__24_3;
          sub_1B4CF34((CGThumbnailListItem_o *)&v129->__9__24_3, (int32_t)_9__24_3, v130, v131);
        }
        v132 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
                 CommandCodeBuffHash,
                 (System_Func_TSource__TKey__o *)_9__24_2,
                 (System_Func_TSource__TElement__o *)_9__24_3,
                 (const MethodInfo_2F3CA48 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
        *(_QWORD *)(v56 + 32) = v132;
        sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 32), (int32_t)v132, v133, v134);
        v135 = *(_QWORD *)(v56 + 40);
        v353 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v56 + 32);
        if ( v135 )
        {
          v136 = *(_QWORD *)(v135 + 72);
          v137 = (System_Action_object__object__o *)sub_1B4D1DC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
          System_Action_object__object____ctor(
            v137,
            (Il2CppObject *)v56,
            Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__,
            0LL);
          ActorId = (__int64)actSvtBuffData;
          v138 = (BattleCommandData_o **)(v56 + 40);
          if ( actSvtBuffData )
          {
            BattleBuffData__SetCommandCodeBuffActiveFlg(
              actSvtBuffData,
              v136,
              (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v137,
              1,
              0LL);
            if ( *v363 )
            {
              commandAssistId = (*v363)->fields.commandAssistId;
              v140 = (System_Action_object__object__o *)sub_1B4D1DC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
              System_Action_object__object____ctor(
                v140,
                (Il2CppObject *)v56,
                Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__,
                0LL);
              v141 = *(_QWORD *)(v56 + 40);
              if ( v141 )
              {
                BattleBuffData__SetCommandAssistBuffActiveFlg(
                  actSvtBuffData,
                  commandAssistId,
                  (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v140,
                  1,
                  *(_DWORD *)(v141 + 88),
                  0LL);
                ActorId = sub_1B4D038(bool___TypeInfo, 2LL);
                if ( ActorId )
                {
                  v142 = ActorId;
                  if ( !*(_DWORD *)(ActorId + 24) )
                    goto LABEL_376;
                  *(_BYTE *)(ActorId + 32) = 1;
                  ActorId = sub_1B4D038(BattleServantData___TypeInfo, 1LL);
                  if ( ActorId )
                  {
                    v145 = ActorId;
                    if ( v357 )
                    {
                      ActorId = sub_1B4D0CC(v357, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
                      if ( !ActorId )
                      {
                        v346 = sub_1B4D210(0LL);
                        sub_1B4D0B8(v346, 0LL);
                      }
                    }
                    if ( !*(_DWORD *)(v145 + 24) )
                      goto LABEL_376;
                    *(_QWORD *)(v145 + 32) = v357;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v145 + 32), (int32_t)v357, v143, v144);
                    *(_QWORD *)(v56 + 72) = v145;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 72), v145, v146, v147);
                    v148 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BattleServantData__BattleServantData__TypeInfo);
                    System_Func_object__object____ctor(
                      v148,
                      (Il2CppObject *)v56,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__,
                      0LL);
                    *(_QWORD *)(v56 + 64) = v148;
                    v350 = v56 + 64;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 64), (int32_t)v148, v149, v150);
                    v360 = sub_1B4D1DC(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
                    System_Func_bool__bool__object____ctor(
                      (System_Func_T1__T2__TResult__o *)v360,
                      (Il2CppObject *)v56,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__,
                      0LL);
                    ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( ActorId )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)ActorId,
                                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                      v152 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
                      BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v152, 0LL);
                      v154 = *(_QWORD *)(v142 + 24);
                      v361 = v63;
                      v359 = v142;
                      if ( (int)v154 >= 1 )
                      {
                        v155 = 0LL;
                        do
                        {
                          if ( v155 >= (unsigned int)v154 )
                            goto LABEL_376;
                          v156 = *(unsigned __int8 *)(v142 + v155 + 32);
                          if ( v156 )
                            v157 = 177;
                          else
                            v157 = 138;
                          ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                                               (BattleLogicNomal_o *)ActorId,
                                               *v353,
                                               actSvtBuffData,
                                               v157,
                                               *v363,
                                               v153);
                          if ( !v360 )
                            goto LABEL_375;
                          v158 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
                          ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v360 + 24))(
                                      *(_QWORD *)(v360 + 64),
                                      v156 != 0,
                                      v358,
                                      *(_QWORD *)(v360 + 40));
                          if ( !ActorId )
                            goto LABEL_375;
                          v159 = *(_QWORD *)ActorId;
                          v160 = ActorId;
                          v161 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                          {
                            v162 = (int *)(*(_QWORD *)(v159 + 176) + 8LL);
                            while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v162 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                            {
                              --v161;
                              v162 += 4;
                              if ( !v161 )
                                goto LABEL_90;
                            }
                            v163 = v159 + 16LL * *v162 + 312;
                          }
                          else
                          {
LABEL_90:
                            v163 = sub_1B9D724(
                                     ActorId,
                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                     0LL);
                          }
                          v164 = (*(__int64 (__fastcall **)(__int64, _QWORD))v163)(v160, *(_QWORD *)(v163 + 8));
                          v166 = v164;
                          while ( 1 )
                          {
                            if ( !v166 )
                              sub_1B4D1EC(v164, v165);
                            v167 = *(_QWORD *)v166;
                            v168 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
                            {
                              v169 = (int *)(*(_QWORD *)(v167 + 176) + 8LL);
                              while ( *((System_Collections_IEnumerator_c **)v169 - 1) != System_Collections_IEnumerator_TypeInfo )
                              {
                                --v168;
                                v169 += 4;
                                if ( !v168 )
                                  goto LABEL_98;
                              }
                              v170 = v167 + 16LL * *v169 + 312;
                            }
                            else
                            {
LABEL_98:
                              v170 = sub_1B9D724(v166, System_Collections_IEnumerator_TypeInfo, 0LL);
                            }
                            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v170)(v166, *(_QWORD *)(v170 + 8)) & 1) == 0 )
                              break;
                            v171 = *(_QWORD *)v166;
                            v172 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
                            {
                              v173 = (int *)(*(_QWORD *)(v171 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v173 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                              {
                                --v172;
                                v173 += 4;
                                if ( !v172 )
                                  goto LABEL_105;
                              }
                              v174 = v171 + 16LL * *v173 + 312;
                            }
                            else
                            {
LABEL_105:
                              v174 = sub_1B9D724(
                                       v166,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v175 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v174)(
                                                     v166,
                                                     *(_QWORD *)(v174 + 8));
                            if ( !v362 )
                              sub_1B4D1EC(0LL, v175);
                            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                                     v362,
                                     v175,
                                     (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                            BattleLogicNomal__commandCodeBuffProcess(
                              this,
                              (BattleBuffData_CheckInvokeBuff_o *)Item,
                              (SkillLvMaster_o *)MasterData_object,
                              *v363,
                              v158,
                              *v69,
                              0,
                              v152,
                              v347);
                          }
                          v177 = *(_QWORD *)v166;
                          v178 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
                          {
                            v179 = (int *)(*(_QWORD *)(v177 + 176) + 8LL);
                            while ( *((System_IDisposable_c **)v179 - 1) != System_IDisposable_TypeInfo )
                            {
                              --v178;
                              v179 += 4;
                              if ( !v178 )
                                goto LABEL_113;
                            }
                            v180 = v177 + 16LL * *v179 + 312;
                          }
                          else
                          {
LABEL_113:
                            v180 = sub_1B9D724(v166, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v180)(v166, *(_QWORD *)(v180 + 8));
                          v142 = v359;
                          LODWORD(v154) = *(_DWORD *)(v359 + 24);
                          ++v155;
                        }
                        while ( (__int64)v155 < (int)v154 );
                        if ( (int)v154 >= 1 )
                        {
                          v181 = 0LL;
                          while ( v181 < (unsigned int)v154 )
                          {
                            processArgs = (BattleLogic_DamageProcessArgs_o *)v181;
                            v182 = *(unsigned __int8 *)(v142 + v181 + 32);
                            ActorId = sub_1B4D038(BuffList_ACTION___TypeInfo, 2LL);
                            if ( !ActorId )
                              goto LABEL_375;
                            v183 = *(_DWORD *)(ActorId + 24);
                            v184 = (BuffList_ACTION_array *)ActorId;
                            if ( v182 )
                            {
                              if ( !v183 )
                                break;
                              *(_DWORD *)(ActorId + 32) = 118;
                              if ( v183 == 1 )
                                break;
                              v185 = 120;
                            }
                            else
                            {
                              if ( !v183 )
                                break;
                              *(_DWORD *)(ActorId + 32) = 88;
                              if ( v183 == 1 )
                                break;
                              v185 = 98;
                            }
                            *(_DWORD *)(ActorId + 36) = v185;
                            ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v360 + 24))(
                                        *(_QWORD *)(v360 + 64),
                                        v182 != 0,
                                        v358,
                                        *(_QWORD *)(v360 + 40));
                            if ( !ActorId )
                              goto LABEL_375;
                            v186 = *(_QWORD *)ActorId;
                            v187 = ActorId;
                            v188 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                            {
                              v189 = (int *)(*(_QWORD *)(v186 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v189 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                              {
                                --v188;
                                v189 += 4;
                                if ( !v188 )
                                  goto LABEL_135;
                              }
                              v190 = v186 + 16LL * *v189 + 312;
                            }
                            else
                            {
LABEL_135:
                              v190 = sub_1B9D724(
                                       ActorId,
                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v192 = (*(__int64 (__fastcall **)(__int64, _QWORD))v190)(v187, *(_QWORD *)(v190 + 8));
                            if ( !v192 )
                              sub_1B4D1EC(0LL, v191);
                            while ( 1 )
                            {
                              v193 = *(_QWORD *)v192;
                              v194 = *(unsigned __int16 *)(*(_QWORD *)v192 + 302LL);
                              if ( *(_WORD *)(*(_QWORD *)v192 + 302LL) )
                              {
                                v195 = (int *)(*(_QWORD *)(v193 + 176) + 8LL);
                                while ( *((System_Collections_IEnumerator_c **)v195 - 1) != System_Collections_IEnumerator_TypeInfo )
                                {
                                  --v194;
                                  v195 += 4;
                                  if ( !v194 )
                                    goto LABEL_142;
                                }
                                v63 = v361;
                                v138 = v363;
                                v196 = v193 + 16LL * *v195 + 312;
                              }
                              else
                              {
LABEL_142:
                                v63 = v361;
                                v138 = v363;
                                v196 = sub_1B9D724(v192, System_Collections_IEnumerator_TypeInfo, 0LL);
                              }
                              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v196)(v192, *(_QWORD *)(v196 + 8)) & 1) == 0 )
                                break;
                              v197 = *(_QWORD *)v192;
                              v198 = *(unsigned __int16 *)(*(_QWORD *)v192 + 302LL);
                              if ( *(_WORD *)(*(_QWORD *)v192 + 302LL) )
                              {
                                v199 = (int *)(*(_QWORD *)(v197 + 176) + 8LL);
                                while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v199 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                {
                                  --v198;
                                  v199 += 4;
                                  if ( !v198 )
                                    goto LABEL_149;
                                }
                                v200 = v197 + 16LL * *v199 + 312;
                              }
                              else
                              {
LABEL_149:
                                v200 = sub_1B9D724(
                                         v192,
                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                         0LL);
                              }
                              v202 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v200)(
                                                              v192,
                                                              *(_QWORD *)(v200 + 8));
                              if ( !*v63 )
                                sub_1B4D1EC(0LL, v201);
                              AttackSideEffectBuffList_43656588 = BattleServantData__getAttackSideEffectBuffList_43656588(
                                                                    *v63,
                                                                    v184,
                                                                    *v138,
                                                                    v202,
                                                                    0LL);
                              v205 = AttackSideEffectBuffList_43656588;
                              if ( !AttackSideEffectBuffList_43656588 )
                                sub_1B4D1EC(0LL, v204);
                              v206 = *(_QWORD *)&AttackSideEffectBuffList_43656588->max_length;
                              if ( (int)v206 >= 1 )
                              {
                                v207 = 0LL;
                                do
                                {
                                  if ( v207 >= (unsigned int)v206 )
                                    sub_1B4D1F4(AttackSideEffectBuffList_43656588, v204);
                                  if ( !*v69 )
                                    sub_1B4D1EC(0LL, v204);
                                  v208 = v205->m_Items[v207];
                                  logicfunction = this->fields.logicfunction;
                                  SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v69, 3, 0LL);
                                  if ( !logicfunction )
                                    sub_1B4D1EC(SideEffectActionData, v211);
                                  BattleLogicFunction__SetSideEffectBuff(
                                    logicfunction,
                                    (SkillLvMaster_o *)MasterData_object,
                                    SideEffectActionData,
                                    v208,
                                    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v152,
                                    0,
                                    0LL);
                                  LODWORD(v206) = v205->max_length;
                                  ++v207;
                                }
                                while ( (__int64)v207 < (int)v206 );
                              }
                            }
                            v212 = *(_QWORD *)v192;
                            v213 = *(unsigned __int16 *)(*(_QWORD *)v192 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v192 + 302LL) )
                            {
                              v214 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
                              while ( *((System_IDisposable_c **)v214 - 1) != System_IDisposable_TypeInfo )
                              {
                                --v213;
                                v214 += 4;
                                if ( !v213 )
                                  goto LABEL_164;
                              }
                              v215 = v212 + 16LL * *v214 + 312;
                            }
                            else
                            {
LABEL_164:
                              v215 = sub_1B9D724(v192, System_IDisposable_TypeInfo, 0LL);
                            }
                            ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v215)(v192, *(_QWORD *)(v215 + 8));
                            v142 = v359;
                            LODWORD(v154) = *(_DWORD *)(v359 + 24);
                            v181 = (unsigned __int64)&processArgs->klass + 1;
                            if ( (__int64)&processArgs->klass + 1 >= (int)v154 )
                              goto LABEL_174;
                          }
LABEL_376:
                          sub_1B4D1F4(ActorId, v58);
                        }
                      }
LABEL_174:
                      processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1B4D1DC(BattleLogic_DamageProcessArgs_TypeInfo);
                      BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL, 0LL);
                      if ( v360 )
                      {
                        ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v360 + 24))(
                                    *(_QWORD *)(v360 + 64),
                                    0LL,
                                    0LL,
                                    *(_QWORD *)(v360 + 40));
                        if ( ActorId )
                        {
                          v216 = *(_QWORD *)ActorId;
                          v217 = ActorId;
                          v218 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                          {
                            v219 = (int *)(*(_QWORD *)(v216 + 176) + 8LL);
                            while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v219 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                            {
                              --v218;
                              v219 += 4;
                              if ( !v218 )
                                goto LABEL_180;
                            }
                            v220 = v216 + 16LL * *v219 + 312;
                          }
                          else
                          {
LABEL_180:
                            v220 = sub_1B9D724(
                                     ActorId,
                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                     0LL);
                          }
                          v221 = (*(__int64 (__fastcall **)(__int64, _QWORD))v220)(v217, *(_QWORD *)(v220 + 8));
                          v223 = v221;
                          v224 = 0LL;
                          while ( 1 )
                          {
                            if ( !v223 )
                              sub_1B4D1EC(v221, v222);
                            v225 = *(_QWORD *)v223;
                            v226 = *(unsigned __int16 *)(*(_QWORD *)v223 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v223 + 302LL) )
                            {
                              v227 = (int *)(*(_QWORD *)(v225 + 176) + 8LL);
                              while ( *((System_Collections_IEnumerator_c **)v227 - 1) != System_Collections_IEnumerator_TypeInfo )
                              {
                                --v226;
                                v227 += 4;
                                if ( !v226 )
                                  goto LABEL_188;
                              }
                              v228 = v225 + 16LL * *v227 + 312;
                            }
                            else
                            {
LABEL_188:
                              v228 = sub_1B9D724(v223, System_Collections_IEnumerator_TypeInfo, 0LL);
                            }
                            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v228)(v223, *(_QWORD *)(v228 + 8)) & 1) == 0 )
                              break;
                            v229 = *(_QWORD *)v223;
                            v230 = *(unsigned __int16 *)(*(_QWORD *)v223 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v223 + 302LL) )
                            {
                              v231 = (int *)(*(_QWORD *)(v229 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v231 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                              {
                                --v230;
                                v231 += 4;
                                if ( !v230 )
                                  goto LABEL_195;
                              }
                              v232 = v229 + 16LL * *v231 + 312;
                            }
                            else
                            {
LABEL_195:
                              v232 = sub_1B9D724(
                                       v223,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v234 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v232)(
                                                            v223,
                                                            *(_QWORD *)(v232 + 8));
                            v235 = this->fields.logic;
                            if ( !v235 )
                              sub_1B4D1EC(0LL, v233);
                            DamageList = BattleLogic__GetDamageList(v235, *v63, v234, *v138, processArgsa, 0LL);
                            v238 = DamageList;
                            if ( v234 == (BattleServantData_o *)v357 )
                              v224 = DamageList;
                            if ( !v234 )
                              sub_1B4D1EC(DamageList, v237);
                            buffData = v234->fields.buffData;
                            if ( !buffData )
                              sub_1B4D1EC(DamageList, v237);
                            if ( !buffData->fields.isNoDamage )
                            {
                              v240 = *v69;
                              v241 = BattleBuffData__UseProgressingDoNotAct(v234->fields.buffData, v234, 0, 0LL);
                              if ( !v240 )
                                sub_1B4D1EC(v241, v241);
                              BattleActionData__addSideEffectActionData(v240, v241, 1, 0LL);
                            }
                            if ( !*v63 )
                              sub_1B4D1EC(0LL, v237);
                            v242 = BattleServantData__checkPlayer(*v63, 0LL);
                            if ( v242 )
                            {
                              if ( !*v63 )
                                sub_1B4D1EC(v242, v243);
                              v234->fields.overkillTargetId = (*v63)->fields.uniqueId;
                            }
                            if ( !*v69 )
                              sub_1B4D1EC(0LL, v243);
                            BattleActionData__setDamageData(*v69, v238, 0LL, 0, 0, 0LL);
                          }
                          v244 = *(_QWORD *)v223;
                          v245 = *(unsigned __int16 *)(*(_QWORD *)v223 + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)v223 + 302LL) )
                          {
                            v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
                            while ( *((System_IDisposable_c **)v246 - 1) != System_IDisposable_TypeInfo )
                            {
                              --v245;
                              v246 += 4;
                              if ( !v245 )
                                goto LABEL_215;
                            }
                            v247 = v244 + 16LL * *v246 + 312;
                          }
                          else
                          {
LABEL_215:
                            v247 = sub_1B9D724(v223, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v247)(v223, *(_QWORD *)(v247 + 8));
                          if ( *(_QWORD *)v350 )
                          {
                            (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v350 + 24LL))(
                              *(_QWORD *)(*(_QWORD *)v350 + 64LL),
                              v357,
                              *(_QWORD *)(*(_QWORD *)v350 + 40LL));
                            ActorId = (__int64)*v138;
                            if ( *v138 )
                            {
                              v248 = *v69;
                              ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
                              if ( v248 )
                              {
                                v248->fields.type = ActorId;
                                ActorId = (__int64)*v69;
                                if ( *v69 )
                                {
                                  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v138, 0LL);
                                  v58 = *v138;
                                  if ( *v138 )
                                  {
                                    v249 = *v69;
                                    if ( *v69 )
                                    {
                                      v249->fields.actionIndex = v58->fields.actionIndex;
                                      ActorId = (__int64)*v63;
                                      if ( *v63 )
                                      {
                                        ActorId = BattleServantData__getMotionId(
                                                    (BattleServantData_o *)ActorId,
                                                    v58,
                                                    0LL);
                                        v249->fields.motionId = ActorId;
                                        if ( v224 )
                                        {
                                          v250 = *v69;
                                          ActorId = BattleActionData_DamageData__getAttackCount(v224, 0LL);
                                          if ( v250 )
                                          {
                                            v250->fields.attackcount = ActorId;
                                            v251 = this->fields.data;
                                            v252 = v359;
                                            if ( v251 )
                                            {
                                              perf = v251->fields.perf;
                                              if ( perf )
                                              {
                                                if ( *v138 )
                                                {
                                                  ActorId = (__int64)perf->fields.commandPerf;
                                                  if ( ActorId )
                                                  {
                                                    BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                                      (BattlePerformanceCommandCard_o *)ActorId,
                                                      (*v138)->fields.actionIndex,
                                                      0LL);
                                                    if ( *v63 )
                                                    {
                                                      ActorId = (__int64)this->fields.data;
                                                      if ( ActorId )
                                                      {
                                                        v254 = *v69;
                                                        ActorId = BattleData__isPrevAttackMe(
                                                                    (BattleData_o *)ActorId,
                                                                    (*v63)->fields.uniqueId,
                                                                    uniqueId,
                                                                    0LL);
                                                        if ( v254 )
                                                        {
                                                          v254->fields.prevattackme = ActorId & 1;
                                                          v256 = *(_QWORD *)(v359 + 24);
                                                          if ( (int)v256 >= 1 )
                                                          {
                                                            v257 = 0LL;
                                                            do
                                                            {
                                                              if ( v257 >= (unsigned int)v256 )
                                                                goto LABEL_376;
                                                              v258 = *(unsigned __int8 *)(v252 + v257 + 32);
                                                              if ( *(_BYTE *)(v252 + v257 + 32) )
                                                                v259 = 178;
                                                              else
                                                                v259 = 159;
                                                              TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                                                                            (BattleLogicNomal_o *)ActorId,
                                                                                            *v353,
                                                                                            actSvtBuffData,
                                                                                            v259,
                                                                                            *v363,
                                                                                            v255);
                                                              ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v360 + 24))(
                                                                          *(_QWORD *)(v360 + 64),
                                                                          v258,
                                                                          v358,
                                                                          *(_QWORD *)(v360 + 40));
                                                              if ( !ActorId )
                                                                goto LABEL_375;
                                                              v261 = *(_QWORD *)ActorId;
                                                              v262 = ActorId;
                                                              v263 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                              {
                                                                v264 = (int *)(*(_QWORD *)(v261 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v264
                                                                        - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                {
                                                                  --v263;
                                                                  v264 += 4;
                                                                  if ( !v263 )
                                                                    goto LABEL_244;
                                                                }
                                                                v265 = v261 + 16LL * *v264 + 312;
                                                              }
                                                              else
                                                              {
LABEL_244:
                                                                v265 = sub_1B9D724(
                                                                         ActorId,
                                                                         System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v266 = (*(__int64 (__fastcall **)(__int64, _QWORD))v265)(
                                                                       v262,
                                                                       *(_QWORD *)(v265 + 8));
                                                              v268 = v266;
                                                              while ( 1 )
                                                              {
                                                                if ( !v268 )
                                                                  sub_1B4D1EC(v266, v267);
                                                                v269 = *(_QWORD *)v268;
                                                                v270 = *(unsigned __int16 *)(*(_QWORD *)v268 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v268 + 302LL) )
                                                                {
                                                                  v271 = (int *)(*(_QWORD *)(v269 + 176) + 8LL);
                                                                  while ( *((System_Collections_IEnumerator_c **)v271 - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                  {
                                                                    --v270;
                                                                    v271 += 4;
                                                                    if ( !v270 )
                                                                      goto LABEL_252;
                                                                  }
                                                                  v272 = v269 + 16LL * *v271 + 312;
                                                                }
                                                                else
                                                                {
LABEL_252:
                                                                  v272 = sub_1B9D724(
                                                                           v268,
                                                                           System_Collections_IEnumerator_TypeInfo,
                                                                           0LL);
                                                                }
                                                                if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v272)(
                                                                        v268,
                                                                        *(_QWORD *)(v272 + 8)) & 1) == 0 )
                                                                  break;
                                                                v273 = *(_QWORD *)v268;
                                                                v274 = *(unsigned __int16 *)(*(_QWORD *)v268 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v268 + 302LL) )
                                                                {
                                                                  v275 = (int *)(*(_QWORD *)(v273 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v275
                                                                          - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v274;
                                                                    v275 += 4;
                                                                    if ( !v274 )
                                                                      goto LABEL_259;
                                                                  }
                                                                  v276 = v273 + 16LL * *v275 + 312;
                                                                }
                                                                else
                                                                {
LABEL_259:
                                                                  v276 = sub_1B9D724(
                                                                           v268,
                                                                           System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v277 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v276)(
                                                                                         v268,
                                                                                         *(_QWORD *)(v276 + 8));
                                                                if ( !v362 )
                                                                  sub_1B4D1EC(v277, v277);
                                                                v278 = System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                         v362,
                                                                         v277,
                                                                         (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                                                                BattleLogicNomal__commandCodeBuffProcess(
                                                                  this,
                                                                  (BattleBuffData_CheckInvokeBuff_o *)v278,
                                                                  (SkillLvMaster_o *)MasterData_object,
                                                                  *v363,
                                                                  TargetCommandCodeBuffList,
                                                                  *v69,
                                                                  1,
                                                                  v152,
                                                                  v347);
                                                              }
                                                              v279 = *(_QWORD *)v268;
                                                              v280 = *(unsigned __int16 *)(*(_QWORD *)v268 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v268 + 302LL) )
                                                              {
                                                                v281 = (int *)(*(_QWORD *)(v279 + 176) + 8LL);
                                                                while ( *((System_IDisposable_c **)v281 - 1) != System_IDisposable_TypeInfo )
                                                                {
                                                                  --v280;
                                                                  v281 += 4;
                                                                  if ( !v280 )
                                                                    goto LABEL_267;
                                                                }
                                                                v282 = v279 + 16LL * *v281 + 312;
                                                              }
                                                              else
                                                              {
LABEL_267:
                                                                v282 = sub_1B9D724(
                                                                         v268,
                                                                         System_IDisposable_TypeInfo,
                                                                         0LL);
                                                              }
                                                              ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v282)(
                                                                          v268,
                                                                          *(_QWORD *)(v282 + 8));
                                                              v252 = v359;
                                                              LODWORD(v256) = *(_DWORD *)(v359 + 24);
                                                              ++v257;
                                                            }
                                                            while ( (__int64)v257 < (int)v256 );
                                                            v138 = v363;
                                                            if ( (int)v256 >= 1 )
                                                            {
                                                              v283 = 0LL;
                                                              while ( v283 < (unsigned int)v256 )
                                                              {
                                                                v284 = *(unsigned __int8 *)(v252 + v283 + 32);
                                                                ActorId = sub_1B4D038(BuffList_ACTION___TypeInfo, 2LL);
                                                                if ( !ActorId )
                                                                  goto LABEL_375;
                                                                v285 = *(_DWORD *)(ActorId + 24);
                                                                v286 = (BuffList_ACTION_array *)ActorId;
                                                                if ( v284 )
                                                                {
                                                                  if ( !v285 )
                                                                    goto LABEL_376;
                                                                  *(_DWORD *)(ActorId + 32) = 119;
                                                                  if ( v285 == 1 )
                                                                    goto LABEL_376;
                                                                  v287 = 121;
                                                                }
                                                                else
                                                                {
                                                                  if ( !v285 )
                                                                    goto LABEL_376;
                                                                  *(_DWORD *)(ActorId + 32) = 57;
                                                                  if ( v285 == 1 )
                                                                    goto LABEL_376;
                                                                  v287 = 80;
                                                                }
                                                                *(_DWORD *)(ActorId + 36) = v287;
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v360 + 24))(
                                                                            *(_QWORD *)(v360 + 64),
                                                                            v284 != 0,
                                                                            v358,
                                                                            *(_QWORD *)(v360 + 40));
                                                                if ( !ActorId )
                                                                  goto LABEL_375;
                                                                v288 = *(_QWORD *)ActorId;
                                                                v289 = ActorId;
                                                                v290 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                                {
                                                                  v291 = (int *)(*(_QWORD *)(v288 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v291
                                                                          - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v290;
                                                                    v291 += 4;
                                                                    if ( !v290 )
                                                                      goto LABEL_289;
                                                                  }
                                                                  v292 = v288 + 16LL * *v291 + 312;
                                                                }
                                                                else
                                                                {
LABEL_289:
                                                                  v292 = sub_1B9D724(
                                                                           ActorId,
                                                                           System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v294 = (*(__int64 (__fastcall **)(__int64, _QWORD))v292)(
                                                                         v289,
                                                                         *(_QWORD *)(v292 + 8));
                                                                if ( !v294 )
                                                                  sub_1B4D1EC(0LL, v293);
                                                                while ( 1 )
                                                                {
                                                                  v295 = *(_QWORD *)v294;
                                                                  v296 = *(unsigned __int16 *)(*(_QWORD *)v294 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v294 + 302LL) )
                                                                  {
                                                                    v297 = (int *)(*(_QWORD *)(v295 + 176) + 8LL);
                                                                    while ( *((System_Collections_IEnumerator_c **)v297
                                                                            - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                    {
                                                                      --v296;
                                                                      v297 += 4;
                                                                      if ( !v296 )
                                                                        goto LABEL_296;
                                                                    }
                                                                    v298 = v363;
                                                                    v299 = v295 + 16LL * *v297 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_296:
                                                                    v298 = v363;
                                                                    v299 = sub_1B9D724(
                                                                             v294,
                                                                             System_Collections_IEnumerator_TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v299)(
                                                                          v294,
                                                                          *(_QWORD *)(v299 + 8)) & 1) == 0 )
                                                                    break;
                                                                  v300 = *(_QWORD *)v294;
                                                                  v301 = *(unsigned __int16 *)(*(_QWORD *)v294 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v294 + 302LL) )
                                                                  {
                                                                    v302 = (int *)(*(_QWORD *)(v300 + 176) + 8LL);
                                                                    while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v302
                                                                            - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                    {
                                                                      --v301;
                                                                      v302 += 4;
                                                                      if ( !v301 )
                                                                        goto LABEL_303;
                                                                    }
                                                                    v303 = v300 + 16LL * *v302 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_303:
                                                                    v303 = sub_1B9D724(
                                                                             v294,
                                                                             System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  v305 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v303)(
                                                                                                  v294,
                                                                                                  *(_QWORD *)(v303 + 8));
                                                                  if ( !*v361 )
                                                                    sub_1B4D1EC(0LL, v304);
                                                                  v306 = BattleServantData__getAttackSideEffectBuffList_43656588(
                                                                           *v361,
                                                                           v286,
                                                                           *v298,
                                                                           v305,
                                                                           0LL);
                                                                  v308 = v306;
                                                                  if ( !v306 )
                                                                    sub_1B4D1EC(0LL, v307);
                                                                  v309 = *(_QWORD *)&v306->max_length;
                                                                  if ( (int)v309 >= 1 )
                                                                  {
                                                                    v310 = 0LL;
                                                                    do
                                                                    {
                                                                      if ( v310 >= (unsigned int)v309 )
                                                                        sub_1B4D1F4(v306, v307);
                                                                      v311 = this->fields.logicfunction;
                                                                      if ( !v311 )
                                                                        sub_1B4D1EC(0LL, v307);
                                                                      BattleLogicFunction__SetSideEffectBuff(
                                                                        v311,
                                                                        (SkillLvMaster_o *)MasterData_object,
                                                                        *v69,
                                                                        v308->m_Items[v310],
                                                                        (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v152,
                                                                        1,
                                                                        0LL);
                                                                      LODWORD(v309) = v308->max_length;
                                                                      ++v310;
                                                                    }
                                                                    while ( (__int64)v310 < (int)v309 );
                                                                  }
                                                                }
                                                                v312 = *(_QWORD *)v294;
                                                                v313 = *(unsigned __int16 *)(*(_QWORD *)v294 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v294 + 302LL) )
                                                                {
                                                                  v314 = (int *)(*(_QWORD *)(v312 + 176) + 8LL);
                                                                  while ( *((System_IDisposable_c **)v314 - 1) != System_IDisposable_TypeInfo )
                                                                  {
                                                                    --v313;
                                                                    v314 += 4;
                                                                    if ( !v313 )
                                                                      goto LABEL_317;
                                                                  }
                                                                  v315 = v312 + 16LL * *v314 + 312;
                                                                }
                                                                else
                                                                {
LABEL_317:
                                                                  v315 = sub_1B9D724(
                                                                           v294,
                                                                           System_IDisposable_TypeInfo,
                                                                           0LL);
                                                                }
                                                                ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v315)(
                                                                            v294,
                                                                            *(_QWORD *)(v315 + 8));
                                                                v252 = v359;
                                                                LODWORD(v256) = *(_DWORD *)(v359 + 24);
                                                                v138 = v363;
                                                                if ( (__int64)++v283 >= (int)v256 )
                                                                  goto LABEL_326;
                                                              }
                                                              goto LABEL_376;
                                                            }
                                                          }
LABEL_326:
                                                          ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v360 + 24))(
                                                                      *(_QWORD *)(v360 + 64),
                                                                      0LL,
                                                                      0LL,
                                                                      *(_QWORD *)(v360 + 40));
                                                          if ( ActorId )
                                                          {
                                                            v316 = *(_QWORD *)ActorId;
                                                            v317 = ActorId;
                                                            v318 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                            if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                            {
                                                              v319 = (int *)(*(_QWORD *)(v316 + 176) + 8LL);
                                                              while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v319
                                                                      - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                              {
                                                                --v318;
                                                                v319 += 4;
                                                                if ( !v318 )
                                                                  goto LABEL_331;
                                                              }
                                                              v320 = v316 + 16LL * *v319 + 312;
                                                            }
                                                            else
                                                            {
LABEL_331:
                                                              v320 = sub_1B9D724(
                                                                       ActorId,
                                                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                       0LL);
                                                            }
                                                            v321 = (*(__int64 (__fastcall **)(__int64, _QWORD))v320)(
                                                                     v317,
                                                                     *(_QWORD *)(v320 + 8));
                                                            v323 = v321;
                                                            while ( 1 )
                                                            {
                                                              if ( !v323 )
                                                                sub_1B4D1EC(v321, v322);
                                                              v324 = *(_QWORD *)v323;
                                                              v325 = *(unsigned __int16 *)(*(_QWORD *)v323 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v323 + 302LL) )
                                                              {
                                                                v326 = (int *)(*(_QWORD *)(v324 + 176) + 8LL);
                                                                while ( *((System_Collections_IEnumerator_c **)v326 - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                {
                                                                  --v325;
                                                                  v326 += 4;
                                                                  if ( !v325 )
                                                                    goto LABEL_339;
                                                                }
                                                                v327 = v324 + 16LL * *v326 + 312;
                                                              }
                                                              else
                                                              {
LABEL_339:
                                                                v327 = sub_1B9D724(
                                                                         v323,
                                                                         System_Collections_IEnumerator_TypeInfo,
                                                                         0LL);
                                                              }
                                                              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v327)(
                                                                      v323,
                                                                      *(_QWORD *)(v327 + 8)) & 1) == 0 )
                                                                break;
                                                              v328 = *(_QWORD *)v323;
                                                              v329 = *(unsigned __int16 *)(*(_QWORD *)v323 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v323 + 302LL) )
                                                              {
                                                                v330 = (int *)(*(_QWORD *)(v328 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v330
                                                                        - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                {
                                                                  --v329;
                                                                  v330 += 4;
                                                                  if ( !v329 )
                                                                    goto LABEL_346;
                                                                }
                                                                v331 = v328 + 16LL * *v330 + 312;
                                                              }
                                                              else
                                                              {
LABEL_346:
                                                                v331 = sub_1B9D724(
                                                                         v323,
                                                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v332 = (*(__int64 (__fastcall **)(__int64, _QWORD))v331)(
                                                                       v323,
                                                                       *(_QWORD *)(v331 + 8));
                                                              if ( !*v361 )
                                                                sub_1B4D1EC(v332, v333);
                                                              if ( !v332 )
                                                                sub_1B4D1EC(0LL, v333);
                                                              if ( !this->fields.logic )
                                                                sub_1B4D1EC(v332, v333);
                                                              v321 = BattleLogic__SetDamageSideEffect(
                                                                       this->fields.logic,
                                                                       *v69,
                                                                       (*v361)->fields.uniqueId,
                                                                       *(_DWORD *)(v332 + 24),
                                                                       *v138,
                                                                       0LL);
                                                            }
                                                            v334 = *(_QWORD *)v323;
                                                            v335 = *(unsigned __int16 *)(*(_QWORD *)v323 + 302LL);
                                                            if ( *(_WORD *)(*(_QWORD *)v323 + 302LL) )
                                                            {
                                                              v336 = (int *)(*(_QWORD *)(v334 + 176) + 8LL);
                                                              while ( *((System_IDisposable_c **)v336 - 1) != System_IDisposable_TypeInfo )
                                                              {
                                                                --v335;
                                                                v336 += 4;
                                                                if ( !v335 )
                                                                  goto LABEL_356;
                                                              }
                                                              v337 = v334 + 16LL * *v336 + 312;
                                                            }
                                                            else
                                                            {
LABEL_356:
                                                              v337 = sub_1B9D724(v323, System_IDisposable_TypeInfo, 0LL);
                                                            }
                                                            (*(void (__fastcall **)(__int64, _QWORD))v337)(
                                                              v323,
                                                              *(_QWORD *)(v337 + 8));
                                                            ActorId = *v348;
                                                            if ( *v348 )
                                                            {
                                                              System_Collections_Generic_List_object___GetEnumerator(
                                                                (System_Collections_Generic_List_Enumerator_T__o *)&v364,
                                                                (System_Collections_Generic_List_object__o *)ActorId,
                                                                (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
                                                              v365 = v364;
                                                              while ( 1 )
                                                              {
                                                                v338 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                                         &v365,
                                                                         (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
                                                                if ( !v338 )
                                                                  break;
                                                                current = v365.fields._current;
                                                                if ( !v365.fields._current )
                                                                  sub_1B4D1EC(v338, v339);
                                                                klass = v365.fields._current[49].klass;
                                                                if ( !klass )
                                                                  sub_1B4D1EC(v338, v339);
                                                                LOBYTE(klass->_1.methods) = 0;
                                                                if ( v351->fields.isCanCounterTask )
                                                                {
                                                                  if ( !*v361 )
                                                                    sub_1B4D1EC(v338, v339);
                                                                  v342 = this->fields.data;
                                                                  if ( !v342 )
                                                                    sub_1B4D1EC(0LL, v339);
                                                                  BattleData__SetWasAttackTargetId(
                                                                    v342,
                                                                    (*v361)->fields.uniqueId,
                                                                    (int32_t)current[1].monitor,
                                                                    0LL);
                                                                }
                                                              }
                                                              System_Collections_Generic_List_Enumerator_object___Dispose(
                                                                &v365,
                                                                (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
                                                              if ( *(_QWORD *)v350 )
                                                              {
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v350 + 24LL))(
                                                                            *(_QWORD *)(*(_QWORD *)v350 + 64LL),
                                                                            v357,
                                                                            *(_QWORD *)(*(_QWORD *)v350 + 40LL));
                                                                v343 = *v69;
                                                                if ( *v69 )
                                                                {
                                                                  v343->fields.isForcedSpeedOne = v351->fields.isForcedSpeedOne;
                                                                  v343->fields.isAllAttack = v349;
                                                                  if ( *v361 )
                                                                  {
                                                                    ActorId = (__int64)this->fields.data;
                                                                    if ( ActorId )
                                                                    {
                                                                      BattleData__setCommandAttack(
                                                                        (BattleData_o *)ActorId,
                                                                        (*v361)->fields.uniqueId,
                                                                        uniqueId,
                                                                        0LL);
                                                                      ActorId = (__int64)this->fields.logic;
                                                                      if ( ActorId )
                                                                      {
                                                                        BattleLogic__checkUsedBuff(
                                                                          (BattleLogic_o *)ActorId,
                                                                          0LL);
                                                                        ActorId = (__int64)this->fields.logic;
                                                                        if ( ActorId )
                                                                        {
                                                                          BattleLogic__updateConditionsBuffAll(
                                                                            (BattleLogic_o *)ActorId,
                                                                            0LL);
                                                                          v344 = this->fields.logic;
                                                                          v345 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1B4D1DC(BattleAddSkillTaskAfterCommandAttack_TypeInfo);
                                                                          BattleAddSkillTaskAfterCommandAttack___ctor(
                                                                            v345,
                                                                            0LL);
                                                                          if ( v344 )
                                                                          {
                                                                            BattleLogic__AddSkillTask(
                                                                              v344,
                                                                              (BattleAddSkillTaskAroundTargetTask_o *)v345,
                                                                              v351,
                                                                              uniqueId,
                                                                              0LL);
                                                                            return *v69;
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
LABEL_375:
    sub_1B4D1EC(ActorId, v58);
  }
  return result;
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
  __int64 v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1

  if ( (byte_49BDCAC & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, task);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_8555/*"MOTION_DO_NOT_ACT"*/, v6);
    byte_49BDCAC = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  BattleData__setCommandAttack(data, 0, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  BattleData__ResetWasAttackTargetId(data, 0LL);
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
  v12 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0LL, 0LL);
  v13 = 0LL;
  if ( !v12 )
  {
    v13 = sub_1B4D1DC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v13 )
      {
        *(_DWORD *)(v13 + 32) = (_DWORD)data;
        v16 = StringLiteral_8555/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v13 + 64) = StringLiteral_8555/*"MOTION_DO_NOT_ACT"*/;
        sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 64), v16, v14, v15);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v13 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v13;
        }
      }
    }
LABEL_16:
    sub_1B4D1EC(data, task);
  }
  return (BattleActionData_o *)v13;
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

  if ( (byte_49BDCAB & 1) == 0 )
  {
    sub_1B4CF90(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_49BDCAB = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1B4D1DC(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1B4D1EC(data, v5);
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
  __int64 v12; // x21
  BattleActorControl_o *PartsActor; // x23
  struct BattleData_o *v14; // x8
  BattleActorControl_o *v15; // x22
  struct BattleData_o *v16; // x8
  int32_t uniqueID; // w9
  __int64 *v18; // x10
  BattleActorControl_o *v19; // x22
  int32_t v20; // w8
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_49BDCA1 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_6323/*"FOCUS_UNDER"*/, v4);
    sub_1B4CF90(&StringLiteral_6321/*"FOCUS_CENTER"*/, v5);
    sub_1B4CF90(&StringLiteral_6325/*"FOCUS_UP"*/, v6);
    byte_49BDCA1 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, data->fields.justDeadTargetId, 0LL);
  v8 = this->fields.data;
  if ( !v8 )
    goto LABEL_42;
  v9 = (BattleServantData_o *)data;
  v8->fields.justDeadTargetId = -1;
  if ( !data )
    return 0LL;
  if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)data, 0LL)
    || (v10 = 0LL, BattleServantData__isMultiTargetUnder(v9, 0LL)) )
  {
    data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(v9, 0LL);
    if ( !this->fields.data )
      goto LABEL_42;
    v11 = (int)data;
    v12 = StringLiteral_6321/*"FOCUS_CENTER"*/;
    PartsActor = BattleData__GetPartsActor(this->fields.data, 1, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_42;
      data = (BattleData_o *)PartsActor->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v14 = this->fields.data;
        if ( !v14 )
          goto LABEL_42;
        v12 = StringLiteral_6321/*"FOCUS_CENTER"*/;
        v14->fields.globaltargetId = PartsActor->fields.uniqueID;
      }
    }
    if ( v11 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v19 = BattleData__GetPartsActor(data, 2, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v19 )
        goto LABEL_42;
      data = (BattleData_o *)v19->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v16 = this->fields.data;
      if ( !v16 )
        goto LABEL_42;
      uniqueID = v19->fields.uniqueID;
      v18 = &StringLiteral_6323/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v11 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v15 = BattleData__GetPartsActor(data, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v15 )
        goto LABEL_42;
      data = (BattleData_o *)v15->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v16 = this->fields.data;
      if ( !v16 )
        goto LABEL_42;
      uniqueID = v15->fields.uniqueID;
      v18 = &StringLiteral_6325/*"FOCUS_UP"*/;
    }
    v12 = *v18;
    v16->fields.globaltargetId = uniqueID;
LABEL_39:
    v10 = sub_1B4D1DC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
    if ( v10 )
    {
      v20 = v9->fields.uniqueId;
      *(_DWORD *)(v10 + 32) = v20;
      *(_DWORD *)(v10 + 36) = v20;
      BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
      *(_QWORD *)(v10 + 64) = v12;
      sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 64), v12, v21, v22);
      return (BattleActionData_o *)v10;
    }
LABEL_42:
    sub_1B4D1EC(data, method);
  }
  return (BattleActionData_o *)v10;
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49BDC97 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo, method);
    byte_49BDC97 = 1;
  }
  v3 = sub_1B4D1DC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)v3;
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
  System_Collections_Generic_List_object__o *v17; // x19
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v19; // x1
  BattleLogicNomal___c_c *v20; // x0
  System_Comparison_T__o *_9__22_0; // x20
  Il2CppObject *v22; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49BDC99 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_BattleBuffData_BuffData__TypeInfo, passiveBuffDict);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B4CF90(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__, v15);
    sub_1B4CF90(&BattleLogicNomal___c_TypeInfo, v16);
    byte_49BDC99 = 1;
  }
  value = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_3228FD4 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v17) )
  {
LABEL_16:
    sub_1B4D1EC(CommandCardBuffArray, v19);
  }
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v20 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v20 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_0 = (System_Comparison_T__o *)v20->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleLogicNomal___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__22_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__22_0,
      v22,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__22_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v24, v25);
  }
  System_Collections_Generic_List_object___Sort_56106144(
    v17,
    _9__22_0,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17;
}


bool __fastcall BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1B4D1EC(0LL, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0LL)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool __fastcall BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1B4D1EC(0LL, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex - 1, 0LL)
      || !BattleLogicNomal__IsContinueCombo(this, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicNomal__IsContinueCombo(BattleLogicNomal_o *this, bool isCheckNext, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleCommandData_o *v6; // x19
  int32_t commandIndex; // w8
  bool v8; // w20
  int v9; // w9
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v11; // x21

  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__getSelectCommand(data, this->fields.commandIndex, 0LL);
  if ( !data )
    goto LABEL_15;
  v6 = (BattleCommandData_o *)data;
  if ( BattleCommandData__isTreasureDvc((BattleCommandData_o *)data, 0LL) || BattleCommandData__IsAllAttack(v6, 0LL) )
    return 0;
  data = this->fields.data;
  if ( !data )
LABEL_15:
    sub_1B4D1EC(data, isCheckNext);
  commandIndex = this->fields.commandIndex;
  v8 = 1;
  if ( isCheckNext )
    v9 = 1;
  else
    v9 = -1;
  SelectCommand = BattleData__getSelectCommand(data, commandIndex + v9, 0LL);
  if ( SelectCommand )
  {
    v11 = SelectCommand;
    if ( !BattleCommandData__isTreasureDvc(SelectCommand, 0LL) && !BattleCommandData__IsAllAttack(v11, 0LL) )
      return v6->fields.uniqueId == v11->fields.uniqueId;
    return 0;
  }
  return v8;
}


bool __fastcall BattleLogicNomal__IsEnableToAttack(
        BattleServantData_o *attackSvtData,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  return attackSvtData
      && command
      && BattleServantData__isAlive(attackSvtData, 0, 0LL)
      && attackSvtData->fields.isEntry
      && BattleServantData__isAction(attackSvtData, 0LL)
      && BattleServantData__IsCardAction(attackSvtData, command, 0LL);
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  BattleActorControl_o *PartsActor; // x20
  struct BattleData_o *v7; // x8

  if ( (byte_49BDCA3 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BDCA3 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
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
          goto LABEL_17;
        PartsActor = BattleData__GetPartsActor(this->fields.data, (int32_t)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_17:
          sub_1B4D1EC(data, method);
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
  long double inited; // q0
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
  if ( (byte_49BDCA4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_1B4CF90(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_49BDCA4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0LL);
  if ( !QuestIndividualities )
  {
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_1B9D67C(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1B9D620(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v12 + 184);
  }
  if ( !v3 )
  {
    v13 = Method_System_Array_Empty_int___;
    v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v14 )
    {
      sub_1B9D67C(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1B9D620(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v16 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_2F36E08 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
      v17 = this->fields.data;
      if ( v17 )
      {
        data = (BattleData_o *)v17->fields.perf;
        if ( data )
        {
          BattlePerformance__updateStatus((BattlePerformance_o *)data, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_1B4D1EC(data, prevFieldIndiv);
  }
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
  System_Collections_Generic_List_object__o *v14; // x20
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
  BattleLogicTask_o *v28; // x24
  BattleLogic_o *logic; // x25
  __int64 v30; // x26
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v40; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49BDCA8 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v6);
    sub_1B4CF90(&BattleSkillInfoData_TypeInfo, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49BDCA8 = 1;
  }
  isFirstAdd = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( ltype == 40 )
  {
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_44;
    Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 1, 0LL);
  }
  else
  {
    if ( ltype != 41 )
      goto LABEL_44;
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_44;
    Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  }
  v17 = Instance;
  if ( !Instance )
    goto LABEL_44;
  v18 = *(_DWORD *)(Instance + 24);
  if ( v18 >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= v18 )
        goto LABEL_45;
      v20 = *(BattleServantData_o **)(v17 + 8LL * (int)v19 + 32);
      if ( !v20 )
        goto LABEL_44;
      if ( !v20->fields.status )
      {
        Instance = BattleServantData__isAlive(v20, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v20, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_44;
          max_length = *(_DWORD *)(Instance + 24);
          v22 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v23 = 0;
            while ( v23 < max_length )
            {
              v24 = v22->m_Items[v23];
              v25 = (BattleSkillInfoData_o *)sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v25, 0LL);
              if ( !v25 )
                goto LABEL_44;
              v25->fields.svtUniqueId = v20->fields.uniqueId;
              if ( !v24 )
                goto LABEL_44;
              vals = v24->fields.vals;
              if ( !vals )
                goto LABEL_44;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._4_set_skillId.method)(
                           v25,
                           (unsigned int)vals->m_Items[1],
                           v25->klass->vtable._5_get_skillId.methodPtr);
              v27 = v24->fields.vals;
              if ( !v27 )
                goto LABEL_44;
              if ( v27->max_length <= 1 )
                break;
              v25->fields.skilllv = v27->m_Items[2];
              v28 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v28, 0LL);
              if ( !v28 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v28, v25, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1B4D038(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v30 = Instance;
              Instance = sub_1B4D0CC(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v40 = sub_1B4D210(0LL);
                sub_1B4D0B8(v40, 0LL);
              }
              if ( !*(_DWORD *)(v30 + 24) )
                break;
              *(_QWORD *)(v30 + 32) = v28;
              sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v28, v31, v32);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v20,
                v22,
                (BattleLogicTask_array *)v30,
                0LL);
              if ( !v14 )
                goto LABEL_44;
              items = v14->fields._items;
              v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v14->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)v28,
                  *(const MethodInfo_35801DC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v38[4] = (Il2CppClass *)v28;
                sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v28, v33, v34);
              }
              max_length = v22->max_length;
              if ( (int)++v23 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1B4D1F4(Instance, v16);
          }
LABEL_38:
          Instance = (__int64)v20->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
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
LABEL_44:
    sub_1B4D1EC(Instance, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int v18; // w8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v29; // x1
  SkillLvEntity_o *v30; // x29
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x26
  BattleActionData_o *v34; // x28
  DataVals_array *DataValsList; // x0
  __int64 v36; // x1
  BattleLogicFunction_o *v37; // x0
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v40; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+60h] [xbp-80h] BYREF

  v40 = this;
  if ( (byte_49BDCAD & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v16);
    this = (BattleLogicNomal_o *)sub_1B4CF90(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v17);
    byte_49BDCAD = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !commandCodeBuffList )
    sub_1B4D1EC(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v42.fields._current = v41.fields._current;
  if ( isCommandAfter )
    v18 = 1;
  else
    v18 = 3;
  *(_OWORD *)&v42.fields._list = *(_OWORD *)&v41.fields._list;
  type = v18;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v19 )
      break;
    if ( !command )
      sub_1B4D1EC(v19, v20);
    current = (BattleBuffData_BuffData_o *)v42.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1B4D1EC(IsEnableCommandCode, v23);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1B4D1EC(IsEnableCommandCode, v23);
    v24 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v24 & 1) != 0 )
    {
      if ( arg == 0LL || !isCommandAfter )
      {
        if ( !current )
          sub_1B4D1EC(v24, v25);
        vals = current->fields.vals;
        if ( !vals )
          sub_1B4D1EC(v24, v25);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1B4D1F4(v24, v25);
        if ( max_length == 1 )
          sub_1B4D1F4(v24, v25);
        if ( !skillLvMst )
          sub_1B4D1EC(v24, v25);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v30 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1B4D1EC(Entity, v29);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1B4D1EC(Entity, v29);
          logicfunction = v40->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v30->fields.funcId;
          v34 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v30, 0LL);
          if ( !logicfunction )
            sub_1B4D1EC(DataValsList, v36);
          BattleLogicFunction__procList(
            logicfunction,
            v34,
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
            0LL);
        }
      }
      else
      {
        v37 = v40->fields.logicfunction;
        if ( !v37 )
          sub_1B4D1EC(0LL, v25);
        BattleLogicFunction__SetSideEffectBuff(
          v37,
          skillLvMst,
          actionData,
          current,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
          1,
          0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1

  if ( (byte_49BDC9B & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B4CF90(&StringLiteral_8546/*"MOTION_BACK"*/, v4);
    byte_49BDC9B = 1;
  }
  v5 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    sub_1B4D1EC(v6, v7);
  *(_DWORD *)(v5 + 32) = uniqueId;
  v10 = StringLiteral_8546/*"MOTION_BACK"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_8546/*"MOTION_BACK"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 64), v10, v8, v9);
  return (BattleActionData_o *)v5;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddEnemy(
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
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
  if ( !data )
    goto LABEL_21;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v6 = data;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    p_rootfsm = &data->fields.rootfsm;
    while ( 1 )
    {
      v9 = this->fields.data;
      if ( !v9 )
        break;
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_22;
      data = (BattleData_o *)v9->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_rootfsm[v7],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        v10 = (int)data;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v10, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
LABEL_22:
            sub_1B4D1F4(data, task);
          data = (BattleData_o *)p_rootfsm[v7];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        return 0LL;
    }
LABEL_21:
    sub_1B4D1EC(data, task);
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
  BattleData_o *data; // x0
  struct BattleData_o *v8; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x10
  BattleData_o *v10; // x20
  _BOOL4 v11; // w9
  unsigned __int64 v12; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  int32_t v14; // w21
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49BDCA7 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v4);
    sub_1B4CF90(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__, v5);
    sub_1B4CF90(&BattleLogicNomal___c_TypeInfo, v6);
    byte_49BDCA7 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !data )
    goto LABEL_31;
  v8 = this->fields.data;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v10 = data;
  v11 = v8 == 0LL;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0LL;
    p_rootfsm = &data->fields.rootfsm;
    while ( !v11 )
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_32;
      data = (BattleData_o *)v8->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_rootfsm[v12],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v12];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        v14 = (int)data;
        data = (BattleData_o *)p_rootfsm[v12];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v12];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v14, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
LABEL_32:
            sub_1B4D1F4(data, task);
          data = (BattleData_o *)p_rootfsm[v12];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v8 = this->fields.data;
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      ++v12;
      v11 = v8 == 0LL;
      if ( (__int64)v12 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_31:
    sub_1B4D1EC(data, task);
  }
LABEL_22:
  if ( v11 )
    goto LABEL_31;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v8->fields.aiNpcDataList;
  data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
  }
  monitor = (System_Action_object__o *)data->fields.enemyMasterInfo[1].monitor;
  if ( !monitor )
  {
    if ( !data->fields.turnEffectType )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
    }
    klass = (Il2CppObject *)data->fields.enemyMasterInfo->klass;
    monitor = (System_Action_object__o *)sub_1B4D1DC(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(monitor, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_AiNpcBattleServantData__o *)monitor;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)monitor, v19, v20);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)monitor,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  __int64 isBuster; // x0
  __int64 v13; // x1
  struct System_Int32_array *targetIdlist; // x23
  __int64 v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  CGThumbnailListItem_o *v19; // x0
  System_Array_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 *v23; // x8
  __int64 v24; // x1
  __int64 v25; // x8
  char v26; // w21
  unsigned __int64 v27; // x22
  System_Array_o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_RuntimeFieldHandle_o v32; // 0:w1.4
  System_RuntimeFieldHandle_o v33; // 0:w1.4

  if ( (byte_49BDC9C & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, task);
    sub_1B4CF90(&FunctionEntity_TypeInfo, v5);
    sub_1B4CF90(&int___TypeInfo, v6);
    sub_1B4CF90(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v7);
    sub_1B4CF90(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v8);
    sub_1B4CF90(&StringLiteral_6307/*"FIELD_PLAYER"*/, v9);
    sub_1B4CF90(&StringLiteral_6306/*"FIELD_ENEMY"*/, v10);
    byte_49BDC9C = 1;
  }
  v11 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v15 = sub_1B4D1DC(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v15, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v11, 0LL);
    isBuster = sub_1B4D038(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v18 = *(_DWORD *)(isBuster + 24);
      v13 = isBuster;
      if ( !v18 || (*(_DWORD *)(isBuster + 32) = 102, v18 == 1) )
LABEL_30:
        sub_1B4D1F4(isBuster, v13);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 32) = isBuster;
        v19 = (CGThumbnailListItem_o *)(v15 + 32);
LABEL_14:
        sub_1B4CF34(v19, v13, v16, v17);
        v23 = &StringLiteral_6307/*"FIELD_PLAYER"*/;
LABEL_15:
        v24 = *v23;
        *(_QWORD *)(v11 + 64) = *v23;
        sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 64), v24, v21, v22);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1B4D1EC(isBuster, v13);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v11, 0LL);
    v20 = (System_Array_o *)sub_1B4D038(int___TypeInfo, 3LL);
    v32.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61793784(v20, v32, 0LL);
    if ( !v15 )
      goto LABEL_29;
    *(_QWORD *)(v15 + 32) = v20;
    v19 = (CGThumbnailListItem_o *)(v15 + 32);
    LODWORD(v13) = (_DWORD)v20;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0LL);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v11, 0LL);
    v29 = (System_Array_o *)sub_1B4D038(int___TypeInfo, 3LL);
    v33.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61793784(v29, v33, 0LL);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = v29;
      sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v29, v30, v31);
      v23 = &StringLiteral_6306/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v25 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v25 < 1 )
    return 0LL;
  v26 = 0;
  v27 = 0LL;
  do
  {
    if ( v27 >= (unsigned int)v25 )
      goto LABEL_30;
    isBuster = (__int64)this->fields.data;
    if ( !isBuster )
      goto LABEL_29;
    isBuster = (__int64)BattleData__getServantData((BattleData_o *)isBuster, targetIdlist->m_Items[v27 + 1], 0LL);
    LODWORD(v25) = targetIdlist->max_length;
    ++v27;
    v26 |= isBuster != 0;
  }
  while ( (__int64)v27 < (int)v25 );
  if ( (v26 & 1) != 0 )
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
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_1B4D1EC(v5, v6);
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
  __int64 v30; // x24
  __int64 Instance; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x21
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_Dictionary_int__object__o *v39; // x23
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_int__o *v44; // x26
  int v45; // w8
  __int64 v46; // x28
  unsigned int v47; // w22
  __int64 v48; // x25
  __int64 *v49; // x25
  __int64 v50; // t1
  Il2CppObject *v51; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v56; // w25
  Il2CppClass **v57; // x27
  Il2CppClass *v58; // x8
  char *v59; // x27
  Il2CppClass *v60; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v62; // x8
  int32_t v63; // w9
  struct BattleData_o *v64; // x8
  __int64 v65; // x28
  int v66; // w8
  unsigned int v67; // w22
  __int64 v68; // x23
  __int64 *v69; // x23
  __int64 v70; // t1
  bool v71; // w3
  char v72; // w29
  Il2CppObject *v73; // x29
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v78; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v80; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v82; // x26
  struct BattleData_o *v83; // x8
  const MethodInfo *v84; // x2
  struct BattleData_o *v85; // x8
  Il2CppObject *v86; // x0
  __int64 v87; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v91; // w23
  char v92; // w22
  BattleBuffData_BuffData_o *v93; // x28
  BattleSkillInfoData_o *v94; // x26
  __int64 v95; // x0
  __int64 v96; // x1
  struct System_Int32_array *vals; // x8
  __int64 v98; // x0
  __int64 v99; // x1
  struct System_Int32_array *v100; // x8
  BattleData_o *v101; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v103; // x1
  SkillLvEntity_o *v104; // x0
  __int64 v105; // x1
  SkillLvEntity_o *v106; // x29
  BattleData_o *v107; // x0
  _BOOL8 v108; // x0
  __int64 v109; // x1
  BattleLogic_o *v110; // x0
  int32_t v111; // w20
  __int64 v112; // x0
  __int64 v113; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v117; // x0
  __int64 v118; // x1
  System_Collections_ICollection_o *v119; // x0
  __int64 v120; // x1
  BattleLogicTask_array *v121; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v123; // x0
  BattleLogic_o *v124; // x0
  __int64 v125; // x1
  BattleData_o *v126; // x0
  int32_t v127; // w23
  Il2CppObject *v128; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v130; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v132; // x20
  int v133; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v135; // x26
  BattleSkillInfoData_o *v136; // x25
  __int64 v137; // x0
  __int64 v138; // x1
  struct System_Int32_array *v139; // x8
  __int64 v140; // x0
  __int64 v141; // x1
  struct System_Int32_array *v142; // x8
  BattleData_o *v143; // x0
  BattleServantData_o *v144; // x27
  __int64 v145; // x1
  SkillLvEntity_o *v146; // x0
  __int64 v147; // x1
  SkillLvEntity_o *v148; // x28
  BattleData_o *v149; // x0
  _BOOL8 v150; // x0
  __int64 v151; // x1
  BattleLogic_o *v152; // x0
  int32_t v153; // w20
  __int64 v154; // x0
  __int64 v155; // x1
  System_Int32_array *v156; // x26
  bool v157; // w27
  BattleLogicSkill_o *v158; // x20
  System_Int32_array *v159; // x0
  __int64 v160; // x1
  BattleLogicTask_array *v161; // x1
  BattleLogic_o *v162; // x0
  struct BattleData_o *v163; // x8
  BattleActionData_o *v164; // x1
  const MethodInfo *v166; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v167; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v168; // [xsp+20h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-D0h]
  char v170; // [xsp+3Ch] [xbp-C4h]
  SkillLvMaster_o *v171; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v172; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v173; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_49BDCA5 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B4CF90(&BattleActionData_TypeInfo, v4);
    sub_1B4CF90(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B4CF90(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1B4CF90(&int___TypeInfo, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__, v27);
    sub_1B4CF90(&BattleLogicNomal___c__DisplayClass38_0_TypeInfo, v28);
    sub_1B4CF90(&StringLiteral_8557/*"MOTION_ENEMY_TURN_END"*/, v29);
    byte_49BDCA5 = 1;
  }
  entity = 0LL;
  memset(&v173, 0, sizeof(v173));
  v30 = sub_1B4D1DC(BattleLogicNomal___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 32), (int32_t)this, v33, v34);
  baseActData = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v30 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !baseActData )
    goto LABEL_215;
  BattleActionData__setStateField(baseActData, 0LL);
  v36 = StringLiteral_8557/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8557/*"MOTION_ENEMY_TURN_END"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&baseActData->fields.motionname, v36, v37, v38);
  v168 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v168,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v171 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v42, v43);
  v44 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v167 = v39;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v45 = *(_DWORD *)(Instance + 24);
  v46 = Instance;
  if ( v45 >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      if ( v47 >= v45 )
        goto LABEL_220;
      v48 = v46 + 8LL * (int)v47;
      v50 = *(_QWORD *)(v48 + 32);
      v49 = (__int64 *)(v48 + 32);
      Instance = v50;
      if ( !v50 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 540) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v30 + 16),
                              *(System_Int32_array **)(v30 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        v51 = (Il2CppObject *)Instance;
        Instance = *v49;
        if ( !*v49 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v47 >= *(_DWORD *)(v46 + 24) )
            goto LABEL_220;
          Instance = *v49;
          if ( !*v49 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v51 )
              goto LABEL_215;
            if ( v51[1].monitor )
            {
              if ( v47 >= *(_DWORD *)(v46 + 24) )
                goto LABEL_220;
              Instance = (__int64)v168;
              if ( !*v49 || !v168 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v168,
                *(_DWORD *)(*v49 + 24),
                v51,
                (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        if ( !*v49 )
          goto LABEL_215;
        if ( !v44 )
          goto LABEL_215;
        v32 = *(unsigned int *)(*v49 + 24);
        items = v44->fields._items;
        v53 = Method_System_Collections_Generic_List_int__Add__;
        ++v44->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v44->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v44,
            v32,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v44->fields._size = size + 1;
          items->m_Items[size + 1] = v32;
        }
        if ( !v51 )
          goto LABEL_215;
        monitor = (int)v51[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_52:
      v45 = *(_DWORD *)(v46 + 24);
      if ( (int)++v47 >= v45 )
        goto LABEL_53;
    }
    v56 = 0;
    while ( v56 < monitor )
    {
      v57 = &v51->klass + (int)v56;
      v60 = v57[4];
      v59 = (char *)(v57 + 4);
      v58 = v60;
      if ( !v60 || !v35 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v35,
                   &entity,
                   (int32_t)v58->_1.name,
                   (const MethodInfo_319D9E8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v62 = logic->fields.data;
          if ( !v62 )
            goto LABEL_215;
          if ( v56 >= LODWORD(v51[1].monitor) )
            break;
          if ( !*(_QWORD *)v59 )
            goto LABEL_215;
          v63 = *(_DWORD *)(*(_QWORD *)v59 + 28LL);
          if ( v62->fields.endMasterSkillTurnBuffValue <= v63 )
            v62->fields.endMasterSkillTurnBuffValue = v63;
        }
      }
      monitor = (int)v51[1].monitor;
      if ( (int)++v56 >= monitor )
        goto LABEL_52;
    }
LABEL_220:
    sub_1B4D1F4(Instance, v32);
  }
LABEL_53:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v64 = this->fields.data;
  if ( !v64 )
    goto LABEL_215;
  v65 = Instance;
  if ( v64->fields.leaderDown && v64->fields.endbattleFlg )
  {
    v170 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v66 = *(_DWORD *)(Instance + 24);
    if ( v66 >= 1 )
    {
      v67 = 0;
      v170 = 0;
      while ( v67 < v66 )
      {
        v68 = v65 + 8LL * (int)v67;
        v70 = *(_QWORD *)(v68 + 32);
        v69 = (__int64 *)(v68 + 32);
        Instance = v70;
        if ( !v70 )
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
            v71 = 1;
          }
          else
          {
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_215;
            Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
            v71 = Instance & 1;
          }
          if ( v67 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_220;
          Instance = *v69;
          if ( !*v69 )
            goto LABEL_215;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *(System_Int32_array **)(v30 + 24),
                       this->fields.logic,
                       v71,
                       baseActData,
                       0LL);
          if ( v67 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_220;
          v72 = Instance;
          Instance = *v69;
          if ( !*v69 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v67 >= *(_DWORD *)(v65 + 24) )
              goto LABEL_220;
            Instance = *v69;
            if ( !*v69 )
              goto LABEL_215;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_215;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v67 >= *(_DWORD *)(v65 + 24) )
                goto LABEL_220;
              if ( !*v69 || !v167 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v167,
                *(_DWORD *)(*v69 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v67 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_220;
          if ( !*v69 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v69 + 784);
          if ( !Instance )
            goto LABEL_215;
          v170 |= v72;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v67 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_220;
        Instance = *v69;
        if ( !*v69 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 540) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v30 + 16),
                                *(System_Int32_array **)(v30 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v67 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_220;
          v73 = (Il2CppObject *)Instance;
          Instance = *v69;
          if ( !*v69 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v67 >= *(_DWORD *)(v65 + 24) )
              goto LABEL_220;
            Instance = *v69;
            if ( !*v69 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v73 )
                goto LABEL_215;
              if ( v73[1].monitor )
              {
                if ( v67 >= *(_DWORD *)(v65 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v168;
                if ( !*v69 || !v168 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v168,
                  *(_DWORD *)(*v69 + 24),
                  v73,
                  (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v67 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_220;
          if ( !*v69 )
            goto LABEL_215;
          if ( !v44 )
            goto LABEL_215;
          v32 = *(unsigned int *)(*v69 + 24);
          v74 = v44->fields._items;
          v75 = Method_System_Collections_Generic_List_int__Add__;
          ++v44->fields._version;
          if ( !v74 )
            goto LABEL_215;
          v76 = v44->fields._size;
          if ( (unsigned int)v76 >= v74->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v44,
              v32,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v44->fields._size = v76 + 1;
            v74->m_Items[v76 + 1] = v32;
          }
        }
        v66 = *(_DWORD *)(v65 + 24);
        if ( (int)++v67 >= v66 )
          goto LABEL_111;
      }
      goto LABEL_220;
    }
    v170 = 0;
LABEL_111:
    v64 = this->fields.data;
    if ( !v64 )
      goto LABEL_215;
  }
  if ( !v44 )
    goto LABEL_215;
  battleEvent = v64->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v44,
                        (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v30 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v78 = this->fields.data;
  if ( !v78 )
    goto LABEL_215;
  perf = v78->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v78->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v80 = this->fields.data;
  if ( !v80 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v80->fields.aiNpcDataList;
  v82 = (System_Action_object__o *)sub_1B4D1DC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v82,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v82,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v83 = this->fields.data;
  if ( !v83 )
    goto LABEL_215;
  Instance = (__int64)v83->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v30 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v30 + 24), v84);
  v85 = this->fields.data;
  if ( !v85 )
    goto LABEL_215;
  v85->fields.currentTurn = 0;
  if ( !v167 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v172,
    v167,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v173 = v172;
  while ( 1 )
  {
    v86 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v173,
                            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v86 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v173.fields._current.fields.value;
    if ( !v173.fields._current.fields.value )
      sub_1B4D1EC(v86, v87);
    max_length = (int)v173.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v173.fields._current.fields.key;
      v91 = 0;
      v92 = 1;
LABEL_128:
      if ( v91 >= max_length )
        sub_1B4D1F4(v86, v87);
      v93 = value->m_Items[v91];
      if ( !v93 )
        sub_1B4D1EC(v86, v87);
      if ( v93->fields._isRemove )
        goto LABEL_164;
      if ( !v35 )
        sub_1B4D1EC(v86, v87);
      v86 = DataMasterBase_object__object__int___GetEntity(
              v35,
              v93->fields.buffId,
              (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v86 )
        goto LABEL_164;
      v94 = (BattleSkillInfoData_o *)sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v94, 0LL);
      if ( !v94 )
        sub_1B4D1EC(v95, v96);
      v94->fields.svtUniqueId = key;
      vals = v93->fields.vals;
      if ( !vals )
        sub_1B4D1EC(v95, v96);
      if ( !vals->max_length )
        sub_1B4D1F4(v95, v96);
      v98 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v94->klass->vtable._4_set_skillId.method)(
              v94,
              (unsigned int)vals->m_Items[1],
              v94->klass->vtable._5_get_skillId.methodPtr);
      v100 = v93->fields.vals;
      if ( !v100 )
        sub_1B4D1EC(v98, v99);
      if ( v100->max_length <= 1 )
        sub_1B4D1F4(v98, v99);
      v94->fields.skilllv = v100->m_Items[2];
      v101 = this->fields.data;
      if ( !v101 )
        sub_1B4D1EC(0LL, v99);
      ServantData = BattleData__getServantData(v101, v94->fields.svtUniqueId, 0LL);
      v103 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v94->klass->vtable._5_get_skillId.method)(
               v94,
               v94->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v171 )
        sub_1B4D1EC(0LL, v103);
      v104 = SkillLvMaster__GetEntity(v171, v103, v94->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B4D1EC(v104, v105);
      v106 = v104;
      v107 = this->fields.data;
      if ( !v107 )
        sub_1B4D1EC(0LL, v105);
      v108 = BattleData__checkAliveOther(v107, ServantData->fields.uniqueId, 0LL);
      if ( !v108 )
      {
        if ( !v106 )
          sub_1B4D1EC(v108, v109);
        v110 = this->fields.logic;
        if ( !v110 )
          sub_1B4D1EC(0LL, v109);
        v86 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v110, v106->fields.funcId, 0LL);
        if ( ((unsigned __int8)v86 & 1) == 0 )
          goto LABEL_164;
      }
      v111 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v93, 0LL);
      if ( (v111 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v94->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v94, 0LL);
      }
      else
      {
        v112 = sub_1B4D038(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v112;
        if ( !v112 )
          sub_1B4D1EC(0LL, v113);
        if ( !*(_DWORD *)(v112 + 24) )
          sub_1B4D1F4(v112, v113);
        exists = 0;
        *(_DWORD *)(v112 + 32) = v111;
      }
      logicskill = this->fields.logicskill;
      v117 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
      if ( !v117 )
        sub_1B4D1EC(0LL, v118);
      if ( !v117->max_length )
        sub_1B4D1F4(v117, v118);
      v117->m_Items[1] = key;
      if ( !logicskill )
        sub_1B4D1EC(v117, v118);
      v119 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v94,
                                                   v117,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v166);
      v121 = (BattleLogicTask_array *)v119;
      if ( (v92 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v119, 0LL);
        if ( IsNullOrEmpty )
        {
          v92 = 1;
          goto LABEL_162;
        }
        if ( !v121 )
          sub_1B4D1EC(IsNullOrEmpty, v120);
        if ( !v121->max_length )
          sub_1B4D1F4(IsNullOrEmpty, v120);
        v123 = v121->m_Items[0];
        if ( !v123 )
          sub_1B4D1EC(0LL, v120);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v123, ServantData, value, 0LL);
      }
      v92 = 0;
LABEL_162:
      v124 = this->fields.logic;
      if ( !v124 )
        sub_1B4D1EC(0LL, v120);
      BattleLogic__addBattleLogicTask(v124, v121, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v91 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v173,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v168;
  if ( !v168 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v172,
    v168,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v173 = v172;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v173,
            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v126 = this->fields.data;
    if ( !v126 )
      sub_1B4D1EC(0LL, v125);
    v127 = (int32_t)v173.fields._current.fields.key;
    v128 = v173.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v126, (int32_t)v173.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v132 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B4D1DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43313456(
        v132,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v132 )
        sub_1B4D1EC(isEndAct, v130);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v132->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v128 )
      sub_1B4D1EC(isEndAct, v130);
    v133 = (int)v128[1].monitor;
    if ( v133 >= 1 )
    {
      for ( i = 0; i < v133; ++i )
      {
        if ( i >= (unsigned int)v133 )
          sub_1B4D1F4(isEndAct, v130);
        v135 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v128[2].klass + i);
        if ( !v135 )
          sub_1B4D1EC(isEndAct, v130);
        if ( !v135->fields._isRemove )
        {
          if ( !v35 )
            sub_1B4D1EC(isEndAct, v130);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v35,
                                              v135->fields.buffId,
                                              (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v135, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v136 = (BattleSkillInfoData_o *)sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v136, 0LL);
                if ( !v136 )
                  sub_1B4D1EC(v137, v138);
                v136->fields.svtUniqueId = v127;
                v139 = v135->fields.vals;
                if ( !v139 )
                  sub_1B4D1EC(v137, v138);
                if ( !v139->max_length )
                  sub_1B4D1F4(v137, v138);
                v140 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v136->klass->vtable._4_set_skillId.method)(
                         v136,
                         (unsigned int)v139->m_Items[1],
                         v136->klass->vtable._5_get_skillId.methodPtr);
                v142 = v135->fields.vals;
                if ( !v142 )
                  sub_1B4D1EC(v140, v141);
                if ( v142->max_length <= 1 )
                  sub_1B4D1F4(v140, v141);
                v136->fields.skilllv = v142->m_Items[2];
                v143 = this->fields.data;
                if ( !v143 )
                  sub_1B4D1EC(0LL, v141);
                v144 = BattleData__getServantData(v143, v136->fields.svtUniqueId, 0LL);
                v145 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v136->klass->vtable._5_get_skillId.method)(
                         v136,
                         v136->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v171 )
                  sub_1B4D1EC(0LL, v145);
                v146 = SkillLvMaster__GetEntity(v171, v145, v136->fields.skilllv, 0LL);
                if ( !v144 )
                  sub_1B4D1EC(v146, v147);
                v148 = v146;
                v149 = this->fields.data;
                if ( !v149 )
                  sub_1B4D1EC(0LL, v147);
                v150 = BattleData__checkAliveOther(v149, v144->fields.uniqueId, 0LL);
                if ( v150 )
                  goto LABEL_198;
                if ( !v148 )
                  sub_1B4D1EC(v150, v151);
                v152 = this->fields.logic;
                if ( !v152 )
                  sub_1B4D1EC(0LL, v151);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v152, v148->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v153 = BattleServantData__GetRevengeIdCheckOpponentOnly(v144, v135, 0LL);
                  if ( (v153 & 0x80000000) != 0 )
                  {
                    v156 = Target__getTargetIds(this->fields.data, v136->fields.svtUniqueId, -1, v127, 13, 0LL, 0LL);
                    v157 = BattleSkillInfoData__ExistsNoTargetNoActionType(v136, 0LL);
                  }
                  else
                  {
                    v154 = sub_1B4D038(int___TypeInfo, 1LL);
                    v156 = (System_Int32_array *)v154;
                    if ( !v154 )
                      sub_1B4D1EC(0LL, v155);
                    if ( !*(_DWORD *)(v154 + 24) )
                      sub_1B4D1F4(v154, v155);
                    v157 = 0;
                    *(_DWORD *)(v154 + 32) = v153;
                  }
                  v158 = this->fields.logicskill;
                  v159 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
                  if ( !v159 )
                    sub_1B4D1EC(0LL, v160);
                  if ( !v159->max_length )
                    sub_1B4D1F4(v159, v160);
                  v159->m_Items[1] = v127;
                  if ( !v158 )
                    sub_1B4D1EC(v159, v160);
                  v161 = BattleLogicSkill__taskSkill(v158, v136, v159, v156, 1, v157, 0, 0, 0, v166);
                  v162 = this->fields.logic;
                  if ( !v162 )
                    sub_1B4D1EC(0LL, v161);
                  BattleLogic__addBattleLogicTask(v162, v161, 0LL);
                }
              }
            }
          }
        }
        v133 = (int)v128[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v173,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v163 = this->fields.data;
  if ( !v163
    || (Instance = (__int64)v163->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B4D1EC(Instance, v32);
  }
  if ( (v170 & 1) != 0 )
    v164 = baseActData;
  else
    v164 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v164, baseActData, 0LL);
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
  __int64 v30; // x24
  __int64 Instance; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x21
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_int__o *v44; // x26
  int v45; // w8
  __int64 v46; // x28
  unsigned int v47; // w20
  __int64 v48; // x22
  __int64 *v49; // x22
  __int64 v50; // t1
  bool v51; // w3
  char v52; // w29
  Il2CppObject *v53; // x2
  Il2CppObject *v54; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v59; // w22
  Il2CppClass **v60; // x23
  Il2CppClass *v61; // x8
  char *v62; // x23
  Il2CppClass *v63; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v65; // x8
  int32_t v66; // w9
  struct BattleData_o *v67; // x8
  __int64 v68; // x27
  int v69; // w8
  unsigned int v70; // w20
  __int64 v71; // x22
  __int64 *v72; // x22
  __int64 v73; // t1
  Il2CppObject *v74; // x28
  struct System_Int32_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  struct BaseBattleEvent_o *battleEvent; // x23
  struct BattleData_o *v79; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v81; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x23
  System_Action_object__o *v83; // x26
  struct BattleData_o *v84; // x8
  const MethodInfo *v85; // x2
  struct BattleData_o *v86; // x8
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v92; // w20
  char v93; // w22
  BattleBuffData_BuffData_o *v94; // x28
  BattleSkillInfoData_o *v95; // x26
  __int64 v96; // x0
  __int64 v97; // x1
  struct System_Int32_array *vals; // x8
  __int64 v99; // x0
  __int64 v100; // x1
  struct System_Int32_array *v101; // x8
  BattleData_o *v102; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v104; // x1
  SkillLvEntity_o *v105; // x0
  __int64 v106; // x1
  SkillLvEntity_o *v107; // x29
  BattleData_o *v108; // x0
  _BOOL8 v109; // x0
  __int64 v110; // x1
  BattleLogic_o *v111; // x0
  int32_t v112; // w23
  __int64 v113; // x0
  __int64 v114; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v118; // x0
  __int64 v119; // x1
  System_Collections_ICollection_o *v120; // x0
  __int64 v121; // x1
  BattleLogicTask_array *v122; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v124; // x0
  BattleLogic_o *v125; // x0
  __int64 v126; // x1
  BattleData_o *v127; // x0
  int32_t v128; // w23
  Il2CppObject *v129; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v131; // x1
  BattleServantData_o *v132; // x25
  BattleBuffData_CheckIndividualitiesData_o *v133; // x24
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x24
  int v135; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v137; // x26
  BattleSkillInfoData_o *v138; // x25
  __int64 v139; // x0
  __int64 v140; // x1
  struct System_Int32_array *v141; // x8
  __int64 v142; // x0
  __int64 v143; // x1
  struct System_Int32_array *v144; // x8
  BattleData_o *v145; // x0
  BattleServantData_o *v146; // x27
  __int64 v147; // x1
  SkillLvEntity_o *v148; // x0
  __int64 v149; // x1
  SkillLvEntity_o *v150; // x28
  BattleData_o *v151; // x0
  _BOOL8 v152; // x0
  __int64 v153; // x1
  BattleLogic_o *v154; // x0
  int32_t v155; // w28
  __int64 v156; // x0
  __int64 v157; // x1
  System_Int32_array *v158; // x26
  bool v159; // w27
  BattleLogicSkill_o *v160; // x28
  System_Int32_array *v161; // x0
  __int64 v162; // x1
  BattleLogicTask_array *v163; // x1
  BattleLogic_o *v164; // x0
  struct BattleData_o *v165; // x8
  BattleActionData_o *v166; // x1
  const MethodInfo *v168; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v169; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v170; // [xsp+18h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+20h] [xbp-D0h]
  char v172; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v173; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v174; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v175; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_49BDCA2 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B4CF90(&BattleActionData_TypeInfo, v4);
    sub_1B4CF90(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B4CF90(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1B4CF90(&int___TypeInfo, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass35_0__createEndTurnPlayer_b__0__, v27);
    sub_1B4CF90(&BattleLogicNomal___c__DisplayClass35_0_TypeInfo, v28);
    sub_1B4CF90(&StringLiteral_8564/*"MOTION_PLAYER_TURN_END"*/, v29);
    byte_49BDCA2 = 1;
  }
  entity = 0LL;
  memset(&v175, 0, sizeof(v175));
  v30 = sub_1B4D1DC(BattleLogicNomal___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 32), (int32_t)this, v33, v34);
  BattleLogicNomal__SetNextTargetId(this, v35);
  actiondata = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v30 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_215;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_215;
  BattleActionData__setStateField(actiondata, 0LL);
  v37 = StringLiteral_8564/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8564/*"MOTION_PLAYER_TURN_END"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&actiondata->fields.motionname, v37, v38, v39);
  v170 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v170,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v169 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v169,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v173 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v42, v43);
  v44 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v45 = *(_DWORD *)(Instance + 24);
  v46 = Instance;
  if ( v45 >= 1 )
  {
    v172 = 0;
    v47 = 0;
    while ( 1 )
    {
      if ( v47 >= v45 )
        goto LABEL_220;
      v48 = v46 + 8LL * (int)v47;
      v50 = *(_QWORD *)(v48 + 32);
      v49 = (__int64 *)(v48 + 32);
      Instance = v50;
      if ( !v50 )
        goto LABEL_215;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)this->fields.data;
        if ( !Instance )
          goto LABEL_215;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v51 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v51 = Instance & 1;
        }
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        Instance = *v49;
        if ( !*v49 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v30 + 24),
                     this->fields.logic,
                     v51,
                     actiondata,
                     0LL);
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        v52 = Instance;
        Instance = *v49;
        if ( !*v49 )
          goto LABEL_215;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v47 >= *(_DWORD *)(v46 + 24) )
            goto LABEL_220;
          Instance = *v49;
          if ( !*v49 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          v53 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v47 >= *(_DWORD *)(v46 + 24) )
              goto LABEL_220;
            Instance = (__int64)v169;
            if ( !*v49 || !v169 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v169,
              *(_DWORD *)(*v49 + 24),
              v53,
              (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        if ( !*v49 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v49 + 784);
        if ( !Instance )
          goto LABEL_215;
        v172 |= v52;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v47 >= *(_DWORD *)(v46 + 24) )
        goto LABEL_220;
      Instance = *v49;
      if ( !*v49 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 540) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v30 + 16),
                              *(System_Int32_array **)(v30 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        v54 = (Il2CppObject *)Instance;
        Instance = *v49;
        if ( !*v49 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v47 >= *(_DWORD *)(v46 + 24) )
            goto LABEL_220;
          Instance = *v49;
          if ( !*v49 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v54 )
              goto LABEL_215;
            if ( v54[1].monitor )
            {
              if ( v47 >= *(_DWORD *)(v46 + 24) )
                goto LABEL_220;
              Instance = (__int64)v170;
              if ( !*v49 || !v170 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v170,
                *(_DWORD *)(*v49 + 24),
                v54,
                (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        if ( !*v49 )
          goto LABEL_215;
        if ( !v44 )
          goto LABEL_215;
        v32 = *(unsigned int *)(*v49 + 24);
        items = v44->fields._items;
        v56 = Method_System_Collections_Generic_List_int__Add__;
        ++v44->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v44->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v44,
            v32,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v44->fields._size = size + 1;
          items->m_Items[size + 1] = v32;
        }
        if ( !v54 )
          goto LABEL_215;
        monitor = (int)v54[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_77:
      v45 = *(_DWORD *)(v46 + 24);
      if ( (int)++v47 >= v45 )
        goto LABEL_80;
    }
    v59 = 0;
    while ( v59 < monitor )
    {
      v60 = &v54->klass + (int)v59;
      v63 = v60[4];
      v62 = (char *)(v60 + 4);
      v61 = v63;
      if ( !v63 || !v36 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v36,
                   &entity,
                   (int32_t)v61->_1.name,
                   (const MethodInfo_319D9E8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v65 = logic->fields.data;
          if ( !v65 )
            goto LABEL_215;
          if ( v59 >= LODWORD(v54[1].monitor) )
            break;
          if ( !*(_QWORD *)v62 )
            goto LABEL_215;
          v66 = *(_DWORD *)(*(_QWORD *)v62 + 28LL);
          if ( v65->fields.endMasterSkillTurnBuffValue <= v66 )
            v65->fields.endMasterSkillTurnBuffValue = v66;
        }
      }
      monitor = (int)v54[1].monitor;
      if ( (int)++v59 >= monitor )
        goto LABEL_77;
    }
LABEL_220:
    sub_1B4D1F4(Instance, v32);
  }
  v172 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v67 = this->fields.data;
  if ( !v67 )
    goto LABEL_215;
  v68 = Instance;
  if ( !v67->fields.leaderDown || !v67->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_215;
    v69 = *(_DWORD *)(Instance + 24);
    if ( v69 >= 1 )
    {
      v70 = 0;
      while ( v70 < v69 )
      {
        v71 = v68 + 8LL * (int)v70;
        v73 = *(_QWORD *)(v71 + 32);
        v72 = (__int64 *)(v71 + 32);
        Instance = v73;
        if ( !v73 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 540) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v30 + 16),
                                *(System_Int32_array **)(v30 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v70 >= *(_DWORD *)(v68 + 24) )
            goto LABEL_220;
          v74 = (Il2CppObject *)Instance;
          Instance = *v72;
          if ( !*v72 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v70 >= *(_DWORD *)(v68 + 24) )
              goto LABEL_220;
            Instance = *v72;
            if ( !*v72 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v74 )
                goto LABEL_215;
              if ( v74[1].monitor )
              {
                if ( v70 >= *(_DWORD *)(v68 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v170;
                if ( !*v72 || !v170 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v170,
                  *(_DWORD *)(*v72 + 24),
                  v74,
                  (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v70 >= *(_DWORD *)(v68 + 24) )
            goto LABEL_220;
          if ( !*v72 )
            goto LABEL_215;
          if ( !v44 )
            goto LABEL_215;
          v32 = *(unsigned int *)(*v72 + 24);
          v75 = v44->fields._items;
          v76 = Method_System_Collections_Generic_List_int__Add__;
          ++v44->fields._version;
          if ( !v75 )
            goto LABEL_215;
          v77 = v44->fields._size;
          if ( (unsigned int)v77 >= v75->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v44,
              v32,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
          }
          else
          {
            v44->fields._size = v77 + 1;
            v75->m_Items[v77 + 1] = v32;
          }
        }
        v69 = *(_DWORD *)(v68 + 24);
        if ( (int)++v70 >= v69 )
          goto LABEL_110;
      }
      goto LABEL_220;
    }
LABEL_110:
    v67 = this->fields.data;
    if ( !v67 )
      goto LABEL_215;
  }
  if ( !v44 )
    goto LABEL_215;
  battleEvent = v67->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v44,
                        (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v30 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v79 = this->fields.data;
  if ( !v79 )
    goto LABEL_215;
  perf = v79->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v79->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v81 = this->fields.data;
  if ( !v81 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v81->fields.aiNpcDataList;
  v83 = (System_Action_object__o *)sub_1B4D1DC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v83,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass35_0__createEndTurnPlayer_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v83,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v84 = this->fields.data;
  if ( !v84 )
    goto LABEL_215;
  Instance = (__int64)v84->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v30 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v30 + 24), v85);
  v86 = this->fields.data;
  if ( !v86 )
    goto LABEL_215;
  Instance = (__int64)v169;
  v86->fields.currentTurn = 1;
  if ( !v169 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v174,
    v169,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v175 = v174;
  while ( 1 )
  {
    v87 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v175,
                            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v87 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v175.fields._current.fields.value;
    if ( !v175.fields._current.fields.value )
      sub_1B4D1EC(v87, v88);
    max_length = (int)v175.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v175.fields._current.fields.key;
      v92 = 0;
      v93 = 1;
LABEL_127:
      if ( v92 >= max_length )
        sub_1B4D1F4(v87, v88);
      v94 = value->m_Items[v92];
      if ( !v94 )
        sub_1B4D1EC(v87, v88);
      if ( v94->fields._isRemove )
        goto LABEL_163;
      if ( !v36 )
        sub_1B4D1EC(v87, v88);
      v87 = DataMasterBase_object__object__int___GetEntity(
              v36,
              v94->fields.buffId,
              (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v87 )
        goto LABEL_163;
      v95 = (BattleSkillInfoData_o *)sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v95, 0LL);
      if ( !v95 )
        sub_1B4D1EC(v96, v97);
      v95->fields.svtUniqueId = key;
      vals = v94->fields.vals;
      if ( !vals )
        sub_1B4D1EC(v96, v97);
      if ( !vals->max_length )
        sub_1B4D1F4(v96, v97);
      v99 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v95->klass->vtable._4_set_skillId.method)(
              v95,
              (unsigned int)vals->m_Items[1],
              v95->klass->vtable._5_get_skillId.methodPtr);
      v101 = v94->fields.vals;
      if ( !v101 )
        sub_1B4D1EC(v99, v100);
      if ( v101->max_length <= 1 )
        sub_1B4D1F4(v99, v100);
      v95->fields.skilllv = v101->m_Items[2];
      v102 = this->fields.data;
      if ( !v102 )
        sub_1B4D1EC(0LL, v100);
      ServantData = BattleData__getServantData(v102, v95->fields.svtUniqueId, 0LL);
      v104 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v95->klass->vtable._5_get_skillId.method)(
               v95,
               v95->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v173 )
        sub_1B4D1EC(0LL, v104);
      v105 = SkillLvMaster__GetEntity(v173, v104, v95->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B4D1EC(v105, v106);
      v107 = v105;
      v108 = this->fields.data;
      if ( !v108 )
        sub_1B4D1EC(0LL, v106);
      v109 = BattleData__checkAliveOther(v108, ServantData->fields.uniqueId, 0LL);
      if ( !v109 )
      {
        if ( !v107 )
          sub_1B4D1EC(v109, v110);
        v111 = this->fields.logic;
        if ( !v111 )
          sub_1B4D1EC(0LL, v110);
        v87 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v111, v107->fields.funcId, 0LL);
        if ( ((unsigned __int8)v87 & 1) == 0 )
          goto LABEL_163;
      }
      v112 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v94, 0LL);
      if ( (v112 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v95->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v95, 0LL);
      }
      else
      {
        v113 = sub_1B4D038(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v113;
        if ( !v113 )
          sub_1B4D1EC(0LL, v114);
        if ( !*(_DWORD *)(v113 + 24) )
          sub_1B4D1F4(v113, v114);
        exists = 0;
        *(_DWORD *)(v113 + 32) = v112;
      }
      logicskill = this->fields.logicskill;
      v118 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
      if ( !v118 )
        sub_1B4D1EC(0LL, v119);
      if ( !v118->max_length )
        sub_1B4D1F4(v118, v119);
      v118->m_Items[1] = key;
      if ( !logicskill )
        sub_1B4D1EC(v118, v119);
      v120 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v95,
                                                   v118,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v168);
      v122 = (BattleLogicTask_array *)v120;
      if ( (v93 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v120, 0LL);
        if ( IsNullOrEmpty )
        {
          v93 = 1;
          goto LABEL_161;
        }
        if ( !v122 )
          sub_1B4D1EC(IsNullOrEmpty, v121);
        if ( !v122->max_length )
          sub_1B4D1F4(IsNullOrEmpty, v121);
        v124 = v122->m_Items[0];
        if ( !v124 )
          sub_1B4D1EC(0LL, v121);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v124, ServantData, value, 0LL);
      }
      v93 = 0;
LABEL_161:
      v125 = this->fields.logic;
      if ( !v125 )
        sub_1B4D1EC(0LL, v121);
      BattleLogic__addBattleLogicTask(v125, v122, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v92 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v175,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v170;
  if ( !v170 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v174,
    v170,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v175 = v174;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v175,
            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v127 = this->fields.data;
    if ( !v127 )
      sub_1B4D1EC(0LL, v126);
    v128 = (int32_t)v175.fields._current.fields.key;
    v129 = v175.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v127, (int32_t)v175.fields._current.fields.key, 0LL);
    v132 = isEndAct;
    if ( isEndAct )
    {
      v133 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B4D1DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43313456(v133, v132, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v133 )
        sub_1B4D1EC(isEndAct, v131);
      selfConcatSvtIndividualities_k__BackingField = v133->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v129 )
LABEL_250:
        sub_1B4D1EC(isEndAct, v131);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0LL;
      if ( !v129 )
        goto LABEL_250;
    }
    v135 = (int)v129[1].monitor;
    if ( v135 >= 1 )
    {
      for ( i = 0; i < v135; ++i )
      {
        if ( i >= (unsigned int)v135 )
          sub_1B4D1F4(isEndAct, v131);
        v137 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v129[2].klass + i);
        if ( !v137 )
          sub_1B4D1EC(isEndAct, v131);
        if ( !v137->fields._isRemove )
        {
          if ( !v36 )
            sub_1B4D1EC(isEndAct, v131);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v36,
                                              v137->fields.buffId,
                                              (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v137, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v138 = (BattleSkillInfoData_o *)sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v138, 0LL);
                if ( !v138 )
                  sub_1B4D1EC(v139, v140);
                v138->fields.svtUniqueId = v128;
                v141 = v137->fields.vals;
                if ( !v141 )
                  sub_1B4D1EC(v139, v140);
                if ( !v141->max_length )
                  sub_1B4D1F4(v139, v140);
                v142 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v138->klass->vtable._4_set_skillId.method)(
                         v138,
                         (unsigned int)v141->m_Items[1],
                         v138->klass->vtable._5_get_skillId.methodPtr);
                v144 = v137->fields.vals;
                if ( !v144 )
                  sub_1B4D1EC(v142, v143);
                if ( v144->max_length <= 1 )
                  sub_1B4D1F4(v142, v143);
                v138->fields.skilllv = v144->m_Items[2];
                v145 = this->fields.data;
                if ( !v145 )
                  sub_1B4D1EC(0LL, v143);
                v146 = BattleData__getServantData(v145, v138->fields.svtUniqueId, 0LL);
                v147 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v138->klass->vtable._5_get_skillId.method)(
                         v138,
                         v138->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v173 )
                  sub_1B4D1EC(0LL, v147);
                v148 = SkillLvMaster__GetEntity(v173, v147, v138->fields.skilllv, 0LL);
                if ( !v146 )
                  sub_1B4D1EC(v148, v149);
                v150 = v148;
                v151 = this->fields.data;
                if ( !v151 )
                  sub_1B4D1EC(0LL, v149);
                v152 = BattleData__checkAliveOther(v151, v146->fields.uniqueId, 0LL);
                if ( v152 )
                  goto LABEL_198;
                if ( !v150 )
                  sub_1B4D1EC(v152, v153);
                v154 = this->fields.logic;
                if ( !v154 )
                  sub_1B4D1EC(0LL, v153);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v154, v150->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v155 = BattleServantData__GetRevengeIdCheckOpponentOnly(v146, v137, 0LL);
                  if ( (v155 & 0x80000000) != 0 )
                  {
                    v158 = Target__getTargetIds(this->fields.data, v138->fields.svtUniqueId, -1, v128, 13, 0LL, 0LL);
                    v159 = BattleSkillInfoData__ExistsNoTargetNoActionType(v138, 0LL);
                  }
                  else
                  {
                    v156 = sub_1B4D038(int___TypeInfo, 1LL);
                    v158 = (System_Int32_array *)v156;
                    if ( !v156 )
                      sub_1B4D1EC(0LL, v157);
                    if ( !*(_DWORD *)(v156 + 24) )
                      sub_1B4D1F4(v156, v157);
                    v159 = 0;
                    *(_DWORD *)(v156 + 32) = v155;
                  }
                  v160 = this->fields.logicskill;
                  v161 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
                  if ( !v161 )
                    sub_1B4D1EC(0LL, v162);
                  if ( !v161->max_length )
                    sub_1B4D1F4(v161, v162);
                  v161->m_Items[1] = v128;
                  if ( !v160 )
                    sub_1B4D1EC(v161, v162);
                  v163 = BattleLogicSkill__taskSkill(v160, v138, v161, v158, 1, v159, 0, 0, 0, v168);
                  v164 = this->fields.logic;
                  if ( !v164 )
                    sub_1B4D1EC(0LL, v163);
                  BattleLogic__addBattleLogicTask(v164, v163, 0LL);
                }
              }
            }
          }
        }
        v135 = (int)v129[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v175,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v165 = this->fields.data;
  if ( !v165
    || (Instance = (__int64)v165->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B4D1EC(Instance, v32);
  }
  if ( (v172 & 1) != 0 )
    v166 = actiondata;
  else
    v166 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v166, actiondata, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_String_o *motionName; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_String_o *motionMessage; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_GameObject_o *targetObject; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49BDC9F & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, task);
    byte_49BDC9F = 1;
  }
  v4 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_1B4D1EC(v5, v6);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 64), (int32_t)motionName, v8, v9);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 128), (int32_t)motionMessage, v11, v12);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 72), (int32_t)targetObject, v14, v15);
  return (BattleActionData_o *)v4;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftGuts(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  BattleLogicNomal_o *v5; // x20
  BattleServantData_o *v6; // x21
  int32_t ShiftGuts; // w0
  int32_t v8; // w22
  struct BattleData_o *v9; // x8
  BattleLogicNomal_o *v10; // x23
  const MethodInfo *v11; // x6
  struct BattleLogic_o *logic; // x8
  BuffEntity_o *buffEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( !task )
    goto LABEL_14;
  data = this->fields.data;
  v5 = this;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_14;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_14;
  v6 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  buffEntity = 0LL;
  if ( !v6->fields.buffData )
    goto LABEL_14;
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
    v9 = v5->fields.data;
    if ( v9 )
    {
      v10 = this;
      this = (BattleLogicNomal_o *)v9->fields.perf;
      if ( this )
      {
        BattlePerformance__PlayShiftGuts((BattlePerformance_o *)this, 0LL);
        this = (BattleLogicNomal_o *)v6->fields.buffData;
        if ( this )
        {
          this = (BattleLogicNomal_o *)BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
          logic = v5->fields.logic;
          if ( logic )
          {
            if ( logic->fields.logicReaction )
              return BattleLogicReaction__createResurrectionCommon(
                       (BattleLogicReaction_o *)this,
                       v6,
                       buffEntity,
                       v8,
                       task->fields.isForcedSpeedOne,
                       (System_String_o *)v10,
                       v11);
          }
        }
      }
    }
LABEL_14:
    sub_1B4D1EC(this, task);
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
  BattleServantData_o *v8; // x20
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  BattleActionData_ShiftServant_o *v13; // x22

  v4 = this;
  if ( (byte_49BDCA9 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, task);
    sub_1B4CF90(&BattleActionData_ShiftServant_TypeInfo, v5);
    this = (BattleLogicNomal_o *)sub_1B4CF90(&StringLiteral_8569/*"MOTION_SHIFT"*/, v6);
    byte_49BDCA9 = 1;
  }
  if ( !task )
    goto LABEL_12;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_12;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_12;
  v8 = (BattleServantData_o *)this;
  v9 = 0LL;
  if ( BattleServantData__isShiftReady((BattleServantData_o *)this, 0LL) )
  {
    v9 = sub_1B4D1DC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v9, 0LL);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 32) = v8->fields.uniqueId;
      v12 = StringLiteral_8569/*"MOTION_SHIFT"*/;
      *(_QWORD *)(v9 + 64) = StringLiteral_8569/*"MOTION_SHIFT"*/;
      sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 64), v12, v10, v11);
      v13 = (BattleActionData_ShiftServant_o *)sub_1B4D1DC(BattleActionData_ShiftServant_TypeInfo);
      BattleActionData_ShiftServant___ctor(v13, 0, 0LL);
      if ( v13 )
      {
        BattleActionData_ShiftServant__setBeforeSvtData(v13, v8, 0LL);
        BattleServantData__setShiftServant(v8, v4->fields.data, 1, 0LL);
        BattleServantData__SetIsBattleShift(v8, 1, 0LL);
        BattleActionData_ShiftServant__setCheckSvtData(v13, v8, 0LL);
        BattleActionData__setShiftServant((BattleActionData_o *)v9, v13, 0LL);
        this = (BattleLogicNomal_o *)v4->fields.logic;
        if ( this )
        {
          BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, v8->fields.uniqueId, 1, 0, 0LL);
          return (BattleActionData_o *)v9;
        }
      }
    }
LABEL_12:
    sub_1B4D1EC(this, task);
  }
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

  if ( (byte_49BDCA0 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, task);
    sub_1B4CF90(&StringLiteral_10855/*"RESET_CAMERA_BAT"*/, v5);
    byte_49BDCA0 = 1;
  }
  StartTurn = BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0LL;
  StartTurn = BattleLogicNomal__DeadChangePos(this, v7);
  v9 = StartTurn;
  if ( StartTurn )
  {
    v10 = this->fields.data;
    if ( !v10 )
      goto LABEL_18;
    perf = v10->fields.perf;
    if ( !perf )
      goto LABEL_18;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              (System_String_o *)StringLiteral_10855/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v9;
          }
        }
      }
LABEL_18:
      sub_1B4D1EC(StartTurn, v7);
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
  int v6; // w8
  int v7; // w9
  __int64 v8; // x11
  struct BattleData_o *v9; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_12;
  v6 = *((_DWORD *)data + 6);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v6 == v7 )
        sub_1B4D1F4(data, task);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 540) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1B4D1EC(data, task);
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
    sub_1B4D1EC(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1B4D1F4(this, svtList);
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
LABEL_15:
    sub_1B4D1F4(data, *(_QWORD *)&uniqueId);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1B4D1EC(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B4D1EC(this, method);
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

  if ( (byte_49BDC93 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1B4CF90(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_49BDC93 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1B4D1DC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_1B4D1EC(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v7,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  BattleData_o *ShiftableUniqueId; // x0
  const MethodInfo *v17; // x1
  int32_t ActorId; // w0
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  BattleServantData_o *v21; // x22
  BattleLogicTask_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  const MethodInfo *v29; // x2
  __int64 v31; // x22
  const MethodInfo *v32; // x2
  __int64 v33; // x23
  System_Func_object__bool__o *v34; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  struct BattleLogic_o *logic; // x8
  struct BattleLogicReaction_o *logicReaction; // x8
  BattleLogicTask_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  struct BattleLogic_o *v49; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0

  if ( (byte_49BDCAA & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, task);
    sub_1B4CF90(&BeforeShiftServantReactTaskCreator_TypeInfo, v5);
    sub_1B4CF90(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_1B4CF90(&ReactTaskTargetFilter_TypeInfo, v12);
    sub_1B4CF90(&Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__, v13);
    sub_1B4CF90(&BattleLogicNomal___c__DisplayClass48_0_TypeInfo, v14);
    byte_49BDCAA = 1;
  }
  v15 = sub_1B4D1DC(BattleLogicNomal___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !task )
    goto LABEL_37;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  ShiftableUniqueId = (BattleData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v19);
  if ( !v15 )
    goto LABEL_37;
  *(_DWORD *)(v15 + 16) = (_DWORD)ShiftableUniqueId;
  if ( !(_DWORD)ShiftableUniqueId )
    return this->fields.zeroTask;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  ShiftableUniqueId = this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)BattleData__getServantData(ShiftableUniqueId, *(_DWORD *)(v15 + 16), 0LL);
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  v21 = (BattleServantData_o *)ShiftableUniqueId;
  ShiftableUniqueId = (BattleData_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                        (BattleServantData_o *)ShiftableUniqueId,
                                        0LL);
  if ( !v21->fields.buffData )
    goto LABEL_37;
  if ( !BattleBuffData__IsShiftGuts(
          v21->fields.buffData,
          v21,
          (BattleBuffData_CheckIndividualitiesData_array *)ShiftableUniqueId,
          0LL) )
  {
    v31 = sub_1B4D1DC(BeforeShiftServantReactTaskCreator_TypeInfo);
    ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)v31, 24, v32);
    if ( v31 )
    {
      ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v31, v17);
      v33 = sub_1B4D1DC(ReactTaskTargetFilter_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0LL);
      v34 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v34,
        (Il2CppObject *)v15,
        Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__,
        0LL);
      if ( v33 )
      {
        *(_QWORD *)(v33 + 16) = v34;
        sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v34, v35, v36);
        *(_QWORD *)(v31 + 24) = v33;
        sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 24), v33, v37, v38);
        logic = this->fields.logic;
        if ( logic )
        {
          logicReaction = logic->fields.logicReaction;
          if ( logicReaction )
          {
            ShiftableUniqueId = (BattleData_o *)ServantReactTaskCreator__CreateTasks(
                                                  (ServantReactTaskCreator_o *)v31,
                                                  logicReaction->fields.logic,
                                                  v39);
            if ( v20 )
            {
              System_Collections_Generic_List_object___AddRange(
                v20,
                (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
                (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              v42 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v42, 0LL);
              if ( v42 )
              {
                v42->fields.actiontype = 37;
                BattleLogicTask__setActor(v42, 3, *(_DWORD *)(v15 + 16), 0LL);
                items = v20->fields._items;
                v46 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v20->fields._version;
                if ( items )
                {
                  size = v20->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v20,
                      (Il2CppObject *)v42,
                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v48 = &items->obj.klass + size;
                    v20->fields._size = size + 1;
                    v48[4] = (Il2CppClass *)v42;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
                  }
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_1B4D1EC(ShiftableUniqueId, v17);
  }
  v22 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_37;
  v22->fields.actiontype = 62;
  BattleLogicTask__setActor(v22, 3, *(_DWORD *)(v15 + 16), 0LL);
  if ( !v20 )
    goto LABEL_37;
  v25 = v20->fields._items;
  v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v20->fields._version;
  if ( !v25 )
    goto LABEL_37;
  v27 = v20->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v22,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v20->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v22;
    sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
  }
  v49 = this->fields.logic;
  if ( !v49 )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)v49->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                              *(_DWORD *)(v15 + 16),
                                                              v29);
  if ( TaskGuts )
    System_Collections_Generic_List_object___AddRange(
      v20,
      TaskGuts,
      (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_31:
  v51 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v51, 0LL);
  if ( !v51 )
    goto LABEL_37;
  v51->fields.actiontype = 36;
  BattleLogicTask__setActor(v51, 3, *(_DWORD *)(v15 + 16), 0LL);
  v54 = v20->fields._items;
  v55 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v20->fields._version;
  if ( !v54 )
    goto LABEL_37;
  v56 = v20->fields._size;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v51,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    v20->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v51;
    sub_1B4CF34((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  BattleData_o *battleEvent; // x0
  __int64 v13; // x1
  struct BattleData_o *v14; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v16; // x0
  int32_t COMMAND_CARD_NUM_TO_SELECT; // w1
  BattleCommandData_o *v18; // x22
  BattleServantData_o *v19; // x23
  BattleLogicTask_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49BDC95 & 1) == 0 )
  {
    sub_1B4CF90(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_49BDC95 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_26;
  battleEvent = (BattleData_o *)v14->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, void *))battleEvent->klass[1].vtable._5_isAiTarget.method)(
                                  battleEvent,
                                  battleEvent->klass[2]._1.image);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_23;
  if ( !data )
    goto LABEL_26;
  combodata = data->fields.combodata;
  if ( !combodata )
    goto LABEL_26;
  if ( combodata->fields.samecount < 3 )
    goto LABEL_23;
  v16 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v16 = BattleDataDefine_TypeInfo;
  }
  COMMAND_CARD_NUM_TO_SELECT = v16->static_fields->COMMAND_CARD_NUM_TO_SELECT;
  this->fields.commandIndex = COMMAND_CARD_NUM_TO_SELECT;
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v18 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v18->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v19 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v19->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v19, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1B4D1EC(battleEvent, v13);
  }
  v20 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_26;
  BattleLogicTask__setActor(v20, 2, v18->fields.uniqueId, 0LL);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v20, 0LL);
  BattleLogicTask__setAddAttackCommand(v20, data->fields.combodata, v18, 0LL);
  v20->fields.isCanCounterTask = 1;
  if ( !v11 )
    goto LABEL_26;
  items = v11->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v20,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v20;
    sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  BattleLogicTask_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_49BDCA6 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49BDCA6 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v12 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v12, 0LL);
    if ( !v12 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddEnemy(v12, 0LL);
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v9 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1B4D1EC(v10, v11);
    }
    v12 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v12, 0LL);
    if ( !v12 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v12, 0LL);
  }
  if ( !v9 )
    goto LABEL_14;
  items = v9->fields._items;
  v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_49BDC98 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49BDC98 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v12 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v12, 0LL),
        !v12)
    || (BattleLogicTask__setSystem(v12, 0LL), !v9)
    || (items = v9->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1B4D1EC(logic, v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B4D1EC(this, *(_QWORD *)&ltype);
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
  System_Collections_Generic_List_object__o *v11; // x19
  BattleCommandData_o *battleEvent; // x0
  __int64 v13; // x1
  struct BattleData_o *v14; // x8
  int32_t v15; // w23
  BattleCommandData_o *v16; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v18; // x2
  BattleLogicTask_o *v19; // x22
  int32_t TreasureDvcId; // w0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_49BDC94 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_49BDC94 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)v14->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_18;
  if ( ltype == 3 )
    v15 = 2;
  else
    v15 = ltype == 2;
  this->fields.commandIndex = v15;
  if ( !data )
    goto LABEL_37;
  battleEvent = BattleData__getSelectCommand(data, v15, 0LL);
  if ( !battleEvent )
    goto LABEL_37;
  v16 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_18;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_37;
  ServantData = BattleData__getServantData((BattleData_o *)battleEvent, v16->fields.uniqueId, 0LL);
  battleEvent = (BattleCommandData_o *)BattleLogicNomal__IsEnableToAttack(ServantData, v16, v18);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
  {
LABEL_18:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v19 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_37;
  BattleLogicTask__setActionCommand(v19, data->fields.combodata, v16, v15, 0LL);
  if ( BattleData__isTutorial(data, 0LL) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
      BattleCommandData__checkCriticalRate(v16, 0, 0LL);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v16, 0LL);
  }
  BattleLogicTask__setActor(v19, 2, v16->fields.uniqueId, 0LL);
  v19->fields.isCanCounterTask = 1;
  if ( v16->fields.treasureDvc < 1 )
  {
    BattleData__setTDChain(data, 0, 0LL);
    battleEvent = (BattleCommandData_o *)this->fields.logictarget;
    if ( battleEvent )
    {
      battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                             (BattleLogicTarget_o *)battleEvent,
                                             v19,
                                             0LL);
      if ( v11 )
      {
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v19,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v19;
            sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v19, v28, v29);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1B4D1EC(battleEvent, v13);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_37;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
  if ( !ServantData )
    goto LABEL_37;
  BattleLogicTask__setActor(v19, 2, ServantData->fields.uniqueId, 0LL);
  BattleLogicTask__setActionCommand(v19, data->fields.combodata, v16, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL, 0LL);
  BattleLogicTask__setActionTreasureDvc(v19, TreasureDvcId, 1, 0LL);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         v19,
                                         0LL);
  if ( !v11 )
    goto LABEL_37;
  v24 = v11->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !v24 )
    goto LABEL_37;
  v26 = v11->fields._size;
  if ( (unsigned int)v26 >= v24->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v19,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v11->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v19;
    sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v19, v22, v23);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCounterFunc(
        BattleLogicNomal_o *this,
        BattleData_o *data,
        bool isEnemy,
        bool isSkillCounter,
        bool isInitLogicHp,
        const MethodInfo *method)
{
  _BOOL4 v6; // w28
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
  System_Collections_Generic_List_object__o *v28; // x23
  __int64 Instance; // x0
  __int64 wasAttackTargetId; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v32; // x8
  __int64 v33; // x22
  __int64 v34; // x8
  unsigned __int64 v35; // x26
  int v36; // w9
  BattleServantData_o *v37; // x27
  BattleServantData_o *v38; // x20
  System_Collections_Generic_IEnumerable_T__o *v39; // x29
  void *monitor; // x8
  bool v41; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x25
  __int64 v43; // x28
  BattleBuffData_BuffData_o *v44; // x21
  BattleLogicTask_o *v45; // x20
  int32_t counterLv; // w2
  __int64 v47; // x25
  __int64 v48; // x24
  int32_t uniqueId; // w8
  __int64 v50; // x9
  System_Int32_array *v51; // x25
  System_String_o *CounterMessage; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x9
  BattleLogicNomal___c_c *v60; // x0
  System_Action_object__o *_9__18_0; // x20
  Il2CppObject *v62; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct BattleLogic_o *logic; // x8
  _BOOL4 v68; // [xsp+4h] [xbp-9Ch]
  BattleLogicNomal_o *v69; // [xsp+8h] [xbp-98h]
  SkillLvMaster_o *v70; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v71; // [xsp+18h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // [xsp+20h] [xbp-80h]
  char v74; // [xsp+38h] [xbp-68h]
  int32_t type; // [xsp+3Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_49BDC96 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    sub_1B4CF90(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v11);
    sub_1B4CF90(&BattleSkillInfoData_TypeInfo, v12);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BuffMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75424136, v17);
    sub_1B4CF90(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1B4CF90(&int___TypeInfo, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v23);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B4CF90(&Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__, v26);
    sub_1B4CF90(&BattleLogicNomal___c_TypeInfo, v27);
    byte_49BDC96 = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BuffMaster___);
  v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !data )
    goto LABEL_76;
  v32 = 296LL;
  if ( isEnemy )
    v32 = 304LL;
  v33 = *(__int64 *)((char *)&data->klass + v32);
  if ( !v33 )
    goto LABEL_76;
  v34 = *(_QWORD *)(v33 + 24);
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    if ( isEnemy )
      v36 = 3;
    else
      v36 = 2;
    type = v36;
    do
    {
      if ( v35 >= (unsigned int)v34 )
LABEL_77:
        sub_1B4D1F4(Instance, wasAttackTargetId);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v33 + 4 * v35 + 32), 0LL);
      if ( Instance )
      {
        v37 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v37, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v37->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v38 = (BattleServantData_o *)Instance;
                if ( v37->fields.isEnemy != *(unsigned __int8 *)(Instance + 479) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v38, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v37->fields.buffData;
                    if ( !Instance )
                      goto LABEL_76;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v37,
                                          v38,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_76;
                    v39 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v69 = this;
                      v70 = (SkillLvMaster_o *)MasterData_object;
                      v68 = v6;
                      v71 = (System_Collections_Generic_HashSet_T__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_54806768(
                        v71,
                        v39,
                        (const MethodInfo_34448F0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75424136);
                      monitor = v39[1].monitor;
                      v41 = isSkillCounter;
                      v42 = v72;
                      if ( (int)monitor >= 1 )
                      {
                        v43 = 4LL;
                        v74 = 1;
                        do
                        {
                          if ( v43 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_77;
                          v44 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v39->klass + v43);
                          if ( !v41 )
                            goto LABEL_80;
                          if ( !v44 )
                            goto LABEL_76;
                          if ( v44->fields.isSkillReaction )
                          {
LABEL_80:
                            v45 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v45, 0LL);
                            if ( !v45 )
                              goto LABEL_76;
                            BattleLogicTask__setActor(v45, type, v37->fields.uniqueId, 0LL);
                            BattleLogicTask__setTarget(v45, v37->fields.wasAttackTargetId, 0LL);
                            Instance = (__int64)v37->fields.buffData;
                            if ( !Instance )
                              goto LABEL_76;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v44, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v37->fields.overkillTargetId = -1;
                              if ( !v44 )
                                goto LABEL_76;
                              wasAttackTargetId = (unsigned int)v44->fields.counterId;
                              counterLv = v44->fields.counterLv;
                              if ( v44->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v45,
                                  wasAttackTargetId,
                                  counterLv,
                                  v44->fields.counterOc,
                                  1,
                                  0LL);
                                if ( !v42 )
                                  goto LABEL_76;
                              }
                              else
                              {
                                Instance = (__int64)v70;
                                if ( !v70 )
                                  goto LABEL_76;
                                Instance = (__int64)SkillLvMaster__GetEntity(v70, wasAttackTargetId, counterLv, 0LL);
                                if ( !Instance )
                                {
                                  v41 = isSkillCounter;
                                  v42 = v72;
                                  goto LABEL_58;
                                }
                                v47 = Instance;
                                v48 = sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v48, 0LL);
                                if ( !v48 )
                                  goto LABEL_76;
                                uniqueId = v37->fields.uniqueId;
                                v50 = *(_QWORD *)v48;
                                *(_QWORD *)(v48 + 16) = 20LL;
                                *(_DWORD *)(v48 + 24) = uniqueId;
                                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v50 + 376))(
                                  v48,
                                  *(unsigned int *)(v47 + 16),
                                  *(_QWORD *)(v50 + 384));
                                *(_DWORD *)(v48 + 36) = *(_DWORD *)(v47 + 20);
                                Instance = sub_1B4D038(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                v51 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v37->fields.wasAttackTargetId;
                                Instance = sub_1B4D038(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v37->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  v45,
                                  (BattleSkillInfoData_o *)v48,
                                  v51,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  0LL);
                                v41 = isSkillCounter;
                                v42 = v72;
                                if ( !v72 )
                                  goto LABEL_76;
                              }
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v42,
                                                    v44->fields.buffId,
                                                    (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_76;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0LL);
                              BattleLogicTask__setMessage(v45, CounterMessage, 2, 0LL);
                              v45->fields.isCounter = 1;
                              if ( (v74 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v45,
                                  v37,
                                  (BattleBuffData_BuffData_array *)v39,
                                  0LL);
                              if ( !v28 )
                                goto LABEL_76;
                              items = v28->fields._items;
                              v56 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v28->fields._version;
                              if ( !items )
                                goto LABEL_76;
                              size = v28->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v28,
                                  (Il2CppObject *)v45,
                                  *(const MethodInfo_35801DC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v58 = &items->obj.klass + size;
                                v28->fields._size = size + 1;
                                v58[4] = (Il2CppClass *)v45;
                                sub_1B4CF34((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v45, v53, v54);
                              }
                              Instance = (__int64)v71;
                              if ( !v71 )
                                goto LABEL_76;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v71,
                                           (Il2CppObject *)v44,
                                           (const MethodInfo_34450C0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v74 = 0;
                            }
                          }
LABEL_58:
                          LODWORD(monitor) = v39[1].monitor;
                          v59 = v43 - 3;
                          ++v43;
                        }
                        while ( v59 < (int)monitor );
                      }
                      v60 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v60 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v69;
                      MasterData_object = (Il2CppObject *)v70;
                      v6 = v68;
                      _9__18_0 = (System_Action_object__o *)v60->static_fields->__9__18_0;
                      if ( !_9__18_0 )
                      {
                        if ( !v60->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v60);
                          v60 = BattleLogicNomal___c_TypeInfo;
                        }
                        v62 = (Il2CppObject *)v60->static_fields->__9;
                        _9__18_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__18_0,
                          v62,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__18_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__18_0;
                        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v64, v65);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v71,
                        (System_Action_T__o *)_9__18_0,
                        (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v34) = *(_DWORD *)(v33 + 24);
    }
    while ( (__int64)++v35 < (int)v34 );
  }
  if ( !v28 )
    goto LABEL_76;
  if ( v28->fields._size < 1 )
    goto LABEL_74;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_76:
    sub_1B4D1EC(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_74:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_76;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v28,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v28,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_49BDC9D & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, svtData);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_49BDC9D = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v13, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v13 + 128) = gameObject;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 128), (int32_t)gameObject, v17, v18);
  if ( !svtData )
    goto LABEL_15;
  v19 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v13, v19, svtData->fields.uniqueId, 0LL);
  if ( !v12
    || (items = v12->fields._items,
        v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B4D1EC(v14, v15);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v13,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), v13, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v20; // x25
  __int64 v21; // x26
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 v23; // x21
  BattleEntity_o *battle_ent; // x0
  __int64 v25; // x1
  System_String_o *v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  bool v32; // w23
  System_String_o *v33; // x0
  BattleData_o *v34; // x8
  System_String_o *v35; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v37; // x2
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int32_t uniqueId; // w2
  System_String_o *v44; // x20
  BattleLogicTask_o *v45; // x0
  System_String_o *v46; // x1
  struct BattleData_o *v47; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v49; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v51; // x2
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  System_String_o *v56; // x22
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  int v64; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49BDC9E & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, svtData);
    sub_1B4CF90(&int_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v14);
    sub_1B4CF90(&StringLiteral_2887/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_1B4CF90(&StringLiteral_8558/*"MOTION_ENTRY"*/, v16);
    sub_1B4CF90(&StringLiteral_2885/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_1B4CF90(&StringLiteral_2886/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_1B4CF90(&StringLiteral_8559/*"MOTION_ENTRY_TAC"*/, v19);
    byte_49BDC9E = 1;
  }
  v20 = StringLiteral_8559/*"MOTION_ENTRY_TAC"*/;
  v21 = StringLiteral_8558/*"MOTION_ENTRY"*/;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_30;
  v26 = (System_String_o *)(isTactical ? v20 : v21);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v23, v26, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v23 + 128) = gameObject;
  sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 128), (int32_t)gameObject, v28, v29);
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
        battle_ent = (BattleEntity_o *)BattleEntity__GetStageEntityAtWave(battle_ent, data->fields.wavecount, 0LL);
        if ( battle_ent )
        {
          isNotDisplayRemain = StageEntity__isNotDisplayRemain((StageEntity_o *)battle_ent, 0LL);
          v32 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2886/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
LABEL_23:
              v56 = v33;
              BattleLogicTask__setActor((BattleLogicTask_o *)v23, 3, svtData->fields.uniqueId, 0LL);
              v45 = (BattleLogicTask_o *)v23;
              v46 = v56;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v32 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2885/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
          v47 = this->fields.data;
          if ( !v47 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v47->fields._EnemyCountStartValue_k__BackingField;
          v49 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v47, 0LL);
          v64 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v51)
              + EnemyCountStartValue_k__BackingField;
          v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v52, v53, v54);
          v33 = System_String__Format(v49, v55, 0LL);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1B4D1EC(battle_ent, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2887/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v34 = this->fields.data;
  if ( !v34 )
    goto LABEL_30;
  v35 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v34, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v37);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember, v38, v39, v40);
  v42 = System_String__Format(v35, v41, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v44 = v42;
  BattleLogicTask__setActor((BattleLogicTask_o *)v23, 2, uniqueId, 0LL);
  v45 = (BattleLogicTask_o *)v23;
  v46 = v44;
LABEL_24:
  BattleLogicTask__setMessage(v45, v46, 1, 0LL);
  if ( !v22 )
    goto LABEL_30;
  items = v22->fields._items;
  v60 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v23,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v23;
    sub_1B4CF34((CGThumbnailListItem_o *)(v62 + 4), v23, v57, v58);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20___ctor(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20__MoveNext(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  struct BattleData_o *data; // x8
  struct BattleCommandData_array *selectcommandlist; // x1
  _BOOL8 IsEnableToAttack; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v20; // x8
  int v21; // w9
  int32_t _7__wrap5; // w8
  int v23; // w9
  bool result; // w0
  CGThumbnailListItem_o *p__7__wrap1; // x8
  struct BattleCommandData_array *v26; // x10
  struct BattleCommandData_array *_7__wrap1; // t1
  int max_length; // w11
  BattleCommandData_o *v29; // x19
  BattleData_o *v30; // x0
  BattleServantData_o *ServantData; // x20
  const MethodInfo *v32; // x2
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v33; // x20
  BattleLogicNomal___c_c *v34; // x0
  System_Func_object__int__o *_9__20_0; // x21
  Il2CppObject *v36; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  __int64 v41; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x0
  __int64 v51; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v52; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v53; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  BattleSkillInfoData_o *v60; // x19
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v62; // x0
  __int64 v63; // x1
  BattleLogicTask_array *v64; // x1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct BattleLogicTask_array *_7__wrap4; // x10
  il2cpp_array_size_t v68; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  const MethodInfo *v74; // x1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct BattleLogicTask_o *v77; // x1
  const MethodInfo *v78; // [xsp+8h] [xbp-58h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v79; // [xsp+28h] [xbp-38h]

  v79 = this;
  v4 = this;
  if ( (byte_49BDCB5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___, method);
    sub_1B4CF90(&System_Func_BattleSkillInfoData__int__TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B4CF90(&int___TypeInfo, v9);
    sub_1B4CF90(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__, v10);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *)sub_1B4CF90(
                                                                            &BattleLogicNomal___c_TypeInfo,
                                                                            v11);
    byte_49BDCB5 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v4->fields.__7__wrap5;
    v4->fields.__1__state = -3;
    v23 = _7__wrap5 + 1;
    v4->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_57;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B4D1EC(this, method);
  data = _4__this->fields.data;
  if ( !data )
    sub_1B4D1EC(this, method);
  selectcommandlist = data->fields.selectcommandlist;
  v4->fields.__7__wrap1 = selectcommandlist;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)selectcommandlist, v2, v3);
  v20 = v79;
  v21 = 0;
  for ( v79->fields.__7__wrap2 = 0; ; v79->fields.__7__wrap2 = v21 )
  {
    _7__wrap1 = v20->fields.__7__wrap1;
    p__7__wrap1 = (CGThumbnailListItem_o *)&v20->fields.__7__wrap1;
    v26 = _7__wrap1;
    if ( !_7__wrap1 )
      sub_1B4D1EC(IsEnableToAttack, v17);
    max_length = v26->max_length;
    if ( v21 >= max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1B4CF34(p__7__wrap1, 0, v18, v19);
      return 0;
    }
    if ( v21 >= (unsigned int)max_length )
      sub_1B4D1F4(IsEnableToAttack, v17);
    if ( !_4__this )
      sub_1B4D1EC(IsEnableToAttack, v17);
    v29 = v26->m_Items[v21];
    if ( !v29 )
      sub_1B4D1EC(IsEnableToAttack, v17);
    v30 = _4__this->fields.data;
    if ( !v30 )
      sub_1B4D1EC(0LL, v17);
    ServantData = BattleData__getServantData(v30, v29->fields.uniqueId, 0LL);
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(ServantData, v29, v32);
    if ( IsEnableToAttack )
      break;
LABEL_69:
    v20 = v79;
    v21 = v79->fields.__7__wrap2 + 1;
  }
  if ( !ServantData )
    sub_1B4D1EC(IsEnableToAttack, v17);
  v33 = BattleServantData__EnumerateConfirmCommandFunctionSkill(ServantData, v29, 0LL);
  v34 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v34 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__int__o *)v34->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = BattleLogicNomal___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__20_0,
      v36,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__20_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v38, v39);
  }
  v40 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v42 = v40;
  if ( !v40 )
    sub_1B4D1EC(0LL, v41);
  klass = v40->klass;
  v44 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v44;
      p_offset += 4;
      if ( !v44 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1B9D724(v40, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v42,
          *(_QWORD *)(p_method + 8));
  if ( !v79 )
    sub_1B4D1EC(v47, v47);
  v79->fields.__7__wrap3 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v47;
  sub_1B4CF34((CGThumbnailListItem_o *)&v79->fields.__7__wrap3, v47, v48, v49);
  v52 = v79;
  v79->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap3 = v52->fields.__7__wrap3;
    if ( !_7__wrap3 )
      sub_1B4D1EC(v50, v51);
    v70 = _7__wrap3->klass;
    v71 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      v72 = &v70->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v72 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_65;
      }
      v73 = (__int64)&v70->vtable[*v72].method;
    }
    else
    {
LABEL_65:
      v73 = sub_1B9D724(_7__wrap3, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v73)(
            _7__wrap3,
            *(_QWORD *)(v73 + 8)) & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20____m__Finally1(v79, v74);
      v79->fields.__7__wrap3 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v79->fields.__7__wrap3, 0, v75, v76);
      goto LABEL_69;
    }
    v53 = v79->fields.__7__wrap3;
    if ( !v53 )
      sub_1B4D1EC(v79, v74);
    v54 = v53->klass;
    v55 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
    {
      v56 = &v54->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v56 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_49;
      }
      v57 = (__int64)&v54->vtable[*v56].method;
    }
    else
    {
LABEL_49:
      v57 = sub_1B9D724(
              v79->fields.__7__wrap3,
              System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
              0LL);
    }
    v58 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v57)(
            v53,
            *(_QWORD *)(v57 + 8));
    if ( !_4__this )
      sub_1B4D1EC(v58, v59);
    v60 = (BattleSkillInfoData_o *)v58;
    logicskill = _4__this->fields.logicskill;
    v62 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
    if ( !v60 )
      sub_1B4D1EC(v62, v63);
    if ( !v62 )
      sub_1B4D1EC(0LL, v63);
    if ( !v62->max_length )
      sub_1B4D1F4(v62, v63);
    v62->m_Items[1] = v60->fields.svtUniqueId;
    if ( !logicskill )
      sub_1B4D1EC(v62, v63);
    v64 = BattleLogicSkill__taskSkill(logicskill, v60, v62, 0LL, 0, 0, 0, 0, 0, v78);
    v79->fields.__7__wrap4 = v64;
    sub_1B4CF34((CGThumbnailListItem_o *)&v79->fields.__7__wrap4, (int32_t)v64, v65, v66);
    v4 = v79;
    v23 = 0;
    v79->fields.__7__wrap5 = 0;
LABEL_57:
    _7__wrap4 = v4->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1B4D1EC(this, method);
    v68 = _7__wrap4->max_length;
    if ( v23 < (int)v68 )
      break;
    v4->fields.__7__wrap4 = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__7__wrap4, 0, v2, v3);
    v52 = v79;
  }
  if ( v23 >= v68 )
    sub_1B4D1F4(this, method);
  v77 = _7__wrap4->m_Items[v23];
  v4->fields.__2__current = v77;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v77, v2, v3);
  result = 1;
  v79->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BDCB7 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo, method);
    byte_49BDCB7 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B4D1DC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)this;
}


BattleLogicTask_o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20__System_Collections_Generic_IEnumerator_BattleLogicTask__get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20__System_Collections_IEnumerator_Reset(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20__System_Collections_IEnumerator_get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20__System_IDisposable_Dispose(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20____m__Finally1(this, method);
}


void __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20____m__Finally1(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49BDCB6 & 1) == 0 )
  {
    sub_1B4CF90(&System_IDisposable_TypeInfo, method);
    byte_49BDCB6 = 1;
  }
  _7__wrap3 = this->fields.__7__wrap3;
  this->fields.__1__state = -1;
  if ( _7__wrap3 )
  {
    klass = _7__wrap3->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1B9D724(_7__wrap3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))p_method)(
      _7__wrap3,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BDCAF & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicNomal___c_TypeInfo, v1);
    byte_49BDCAF = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleLogicNomal___c___ctor(BattleLogicNomal___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__24_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  return targetSvtData;
}


int32_t __fastcall BattleLogicNomal___c___CreateCommandBattle_b__24_2(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__24_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19

  if ( (byte_49BDCB0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_1B4CF90(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_49BDCB0 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
}


bool __fastcall BattleLogicNomal___c___CreateCommandBattle_b__24_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0LL);
}


int32_t __fastcall BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__20_0(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__22_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__40_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1B4D1EC(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__18_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(x, 1, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass24_0___ctor(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_CheckInvokeBuff_o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__1(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BuffList_c *v6; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v9; // x22

  if ( (byte_49BDCB1 & 1) == 0 )
  {
    sub_1B4CF90(&BuffList_TypeInfo, targetSvtData);
    sub_1B4CF90(&BattleBuffData_CheckInvokeBuff_TypeInfo, v5);
    byte_49BDCB1 = 1;
  }
  v6 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v6->static_fields->CommandCodeFunctionActs;
  v9 = (BattleBuffData_CheckInvokeBuff_o *)sub_1B4D1DC(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v9, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v9;
}


void __fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass24_0_o *v6; // x21
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v11; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v13; // x8

  v6 = this;
  if ( (byte_49BDCB2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1B4CF90(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_49BDCB2 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2EEFD34 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B4D1EC(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
  }
}


void __fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass24_0_o *v6; // x21
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v11; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v13; // x8

  v6 = this;
  if ( (byte_49BDCB3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1B4CF90(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_49BDCB3 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2EEFD34 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B4D1EC(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
  }
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__6(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleLogicNomal___c__DisplayClass24_0_o *v4; // x20
  struct BattleActionData_o *actiondata; // x8
  BattleServantData_o *result; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass24_0_o *)this->fields.command) == 0LL)
    || (BattleCommandData__UpdateCritical(
          (BattleCommandData_o *)this,
          v4->fields.actSvtData,
          targetSvtData,
          _4__this->fields.data,
          0LL),
        !targetSvtData)
    || (actiondata = v4->fields.actiondata) == 0LL )
  {
    sub_1B4D1EC(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_49BDCB4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_49BDCB4 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass24_0_o *)_4__this->fields.data) == 0LL )
    sub_1B4D1EC(this, id);
  return BattleData__getServantData((BattleData_o *)this, id, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass35_0___ctor(
        BattleLogicNomal___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass35_0___createEndTurnPlayer_b__0(
        BattleLogicNomal___c__DisplayClass35_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1B4D1EC(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass38_0___ctor(
        BattleLogicNomal___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass38_0___createEndTurnEnemy_b__0(
        BattleLogicNomal___c__DisplayClass38_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1B4D1EC(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass48_0___ctor(
        BattleLogicNomal___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal___c__DisplayClass48_0___shiftServantTaskReaction_b__0(
        BattleLogicNomal___c__DisplayClass48_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueId;
}