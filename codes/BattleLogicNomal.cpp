void BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BattleLogicTask_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3AAC6 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask___TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    byte_4C3AAC6 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C32CC8(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5);
  v6 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0);
  this->fields.tmpShiftTask = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tmpShiftTask, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C32E7C(this);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleData_o *data; // x19
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v13; // x28
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BattleActionData_o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattleActionData_o **v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattleCommandData_o *command; // x1
  BattleCommandData_o **v23; // x26
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BattleActionData_o *v26; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v30; // x8
  int32_t v31; // w25
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v33; // x22
  bool v34; // w8
  BattleActionData_o *result; // x0
  System_Collections_Generic_List_object__o *v36; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o **v45; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_object__o **v47; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x19
  System_Func_T__TResult__o *v49; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x19
  BattleLogicNomal___c_c *v51; // x8
  System_Func_object__bool__o *_9__27_9; // x23
  Il2CppObject *v53; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x19
  BattleLogicNomal___c_c *v59; // x8
  System_Func_object__object__o *_9__27_0; // x23
  Il2CppObject *v61; // x22
  struct BattleLogicNomal___c_StaticFields *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Func_object__object__o *v65; // x22
  __int64 v66; // x9
  BuffList_c *v67; // x8
  BattleLogicNomal___c_c *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x23
  System_Func_T__TResult__o *_9__27_2; // x25
  Il2CppObject *v71; // x19
  struct BattleLogicNomal___c_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Func_T__TResult__o *_9__27_3; // x19
  Il2CppObject *v76; // x22
  struct BattleLogicNomal___c_StaticFields *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x8
  int64_t v84; // x19
  System_Action_object__object__o *v85; // x22
  BattleCommandData_o **v86; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v88; // x22
  __int64 v89; // x8
  __int64 v90; // x23
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  __int64 v93; // x19
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Func_object__object__o *v96; // x19
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v100; // x24
  const MethodInfo *v101; // x5
  __int64 v102; // x8
  unsigned __int64 v103; // x22
  int v104; // w19
  int32_t v105; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v106; // x27
  __int64 v107; // x8
  __int64 v108; // x19
  __int64 v109; // x9
  int *v110; // x10
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x23
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  __int64 v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  Il2CppObject *v122; // x0
  Il2CppObject *v123; // x1
  __int64 v124; // x8
  __int64 v125; // x9
  int *v126; // x10
  __int64 v127; // x0
  unsigned __int64 v128; // x9
  int v129; // w19
  int v130; // w8
  BuffList_ACTION_array *v131; // x27
  int v132; // w8
  __int64 v133; // x8
  __int64 v134; // x19
  __int64 v135; // x9
  int *v136; // x10
  __int64 v137; // x0
  __int64 v138; // x23
  __int64 v139; // x8
  __int64 v140; // x9
  int *v141; // x10
  __int64 v142; // x0
  __int64 v143; // x8
  __int64 v144; // x9
  int *v145; // x10
  __int64 v146; // x0
  BattleServantData_o *v147; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_46176464; // x0
  BattleBuffData_BuffData_array *v149; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v151; // x26
  BattleBuffData_BuffData_o *v152; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v155; // x8
  __int64 v156; // x9
  int *v157; // x10
  __int64 v158; // x0
  __int64 v159; // x8
  __int64 v160; // x19
  unsigned __int64 v161; // x22
  __int64 v162; // x8
  __int64 v163; // x19
  __int64 v164; // x9
  int *v165; // x10
  __int64 v166; // x0
  __int64 v167; // x0
  __int64 v168; // x29
  BattleActionData_DamageData_o *v169; // x23
  __int64 v170; // x8
  __int64 v171; // x9
  int *v172; // x10
  __int64 v173; // x0
  __int64 v174; // x8
  __int64 v175; // x9
  int *v176; // x10
  __int64 v177; // x0
  BattleServantData_o *v178; // x27
  BattleLogic_o *v179; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  BattleActionData_DamageData_o *v181; // x19
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v183; // x22
  BattleActionData_o *v184; // x0
  _BOOL8 v185; // x0
  BattleActionData_o *v186; // x8
  __int64 v187; // x8
  __int64 v188; // x9
  int *v189; // x10
  __int64 v190; // x0
  BattleActionData_o *v191; // x19
  BattleCommandData_o *v192; // x1
  BattleActionData_o *v193; // x19
  BattleActionData_o *v194; // x19
  struct BattleData_o *v195; // x8
  __int64 v196; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v198; // x19
  const MethodInfo *v199; // x5
  __int64 v200; // x8
  unsigned __int64 v201; // x26
  unsigned int v202; // w19
  int32_t v203; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x27
  __int64 v205; // x8
  __int64 v206; // x19
  __int64 v207; // x9
  int *v208; // x10
  __int64 v209; // x0
  __int64 v210; // x0
  __int64 v211; // x23
  __int64 v212; // x8
  __int64 v213; // x9
  int *v214; // x10
  __int64 v215; // x0
  __int64 v216; // x8
  __int64 v217; // x9
  int *v218; // x10
  __int64 v219; // x0
  Il2CppObject *v220; // x0
  Il2CppObject *v221; // x1
  __int64 v222; // x8
  __int64 v223; // x9
  int *v224; // x10
  __int64 v225; // x0
  unsigned __int64 v226; // x26
  int v227; // w19
  int v228; // w8
  BuffList_ACTION_array *v229; // x27
  int v230; // w8
  __int64 v231; // x8
  __int64 v232; // x19
  __int64 v233; // x9
  int *v234; // x10
  __int64 v235; // x0
  __int64 v236; // x23
  __int64 v237; // x8
  __int64 v238; // x9
  int *v239; // x10
  __int64 v240; // x0
  __int64 v241; // x8
  __int64 v242; // x9
  int *v243; // x10
  __int64 v244; // x0
  BattleServantData_o *v245; // x3
  BattleBuffData_BuffData_array *v246; // x0
  BattleBuffData_BuffData_array *v247; // x19
  il2cpp_array_size_t v248; // x8
  unsigned __int64 v249; // x22
  BattleLogicFunction_o *v250; // x0
  __int64 v251; // x8
  __int64 v252; // x9
  int *v253; // x10
  __int64 v254; // x0
  __int64 v255; // x8
  __int64 v256; // x19
  __int64 v257; // x9
  int *v258; // x10
  __int64 v259; // x0
  __int64 v260; // x0
  __int64 v261; // x23
  __int64 v262; // x8
  __int64 v263; // x9
  int *v264; // x10
  __int64 v265; // x0
  __int64 v266; // x8
  __int64 v267; // x9
  int *v268; // x10
  __int64 v269; // x0
  __int64 v270; // x0
  __int64 v271; // x8
  __int64 v272; // x9
  int *v273; // x10
  __int64 v274; // x0
  _BOOL8 v275; // x0
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v278; // x0
  BattleActionData_o *v279; // x8
  BattleLogic_o *v280; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v281; // x22
  __int64 v282; // x0
  const MethodInfo *v283; // [xsp+0h] [xbp-120h]
  bool v284; // [xsp+14h] [xbp-10Ch]
  __int64 *v285; // [xsp+18h] [xbp-108h]
  __int64 v286; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v287; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  BattleBuffData_o *actSvtBuffData; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_Dictionary_object__object__o *v290; // [xsp+40h] [xbp-E0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v291; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+50h] [xbp-D0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+50h] [xbp-D0h]
  Il2CppObject *item; // [xsp+58h] [xbp-C8h]
  bool v295; // [xsp+64h] [xbp-BCh]
  __int64 v296; // [xsp+68h] [xbp-B8h]
  __int64 v297; // [xsp+70h] [xbp-B0h]
  BattleServantData_o **v298; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v299; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v300; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4C3AAB1 & 1) == 0 )
  {
    sub_1C32C20(&BuffList_ACTION___TypeInfo);
    sub_1C32C20(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleAddSkillTaskAfterCommandAttack_TypeInfo);
    sub_1C32C20(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
    sub_1C32C20(&BattleServantData___TypeInfo);
    sub_1C32C20(&bool___TypeInfo);
    sub_1C32C20(&BuffList_TypeInfo);
    sub_1C32C20(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C32C20(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_1C32C20(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C32C20(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_1C32C20(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_BattleLogicNomal___c__CreateCommandBattle_b__27_0__);
    sub_1C32C20(&Method_BattleLogicNomal___c__CreateCommandBattle_b__27_2__);
    sub_1C32C20(&Method_BattleLogicNomal___c__CreateCommandBattle_b__27_3__);
    sub_1C32C20(&Method_BattleLogicNomal___c__CreateCommandBattle_b__27_9__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__1__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__4__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__5__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__6__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__7__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__8__);
    sub_1C32C20(&BattleLogicNomal___c__DisplayClass27_0_TypeInfo);
    sub_1C32C20(&BattleLogicNomal___c_TypeInfo);
    byte_4C3AAB1 = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = sub_1C32E6C(BattleLogicNomal___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_399;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  if ( !task )
    goto LABEL_399;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_399;
  ServantData = BattleData__getServantData(data, ActorId, 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  v13 = (BattleServantData_o **)(v7 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)ServantData, v14, v15);
  v16 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0);
  *baseActionData = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)baseActionData, (int32_t)v16, v17, v18);
  *(_QWORD *)(v7 + 48) = v16;
  v19 = (BattleActionData_o **)(v7 + 48);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 48), (int32_t)v16, v20, v21);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  v23 = (BattleCommandData_o **)(v7 + 40);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)command, v24, v25);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_399;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0);
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_399;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)ActorId, 0);
  }
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_399;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0);
  v26 = *v19;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !v26 )
    goto LABEL_399;
  v26->fields.actorId = ActorId;
  ActorId = (__int64)*v19;
  if ( !*v19 )
    goto LABEL_399;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 136) = motionMessage;
  sub_1C32BC4((CGThumbnailListItem_o *)(ActorId + 136), (int32_t)motionMessage, v27, v28);
  if ( !*v19 )
    goto LABEL_399;
  (*v19)->fields.isCounter = task->fields.isCounter;
  ActorId = BattleLogicTask__getTarget(task, 0);
  v30 = this->fields.data;
  if ( !v30 )
    goto LABEL_399;
  v31 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0);
    return 0;
  }
  if ( v30->fields.leaderDown || v30->fields.endbattleFlg )
    return 0;
  ActorId = (__int64)BattleData__getServantData(this->fields.data, ActorId, 0);
  if ( !*v19 )
    goto LABEL_399;
  if ( (*v19)->fields.isCounter )
  {
    if ( !ActorId )
      goto LABEL_399;
    if ( *(_BYTE *)(ActorId + 506) )
      return 0;
  }
  item = (Il2CppObject *)ActorId;
  logic = this->fields.logic;
  v33 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1C32E6C(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v33, 0);
  if ( !logic )
    goto LABEL_399;
  v287 = task;
  targetId = v31;
  v34 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v33, task, v31, 0);
  result = 0;
  if ( v34 )
    return result;
  v36 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v36 )
    goto LABEL_399;
  items = v36->fields._items;
  v40 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v36->fields._version;
  if ( !items )
    goto LABEL_399;
  size = v36->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      item,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v36->fields._size = size + 1;
    v42[4] = (Il2CppClass *)item;
    sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), (int32_t)item, v37, v38);
  }
  *(_QWORD *)(v7 + 56) = v36;
  v45 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 56), (int32_t)v36, v43, v44);
  ActorId = *(_QWORD *)(v7 + 40);
  if ( !ActorId )
    goto LABEL_399;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0);
  ActorId = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_399;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v13,
    (BattleServantData_o *)item,
    this->fields.data,
    0);
  ActorId = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_399;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v13, 0);
  ActorId = (__int64)*v13;
  if ( !*v13 )
    goto LABEL_399;
  ActorId = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v23, 0);
  v284 = (_DWORD)ActorId == 2;
  v299 = (BattleCommandData_o **)(v7 + 40);
  if ( (_DWORD)ActorId == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_399;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, targetId, 0);
    if ( !this->fields.data )
      goto LABEL_399;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0,
                                                                  0));
    v47 = (System_Collections_Generic_List_object__o **)(v7 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v46,
                         (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_399;
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      targetId,
      (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
    v49 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(
      v49,
      (Il2CppObject *)v7,
      Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__8__,
      0);
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v48,
                                                                 (System_Func_TSource__TResult__o *)v49,
                                                                 (const MethodInfo_3110E00 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v51 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v51 = BattleLogicNomal___c_TypeInfo;
    }
    _9__27_9 = (System_Func_object__bool__o *)v51->static_fields->__9__27_9;
    if ( !_9__27_9 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = BattleLogicNomal___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__27_9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__27_9, v53, Method_BattleLogicNomal___c__CreateCommandBattle_b__27_9__, 0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__27_9 = (struct System_Func_BattleServantData__bool__o *)_9__27_9;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__27_9, (int32_t)_9__27_9, v55, v56);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v50,
                         (System_Func_TSource__bool__o *)_9__27_9,
                         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v47 )
      goto LABEL_399;
    v45 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v47,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v23 = (BattleCommandData_o **)(v7 + 40);
  }
  if ( !*v45 )
    goto LABEL_399;
  ActorId = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_399;
  *(_DWORD *)(ActorId + 128) = (*v45)[1].monitor;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll((BattleCommandData_o *)ActorId, 0);
  v58 = *v45;
  v295 = IsForceAttackFunctionTargetAll;
  v59 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v59 = BattleLogicNomal___c_TypeInfo;
  }
  _9__27_0 = (System_Func_object__object__o *)v59->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = BattleLogicNomal___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__27_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__27_0, v61, Method_BattleLogicNomal___c__CreateCommandBattle_b__27_0__, 0);
    v62 = BattleLogicNomal___c_TypeInfo->static_fields;
    v62->__9__27_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__27_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v62->__9__27_0, (int32_t)_9__27_0, v63, v64);
  }
  v65 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_object__object____ctor(
    v65,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__1__,
    0);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v58,
                       (System_Func_TSource__TKey__o *)_9__27_0,
                       (System_Func_TSource__TElement__o *)v65,
                       (const MethodInfo_311D4A0 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v66 = *(_QWORD *)(v7 + 24);
  v290 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  if ( !v66 )
    goto LABEL_399;
  v67 = BuffList_TypeInfo;
  actSvtBuffData = *(BattleBuffData_o **)(v66 + 816);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v67 = BuffList_TypeInfo;
  }
  v68 = BattleLogicNomal___c_TypeInfo;
  v285 = (__int64 *)v45;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v67->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v68 = BattleLogicNomal___c_TypeInfo;
  }
  _9__27_2 = (System_Func_T__TResult__o *)v68->static_fields->__9__27_2;
  if ( !_9__27_2 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = BattleLogicNomal___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__27_2 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__27_2,
      v71,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__27_2__,
      0);
    v72 = BattleLogicNomal___c_TypeInfo->static_fields;
    v72->__9__27_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__27_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v72->__9__27_2, (int32_t)_9__27_2, v73, v74);
    v68 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v68->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v68);
    v68 = BattleLogicNomal___c_TypeInfo;
  }
  _9__27_3 = (System_Func_T__TResult__o *)v68->static_fields->__9__27_3;
  if ( !_9__27_3 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = BattleLogicNomal___c_TypeInfo;
    }
    v76 = (Il2CppObject *)v68->static_fields->__9;
    _9__27_3 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Int32Enum__object____ctor(_9__27_3, v76, Method_BattleLogicNomal___c__CreateCommandBattle_b__27_3__, 0);
    v77 = BattleLogicNomal___c_TypeInfo->static_fields;
    v77->__9__27_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__27_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v77->__9__27_3, (int32_t)_9__27_3, v78, v79);
  }
  v80 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
          CommandCodeBuffHash,
          (System_Func_TSource__TKey__o *)_9__27_2,
          (System_Func_TSource__TElement__o *)_9__27_3,
          (const MethodInfo_311D254 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v7 + 32) = v80;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v80, v81, v82);
  v83 = *(_QWORD *)(v7 + 40);
  v291 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
  if ( !v83 )
    goto LABEL_399;
  v84 = *(_QWORD *)(v83 + 72);
  v85 = (System_Action_object__object__o *)sub_1C32E6C(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v85,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__4__,
    0);
  v86 = (BattleCommandData_o **)(v7 + 40);
  ActorId = (__int64)actSvtBuffData;
  if ( !actSvtBuffData )
    goto LABEL_399;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    actSvtBuffData,
    v84,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v85,
    1,
    0);
  if ( !*v299 )
    goto LABEL_399;
  commandAssistId = (*v299)->fields.commandAssistId;
  v88 = (System_Action_object__object__o *)sub_1C32E6C(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v88,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__5__,
    0);
  v89 = *(_QWORD *)(v7 + 40);
  if ( !v89 )
    goto LABEL_399;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    actSvtBuffData,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v88,
    1,
    *(_DWORD *)(v89 + 88),
    0);
  ActorId = sub_1C32CC8(bool___TypeInfo, 2);
  if ( !ActorId )
    goto LABEL_399;
  v90 = ActorId;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_400;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1C32CC8(BattleServantData___TypeInfo, 1);
  if ( !ActorId )
    goto LABEL_399;
  v93 = ActorId;
  ActorId = (__int64)item;
  if ( item )
  {
    ActorId = sub_1C32D5C(item, *(_QWORD *)(*(_QWORD *)v93 + 64LL));
    if ( !ActorId )
    {
      v282 = sub_1C32EA0(0);
      sub_1C32D48(v282, 0);
    }
  }
  if ( !*(_DWORD *)(v93 + 24) )
    goto LABEL_400;
  *(_QWORD *)(v93 + 32) = item;
  sub_1C32BC4((CGThumbnailListItem_o *)(v93 + 32), (int32_t)item, v91, v92);
  *(_QWORD *)(v7 + 72) = v93;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 72), v93, v94, v95);
  v96 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_object__object____ctor(
    v96,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__6__,
    0);
  *(_QWORD *)(v7 + 64) = v96;
  v286 = v7 + 64;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 64), (int32_t)v96, v97, v98);
  v297 = sub_1C32E6C(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v297,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass27_0__CreateCommandBattle_b__7__,
    0);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_399;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v100 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C32E6C(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v100, 0);
  v102 = *(_QWORD *)(v90 + 24);
  v298 = v13;
  v296 = v90;
  if ( (int)v102 >= 1 )
  {
    v103 = 0;
    do
    {
      if ( v103 >= (unsigned int)v102 )
        goto LABEL_400;
      v104 = *(unsigned __int8 *)(v90 + v103 + 32);
      if ( *(_BYTE *)(v90 + v103 + 32) )
        v105 = 177;
      else
        v105 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v291,
                           actSvtBuffData,
                           v105,
                           *v299,
                           v101);
      if ( !v297 )
        goto LABEL_399;
      v106 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v297 + 24))(
                  *(_QWORD *)(v297 + 64),
                  v104 != 0,
                  v295,
                  *(_QWORD *)(v297 + 40));
      if ( !ActorId )
        goto LABEL_399;
      v107 = *(_QWORD *)ActorId;
      v108 = ActorId;
      v109 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v110 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v110 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v109;
          v110 += 4;
          if ( !v109 )
            goto LABEL_97;
        }
        v111 = v107 + 16LL * *v110 + 312;
      }
      else
      {
LABEL_97:
        v111 = sub_1C83438(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v112 = (*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v108, *(_QWORD *)(v111 + 8));
      v113 = v112;
      while ( 1 )
      {
        if ( !v113 )
          sub_1C32E7C(v112);
        v114 = *(_QWORD *)v113;
        v115 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
        {
          v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v116 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v115;
            v116 += 4;
            if ( !v115 )
              goto LABEL_105;
          }
          v117 = v114 + 16LL * *v116 + 312;
        }
        else
        {
LABEL_105:
          v117 = sub_1C83438(v113, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8)) & 1) == 0 )
          break;
        v118 = *(_QWORD *)v113;
        v119 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
        {
          v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v120 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v119;
            v120 += 4;
            if ( !v119 )
              goto LABEL_112;
          }
          v121 = v118 + 16LL * *v120 + 312;
        }
        else
        {
LABEL_112:
          v121 = sub_1C83438(v113, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v122 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v113, *(_QWORD *)(v121 + 8));
        if ( !v290 )
          sub_1C32E7C(v122);
        v123 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v290,
                 v122,
                 (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v123,
          (SkillLvMaster_o *)MasterData_object,
          *v299,
          v106,
          *v19,
          0,
          v100,
          v283);
      }
      v124 = *(_QWORD *)v113;
      v125 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
      {
        v126 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v126 - 1) != System_IDisposable_TypeInfo )
        {
          --v125;
          v126 += 4;
          if ( !v125 )
            goto LABEL_120;
        }
        v127 = v124 + 16LL * *v126 + 312;
      }
      else
      {
LABEL_120:
        v127 = sub_1C83438(v113, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v127)(v113, *(_QWORD *)(v127 + 8));
      v90 = v296;
      LODWORD(v102) = *(_DWORD *)(v296 + 24);
      ++v103;
    }
    while ( (__int64)v103 < (int)v102 );
    if ( (int)v102 >= 1 )
    {
      v128 = 0;
      while ( v128 < (unsigned int)v102 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v128;
        v129 = *(unsigned __int8 *)(v90 + v128 + 32);
        ActorId = sub_1C32CC8(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_399;
        v130 = *(_DWORD *)(ActorId + 24);
        v131 = (BuffList_ACTION_array *)ActorId;
        if ( v129 )
        {
          if ( !v130 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v130 == 1 )
            break;
          v132 = 120;
        }
        else
        {
          if ( !v130 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v130 == 1 )
            break;
          v132 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v132;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v297 + 24))(
                    *(_QWORD *)(v297 + 64),
                    v129 != 0,
                    v295,
                    *(_QWORD *)(v297 + 40));
        if ( !ActorId )
          goto LABEL_399;
        v133 = *(_QWORD *)ActorId;
        v134 = ActorId;
        v135 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v136 = (int *)(*(_QWORD *)(v133 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v136 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v135;
            v136 += 4;
            if ( !v135 )
              goto LABEL_142;
          }
          v137 = v133 + 16LL * *v136 + 312;
        }
        else
        {
LABEL_142:
          v137 = sub_1C83438(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v138 = (*(__int64 (__fastcall **)(__int64, _QWORD))v137)(v134, *(_QWORD *)(v137 + 8));
        if ( !v138 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v139 = *(_QWORD *)v138;
          v140 = *(unsigned __int16 *)(*(_QWORD *)v138 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v138 + 302LL) )
          {
            v141 = (int *)(*(_QWORD *)(v139 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v141 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v140;
              v141 += 4;
              if ( !v140 )
                goto LABEL_149;
            }
            v13 = v298;
            v86 = v299;
            v142 = v139 + 16LL * *v141 + 312;
          }
          else
          {
LABEL_149:
            v13 = v298;
            v86 = v299;
            v142 = sub_1C83438(v138, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v142)(v138, *(_QWORD *)(v142 + 8)) & 1) == 0 )
            break;
          v143 = *(_QWORD *)v138;
          v144 = *(unsigned __int16 *)(*(_QWORD *)v138 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v138 + 302LL) )
          {
            v145 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v145 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v144;
              v145 += 4;
              if ( !v144 )
                goto LABEL_156;
            }
            v146 = v143 + 16LL * *v145 + 312;
          }
          else
          {
LABEL_156:
            v146 = sub_1C83438(v138, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v147 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v146)(v138, *(_QWORD *)(v146 + 8));
          if ( !*v13 )
            sub_1C32E7C(0);
          AttackSideEffectBuffList_46176464 = BattleServantData__getAttackSideEffectBuffList_46176464(
                                                *v13,
                                                v131,
                                                *v86,
                                                v147,
                                                0);
          v149 = AttackSideEffectBuffList_46176464;
          if ( !AttackSideEffectBuffList_46176464 )
            sub_1C32E7C(0);
          max_length = AttackSideEffectBuffList_46176464->max_length;
          if ( (int)max_length >= 1 )
          {
            v151 = 0;
            do
            {
              if ( v151 >= (unsigned int)max_length )
                sub_1C32E84(AttackSideEffectBuffList_46176464);
              if ( !*v19 )
                sub_1C32E7C(0);
              v152 = v149->m_Items[v151];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v19, 3, 0);
              if ( !logicfunction )
                sub_1C32E7C(SideEffectActionData);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v152,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v100,
                0,
                0);
              LODWORD(max_length) = v149->max_length;
              ++v151;
            }
            while ( (__int64)v151 < (int)max_length );
          }
        }
        v155 = *(_QWORD *)v138;
        v156 = *(unsigned __int16 *)(*(_QWORD *)v138 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v138 + 302LL) )
        {
          v157 = (int *)(*(_QWORD *)(v155 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v157 - 1) != System_IDisposable_TypeInfo )
          {
            --v156;
            v157 += 4;
            if ( !v156 )
              goto LABEL_171;
          }
          v158 = v155 + 16LL * *v157 + 312;
        }
        else
        {
LABEL_171:
          v158 = sub_1C83438(v138, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v158)(v138, *(_QWORD *)(v158 + 8));
        v90 = v296;
        LODWORD(v102) = *(_DWORD *)(v296 + 24);
        v128 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v102 )
          goto LABEL_181;
      }
LABEL_400:
      sub_1C32E84(ActorId);
    }
  }
LABEL_181:
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_399;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_399;
  ActorId = (__int64)BattleData__getFieldServantList((BattleData_o *)ActorId, 0, 0);
  if ( !ActorId )
    goto LABEL_399;
  v159 = *(_QWORD *)(ActorId + 24);
  v160 = ActorId;
  if ( (int)v159 >= 1 )
  {
    v161 = 0;
    while ( v161 < (unsigned int)v159 )
    {
      ActorId = *(_QWORD *)(v160 + 32 + 8 * v161);
      if ( ActorId )
        BattleServantData__UpdateConditionBuffIcon((BattleServantData_o *)ActorId, 1, 1, 0);
      LODWORD(v159) = *(_DWORD *)(v160 + 24);
      if ( (__int64)++v161 >= (int)v159 )
        goto LABEL_190;
    }
    goto LABEL_400;
  }
LABEL_190:
  ActorId = (__int64)*v86;
  if ( !*v86 )
    goto LABEL_399;
  BattleCommandData__SetOverwriteRatesIndex((BattleCommandData_o *)ActorId, 0);
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1C32E6C(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0, 0);
  if ( !v297 )
    goto LABEL_399;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v297 + 24))(
              *(_QWORD *)(v297 + 64),
              0,
              0,
              *(_QWORD *)(v297 + 40));
  if ( !ActorId )
    goto LABEL_399;
  v162 = *(_QWORD *)ActorId;
  v163 = ActorId;
  v164 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v165 = (int *)(*(_QWORD *)(v162 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v165 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v164;
      v165 += 4;
      if ( !v164 )
        goto LABEL_197;
    }
    v166 = v162 + 16LL * *v165 + 312;
  }
  else
  {
LABEL_197:
    v166 = sub_1C83438(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v167 = (*(__int64 (__fastcall **)(__int64, _QWORD))v166)(v163, *(_QWORD *)(v166 + 8));
  v168 = v167;
  v169 = 0;
  while ( 1 )
  {
    if ( !v168 )
      sub_1C32E7C(v167);
    v170 = *(_QWORD *)v168;
    v171 = *(unsigned __int16 *)(*(_QWORD *)v168 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v168 + 302LL) )
    {
      v172 = (int *)(*(_QWORD *)(v170 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v172 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v171;
        v172 += 4;
        if ( !v171 )
          goto LABEL_205;
      }
      v173 = v170 + 16LL * *v172 + 312;
    }
    else
    {
LABEL_205:
      v173 = sub_1C83438(v168, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v173)(v168, *(_QWORD *)(v173 + 8)) & 1) == 0 )
      break;
    v174 = *(_QWORD *)v168;
    v175 = *(unsigned __int16 *)(*(_QWORD *)v168 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v168 + 302LL) )
    {
      v176 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v176 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v175;
        v176 += 4;
        if ( !v175 )
          goto LABEL_212;
      }
      v177 = v174 + 16LL * *v176 + 312;
    }
    else
    {
LABEL_212:
      v177 = sub_1C83438(v168, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v178 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v177)(v168, *(_QWORD *)(v177 + 8));
    v179 = this->fields.logic;
    if ( !v179 )
      sub_1C32E7C(0);
    DamageList = BattleLogic__GetDamageList(v179, *v13, v178, *v86, processArgsa, *v19, 0);
    v181 = DamageList;
    if ( v178 == (BattleServantData_o *)item )
      v169 = DamageList;
    if ( !v178 )
      sub_1C32E7C(DamageList);
    buffData = v178->fields.buffData;
    if ( !buffData )
      sub_1C32E7C(DamageList);
    if ( !buffData->fields.isNoDamage )
    {
      v183 = *v19;
      v184 = BattleBuffData__UseProgressingDoNotAct(v178->fields.buffData, v178, 0, 0);
      if ( !v183 )
        sub_1C32E7C(v184);
      BattleActionData__addSideEffectActionData(v183, v184, 1, 0);
    }
    if ( !*v13 )
      sub_1C32E7C(0);
    v185 = BattleServantData__checkPlayer(*v13, 0);
    v186 = *v19;
    if ( v185 )
    {
      if ( !v186 )
        sub_1C32E7C(v185);
      if ( !v186->fields.isCounter )
      {
        if ( !*v13 )
          sub_1C32E7C(v185);
        v178->fields.overkillTargetId = (*v13)->fields.uniqueId;
      }
    }
    else if ( !v186 )
    {
      sub_1C32E7C(v185);
    }
    BattleActionData__setDamageData(v186, v181, 0, 0, 0, 0);
  }
  v187 = *(_QWORD *)v168;
  v188 = *(unsigned __int16 *)(*(_QWORD *)v168 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v168 + 302LL) )
  {
    v189 = (int *)(*(_QWORD *)(v187 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v189 - 1) != System_IDisposable_TypeInfo )
    {
      --v188;
      v189 += 4;
      if ( !v188 )
        goto LABEL_234;
    }
    v190 = v187 + 16LL * *v189 + 312;
  }
  else
  {
LABEL_234:
    v190 = sub_1C83438(v168, System_IDisposable_TypeInfo, 0);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v190)(v168, *(_QWORD *)(v190 + 8));
  if ( !*(_QWORD *)v286 )
    goto LABEL_399;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v286 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v286 + 64LL),
    item,
    *(_QWORD *)(*(_QWORD *)v286 + 40LL));
  ActorId = (__int64)*v86;
  if ( !*v86 )
    goto LABEL_399;
  v191 = *v19;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0);
  if ( !v191 )
    goto LABEL_399;
  v191->fields.type = ActorId;
  ActorId = (__int64)*v19;
  if ( !*v19 )
    goto LABEL_399;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v86, 0);
  v192 = *v86;
  if ( !*v86 )
    goto LABEL_399;
  v193 = *v19;
  if ( !*v19 )
    goto LABEL_399;
  v193->fields.actionIndex = v192->fields.actionIndex;
  ActorId = (__int64)*v13;
  if ( !*v13 )
    goto LABEL_399;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v192, 0);
  v193->fields.motionId = ActorId;
  if ( !v169 )
    goto LABEL_399;
  v194 = *v19;
  ActorId = BattleActionData_DamageData__getAttackCount(v169, 0);
  if ( !v194 )
    goto LABEL_399;
  v194->fields.attackcount = ActorId;
  v195 = this->fields.data;
  v196 = v296;
  if ( !v195 )
    goto LABEL_399;
  perf = v195->fields.perf;
  if ( !perf )
    goto LABEL_399;
  if ( !*v86 )
    goto LABEL_399;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_399;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v86)->fields.actionIndex,
    0);
  if ( !*v13 )
    goto LABEL_399;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_399;
  v198 = *v19;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v13)->fields.uniqueId, targetId, 0);
  if ( !v198 )
    goto LABEL_399;
  v198->fields.prevattackme = ActorId & 1;
  v200 = *(_QWORD *)(v296 + 24);
  if ( (int)v200 >= 1 )
  {
    v201 = 0;
    do
    {
      if ( v201 >= (unsigned int)v200 )
        goto LABEL_400;
      v202 = *(unsigned __int8 *)(v196 + v201 + 32);
      if ( *(_BYTE *)(v196 + v201 + 32) )
        v203 = 178;
      else
        v203 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v291,
                                    actSvtBuffData,
                                    v203,
                                    *v299,
                                    v199);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v297 + 24))(
                  *(_QWORD *)(v297 + 64),
                  v202,
                  v295,
                  *(_QWORD *)(v297 + 40));
      if ( !ActorId )
        goto LABEL_399;
      v205 = *(_QWORD *)ActorId;
      v206 = ActorId;
      v207 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v208 = (int *)(*(_QWORD *)(v205 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v208 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v207;
          v208 += 4;
          if ( !v207 )
            goto LABEL_263;
        }
        v209 = v205 + 16LL * *v208 + 312;
      }
      else
      {
LABEL_263:
        v209 = sub_1C83438(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v210 = (*(__int64 (__fastcall **)(__int64, _QWORD))v209)(v206, *(_QWORD *)(v209 + 8));
      v211 = v210;
      while ( 1 )
      {
        if ( !v211 )
          sub_1C32E7C(v210);
        v212 = *(_QWORD *)v211;
        v213 = *(unsigned __int16 *)(*(_QWORD *)v211 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v211 + 302LL) )
        {
          v214 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v214 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v213;
            v214 += 4;
            if ( !v213 )
              goto LABEL_271;
          }
          v215 = v212 + 16LL * *v214 + 312;
        }
        else
        {
LABEL_271:
          v215 = sub_1C83438(v211, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v215)(v211, *(_QWORD *)(v215 + 8)) & 1) == 0 )
          break;
        v216 = *(_QWORD *)v211;
        v217 = *(unsigned __int16 *)(*(_QWORD *)v211 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v211 + 302LL) )
        {
          v218 = (int *)(*(_QWORD *)(v216 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v218 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v217;
            v218 += 4;
            if ( !v217 )
              goto LABEL_278;
          }
          v219 = v216 + 16LL * *v218 + 312;
        }
        else
        {
LABEL_278:
          v219 = sub_1C83438(v211, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v220 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v219)(v211, *(_QWORD *)(v219 + 8));
        if ( !v290 )
          sub_1C32E7C(v220);
        v221 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v290,
                 v220,
                 (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v221,
          (SkillLvMaster_o *)MasterData_object,
          *v299,
          TargetCommandCodeBuffList,
          *v19,
          1,
          v100,
          v283);
      }
      v222 = *(_QWORD *)v211;
      v223 = *(unsigned __int16 *)(*(_QWORD *)v211 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v211 + 302LL) )
      {
        v224 = (int *)(*(_QWORD *)(v222 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v224 - 1) != System_IDisposable_TypeInfo )
        {
          --v223;
          v224 += 4;
          if ( !v223 )
            goto LABEL_286;
        }
        v225 = v222 + 16LL * *v224 + 312;
      }
      else
      {
LABEL_286:
        v225 = sub_1C83438(v211, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v225)(v211, *(_QWORD *)(v225 + 8));
      v196 = v296;
      LODWORD(v200) = *(_DWORD *)(v296 + 24);
      ++v201;
    }
    while ( (__int64)v201 < (int)v200 );
    if ( (int)v200 >= 1 )
    {
      v226 = 0;
      while ( v226 < (unsigned int)v200 )
      {
        v227 = *(unsigned __int8 *)(v196 + v226 + 32);
        ActorId = sub_1C32CC8(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_399;
        v228 = *(_DWORD *)(ActorId + 24);
        v229 = (BuffList_ACTION_array *)ActorId;
        if ( v227 )
        {
          if ( !v228 )
            goto LABEL_400;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v228 == 1 )
            goto LABEL_400;
          v230 = 121;
        }
        else
        {
          if ( !v228 )
            goto LABEL_400;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v228 == 1 )
            goto LABEL_400;
          v230 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v230;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v297 + 24))(
                    *(_QWORD *)(v297 + 64),
                    v227 != 0,
                    v295,
                    *(_QWORD *)(v297 + 40));
        if ( !ActorId )
          goto LABEL_399;
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
              goto LABEL_308;
          }
          v235 = v231 + 16LL * *v234 + 312;
        }
        else
        {
LABEL_308:
          v235 = sub_1C83438(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v236 = (*(__int64 (__fastcall **)(__int64, _QWORD))v235)(v232, *(_QWORD *)(v235 + 8));
        if ( !v236 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v237 = *(_QWORD *)v236;
          v238 = *(unsigned __int16 *)(*(_QWORD *)v236 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v236 + 302LL) )
          {
            v239 = (int *)(*(_QWORD *)(v237 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v239 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v238;
              v239 += 4;
              if ( !v238 )
                goto LABEL_315;
            }
            v240 = v237 + 16LL * *v239 + 312;
          }
          else
          {
LABEL_315:
            v240 = sub_1C83438(v236, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v240)(v236, *(_QWORD *)(v240 + 8)) & 1) == 0 )
            break;
          v241 = *(_QWORD *)v236;
          v242 = *(unsigned __int16 *)(*(_QWORD *)v236 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v236 + 302LL) )
          {
            v243 = (int *)(*(_QWORD *)(v241 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v243 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v242;
              v243 += 4;
              if ( !v242 )
                goto LABEL_322;
            }
            v244 = v241 + 16LL * *v243 + 312;
          }
          else
          {
LABEL_322:
            v244 = sub_1C83438(v236, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v245 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v244)(v236, *(_QWORD *)(v244 + 8));
          if ( !*v298 )
            sub_1C32E7C(0);
          v246 = BattleServantData__getAttackSideEffectBuffList_46176464(*v298, v229, *v299, v245, 0);
          v247 = v246;
          if ( !v246 )
            sub_1C32E7C(0);
          v248 = v246->max_length;
          if ( (int)v248 >= 1 )
          {
            v249 = 0;
            do
            {
              if ( v249 >= (unsigned int)v248 )
                sub_1C32E84(v246);
              v250 = this->fields.logicfunction;
              if ( !v250 )
                sub_1C32E7C(0);
              BattleLogicFunction__SetSideEffectBuff(
                v250,
                (SkillLvMaster_o *)MasterData_object,
                *v19,
                v247->m_Items[v249],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v100,
                1,
                0);
              LODWORD(v248) = v247->max_length;
              ++v249;
            }
            while ( (__int64)v249 < (int)v248 );
          }
        }
        v251 = *(_QWORD *)v236;
        v252 = *(unsigned __int16 *)(*(_QWORD *)v236 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v236 + 302LL) )
        {
          v253 = (int *)(*(_QWORD *)(v251 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v253 - 1) != System_IDisposable_TypeInfo )
          {
            --v252;
            v253 += 4;
            if ( !v252 )
              goto LABEL_336;
          }
          v254 = v251 + 16LL * *v253 + 312;
        }
        else
        {
LABEL_336:
          v254 = sub_1C83438(v236, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v254)(v236, *(_QWORD *)(v254 + 8));
        v196 = v296;
        LODWORD(v200) = *(_DWORD *)(v296 + 24);
        if ( (__int64)++v226 >= (int)v200 )
          goto LABEL_345;
      }
      goto LABEL_400;
    }
  }
LABEL_345:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v297 + 24))(
              *(_QWORD *)(v297 + 64),
              0,
              0,
              *(_QWORD *)(v297 + 40));
  if ( !ActorId )
    goto LABEL_399;
  v255 = *(_QWORD *)ActorId;
  v256 = ActorId;
  v257 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v258 = (int *)(*(_QWORD *)(v255 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v258 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v257;
      v258 += 4;
      if ( !v257 )
        goto LABEL_350;
    }
    v259 = v255 + 16LL * *v258 + 312;
  }
  else
  {
LABEL_350:
    v259 = sub_1C83438(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v260 = (*(__int64 (__fastcall **)(__int64, _QWORD))v259)(v256, *(_QWORD *)(v259 + 8));
  v261 = v260;
  while ( 1 )
  {
    if ( !v261 )
      sub_1C32E7C(v260);
    v262 = *(_QWORD *)v261;
    v263 = *(unsigned __int16 *)(*(_QWORD *)v261 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v261 + 302LL) )
    {
      v264 = (int *)(*(_QWORD *)(v262 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v264 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v263;
        v264 += 4;
        if ( !v263 )
          goto LABEL_358;
      }
      v265 = v262 + 16LL * *v264 + 312;
    }
    else
    {
LABEL_358:
      v265 = sub_1C83438(v261, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v265)(v261, *(_QWORD *)(v265 + 8)) & 1) == 0 )
      break;
    v266 = *(_QWORD *)v261;
    v267 = *(unsigned __int16 *)(*(_QWORD *)v261 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v261 + 302LL) )
    {
      v268 = (int *)(*(_QWORD *)(v266 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v268 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v267;
        v268 += 4;
        if ( !v267 )
          goto LABEL_365;
      }
      v269 = v266 + 16LL * *v268 + 312;
    }
    else
    {
LABEL_365:
      v269 = sub_1C83438(v261, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v270 = (*(__int64 (__fastcall **)(__int64, _QWORD))v269)(v261, *(_QWORD *)(v269 + 8));
    if ( !*v298 )
      sub_1C32E7C(v270);
    if ( !v270 )
      sub_1C32E7C(0);
    if ( !this->fields.logic )
      sub_1C32E7C(v270);
    v260 = BattleLogic__SetDamageSideEffect(
             this->fields.logic,
             *v19,
             (*v298)->fields.uniqueId,
             *(_DWORD *)(v270 + 24),
             *v299,
             0);
  }
  v271 = *(_QWORD *)v261;
  v272 = *(unsigned __int16 *)(*(_QWORD *)v261 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v261 + 302LL) )
  {
    v273 = (int *)(*(_QWORD *)(v271 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v273 - 1) != System_IDisposable_TypeInfo )
    {
      --v272;
      v273 += 4;
      if ( !v272 )
        goto LABEL_375;
    }
    v274 = v271 + 16LL * *v273 + 312;
  }
  else
  {
LABEL_375:
    v274 = sub_1C83438(v261, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v274)(v261, *(_QWORD *)(v274 + 8));
  ActorId = *v285;
  if ( !*v285 )
    goto LABEL_399;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v300,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  i = v300;
  while ( 1 )
  {
    v275 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v275 )
      break;
    current = i.fields._current;
    if ( !i.fields._current )
      sub_1C32E7C(v275);
    klass = i.fields._current[51].klass;
    if ( !klass )
      sub_1C32E7C(v275);
    LOBYTE(klass->_1.nestedTypes) = 0;
    if ( v287->fields.isCanCounterTask )
    {
      if ( !*v298 )
        sub_1C32E7C(v275);
      v278 = this->fields.data;
      if ( !v278 )
        sub_1C32E7C(0);
      BattleData__SetWasAttackTargetId(v278, (*v298)->fields.uniqueId, (int32_t)current[1].monitor, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !*(_QWORD *)v286 )
    goto LABEL_399;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v286 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v286 + 64LL),
              item,
              *(_QWORD *)(*(_QWORD *)v286 + 40LL));
  v279 = *v19;
  if ( !*v19 )
    goto LABEL_399;
  v279->fields.isForcedSpeedOne = v287->fields.isForcedSpeedOne;
  v279->fields.isAllAttack = v284;
  if ( !*v298 )
    goto LABEL_399;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_399;
  BattleData__setCommandAttack((BattleData_o *)ActorId, (*v298)->fields.uniqueId, targetId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_399;
  BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0),
        v280 = this->fields.logic,
        v281 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1C32E6C(BattleAddSkillTaskAfterCommandAttack_TypeInfo),
        BattleAddSkillTaskAfterCommandAttack___ctor(v281, 0),
        !v280)
    || (BattleLogic__AddSkillTask(v280, (BattleAddSkillTaskAroundTargetTask_o *)v281, v287, targetId, 0),
        (ActorId = *v285) == 0) )
  {
LABEL_399:
    sub_1C32E7C(ActorId);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v300,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  for ( i = v300;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
        BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C32E7C(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  ((void (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v287->klass->vtable._10_SetAttacked.methodPtr)(
    v287,
    this->fields.data,
    1,
    v287->klass->vtable._10_SetAttacked.method);
  return *v19;
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
  const MethodInfo *v13; // x3
  int32_t v14; // w1

  if ( (byte_4C3AAC4 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_8752/*"MOTION_DO_NOT_ACT"*/);
    byte_4C3AAC4 = 1;
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
    v11 = sub_1C32E6C(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v14 = StringLiteral_8752/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 72) = StringLiteral_8752/*"MOTION_DO_NOT_ACT"*/;
        sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 72), v14, v12, v13);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 64) = BattleCommandData__get_type((BattleCommandData_o *)data, 0);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_1C32E7C(data);
  }
  return (BattleActionData_o *)v11;
}


BattleActionData_o *BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0

  if ( (byte_4C3AAC3 & 1) == 0 )
  {
    sub_1C32C20(&ProgressIntervalTurnActionData_TypeInfo);
    byte_4C3AAC3 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1C32E6C(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1C32E7C(data);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0, (BattleActionData_o *)v4, 0);
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
  const MethodInfo *v18; // x3

  if ( (byte_4C3AAB8 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6431/*"FOCUS_UNDER"*/);
    sub_1C32C20(&StringLiteral_6429/*"FOCUS_CENTER"*/);
    sub_1C32C20(&StringLiteral_6433/*"FOCUS_UP"*/);
    byte_4C3AAB8 = 1;
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
    v8 = StringLiteral_6429/*"FOCUS_CENTER"*/;
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
        v8 = StringLiteral_6429/*"FOCUS_CENTER"*/;
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
      v14 = &StringLiteral_6431/*"FOCUS_UNDER"*/;
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
      v14 = &StringLiteral_6433/*"FOCUS_UP"*/;
    }
    v8 = *v14;
    v12->fields.globaltargetId = uniqueID;
LABEL_39:
    v6 = sub_1C32E6C(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0);
    if ( v6 )
    {
      v16 = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = v16;
      *(_DWORD *)(v6 + 36) = v16;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0);
      *(_QWORD *)(v6 + 72) = v8;
      sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 72), v8, v17, v18);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_1C32E7C(data);
  }
  return (BattleActionData_o *)v6;
}


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
  if ( (byte_4C3AAAD & 1) == 0 )
  {
    this = (BattleLogicNomal_o *)sub_1C32C20(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4C3AAAD = 1;
  }
  logic = v5->fields.logic;
  if ( !logic )
    sub_1C32E7C(this);
  logic->fields.isCheckInterruptMotionTask = 1;
  v7 = Method_System_Array_Empty_BattleLogicTask___;
  v8 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v8 )
  {
    sub_1C83390(Method_System_Array_Empty_BattleLogicTask___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C83334(inited);
  return **(BattleLogicTask_array ***)(v10 + 184);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AAAE & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_TypeInfo);
    byte_4C3AAAE = 1;
  }
  v3 = sub_1C32E6C(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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
  BattleLogicNomal___c_c *v12; // x0
  System_Comparison_T__o *_9__25_0; // x20
  Il2CppObject *v14; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3AAB0 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__25_0__);
    sub_1C32C20(&BattleLogicNomal___c_TypeInfo);
    byte_4C3AAB0 = 1;
  }
  value = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_342452C *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0), !v10) )
  {
LABEL_16:
    sub_1C32E7C(CommandCardBuffArray);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v12 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v12 = BattleLogicNomal___c_TypeInfo;
  }
  _9__25_0 = (System_Comparison_T__o *)v12->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleLogicNomal___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__25_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__25_0,
      v14,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__25_0__,
      0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__25_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v16, v17);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v10,
    _9__25_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
}


bool BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C32E7C(0);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C32E7C(0);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex - 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 0, v4);
}


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
    sub_1C32E7C(data);
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
  if ( (byte_4C3AAB9 & 1) == 0 )
  {
    buff = (BattleBuffData_BuffData_o *)sub_1C32C20(&BuffList_TypeInfo);
    byte_4C3AAB9 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(buff);
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

  if ( (byte_4C3AABB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AABB = 1;
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
          sub_1C32E7C(data);
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
  long double inited; // q0
  struct BattleLogic_o *logic; // x8
  struct BattleLogic_o *v9; // x8
  BattleLogicReaction_o *logicReaction; // x19
  PlayerComboEndServantReactTaskCreator_o *v11; // x20
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4C3AAAC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1C32C20(&PlayerComboEndServantReactTaskCreator_TypeInfo);
    byte_4C3AAAC = 1;
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
        v9 = this->fields.logic;
        if ( v9 )
        {
          logicReaction = v9->fields.logicReaction;
          v11 = (PlayerComboEndServantReactTaskCreator_o *)sub_1C32E6C(PlayerComboEndServantReactTaskCreator_TypeInfo);
          PlayerComboEndServantReactTaskCreator___ctor(v11, 0);
          if ( v11 )
          {
            IsComboEnd = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v11, 0);
            if ( logicReaction )
              return BattleLogicReaction__CreateTasks(logicReaction, IsComboEnd, 0);
          }
        }
      }
LABEL_20:
      sub_1C32E7C(IsComboEnd);
    }
  }
  v13 = Method_System_Array_Empty_BattleLogicTask___;
  v14 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v14 )
  {
    sub_1C83390(Method_System_Array_Empty_BattleLogicTask___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v15 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v15);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C83334(inited);
  return **(BattleLogicTask_array ***)(v16 + 184);
}


void BattleLogicNomal__UpdateEndTurnBuff(
        BattleLogicNomal_o *this,
        System_Int32_array *prevFieldIndiv,
        const MethodInfo *method)
{
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

  if ( (byte_4C3AABC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4C3AABC = 1;
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
      sub_1C83390(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C83334(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !prevFieldIndiv )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C83390(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C83334(inited);
    prevFieldIndiv = **(System_Int32_array ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv,
          (const MethodInfo_3116FE8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0);
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
    sub_1C32E7C(data);
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
  __int64 v8; // x21
  int v9; // w8
  unsigned int v10; // w27
  BattleServantData_o *v11; // x22
  int v12; // w8
  __int64 v13; // x23
  unsigned int v14; // w28
  __int64 v15; // x24
  BattleSkillInfoData_o *v16; // x25
  __int64 v17; // x8
  __int64 v18; // x8
  BattleLogicTask_o *v19; // x24
  BattleLogic_o *logic; // x25
  __int64 v21; // x26
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  __int64 v31; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C3AAC0 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask___TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3AAC0 = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v8 = Instance;
  if ( !Instance )
    goto LABEL_44;
  v9 = *(_DWORD *)(Instance + 24);
  if ( v9 >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= v9 )
        goto LABEL_45;
      v11 = *(BattleServantData_o **)(v8 + 8LL * (int)v10 + 32);
      if ( !v11 )
        goto LABEL_44;
      if ( !v11->fields.status )
      {
        Instance = BattleServantData__isAlive(v11, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v11, 0);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_44;
          v12 = *(_DWORD *)(Instance + 24);
          v13 = Instance;
          if ( v12 >= 1 )
          {
            v14 = 0;
            while ( v14 < v12 )
            {
              v15 = *(_QWORD *)(v13 + 8LL * (int)v14 + 32);
              v16 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v16, 0);
              if ( !v16 )
                goto LABEL_44;
              v16->fields.svtUniqueId = v11->fields.uniqueId;
              if ( !v15 )
                goto LABEL_44;
              v17 = *(_QWORD *)(v15 + 40);
              if ( !v17 )
                goto LABEL_44;
              if ( !*(_DWORD *)(v17 + 24) )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v16->klass->vtable._4_set_skillId.methodPtr)(
                           v16,
                           *(unsigned int *)(v17 + 32),
                           v16->klass->vtable._4_set_skillId.method);
              v18 = *(_QWORD *)(v15 + 40);
              if ( !v18 )
                goto LABEL_44;
              if ( *(_DWORD *)(v18 + 24) <= 1u )
                break;
              v16->fields.skilllv = *(_DWORD *)(v18 + 36);
              v19 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v19, 0);
              if ( !v19 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v19, v16, 0, 0);
              logic = this->fields.logic;
              Instance = sub_1C32CC8(BattleLogicTask___TypeInfo, 1);
              if ( !Instance )
                goto LABEL_44;
              v21 = Instance;
              Instance = sub_1C32D5C(v19, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v31 = sub_1C32EA0(0);
                sub_1C32D48(v31, 0);
              }
              if ( !*(_DWORD *)(v21 + 24) )
                break;
              *(_QWORD *)(v21 + 32) = v19;
              sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v19, v22, v23);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v11,
                (BattleBuffData_BuffData_array *)v13,
                (BattleLogicTask_array *)v21,
                0);
              if ( !v6 )
                goto LABEL_44;
              items = v6->fields._items;
              v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v19,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v29[4] = (Il2CppClass *)v19;
                sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v24, v25);
              }
              v12 = *(_DWORD *)(v13 + 24);
              if ( (int)++v14 >= v12 )
                goto LABEL_38;
            }
LABEL_45:
            sub_1C32E84(Instance);
          }
LABEL_38:
          Instance = (__int64)v11->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
        }
      }
      v9 = *(_DWORD *)(v8 + 24);
    }
    while ( (int)++v10 < v9 );
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
    sub_1C32E7C(Instance);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v19; // x0
  struct System_Int32_array *vals; // x8
  int max_length; // w9
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v23; // x29
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x26
  BattleActionData_o *v27; // x28
  DataVals_array *DataValsList; // x0
  BattleLogicFunction_o *v29; // x0
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v32; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+60h] [xbp-80h] BYREF

  v32 = this;
  if ( (byte_4C3AAC5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4C3AAC5 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !commandCodeBuffList )
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v34.fields._current = v33.fields._current;
  if ( isCommandAfter )
    v15 = 1;
  else
    v15 = 3;
  *(_OWORD *)&v34.fields._list = *(_OWORD *)&v33.fields._list;
  type = v15;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_1C32E7C(v16);
    current = (BattleBuffData_BuffData_o *)v34.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1C32E7C(IsEnableCommandCode);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1C32E7C(IsEnableCommandCode);
    v19 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, const MethodInfo *))checkInvokeBuff->klass->vtable._4_IsInvoke.methodPtr)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass->vtable._4_IsInvoke.method);
    if ( (v19 & 1) != 0 )
    {
      if ( arg == 0 || !isCommandAfter )
      {
        if ( !current )
          sub_1C32E7C(v19);
        vals = current->fields.vals;
        if ( !vals )
          sub_1C32E7C(v19);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1C32E84(v19);
        if ( max_length == 1 )
          sub_1C32E84(v19);
        if ( !skillLvMst )
          sub_1C32E7C(v19);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[0], vals->m_Items[1], 0);
        v23 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1C32E7C(Entity);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1C32E7C(Entity);
          logicfunction = v32->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0);
          funcId = v23->fields.funcId;
          v27 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v23, 0);
          if ( !logicfunction )
            sub_1C32E7C(DataValsList);
          BattleLogicFunction__procList(
            logicfunction,
            v27,
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
        v29 = v32->fields.logicfunction;
        if ( !v29 )
          sub_1C32E7C(0);
        BattleLogicFunction__SetSideEffectBuff(
          v29,
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
    &v34,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleActionData_o *BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleData_o *data; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  BattleServantData_o *ServantData; // x0

  if ( (byte_4C3AAB2 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&StringLiteral_8742/*"MOTION_BACK"*/);
    byte_4C3AAB2 = 1;
  }
  v5 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 32) = uniqueId,
        v9 = StringLiteral_8742/*"MOTION_BACK"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_8742/*"MOTION_BACK"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 72), v9, v7, v8),
        (data = this->fields.data) == 0) )
  {
    sub_1C32E7C(data);
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
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
  if ( !data )
    goto LABEL_21;
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
        goto LABEL_22;
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
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0);
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        v10 = (int)data;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0);
        if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v10, 1, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
LABEL_22:
            sub_1C32E84(data);
          data = (BattleData_o *)p_rootfsm[v7];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0, 0);
        }
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        return 0;
    }
LABEL_21:
    sub_1C32E7C(data);
  }
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
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *v13; // x20
  Il2CppObject *v14; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3AABF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C32C20(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__45_0__);
    sub_1C32C20(&BattleLogicNomal___c_TypeInfo);
    byte_4C3AABF = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_31;
  data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0);
  if ( !data )
    goto LABEL_31;
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
        goto LABEL_32;
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
          goto LABEL_32;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0);
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_32;
        v11 = data;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0);
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_32;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        data = BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v11, 1, 0);
        if ( (data & 1) != 0 )
        {
          if ( v9 >= *(unsigned int *)(v7 + 24) )
LABEL_32:
            sub_1C32E84(data);
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
LABEL_31:
    sub_1C32E7C(data);
  }
LABEL_22:
  if ( v8 )
    goto LABEL_31;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v5->fields.aiNpcDataList;
  data = (__int64)BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    data = (__int64)BattleLogicNomal___c_TypeInfo;
  }
  v13 = *(System_Action_object__o **)(*(_QWORD *)(data + 184) + 72LL);
  if ( !v13 )
  {
    if ( !*(_DWORD *)(data + 224) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = (__int64)BattleLogicNomal___c_TypeInfo;
    }
    v14 = **(Il2CppObject ***)(data + 184);
    v13 = (System_Action_object__o *)sub_1C32E6C(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(v13, v14, Method_BattleLogicNomal___c__createBuffAddPlayer_b__45_0__, 0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Action_AiNpcBattleServantData__o *)v13;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)v13, v16, v17);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v13,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0;
}


BattleActionData_o *BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 isBuster; // x0
  struct System_Int32_array *targetIdlist; // x23
  __int64 v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int v11; // w8
  int32_t v12; // w1
  CGThumbnailListItem_o *v13; // x0
  System_Array_o *v14; // x22
  System_RuntimeFieldHandle_o v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 *v18; // x8
  __int64 v19; // x1
  il2cpp_array_size_t max_length; // x8
  char v21; // w21
  unsigned __int64 v22; // x22
  System_Array_o *v24; // x22
  System_RuntimeFieldHandle_o v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C3AAB3 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&FunctionEntity_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_1C32C20(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_1C32C20(&StringLiteral_6415/*"FIELD_PLAYER"*/);
    sub_1C32C20(&StringLiteral_6414/*"FIELD_ENEMY"*/);
    byte_4C3AAB3 = 1;
  }
  v5 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v8 = sub_1C32E6C(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v8, 0);
  if ( BattleLogicTask__isArts(task, 0) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0);
    isBuster = sub_1C32CC8(int___TypeInfo, 2);
    if ( isBuster )
    {
      v11 = *(_DWORD *)(isBuster + 24);
      v12 = isBuster;
      if ( !v11 || (*(_DWORD *)(isBuster + 32) = 102, v11 == 1) )
LABEL_30:
        sub_1C32E84(isBuster);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v8 )
      {
        *(_QWORD *)(v8 + 32) = isBuster;
        v13 = (CGThumbnailListItem_o *)(v8 + 32);
LABEL_14:
        sub_1C32BC4(v13, v12, v9, v10);
        v18 = &StringLiteral_6415/*"FIELD_PLAYER"*/;
LABEL_15:
        v19 = *v18;
        *(_QWORD *)(v5 + 72) = *v18;
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 72), v19, v16, v17);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1C32E7C(isBuster);
  }
  if ( BattleLogicTask__isQuick(task, 0) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0);
    v14 = (System_Array_o *)sub_1C32CC8(int___TypeInfo, 3);
    v15.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v14, v15, 0);
    if ( !v8 )
      goto LABEL_29;
    *(_QWORD *)(v8 + 32) = v14;
    v13 = (CGThumbnailListItem_o *)(v8 + 32);
    v12 = (int)v14;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v5, 0);
    v24 = (System_Array_o *)sub_1C32CC8(int___TypeInfo, 3);
    v25.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v24, v25, 0);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 32) = v24;
      sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v24, v26, v27);
      v18 = &StringLiteral_6414/*"FIELD_ENEMY"*/;
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
  v21 = 0;
  v22 = 0;
  do
  {
    if ( v22 >= (unsigned int)max_length )
      goto LABEL_30;
    isBuster = (__int64)this->fields.data;
    if ( !isBuster )
      goto LABEL_29;
    isBuster = (__int64)BattleData__getServantData((BattleData_o *)isBuster, targetIdlist->m_Items[v22], 0);
    LODWORD(max_length) = targetIdlist->max_length;
    ++v22;
    v21 |= isBuster != 0;
  }
  while ( (__int64)v22 < (int)max_length );
  if ( (v21 & 1) != 0 )
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
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_1C32E7C(v5);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0);
}


BattleActionData_o *BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x25
  __int64 Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleData_o *data; // x8
  BattleLogicNomal_Fields *p_fields; // x19
  System_Int32_array *QuestIndividualities; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_int__o *v16; // x23
  int v17; // w8
  __int64 v18; // x28
  unsigned int v19; // w20
  __int64 v20; // x21
  __int64 *v21; // x21
  __int64 v22; // t1
  BattleBuffData_BuffData_array *v23; // x29
  unsigned int v24; // w8
  int32_t v25; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  BattleData_o *v29; // x21
  struct BattleData_o *v30; // x8
  __int64 v31; // x28
  unsigned int v32; // w26
  System_Collections_Generic_List_object__o *v33; // x29
  __int64 v34; // x23
  BattleServantData_o *v35; // x21
  __int64 *v36; // x23
  BattleServantData_o *v37; // t1
  char v38; // w20
  System_Int32_array *v39; // x25
  BattleLogic_o *logic; // x27
  System_Func_object__bool__o *v41; // x24
  int v42; // w21
  bool v43; // w3
  char v44; // w21
  Il2CppObject *v45; // x2
  BattleServantData_o *v46; // x21
  char v47; // w20
  System_Int32_array *v48; // x24
  BattleLogic_o *v49; // x25
  System_Func_object__bool__o *v50; // x27
  int32_t v51; // w21
  System_Object_array *v52; // x2
  int32_t v53; // w1
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct BaseBattleEvent_o *battleEvent; // x21
  struct BattleData_o *v58; // x8
  struct BattlePerformance_o *perf; // x9
  System_Collections_Generic_List_object__o *aiNpcDataList; // x21
  System_Action_object__o *v61; // x26
  const MethodInfo *v62; // x2
  struct BattleData_o *v63; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *value; // x24
  int32_t key; // w25
  int monitor; // w9
  int32_t v68; // w8
  char v69; // w23
  BattleBuffData_BuffData_o *v70; // x28
  BattleSkillInfoData_o *v71; // x26
  __int64 v72; // x0
  struct System_Int32_array *vals; // x8
  __int64 v74; // x0
  struct System_Int32_array *v75; // x8
  BattleServantData_o *ServantData; // x27
  int32_t v77; // w1
  SkillLvEntity_o *v78; // x0
  SkillLvEntity_o *v79; // x21
  _BOOL8 v80; // x0
  BattleLogic_o *v81; // x0
  int32_t v82; // w29
  __int64 v83; // x0
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v87; // x0
  System_Collections_ICollection_o *v88; // x0
  System_Collections_ICollection_o *v89; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v92; // x0
  int32_t v93; // w24
  Il2CppObject *v94; // x23
  BuffEntity_o *v95; // x0
  BattleServantData_o *v96; // x21
  BattleBuffData_CheckIndividualitiesData_o *v97; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v99; // w8
  int32_t v100; // w9
  BattleBuffData_BuffData_o *v101; // x26
  BattleSkillInfoData_o *v102; // x27
  __int64 v103; // x0
  struct System_Int32_array *v104; // x8
  __int64 v105; // x0
  struct System_Int32_array *v106; // x8
  BattleServantData_o *v107; // x28
  int32_t v108; // w1
  SkillLvEntity_o *v109; // x0
  SkillLvEntity_o *v110; // x21
  _BOOL8 v111; // x0
  BattleLogic_o *v112; // x0
  int32_t v113; // w29
  __int64 v114; // x0
  System_Int32_array *v115; // x21
  bool v116; // w28
  BattleLogicSkill_o *v117; // x29
  __int64 v118; // x0
  BattleLogicTask_array *v119; // x1
  BattleLogic_o *v120; // x0
  BattleActionData_o *v121; // x1
  System_Collections_Generic_Dictionary_int__object__o *v123; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__object__o *v124; // [xsp+28h] [xbp-F8h]
  System_Int32_array **v125; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_int__o *v126; // [xsp+38h] [xbp-E8h]
  BattleActionData_o *actiondata; // [xsp+40h] [xbp-E0h]
  char v128; // [xsp+4Ch] [xbp-D4h]
  __int64 v129; // [xsp+50h] [xbp-D0h]
  SkillLvMaster_o *v130; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v132; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v133; // [xsp+90h] [xbp-90h] BYREF
  int32_t targetIndex; // [xsp+BCh] [xbp-64h] BYREF

  if ( (byte_4C3AABD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C32C20(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnEnemy_b__0__);
    sub_1C32C20(&BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
    sub_1C32C20(&StringLiteral_8754/*"MOTION_ENEMY_TURN_END"*/);
    byte_4C3AABD = 1;
  }
  targetIndex = 0;
  memset(&v133, 0, sizeof(v133));
  v3 = sub_1C32E6C(BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_234;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  actiondata = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_234;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v3 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_234;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_234;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !actiondata )
    goto LABEL_234;
  BattleActionData__setStateField(actiondata, 0);
  v8 = StringLiteral_8754/*"MOTION_ENEMY_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8754/*"MOTION_ENEMY_TURN_END"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&actiondata->fields.motionname, v8, v9, v10);
  v124 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v124,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v123 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v123,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_234;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  p_fields = &this->fields;
  data = this->fields.data;
  v130 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_234;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v3 + 24) = QuestIndividualities;
  v125 = (System_Int32_array **)(v3 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)QuestIndividualities, v14, v15);
  v16 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_234;
  v17 = *(_DWORD *)(Instance + 24);
  v18 = Instance;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      v20 = v18 + 8LL * (int)v19;
      v22 = *(_QWORD *)(v20 + 32);
      v21 = (__int64 *)(v20 + 32);
      Instance = v22;
      if ( !v22 )
        goto LABEL_234;
      if ( *(_BYTE *)(Instance + 564) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v3 + 16),
                              *(System_Int32_array **)(v3 + 24),
                              this->fields.logic,
                              0,
                              0);
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        v23 = (BattleBuffData_BuffData_array *)Instance;
        Instance = *v21;
        if ( !*v21 )
          goto LABEL_234;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v19 >= *(_DWORD *)(v18 + 24) )
            break;
          Instance = *v21;
          if ( !*v21 )
            goto LABEL_234;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_234;
            if ( v23->max_length )
            {
              if ( v19 >= *(_DWORD *)(v18 + 24) )
                break;
              Instance = (__int64)v124;
              if ( !*v21 || !v124 )
                goto LABEL_234;
              System_Collections_Generic_Dictionary_int__object___Add(
                v124,
                *(_DWORD *)(*v21 + 24),
                &v23->obj,
                (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v24 = *(_DWORD *)(v18 + 24);
        if ( v19 >= v24 )
          break;
        if ( !*v21 )
          goto LABEL_234;
        if ( !v16 )
          goto LABEL_234;
        v25 = *(_DWORD *)(*v21 + 24);
        items = v16->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            v25,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          v24 = *(_DWORD *)(v18 + 24);
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size] = v25;
        }
        if ( v19 >= v24 )
          break;
        Instance = *v21;
        if ( !*v21 )
          goto LABEL_234;
        v29 = p_fields->data;
        Instance = (__int64)BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        if ( !v29 )
          goto LABEL_234;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v29, (BattleBuffData_o *)Instance, v23, 0);
      }
      v17 = *(_DWORD *)(v18 + 24);
      if ( (int)++v19 >= v17 )
        goto LABEL_41;
    }
LABEL_237:
    sub_1C32E84(Instance);
  }
LABEL_41:
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v30 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  v31 = Instance;
  if ( v30->fields.leaderDown && v30->fields.endbattleFlg )
  {
    v128 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_234;
    v126 = v16;
    if ( *(int *)(Instance + 24) >= 1 )
    {
      v32 = 0;
      v128 = 0;
      v129 = v3;
      while ( 1 )
      {
        v33 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v33,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_237;
        v34 = v31 + 8LL * (int)v32;
        v37 = *(BattleServantData_o **)(v34 + 32);
        v36 = (__int64 *)(v34 + 32);
        v35 = v37;
        if ( !v37 )
          goto LABEL_234;
        if ( v35->fields.isBuffProgressFlg )
        {
          v38 = *(_BYTE *)(v3 + 16);
          v39 = *(System_Int32_array **)(v3 + 24);
          logic = this->fields.logic;
          v41 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v41, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v35,
                                v38,
                                v39,
                                logic,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v41,
                                0);
          if ( !v33 )
            goto LABEL_234;
          System_Collections_Generic_List_object___AddRange(
            v33,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_237;
          Instance = *v36;
          v3 = v129;
          if ( !*v36 )
            goto LABEL_234;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 464LL));
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_237;
          v42 = Instance;
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_234;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 528LL));
          if ( v42 != (_DWORD)Instance )
          {
            if ( v32 >= *(_DWORD *)(v31 + 24) )
              goto LABEL_237;
            Instance = *v36;
            if ( !*v36 )
              goto LABEL_234;
            BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
          }
        }
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_237;
        Instance = *v36;
        if ( !*v36 )
          goto LABEL_234;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_234;
          Instance = BattleData__checkAlivePlayers((BattleData_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_68;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_234;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_68;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_234;
          if ( !BattleData__IsWaveSetupAsOneParty((BattleData_o *)Instance, 0) )
            goto LABEL_114;
          Instance = (__int64)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_234;
          Instance = BattleData__IsChangeNextPartyForWaveMyDecks((BattleData_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
LABEL_68:
            v43 = 1;
          }
          else
          {
LABEL_114:
            Instance = (__int64)p_fields->data;
            if ( !p_fields->data )
              goto LABEL_234;
            Instance = BattleData__IsWaveSetupSwitchParty((BattleData_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)p_fields->data;
              if ( !p_fields->data )
                goto LABEL_234;
              Instance = BattleData__TrySearchNextAlivePartyIndex((BattleData_o *)Instance, &targetIndex, 0);
              v43 = Instance & 1;
            }
            else
            {
              v43 = 0;
            }
          }
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_237;
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_234;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *v125,
                       this->fields.logic,
                       v43,
                       actiondata,
                       0);
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_237;
          v44 = Instance;
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_234;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v32 >= *(_DWORD *)(v31 + 24) )
              goto LABEL_237;
            Instance = *v36;
            if ( !*v36 )
              goto LABEL_234;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_234;
            v45 = (Il2CppObject *)Instance;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v32 >= *(_DWORD *)(v31 + 24) )
                goto LABEL_237;
              Instance = (__int64)v123;
              if ( !*v36 || !v123 )
                goto LABEL_234;
              System_Collections_Generic_Dictionary_int__object___Add(
                v123,
                *(_DWORD *)(*v36 + 24),
                v45,
                (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_237;
          if ( !*v36 )
            goto LABEL_234;
          Instance = *(_QWORD *)(*v36 + 816);
          if ( !Instance )
            goto LABEL_234;
          v128 |= v44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
        }
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_237;
        v46 = (BattleServantData_o *)*v36;
        if ( !*v36 )
          goto LABEL_234;
        if ( v46->fields.isBuffProgressFlg )
        {
          v47 = *(_BYTE *)(v3 + 16);
          v48 = *(System_Int32_array **)(v3 + 24);
          v49 = this->fields.logic;
          v50 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v50, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v46,
                                v47,
                                v48,
                                v49,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v50,
                                0);
          if ( !v33 )
            goto LABEL_234;
          System_Collections_Generic_List_object___AddRange(
            v33,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_237;
          Instance = *v36;
          v3 = v129;
          if ( !*v36 )
            goto LABEL_234;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v32 >= *(_DWORD *)(v31 + 24) )
              goto LABEL_237;
            Instance = *v36;
            if ( !*v36 )
              goto LABEL_234;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33, 0);
              if ( (Instance & 1) == 0 )
              {
                if ( v32 >= *(_DWORD *)(v31 + 24) )
                  goto LABEL_237;
                if ( !*v36 )
                  goto LABEL_234;
                v51 = *(_DWORD *)(*v36 + 24);
                v52 = System_Collections_Generic_List_object___ToArray(
                        v33,
                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                Instance = (__int64)v124;
                if ( !v124 )
                  goto LABEL_234;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v124,
                  v51,
                  &v52->obj,
                  (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_237;
          if ( !*v36 )
            goto LABEL_234;
          Instance = (__int64)v126;
          if ( !v126 )
            goto LABEL_234;
          v53 = *(_DWORD *)(*v36 + 24);
          v54 = v126->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++v126->fields._version;
          if ( !v54 )
            goto LABEL_234;
          v56 = v126->fields._size;
          if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v126,
              v53,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v126->fields._size = v56 + 1;
            v54->m_Items[v56] = v53;
          }
        }
        if ( (signed int)++v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_120;
      }
    }
    v128 = 0;
LABEL_120:
    v30 = p_fields->data;
    v16 = v126;
    if ( !p_fields->data )
      goto LABEL_234;
  }
  if ( !v16 )
    goto LABEL_234;
  battleEvent = v30->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v16,
                        (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_234;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v3 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v58 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  perf = v58->fields.perf;
  if ( !perf )
    goto LABEL_234;
  Instance = (__int64)v58->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_234;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  if ( !p_fields->data )
    goto LABEL_234;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)p_fields->data->fields.aiNpcDataList;
  v61 = (System_Action_object__o *)sub_1C32E6C(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v61,
    (Il2CppObject *)v3,
    Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnEnemy_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_234;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v61,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  if ( !p_fields->data )
    goto LABEL_234;
  Instance = (__int64)p_fields->data->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_234;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v3 + 16),
    0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v3 + 24), v62);
  v63 = this->fields.data;
  if ( !v63 )
    goto LABEL_234;
  Instance = (__int64)v123;
  v63->fields.currentTurn = 0;
  if ( !v123 )
    goto LABEL_234;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v132,
    v123,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v133 = v132;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v133,
                               (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v133.fields._current.fields.value;
    key = (int32_t)v133.fields._current.fields.key;
    targetIndex = 0;
    if ( !v133.fields._current.fields.value )
      sub_1C32E7C(Entity);
    monitor = (int)v133.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      v68 = 0;
      v69 = 1;
LABEL_137:
      if ( v68 >= (unsigned int)monitor )
        sub_1C32E84(Entity);
      v70 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v68);
      if ( !v70 )
        sub_1C32E7C(Entity);
      if ( v70->fields._isRemove )
        goto LABEL_173;
      if ( !v7 )
        sub_1C32E7C(Entity);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v7,
                 v70->fields.buffId,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_173;
      v71 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v71, 0);
      if ( !v71 )
        sub_1C32E7C(v72);
      v71->fields.svtUniqueId = key;
      vals = v70->fields.vals;
      if ( !vals )
        sub_1C32E7C(v72);
      if ( !LODWORD(vals->max_length) )
        sub_1C32E84(v72);
      v74 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v71->klass->vtable._4_set_skillId.methodPtr)(
              v71,
              (unsigned int)vals->m_Items[0],
              v71->klass->vtable._4_set_skillId.method);
      v75 = v70->fields.vals;
      if ( !v75 )
        sub_1C32E7C(v74);
      if ( LODWORD(v75->max_length) <= 1 )
        sub_1C32E84(v74);
      v71->fields.skilllv = v75->m_Items[1];
      if ( !p_fields->data )
        sub_1C32E7C(0);
      ServantData = BattleData__getServantData(p_fields->data, v71->fields.svtUniqueId, 0);
      v77 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v71->klass->vtable._5_get_skillId.methodPtr)(
              v71,
              v71->klass->vtable._5_get_skillId.method);
      if ( !v130 )
        sub_1C32E7C(0);
      v78 = SkillLvMaster__GetEntity(v130, v77, v71->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C32E7C(v78);
      v79 = v78;
      if ( !p_fields->data )
        sub_1C32E7C(0);
      v80 = BattleData__checkAliveOther(p_fields->data, ServantData->fields.uniqueId, 0);
      if ( !v80 )
      {
        if ( !v79 )
          sub_1C32E7C(v80);
        v81 = this->fields.logic;
        if ( !v81 )
          sub_1C32E7C(0);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v81, v79->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_173;
      }
      v82 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v70, 0);
      if ( v82 < 0 )
      {
        TargetIds = Target__getTargetIds(p_fields->data, v71->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v71, 0);
      }
      else
      {
        v83 = sub_1C32CC8(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v83;
        if ( !v83 )
          sub_1C32E7C(0);
        if ( !*(_DWORD *)(v83 + 24) )
          sub_1C32E84(v83);
        exists = 0;
        *(_DWORD *)(v83 + 32) = v82;
      }
      logicskill = this->fields.logicskill;
      v87 = sub_1C32CC8(int___TypeInfo, 1);
      if ( !v87 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v87 + 24) )
        sub_1C32E84(v87);
      *(_DWORD *)(v87 + 32) = key;
      if ( !logicskill )
        sub_1C32E7C(v87);
      v88 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                  logicskill,
                                                  v71,
                                                  (System_Int32_array *)v87,
                                                  TargetIds,
                                                  1,
                                                  exists,
                                                  0,
                                                  0,
                                                  0,
                                                  0);
      v89 = v88;
      if ( (v69 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v88, 0);
        if ( IsNullOrEmpty )
        {
          v69 = 1;
          goto LABEL_171;
        }
        if ( !v89 )
          sub_1C32E7C(IsNullOrEmpty);
        if ( !LODWORD(v89[1].monitor) )
          sub_1C32E84(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v89[2].klass;
        if ( !klass )
          sub_1C32E7C(0);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v69 = 0;
LABEL_171:
      v92 = this->fields.logic;
      if ( !v92 )
        sub_1C32E7C(0);
      BattleLogic__addBattleLogicTask(v92, (BattleLogicTask_array *)v89, 0);
LABEL_173:
      v68 = targetIndex + 1;
      targetIndex = v68;
      monitor = (int)value[1].monitor;
      if ( v68 >= monitor )
        continue;
      goto LABEL_137;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v133,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v124;
  if ( !v124 )
    goto LABEL_234;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v132,
    v124,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v133 = v132;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v133,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1C32E7C(0);
    v93 = (int32_t)v133.fields._current.fields.key;
    v94 = v133.fields._current.fields.value;
    v95 = (BuffEntity_o *)BattleData__getServantData(p_fields->data, (int32_t)v133.fields._current.fields.key, 0);
    v96 = (BattleServantData_o *)v95;
    if ( v95 )
    {
      v97 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45709708(v97, v96, 0, 0, 0, 0, 0, 1, 0);
      if ( !v97 )
        sub_1C32E7C(v95);
      selfConcatSvtIndividualities_k__BackingField = v97->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
    }
    targetIndex = 0;
    if ( !v94 )
      sub_1C32E7C(v95);
    v99 = (int)v94[1].monitor;
    if ( v99 >= 1 )
    {
      v100 = 0;
      do
      {
        if ( v100 >= (unsigned int)v99 )
          sub_1C32E84(v95);
        v101 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v94[2].klass + v100);
        if ( !v101 )
          sub_1C32E7C(v95);
        if ( !v101->fields._isRemove )
        {
          if ( !v7 )
            sub_1C32E7C(v95);
          v95 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v7,
                                  v101->fields.buffId,
                                  (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v95 )
          {
            if ( BuffEntity__isEndAct(v95, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v101, 1, 0) )
            {
              v102 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v102, 0);
              if ( !v102 )
                sub_1C32E7C(v103);
              v102->fields.svtUniqueId = v93;
              v104 = v101->fields.vals;
              if ( !v104 )
                sub_1C32E7C(v103);
              if ( !LODWORD(v104->max_length) )
                sub_1C32E84(v103);
              v105 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v102->klass->vtable._4_set_skillId.methodPtr)(
                       v102,
                       (unsigned int)v104->m_Items[0],
                       v102->klass->vtable._4_set_skillId.method);
              v106 = v101->fields.vals;
              if ( !v106 )
                sub_1C32E7C(v105);
              if ( LODWORD(v106->max_length) <= 1 )
                sub_1C32E84(v105);
              v102->fields.skilllv = v106->m_Items[1];
              if ( !p_fields->data )
                sub_1C32E7C(0);
              v107 = BattleData__getServantData(p_fields->data, v102->fields.svtUniqueId, 0);
              v108 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v102->klass->vtable._5_get_skillId.methodPtr)(
                       v102,
                       v102->klass->vtable._5_get_skillId.method);
              if ( !v130 )
                sub_1C32E7C(0);
              v109 = SkillLvMaster__GetEntity(v130, v108, v102->fields.skilllv, 0);
              if ( !v107 )
                sub_1C32E7C(v109);
              v110 = v109;
              if ( !p_fields->data )
                sub_1C32E7C(0);
              v111 = BattleData__checkAliveOther(p_fields->data, v107->fields.uniqueId, 0);
              if ( v111 )
                goto LABEL_206;
              if ( !v110 )
                sub_1C32E7C(v111);
              v112 = this->fields.logic;
              if ( !v112 )
                sub_1C32E7C(0);
              if ( BattleLogic__checkPtTargetFunction(v112, v110->fields.funcId, 0) )
              {
LABEL_206:
                v113 = BattleServantData__GetRevengeIdCheckOpponentOnly(v107, v101, 0);
                if ( v113 < 0 )
                {
                  v115 = Target__getTargetIds(p_fields->data, v102->fields.svtUniqueId, -1, v93, 13, 0, 0);
                  v116 = BattleSkillInfoData__ExistsNoTargetNoActionType(v102, 0);
                }
                else
                {
                  v114 = sub_1C32CC8(int___TypeInfo, 1);
                  v115 = (System_Int32_array *)v114;
                  if ( !v114 )
                    sub_1C32E7C(0);
                  if ( !*(_DWORD *)(v114 + 24) )
                    sub_1C32E84(v114);
                  v116 = 0;
                  *(_DWORD *)(v114 + 32) = v113;
                }
                v117 = this->fields.logicskill;
                v118 = sub_1C32CC8(int___TypeInfo, 1);
                if ( !v118 )
                  sub_1C32E7C(0);
                if ( !*(_DWORD *)(v118 + 24) )
                  sub_1C32E84(v118);
                *(_DWORD *)(v118 + 32) = v93;
                if ( !v117 )
                  sub_1C32E7C(v118);
                v119 = BattleLogicSkill__taskSkill(v117, v102, (System_Int32_array *)v118, v115, 1, v116, 0, 0, 0, 0);
                v120 = this->fields.logic;
                if ( !v120 )
                  sub_1C32E7C(0);
                BattleLogic__addBattleLogicTask(v120, v119, 0);
              }
            }
            if ( !p_fields->data )
              sub_1C32E7C(0);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(p_fields->data, v101, 0);
          }
        }
        v100 = targetIndex + 1;
        targetIndex = v100;
        v99 = (int)v94[1].monitor;
      }
      while ( v100 < v99 );
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v133,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v124, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_234;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0);
  }
  if ( !p_fields->data
    || (Instance = (__int64)p_fields->data->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_234:
    sub_1C32E7C(Instance);
  }
  if ( (v128 & 1) != 0 )
    v121 = actiondata;
  else
    v121 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v121, actiondata, 0);
}


BattleActionData_o *BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x26
  __int64 Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x28
  unsigned int v18; // w23
  System_Collections_Generic_List_object__o *v19; // x29
  __int64 v20; // x26
  BattleServantData_o *v21; // x21
  __int64 *v22; // x26
  BattleServantData_o *v23; // t1
  BattleLogic_o *logic; // x27
  char v25; // w20
  System_Int32_array *v26; // x25
  System_Func_object__bool__o *v27; // x24
  int v28; // w21
  bool v29; // w3
  char v30; // w21
  Il2CppObject *v31; // x2
  BattleServantData_o *v32; // x21
  BattleLogic_o *v33; // x25
  char v34; // w20
  System_Int32_array *v35; // x24
  System_Func_object__bool__o *v36; // x27
  int32_t v37; // w21
  System_Object_array *v38; // x2
  unsigned int v39; // w8
  int32_t v40; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v42; // x10
  __int64 size; // x11
  BattleData_o *v44; // x21
  BattleBuffData_o *BuffData; // x20
  struct BattleData_o *v46; // x8
  __int64 v47; // x27
  int v48; // w8
  unsigned int v49; // w20
  __int64 v50; // x23
  __int64 *v51; // x23
  __int64 v52; // t1
  Il2CppObject *v53; // x21
  int32_t v54; // w1
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  struct BaseBattleEvent_o *battleEvent; // x21
  struct BattleData_o *v59; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v61; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x21
  System_Action_object__o *v63; // x26
  struct BattleData_o *v64; // x8
  const MethodInfo *v65; // x2
  struct BattleData_o *v66; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v71; // w23
  char v72; // w20
  BattleBuffData_BuffData_o *v73; // x28
  BattleSkillInfoData_o *v74; // x26
  __int64 v75; // x0
  struct System_Int32_array *vals; // x8
  __int64 v77; // x0
  struct System_Int32_array *v78; // x8
  BattleData_o *v79; // x0
  BattleServantData_o *ServantData; // x27
  int32_t v81; // w1
  SkillLvEntity_o *v82; // x0
  SkillLvEntity_o *v83; // x21
  BattleData_o *v84; // x0
  _BOOL8 v85; // x0
  BattleLogic_o *v86; // x0
  int32_t v87; // w29
  __int64 v88; // x0
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v92; // x0
  System_Collections_ICollection_o *v93; // x0
  System_Collections_ICollection_o *v94; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v97; // x0
  BattleData_o *v98; // x0
  int32_t v99; // w24
  Il2CppObject *v100; // x23
  BuffEntity_o *v101; // x0
  BattleServantData_o *v102; // x21
  BattleBuffData_CheckIndividualitiesData_o *v103; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v105; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v107; // x26
  BattleSkillInfoData_o *v108; // x27
  __int64 v109; // x0
  struct System_Int32_array *v110; // x8
  __int64 v111; // x0
  struct System_Int32_array *v112; // x8
  BattleData_o *v113; // x0
  BattleServantData_o *v114; // x28
  int32_t v115; // w1
  SkillLvEntity_o *v116; // x0
  SkillLvEntity_o *v117; // x21
  BattleData_o *v118; // x0
  _BOOL8 v119; // x0
  BattleLogic_o *v120; // x0
  int32_t v121; // w29
  __int64 v122; // x0
  System_Int32_array *v123; // x21
  bool v124; // w28
  BattleLogicSkill_o *v125; // x29
  __int64 v126; // x0
  BattleLogicTask_array *v127; // x1
  BattleLogic_o *v128; // x0
  BattleData_o *v129; // x0
  struct BattleData_o *v130; // x8
  BattleActionData_o *v131; // x1
  System_Collections_Generic_Dictionary_int__object__o *v133; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v134; // [xsp+20h] [xbp-F0h]
  System_Int32_array **v135; // [xsp+28h] [xbp-E8h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-E0h]
  char v137; // [xsp+3Ch] [xbp-D4h]
  System_Collections_Generic_List_int__o *v138; // [xsp+40h] [xbp-D0h]
  __int64 v139; // [xsp+48h] [xbp-C8h]
  SkillLvMaster_o *v140; // [xsp+50h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v141; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v142; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4C3AABA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C32C20(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass40_0__createEndTurnPlayer_b__0__);
    sub_1C32C20(&BattleLogicNomal___c__DisplayClass40_0_TypeInfo);
    sub_1C32C20(&StringLiteral_8764/*"MOTION_PLAYER_TURN_END"*/);
    byte_4C3AABA = 1;
  }
  memset(&v142, 0, sizeof(v142));
  v4 = sub_1C32E6C(BattleLogicNomal___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_224;
  *(_QWORD *)(v4 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  BattleLogicNomal__SetNextTargetId(this, v8);
  baseActData = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0);
  *(_BYTE *)(v4 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_224;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_224;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !baseActData )
    goto LABEL_224;
  BattleActionData__setStateField(baseActData, 0);
  v10 = StringLiteral_8764/*"MOTION_PLAYER_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8764/*"MOTION_PLAYER_TURN_END"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&baseActData->fields.motionname, v10, v11, v12);
  v134 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v134,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v133 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v133,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v140 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_224;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  v135 = (System_Int32_array **)(v4 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 24), (int32_t)QuestIndividualities, v15, v16);
  v138 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v138,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_224;
  v17 = Instance;
  v139 = v4;
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v18 = 0;
    v137 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v19,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( v18 >= *(_DWORD *)(v17 + 24) )
        break;
      v20 = v17 + 8LL * (int)v18;
      v23 = *(BattleServantData_o **)(v20 + 32);
      v22 = (__int64 *)(v20 + 32);
      v21 = v23;
      if ( !v23 )
        goto LABEL_224;
      if ( v21->fields.isBuffProgressFlg )
      {
        logic = this->fields.logic;
        v25 = *(_BYTE *)(v139 + 16);
        v26 = *(System_Int32_array **)(v139 + 24);
        v27 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v27, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v21,
                              v25,
                              v26,
                              logic,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v27,
                              0);
        if ( !v19 )
          goto LABEL_224;
        System_Collections_Generic_List_object___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          break;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_224;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 464LL));
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          break;
        v28 = Instance;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_224;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 528LL));
        if ( v28 != (_DWORD)Instance )
        {
          if ( v18 >= *(_DWORD *)(v17 + 24) )
            break;
          Instance = *v22;
          if ( !*v22 )
            goto LABEL_224;
          BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
        }
      }
      if ( v18 >= *(_DWORD *)(v17 + 24) )
        break;
      Instance = *v22;
      if ( !*v22 )
        goto LABEL_224;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)this->fields.data;
        if ( !Instance )
          goto LABEL_224;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0);
        if ( (Instance & 1) != 0 )
        {
          v29 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_224;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0);
          v29 = Instance & 1;
        }
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          break;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_224;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *v135,
                     this->fields.logic,
                     v29,
                     baseActData,
                     0);
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          break;
        v30 = Instance;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_224;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v18 >= *(_DWORD *)(v17 + 24) )
            break;
          Instance = *v22;
          if ( !*v22 )
            goto LABEL_224;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_224;
          v31 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v18 >= *(_DWORD *)(v17 + 24) )
              break;
            Instance = (__int64)v133;
            if ( !*v22 || !v133 )
              goto LABEL_224;
            System_Collections_Generic_Dictionary_int__object___Add(
              v133,
              *(_DWORD *)(*v22 + 24),
              v31,
              (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          break;
        if ( !*v22 )
          goto LABEL_224;
        Instance = *(_QWORD *)(*v22 + 816);
        if ( !Instance )
          goto LABEL_224;
        v137 |= v30;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
      }
      if ( v18 >= *(_DWORD *)(v17 + 24) )
        break;
      v32 = (BattleServantData_o *)*v22;
      if ( !*v22 )
        goto LABEL_224;
      if ( v32->fields.isBuffProgressFlg )
      {
        v33 = this->fields.logic;
        v34 = *(_BYTE *)(v139 + 16);
        v35 = *(System_Int32_array **)(v139 + 24);
        v36 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v36, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v32,
                              v34,
                              v35,
                              v33,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v36,
                              0);
        if ( !v19 )
          goto LABEL_224;
        System_Collections_Generic_List_object___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          break;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_224;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v18 >= *(_DWORD *)(v17 + 24) )
            break;
          Instance = *v22;
          if ( !*v22 )
            goto LABEL_224;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v19, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( v18 >= *(_DWORD *)(v17 + 24) )
                break;
              if ( !*v22 )
                goto LABEL_224;
              v37 = *(_DWORD *)(*v22 + 24);
              v38 = System_Collections_Generic_List_object___ToArray(
                      v19,
                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
              Instance = (__int64)v134;
              if ( !v134 )
                goto LABEL_224;
              System_Collections_Generic_Dictionary_int__object___Add(
                v134,
                v37,
                &v38->obj,
                (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v39 = *(_DWORD *)(v17 + 24);
        if ( v18 >= v39 )
          break;
        Instance = (__int64)v138;
        if ( !*v22 )
          goto LABEL_224;
        if ( !v138 )
          goto LABEL_224;
        v40 = *(_DWORD *)(*v22 + 24);
        items = v138->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v138->fields._version;
        if ( !items )
          goto LABEL_224;
        size = v138->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v138,
            v40,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          v39 = *(_DWORD *)(v17 + 24);
        }
        else
        {
          v138->fields._size = size + 1;
          items->m_Items[size] = v40;
        }
        if ( v18 >= v39 )
          break;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_224;
        v44 = this->fields.data;
        BuffData = BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v19,
                              (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v44 )
          goto LABEL_224;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v44, BuffData, (BattleBuffData_BuffData_array *)Instance, 0);
      }
      if ( (signed int)++v18 >= *(_DWORD *)(v17 + 24) )
        goto LABEL_80;
    }
LABEL_227:
    sub_1C32E84(Instance);
  }
  v137 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_224;
  v47 = Instance;
  Instance = (__int64)v138;
  if ( !v46->fields.leaderDown || !v46->fields.endbattleFlg )
  {
    if ( !v47 )
      goto LABEL_224;
    v48 = *(_DWORD *)(v47 + 24);
    if ( v48 >= 1 )
    {
      v49 = 0;
      while ( v49 < v48 )
      {
        v50 = v47 + 8LL * (int)v49;
        v52 = *(_QWORD *)(v50 + 32);
        v51 = (__int64 *)(v50 + 32);
        Instance = v52;
        if ( !v52 )
          goto LABEL_224;
        if ( *(_BYTE *)(Instance + 564) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v139 + 16),
                                *(System_Int32_array **)(v139 + 24),
                                this->fields.logic,
                                0,
                                0);
          if ( v49 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_227;
          v53 = (Il2CppObject *)Instance;
          Instance = *v51;
          if ( !*v51 )
            goto LABEL_224;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v49 >= *(_DWORD *)(v47 + 24) )
              goto LABEL_227;
            Instance = *v51;
            if ( !*v51 )
              goto LABEL_224;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v53 )
                goto LABEL_224;
              if ( v53[1].monitor )
              {
                if ( v49 >= *(_DWORD *)(v47 + 24) )
                  goto LABEL_227;
                Instance = (__int64)v134;
                if ( !*v51 || !v134 )
                  goto LABEL_224;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v134,
                  *(_DWORD *)(*v51 + 24),
                  v53,
                  (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v49 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_227;
          Instance = (__int64)v138;
          if ( !*v51 )
            goto LABEL_224;
          if ( !v138 )
            goto LABEL_224;
          v54 = *(_DWORD *)(*v51 + 24);
          v55 = v138->fields._items;
          v56 = Method_System_Collections_Generic_List_int__Add__;
          ++v138->fields._version;
          if ( !v55 )
            goto LABEL_224;
          v57 = v138->fields._size;
          if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v138,
              v54,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v138->fields._size = v57 + 1;
            v55->m_Items[v57] = v54;
          }
        }
        v48 = *(_DWORD *)(v47 + 24);
        if ( (int)++v49 >= v48 )
          goto LABEL_110;
      }
      goto LABEL_227;
    }
LABEL_110:
    v46 = this->fields.data;
    Instance = (__int64)v138;
    if ( !v46 )
      goto LABEL_224;
  }
  if ( !Instance )
    goto LABEL_224;
  battleEvent = v46->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_224;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v139 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v59 = this->fields.data;
  if ( !v59 )
    goto LABEL_224;
  perf = v59->fields.perf;
  if ( !perf )
    goto LABEL_224;
  Instance = (__int64)v59->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_224;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  v61 = this->fields.data;
  if ( !v61 )
    goto LABEL_224;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v61->fields.aiNpcDataList;
  v63 = (System_Action_object__o *)sub_1C32E6C(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v63,
    (Il2CppObject *)v139,
    Method_BattleLogicNomal___c__DisplayClass40_0__createEndTurnPlayer_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_224;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v63,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v64 = this->fields.data;
  if ( !v64 )
    goto LABEL_224;
  Instance = (__int64)v64->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_224;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v139 + 16),
    0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v139 + 24), v65);
  v66 = this->fields.data;
  if ( !v66 )
    goto LABEL_224;
  Instance = (__int64)v133;
  v66->fields.currentTurn = 1;
  if ( !v133 )
    goto LABEL_224;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v141,
    v133,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v142 = v141;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v142,
                               (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v142.fields._current.fields.value;
    if ( !v142.fields._current.fields.value )
      sub_1C32E7C(Entity);
    monitor = (int)v142.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v142.fields._current.fields.key;
      v71 = 0;
      v72 = 1;
LABEL_127:
      if ( v71 >= monitor )
        sub_1C32E84(Entity);
      v73 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + (int)v71);
      if ( !v73 )
        sub_1C32E7C(Entity);
      if ( v73->fields._isRemove )
        goto LABEL_163;
      if ( !v9 )
        sub_1C32E7C(Entity);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v9,
                 v73->fields.buffId,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_163;
      v74 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v74, 0);
      if ( !v74 )
        sub_1C32E7C(v75);
      v74->fields.svtUniqueId = key;
      vals = v73->fields.vals;
      if ( !vals )
        sub_1C32E7C(v75);
      if ( !LODWORD(vals->max_length) )
        sub_1C32E84(v75);
      v77 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v74->klass->vtable._4_set_skillId.methodPtr)(
              v74,
              (unsigned int)vals->m_Items[0],
              v74->klass->vtable._4_set_skillId.method);
      v78 = v73->fields.vals;
      if ( !v78 )
        sub_1C32E7C(v77);
      if ( LODWORD(v78->max_length) <= 1 )
        sub_1C32E84(v77);
      v74->fields.skilllv = v78->m_Items[1];
      v79 = this->fields.data;
      if ( !v79 )
        sub_1C32E7C(0);
      ServantData = BattleData__getServantData(v79, v74->fields.svtUniqueId, 0);
      v81 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v74->klass->vtable._5_get_skillId.methodPtr)(
              v74,
              v74->klass->vtable._5_get_skillId.method);
      if ( !v140 )
        sub_1C32E7C(0);
      v82 = SkillLvMaster__GetEntity(v140, v81, v74->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C32E7C(v82);
      v83 = v82;
      v84 = this->fields.data;
      if ( !v84 )
        sub_1C32E7C(0);
      v85 = BattleData__checkAliveOther(v84, ServantData->fields.uniqueId, 0);
      if ( !v85 )
      {
        if ( !v83 )
          sub_1C32E7C(v85);
        v86 = this->fields.logic;
        if ( !v86 )
          sub_1C32E7C(0);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v86, v83->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_163;
      }
      v87 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v73, 0);
      if ( v87 < 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v74->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v74, 0);
      }
      else
      {
        v88 = sub_1C32CC8(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v88;
        if ( !v88 )
          sub_1C32E7C(0);
        if ( !*(_DWORD *)(v88 + 24) )
          sub_1C32E84(v88);
        exists = 0;
        *(_DWORD *)(v88 + 32) = v87;
      }
      logicskill = this->fields.logicskill;
      v92 = sub_1C32CC8(int___TypeInfo, 1);
      if ( !v92 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v92 + 24) )
        sub_1C32E84(v92);
      *(_DWORD *)(v92 + 32) = key;
      if ( !logicskill )
        sub_1C32E7C(v92);
      v93 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                  logicskill,
                                                  v74,
                                                  (System_Int32_array *)v92,
                                                  TargetIds,
                                                  1,
                                                  exists,
                                                  0,
                                                  0,
                                                  0,
                                                  0);
      v94 = v93;
      if ( (v72 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v93, 0);
        if ( IsNullOrEmpty )
        {
          v72 = 1;
          goto LABEL_161;
        }
        if ( !v94 )
          sub_1C32E7C(IsNullOrEmpty);
        if ( !LODWORD(v94[1].monitor) )
          sub_1C32E84(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v94[2].klass;
        if ( !klass )
          sub_1C32E7C(0);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v72 = 0;
LABEL_161:
      v97 = this->fields.logic;
      if ( !v97 )
        sub_1C32E7C(0);
      BattleLogic__addBattleLogicTask(v97, (BattleLogicTask_array *)v94, 0);
LABEL_163:
      monitor = (int)value[1].monitor;
      if ( (int)++v71 >= monitor )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v142,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v134;
  if ( !v134 )
    goto LABEL_224;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v141,
    v134,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v142 = v141;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v142,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v98 = this->fields.data;
    if ( !v98 )
      sub_1C32E7C(0);
    v99 = (int32_t)v142.fields._current.fields.key;
    v100 = v142.fields._current.fields.value;
    v101 = (BuffEntity_o *)BattleData__getServantData(v98, (int32_t)v142.fields._current.fields.key, 0);
    v102 = (BattleServantData_o *)v101;
    if ( v101 )
    {
      v103 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45709708(v103, v102, 0, 0, 0, 0, 0, 1, 0);
      if ( !v103 )
        sub_1C32E7C(v101);
      selfConcatSvtIndividualities_k__BackingField = v103->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v100 )
LABEL_256:
        sub_1C32E7C(v101);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
      if ( !v100 )
        goto LABEL_256;
    }
    v105 = (int)v100[1].monitor;
    if ( v105 >= 1 )
    {
      for ( i = 0; i < v105; ++i )
      {
        if ( i >= (unsigned int)v105 )
          sub_1C32E84(v101);
        v107 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v100[2].klass + i);
        if ( !v107 )
          sub_1C32E7C(v101);
        if ( !v107->fields._isRemove )
        {
          if ( !v9 )
            sub_1C32E7C(v101);
          v101 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v9,
                                   v107->fields.buffId,
                                   (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v101 )
          {
            if ( BuffEntity__isEndAct(v101, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v107, 1, 0) )
            {
              v108 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v108, 0);
              if ( !v108 )
                sub_1C32E7C(v109);
              v108->fields.svtUniqueId = v99;
              v110 = v107->fields.vals;
              if ( !v110 )
                sub_1C32E7C(v109);
              if ( !LODWORD(v110->max_length) )
                sub_1C32E84(v109);
              v111 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v108->klass->vtable._4_set_skillId.methodPtr)(
                       v108,
                       (unsigned int)v110->m_Items[0],
                       v108->klass->vtable._4_set_skillId.method);
              v112 = v107->fields.vals;
              if ( !v112 )
                sub_1C32E7C(v111);
              if ( LODWORD(v112->max_length) <= 1 )
                sub_1C32E84(v111);
              v108->fields.skilllv = v112->m_Items[1];
              v113 = this->fields.data;
              if ( !v113 )
                sub_1C32E7C(0);
              v114 = BattleData__getServantData(v113, v108->fields.svtUniqueId, 0);
              v115 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v108->klass->vtable._5_get_skillId.methodPtr)(
                       v108,
                       v108->klass->vtable._5_get_skillId.method);
              if ( !v140 )
                sub_1C32E7C(0);
              v116 = SkillLvMaster__GetEntity(v140, v115, v108->fields.skilllv, 0);
              if ( !v114 )
                sub_1C32E7C(v116);
              v117 = v116;
              v118 = this->fields.data;
              if ( !v118 )
                sub_1C32E7C(0);
              v119 = BattleData__checkAliveOther(v118, v114->fields.uniqueId, 0);
              if ( v119 )
                goto LABEL_196;
              if ( !v117 )
                sub_1C32E7C(v119);
              v120 = this->fields.logic;
              if ( !v120 )
                sub_1C32E7C(0);
              if ( BattleLogic__checkPtTargetFunction(v120, v117->fields.funcId, 0) )
              {
LABEL_196:
                v121 = BattleServantData__GetRevengeIdCheckOpponentOnly(v114, v107, 0);
                if ( v121 < 0 )
                {
                  v123 = Target__getTargetIds(this->fields.data, v108->fields.svtUniqueId, -1, v99, 13, 0, 0);
                  v124 = BattleSkillInfoData__ExistsNoTargetNoActionType(v108, 0);
                }
                else
                {
                  v122 = sub_1C32CC8(int___TypeInfo, 1);
                  v123 = (System_Int32_array *)v122;
                  if ( !v122 )
                    sub_1C32E7C(0);
                  if ( !*(_DWORD *)(v122 + 24) )
                    sub_1C32E84(v122);
                  v124 = 0;
                  *(_DWORD *)(v122 + 32) = v121;
                }
                v125 = this->fields.logicskill;
                v126 = sub_1C32CC8(int___TypeInfo, 1);
                if ( !v126 )
                  sub_1C32E7C(0);
                if ( !*(_DWORD *)(v126 + 24) )
                  sub_1C32E84(v126);
                *(_DWORD *)(v126 + 32) = v99;
                if ( !v125 )
                  sub_1C32E7C(v126);
                v127 = BattleLogicSkill__taskSkill(v125, v108, (System_Int32_array *)v126, v123, 1, v124, 0, 0, 0, 0);
                v128 = this->fields.logic;
                if ( !v128 )
                  sub_1C32E7C(0);
                BattleLogic__addBattleLogicTask(v128, v127, 0);
              }
            }
            v129 = this->fields.data;
            if ( !v129 )
              sub_1C32E7C(0);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(v129, v107, 0);
          }
        }
        v105 = (int)v100[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v142,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v134, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_224;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0);
  }
  v130 = this->fields.data;
  if ( !v130
    || (Instance = (__int64)v130->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_224:
    sub_1C32E7C(Instance);
  }
  if ( (v137 & 1) != 0 )
    v131 = baseActData;
  else
    v131 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v131, baseActData, 0);
}


BattleActionData_o *BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  struct System_String_o *motionName; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *motionMessage; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_GameObject_o *targetObject; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3AAB6 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3AAB6 = 1;
  }
  v4 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0), !task) )
    sub_1C32E7C(v5);
  *(_BYTE *)(v4 + 249) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 72) = motionName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 72), (int32_t)motionName, v7, v8);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 136) = motionMessage;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 136), (int32_t)motionMessage, v10, v11);
  *(_DWORD *)(v4 + 144) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 80) = targetObject;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 80), (int32_t)targetObject, v13, v14);
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
  struct BattleData_o *v9; // x8
  BattleLogicNomal_o *v10; // x23
  struct BattleLogic_o *logic; // x8
  BuffEntity_o *buffEntity; // [xsp+8h] [xbp-38h] BYREF

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
                0);
  if ( buffEntity )
  {
    v8 = ShiftGuts;
    this = (BattleLogicNomal_o *)BuffEntity__GetMotionName(buffEntity, 0);
    v9 = v5->fields.data;
    if ( v9 )
    {
      v10 = this;
      this = (BattleLogicNomal_o *)v9->fields.perf;
      if ( this )
      {
        BattlePerformance__PlayShiftGuts((BattlePerformance_o *)this, 0);
        this = (BattleLogicNomal_o *)v6->fields.buffData;
        if ( this )
        {
          BattleBuffData__usedProgressingGuts((BattleBuffData_o *)this, 0);
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
                       (System_String_o *)v10,
                       0);
          }
        }
      }
    }
LABEL_14:
    sub_1C32E7C(this);
  }
  return 0;
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
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  BattleActionData_ShiftServant_o *v12; // x22
  bool isOverwriteShift; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *motionName; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C3AAC1 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActorControl_TypeInfo);
    this = (BattleLogicNomal_o *)sub_1C32C20(&BattleActionData_ShiftServant_TypeInfo);
    byte_4C3AAC1 = 1;
  }
  motionName = 0;
  isOverwriteShift = 0;
  if ( !task )
    goto LABEL_18;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_18;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0);
  if ( !this )
    goto LABEL_18;
  v6 = this;
  v7 = 0;
  if ( BattleServantData__isShiftReady((BattleServantData_o *)this, 0) )
  {
    this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
    if ( this )
    {
      ShiftMotionOverwriteNumber = BattleDeckServantData__GetShiftMotionOverwriteNumber(
                                     (BattleDeckServantData_o *)this,
                                     0);
      if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      BattleActorControl__GetShiftMotionNameAndOverwriteFlag(
        ShiftMotionOverwriteNumber,
        &motionName,
        &isOverwriteShift,
        0);
      v7 = sub_1C32E6C(BattleActionData_TypeInfo);
      BattleActionData___ctor((BattleActionData_o *)v7, 0);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 32) = v6->fields.logic;
        v11 = (int)motionName;
        *(_QWORD *)(v7 + 72) = motionName;
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 72), v11, v9, v10);
        *(_BYTE *)(v7 + 252) = isOverwriteShift;
        this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
        if ( this )
        {
          *(_BYTE *)(v7 + 253) = BattleDeckServantData__IsIgnoreShiftWhiteFade((BattleDeckServantData_o *)this, 0);
          v12 = (BattleActionData_ShiftServant_o *)sub_1C32E6C(BattleActionData_ShiftServant_TypeInfo);
          BattleActionData_ShiftServant___ctor(v12, 0, 0);
          if ( v12 )
          {
            BattleActionData_ShiftServant__setBeforeSvtData(v12, (BattleServantData_o *)v6, 0);
            if ( *(_BYTE *)(v7 + 252) )
              BattleActionData_ShiftServant__SetBeforeWeapon(v12, (BattleServantData_o *)v6, 0);
            BattleServantData__setShiftServant((BattleServantData_o *)v6, v4->fields.data, 1, 0);
            BattleServantData__SetIsBattleShift((BattleServantData_o *)v6, 1, 0);
            BattleActionData_ShiftServant__setCheckSvtData(v12, (BattleServantData_o *)v6, 0);
            BattleActionData__setShiftServant((BattleActionData_o *)v7, v12, 0);
            this = (BattleLogicNomal_o *)v4->fields.logic;
            if ( this )
            {
              BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, (int32_t)v6->fields.logic, 1, 0, 0);
              return (BattleActionData_o *)v7;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C32E7C(this);
  }
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

  if ( (byte_4C3AAB7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_11091/*"RESET_CAMERA_BAT"*/);
    byte_4C3AAB7 = 1;
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
              (System_String_o *)StringLiteral_11091/*"RESET_CAMERA_BAT"*/,
              0);
            return v8;
          }
        }
      }
LABEL_18:
      sub_1C32E7C(StartTurn);
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
        sub_1C32E84(data);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 564) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1C32E7C(data);
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
    sub_1C32E7C(this);
  max_length = svtList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C32E84(this);
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
    sub_1C32E84(data);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1C32E7C(data);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C32E7C(this);
  return data->fields.battleEvent;
}


void BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C3AAA8 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C32C20(&BattleLogic_reactionFunction_TypeInfo);
    byte_4C3AAA8 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C32E6C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0);
  if ( !list )
    sub_1C32E7C(v6);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleData_o *ShiftableUniqueId; // x0
  int32_t ActorId; // w0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  BattleServantData_o *v10; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicTask_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  BeforeShiftServantReactTaskCreator_o *v20; // x22
  ServantReactTaskCreator_o *v21; // x22
  __int64 v22; // x23
  System_Func_object__bool__o *v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct BattleLogic_o *v28; // x8
  BattleLogicTask_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct BattleLogic_o *v36; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0

  if ( (byte_4C3AAC2 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&ReactTaskTargetFilter_TypeInfo);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass53_0__shiftServantTaskReaction_b__0__);
    sub_1C32C20(&BattleLogicNomal___c__DisplayClass53_0_TypeInfo);
    byte_4C3AAC2 = 1;
  }
  v5 = sub_1C32E6C(BattleLogicNomal___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !task )
    goto LABEL_39;
  ActorId = BattleLogicTask__getActorId(task, 0);
  ShiftableUniqueId = (BattleData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v8);
  if ( !v5 )
    goto LABEL_39;
  *(_DWORD *)(v5 + 16) = (_DWORD)ShiftableUniqueId;
  if ( !(_DWORD)ShiftableUniqueId )
    return this->fields.zeroTask;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  ShiftableUniqueId = this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleData__getServantData(ShiftableUniqueId, *(_DWORD *)(v5 + 16), 0);
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  v10 = (BattleServantData_o *)ShiftableUniqueId;
  ShiftableUniqueId = (BattleData_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                        (BattleServantData_o *)ShiftableUniqueId,
                                        0);
  if ( !v10->fields.buffData )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleBuffData__IsShiftGuts(
                                        v10->fields.buffData,
                                        v10,
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
                                              *(_DWORD *)(v5 + 16),
                                              1,
                                              0);
        if ( v9 )
        {
          System_Collections_Generic_List_object___AddRange(
            v9,
            (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          v12 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v12, 0);
          if ( v12 )
          {
            v12->fields.actiontype = 62;
            BattleLogicTask__setActor(v12, 3, *(_DWORD *)(v5 + 16), 0);
            items = v9->fields._items;
            v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v9->fields._version;
            if ( items )
            {
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  (Il2CppObject *)v12,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
              }
              else
              {
                v18 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v18[4] = (Il2CppClass *)v12;
                sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
              }
              v36 = this->fields.logic;
              if ( v36 )
              {
                ShiftableUniqueId = (BattleData_o *)v36->fields.logicReaction;
                if ( ShiftableUniqueId )
                {
                  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                                              *(_DWORD *)(v5 + 16),
                                                                              0,
                                                                              0);
                  System_Collections_Generic_List_object___AddRange(
                    v9,
                    TaskGuts,
                    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C32E7C(ShiftableUniqueId);
  }
  BattleServantData__UsedProgressingAppliedFailedGuts(v10, 0);
  v20 = (BeforeShiftServantReactTaskCreator_o *)sub_1C32E6C(BeforeShiftServantReactTaskCreator_TypeInfo);
  BeforeShiftServantReactTaskCreator___ctor(v20, 24, 0);
  if ( !v20 )
    goto LABEL_39;
  v21 = ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v20, 0);
  v22 = sub_1C32E6C(ReactTaskTargetFilter_TypeInfo);
  ReactTaskTargetFilter___ctor((ReactTaskTargetFilter_o *)v22, 0);
  v23 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v5,
    Method_BattleLogicNomal___c__DisplayClass53_0__shiftServantTaskReaction_b__0__,
    0);
  if ( !v22 )
    goto LABEL_39;
  *(_QWORD *)(v22 + 16) = v23;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 16), (int32_t)v23, v24, v25);
  if ( !v21 )
    goto LABEL_39;
  v21->fields._TargetFilter_k__BackingField = (struct ReactTaskTargetFilter_o *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields._TargetFilter_k__BackingField, v22, v26, v27);
  v28 = this->fields.logic;
  if ( !v28 )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)v28->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleLogicReaction__CreateTasks(
                                        (BattleLogicReaction_o *)ShiftableUniqueId,
                                        v21,
                                        0);
  if ( !v9 )
    goto LABEL_39;
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v29 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v29, 0);
  if ( !v29 )
    goto LABEL_39;
  v29->fields.actiontype = 37;
  BattleLogicTask__setActor(v29, 3, *(_DWORD *)(v5 + 16), 0);
  v32 = v9->fields._items;
  v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v9->fields._version;
  if ( !v32 )
    goto LABEL_39;
  v34 = v9->fields._size;
  if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v29,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v9->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)v29;
    sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
  }
LABEL_33:
  v38 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v38, 0);
  if ( !v38 )
    goto LABEL_39;
  v38->fields.actiontype = 36;
  BattleLogicTask__setActor(v38, 3, *(_DWORD *)(v5 + 16), 0);
  v41 = v9->fields._items;
  v42 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v9->fields._version;
  if ( !v41 )
    goto LABEL_39;
  v43 = v9->fields._size;
  if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v38,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &v41->obj.klass + v43;
    v9->fields._size = v43 + 1;
    v44[4] = (Il2CppClass *)v38;
    sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v38, v39, v40);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskAddCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleData_o *battleEvent; // x0
  struct BattleData_o *v8; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v10; // x0
  int32_t COMMAND_CARD_NUM_TO_SELECT; // w1
  BattleCommandData_o *v12; // x22
  BattleServantData_o *v13; // x23
  BattleCommandCardTask_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C3AAAA & 1) == 0 )
  {
    sub_1C32C20(&BattleCommandCardTask_TypeInfo);
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAAA = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v8 = this->fields.data;
  if ( !v8 )
    goto LABEL_26;
  battleEvent = (BattleData_o *)v8->fields.battleEvent;
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
  v10 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  COMMAND_CARD_NUM_TO_SELECT = v10->static_fields->COMMAND_CARD_NUM_TO_SELECT;
  this->fields.commandIndex = COMMAND_CARD_NUM_TO_SELECT;
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, COMMAND_CARD_NUM_TO_SELECT, 0);
  if ( !battleEvent )
    goto LABEL_26;
  v12 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v12->fields.uniqueId, 0);
  if ( !battleEvent )
    goto LABEL_26;
  v13 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v13->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v13, 0), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1C32E7C(battleEvent);
  }
  v14 = (BattleCommandCardTask_o *)sub_1C32E6C(BattleCommandCardTask_TypeInfo);
  BattleCommandCardTask___ctor(v14, 0);
  if ( !v14 )
    goto LABEL_26;
  BattleLogicTask__setActor((BattleLogicTask_o *)v14, 2, v12->fields.uniqueId, 0);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, (BattleLogicTask_o *)v14, 0);
  BattleLogicTask__setAddAttackCommand((BattleLogicTask_o *)v14, data->fields.combodata, v12, 0);
  v14->fields.isCanCounterTask = 1;
  if ( !v6 )
    goto LABEL_26;
  items = v6->fields._items;
  v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v14,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v14;
    sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  BattleLogicTask_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4C3AABE & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AABE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v7 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v7, 0);
    if ( !v7 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddEnemy(v7, 0);
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v5 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1C32E7C(v6);
    }
    v7 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v7, 0);
    if ( !v7 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v7, 0);
  }
  if ( !v5 )
    goto LABEL_14;
  items = v5->fields._items;
  v11 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v7,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v7;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v7, v8, v9);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C3AAAF & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAAF = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_12;
  BattleLogic__resetOverKill(logic, 0);
  if ( !data
    || (BattleData__SetCommandAttacked(data, 0, 0),
        v8 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v8, 0),
        !v8)
    || (BattleLogicTask__setSystem(v8, 0), !v6)
    || (items = v6->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C32E7C(logic);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v8,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


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
    sub_1C32E7C(this);
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
  struct BattleData_o *v9; // x8
  int32_t v10; // w23
  BattleCommandData_o *v11; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v13; // x2
  BattleCommandCardTask_o *v14; // x22
  int32_t TreasureDvcId; // w0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4C3AAA9 & 1) == 0 )
  {
    sub_1C32C20(&BattleCommandCardTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAA9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)v9->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, void *))&battleEvent->klass[2]._1.byval_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.this_arg.data);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_18;
  if ( ltype == 3 )
    v10 = 2;
  else
    v10 = ltype == 2;
  this->fields.commandIndex = v10;
  if ( !data )
    goto LABEL_37;
  battleEvent = BattleData__getSelectCommand(data, v10, 0);
  if ( !battleEvent )
    goto LABEL_37;
  v11 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_18;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_37;
  ServantData = BattleData__getServantData((BattleData_o *)battleEvent, v11->fields.uniqueId, 0);
  battleEvent = (BattleCommandData_o *)BattleLogicNomal__IsEnableToAttack(ServantData, v11, v13);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
  {
LABEL_18:
    if ( v7 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v7,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v14 = (BattleCommandCardTask_o *)sub_1C32E6C(BattleCommandCardTask_TypeInfo);
  BattleCommandCardTask___ctor(v14, 0);
  if ( !v14 )
    goto LABEL_37;
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v14, data->fields.combodata, v11, v10, 0);
  if ( BattleData__isTutorial(data, 0) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0) )
      BattleCommandData__checkCriticalRate(v11, 0, 0);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v11, 0);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)v14, 2, v11->fields.uniqueId, 0);
  v14->fields.isCanCounterTask = 1;
  if ( v11->fields.treasureDvc < 1 )
  {
    BattleData__setTDChain(data, 0, 0);
    battleEvent = (BattleCommandData_o *)this->fields.logictarget;
    if ( battleEvent )
    {
      battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                             (BattleLogicTarget_o *)battleEvent,
                                             (BattleLogicTask_o *)v14,
                                             0);
      if ( v7 )
      {
        items = v7->fields._items;
        v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v14,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v14;
            sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v14, v23, v24);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1C32E7C(battleEvent);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_37;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0);
  if ( !ServantData )
    goto LABEL_37;
  BattleLogicTask__setActor((BattleLogicTask_o *)v14, 2, ServantData->fields.uniqueId, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v14, data->fields.combodata, v11, v10, 0);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v14, TreasureDvcId, 1, 0);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         (BattleLogicTask_o *)v14,
                                         0);
  if ( !v7 )
    goto LABEL_37;
  v19 = v7->fields._items;
  v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v7->fields._version;
  if ( !v19 )
    goto LABEL_37;
  v21 = v7->fields._size;
  if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v14,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    v7->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v14;
    sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
  }
  BattleData__setTDChain(data, 1, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v12; // x8
  __int64 v13; // x28
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  int v16; // w9
  BattleServantData_o *v17; // x27
  int32_t wasAttackTargetId; // w1
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
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x9
  BattleLogicNomal___c_c *v44; // x0
  System_Action_object__o *_9__19_0; // x20
  Il2CppObject *v46; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct BattleLogic_o *logic; // x8
  BattleLogicNomal_o *v52; // [xsp+8h] [xbp-A8h]
  _BOOL4 v53; // [xsp+14h] [xbp-9Ch]
  int32_t SvtId; // [xsp+18h] [xbp-98h]
  int32_t counterId; // [xsp+1Ch] [xbp-94h]
  SkillLvMaster_o *MasterData_object; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v58; // [xsp+30h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // [xsp+38h] [xbp-78h]
  char v60; // [xsp+48h] [xbp-68h]
  int32_t type; // [xsp+4Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4C3AAAB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C32C20(&BattleComboData_TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77990000);
    sub_1C32C20(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_BattleLogicNomal___c__taskCounterFunc_b__19_0__);
    sub_1C32C20(&BattleLogicNomal___c_TypeInfo);
    byte_4C3AAAB = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !data )
    goto LABEL_78;
  v12 = 304;
  if ( isEnemy )
    v12 = 312;
  v13 = *(__int64 *)((char *)&data->klass + v12);
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !v13 )
    goto LABEL_78;
  v14 = *(_QWORD *)(v13 + 24);
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    if ( isEnemy )
      v16 = 3;
    else
      v16 = 2;
    type = v16;
    do
    {
      if ( v15 >= (unsigned int)v14 )
LABEL_79:
        sub_1C32E84(Instance);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v13 + 4 * v15 + 32), 0);
      if ( Instance )
      {
        v17 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v17, 0);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = v17->fields.wasAttackTargetId;
            if ( wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0);
              if ( Instance )
              {
                v19 = (BattleServantData_o *)Instance;
                if ( v17->fields.isEnemy != *(unsigned __int8 *)(Instance + 507) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
                  Instance = BattleServantData__isAliveLogic(v19, 0, 0);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v17->fields.buffData;
                    if ( !Instance )
                      goto LABEL_78;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v17,
                                          v19,
                                          0,
                                          0);
                    if ( !Instance )
                      goto LABEL_78;
                    v20 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v52 = this;
                      v58 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_56949016(
                        v58,
                        v20,
                        (const MethodInfo_364F918 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77990000);
                      monitor = v20[1].monitor;
                      v22 = isSkillCounter;
                      if ( (int)monitor >= 1 )
                      {
                        v23 = 4;
                        v60 = 1;
                        v53 = v6;
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
                            v25 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v25, 0);
                            if ( !v25 )
                              goto LABEL_78;
                            BattleLogicTask__setActor(v25, type, v17->fields.uniqueId, 0);
                            BattleLogicTask__setTarget(v25, v17->fields.wasAttackTargetId, 0);
                            Instance = (__int64)v17->fields.buffData;
                            if ( !Instance )
                              goto LABEL_78;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v24, 1, 0);
                            if ( (Instance & 1) != 0 )
                            {
                              v17->fields.overkillTargetId = -1;
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
                              else if ( v24->fields.isUseAttack )
                              {
                                counterId = v24->fields.counterId;
                                SvtId = BattleServantData__getSvtId(v17, 0);
                                LimitCount = BattleServantData__getLimitCount(v17, 0);
                                v27 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
                                BattleCommandData___ctor_46474964(v27, counterId, SvtId, LimitCount, 0, -1, 0);
                                BattleServantData__SetOverwriteSvtCardType(v17, v27, 0);
                                BattleServantData__AddServantCommandCard(v17, v24->fields.counterId, 0);
                                v28 = (BattleComboData_o *)sub_1C32E6C(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v28, 0);
                                v29 = v28;
                                v22 = isSkillCounter;
                                v30 = v27;
                                v6 = v53;
                                BattleLogicTask__setActionCommand(v25, v29, v30, 0, 0);
                              }
                              else
                              {
                                Instance = (__int64)MasterData_object;
                                if ( !MasterData_object )
                                  goto LABEL_78;
                                Instance = (__int64)SkillLvMaster__GetEntity(
                                                      MasterData_object,
                                                      v24->fields.counterId,
                                                      v24->fields.counterLv,
                                                      0);
                                if ( !Instance )
                                {
                                  v6 = v53;
                                  goto LABEL_60;
                                }
                                v31 = Instance;
                                v32 = sub_1C32E6C(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v32, 0);
                                if ( !v32 )
                                  goto LABEL_78;
                                uniqueId = v17->fields.uniqueId;
                                v34 = *(_QWORD *)v32;
                                *(_QWORD *)(v32 + 16) = 20;
                                *(_DWORD *)(v32 + 24) = uniqueId;
                                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v34 + 376))(
                                  v32,
                                  *(unsigned int *)(v31 + 16),
                                  *(_QWORD *)(v34 + 384));
                                *(_DWORD *)(v32 + 36) = *(_DWORD *)(v31 + 20);
                                Instance = sub_1C32CC8(int___TypeInfo, 1);
                                if ( !Instance )
                                  goto LABEL_78;
                                v35 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_79;
                                *(_DWORD *)(Instance + 32) = v17->fields.wasAttackTargetId;
                                Instance = sub_1C32CC8(int___TypeInfo, 1);
                                if ( !Instance )
                                  goto LABEL_78;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_79;
                                *(_DWORD *)(Instance + 32) = v17->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  v25,
                                  (BattleSkillInfoData_o *)v32,
                                  v35,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  0);
                                v6 = v53;
                                v22 = isSkillCounter;
                              }
                              Instance = (__int64)v59;
                              if ( !v59 )
                                goto LABEL_78;
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v59,
                                                    v24->fields.buffId,
                                                    (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_78;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0);
                              BattleLogicTask__setMessage(v25, CounterMessage, 2, 0);
                              v25->fields.isCounter = 1;
                              if ( (v60 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v25,
                                  v17,
                                  (BattleBuffData_BuffData_array *)v20,
                                  0);
                              if ( !v10 )
                                goto LABEL_78;
                              items = v10->fields._items;
                              v40 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_78;
                              size = v10->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v25,
                                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v42 = &items->obj.klass + size;
                                v10->fields._size = size + 1;
                                v42[4] = (Il2CppClass *)v25;
                                sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v25, v37, v38);
                              }
                              Instance = (__int64)v58;
                              if ( !v58 )
                                goto LABEL_78;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v58,
                                           (Il2CppObject *)v24,
                                           (const MethodInfo_36500E8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v60 = 0;
                            }
                          }
LABEL_60:
                          LODWORD(monitor) = v20[1].monitor;
                          v43 = v23 - 3;
                          ++v23;
                        }
                        while ( v43 < (int)monitor );
                      }
                      v44 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v44 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v52;
                      _9__19_0 = (System_Action_object__o *)v44->static_fields->__9__19_0;
                      if ( !_9__19_0 )
                      {
                        if ( !v44->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v44);
                          v44 = BattleLogicNomal___c_TypeInfo;
                        }
                        v46 = (Il2CppObject *)v44->static_fields->__9;
                        _9__19_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__19_0,
                          v46,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__19_0__,
                          0);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__19_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__19_0;
                        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v48, v49);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v58,
                        (System_Action_T__o *)_9__19_0,
                        (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
  if ( !v10 )
    goto LABEL_78;
  if ( v10->fields._size < 1 )
    goto LABEL_76;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_78:
    sub_1C32E7C(Instance);
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
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C3AAB4 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAB4 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v9 + 128) = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 128), (int32_t)gameObject, v12, v13);
  if ( !svtData )
    goto LABEL_15;
  v14 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v9, v14, svtData->fields.uniqueId, 0);
  if ( !v8
    || (items = v8->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C32E7C(v10);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v9;
    sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), v9, v15, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_String_o *v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  bool v20; // w23
  System_String_o *v21; // x0
  BattleData_o *v22; // x8
  System_String_o *v23; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int32_t uniqueId; // w2
  System_String_o *v35; // x20
  BattleLogicTask_o *v36; // x0
  System_String_o *v37; // x1
  struct BattleData_o *v38; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v40; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v42; // x2
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  Il2CppObject *v49; // x0
  System_String_o *v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int v58; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3AAB5 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2886/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_1C32C20(&StringLiteral_8755/*"MOTION_ENTRY"*/);
    sub_1C32C20(&StringLiteral_2884/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_1C32C20(&StringLiteral_2885/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_1C32C20(&StringLiteral_8758/*"MOTION_ENTRY_TAC"*/);
    byte_4C3AAB5 = 1;
  }
  v9 = StringLiteral_8758/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_8755/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0);
  if ( !v12 )
    goto LABEL_30;
  v14 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v14, 0);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v12 + 128) = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 128), (int32_t)gameObject, v16, v17);
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
          v20 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2885/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0);
LABEL_23:
              v50 = v21;
              BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, 0);
              v36 = (BattleLogicTask_o *)v12;
              v37 = v50;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v20 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2884/*"BATTLE_SUBENTRY_ENEMY"*/, 0);
          v38 = this->fields.data;
          if ( !v38 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v38->fields._EnemyCountStartValue_k__BackingField;
          v40 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v38, 0);
          v58 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v42)
              + EnemyCountStartValue_k__BackingField;
          v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v43, v44, v45, v46, v47, v48);
          v21 = System_String__Format(v40, v49, 0);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1C32E7C(battle_ent);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2886/*"BATTLE_SUBENTRY_PLAYER"*/, 0);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_30;
  v23 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v22, 0);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v25);
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember, v26, v27, v28, v29, v30, v31);
  v33 = System_String__Format(v23, v32, 0);
  uniqueId = svtData->fields.uniqueId;
  v35 = v33;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, 0);
  v36 = (BattleLogicTask_o *)v12;
  v37 = v35;
LABEL_24:
  BattleLogicTask__setMessage(v36, v37, 1, 0);
  if ( !v11 )
    goto LABEL_30;
  items = v11->fields._items;
  v54 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v56[4] = (Il2CppClass *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v56 + 4), v12, v51, v52);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23___ctor(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23__MoveNext(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  Il2CppObject *v7; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleData_o *data; // x8
  struct BattleCommandData_array *selectcommandlist; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v20; // x0
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v24; // x8
  int32_t v25; // w9
  int32_t _7__wrap7; // w8
  int v27; // w9
  int32_t _7__wrap4; // w8
  int v29; // w9
  bool result; // w0
  CGThumbnailListItem_o *p__7__wrap3; // x8
  struct BattleCommandData_array *v32; // x10
  struct BattleCommandData_array *_7__wrap3; // t1
  int32_t max_length; // w11
  BattleCommandData_o *v35; // x19
  BattleData_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *ServantData; // x20
  System_Collections_Generic_List_object__o *selectSvtList_5__2; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  const MethodInfo *v45; // x2
  _BOOL8 IsEnableToAttack; // x0
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v47; // x20
  BattleLogicNomal___c_c *v48; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v49; // x19
  System_Func_object__int__o *_9__23_1; // x21
  Il2CppObject *v51; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v55; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v58; // x9
  int32_t *p_offset; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v65; // x8
  __int64 v66; // x0
  BattleData_o *v67; // x0
  struct BattleLogicNomal___c__DisplayClass23_0_o *_8__1; // x19
  System_Collections_Generic_IEnumerable_T__o *FieldAliveServantArray; // x21
  System_Collections_Generic_List_object__o *v70; // x20
  __int64 v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_Collections_Generic_List_object__o *v74; // x19
  Il2CppObject *v75; // x21
  System_Action_object__o *v76; // x20
  __int64 v77; // x0
  BattleCommandData_o *v78; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x0
  struct BattleData_o *v83; // x8
  BattleCommandData_o *notSelectedCommand_5__3; // x0
  struct BattleCommandData_o *v85; // x0
  __int64 v86; // x0
  struct BattleLogicNomal___c__DisplayClass23_0_o *v87; // x8
  System_Collections_Generic_List_object__o *otherSvtList; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v89; // x9
  __int128 v90; // q0
  struct System_Collections_Generic_List_Enumerator_BattleServantData__o *p__7__wrap8; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v94; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v95; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v96; // x8
  __int64 v97; // x9
  int32_t *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x0
  BattleSkillInfoData_o *v101; // x19
  BattleLogicSkill_o *logicskill; // x20
  __int64 v103; // x0
  struct BattleLogicTask_array *v104; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  struct BattleLogicTask_array *_7__wrap6; // x10
  unsigned int v109; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  const MethodInfo *v115; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v116; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  struct BattleLogicTask_o *v119; // x1
  const MethodInfo *v120; // x1
  const MethodInfo *v121; // x2
  BattleServantData_o *current; // x19
  _BOOL8 v123; // x0
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v124; // x20
  BattleLogicNomal___c_c *v125; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v126; // x19
  System_Func_object__int__o *_9__23_2; // x21
  Il2CppObject *v128; // x22
  struct BattleLogicNomal___c_StaticFields *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v132; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v133; // x20
  System_Linq_IOrderedEnumerable_TSource__c *v134; // x8
  __int64 v135; // x9
  int32_t *v136; // x10
  __int64 v137; // x0
  __int64 v138; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  __int64 v141; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v142; // x8
  __int64 v143; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v144; // x8
  BattleData_o *v145; // x0
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v146; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v147; // x8
  __int64 v148; // x9
  int32_t *v149; // x10
  __int64 v150; // x0
  __int64 v151; // x0
  BattleSkillInfoData_o *v152; // x19
  BattleLogicSkill_o *v153; // x20
  __int64 v154; // x0
  struct BattleLogicTask_array *v155; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v156; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  struct BattleLogicTask_array *v159; // x10
  unsigned int v160; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v161; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v162; // x8
  __int64 v163; // x9
  int *v164; // x10
  __int64 v165; // x0
  const MethodInfo *v166; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v167; // x0
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  struct BattleLogicTask_o *v170; // x1
  System_Collections_Generic_List_Enumerator_T__o v171[2]; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v172; // [xsp+48h] [xbp-78h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o **v173; // [xsp+50h] [xbp-70h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *v174; // [xsp+58h] [xbp-68h] BYREF

  v4 = this;
  v174 = this;
  if ( (byte_4C3AACE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleServantData__TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C32C20(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor___77997784);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C32C20(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__23_1__);
    sub_1C32C20(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__23_2__);
    sub_1C32C20(&Method_BattleLogicNomal___c__DisplayClass23_0__GetConfirmCommandFunctionBuffTask_b__0__);
    sub_1C32C20(&BattleLogicNomal___c__DisplayClass23_0_TypeInfo);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *)sub_1C32C20(&BattleLogicNomal___c_TypeInfo);
    byte_4C3AACE = 1;
  }
  v172 = 0;
  v173 = &v174;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    _7__wrap4 = v4->fields.__7__wrap4;
    v4->fields.__1__state = -5;
    v29 = _7__wrap4 + 1;
    v4->fields.__7__wrap4 = _7__wrap4 + 1;
    goto LABEL_144;
  }
  if ( _1__state == 1 )
  {
    _7__wrap7 = v4->fields.__7__wrap7;
    v4->fields.__1__state = -3;
    v27 = _7__wrap7 + 1;
    v4->fields.__7__wrap7 = _7__wrap7 + 1;
    goto LABEL_83;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v7 = (Il2CppObject *)sub_1C32E6C(BattleLogicNomal___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v7, 0);
  v8 = v174;
  v174->fields.__8__1 = (struct BattleLogicNomal___c__DisplayClass23_0_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.__8__1, (int32_t)v7, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v12 = v174;
  v174->fields._selectSvtList_5__2 = (struct System_Collections_Generic_List_BattleServantData__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->fields._selectSvtList_5__2, (int32_t)v11, v13, v14);
  if ( !_4__this )
    sub_1C32E7C(v15);
  data = _4__this->fields.data;
  if ( !data )
    sub_1C32E7C(v15);
  selectcommandlist = data->fields.selectcommandlist;
  v20 = v174;
  v174->fields.__7__wrap3 = selectcommandlist;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->fields.__7__wrap3, (int32_t)selectcommandlist, v16, v17);
  v24 = v174;
  v25 = 0;
  v174->fields.__7__wrap4 = 0;
LABEL_14:
  _7__wrap3 = v24->fields.__7__wrap3;
  p__7__wrap3 = (CGThumbnailListItem_o *)&v24->fields.__7__wrap3;
  v32 = _7__wrap3;
  if ( !_7__wrap3 )
    sub_1C32E7C(v21);
  max_length = v32->max_length;
  if ( v25 < max_length )
  {
    if ( v25 >= (unsigned int)max_length )
      sub_1C32E84(v21);
    if ( !_4__this )
      sub_1C32E7C(v21);
    v35 = v32->m_Items[v25];
    if ( !v35 )
      sub_1C32E7C(v21);
    v36 = _4__this->fields.data;
    if ( !v36 )
      sub_1C32E7C(0);
    ServantData = (Il2CppObject *)BattleData__getServantData(v36, v35->fields.uniqueId, 0);
    selectSvtList_5__2 = (System_Collections_Generic_List_object__o *)v174->fields._selectSvtList_5__2;
    if ( !selectSvtList_5__2 )
      sub_1C32E7C(0);
    items = selectSvtList_5__2->fields._items;
    v42 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++selectSvtList_5__2->fields._version;
    if ( !items )
      sub_1C32E7C(selectSvtList_5__2);
    size = selectSvtList_5__2->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectSvtList_5__2,
        ServantData,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      selectSvtList_5__2->fields._size = size + 1;
      v44[4] = (Il2CppClass *)ServantData;
      sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 4), (int32_t)ServantData, v37, v38);
    }
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack((BattleServantData_o *)ServantData, v35, v45);
    if ( !ServantData )
      sub_1C32E7C(IsEnableToAttack);
    v47 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
            (BattleServantData_o *)ServantData,
            v35,
            IsEnableToAttack,
            0,
            0);
    v48 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v48 = BattleLogicNomal___c_TypeInfo;
    }
    v49 = v174;
    _9__23_1 = (System_Func_object__int__o *)v48->static_fields->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = BattleLogicNomal___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v48->static_fields->__9;
      _9__23_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_1,
        v51,
        Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__23_1__,
        0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__23_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__23_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__23_1, (int32_t)_9__23_1, v53, v54);
    }
    v55 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v47,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    v56 = v55;
    if ( !v55 )
      sub_1C32E7C(0);
    klass = v55->klass;
    v58 = *(unsigned __int16 *)&v55->klass->_2.rank;
    if ( *(_WORD *)&v55->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
      {
        --v58;
        p_offset += 4;
        if ( !v58 )
          goto LABEL_37;
      }
      v60 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_37:
      v60 = sub_1C83438(v55, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
    }
    v61 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v60)(
            v56,
            *(_QWORD *)(v60 + 8));
    if ( !v49 )
      sub_1C32E7C(v61);
    v49->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v61;
    sub_1C32BC4((CGThumbnailListItem_o *)&v49->fields.__7__wrap5, v61, v62, v63);
    v65 = v174;
    v174->fields.__1__state = -3;
    while ( 1 )
    {
      _7__wrap5 = v65->fields.__7__wrap5;
      if ( !_7__wrap5 )
        sub_1C32E7C(v64);
      v111 = _7__wrap5->klass;
      v112 = *(unsigned __int16 *)&_7__wrap5->klass->_2.rank;
      if ( *(_WORD *)&_7__wrap5->klass->_2.rank )
      {
        v113 = &v111->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v113 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v112;
          v113 += 4;
          if ( !v112 )
            goto LABEL_91;
        }
        v114 = (__int64)&v111->vtable[*v113];
      }
      else
      {
LABEL_91:
        v114 = sub_1C83438(_7__wrap5, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v114)(
              _7__wrap5,
              *(_QWORD *)(v114 + 8))
          & 1) == 0 )
      {
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally1(v174, v115);
        v116 = v174;
        v174->fields.__7__wrap5 = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v116->fields.__7__wrap5, 0, v117, v118);
        v24 = v174;
        v25 = v174->fields.__7__wrap4 + 1;
        v174->fields.__7__wrap4 = v25;
        goto LABEL_14;
      }
      v95 = v174->fields.__7__wrap5;
      if ( !v95 )
        sub_1C32E7C(v174);
      v96 = v95->klass;
      v97 = *(unsigned __int16 *)&v95->klass->_2.rank;
      if ( *(_WORD *)&v95->klass->_2.rank )
      {
        v98 = &v96->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v98 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
        {
          --v97;
          v98 += 4;
          if ( !v97 )
            goto LABEL_75;
        }
        v99 = (__int64)&v96->vtable[*v98];
      }
      else
      {
LABEL_75:
        v99 = sub_1C83438(
                v174->fields.__7__wrap5,
                System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
                0);
      }
      v100 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v99)(
               v95,
               *(_QWORD *)(v99 + 8));
      if ( !_4__this )
        sub_1C32E7C(v100);
      v101 = (BattleSkillInfoData_o *)v100;
      logicskill = _4__this->fields.logicskill;
      v103 = sub_1C32CC8(int___TypeInfo, 1);
      if ( !v101 )
        sub_1C32E7C(v103);
      if ( !v103 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v103 + 24) )
        sub_1C32E84(v103);
      *(_DWORD *)(v103 + 32) = v101->fields.svtUniqueId;
      if ( !logicskill )
        sub_1C32E7C(v103);
      v104 = BattleLogicSkill__taskSkill(logicskill, v101, (System_Int32_array *)v103, 0, 0, 0, 0, 0, 0, 0);
      v105 = v174;
      v174->fields.__7__wrap6 = v104;
      sub_1C32BC4((CGThumbnailListItem_o *)&v105->fields.__7__wrap6, (int32_t)v104, v106, v107);
      v4 = v174;
      v27 = 0;
      v174->fields.__7__wrap7 = 0;
LABEL_83:
      _7__wrap6 = v4->fields.__7__wrap6;
      if ( !_7__wrap6 )
        sub_1C32E7C(this);
      v109 = _7__wrap6->max_length;
      if ( v27 < (int)v109 )
        break;
      v4->fields.__7__wrap6 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
      v65 = v174;
    }
    if ( v27 >= v109 )
      sub_1C32E84(this);
    v119 = _7__wrap6->m_Items[v27];
    v4->fields.__2__current = v119;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v119, v2, v3);
    result = 1;
    v174->fields.__1__state = 1;
    return result;
  }
  p__7__wrap3->klass = 0;
  sub_1C32BC4(p__7__wrap3, 0, v22, v23);
  if ( !_4__this )
    sub_1C32E7C(v66);
  v67 = _4__this->fields.data;
  if ( !v67 )
    sub_1C32E7C(0);
  _8__1 = v174->fields.__8__1;
  FieldAliveServantArray = (System_Collections_Generic_IEnumerable_T__o *)BattleData__GetFieldAliveServantArray(
                                                                            v67,
                                                                            1,
                                                                            0,
                                                                            0,
                                                                            0);
  v70 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v70,
    FieldAliveServantArray,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_BattleServantData___ctor___77997784);
  if ( !_8__1 )
    sub_1C32E7C(v71);
  _8__1->fields.otherSvtList = (struct System_Collections_Generic_List_BattleServantData__o *)v70;
  sub_1C32BC4((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)v70, v72, v73);
  v75 = (Il2CppObject *)v174->fields.__8__1;
  v74 = (System_Collections_Generic_List_object__o *)v174->fields._selectSvtList_5__2;
  v76 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v76,
    v75,
    Method_BattleLogicNomal___c__DisplayClass23_0__GetConfirmCommandFunctionBuffTask_b__0__,
    0);
  if ( !v74 )
    sub_1C32E7C(v77);
  System_Collections_Generic_List_object___ForEach(
    v74,
    (System_Action_T__o *)v76,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v78 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v78, 0);
  v79 = v174;
  v174->fields._notSelectedCommand_5__3 = v78;
  sub_1C32BC4((CGThumbnailListItem_o *)&v79->fields._notSelectedCommand_5__3, (int32_t)v78, v80, v81);
  v83 = _4__this->fields.data;
  if ( !v83 )
    sub_1C32E7C(v82);
  notSelectedCommand_5__3 = v174->fields._notSelectedCommand_5__3;
  if ( !notSelectedCommand_5__3 )
    sub_1C32E7C(0);
  BattleCommandData__setCombo(notSelectedCommand_5__3, v83->fields.combodata, 0, 0);
  v85 = v174->fields._notSelectedCommand_5__3;
  if ( !v85 )
    sub_1C32E7C(0);
  v85->fields._type = -1;
  BattleCommandData__ResetOverwriteSvtCardType(v85, 0);
  v87 = v174->fields.__8__1;
  if ( !v87 )
    sub_1C32E7C(v86);
  otherSvtList = (System_Collections_Generic_List_object__o *)v87->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    v171,
    otherSvtList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v89 = v174;
  v90 = *(_OWORD *)&v171[0].fields._list;
  p__7__wrap8 = &v174->fields.__7__wrap8;
  v171[1] = v171[0];
  v174->fields.__7__wrap8.fields._current = (struct BattleServantData_o *)v171[0].fields._current;
  *(_OWORD *)&v89->fields.__7__wrap8.fields._list = v90;
  sub_1C32BC4((CGThumbnailListItem_o *)p__7__wrap8, 0, v92, v93);
  v94 = v174;
  v174->fields.__1__state = -4;
LABEL_106:
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v94->fields.__7__wrap8,
          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally2(v174, v120);
    v144 = v174;
    v174->fields.__7__wrap8.fields._list = 0;
    *(_QWORD *)&v144->fields.__7__wrap8.fields._index = 0;
    v144->fields.__7__wrap8.fields._current = 0;
    if ( !_4__this )
      sub_1C32E7C(v143);
    v145 = _4__this->fields.data;
    if ( !v145 )
      sub_1C32E7C(0);
    BattleData__ClearAllExecutedOnceConfirmCommandFunctionBuffList(v145, 0);
    return 0;
  }
  current = v174->fields.__7__wrap8.fields._current;
  v123 = BattleLogicNomal__IsEnableToAttack(current, v174->fields._notSelectedCommand_5__3, v121);
  if ( !current )
    sub_1C32E7C(v123);
  v124 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
           current,
           v174->fields._notSelectedCommand_5__3,
           v123,
           1,
           0);
  v125 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v125 = BattleLogicNomal___c_TypeInfo;
  }
  v126 = v174;
  _9__23_2 = (System_Func_object__int__o *)v125->static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( !v125->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v125);
      v125 = BattleLogicNomal___c_TypeInfo;
    }
    v128 = (Il2CppObject *)v125->static_fields->__9;
    _9__23_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__23_2,
      v128,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__23_2__,
      0);
    v129 = BattleLogicNomal___c_TypeInfo->static_fields;
    v129->__9__23_2 = (struct System_Func_BattleSkillInfoData__int__o *)_9__23_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v129->__9__23_2, (int32_t)_9__23_2, v130, v131);
  }
  v132 = System_Linq_Enumerable__OrderBy_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v124,
           (System_Func_TSource__TKey__o *)_9__23_2,
           (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v133 = v132;
  if ( !v132 )
    sub_1C32E7C(0);
  v134 = v132->klass;
  v135 = *(unsigned __int16 *)&v132->klass->_2.rank;
  if ( *(_WORD *)&v132->klass->_2.rank )
  {
    v136 = &v134->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v136 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v135;
      v136 += 4;
      if ( !v135 )
        goto LABEL_119;
    }
    v137 = (__int64)&v134->vtable[*v136];
  }
  else
  {
LABEL_119:
    v137 = sub_1C83438(v132, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v138 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v137)(
           v133,
           *(_QWORD *)(v137 + 8));
  if ( !v126 )
    sub_1C32E7C(v138);
  v126->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v138;
  sub_1C32BC4((CGThumbnailListItem_o *)&v126->fields.__7__wrap5, v138, v139, v140);
  v142 = v174;
  v174->fields.__1__state = -5;
  while ( 1 )
  {
    v161 = v142->fields.__7__wrap5;
    if ( !v161 )
      sub_1C32E7C(v141);
    v162 = v161->klass;
    v163 = *(unsigned __int16 *)&v161->klass->_2.rank;
    if ( *(_WORD *)&v161->klass->_2.rank )
    {
      v164 = &v162->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v164 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v163;
        v164 += 4;
        if ( !v163 )
          goto LABEL_152;
      }
      v165 = (__int64)&v162->vtable[*v164];
    }
    else
    {
LABEL_152:
      v165 = sub_1C83438(v161, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v165)(
            v161,
            *(_QWORD *)(v165 + 8))
        & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally3(v174, v166);
      v167 = v174;
      v174->fields.__7__wrap5 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v167->fields.__7__wrap5, 0, v168, v169);
      v94 = v174;
      goto LABEL_106;
    }
    v146 = v174->fields.__7__wrap5;
    if ( !v146 )
      sub_1C32E7C(v174);
    v147 = v146->klass;
    v148 = *(unsigned __int16 *)&v146->klass->_2.rank;
    if ( *(_WORD *)&v146->klass->_2.rank )
    {
      v149 = &v147->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v149 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v148;
        v149 += 4;
        if ( !v148 )
          goto LABEL_136;
      }
      v150 = (__int64)&v147->vtable[*v149];
    }
    else
    {
LABEL_136:
      v150 = sub_1C83438(
               v174->fields.__7__wrap5,
               System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
               0);
    }
    v151 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v150)(
             v146,
             *(_QWORD *)(v150 + 8));
    if ( !_4__this )
      sub_1C32E7C(v151);
    v152 = (BattleSkillInfoData_o *)v151;
    v153 = _4__this->fields.logicskill;
    v154 = sub_1C32CC8(int___TypeInfo, 1);
    if ( !v152 )
      sub_1C32E7C(v154);
    if ( !v154 )
      sub_1C32E7C(0);
    if ( !*(_DWORD *)(v154 + 24) )
      sub_1C32E84(v154);
    *(_DWORD *)(v154 + 32) = v152->fields.svtUniqueId;
    if ( !v153 )
      sub_1C32E7C(v154);
    v155 = BattleLogicSkill__taskSkill(v153, v152, (System_Int32_array *)v154, 0, 0, 0, 0, 0, 0, 0);
    v156 = v174;
    v174->fields.__7__wrap6 = v155;
    sub_1C32BC4((CGThumbnailListItem_o *)&v156->fields.__7__wrap6, (int32_t)v155, v157, v158);
    v4 = v174;
    v29 = 0;
    v174->fields.__7__wrap4 = 0;
LABEL_144:
    v159 = v4->fields.__7__wrap6;
    if ( !v159 )
      sub_1C32E7C(this);
    v160 = v159->max_length;
    if ( v29 < (int)v160 )
      break;
    v4->fields.__7__wrap6 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
    v142 = v174;
  }
  if ( v29 >= v160 )
    sub_1C32E84(this);
  v170 = v159->m_Items[v29];
  v4->fields.__2__current = v170;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v170, v2, v3);
  result = 1;
  v174->fields.__1__state = 2;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3AAD2 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_TypeInfo);
    byte_4C3AAD2 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C32E6C(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)this;
}


BattleLogicTask_o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23__System_Collections_Generic_IEnumerator_BattleLogicTask__get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23__System_Collections_IEnumerator_Reset(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23__System_Collections_IEnumerator_get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23__System_IDisposable_Dispose(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFB:
    case 2:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally3(this, method);
      goto LABEL_3;
    case 0xFFFFFFFC:
LABEL_3:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally2(this, method);
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally1(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C3AACF & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C3AACF = 1;
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
      v7 = sub_1C83438(_7__wrap5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v7)(
      _7__wrap5,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally2(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3AAD0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    byte_4C3AAD0 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap8,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23____m__Finally3(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__23_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C3AAD1 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C3AAD1 = 1;
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
      v7 = sub_1C83438(_7__wrap5, System_IDisposable_TypeInfo, 0);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C3AAC7 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicNomal___c_TypeInfo);
    byte_4C3AAC7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicNomal___c___ctor(BattleLogicNomal___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleServantData_o *BattleLogicNomal___c___CreateCommandBattle_b__27_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  return targetSvtData;
}


int32_t BattleLogicNomal___c___CreateCommandBattle_b__27_2(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *BattleLogicNomal___c___CreateCommandBattle_b__27_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_4C3AAC8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4C3AAC8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
}


bool BattleLogicNomal___c___CreateCommandBattle_b__27_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0);
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__23_1(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__23_2(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__25_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


void BattleLogicNomal___c___createBuffAddPlayer_b__45_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1C32E7C(this);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0);
}


void BattleLogicNomal___c___taskCounterFunc_b__19_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  BattleBuffData_BuffData__RevertUnused(x, 1, 0);
}


void BattleLogicNomal___c__DisplayClass23_0___ctor(
        BattleLogicNomal___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass23_0___GetConfirmCommandFunctionBuffTask_b__0(
        BattleLogicNomal___c__DisplayClass23_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *otherSvtList; // x0

  if ( (byte_4C3AAC9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__Remove__);
    byte_4C3AAC9 = 1;
  }
  otherSvtList = (System_Collections_Generic_List_object__o *)this->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___Remove(
    otherSvtList,
    (Il2CppObject *)svt,
    (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_BattleServantData__Remove__);
}


void BattleLogicNomal___c__DisplayClass27_0___ctor(
        BattleLogicNomal___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleBuffData_CheckInvokeBuff_o *BattleLogicNomal___c__DisplayClass27_0___CreateCommandBattle_b__1(
        BattleLogicNomal___c__DisplayClass27_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  BuffList_c *v5; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v8; // x22

  if ( (byte_4C3AACA & 1) == 0 )
  {
    sub_1C32C20(&BuffList_TypeInfo);
    sub_1C32C20(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_4C3AACA = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_1C32E6C(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v8, actSvtData, targetSvtData, CommandCodeFunctionActs, 0);
  return v8;
}


void BattleLogicNomal___c__DisplayClass27_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass27_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass27_0_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4C3AACB & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass27_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4C3AACB = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass27_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_30CB2C8 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C32E7C(this);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
  }
}


void BattleLogicNomal___c__DisplayClass27_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass27_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass27_0_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4C3AACC & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass27_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4C3AACC = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass27_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_30CB2C8 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C32E7C(this);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
  }
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass27_0___CreateCommandBattle_b__6(
        BattleLogicNomal___c__DisplayClass27_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleLogicNomal___c__DisplayClass27_0_o *v4; // x20
  struct BattleActionData_o *actiondata; // x8
  BattleServantData_o *result; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass27_0_o *)this->fields.command) == 0)
    || (BattleCommandData__UpdateCritical(
          (BattleCommandData_o *)this,
          v4->fields.actSvtData,
          targetSvtData,
          _4__this->fields.data,
          0),
        !targetSvtData)
    || (actiondata = v4->fields.actiondata) == 0 )
  {
    sub_1C32E7C(this);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


System_Collections_Generic_IEnumerable_BattleServantData__o *BattleLogicNomal___c__DisplayClass27_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass27_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_4C3AACD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_4C3AACD = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass27_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass27_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass27_0_o *)_4__this->fields.data) == 0 )
    sub_1C32E7C(this);
  return BattleData__getServantData((BattleData_o *)this, id, 0);
}


void BattleLogicNomal___c__DisplayClass40_0___ctor(
        BattleLogicNomal___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass40_0___createEndTurnPlayer_b__0(
        BattleLogicNomal___c__DisplayClass40_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1C32E7C(this);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
}


void BattleLogicNomal___c__DisplayClass43_0___ctor(
        BattleLogicNomal___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass43_0___createEndTurnEnemy_b__0(
        BattleLogicNomal___c__DisplayClass43_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1C32E7C(this);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
}


void BattleLogicNomal___c__DisplayClass53_0___ctor(
        BattleLogicNomal___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass53_0___shiftServantTaskReaction_b__0(
        BattleLogicNomal___c__DisplayClass53_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.uniqueId == this->fields.uniqueId;
}