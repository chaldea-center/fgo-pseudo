void BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BattleLogicTask_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A3AC & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask___TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    byte_4C2A3AC = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C2D538(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5);
  v6 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0);
  this->fields.tmpShiftTask = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tmpShiftTask, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(this, method);
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
  const MethodInfo *v11; // x3
  BattleData_o *data; // x19
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v14; // x28
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleActionData_o *v17; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BattleActionData_o **v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleCommandData_o *command; // x1
  BattleCommandData_o **v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  BattleActionData_o *v27; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v31; // x8
  int32_t v32; // w25
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v34; // x22
  bool v35; // w8
  BattleActionData_o *result; // x0
  System_Collections_Generic_List_object__o *v37; // x19
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_IEnumerable_TSource__o **v46; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_List_object__o **v48; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x19
  System_Func_T__TResult__o *v50; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x19
  BattleLogicNomal___c_c *v52; // x8
  System_Func_object__bool__o *_9__25_9; // x22
  Il2CppObject *v54; // x23
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  BattleLogicNomal___c_c *v60; // x8
  System_Func_object__object__o *_9__25_0; // x22
  Il2CppObject *v62; // x23
  struct BattleLogicNomal___c_StaticFields *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Func_object__object__o *v66; // x23
  __int64 v67; // x9
  BuffList_c *v68; // x8
  BattleLogicNomal___c_c *v69; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x22
  System_Func_T__TResult__o *_9__25_2; // x25
  Il2CppObject *v72; // x19
  struct BattleLogicNomal___c_StaticFields *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Func_T__TResult__o *_9__25_3; // x19
  Il2CppObject *v77; // x23
  struct BattleLogicNomal___c_StaticFields *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x8
  int64_t v85; // x19
  System_Action_object__object__o *v86; // x22
  BattleCommandData_o **v87; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v89; // x22
  __int64 v90; // x8
  __int64 v91; // x2
  __int64 v92; // x22
  const MethodInfo *v93; // x3
  __int64 v94; // x19
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Func_object__object__o *v97; // x19
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  Il2CppObject *MasterData_object; // x24
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v101; // x25
  const MethodInfo *v102; // x5
  __int64 v103; // x8
  unsigned __int64 v104; // x23
  int v105; // w19
  int32_t v106; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v107; // x27
  __int64 v108; // x8
  __int64 v109; // x19
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  __int64 v115; // x22
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  __int64 v120; // x8
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0
  Il2CppObject *v124; // x0
  Il2CppObject *v125; // x1
  __int64 v126; // x8
  __int64 v127; // x9
  int *v128; // x10
  __int64 v129; // x0
  unsigned __int64 v130; // x9
  int v131; // w19
  int v132; // w8
  BuffList_ACTION_array *v133; // x27
  int v134; // w8
  __int64 v135; // x8
  __int64 v136; // x19
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x22
  __int64 v142; // x8
  __int64 v143; // x9
  int *v144; // x10
  __int64 v145; // x0
  __int64 v146; // x8
  __int64 v147; // x9
  int *v148; // x10
  __int64 v149; // x0
  __int64 v150; // x1
  BattleServantData_o *v151; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_46035900; // x0
  __int64 v153; // x1
  __int64 v154; // x2
  BattleBuffData_BuffData_array *v155; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v157; // x26
  BattleBuffData_BuffData_o *v158; // x29
  BattleLogicFunction_o *logicfunction; // x23
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v161; // x1
  __int64 v162; // x8
  __int64 v163; // x9
  int *v164; // x10
  __int64 v165; // x0
  __int64 v166; // x8
  __int64 v167; // x19
  __int64 v168; // x9
  int *v169; // x10
  __int64 v170; // x0
  __int64 v171; // x0
  __int64 v172; // x1
  __int64 v173; // x29
  BattleActionData_DamageData_o *v174; // x22
  __int64 v175; // x8
  __int64 v176; // x9
  int *v177; // x10
  __int64 v178; // x0
  __int64 v179; // x8
  __int64 v180; // x9
  int *v181; // x10
  __int64 v182; // x0
  __int64 v183; // x1
  BattleServantData_o *v184; // x27
  BattleLogic_o *v185; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v187; // x1
  BattleActionData_DamageData_o *v188; // x19
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v190; // x23
  BattleActionData_o *v191; // x0
  _BOOL8 v192; // x0
  __int64 v193; // x1
  BattleActionData_o *v194; // x8
  __int64 v195; // x8
  __int64 v196; // x9
  int *v197; // x10
  __int64 v198; // x0
  BattleActionData_o *v199; // x19
  BattleActionData_o *v200; // x19
  BattleActionData_o *v201; // x19
  struct BattleData_o *v202; // x8
  __int64 v203; // x22
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v205; // x19
  const MethodInfo *v206; // x5
  __int64 v207; // x8
  unsigned __int64 v208; // x26
  unsigned int v209; // w19
  int32_t v210; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x27
  __int64 v212; // x8
  __int64 v213; // x19
  __int64 v214; // x9
  int *v215; // x10
  __int64 v216; // x0
  __int64 v217; // x0
  __int64 v218; // x1
  __int64 v219; // x22
  __int64 v220; // x8
  __int64 v221; // x9
  int *v222; // x10
  __int64 v223; // x0
  __int64 v224; // x8
  __int64 v225; // x9
  int *v226; // x10
  __int64 v227; // x0
  Il2CppObject *v228; // x0
  Il2CppObject *v229; // x1
  __int64 v230; // x8
  __int64 v231; // x9
  int *v232; // x10
  __int64 v233; // x0
  unsigned __int64 v234; // x26
  int v235; // w19
  int v236; // w8
  BuffList_ACTION_array *v237; // x27
  int v238; // w8
  __int64 v239; // x8
  __int64 v240; // x19
  __int64 v241; // x9
  int *v242; // x10
  __int64 v243; // x0
  __int64 v244; // x1
  __int64 v245; // x22
  __int64 v246; // x8
  __int64 v247; // x9
  int *v248; // x10
  __int64 v249; // x0
  __int64 v250; // x8
  __int64 v251; // x9
  int *v252; // x10
  __int64 v253; // x0
  __int64 v254; // x1
  BattleServantData_o *v255; // x3
  BattleBuffData_BuffData_array *v256; // x0
  __int64 v257; // x1
  __int64 v258; // x2
  BattleBuffData_BuffData_array *v259; // x19
  il2cpp_array_size_t v260; // x8
  unsigned __int64 v261; // x23
  BattleLogicFunction_o *v262; // x0
  __int64 v263; // x8
  __int64 v264; // x9
  int *v265; // x10
  __int64 v266; // x0
  __int64 v267; // x8
  __int64 v268; // x19
  __int64 v269; // x9
  int *v270; // x10
  __int64 v271; // x0
  __int64 v272; // x0
  __int64 v273; // x1
  __int64 v274; // x22
  __int64 v275; // x8
  __int64 v276; // x9
  int *v277; // x10
  __int64 v278; // x0
  __int64 v279; // x8
  __int64 v280; // x9
  int *v281; // x10
  __int64 v282; // x0
  __int64 v283; // x0
  __int64 v284; // x1
  __int64 v285; // x8
  __int64 v286; // x9
  int *v287; // x10
  __int64 v288; // x0
  _BOOL8 v289; // x0
  __int64 v290; // x1
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v293; // x0
  BattleActionData_o *v294; // x8
  __int64 v295; // x8
  __int64 v296; // x19
  unsigned __int64 v297; // x24
  BattleLogic_o *v298; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v299; // x20
  __int64 v300; // x1
  __int64 v301; // x0
  const MethodInfo *v302; // [xsp+0h] [xbp-120h]
  bool v303; // [xsp+14h] [xbp-10Ch]
  __int64 *v304; // [xsp+18h] [xbp-108h]
  __int64 v305; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *taska; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  BattleBuffData_o *actSvtBuffData; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_Dictionary_object__object__o *v309; // [xsp+40h] [xbp-E0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v310; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+50h] [xbp-D0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+50h] [xbp-D0h]
  Il2CppObject *item; // [xsp+58h] [xbp-C8h]
  bool v314; // [xsp+64h] [xbp-BCh]
  __int64 v315; // [xsp+68h] [xbp-B8h]
  __int64 v316; // [xsp+70h] [xbp-B0h]
  BattleServantData_o **v317; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v318; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v319; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4C2A397 & 1) == 0 )
  {
    sub_1C2D490(&BuffList_ACTION___TypeInfo);
    sub_1C2D490(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&BattleAddSkillTaskAfterCommandAttack_TypeInfo);
    sub_1C2D490(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
    sub_1C2D490(&BattleServantData___TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&BuffList_TypeInfo);
    sub_1C2D490(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C2D490(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_1C2D490(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_1C2D490(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C2D490(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_1C2D490(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleLogicNomal___c__CreateCommandBattle_b__25_0__);
    sub_1C2D490(&Method_BattleLogicNomal___c__CreateCommandBattle_b__25_2__);
    sub_1C2D490(&Method_BattleLogicNomal___c__CreateCommandBattle_b__25_3__);
    sub_1C2D490(&Method_BattleLogicNomal___c__CreateCommandBattle_b__25_9__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__1__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__4__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__5__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__6__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__7__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__8__);
    sub_1C2D490(&BattleLogicNomal___c__DisplayClass25_0_TypeInfo);
    sub_1C2D490(&BattleLogicNomal___c_TypeInfo);
    byte_4C2A397 = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = sub_1C2D6DC(BattleLogicNomal___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_397;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( !task )
    goto LABEL_397;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_397;
  ServantData = BattleData__getServantData(data, ActorId, 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  v14 = (BattleServantData_o **)(v7 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)ServantData, v15, v16);
  v17 = (BattleActionData_o *)sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  *baseActionData = v17;
  sub_1C2D434((CGThumbnailListItem_o *)baseActionData, (int32_t)v17, v18, v19);
  *(_QWORD *)(v7 + 48) = v17;
  v20 = (BattleActionData_o **)(v7 + 48);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), (int32_t)v17, v21, v22);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  v24 = (BattleCommandData_o **)(v7 + 40);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)command, v25, v26);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)ActorId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0);
  v27 = *v20;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !v27 )
    goto LABEL_397;
  v27->fields.actorId = ActorId;
  ActorId = (__int64)*v20;
  if ( !*v20 )
    goto LABEL_397;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 136) = motionMessage;
  sub_1C2D434((CGThumbnailListItem_o *)(ActorId + 136), (int32_t)motionMessage, v28, v29);
  if ( !*v20 )
    goto LABEL_397;
  (*v20)->fields.isCounter = task->fields.isCounter;
  ActorId = BattleLogicTask__getTarget(task, 0);
  v31 = this->fields.data;
  if ( !v31 )
    goto LABEL_397;
  v32 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0);
    return 0;
  }
  if ( v31->fields.leaderDown || v31->fields.endbattleFlg )
    return 0;
  ActorId = (__int64)BattleData__getServantData(this->fields.data, ActorId, 0);
  if ( !*v20 )
    goto LABEL_397;
  if ( (*v20)->fields.isCounter )
  {
    if ( !ActorId )
      goto LABEL_397;
    if ( *(_BYTE *)(ActorId + 506) )
      return 0;
  }
  item = (Il2CppObject *)ActorId;
  logic = this->fields.logic;
  v34 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1C2D6DC(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v34, 0);
  if ( !logic )
    goto LABEL_397;
  taska = task;
  targetId = v32;
  v35 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v34, task, v32, 0);
  result = 0;
  if ( v35 )
    return result;
  v37 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v37 )
    goto LABEL_397;
  items = v37->fields._items;
  v41 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v37->fields._version;
  if ( !items )
    goto LABEL_397;
  size = v37->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      item,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &items->obj.klass + size;
    v37->fields._size = size + 1;
    v43[4] = (Il2CppClass *)item;
    sub_1C2D434((CGThumbnailListItem_o *)(v43 + 4), (int32_t)item, v38, v39);
  }
  *(_QWORD *)(v7 + 56) = v37;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 56), (int32_t)v37, v44, v45);
  ActorId = *(_QWORD *)(v7 + 40);
  if ( !ActorId )
    goto LABEL_397;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0);
  ActorId = (__int64)*v24;
  if ( !*v24 )
    goto LABEL_397;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v14,
    (BattleServantData_o *)item,
    this->fields.data,
    0);
  ActorId = (__int64)*v24;
  if ( !*v24 )
    goto LABEL_397;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v14, 0);
  ActorId = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_397;
  ActorId = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v24, 0);
  v303 = (_DWORD)ActorId == 2;
  v318 = (BattleCommandData_o **)(v7 + 40);
  if ( (_DWORD)ActorId == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_397;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, targetId, 0);
    if ( !this->fields.data )
      goto LABEL_397;
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0,
                                                                  0));
    v48 = (System_Collections_Generic_List_object__o **)(v7 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v47,
                         (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_397;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      targetId,
      (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
    v50 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(
      v50,
      (Il2CppObject *)v7,
      Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__8__,
      0);
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v49,
                                                                 (System_Func_TSource__TResult__o *)v50,
                                                                 (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v52 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v52 = BattleLogicNomal___c_TypeInfo;
    }
    _9__25_9 = (System_Func_object__bool__o *)v52->static_fields->__9__25_9;
    if ( !_9__25_9 )
    {
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = BattleLogicNomal___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v52->static_fields->__9;
      _9__25_9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__25_9, v54, Method_BattleLogicNomal___c__CreateCommandBattle_b__25_9__, 0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__25_9 = (struct System_Func_BattleServantData__bool__o *)_9__25_9;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__25_9, (int32_t)_9__25_9, v56, v57);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v51,
                         (System_Func_TSource__bool__o *)_9__25_9,
                         (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v48 )
      goto LABEL_397;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v48,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v24 = (BattleCommandData_o **)(v7 + 40);
  }
  if ( !*v46 )
    goto LABEL_397;
  ActorId = (__int64)*v24;
  if ( !*v24 )
    goto LABEL_397;
  *(_DWORD *)(ActorId + 128) = (*v46)[1].monitor;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll((BattleCommandData_o *)ActorId, 0);
  v59 = *v46;
  v314 = IsForceAttackFunctionTargetAll;
  v60 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v60 = BattleLogicNomal___c_TypeInfo;
  }
  _9__25_0 = (System_Func_object__object__o *)v60->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = BattleLogicNomal___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__25_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__25_0, v62, Method_BattleLogicNomal___c__CreateCommandBattle_b__25_0__, 0);
    v63 = BattleLogicNomal___c_TypeInfo->static_fields;
    v63->__9__25_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__25_0;
    sub_1C2D434((CGThumbnailListItem_o *)&v63->__9__25_0, (int32_t)_9__25_0, v64, v65);
  }
  v66 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_object__object____ctor(
    v66,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__1__,
    0);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v59,
                       (System_Func_TSource__TKey__o *)_9__25_0,
                       (System_Func_TSource__TElement__o *)v66,
                       (const MethodInfo_310EA00 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v67 = *(_QWORD *)(v7 + 24);
  v309 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  if ( !v67 )
    goto LABEL_397;
  v68 = BuffList_TypeInfo;
  actSvtBuffData = *(BattleBuffData_o **)(v67 + 816);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v68 = BuffList_TypeInfo;
  }
  v69 = BattleLogicNomal___c_TypeInfo;
  v304 = (__int64 *)v46;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v68->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v69 = BattleLogicNomal___c_TypeInfo;
  }
  _9__25_2 = (System_Func_T__TResult__o *)v69->static_fields->__9__25_2;
  if ( !_9__25_2 )
  {
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v69 = BattleLogicNomal___c_TypeInfo;
    }
    v72 = (Il2CppObject *)v69->static_fields->__9;
    _9__25_2 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__25_2,
      v72,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__25_2__,
      0);
    v73 = BattleLogicNomal___c_TypeInfo->static_fields;
    v73->__9__25_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__25_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v73->__9__25_2, (int32_t)_9__25_2, v74, v75);
    v69 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v69->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v69);
    v69 = BattleLogicNomal___c_TypeInfo;
  }
  _9__25_3 = (System_Func_T__TResult__o *)v69->static_fields->__9__25_3;
  if ( !_9__25_3 )
  {
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v69 = BattleLogicNomal___c_TypeInfo;
    }
    v77 = (Il2CppObject *)v69->static_fields->__9;
    _9__25_3 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Int32Enum__object____ctor(_9__25_3, v77, Method_BattleLogicNomal___c__CreateCommandBattle_b__25_3__, 0);
    v78 = BattleLogicNomal___c_TypeInfo->static_fields;
    v78->__9__25_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__25_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v78->__9__25_3, (int32_t)_9__25_3, v79, v80);
  }
  v81 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
          CommandCodeBuffHash,
          (System_Func_TSource__TKey__o *)_9__25_2,
          (System_Func_TSource__TElement__o *)_9__25_3,
          (const MethodInfo_310E7B4 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v7 + 32) = v81;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v81, v82, v83);
  v84 = *(_QWORD *)(v7 + 40);
  v310 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
  if ( !v84 )
    goto LABEL_397;
  v85 = *(_QWORD *)(v84 + 72);
  v86 = (System_Action_object__object__o *)sub_1C2D6DC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v86,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__4__,
    0);
  v87 = (BattleCommandData_o **)(v7 + 40);
  ActorId = (__int64)actSvtBuffData;
  if ( !actSvtBuffData )
    goto LABEL_397;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    actSvtBuffData,
    v85,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v86,
    1,
    0);
  if ( !*v318 )
    goto LABEL_397;
  commandAssistId = (*v318)->fields.commandAssistId;
  v89 = (System_Action_object__object__o *)sub_1C2D6DC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v89,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__5__,
    0);
  v90 = *(_QWORD *)(v7 + 40);
  if ( !v90 )
    goto LABEL_397;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    actSvtBuffData,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v89,
    1,
    *(_DWORD *)(v90 + 88),
    0);
  ActorId = sub_1C2D538(bool___TypeInfo, 2);
  if ( !ActorId )
    goto LABEL_397;
  v92 = ActorId;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_398;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1C2D538(BattleServantData___TypeInfo, 1);
  if ( !ActorId )
    goto LABEL_397;
  v94 = ActorId;
  ActorId = (__int64)item;
  if ( item )
  {
    ActorId = sub_1C2D5CC(item, *(_QWORD *)(*(_QWORD *)v94 + 64LL));
    if ( !ActorId )
    {
      v301 = sub_1C2D710(0);
      sub_1C2D5B8(v301, 0);
    }
  }
  if ( !*(_DWORD *)(v94 + 24) )
    goto LABEL_398;
  *(_QWORD *)(v94 + 32) = item;
  sub_1C2D434((CGThumbnailListItem_o *)(v94 + 32), (int32_t)item, v91, v93);
  *(_QWORD *)(v7 + 72) = v94;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 72), v94, v95, v96);
  v97 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_object__object____ctor(
    v97,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__6__,
    0);
  *(_QWORD *)(v7 + 64) = v97;
  v305 = v7 + 64;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 64), (int32_t)v97, v98, v99);
  v316 = sub_1C2D6DC(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v316,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass25_0__CreateCommandBattle_b__7__,
    0);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_397;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v101 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C2D6DC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v101, 0);
  v103 = *(_QWORD *)(v92 + 24);
  v317 = v14;
  v315 = v92;
  if ( (int)v103 >= 1 )
  {
    v104 = 0;
    do
    {
      if ( v104 >= (unsigned int)v103 )
        goto LABEL_398;
      v105 = *(unsigned __int8 *)(v92 + v104 + 32);
      if ( *(_BYTE *)(v92 + v104 + 32) )
        v106 = 177;
      else
        v106 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v310,
                           actSvtBuffData,
                           v106,
                           *v318,
                           v102);
      if ( !v316 )
        goto LABEL_397;
      v107 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v316 + 24))(
                  *(_QWORD *)(v316 + 64),
                  v105 != 0,
                  v314,
                  *(_QWORD *)(v316 + 40));
      if ( !ActorId )
        goto LABEL_397;
      v108 = *(_QWORD *)ActorId;
      v109 = ActorId;
      v110 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v111 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v111 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v110;
          v111 += 4;
          if ( !v110 )
            goto LABEL_95;
        }
        v112 = v108 + 16LL * *v111 + 312;
      }
      else
      {
LABEL_95:
        v112 = sub_1C7DCA8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v113 = (*(__int64 (__fastcall **)(__int64, _QWORD))v112)(v109, *(_QWORD *)(v112 + 8));
      v115 = v113;
      while ( 1 )
      {
        if ( !v115 )
          sub_1C2D6EC(v113, v114);
        v116 = *(_QWORD *)v115;
        v117 = *(unsigned __int16 *)(*(_QWORD *)v115 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v115 + 302LL) )
        {
          v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v118 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v117;
            v118 += 4;
            if ( !v117 )
              goto LABEL_103;
          }
          v119 = v116 + 16LL * *v118 + 312;
        }
        else
        {
LABEL_103:
          v119 = sub_1C7DCA8(v115, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v115, *(_QWORD *)(v119 + 8)) & 1) == 0 )
          break;
        v120 = *(_QWORD *)v115;
        v121 = *(unsigned __int16 *)(*(_QWORD *)v115 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v115 + 302LL) )
        {
          v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v122 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v121;
            v122 += 4;
            if ( !v121 )
              goto LABEL_110;
          }
          v123 = v120 + 16LL * *v122 + 312;
        }
        else
        {
LABEL_110:
          v123 = sub_1C7DCA8(v115, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v124 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v123)(v115, *(_QWORD *)(v123 + 8));
        if ( !v309 )
          sub_1C2D6EC(v124, v124);
        v125 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v309,
                 v124,
                 (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v125,
          (SkillLvMaster_o *)MasterData_object,
          *v318,
          v107,
          *v20,
          0,
          v101,
          v302);
      }
      v126 = *(_QWORD *)v115;
      v127 = *(unsigned __int16 *)(*(_QWORD *)v115 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v115 + 302LL) )
      {
        v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v128 - 1) != System_IDisposable_TypeInfo )
        {
          --v127;
          v128 += 4;
          if ( !v127 )
            goto LABEL_118;
        }
        v129 = v126 + 16LL * *v128 + 312;
      }
      else
      {
LABEL_118:
        v129 = sub_1C7DCA8(v115, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v129)(v115, *(_QWORD *)(v129 + 8));
      v92 = v315;
      LODWORD(v103) = *(_DWORD *)(v315 + 24);
      ++v104;
    }
    while ( (__int64)v104 < (int)v103 );
    if ( (int)v103 >= 1 )
    {
      v130 = 0;
      while ( v130 < (unsigned int)v103 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v130;
        v131 = *(unsigned __int8 *)(v92 + v130 + 32);
        ActorId = sub_1C2D538(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_397;
        v132 = *(_DWORD *)(ActorId + 24);
        v133 = (BuffList_ACTION_array *)ActorId;
        if ( v131 )
        {
          if ( !v132 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v132 == 1 )
            break;
          v134 = 120;
        }
        else
        {
          if ( !v132 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v132 == 1 )
            break;
          v134 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v134;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v316 + 24))(
                    *(_QWORD *)(v316 + 64),
                    v131 != 0,
                    v314,
                    *(_QWORD *)(v316 + 40));
        if ( !ActorId )
          goto LABEL_397;
        v135 = *(_QWORD *)ActorId;
        v136 = ActorId;
        v137 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v138 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v138 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v137;
            v138 += 4;
            if ( !v137 )
              goto LABEL_140;
          }
          v139 = v135 + 16LL * *v138 + 312;
        }
        else
        {
LABEL_140:
          v139 = sub_1C7DCA8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v141 = (*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v136, *(_QWORD *)(v139 + 8));
        if ( !v141 )
          sub_1C2D6EC(0, v140);
        while ( 1 )
        {
          v142 = *(_QWORD *)v141;
          v143 = *(unsigned __int16 *)(*(_QWORD *)v141 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v141 + 302LL) )
          {
            v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v144 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v143;
              v144 += 4;
              if ( !v143 )
                goto LABEL_147;
            }
            v14 = v317;
            v87 = v318;
            v145 = v142 + 16LL * *v144 + 312;
          }
          else
          {
LABEL_147:
            v14 = v317;
            v87 = v318;
            v145 = sub_1C7DCA8(v141, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v145)(v141, *(_QWORD *)(v145 + 8)) & 1) == 0 )
            break;
          v146 = *(_QWORD *)v141;
          v147 = *(unsigned __int16 *)(*(_QWORD *)v141 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v141 + 302LL) )
          {
            v148 = (int *)(*(_QWORD *)(v146 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v148 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v147;
              v148 += 4;
              if ( !v147 )
                goto LABEL_154;
            }
            v149 = v146 + 16LL * *v148 + 312;
          }
          else
          {
LABEL_154:
            v149 = sub_1C7DCA8(v141, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v151 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v149)(v141, *(_QWORD *)(v149 + 8));
          if ( !*v14 )
            sub_1C2D6EC(0, v150);
          AttackSideEffectBuffList_46035900 = BattleServantData__getAttackSideEffectBuffList_46035900(
                                                *v14,
                                                v133,
                                                *v87,
                                                v151,
                                                0);
          v155 = AttackSideEffectBuffList_46035900;
          if ( !AttackSideEffectBuffList_46035900 )
            sub_1C2D6EC(0, v153);
          max_length = AttackSideEffectBuffList_46035900->max_length;
          if ( (int)max_length >= 1 )
          {
            v157 = 0;
            do
            {
              if ( v157 >= (unsigned int)max_length )
                sub_1C2D6F4(AttackSideEffectBuffList_46035900, v153, v154);
              if ( !*v20 )
                sub_1C2D6EC(0, v153);
              v158 = v155->m_Items[v157];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v20, 3, 0);
              if ( !logicfunction )
                sub_1C2D6EC(SideEffectActionData, v161);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v158,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v101,
                0,
                0);
              LODWORD(max_length) = v155->max_length;
              ++v157;
            }
            while ( (__int64)v157 < (int)max_length );
          }
        }
        v162 = *(_QWORD *)v141;
        v163 = *(unsigned __int16 *)(*(_QWORD *)v141 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v141 + 302LL) )
        {
          v164 = (int *)(*(_QWORD *)(v162 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v164 - 1) != System_IDisposable_TypeInfo )
          {
            --v163;
            v164 += 4;
            if ( !v163 )
              goto LABEL_169;
          }
          v165 = v162 + 16LL * *v164 + 312;
        }
        else
        {
LABEL_169:
          v165 = sub_1C7DCA8(v141, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v165)(v141, *(_QWORD *)(v165 + 8));
        v92 = v315;
        LODWORD(v103) = *(_DWORD *)(v315 + 24);
        v130 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v103 )
          goto LABEL_179;
      }
LABEL_398:
      sub_1C2D6F4(ActorId, v9, v91);
    }
  }
LABEL_179:
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0);
  ActorId = (__int64)*v87;
  if ( !*v87 )
    goto LABEL_397;
  BattleCommandData__SetOverwriteRatesIndex((BattleCommandData_o *)ActorId, 0);
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1C2D6DC(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0, 0);
  if ( !v316 )
    goto LABEL_397;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v316 + 24))(
              *(_QWORD *)(v316 + 64),
              0,
              0,
              *(_QWORD *)(v316 + 40));
  if ( !ActorId )
    goto LABEL_397;
  v166 = *(_QWORD *)ActorId;
  v167 = ActorId;
  v168 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v169 = (int *)(*(_QWORD *)(v166 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v169 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v168;
      v169 += 4;
      if ( !v168 )
        goto LABEL_187;
    }
    v170 = v166 + 16LL * *v169 + 312;
  }
  else
  {
LABEL_187:
    v170 = sub_1C7DCA8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v171 = (*(__int64 (__fastcall **)(__int64, _QWORD))v170)(v167, *(_QWORD *)(v170 + 8));
  v173 = v171;
  v174 = 0;
  while ( 1 )
  {
    if ( !v173 )
      sub_1C2D6EC(v171, v172);
    v175 = *(_QWORD *)v173;
    v176 = *(unsigned __int16 *)(*(_QWORD *)v173 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v173 + 302LL) )
    {
      v177 = (int *)(*(_QWORD *)(v175 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v177 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v176;
        v177 += 4;
        if ( !v176 )
          goto LABEL_195;
      }
      v178 = v175 + 16LL * *v177 + 312;
    }
    else
    {
LABEL_195:
      v178 = sub_1C7DCA8(v173, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v178)(v173, *(_QWORD *)(v178 + 8)) & 1) == 0 )
      break;
    v179 = *(_QWORD *)v173;
    v180 = *(unsigned __int16 *)(*(_QWORD *)v173 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v173 + 302LL) )
    {
      v181 = (int *)(*(_QWORD *)(v179 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v181 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v180;
        v181 += 4;
        if ( !v180 )
          goto LABEL_202;
      }
      v182 = v179 + 16LL * *v181 + 312;
    }
    else
    {
LABEL_202:
      v182 = sub_1C7DCA8(v173, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v184 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v182)(v173, *(_QWORD *)(v182 + 8));
    v185 = this->fields.logic;
    if ( !v185 )
      sub_1C2D6EC(0, v183);
    DamageList = BattleLogic__GetDamageList(v185, *v14, v184, *v87, processArgsa, *v20, 0);
    v188 = DamageList;
    if ( v184 == (BattleServantData_o *)item )
      v174 = DamageList;
    if ( !v184 )
      sub_1C2D6EC(DamageList, v187);
    buffData = v184->fields.buffData;
    if ( !buffData )
      sub_1C2D6EC(DamageList, v187);
    if ( !buffData->fields.isNoDamage )
    {
      v190 = *v20;
      v191 = BattleBuffData__UseProgressingDoNotAct(v184->fields.buffData, v184, 0, 0);
      if ( !v190 )
        sub_1C2D6EC(v191, v191);
      BattleActionData__addSideEffectActionData(v190, v191, 1, 0);
    }
    if ( !*v14 )
      sub_1C2D6EC(0, v187);
    v192 = BattleServantData__checkPlayer(*v14, 0);
    v194 = *v20;
    if ( v192 )
    {
      if ( !v194 )
        sub_1C2D6EC(v192, v193);
      if ( !v194->fields.isCounter )
      {
        if ( !*v14 )
          sub_1C2D6EC(v192, v193);
        v184->fields.overkillTargetId = (*v14)->fields.uniqueId;
      }
    }
    else if ( !v194 )
    {
      sub_1C2D6EC(v192, v193);
    }
    BattleActionData__setDamageData(v194, v188, 0, 0, 0, 0);
  }
  v195 = *(_QWORD *)v173;
  v196 = *(unsigned __int16 *)(*(_QWORD *)v173 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v173 + 302LL) )
  {
    v197 = (int *)(*(_QWORD *)(v195 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v197 - 1) != System_IDisposable_TypeInfo )
    {
      --v196;
      v197 += 4;
      if ( !v196 )
        goto LABEL_224;
    }
    v198 = v195 + 16LL * *v197 + 312;
  }
  else
  {
LABEL_224:
    v198 = sub_1C7DCA8(v173, System_IDisposable_TypeInfo, 0);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v198)(v173, *(_QWORD *)(v198 + 8));
  if ( !*(_QWORD *)v305 )
    goto LABEL_397;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v305 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v305 + 64LL),
    item,
    *(_QWORD *)(*(_QWORD *)v305 + 40LL));
  ActorId = (__int64)*v87;
  if ( !*v87 )
    goto LABEL_397;
  v199 = *v20;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0);
  if ( !v199 )
    goto LABEL_397;
  v199->fields.type = ActorId;
  ActorId = (__int64)*v20;
  if ( !*v20 )
    goto LABEL_397;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v87, 0);
  v9 = *v87;
  if ( !*v87 )
    goto LABEL_397;
  v200 = *v20;
  if ( !*v20 )
    goto LABEL_397;
  v200->fields.actionIndex = v9->fields.actionIndex;
  ActorId = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_397;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v9, 0);
  v200->fields.motionId = ActorId;
  if ( !v174 )
    goto LABEL_397;
  v201 = *v20;
  ActorId = BattleActionData_DamageData__getAttackCount(v174, 0);
  if ( !v201 )
    goto LABEL_397;
  v201->fields.attackcount = ActorId;
  v202 = this->fields.data;
  v203 = v315;
  if ( !v202 )
    goto LABEL_397;
  perf = v202->fields.perf;
  if ( !perf )
    goto LABEL_397;
  if ( !*v87 )
    goto LABEL_397;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_397;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v87)->fields.actionIndex,
    0);
  if ( !*v14 )
    goto LABEL_397;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  v205 = *v20;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v14)->fields.uniqueId, targetId, 0);
  if ( !v205 )
    goto LABEL_397;
  v205->fields.prevattackme = ActorId & 1;
  v207 = *(_QWORD *)(v315 + 24);
  if ( (int)v207 >= 1 )
  {
    v208 = 0;
    do
    {
      if ( v208 >= (unsigned int)v207 )
        goto LABEL_398;
      v209 = *(unsigned __int8 *)(v203 + v208 + 32);
      if ( *(_BYTE *)(v203 + v208 + 32) )
        v210 = 178;
      else
        v210 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v310,
                                    actSvtBuffData,
                                    v210,
                                    *v318,
                                    v206);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v316 + 24))(
                  *(_QWORD *)(v316 + 64),
                  v209,
                  v314,
                  *(_QWORD *)(v316 + 40));
      if ( !ActorId )
        goto LABEL_397;
      v212 = *(_QWORD *)ActorId;
      v213 = ActorId;
      v214 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v215 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v215 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v214;
          v215 += 4;
          if ( !v214 )
            goto LABEL_253;
        }
        v216 = v212 + 16LL * *v215 + 312;
      }
      else
      {
LABEL_253:
        v216 = sub_1C7DCA8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v217 = (*(__int64 (__fastcall **)(__int64, _QWORD))v216)(v213, *(_QWORD *)(v216 + 8));
      v219 = v217;
      while ( 1 )
      {
        if ( !v219 )
          sub_1C2D6EC(v217, v218);
        v220 = *(_QWORD *)v219;
        v221 = *(unsigned __int16 *)(*(_QWORD *)v219 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v219 + 302LL) )
        {
          v222 = (int *)(*(_QWORD *)(v220 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v222 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v221;
            v222 += 4;
            if ( !v221 )
              goto LABEL_261;
          }
          v223 = v220 + 16LL * *v222 + 312;
        }
        else
        {
LABEL_261:
          v223 = sub_1C7DCA8(v219, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v223)(v219, *(_QWORD *)(v223 + 8)) & 1) == 0 )
          break;
        v224 = *(_QWORD *)v219;
        v225 = *(unsigned __int16 *)(*(_QWORD *)v219 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v219 + 302LL) )
        {
          v226 = (int *)(*(_QWORD *)(v224 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v226 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v225;
            v226 += 4;
            if ( !v225 )
              goto LABEL_268;
          }
          v227 = v224 + 16LL * *v226 + 312;
        }
        else
        {
LABEL_268:
          v227 = sub_1C7DCA8(v219, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v228 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v227)(v219, *(_QWORD *)(v227 + 8));
        if ( !v309 )
          sub_1C2D6EC(v228, v228);
        v229 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v309,
                 v228,
                 (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v229,
          (SkillLvMaster_o *)MasterData_object,
          *v318,
          TargetCommandCodeBuffList,
          *v20,
          1,
          v101,
          v302);
      }
      v230 = *(_QWORD *)v219;
      v231 = *(unsigned __int16 *)(*(_QWORD *)v219 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v219 + 302LL) )
      {
        v232 = (int *)(*(_QWORD *)(v230 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v232 - 1) != System_IDisposable_TypeInfo )
        {
          --v231;
          v232 += 4;
          if ( !v231 )
            goto LABEL_276;
        }
        v233 = v230 + 16LL * *v232 + 312;
      }
      else
      {
LABEL_276:
        v233 = sub_1C7DCA8(v219, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v233)(v219, *(_QWORD *)(v233 + 8));
      v203 = v315;
      LODWORD(v207) = *(_DWORD *)(v315 + 24);
      ++v208;
    }
    while ( (__int64)v208 < (int)v207 );
    if ( (int)v207 >= 1 )
    {
      v234 = 0;
      while ( v234 < (unsigned int)v207 )
      {
        v235 = *(unsigned __int8 *)(v203 + v234 + 32);
        ActorId = sub_1C2D538(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_397;
        v236 = *(_DWORD *)(ActorId + 24);
        v237 = (BuffList_ACTION_array *)ActorId;
        if ( v235 )
        {
          if ( !v236 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v236 == 1 )
            goto LABEL_398;
          v238 = 121;
        }
        else
        {
          if ( !v236 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v236 == 1 )
            goto LABEL_398;
          v238 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v238;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v316 + 24))(
                    *(_QWORD *)(v316 + 64),
                    v235 != 0,
                    v314,
                    *(_QWORD *)(v316 + 40));
        if ( !ActorId )
          goto LABEL_397;
        v239 = *(_QWORD *)ActorId;
        v240 = ActorId;
        v241 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v242 = (int *)(*(_QWORD *)(v239 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v242 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v241;
            v242 += 4;
            if ( !v241 )
              goto LABEL_298;
          }
          v243 = v239 + 16LL * *v242 + 312;
        }
        else
        {
LABEL_298:
          v243 = sub_1C7DCA8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v245 = (*(__int64 (__fastcall **)(__int64, _QWORD))v243)(v240, *(_QWORD *)(v243 + 8));
        if ( !v245 )
          sub_1C2D6EC(0, v244);
        while ( 1 )
        {
          v246 = *(_QWORD *)v245;
          v247 = *(unsigned __int16 *)(*(_QWORD *)v245 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v245 + 302LL) )
          {
            v248 = (int *)(*(_QWORD *)(v246 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v248 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v247;
              v248 += 4;
              if ( !v247 )
                goto LABEL_305;
            }
            v249 = v246 + 16LL * *v248 + 312;
          }
          else
          {
LABEL_305:
            v249 = sub_1C7DCA8(v245, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v249)(v245, *(_QWORD *)(v249 + 8)) & 1) == 0 )
            break;
          v250 = *(_QWORD *)v245;
          v251 = *(unsigned __int16 *)(*(_QWORD *)v245 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v245 + 302LL) )
          {
            v252 = (int *)(*(_QWORD *)(v250 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v252 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v251;
              v252 += 4;
              if ( !v251 )
                goto LABEL_312;
            }
            v253 = v250 + 16LL * *v252 + 312;
          }
          else
          {
LABEL_312:
            v253 = sub_1C7DCA8(v245, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v255 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v253)(v245, *(_QWORD *)(v253 + 8));
          if ( !*v317 )
            sub_1C2D6EC(0, v254);
          v256 = BattleServantData__getAttackSideEffectBuffList_46035900(*v317, v237, *v318, v255, 0);
          v259 = v256;
          if ( !v256 )
            sub_1C2D6EC(0, v257);
          v260 = v256->max_length;
          if ( (int)v260 >= 1 )
          {
            v261 = 0;
            do
            {
              if ( v261 >= (unsigned int)v260 )
                sub_1C2D6F4(v256, v257, v258);
              v262 = this->fields.logicfunction;
              if ( !v262 )
                sub_1C2D6EC(0, v257);
              BattleLogicFunction__SetSideEffectBuff(
                v262,
                (SkillLvMaster_o *)MasterData_object,
                *v20,
                v259->m_Items[v261],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v101,
                1,
                0);
              LODWORD(v260) = v259->max_length;
              ++v261;
            }
            while ( (__int64)v261 < (int)v260 );
          }
        }
        v263 = *(_QWORD *)v245;
        v264 = *(unsigned __int16 *)(*(_QWORD *)v245 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v245 + 302LL) )
        {
          v265 = (int *)(*(_QWORD *)(v263 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v265 - 1) != System_IDisposable_TypeInfo )
          {
            --v264;
            v265 += 4;
            if ( !v264 )
              goto LABEL_326;
          }
          v266 = v263 + 16LL * *v265 + 312;
        }
        else
        {
LABEL_326:
          v266 = sub_1C7DCA8(v245, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v266)(v245, *(_QWORD *)(v266 + 8));
        v203 = v315;
        LODWORD(v207) = *(_DWORD *)(v315 + 24);
        if ( (__int64)++v234 >= (int)v207 )
          goto LABEL_335;
      }
      goto LABEL_398;
    }
  }
LABEL_335:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v316 + 24))(
              *(_QWORD *)(v316 + 64),
              0,
              0,
              *(_QWORD *)(v316 + 40));
  if ( !ActorId )
    goto LABEL_397;
  v267 = *(_QWORD *)ActorId;
  v268 = ActorId;
  v269 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v270 = (int *)(*(_QWORD *)(v267 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v270 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v269;
      v270 += 4;
      if ( !v269 )
        goto LABEL_340;
    }
    v271 = v267 + 16LL * *v270 + 312;
  }
  else
  {
LABEL_340:
    v271 = sub_1C7DCA8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v272 = (*(__int64 (__fastcall **)(__int64, _QWORD))v271)(v268, *(_QWORD *)(v271 + 8));
  v274 = v272;
  while ( 1 )
  {
    if ( !v274 )
      sub_1C2D6EC(v272, v273);
    v275 = *(_QWORD *)v274;
    v276 = *(unsigned __int16 *)(*(_QWORD *)v274 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v274 + 302LL) )
    {
      v277 = (int *)(*(_QWORD *)(v275 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v277 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v276;
        v277 += 4;
        if ( !v276 )
          goto LABEL_348;
      }
      v278 = v275 + 16LL * *v277 + 312;
    }
    else
    {
LABEL_348:
      v278 = sub_1C7DCA8(v274, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v278)(v274, *(_QWORD *)(v278 + 8)) & 1) == 0 )
      break;
    v279 = *(_QWORD *)v274;
    v280 = *(unsigned __int16 *)(*(_QWORD *)v274 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v274 + 302LL) )
    {
      v281 = (int *)(*(_QWORD *)(v279 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v281 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v280;
        v281 += 4;
        if ( !v280 )
          goto LABEL_355;
      }
      v282 = v279 + 16LL * *v281 + 312;
    }
    else
    {
LABEL_355:
      v282 = sub_1C7DCA8(v274, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v283 = (*(__int64 (__fastcall **)(__int64, _QWORD))v282)(v274, *(_QWORD *)(v282 + 8));
    if ( !*v317 )
      sub_1C2D6EC(v283, v284);
    if ( !v283 )
      sub_1C2D6EC(0, v284);
    if ( !this->fields.logic )
      sub_1C2D6EC(v283, v284);
    v272 = BattleLogic__SetDamageSideEffect(
             this->fields.logic,
             *v20,
             (*v317)->fields.uniqueId,
             *(_DWORD *)(v283 + 24),
             *v318,
             0);
  }
  v285 = *(_QWORD *)v274;
  v286 = *(unsigned __int16 *)(*(_QWORD *)v274 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v274 + 302LL) )
  {
    v287 = (int *)(*(_QWORD *)(v285 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v287 - 1) != System_IDisposable_TypeInfo )
    {
      --v286;
      v287 += 4;
      if ( !v286 )
        goto LABEL_365;
    }
    v288 = v285 + 16LL * *v287 + 312;
  }
  else
  {
LABEL_365:
    v288 = sub_1C7DCA8(v274, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v288)(v274, *(_QWORD *)(v288 + 8));
  ActorId = *v304;
  if ( !*v304 )
    goto LABEL_397;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v319,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  i = v319;
  while ( 1 )
  {
    v289 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v289 )
      break;
    current = i.fields._current;
    if ( !i.fields._current )
      sub_1C2D6EC(v289, v290);
    klass = i.fields._current[51].klass;
    if ( !klass )
      sub_1C2D6EC(v289, v290);
    LOBYTE(klass->_1.nestedTypes) = 0;
    if ( taska->fields.isCanCounterTask )
    {
      if ( !*v317 )
        sub_1C2D6EC(v289, v290);
      v293 = this->fields.data;
      if ( !v293 )
        sub_1C2D6EC(0, v290);
      BattleData__SetWasAttackTargetId(v293, (*v317)->fields.uniqueId, (int32_t)current[1].monitor, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !*(_QWORD *)v305 )
    goto LABEL_397;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v305 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v305 + 64LL),
              item,
              *(_QWORD *)(*(_QWORD *)v305 + 40LL));
  v294 = *v20;
  if ( !*v20 )
    goto LABEL_397;
  v294->fields.isForcedSpeedOne = taska->fields.isForcedSpeedOne;
  v294->fields.isAllAttack = v303;
  if ( !*v317 )
    goto LABEL_397;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  BattleData__setCommandAttack((BattleData_o *)ActorId, (*v317)->fields.uniqueId, targetId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  ActorId = (__int64)BattleData__getFieldServantList((BattleData_o *)ActorId, 0, 0);
  if ( !ActorId )
    goto LABEL_397;
  v295 = *(_QWORD *)(ActorId + 24);
  v296 = ActorId;
  if ( (int)v295 >= 1 )
  {
    v297 = 0;
    while ( v297 < (unsigned int)v295 )
    {
      ActorId = *(_QWORD *)(v296 + 32 + 8 * v297);
      if ( ActorId )
        BattleServantData__updateBuff((BattleServantData_o *)ActorId, 1, 1, 0);
      LODWORD(v295) = *(_DWORD *)(v296 + 24);
      if ( (__int64)++v297 >= (int)v295 )
        goto LABEL_390;
    }
    goto LABEL_398;
  }
LABEL_390:
  v298 = this->fields.logic;
  v299 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1C2D6DC(BattleAddSkillTaskAfterCommandAttack_TypeInfo);
  BattleAddSkillTaskAfterCommandAttack___ctor(v299, 0);
  if ( !v298
    || (BattleLogic__AddSkillTask(v298, (BattleAddSkillTaskAroundTargetTask_o *)v299, taska, targetId, 0),
        (ActorId = *v304) == 0) )
  {
LABEL_397:
    sub_1C2D6EC(ActorId, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v319,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  for ( i = v319;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
        BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C2D6EC(0, v300);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  return *v20;
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

  if ( (byte_4C2A3AA & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_8746/*"MOTION_DO_NOT_ACT"*/);
    byte_4C2A3AA = 1;
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
    v11 = sub_1C2D6DC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v14 = StringLiteral_8746/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 72) = StringLiteral_8746/*"MOTION_DO_NOT_ACT"*/;
        sub_1C2D434((CGThumbnailListItem_o *)(v11 + 72), v14, v12, v13);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 64) = BattleCommandData__get_type((BattleCommandData_o *)data, 0);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_1C2D6EC(data, task);
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

  if ( (byte_4C2A3A9 & 1) == 0 )
  {
    sub_1C2D490(&ProgressIntervalTurnActionData_TypeInfo);
    byte_4C2A3A9 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1C2D6DC(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1C2D6EC(data, v5);
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

  if ( (byte_4C2A39E & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6426/*"FOCUS_UNDER"*/);
    sub_1C2D490(&StringLiteral_6424/*"FOCUS_CENTER"*/);
    sub_1C2D490(&StringLiteral_6428/*"FOCUS_UP"*/);
    byte_4C2A39E = 1;
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
    v8 = StringLiteral_6424/*"FOCUS_CENTER"*/;
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
        v8 = StringLiteral_6424/*"FOCUS_CENTER"*/;
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
      v14 = &StringLiteral_6426/*"FOCUS_UNDER"*/;
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
      v14 = &StringLiteral_6428/*"FOCUS_UP"*/;
    }
    v8 = *v14;
    v12->fields.globaltargetId = uniqueID;
LABEL_39:
    v6 = sub_1C2D6DC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0);
    if ( v6 )
    {
      v16 = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = v16;
      *(_DWORD *)(v6 + 36) = v16;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0);
      *(_QWORD *)(v6 + 72) = v8;
      sub_1C2D434((CGThumbnailListItem_o *)(v6 + 72), v8, v17, v18);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_1C2D6EC(data, method);
  }
  return (BattleActionData_o *)v6;
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A394 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_TypeInfo);
    byte_4C2A394 = 1;
  }
  v3 = sub_1C2D6DC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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
  System_Comparison_T__o *_9__23_0; // x20
  Il2CppObject *v15; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A396 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__23_0__);
    sub_1C2D490(&BattleLogicNomal___c_TypeInfo);
    byte_4C2A396 = 1;
  }
  value = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_3415A8C *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0), !v10) )
  {
LABEL_16:
    sub_1C2D6EC(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v13 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v13 = BattleLogicNomal___c_TypeInfo;
  }
  _9__23_0 = (System_Comparison_T__o *)v13->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleLogicNomal___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__23_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__23_0,
      v15,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__23_0__,
      0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__23_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v17, v18);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v10,
    _9__23_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
}


bool BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(0, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(data, isCheckNext);
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
  if ( (byte_4C2A39F & 1) == 0 )
  {
    buff = (BattleBuffData_BuffData_o *)sub_1C2D490(&BuffList_TypeInfo);
    byte_4C2A39F = 1;
  }
  if ( !v2 )
    sub_1C2D6EC(buff, method);
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

  if ( (byte_4C2A3A1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A3A1 = 1;
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
          sub_1C2D6EC(data, method);
        }
      }
    }
  }
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
  if ( (byte_4C2A3A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4C2A3A2 = 1;
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
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C7DBA4(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !v3 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C7DBA4(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_3108548 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    sub_1C2D6EC(data, prevFieldIndiv);
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
  __int64 v9; // x2
  __int64 v10; // x21
  int v11; // w8
  unsigned int v12; // w27
  BattleServantData_o *v13; // x22
  int v14; // w8
  __int64 v15; // x23
  unsigned int v16; // w28
  __int64 v17; // x24
  BattleSkillInfoData_o *v18; // x25
  __int64 v19; // x8
  __int64 v20; // x8
  BattleLogicTask_o *v21; // x24
  BattleLogic_o *logic; // x25
  __int64 v23; // x26
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v32; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C2A3A6 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask___TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&BattleSkillInfoData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A3A6 = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v10 = Instance;
  if ( !Instance )
    goto LABEL_44;
  v11 = *(_DWORD *)(Instance + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= v11 )
        goto LABEL_45;
      v13 = *(BattleServantData_o **)(v10 + 8LL * (int)v12 + 32);
      if ( !v13 )
        goto LABEL_44;
      if ( !v13->fields.status )
      {
        Instance = BattleServantData__isAlive(v13, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v13, 0);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_44;
          v14 = *(_DWORD *)(Instance + 24);
          v15 = Instance;
          if ( v14 >= 1 )
          {
            v16 = 0;
            while ( v16 < v14 )
            {
              v17 = *(_QWORD *)(v15 + 8LL * (int)v16 + 32);
              v18 = (BattleSkillInfoData_o *)sub_1C2D6DC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v18, 0);
              if ( !v18 )
                goto LABEL_44;
              v18->fields.svtUniqueId = v13->fields.uniqueId;
              if ( !v17 )
                goto LABEL_44;
              v19 = *(_QWORD *)(v17 + 40);
              if ( !v19 )
                goto LABEL_44;
              if ( !*(_DWORD *)(v19 + 24) )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v18->klass->vtable._4_set_skillId.methodPtr)(
                           v18,
                           *(unsigned int *)(v19 + 32),
                           v18->klass->vtable._4_set_skillId.method);
              v20 = *(_QWORD *)(v17 + 40);
              if ( !v20 )
                goto LABEL_44;
              if ( *(_DWORD *)(v20 + 24) <= 1u )
                break;
              v18->fields.skilllv = *(_DWORD *)(v20 + 36);
              v21 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v21, 0);
              if ( !v21 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v21, v18, 0, 0);
              logic = this->fields.logic;
              Instance = sub_1C2D538(BattleLogicTask___TypeInfo, 1);
              if ( !Instance )
                goto LABEL_44;
              v23 = Instance;
              Instance = sub_1C2D5CC(v21, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v32 = sub_1C2D710(0);
                sub_1C2D5B8(v32, 0);
              }
              if ( !*(_DWORD *)(v23 + 24) )
                break;
              *(_QWORD *)(v23 + 32) = v21;
              sub_1C2D434((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v21, v9, v24);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v13,
                (BattleBuffData_BuffData_array *)v15,
                (BattleLogicTask_array *)v23,
                0);
              if ( !v6 )
                goto LABEL_44;
              items = v6->fields._items;
              v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v21,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v21;
                sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v21, v25, v26);
              }
              v14 = *(_DWORD *)(v15 + 24);
              if ( (int)++v16 >= v14 )
                goto LABEL_38;
            }
LABEL_45:
            sub_1C2D6F4(Instance, v8, v9);
          }
LABEL_38:
          Instance = (__int64)v13->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
        }
      }
      v11 = *(_DWORD *)(v10 + 24);
    }
    while ( (int)++v12 < v11 );
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
    sub_1C2D6EC(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v23; // x2
  struct System_Int32_array *vals; // x8
  int max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v27; // x1
  SkillLvEntity_o *v28; // x29
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x26
  BattleActionData_o *v32; // x28
  DataVals_array *DataValsList; // x0
  __int64 v34; // x1
  BattleLogicFunction_o *v35; // x0
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v38; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+60h] [xbp-80h] BYREF

  v38 = this;
  if ( (byte_4C2A3AB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4C2A3AB = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !commandCodeBuffList )
    sub_1C2D6EC(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v40.fields._current = v39.fields._current;
  if ( isCommandAfter )
    v15 = 1;
  else
    v15 = 3;
  *(_OWORD *)&v40.fields._list = *(_OWORD *)&v39.fields._list;
  type = v15;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_1C2D6EC(v16, v17);
    current = (BattleBuffData_BuffData_o *)v40.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1C2D6EC(IsEnableCommandCode, v20);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1C2D6EC(IsEnableCommandCode, v20);
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
          sub_1C2D6EC(v21, v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_1C2D6EC(v21, v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1C2D6F4(v21, v22, v23);
        if ( max_length == 1 )
          sub_1C2D6F4(v21, v22, v23);
        if ( !skillLvMst )
          sub_1C2D6EC(v21, v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[0], vals->m_Items[1], 0);
        v28 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1C2D6EC(Entity, v27);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1C2D6EC(Entity, v27);
          logicfunction = v38->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0);
          funcId = v28->fields.funcId;
          v32 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v28, 0);
          if ( !logicfunction )
            sub_1C2D6EC(DataValsList, v34);
          BattleLogicFunction__procList(
            logicfunction,
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
      else
      {
        v35 = v38->fields.logicfunction;
        if ( !v35 )
          sub_1C2D6EC(0, v22);
        BattleLogicFunction__SetSideEffectBuff(
          v35,
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
    &v40,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  BattleServantData_o *ServantData; // x0

  if ( (byte_4C2A398 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&StringLiteral_8736/*"MOTION_BACK"*/);
    byte_4C2A398 = 1;
  }
  v5 = sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 32) = uniqueId,
        v10 = StringLiteral_8736/*"MOTION_BACK"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_8736/*"MOTION_BACK"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 72), v10, v8, v9),
        (data = this->fields.data) == 0) )
  {
    sub_1C2D6EC(data, v7);
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
  __int64 v5; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v7; // x20
  unsigned __int64 v8; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  struct BattleData_o *v10; // x9
  int32_t v11; // w21

  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
  if ( !data )
    goto LABEL_21;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v7 = data;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    p_rootfsm = &data->fields.rootfsm;
    while ( 1 )
    {
      v10 = this->fields.data;
      if ( !v10 )
        break;
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_22;
      data = (BattleData_o *)v10->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))&data->klass[2]._1.this_arg.bits)(
                               data,
                               p_rootfsm[v8],
                               data->klass[2]._1.element_class);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v8];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0);
        if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        v11 = (int)data;
        data = (BattleData_o *)p_rootfsm[v8];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0);
        if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v8];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v11, 1, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_22:
            sub_1C2D6F4(data, task, v5);
          data = (BattleData_o *)p_rootfsm[v8];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0, 0);
        }
      }
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return 0;
    }
LABEL_21:
    sub_1C2D6EC(data, task);
  }
  return 0;
}


BattleActionData_o *BattleLogicNomal__createBuffAddPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 data; // x0
  __int64 v5; // x2
  struct BattleData_o *v6; // x8
  __int64 v7; // x10
  __int64 v8; // x20
  _BOOL4 v9; // w9
  unsigned __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w21
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *v14; // x20
  Il2CppObject *v15; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C2A3A5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C2D490(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__43_0__);
    sub_1C2D490(&BattleLogicNomal___c_TypeInfo);
    byte_4C2A3A5 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_31;
  data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0);
  if ( !data )
    goto LABEL_31;
  v6 = this->fields.data;
  v7 = *(_QWORD *)(data + 24);
  v8 = data;
  v9 = v6 == 0;
  if ( (int)v7 >= 1 )
  {
    v10 = 0;
    v11 = data + 32;
    while ( !v9 )
    {
      if ( v10 >= (unsigned int)v7 )
        goto LABEL_32;
      data = (__int64)v6->fields.battleEvent;
      if ( !data )
        break;
      data = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)data + 872LL))(
               data,
               *(_QWORD *)(v11 + 8 * v10),
               *(_QWORD *)(*(_QWORD *)data + 880LL));
      if ( (data & 1) != 0 )
      {
        if ( v10 >= *(unsigned int *)(v8 + 24) )
          goto LABEL_32;
        data = *(_QWORD *)(v11 + 8 * v10);
        if ( !data )
          break;
        data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0);
        if ( v10 >= *(unsigned int *)(v8 + 24) )
          goto LABEL_32;
        v12 = data;
        data = *(_QWORD *)(v11 + 8 * v10);
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0);
        if ( v10 >= *(unsigned int *)(v8 + 24) )
          goto LABEL_32;
        data = *(_QWORD *)(v11 + 8 * v10);
        if ( !data )
          break;
        data = BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v12, 1, 0);
        if ( (data & 1) != 0 )
        {
          if ( v10 >= *(unsigned int *)(v8 + 24) )
LABEL_32:
            sub_1C2D6F4(data, task, v5);
          data = *(_QWORD *)(v11 + 8 * v10);
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0, 0);
        }
      }
      v6 = this->fields.data;
      LODWORD(v7) = *(_DWORD *)(v8 + 24);
      ++v10;
      v9 = v6 == 0;
      if ( (__int64)v10 >= (int)v7 )
        goto LABEL_22;
    }
LABEL_31:
    sub_1C2D6EC(data, task);
  }
LABEL_22:
  if ( v9 )
    goto LABEL_31;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v6->fields.aiNpcDataList;
  data = (__int64)BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    data = (__int64)BattleLogicNomal___c_TypeInfo;
  }
  v14 = *(System_Action_object__o **)(*(_QWORD *)(data + 184) + 72LL);
  if ( !v14 )
  {
    if ( !*(_DWORD *)(data + 224) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = (__int64)BattleLogicNomal___c_TypeInfo;
    }
    v15 = **(Il2CppObject ***)(data + 184);
    v14 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(v14, v15, Method_BattleLogicNomal___c__createBuffAddPlayer_b__43_0__, 0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_AiNpcBattleServantData__o *)v14;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)v14, v17, v18);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v14,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  int v12; // w8
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

  if ( (byte_4C2A399 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&FunctionEntity_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_1C2D490(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_1C2D490(&StringLiteral_6407/*"FIELD_PLAYER"*/);
    sub_1C2D490(&StringLiteral_6406/*"FIELD_ENEMY"*/);
    byte_4C2A399 = 1;
  }
  v5 = sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_1C2D6DC(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0);
  if ( BattleLogicTask__isArts(task, 0) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0);
    isBuster = sub_1C2D538(int___TypeInfo, 2);
    if ( isBuster )
    {
      v12 = *(_DWORD *)(isBuster + 24);
      v7 = isBuster;
      if ( !v12 || (*(_DWORD *)(isBuster + 32) = 102, v12 == 1) )
LABEL_30:
        sub_1C2D6F4(isBuster, v7, v10);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBuster;
        v13 = (CGThumbnailListItem_o *)(v9 + 32);
LABEL_14:
        sub_1C2D434(v13, v7, v10, v11);
        v18 = &StringLiteral_6407/*"FIELD_PLAYER"*/;
LABEL_15:
        v19 = *v18;
        *(_QWORD *)(v5 + 72) = *v18;
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 72), v19, v16, v17);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1C2D6EC(isBuster, v7);
  }
  if ( BattleLogicTask__isQuick(task, 0) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0);
    v14 = (System_Array_o *)sub_1C2D538(int___TypeInfo, 3);
    v15.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v14, v15, 0);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(v9 + 32) = v14;
    v13 = (CGThumbnailListItem_o *)(v9 + 32);
    LODWORD(v7) = (_DWORD)v14;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v5, 0);
    v24 = (System_Array_o *)sub_1C2D538(int___TypeInfo, 3);
    v25.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v24, v25, 0);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v24;
      sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v24, v26, v27);
      v18 = &StringLiteral_6406/*"FIELD_ENEMY"*/;
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
  __int64 v6; // x1
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_1C2D6EC(v5, v6);
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
  const MethodInfo *v7; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleData_o *data; // x8
  BattleLogicNomal_Fields *p_fields; // x19
  System_Int32_array *QuestIndividualities; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_int__o *v17; // x23
  Il2CppObject *v18; // x2
  int v19; // w8
  __int64 v20; // x28
  unsigned int v21; // w20
  __int64 v22; // x21
  __int64 *v23; // x21
  __int64 v24; // t1
  BattleBuffData_BuffData_array *v25; // x29
  unsigned int v26; // w8
  struct System_Int32_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  BattleData_o *v30; // x21
  struct BattleData_o *v31; // x8
  __int64 v32; // x28
  unsigned int v33; // w26
  System_Collections_Generic_List_object__o *v34; // x29
  __int64 v35; // x23
  BattleServantData_o *v36; // x21
  __int64 *v37; // x23
  BattleServantData_o *v38; // t1
  char v39; // w20
  System_Int32_array *v40; // x25
  BattleLogic_o *logic; // x27
  System_Func_object__bool__o *v42; // x24
  int v43; // w21
  bool v44; // w3
  char v45; // w21
  BattleServantData_o *v46; // x21
  char v47; // w20
  System_Int32_array *v48; // x24
  BattleLogic_o *v49; // x25
  System_Func_object__bool__o *v50; // x27
  int32_t v51; // w21
  System_Object_array *v52; // x2
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  struct BaseBattleEvent_o *battleEvent; // x21
  struct BattleData_o *v57; // x8
  struct BattlePerformance_o *perf; // x9
  System_Collections_Generic_List_object__o *aiNpcDataList; // x21
  System_Action_object__o *v60; // x26
  const MethodInfo *v61; // x2
  struct BattleData_o *v62; // x8
  Il2CppObject *Entity; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  Il2CppObject *value; // x24
  int32_t key; // w25
  int monitor; // w9
  int32_t v69; // w8
  char v70; // w23
  BattleBuffData_BuffData_o *v71; // x28
  BattleSkillInfoData_o *v72; // x26
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  struct System_Int32_array *vals; // x8
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  struct System_Int32_array *v80; // x8
  BattleServantData_o *ServantData; // x27
  __int64 v82; // x1
  SkillLvEntity_o *v83; // x0
  __int64 v84; // x1
  SkillLvEntity_o *v85; // x21
  _BOOL8 v86; // x0
  __int64 v87; // x1
  BattleLogic_o *v88; // x0
  int32_t v89; // w29
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v96; // x0
  __int64 v97; // x1
  System_Collections_ICollection_o *v98; // x0
  __int64 v99; // x1
  System_Collections_ICollection_o *v100; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v102; // x2
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v104; // x0
  __int64 v105; // x1
  int32_t v106; // w24
  Il2CppObject *v107; // x23
  BuffEntity_o *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  BattleServantData_o *v111; // x21
  BattleBuffData_CheckIndividualitiesData_o *v112; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v114; // w8
  int32_t v115; // w9
  BattleBuffData_BuffData_o *v116; // x26
  __int64 v117; // x1
  BattleSkillInfoData_o *v118; // x27
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  struct System_Int32_array *v122; // x8
  __int64 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  struct System_Int32_array *v126; // x8
  BattleServantData_o *v127; // x28
  __int64 v128; // x1
  SkillLvEntity_o *v129; // x0
  __int64 v130; // x1
  SkillLvEntity_o *v131; // x21
  _BOOL8 v132; // x0
  __int64 v133; // x1
  BattleLogic_o *v134; // x0
  int32_t v135; // w29
  __int64 v136; // x0
  __int64 v137; // x1
  __int64 v138; // x2
  System_Int32_array *v139; // x21
  bool v140; // w28
  BattleLogicSkill_o *v141; // x29
  __int64 v142; // x0
  __int64 v143; // x1
  BattleLogicTask_array *v144; // x1
  BattleLogic_o *v145; // x0
  BattleActionData_o *v146; // x1
  System_Collections_Generic_Dictionary_int__object__o *v148; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__object__o *v149; // [xsp+28h] [xbp-F8h]
  System_Int32_array **v150; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_int__o *v151; // [xsp+38h] [xbp-E8h]
  BattleActionData_o *actiondata; // [xsp+40h] [xbp-E0h]
  char v153; // [xsp+4Ch] [xbp-D4h]
  __int64 v154; // [xsp+50h] [xbp-D0h]
  SkillLvMaster_o *v155; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v157; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v158; // [xsp+90h] [xbp-90h] BYREF
  int32_t targetIndex; // [xsp+BCh] [xbp-64h] BYREF

  if ( (byte_4C2A3A3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C2D490(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C2D490(&BattleSkillInfoData_TypeInfo);
    sub_1C2D490(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C2D490(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass41_0__createEndTurnEnemy_b__0__);
    sub_1C2D490(&BattleLogicNomal___c__DisplayClass41_0_TypeInfo);
    sub_1C2D490(&StringLiteral_8748/*"MOTION_ENEMY_TURN_END"*/);
    byte_4C2A3A3 = 1;
  }
  targetIndex = 0;
  memset(&v158, 0, sizeof(v158));
  v3 = sub_1C2D6DC(BattleLogicNomal___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_234;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  actiondata = (BattleActionData_o *)sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_234;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v3 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_234;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_234;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !actiondata )
    goto LABEL_234;
  BattleActionData__setStateField(actiondata, 0);
  v9 = StringLiteral_8748/*"MOTION_ENEMY_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8748/*"MOTION_ENEMY_TURN_END"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&actiondata->fields.motionname, v9, v10, v11);
  v149 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v149,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v148 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v148,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_234;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  p_fields = &this->fields;
  data = this->fields.data;
  v155 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_234;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v3 + 24) = QuestIndividualities;
  v150 = (System_Int32_array **)(v3 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)QuestIndividualities, v15, v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_234;
  v19 = *(_DWORD *)(Instance + 24);
  v20 = Instance;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < v19 )
    {
      v22 = v20 + 8LL * (int)v21;
      v24 = *(_QWORD *)(v22 + 32);
      v23 = (__int64 *)(v22 + 32);
      Instance = v24;
      if ( !v24 )
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
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          break;
        v25 = (BattleBuffData_BuffData_array *)Instance;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_234;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v21 >= *(_DWORD *)(v20 + 24) )
            break;
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_234;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_234;
            if ( v25->max_length )
            {
              if ( v21 >= *(_DWORD *)(v20 + 24) )
                break;
              Instance = (__int64)v149;
              if ( !*v23 || !v149 )
                goto LABEL_234;
              System_Collections_Generic_Dictionary_int__object___Add(
                v149,
                *(_DWORD *)(*v23 + 24),
                &v25->obj,
                (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v26 = *(_DWORD *)(v20 + 24);
        if ( v21 >= v26 )
          break;
        if ( !*v23 )
          goto LABEL_234;
        if ( !v17 )
          goto LABEL_234;
        v5 = *(unsigned int *)(*v23 + 24);
        items = v17->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v5,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          v26 = *(_DWORD *)(v20 + 24);
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
        if ( v21 >= v26 )
          break;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_234;
        v30 = p_fields->data;
        Instance = (__int64)BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        if ( !v30 )
          goto LABEL_234;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v30, (BattleBuffData_o *)Instance, v25, 0);
      }
      v19 = *(_DWORD *)(v20 + 24);
      if ( (int)++v21 >= v19 )
        goto LABEL_41;
    }
LABEL_237:
    sub_1C2D6F4(Instance, v5, v18);
  }
LABEL_41:
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v31 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  v32 = Instance;
  if ( v31->fields.leaderDown && v31->fields.endbattleFlg )
  {
    v153 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_234;
    v151 = v17;
    if ( *(int *)(Instance + 24) >= 1 )
    {
      v33 = 0;
      v153 = 0;
      v154 = v3;
      while ( 1 )
      {
        v34 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v34,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_237;
        v35 = v32 + 8LL * (int)v33;
        v38 = *(BattleServantData_o **)(v35 + 32);
        v37 = (__int64 *)(v35 + 32);
        v36 = v38;
        if ( !v38 )
          goto LABEL_234;
        if ( v36->fields.isBuffProgressFlg )
        {
          v39 = *(_BYTE *)(v3 + 16);
          v40 = *(System_Int32_array **)(v3 + 24);
          logic = this->fields.logic;
          v42 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v42, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v36,
                                v39,
                                v40,
                                logic,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v42,
                                0);
          if ( !v34 )
            goto LABEL_234;
          System_Collections_Generic_List_object___AddRange(
            v34,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_237;
          Instance = *v37;
          v3 = v154;
          if ( !*v37 )
            goto LABEL_234;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 464LL));
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_237;
          v43 = Instance;
          Instance = *v37;
          if ( !*v37 )
            goto LABEL_234;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 528LL));
          if ( v43 != (_DWORD)Instance )
          {
            if ( v33 >= *(_DWORD *)(v32 + 24) )
              goto LABEL_237;
            Instance = *v37;
            if ( !*v37 )
              goto LABEL_234;
            BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
          }
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_237;
        Instance = *v37;
        if ( !*v37 )
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
            v44 = 1;
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
              v44 = Instance & 1;
            }
            else
            {
              v44 = 0;
            }
          }
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_237;
          Instance = *v37;
          if ( !*v37 )
            goto LABEL_234;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *v150,
                       this->fields.logic,
                       v44,
                       actiondata,
                       0);
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_237;
          v45 = Instance;
          Instance = *v37;
          if ( !*v37 )
            goto LABEL_234;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v33 >= *(_DWORD *)(v32 + 24) )
              goto LABEL_237;
            Instance = *v37;
            if ( !*v37 )
              goto LABEL_234;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_234;
            v18 = (Il2CppObject *)Instance;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v33 >= *(_DWORD *)(v32 + 24) )
                goto LABEL_237;
              Instance = (__int64)v148;
              if ( !*v37 || !v148 )
                goto LABEL_234;
              System_Collections_Generic_Dictionary_int__object___Add(
                v148,
                *(_DWORD *)(*v37 + 24),
                v18,
                (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_237;
          if ( !*v37 )
            goto LABEL_234;
          Instance = *(_QWORD *)(*v37 + 816);
          if ( !Instance )
            goto LABEL_234;
          v153 |= v45;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_237;
        v46 = (BattleServantData_o *)*v37;
        if ( !*v37 )
          goto LABEL_234;
        if ( v46->fields.isBuffProgressFlg )
        {
          v47 = *(_BYTE *)(v3 + 16);
          v48 = *(System_Int32_array **)(v3 + 24);
          v49 = this->fields.logic;
          v50 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v50, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v46,
                                v47,
                                v48,
                                v49,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v50,
                                0);
          if ( !v34 )
            goto LABEL_234;
          System_Collections_Generic_List_object___AddRange(
            v34,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_237;
          Instance = *v37;
          v3 = v154;
          if ( !*v37 )
            goto LABEL_234;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v33 >= *(_DWORD *)(v32 + 24) )
              goto LABEL_237;
            Instance = *v37;
            if ( !*v37 )
              goto LABEL_234;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v34, 0);
              if ( (Instance & 1) == 0 )
              {
                if ( v33 >= *(_DWORD *)(v32 + 24) )
                  goto LABEL_237;
                if ( !*v37 )
                  goto LABEL_234;
                v51 = *(_DWORD *)(*v37 + 24);
                v52 = System_Collections_Generic_List_object___ToArray(
                        v34,
                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                Instance = (__int64)v149;
                if ( !v149 )
                  goto LABEL_234;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v149,
                  v51,
                  &v52->obj,
                  (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_237;
          if ( !*v37 )
            goto LABEL_234;
          Instance = (__int64)v151;
          if ( !v151 )
            goto LABEL_234;
          v5 = *(unsigned int *)(*v37 + 24);
          v53 = v151->fields._items;
          v54 = Method_System_Collections_Generic_List_int__Add__;
          ++v151->fields._version;
          if ( !v53 )
            goto LABEL_234;
          v55 = v151->fields._size;
          if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v151,
              v5,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v151->fields._size = v55 + 1;
            v53->m_Items[v55] = v5;
          }
        }
        if ( (signed int)++v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_120;
      }
    }
    v153 = 0;
LABEL_120:
    v31 = p_fields->data;
    v17 = v151;
    if ( !p_fields->data )
      goto LABEL_234;
  }
  if ( !v17 )
    goto LABEL_234;
  battleEvent = v31->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v17,
                        (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_234;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v3 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v57 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_234;
  perf = v57->fields.perf;
  if ( !perf )
    goto LABEL_234;
  Instance = (__int64)v57->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_234;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  if ( !p_fields->data )
    goto LABEL_234;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)p_fields->data->fields.aiNpcDataList;
  v60 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v60,
    (Il2CppObject *)v3,
    Method_BattleLogicNomal___c__DisplayClass41_0__createEndTurnEnemy_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_234;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v60,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v3 + 24), v61);
  v62 = this->fields.data;
  if ( !v62 )
    goto LABEL_234;
  Instance = (__int64)v148;
  v62->fields.currentTurn = 0;
  if ( !v148 )
    goto LABEL_234;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v157,
    v148,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v158 = v157;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v158,
                               (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v158.fields._current.fields.value;
    key = (int32_t)v158.fields._current.fields.key;
    targetIndex = 0;
    if ( !v158.fields._current.fields.value )
      sub_1C2D6EC(Entity, v64);
    monitor = (int)v158.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      v69 = 0;
      v70 = 1;
LABEL_137:
      if ( v69 >= (unsigned int)monitor )
        sub_1C2D6F4(Entity, v64, v65);
      v71 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v69);
      if ( !v71 )
        sub_1C2D6EC(Entity, v64);
      if ( v71->fields._isRemove )
        goto LABEL_173;
      if ( !v8 )
        sub_1C2D6EC(Entity, v64);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v8,
                 v71->fields.buffId,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_173;
      v72 = (BattleSkillInfoData_o *)sub_1C2D6DC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v72, 0);
      if ( !v72 )
        sub_1C2D6EC(v73, v74);
      v72->fields.svtUniqueId = key;
      vals = v71->fields.vals;
      if ( !vals )
        sub_1C2D6EC(v73, v74);
      if ( !LODWORD(vals->max_length) )
        sub_1C2D6F4(v73, v74, v75);
      v77 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v72->klass->vtable._4_set_skillId.methodPtr)(
              v72,
              (unsigned int)vals->m_Items[0],
              v72->klass->vtable._4_set_skillId.method);
      v80 = v71->fields.vals;
      if ( !v80 )
        sub_1C2D6EC(v77, v78);
      if ( LODWORD(v80->max_length) <= 1 )
        sub_1C2D6F4(v77, v78, v79);
      v72->fields.skilllv = v80->m_Items[1];
      if ( !p_fields->data )
        sub_1C2D6EC(0, v78);
      ServantData = BattleData__getServantData(p_fields->data, v72->fields.svtUniqueId, 0);
      v82 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v72->klass->vtable._5_get_skillId.methodPtr)(
              v72,
              v72->klass->vtable._5_get_skillId.method);
      if ( !v155 )
        sub_1C2D6EC(0, v82);
      v83 = SkillLvMaster__GetEntity(v155, v82, v72->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C2D6EC(v83, v84);
      v85 = v83;
      if ( !p_fields->data )
        sub_1C2D6EC(0, v84);
      v86 = BattleData__checkAliveOther(p_fields->data, ServantData->fields.uniqueId, 0);
      if ( !v86 )
      {
        if ( !v85 )
          sub_1C2D6EC(v86, v87);
        v88 = this->fields.logic;
        if ( !v88 )
          sub_1C2D6EC(0, v87);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v88, v85->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_173;
      }
      v89 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v71, 0);
      if ( v89 < 0 )
      {
        TargetIds = Target__getTargetIds(p_fields->data, v72->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v72, 0);
      }
      else
      {
        v90 = sub_1C2D538(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v90;
        if ( !v90 )
          sub_1C2D6EC(0, v91);
        if ( !*(_DWORD *)(v90 + 24) )
          sub_1C2D6F4(v90, v91, v92);
        exists = 0;
        *(_DWORD *)(v90 + 32) = v89;
      }
      logicskill = this->fields.logicskill;
      v96 = sub_1C2D538(int___TypeInfo, 1);
      if ( !v96 )
        sub_1C2D6EC(0, v97);
      if ( !*(_DWORD *)(v96 + 24) )
        sub_1C2D6F4(v96, v97, v96);
      *(_DWORD *)(v96 + 32) = key;
      if ( !logicskill )
        sub_1C2D6EC(v96, v97);
      v98 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                  logicskill,
                                                  v72,
                                                  (System_Int32_array *)v96,
                                                  TargetIds,
                                                  1,
                                                  exists,
                                                  0,
                                                  0,
                                                  0,
                                                  0);
      v100 = v98;
      if ( (v70 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v98, 0);
        if ( IsNullOrEmpty )
        {
          v70 = 1;
          goto LABEL_171;
        }
        if ( !v100 )
          sub_1C2D6EC(IsNullOrEmpty, v99);
        if ( !LODWORD(v100[1].monitor) )
          sub_1C2D6F4(IsNullOrEmpty, v99, v102);
        klass = (BattleLogicTask_o *)v100[2].klass;
        if ( !klass )
          sub_1C2D6EC(0, v99);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v70 = 0;
LABEL_171:
      v104 = this->fields.logic;
      if ( !v104 )
        sub_1C2D6EC(0, v99);
      BattleLogic__addBattleLogicTask(v104, (BattleLogicTask_array *)v100, 0);
LABEL_173:
      v69 = targetIndex + 1;
      targetIndex = v69;
      monitor = (int)value[1].monitor;
      if ( v69 >= monitor )
        continue;
      goto LABEL_137;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v158,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v149;
  if ( !v149 )
    goto LABEL_234;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v157,
    v149,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v158 = v157;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v158,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1C2D6EC(0, v105);
    v106 = (int32_t)v158.fields._current.fields.key;
    v107 = v158.fields._current.fields.value;
    v108 = (BuffEntity_o *)BattleData__getServantData(p_fields->data, (int32_t)v158.fields._current.fields.key, 0);
    v111 = (BattleServantData_o *)v108;
    if ( v108 )
    {
      v112 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C2D6DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45569888(v112, v111, 0, 0, 0, 0, 0, 1, 0);
      if ( !v112 )
        sub_1C2D6EC(v108, v109);
      selfConcatSvtIndividualities_k__BackingField = v112->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
    }
    targetIndex = 0;
    if ( !v107 )
      sub_1C2D6EC(v108, v109);
    v114 = (int)v107[1].monitor;
    if ( v114 >= 1 )
    {
      v115 = 0;
      do
      {
        if ( v115 >= (unsigned int)v114 )
          sub_1C2D6F4(v108, v109, v110);
        v116 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v107[2].klass + v115);
        if ( !v116 )
          sub_1C2D6EC(v108, v109);
        if ( !v116->fields._isRemove )
        {
          if ( !v8 )
            sub_1C2D6EC(v108, v109);
          v108 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v8,
                                   v116->fields.buffId,
                                   (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v108 )
          {
            if ( BuffEntity__isEndAct(v108, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v116, 1, 0) )
            {
              v118 = (BattleSkillInfoData_o *)sub_1C2D6DC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v118, 0);
              if ( !v118 )
                sub_1C2D6EC(v119, v120);
              v118->fields.svtUniqueId = v106;
              v122 = v116->fields.vals;
              if ( !v122 )
                sub_1C2D6EC(v119, v120);
              if ( !LODWORD(v122->max_length) )
                sub_1C2D6F4(v119, v120, v121);
              v123 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v118->klass->vtable._4_set_skillId.methodPtr)(
                       v118,
                       (unsigned int)v122->m_Items[0],
                       v118->klass->vtable._4_set_skillId.method);
              v126 = v116->fields.vals;
              if ( !v126 )
                sub_1C2D6EC(v123, v124);
              if ( LODWORD(v126->max_length) <= 1 )
                sub_1C2D6F4(v123, v124, v125);
              v118->fields.skilllv = v126->m_Items[1];
              if ( !p_fields->data )
                sub_1C2D6EC(0, v124);
              v127 = BattleData__getServantData(p_fields->data, v118->fields.svtUniqueId, 0);
              v128 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v118->klass->vtable._5_get_skillId.methodPtr)(
                       v118,
                       v118->klass->vtable._5_get_skillId.method);
              if ( !v155 )
                sub_1C2D6EC(0, v128);
              v129 = SkillLvMaster__GetEntity(v155, v128, v118->fields.skilllv, 0);
              if ( !v127 )
                sub_1C2D6EC(v129, v130);
              v131 = v129;
              if ( !p_fields->data )
                sub_1C2D6EC(0, v130);
              v132 = BattleData__checkAliveOther(p_fields->data, v127->fields.uniqueId, 0);
              if ( v132 )
                goto LABEL_206;
              if ( !v131 )
                sub_1C2D6EC(v132, v133);
              v134 = this->fields.logic;
              if ( !v134 )
                sub_1C2D6EC(0, v133);
              if ( BattleLogic__checkPtTargetFunction(v134, v131->fields.funcId, 0) )
              {
LABEL_206:
                v135 = BattleServantData__GetRevengeIdCheckOpponentOnly(v127, v116, 0);
                if ( v135 < 0 )
                {
                  v139 = Target__getTargetIds(p_fields->data, v118->fields.svtUniqueId, -1, v106, 13, 0, 0);
                  v140 = BattleSkillInfoData__ExistsNoTargetNoActionType(v118, 0);
                }
                else
                {
                  v136 = sub_1C2D538(int___TypeInfo, 1);
                  v139 = (System_Int32_array *)v136;
                  if ( !v136 )
                    sub_1C2D6EC(0, v137);
                  if ( !*(_DWORD *)(v136 + 24) )
                    sub_1C2D6F4(v136, v137, v138);
                  v140 = 0;
                  *(_DWORD *)(v136 + 32) = v135;
                }
                v141 = this->fields.logicskill;
                v142 = sub_1C2D538(int___TypeInfo, 1);
                if ( !v142 )
                  sub_1C2D6EC(0, v143);
                if ( !*(_DWORD *)(v142 + 24) )
                  sub_1C2D6F4(v142, v143, v142);
                *(_DWORD *)(v142 + 32) = v106;
                if ( !v141 )
                  sub_1C2D6EC(v142, v143);
                v144 = BattleLogicSkill__taskSkill(v141, v118, (System_Int32_array *)v142, v139, 1, v140, 0, 0, 0, 0);
                v145 = this->fields.logic;
                if ( !v145 )
                  sub_1C2D6EC(0, v144);
                BattleLogic__addBattleLogicTask(v145, v144, 0);
              }
            }
            if ( !p_fields->data )
              sub_1C2D6EC(0, v117);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(p_fields->data, v116, 0);
          }
        }
        v115 = targetIndex + 1;
        targetIndex = v115;
        v114 = (int)v107[1].monitor;
      }
      while ( v115 < v114 );
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v158,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v149, 0);
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
    sub_1C2D6EC(Instance, v5);
  }
  if ( (v153 & 1) != 0 )
    v146 = actiondata;
  else
    v146 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v146, actiondata, 0);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x28
  unsigned int v19; // w23
  System_Collections_Generic_List_object__o *v20; // x29
  Il2CppObject *v21; // x2
  __int64 v22; // x26
  BattleServantData_o *v23; // x21
  __int64 *v24; // x26
  BattleServantData_o *v25; // t1
  BattleLogic_o *logic; // x27
  char v27; // w20
  System_Int32_array *v28; // x25
  System_Func_object__bool__o *v29; // x24
  int v30; // w21
  bool v31; // w3
  char v32; // w21
  BattleServantData_o *v33; // x21
  BattleLogic_o *v34; // x25
  char v35; // w20
  System_Int32_array *v36; // x24
  System_Func_object__bool__o *v37; // x27
  int32_t v38; // w21
  System_Object_array *v39; // x2
  unsigned int v40; // w8
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
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct BaseBattleEvent_o *battleEvent; // x21
  struct BattleData_o *v58; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v60; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x21
  System_Action_object__o *v62; // x26
  struct BattleData_o *v63; // x8
  const MethodInfo *v64; // x2
  struct BattleData_o *v65; // x8
  Il2CppObject *Entity; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v72; // w23
  char v73; // w20
  BattleBuffData_BuffData_o *v74; // x28
  BattleSkillInfoData_o *v75; // x26
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  struct System_Int32_array *vals; // x8
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  struct System_Int32_array *v83; // x8
  BattleData_o *v84; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v86; // x1
  SkillLvEntity_o *v87; // x0
  __int64 v88; // x1
  SkillLvEntity_o *v89; // x21
  BattleData_o *v90; // x0
  _BOOL8 v91; // x0
  __int64 v92; // x1
  BattleLogic_o *v93; // x0
  int32_t v94; // w29
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v101; // x0
  __int64 v102; // x1
  System_Collections_ICollection_o *v103; // x0
  __int64 v104; // x1
  System_Collections_ICollection_o *v105; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v107; // x2
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v109; // x0
  __int64 v110; // x1
  BattleData_o *v111; // x0
  int32_t v112; // w24
  Il2CppObject *v113; // x23
  BuffEntity_o *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  BattleServantData_o *v117; // x21
  BattleBuffData_CheckIndividualitiesData_o *v118; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v120; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v122; // x26
  __int64 v123; // x1
  BattleSkillInfoData_o *v124; // x27
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  struct System_Int32_array *v128; // x8
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  struct System_Int32_array *v132; // x8
  BattleData_o *v133; // x0
  BattleServantData_o *v134; // x28
  __int64 v135; // x1
  SkillLvEntity_o *v136; // x0
  __int64 v137; // x1
  SkillLvEntity_o *v138; // x21
  BattleData_o *v139; // x0
  _BOOL8 v140; // x0
  __int64 v141; // x1
  BattleLogic_o *v142; // x0
  int32_t v143; // w29
  __int64 v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  System_Int32_array *v147; // x21
  bool v148; // w28
  BattleLogicSkill_o *v149; // x29
  __int64 v150; // x0
  __int64 v151; // x1
  BattleLogicTask_array *v152; // x1
  BattleLogic_o *v153; // x0
  BattleData_o *v154; // x0
  struct BattleData_o *v155; // x8
  BattleActionData_o *v156; // x1
  System_Collections_Generic_Dictionary_int__object__o *v158; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v159; // [xsp+20h] [xbp-F0h]
  System_Int32_array **v160; // [xsp+28h] [xbp-E8h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-E0h]
  char v162; // [xsp+3Ch] [xbp-D4h]
  System_Collections_Generic_List_int__o *v163; // [xsp+40h] [xbp-D0h]
  __int64 v164; // [xsp+48h] [xbp-C8h]
  SkillLvMaster_o *v165; // [xsp+50h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v166; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v167; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4C2A3A0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C2D490(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C2D490(&BattleSkillInfoData_TypeInfo);
    sub_1C2D490(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C2D490(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnPlayer_b__0__);
    sub_1C2D490(&BattleLogicNomal___c__DisplayClass38_0_TypeInfo);
    sub_1C2D490(&StringLiteral_8758/*"MOTION_PLAYER_TURN_END"*/);
    byte_4C2A3A0 = 1;
  }
  memset(&v167, 0, sizeof(v167));
  v4 = sub_1C2D6DC(BattleLogicNomal___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_224;
  *(_QWORD *)(v4 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)this, v7, v8);
  BattleLogicNomal__SetNextTargetId(this, v9);
  baseActData = (BattleActionData_o *)sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0);
  *(_BYTE *)(v4 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_224;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_224;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !baseActData )
    goto LABEL_224;
  BattleActionData__setStateField(baseActData, 0);
  v11 = StringLiteral_8758/*"MOTION_PLAYER_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8758/*"MOTION_PLAYER_TURN_END"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&baseActData->fields.motionname, v11, v12, v13);
  v159 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v159,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v158 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v158,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v165 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_224;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  v160 = (System_Int32_array **)(v4 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 24), (int32_t)QuestIndividualities, v16, v17);
  v163 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v163,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_224;
  v18 = Instance;
  v164 = v4;
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v19 = 0;
    v162 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v20,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( v19 >= *(_DWORD *)(v18 + 24) )
        break;
      v22 = v18 + 8LL * (int)v19;
      v25 = *(BattleServantData_o **)(v22 + 32);
      v24 = (__int64 *)(v22 + 32);
      v23 = v25;
      if ( !v25 )
        goto LABEL_224;
      if ( v23->fields.isBuffProgressFlg )
      {
        logic = this->fields.logic;
        v27 = *(_BYTE *)(v164 + 16);
        v28 = *(System_Int32_array **)(v164 + 24);
        v29 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v29, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v23,
                              v27,
                              v28,
                              logic,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v29,
                              0);
        if ( !v20 )
          goto LABEL_224;
        System_Collections_Generic_List_object___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        Instance = *v24;
        if ( !*v24 )
          goto LABEL_224;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 464LL));
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        v30 = Instance;
        Instance = *v24;
        if ( !*v24 )
          goto LABEL_224;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 528LL));
        if ( v30 != (_DWORD)Instance )
        {
          if ( v19 >= *(_DWORD *)(v18 + 24) )
            break;
          Instance = *v24;
          if ( !*v24 )
            goto LABEL_224;
          BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
        }
      }
      if ( v19 >= *(_DWORD *)(v18 + 24) )
        break;
      Instance = *v24;
      if ( !*v24 )
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
          v31 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_224;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0);
          v31 = Instance & 1;
        }
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        Instance = *v24;
        if ( !*v24 )
          goto LABEL_224;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *v160,
                     this->fields.logic,
                     v31,
                     baseActData,
                     0);
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        v32 = Instance;
        Instance = *v24;
        if ( !*v24 )
          goto LABEL_224;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v19 >= *(_DWORD *)(v18 + 24) )
            break;
          Instance = *v24;
          if ( !*v24 )
            goto LABEL_224;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_224;
          v21 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v19 >= *(_DWORD *)(v18 + 24) )
              break;
            Instance = (__int64)v158;
            if ( !*v24 || !v158 )
              goto LABEL_224;
            System_Collections_Generic_Dictionary_int__object___Add(
              v158,
              *(_DWORD *)(*v24 + 24),
              v21,
              (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        if ( !*v24 )
          goto LABEL_224;
        Instance = *(_QWORD *)(*v24 + 816);
        if ( !Instance )
          goto LABEL_224;
        v162 |= v32;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
      }
      if ( v19 >= *(_DWORD *)(v18 + 24) )
        break;
      v33 = (BattleServantData_o *)*v24;
      if ( !*v24 )
        goto LABEL_224;
      if ( v33->fields.isBuffProgressFlg )
      {
        v34 = this->fields.logic;
        v35 = *(_BYTE *)(v164 + 16);
        v36 = *(System_Int32_array **)(v164 + 24);
        v37 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v37, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v33,
                              v35,
                              v36,
                              v34,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v37,
                              0);
        if ( !v20 )
          goto LABEL_224;
        System_Collections_Generic_List_object___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        Instance = *v24;
        if ( !*v24 )
          goto LABEL_224;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v19 >= *(_DWORD *)(v18 + 24) )
            break;
          Instance = *v24;
          if ( !*v24 )
            goto LABEL_224;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v20, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( v19 >= *(_DWORD *)(v18 + 24) )
                break;
              if ( !*v24 )
                goto LABEL_224;
              v38 = *(_DWORD *)(*v24 + 24);
              v39 = System_Collections_Generic_List_object___ToArray(
                      v20,
                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
              Instance = (__int64)v159;
              if ( !v159 )
                goto LABEL_224;
              System_Collections_Generic_Dictionary_int__object___Add(
                v159,
                v38,
                &v39->obj,
                (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v40 = *(_DWORD *)(v18 + 24);
        if ( v19 >= v40 )
          break;
        Instance = (__int64)v163;
        if ( !*v24 )
          goto LABEL_224;
        if ( !v163 )
          goto LABEL_224;
        v6 = *(unsigned int *)(*v24 + 24);
        items = v163->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v163->fields._version;
        if ( !items )
          goto LABEL_224;
        size = v163->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v163,
            v6,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          v40 = *(_DWORD *)(v18 + 24);
        }
        else
        {
          v163->fields._size = size + 1;
          items->m_Items[size] = v6;
        }
        if ( v19 >= v40 )
          break;
        Instance = *v24;
        if ( !*v24 )
          goto LABEL_224;
        v44 = this->fields.data;
        BuffData = BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v20,
                              (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v44 )
          goto LABEL_224;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v44, BuffData, (BattleBuffData_BuffData_array *)Instance, 0);
      }
      if ( (signed int)++v19 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_80;
    }
LABEL_227:
    sub_1C2D6F4(Instance, v6, v21);
  }
  v162 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_224;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_224;
  v47 = Instance;
  Instance = (__int64)v163;
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
                                *(_BYTE *)(v164 + 16),
                                *(System_Int32_array **)(v164 + 24),
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
                Instance = (__int64)v159;
                if ( !*v51 || !v159 )
                  goto LABEL_224;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v159,
                  *(_DWORD *)(*v51 + 24),
                  v53,
                  (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v49 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_227;
          Instance = (__int64)v163;
          if ( !*v51 )
            goto LABEL_224;
          if ( !v163 )
            goto LABEL_224;
          v6 = *(unsigned int *)(*v51 + 24);
          v54 = v163->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++v163->fields._version;
          if ( !v54 )
            goto LABEL_224;
          v56 = v163->fields._size;
          if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v163,
              v6,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v163->fields._size = v56 + 1;
            v54->m_Items[v56] = v6;
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
    Instance = (__int64)v163;
    if ( !v46 )
      goto LABEL_224;
  }
  if ( !Instance )
    goto LABEL_224;
  battleEvent = v46->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_224;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v164 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v58 = this->fields.data;
  if ( !v58 )
    goto LABEL_224;
  perf = v58->fields.perf;
  if ( !perf )
    goto LABEL_224;
  Instance = (__int64)v58->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_224;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_224;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v60->fields.aiNpcDataList;
  v62 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v62,
    (Il2CppObject *)v164,
    Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnPlayer_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_224;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v62,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v63 = this->fields.data;
  if ( !v63 )
    goto LABEL_224;
  Instance = (__int64)v63->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_224;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v164 + 16),
    0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v164 + 24), v64);
  v65 = this->fields.data;
  if ( !v65 )
    goto LABEL_224;
  Instance = (__int64)v158;
  v65->fields.currentTurn = 1;
  if ( !v158 )
    goto LABEL_224;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v166,
    v158,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v167 = v166;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v167,
                               (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v167.fields._current.fields.value;
    if ( !v167.fields._current.fields.value )
      sub_1C2D6EC(Entity, v67);
    monitor = (int)v167.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v167.fields._current.fields.key;
      v72 = 0;
      v73 = 1;
LABEL_127:
      if ( v72 >= monitor )
        sub_1C2D6F4(Entity, v67, v68);
      v74 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + (int)v72);
      if ( !v74 )
        sub_1C2D6EC(Entity, v67);
      if ( v74->fields._isRemove )
        goto LABEL_163;
      if ( !v10 )
        sub_1C2D6EC(Entity, v67);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 v74->fields.buffId,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_163;
      v75 = (BattleSkillInfoData_o *)sub_1C2D6DC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v75, 0);
      if ( !v75 )
        sub_1C2D6EC(v76, v77);
      v75->fields.svtUniqueId = key;
      vals = v74->fields.vals;
      if ( !vals )
        sub_1C2D6EC(v76, v77);
      if ( !LODWORD(vals->max_length) )
        sub_1C2D6F4(v76, v77, v78);
      v80 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v75->klass->vtable._4_set_skillId.methodPtr)(
              v75,
              (unsigned int)vals->m_Items[0],
              v75->klass->vtable._4_set_skillId.method);
      v83 = v74->fields.vals;
      if ( !v83 )
        sub_1C2D6EC(v80, v81);
      if ( LODWORD(v83->max_length) <= 1 )
        sub_1C2D6F4(v80, v81, v82);
      v75->fields.skilllv = v83->m_Items[1];
      v84 = this->fields.data;
      if ( !v84 )
        sub_1C2D6EC(0, v81);
      ServantData = BattleData__getServantData(v84, v75->fields.svtUniqueId, 0);
      v86 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v75->klass->vtable._5_get_skillId.methodPtr)(
              v75,
              v75->klass->vtable._5_get_skillId.method);
      if ( !v165 )
        sub_1C2D6EC(0, v86);
      v87 = SkillLvMaster__GetEntity(v165, v86, v75->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C2D6EC(v87, v88);
      v89 = v87;
      v90 = this->fields.data;
      if ( !v90 )
        sub_1C2D6EC(0, v88);
      v91 = BattleData__checkAliveOther(v90, ServantData->fields.uniqueId, 0);
      if ( !v91 )
      {
        if ( !v89 )
          sub_1C2D6EC(v91, v92);
        v93 = this->fields.logic;
        if ( !v93 )
          sub_1C2D6EC(0, v92);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v93, v89->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_163;
      }
      v94 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v74, 0);
      if ( v94 < 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v75->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v75, 0);
      }
      else
      {
        v95 = sub_1C2D538(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v95;
        if ( !v95 )
          sub_1C2D6EC(0, v96);
        if ( !*(_DWORD *)(v95 + 24) )
          sub_1C2D6F4(v95, v96, v97);
        exists = 0;
        *(_DWORD *)(v95 + 32) = v94;
      }
      logicskill = this->fields.logicskill;
      v101 = sub_1C2D538(int___TypeInfo, 1);
      if ( !v101 )
        sub_1C2D6EC(0, v102);
      if ( !*(_DWORD *)(v101 + 24) )
        sub_1C2D6F4(v101, v102, v101);
      *(_DWORD *)(v101 + 32) = key;
      if ( !logicskill )
        sub_1C2D6EC(v101, v102);
      v103 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v75,
                                                   (System_Int32_array *)v101,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0);
      v105 = v103;
      if ( (v73 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v103, 0);
        if ( IsNullOrEmpty )
        {
          v73 = 1;
          goto LABEL_161;
        }
        if ( !v105 )
          sub_1C2D6EC(IsNullOrEmpty, v104);
        if ( !LODWORD(v105[1].monitor) )
          sub_1C2D6F4(IsNullOrEmpty, v104, v107);
        klass = (BattleLogicTask_o *)v105[2].klass;
        if ( !klass )
          sub_1C2D6EC(0, v104);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v73 = 0;
LABEL_161:
      v109 = this->fields.logic;
      if ( !v109 )
        sub_1C2D6EC(0, v104);
      BattleLogic__addBattleLogicTask(v109, (BattleLogicTask_array *)v105, 0);
LABEL_163:
      monitor = (int)value[1].monitor;
      if ( (int)++v72 >= monitor )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v167,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v159;
  if ( !v159 )
    goto LABEL_224;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v166,
    v159,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v167 = v166;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v167,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v111 = this->fields.data;
    if ( !v111 )
      sub_1C2D6EC(0, v110);
    v112 = (int32_t)v167.fields._current.fields.key;
    v113 = v167.fields._current.fields.value;
    v114 = (BuffEntity_o *)BattleData__getServantData(v111, (int32_t)v167.fields._current.fields.key, 0);
    v117 = (BattleServantData_o *)v114;
    if ( v114 )
    {
      v118 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C2D6DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45569888(v118, v117, 0, 0, 0, 0, 0, 1, 0);
      if ( !v118 )
        sub_1C2D6EC(v114, v115);
      selfConcatSvtIndividualities_k__BackingField = v118->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v113 )
LABEL_256:
        sub_1C2D6EC(v114, v115);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
      if ( !v113 )
        goto LABEL_256;
    }
    v120 = (int)v113[1].monitor;
    if ( v120 >= 1 )
    {
      for ( i = 0; i < v120; ++i )
      {
        if ( i >= (unsigned int)v120 )
          sub_1C2D6F4(v114, v115, v116);
        v122 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v113[2].klass + i);
        if ( !v122 )
          sub_1C2D6EC(v114, v115);
        if ( !v122->fields._isRemove )
        {
          if ( !v10 )
            sub_1C2D6EC(v114, v115);
          v114 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v10,
                                   v122->fields.buffId,
                                   (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v114 )
          {
            if ( BuffEntity__isEndAct(v114, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v122, 1, 0) )
            {
              v124 = (BattleSkillInfoData_o *)sub_1C2D6DC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v124, 0);
              if ( !v124 )
                sub_1C2D6EC(v125, v126);
              v124->fields.svtUniqueId = v112;
              v128 = v122->fields.vals;
              if ( !v128 )
                sub_1C2D6EC(v125, v126);
              if ( !LODWORD(v128->max_length) )
                sub_1C2D6F4(v125, v126, v127);
              v129 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v124->klass->vtable._4_set_skillId.methodPtr)(
                       v124,
                       (unsigned int)v128->m_Items[0],
                       v124->klass->vtable._4_set_skillId.method);
              v132 = v122->fields.vals;
              if ( !v132 )
                sub_1C2D6EC(v129, v130);
              if ( LODWORD(v132->max_length) <= 1 )
                sub_1C2D6F4(v129, v130, v131);
              v124->fields.skilllv = v132->m_Items[1];
              v133 = this->fields.data;
              if ( !v133 )
                sub_1C2D6EC(0, v130);
              v134 = BattleData__getServantData(v133, v124->fields.svtUniqueId, 0);
              v135 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v124->klass->vtable._5_get_skillId.methodPtr)(
                       v124,
                       v124->klass->vtable._5_get_skillId.method);
              if ( !v165 )
                sub_1C2D6EC(0, v135);
              v136 = SkillLvMaster__GetEntity(v165, v135, v124->fields.skilllv, 0);
              if ( !v134 )
                sub_1C2D6EC(v136, v137);
              v138 = v136;
              v139 = this->fields.data;
              if ( !v139 )
                sub_1C2D6EC(0, v137);
              v140 = BattleData__checkAliveOther(v139, v134->fields.uniqueId, 0);
              if ( v140 )
                goto LABEL_196;
              if ( !v138 )
                sub_1C2D6EC(v140, v141);
              v142 = this->fields.logic;
              if ( !v142 )
                sub_1C2D6EC(0, v141);
              if ( BattleLogic__checkPtTargetFunction(v142, v138->fields.funcId, 0) )
              {
LABEL_196:
                v143 = BattleServantData__GetRevengeIdCheckOpponentOnly(v134, v122, 0);
                if ( v143 < 0 )
                {
                  v147 = Target__getTargetIds(this->fields.data, v124->fields.svtUniqueId, -1, v112, 13, 0, 0);
                  v148 = BattleSkillInfoData__ExistsNoTargetNoActionType(v124, 0);
                }
                else
                {
                  v144 = sub_1C2D538(int___TypeInfo, 1);
                  v147 = (System_Int32_array *)v144;
                  if ( !v144 )
                    sub_1C2D6EC(0, v145);
                  if ( !*(_DWORD *)(v144 + 24) )
                    sub_1C2D6F4(v144, v145, v146);
                  v148 = 0;
                  *(_DWORD *)(v144 + 32) = v143;
                }
                v149 = this->fields.logicskill;
                v150 = sub_1C2D538(int___TypeInfo, 1);
                if ( !v150 )
                  sub_1C2D6EC(0, v151);
                if ( !*(_DWORD *)(v150 + 24) )
                  sub_1C2D6F4(v150, v151, v150);
                *(_DWORD *)(v150 + 32) = v112;
                if ( !v149 )
                  sub_1C2D6EC(v150, v151);
                v152 = BattleLogicSkill__taskSkill(v149, v124, (System_Int32_array *)v150, v147, 1, v148, 0, 0, 0, 0);
                v153 = this->fields.logic;
                if ( !v153 )
                  sub_1C2D6EC(0, v152);
                BattleLogic__addBattleLogicTask(v153, v152, 0);
              }
            }
            v154 = this->fields.data;
            if ( !v154 )
              sub_1C2D6EC(0, v123);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(v154, v122, 0);
          }
        }
        v120 = (int)v113[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v167,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v159, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_224;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0);
  }
  v155 = this->fields.data;
  if ( !v155
    || (Instance = (__int64)v155->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_224:
    sub_1C2D6EC(Instance, v6);
  }
  if ( (v162 & 1) != 0 )
    v156 = baseActData;
  else
    v156 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v156, baseActData, 0);
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
  const MethodInfo *v9; // x3
  struct System_String_o *motionMessage; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_GameObject_o *targetObject; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C2A39C & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    byte_4C2A39C = 1;
  }
  v4 = sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0), !task) )
    sub_1C2D6EC(v5, v6);
  *(_BYTE *)(v4 + 249) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 72) = motionName;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 72), (int32_t)motionName, v8, v9);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 136) = motionMessage;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 136), (int32_t)motionMessage, v11, v12);
  *(_DWORD *)(v4 + 144) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 80) = targetObject;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 80), (int32_t)targetObject, v14, v15);
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
  const MethodInfo *v11; // x6
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
    sub_1C2D6EC(this, task);
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
  if ( (byte_4C2A3A7 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&BattleActorControl_TypeInfo);
    this = (BattleLogicNomal_o *)sub_1C2D490(&BattleActionData_ShiftServant_TypeInfo);
    byte_4C2A3A7 = 1;
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
      v7 = sub_1C2D6DC(BattleActionData_TypeInfo);
      BattleActionData___ctor((BattleActionData_o *)v7, 0);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 32) = v6->fields.logic;
        v11 = (int)motionName;
        *(_QWORD *)(v7 + 72) = motionName;
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 72), v11, v9, v10);
        *(_BYTE *)(v7 + 252) = isOverwriteShift;
        this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
        if ( this )
        {
          *(_BYTE *)(v7 + 253) = BattleDeckServantData__IsIgnoreShiftWhiteFade((BattleDeckServantData_o *)this, 0);
          v12 = (BattleActionData_ShiftServant_o *)sub_1C2D6DC(BattleActionData_ShiftServant_TypeInfo);
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
    sub_1C2D6EC(this, task);
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

  if ( (byte_4C2A39D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11085/*"RESET_CAMERA_BAT"*/);
    byte_4C2A39D = 1;
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
              (System_String_o *)StringLiteral_11085/*"RESET_CAMERA_BAT"*/,
              0);
            return v8;
          }
        }
      }
LABEL_18:
      sub_1C2D6EC(StartTurn, v6);
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
  __int64 v6; // x2
  int v7; // w8
  int v8; // w9
  __int64 v9; // x11
  struct BattleData_o *v10; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0);
  if ( !data )
    goto LABEL_12;
  v7 = *((_DWORD *)data + 6);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v7 == v8 )
        sub_1C2D6F4(data, task, v6);
      v9 = *((_QWORD *)data + v8 + 4);
      if ( !v9 )
        break;
      ++v8;
      *(_BYTE *)(v9 + 564) = 1;
      if ( v7 == v8 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1C2D6EC(data, task);
  }
LABEL_8:
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_12;
  v10->fields.systemflg_skipDeadtemp = 0;
  if ( !task )
    goto LABEL_12;
  data = v10->fields.battleEvent;
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
    sub_1C2D6EC(this, 0);
  max_length = svtList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C2D6F4(this, svtList, method);
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
  __int64 v5; // x2
  int v6; // w8
  _DWORD *v7; // x20
  unsigned int v8; // w21
  char *v9; // x22
  char *v10; // x22
  void *v11; // t1

  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  data = BattleData__getFieldEnemyServantList((BattleData_o *)data, 1, 0);
  if ( !data )
    goto LABEL_14;
  v6 = *((_DWORD *)data + 6);
  v7 = data;
  if ( v6 < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= v6 )
      goto LABEL_15;
    v9 = (char *)&v7[2 * v8];
    v11 = (void *)*((_QWORD *)v9 + 4);
    v10 = v9 + 32;
    data = v11;
    if ( !v11 )
      goto LABEL_14;
    if ( *((_DWORD *)data + 6) != uniqueId )
    {
      data = (void *)BattleServantData__isShiftReady((BattleServantData_o *)data, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
    }
    v6 = v7[6];
    if ( (int)++v8 >= v6 )
      return 0;
  }
  if ( v8 >= v7[6] )
LABEL_15:
    sub_1C2D6F4(data, *(_QWORD *)&uniqueId, v5);
  if ( !*(_QWORD *)v10 )
LABEL_14:
    sub_1C2D6EC(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v10 + 24LL);
}


BaseBattleEvent_o *BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2A390 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C2D490(&BattleLogic_reactionFunction_TypeInfo);
    byte_4C2A390 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C2D6DC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0);
  if ( !list )
    sub_1C2D6EC(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleData_o *ShiftableUniqueId; // x0
  __int64 v7; // x1
  int32_t ActorId; // w0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *v10; // x19
  BattleServantData_o *v11; // x22
  const MethodInfo *v12; // x3
  struct BattleLogic_o *logic; // x8
  BattleLogicTask_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x3
  BeforeShiftServantReactTaskCreator_o *v23; // x22
  ServantReactTaskCreator_o *v24; // x22
  __int64 v25; // x23
  System_Func_object__bool__o *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleLogic_o *v31; // x8
  struct BattleLogicReaction_o *logicReaction; // x8
  BattleLogicTask_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  struct BattleLogic_o *v40; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4C2A3A8 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&ReactTaskTargetFilter_TypeInfo);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass51_0__shiftServantTaskReaction_b__0__);
    sub_1C2D490(&BattleLogicNomal___c__DisplayClass51_0_TypeInfo);
    byte_4C2A3A8 = 1;
  }
  v5 = sub_1C2D6DC(BattleLogicNomal___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !task )
    goto LABEL_39;
  ActorId = BattleLogicTask__getActorId(task, 0);
  ShiftableUniqueId = (BattleData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v9);
  if ( !v5 )
    goto LABEL_39;
  *(_DWORD *)(v5 + 16) = (_DWORD)ShiftableUniqueId;
  if ( !(_DWORD)ShiftableUniqueId )
    return this->fields.zeroTask;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  ShiftableUniqueId = this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleData__getServantData(ShiftableUniqueId, *(_DWORD *)(v5 + 16), 0);
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
                                              *(_DWORD *)(v5 + 16),
                                              1,
                                              v12);
        if ( v10 )
        {
          System_Collections_Generic_List_object___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          v14 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v14, 0);
          if ( v14 )
          {
            v14->fields.actiontype = 62;
            BattleLogicTask__setActor(v14, 3, *(_DWORD *)(v5 + 16), 0);
            items = v10->fields._items;
            v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v10->fields._version;
            if ( items )
            {
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  (Il2CppObject *)v14,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v20 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v20[4] = (Il2CppClass *)v14;
                sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
              }
              v40 = this->fields.logic;
              if ( v40 )
              {
                ShiftableUniqueId = (BattleData_o *)v40->fields.logicReaction;
                if ( ShiftableUniqueId )
                {
                  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                                              *(_DWORD *)(v5 + 16),
                                                                              0,
                                                                              v21);
                  System_Collections_Generic_List_object___AddRange(
                    v10,
                    TaskGuts,
                    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C2D6EC(ShiftableUniqueId, v7);
  }
  BattleServantData__UsedProgressingAppliedFailedGuts(v11, 0);
  v23 = (BeforeShiftServantReactTaskCreator_o *)sub_1C2D6DC(BeforeShiftServantReactTaskCreator_TypeInfo);
  BeforeShiftServantReactTaskCreator___ctor(v23, 24, 0);
  if ( !v23 )
    goto LABEL_39;
  v24 = ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v23, 0);
  v25 = sub_1C2D6DC(ReactTaskTargetFilter_TypeInfo);
  ReactTaskTargetFilter___ctor((ReactTaskTargetFilter_o *)v25, 0);
  v26 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_BattleLogicNomal___c__DisplayClass51_0__shiftServantTaskReaction_b__0__,
    0);
  if ( !v25 )
    goto LABEL_39;
  *(_QWORD *)(v25 + 16) = v26;
  sub_1C2D434((CGThumbnailListItem_o *)(v25 + 16), (int32_t)v26, v27, v28);
  if ( !v24 )
    goto LABEL_39;
  v24->fields._TargetFilter_k__BackingField = (struct ReactTaskTargetFilter_o *)v25;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->fields._TargetFilter_k__BackingField, v25, v29, v30);
  v31 = this->fields.logic;
  if ( !v31 )
    goto LABEL_39;
  logicReaction = v31->fields.logicReaction;
  if ( !logicReaction )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)ServantReactTaskCreator__CreateTasks(v24, logicReaction->fields.logic, 0);
  if ( !v10 )
    goto LABEL_39;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v33 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v33, 0);
  if ( !v33 )
    goto LABEL_39;
  v33->fields.actiontype = 37;
  BattleLogicTask__setActor(v33, 3, *(_DWORD *)(v5 + 16), 0);
  v36 = v10->fields._items;
  v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v36 )
    goto LABEL_39;
  v38 = v10->fields._size;
  if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v33,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v36->obj.klass + v38;
    v10->fields._size = v38 + 1;
    v39[4] = (Il2CppClass *)v33;
    sub_1C2D434((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
  }
LABEL_33:
  v42 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v42, 0);
  if ( !v42 )
    goto LABEL_39;
  v42->fields.actiontype = 36;
  BattleLogicTask__setActor(v42, 3, *(_DWORD *)(v5 + 16), 0);
  v45 = v10->fields._items;
  v46 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v45 )
    goto LABEL_39;
  v47 = v10->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v42,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v10->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v42;
    sub_1C2D434((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogicTask_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C2A392 & 1) == 0 )
  {
    sub_1C2D490(&BattleDataDefine_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A392 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1C2D6EC(battleEvent, v8);
  }
  v15 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_26;
  BattleLogicTask__setActor(v15, 2, v13->fields.uniqueId, 0);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v15, 0);
  BattleLogicTask__setAddAttackCommand(v15, data->fields.combodata, v13, 0);
  v15->fields.isCanCounterTask = 1;
  if ( !v6 )
    goto LABEL_26;
  items = v6->fields._items;
  v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v15,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v15;
    sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C2A3A4 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A3A4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1C2D6EC(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, 0);
    if ( !v8 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v8, 0);
  }
  if ( !v5 )
    goto LABEL_14;
  items = v5->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C2A395 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A395 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0),
        v8 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v8, 0),
        !v8)
    || (BattleLogicTask__setSystem(v8, 0), !v5)
    || (items = v5->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C2D6EC(logic, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNomal__taskComboOrderBefore(
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
  this = (BattleLogicNomal_o *)(*(__int64 (__fastcall **)(BattleLogicNomal_o *, void *, BattleData_o *, const MethodInfo *))&this->klass[2]._1.byval_arg.bits)(
                                 this,
                                 this->klass[2]._1.this_arg.data,
                                 data,
                                 method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( data )
    {
      BattleData__ApplyCommandcardFirstBonus(data, 0);
      return v5->fields.zeroTask;
    }
LABEL_7:
    sub_1C2D6EC(this, *(_QWORD *)&ltype);
  }
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
  BattleLogicTask_o *v15; // x22
  int32_t TreasureDvcId; // w0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4C2A391 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A391 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v15 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_37;
  BattleLogicTask__setActionCommand(v15, data->fields.combodata, v12, v11, 0);
  if ( BattleData__isTutorial(data, 0) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0) )
      BattleCommandData__checkCriticalRate(v12, 0, 0);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v12, 0);
  }
  BattleLogicTask__setActor(v15, 2, v12->fields.uniqueId, 0);
  v15->fields.isCanCounterTask = 1;
  if ( v12->fields.treasureDvc < 1 )
  {
    BattleData__setTDChain(data, 0, 0);
    battleEvent = (BattleCommandData_o *)this->fields.logictarget;
    if ( battleEvent )
    {
      battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                             (BattleLogicTarget_o *)battleEvent,
                                             v15,
                                             0);
      if ( v7 )
      {
        items = v7->fields._items;
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v15,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v15;
            sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v15, v24, v25);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1C2D6EC(battleEvent, v9);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_37;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0);
  if ( !ServantData )
    goto LABEL_37;
  BattleLogicTask__setActor(v15, 2, ServantData->fields.uniqueId, 0);
  BattleLogicTask__setActionCommand(v15, data->fields.combodata, v12, v11, 0);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
  BattleLogicTask__setActionTreasureDvc(v15, TreasureDvcId, 1, 0);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         v15,
                                         0);
  if ( !v7 )
    goto LABEL_37;
  v20 = v7->fields._items;
  v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v7->fields._version;
  if ( !v20 )
    goto LABEL_37;
  v22 = v7->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v15,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v7->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v15;
    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v15, v18, v19);
  }
  BattleData__setTDChain(data, 1, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v13; // x2
  __int64 v14; // x8
  __int64 v15; // x28
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int v18; // w9
  BattleServantData_o *v19; // x27
  BattleServantData_o *v20; // x20
  System_Collections_Generic_IEnumerable_T__o *v21; // x29
  void *monitor; // x8
  bool v23; // w20
  __int64 v24; // x25
  BattleBuffData_BuffData_o *v25; // x21
  BattleLogicTask_o *v26; // x24
  int32_t LimitCount; // w20
  BattleCommandData_o *v28; // x26
  BattleComboData_o *v29; // x20
  BattleComboData_o *v30; // x1
  BattleCommandData_o *v31; // x2
  __int64 v32; // x26
  __int64 v33; // x20
  int32_t uniqueId; // w8
  __int64 v35; // x9
  System_Int32_array *v36; // x26
  System_String_o *CounterMessage; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x9
  BattleLogicNomal___c_c *v45; // x0
  System_Action_object__o *_9__19_0; // x20
  Il2CppObject *v47; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct BattleLogic_o *logic; // x8
  BattleLogicNomal_o *v53; // [xsp+8h] [xbp-A8h]
  _BOOL4 v54; // [xsp+14h] [xbp-9Ch]
  int32_t SvtId; // [xsp+18h] [xbp-98h]
  int32_t counterId; // [xsp+1Ch] [xbp-94h]
  SkillLvMaster_o *MasterData_object; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v59; // [xsp+30h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // [xsp+38h] [xbp-78h]
  char v61; // [xsp+48h] [xbp-68h]
  int32_t type; // [xsp+4Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4C2A393 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&BattleSkillInfoData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77924768);
    sub_1C2D490(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleLogicNomal___c__taskCounterFunc_b__19_0__);
    sub_1C2D490(&BattleLogicNomal___c_TypeInfo);
    byte_4C2A393 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !data )
    goto LABEL_78;
  v14 = 304;
  if ( isEnemy )
    v14 = 312;
  v15 = *(__int64 *)((char *)&data->klass + v14);
  v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !v15 )
    goto LABEL_78;
  v16 = *(_QWORD *)(v15 + 24);
  if ( (int)v16 >= 1 )
  {
    v17 = 0;
    if ( isEnemy )
      v18 = 3;
    else
      v18 = 2;
    type = v18;
    do
    {
      if ( v17 >= (unsigned int)v16 )
LABEL_79:
        sub_1C2D6F4(Instance, wasAttackTargetId, v13);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v15 + 4 * v17 + 32), 0);
      if ( Instance )
      {
        v19 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v19, 0);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v19->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0);
              if ( Instance )
              {
                v20 = (BattleServantData_o *)Instance;
                if ( v19->fields.isEnemy != *(unsigned __int8 *)(Instance + 507) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
                  Instance = BattleServantData__isAliveLogic(v20, 0, 0);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v19->fields.buffData;
                    if ( !Instance )
                      goto LABEL_78;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v19,
                                          v20,
                                          0,
                                          0);
                    if ( !Instance )
                      goto LABEL_78;
                    v21 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v53 = this;
                      v59 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_56888952(
                        v59,
                        v21,
                        (const MethodInfo_3640E78 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77924768);
                      monitor = v21[1].monitor;
                      v23 = isSkillCounter;
                      if ( (int)monitor >= 1 )
                      {
                        v24 = 4;
                        v61 = 1;
                        v54 = v6;
                        do
                        {
                          if ( v24 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_79;
                          v25 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v21->klass + v24);
                          if ( !v23 )
                            goto LABEL_82;
                          if ( !v25 )
                            goto LABEL_78;
                          if ( v25->fields.isSkillReaction )
                          {
LABEL_82:
                            v26 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v26, 0);
                            if ( !v26 )
                              goto LABEL_78;
                            BattleLogicTask__setActor(v26, type, v19->fields.uniqueId, 0);
                            BattleLogicTask__setTarget(v26, v19->fields.wasAttackTargetId, 0);
                            Instance = (__int64)v19->fields.buffData;
                            if ( !Instance )
                              goto LABEL_78;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v25, 1, 0);
                            if ( (Instance & 1) != 0 )
                            {
                              v19->fields.overkillTargetId = -1;
                              if ( !v25 )
                                goto LABEL_78;
                              if ( v25->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v26,
                                  v25->fields.counterId,
                                  v25->fields.counterLv,
                                  v25->fields.counterOc,
                                  1,
                                  0);
                              }
                              else
                              {
                                wasAttackTargetId = (unsigned int)v25->fields.counterId;
                                if ( v25->fields.isUseAttack )
                                {
                                  counterId = v25->fields.counterId;
                                  SvtId = BattleServantData__getSvtId(v19, 0);
                                  LimitCount = BattleServantData__getLimitCount(v19, 0);
                                  v28 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor_46333400(v28, counterId, SvtId, LimitCount, 0, -1, 0);
                                  BattleServantData__SetOverwriteSvtCardType(v19, v28, 0);
                                  BattleServantData__AddServantCommandCard(v19, v25->fields.counterId, 0);
                                  v29 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
                                  BattleComboData___ctor(v29, 0);
                                  v30 = v29;
                                  v23 = isSkillCounter;
                                  v31 = v28;
                                  v6 = v54;
                                  BattleLogicTask__setActionCommand(v26, v30, v31, 0, 0);
                                }
                                else
                                {
                                  Instance = (__int64)MasterData_object;
                                  if ( !MasterData_object )
                                    goto LABEL_78;
                                  Instance = (__int64)SkillLvMaster__GetEntity(
                                                        MasterData_object,
                                                        wasAttackTargetId,
                                                        v25->fields.counterLv,
                                                        0);
                                  if ( !Instance )
                                  {
                                    v6 = v54;
                                    goto LABEL_60;
                                  }
                                  v32 = Instance;
                                  v33 = sub_1C2D6DC(BattleSkillInfoData_TypeInfo);
                                  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v33, 0);
                                  if ( !v33 )
                                    goto LABEL_78;
                                  uniqueId = v19->fields.uniqueId;
                                  v35 = *(_QWORD *)v33;
                                  *(_QWORD *)(v33 + 16) = 20;
                                  *(_DWORD *)(v33 + 24) = uniqueId;
                                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v35 + 376))(
                                    v33,
                                    *(unsigned int *)(v32 + 16),
                                    *(_QWORD *)(v35 + 384));
                                  *(_DWORD *)(v33 + 36) = *(_DWORD *)(v32 + 20);
                                  Instance = sub_1C2D538(int___TypeInfo, 1);
                                  if ( !Instance )
                                    goto LABEL_78;
                                  v36 = (System_Int32_array *)Instance;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_79;
                                  *(_DWORD *)(Instance + 32) = v19->fields.wasAttackTargetId;
                                  Instance = sub_1C2D538(int___TypeInfo, 1);
                                  if ( !Instance )
                                    goto LABEL_78;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_79;
                                  *(_DWORD *)(Instance + 32) = v19->fields.uniqueId;
                                  BattleLogicTask__setActionSkill(
                                    v26,
                                    (BattleSkillInfoData_o *)v33,
                                    v36,
                                    (System_Int32_array *)Instance,
                                    1,
                                    0,
                                    0);
                                  v6 = v54;
                                  v23 = isSkillCounter;
                                }
                              }
                              Instance = (__int64)v60;
                              if ( !v60 )
                                goto LABEL_78;
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v60,
                                                    v25->fields.buffId,
                                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_78;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0);
                              BattleLogicTask__setMessage(v26, CounterMessage, 2, 0);
                              v26->fields.isCounter = 1;
                              if ( (v61 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v26,
                                  v19,
                                  (BattleBuffData_BuffData_array *)v21,
                                  0);
                              if ( !v10 )
                                goto LABEL_78;
                              items = v10->fields._items;
                              v41 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_78;
                              size = v10->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v26,
                                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v43 = &items->obj.klass + size;
                                v10->fields._size = size + 1;
                                v43[4] = (Il2CppClass *)v26;
                                sub_1C2D434((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v26, v38, v39);
                              }
                              Instance = (__int64)v59;
                              if ( !v59 )
                                goto LABEL_78;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v59,
                                           (Il2CppObject *)v25,
                                           (const MethodInfo_3641648 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v61 = 0;
                            }
                          }
LABEL_60:
                          LODWORD(monitor) = v21[1].monitor;
                          v44 = v24 - 3;
                          ++v24;
                        }
                        while ( v44 < (int)monitor );
                      }
                      v45 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v45 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v53;
                      _9__19_0 = (System_Action_object__o *)v45->static_fields->__9__19_0;
                      if ( !_9__19_0 )
                      {
                        if ( !v45->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v45);
                          v45 = BattleLogicNomal___c_TypeInfo;
                        }
                        v47 = (Il2CppObject *)v45->static_fields->__9;
                        _9__19_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__19_0,
                          v47,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__19_0__,
                          0);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__19_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__19_0;
                        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v49, v50);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v59,
                        (System_Action_T__o *)_9__19_0,
                        (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v16) = *(_DWORD *)(v15 + 24);
    }
    while ( (__int64)++v17 < (int)v16 );
  }
  if ( !v10 )
    goto LABEL_78;
  if ( v10->fields._size < 1 )
    goto LABEL_76;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_78:
    sub_1C2D6EC(Instance, wasAttackTargetId);
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
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C2A39A & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A39A = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v9 + 128) = gameObject;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 128), (int32_t)gameObject, v13, v14);
  if ( !svtData )
    goto LABEL_15;
  v15 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v9, v15, svtData->fields.uniqueId, 0);
  if ( !v8
    || (items = v8->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C2D6EC(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), v9, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v18; // x3
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  bool v21; // w23
  System_String_o *v22; // x0
  BattleData_o *v23; // x8
  System_String_o *v24; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v26; // x2
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int32_t uniqueId; // w2
  System_String_o *v33; // x20
  BattleLogicTask_o *v34; // x0
  System_String_o *v35; // x1
  struct BattleData_o *v36; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v38; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v40; // x2
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  System_String_o *v45; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  int v53; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C2A39B & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2883/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_1C2D490(&StringLiteral_8749/*"MOTION_ENTRY"*/);
    sub_1C2D490(&StringLiteral_2881/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_1C2D490(&StringLiteral_2882/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_1C2D490(&StringLiteral_8752/*"MOTION_ENTRY_TAC"*/);
    byte_4C2A39B = 1;
  }
  v9 = StringLiteral_8752/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_8749/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0);
  if ( !v12 )
    goto LABEL_30;
  v15 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v15, 0);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v12 + 128) = gameObject;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 128), (int32_t)gameObject, v17, v18);
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
          v21 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0);
LABEL_23:
              v45 = v22;
              BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, 0);
              v34 = (BattleLogicTask_o *)v12;
              v35 = v45;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v21 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2881/*"BATTLE_SUBENTRY_ENEMY"*/, 0);
          v36 = this->fields.data;
          if ( !v36 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v36->fields._EnemyCountStartValue_k__BackingField;
          v38 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v36, 0);
          v53 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v40)
              + EnemyCountStartValue_k__BackingField;
          v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v41, v42, v43);
          v22 = System_String__Format(v38, v44, 0);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1C2D6EC(battle_ent, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2883/*"BATTLE_SUBENTRY_PLAYER"*/, 0);
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_30;
  v24 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v23, 0);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v26);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember, v27, v28, v29);
  v31 = System_String__Format(v24, v30, 0);
  uniqueId = svtData->fields.uniqueId;
  v33 = v31;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, 0);
  v34 = (BattleLogicTask_o *)v12;
  v35 = v33;
LABEL_24:
  BattleLogicTask__setMessage(v34, v35, 1, 0);
  if ( !v11 )
    goto LABEL_30;
  items = v11->fields._items;
  v49 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v51[4] = (Il2CppClass *)v12;
    sub_1C2D434((CGThumbnailListItem_o *)(v51 + 4), v12, v46, v47);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21___ctor(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21__MoveNext(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  Il2CppObject *v7; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleData_o *data; // x8
  struct BattleCommandData_array *selectcommandlist; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v26; // x8
  int32_t v27; // w9
  int32_t _7__wrap7; // w8
  int v29; // w9
  int32_t _7__wrap4; // w8
  int v31; // w9
  bool result; // w0
  CGThumbnailListItem_o *p__7__wrap3; // x8
  struct BattleCommandData_array *v34; // x10
  struct BattleCommandData_array *_7__wrap3; // t1
  int32_t max_length; // w11
  BattleCommandData_o *v37; // x19
  BattleData_o *v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *ServantData; // x20
  System_Collections_Generic_List_object__o *selectSvtList_5__2; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  const MethodInfo *v48; // x2
  _BOOL8 IsEnableToAttack; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v51; // x20
  BattleLogicNomal___c_c *v52; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v53; // x19
  System_Func_object__int__o *_9__21_1; // x21
  Il2CppObject *v55; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x0
  __int64 v60; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v63; // x9
  int32_t *p_offset; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x0
  __int64 v70; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v71; // x8
  __int64 v72; // x0
  __int64 v73; // x1
  BattleData_o *v74; // x0
  struct BattleLogicNomal___c__DisplayClass21_0_o *_8__1; // x19
  System_Collections_Generic_IEnumerable_T__o *FieldAliveServantArray; // x21
  System_Collections_Generic_List_object__o *v77; // x20
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Collections_Generic_List_object__o *v82; // x19
  Il2CppObject *v83; // x21
  System_Action_object__o *v84; // x20
  __int64 v85; // x0
  __int64 v86; // x1
  BattleCommandData_o *v87; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  __int64 v91; // x0
  __int64 v92; // x1
  struct BattleData_o *v93; // x8
  BattleCommandData_o *notSelectedCommand_5__3; // x0
  __int64 v95; // x1
  struct BattleCommandData_o *v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  struct BattleLogicNomal___c__DisplayClass21_0_o *v99; // x8
  System_Collections_Generic_List_object__o *otherSvtList; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v101; // x9
  __int128 v102; // q0
  struct System_Collections_Generic_List_Enumerator_BattleServantData__o *p__7__wrap8; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v106; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v107; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v108; // x8
  __int64 v109; // x9
  int32_t *v110; // x10
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x1
  BattleSkillInfoData_o *v114; // x19
  BattleLogicSkill_o *logicskill; // x20
  __int64 v116; // x0
  __int64 v117; // x1
  struct BattleLogicTask_array *v118; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct BattleLogicTask_array *_7__wrap6; // x10
  unsigned int v123; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v125; // x8
  __int64 v126; // x9
  int *v127; // x10
  __int64 v128; // x0
  const MethodInfo *v129; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v130; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  struct BattleLogicTask_o *v133; // x1
  const MethodInfo *v134; // x1
  const MethodInfo *v135; // x2
  BattleServantData_o *current; // x19
  _BOOL8 v137; // x0
  __int64 v138; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v139; // x20
  BattleLogicNomal___c_c *v140; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v141; // x19
  System_Func_object__int__o *_9__21_2; // x21
  Il2CppObject *v143; // x22
  struct BattleLogicNomal___c_StaticFields *v144; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v147; // x0
  __int64 v148; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v149; // x20
  System_Linq_IOrderedEnumerable_TSource__c *v150; // x8
  __int64 v151; // x9
  int32_t *v152; // x10
  __int64 v153; // x0
  __int64 v154; // x0
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  __int64 v157; // x0
  __int64 v158; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v159; // x8
  __int64 v160; // x0
  __int64 v161; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v162; // x8
  BattleData_o *v163; // x0
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v164; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v165; // x8
  __int64 v166; // x9
  int32_t *v167; // x10
  __int64 v168; // x0
  __int64 v169; // x0
  __int64 v170; // x1
  BattleSkillInfoData_o *v171; // x19
  BattleLogicSkill_o *v172; // x20
  __int64 v173; // x0
  __int64 v174; // x1
  struct BattleLogicTask_array *v175; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v176; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  struct BattleLogicTask_array *v179; // x10
  unsigned int v180; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v181; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v182; // x8
  __int64 v183; // x9
  int *v184; // x10
  __int64 v185; // x0
  const MethodInfo *v186; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v187; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  struct BattleLogicTask_o *v190; // x1
  System_Collections_Generic_List_Enumerator_T__o v191[2]; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v192; // [xsp+48h] [xbp-78h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o **v193; // [xsp+50h] [xbp-70h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *v194; // [xsp+58h] [xbp-68h] BYREF

  v4 = this;
  v194 = this;
  if ( (byte_4C2A3B4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleServantData__TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C2D490(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData___ctor___77932480);
    sub_1C2D490(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C2D490(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__21_1__);
    sub_1C2D490(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__21_2__);
    sub_1C2D490(&Method_BattleLogicNomal___c__DisplayClass21_0__GetConfirmCommandFunctionBuffTask_b__0__);
    sub_1C2D490(&BattleLogicNomal___c__DisplayClass21_0_TypeInfo);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *)sub_1C2D490(&BattleLogicNomal___c_TypeInfo);
    byte_4C2A3B4 = 1;
  }
  v192 = 0;
  v193 = &v194;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    _7__wrap4 = v4->fields.__7__wrap4;
    v4->fields.__1__state = -5;
    v31 = _7__wrap4 + 1;
    v4->fields.__7__wrap4 = _7__wrap4 + 1;
    goto LABEL_144;
  }
  if ( _1__state == 1 )
  {
    _7__wrap7 = v4->fields.__7__wrap7;
    v4->fields.__1__state = -3;
    v29 = _7__wrap7 + 1;
    v4->fields.__7__wrap7 = _7__wrap7 + 1;
    goto LABEL_83;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v7 = (Il2CppObject *)sub_1C2D6DC(BattleLogicNomal___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor(v7, 0);
  v8 = v194;
  v194->fields.__8__1 = (struct BattleLogicNomal___c__DisplayClass21_0_o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.__8__1, (int32_t)v7, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v12 = v194;
  v194->fields._selectSvtList_5__2 = (struct System_Collections_Generic_List_BattleServantData__o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields._selectSvtList_5__2, (int32_t)v11, v13, v14);
  if ( !_4__this )
    sub_1C2D6EC(v15, v16);
  data = _4__this->fields.data;
  if ( !data )
    sub_1C2D6EC(v15, v16);
  selectcommandlist = data->fields.selectcommandlist;
  v21 = v194;
  v194->fields.__7__wrap3 = selectcommandlist;
  sub_1C2D434((CGThumbnailListItem_o *)&v21->fields.__7__wrap3, (int32_t)selectcommandlist, v17, v18);
  v26 = v194;
  v27 = 0;
  v194->fields.__7__wrap4 = 0;
LABEL_14:
  _7__wrap3 = v26->fields.__7__wrap3;
  p__7__wrap3 = (CGThumbnailListItem_o *)&v26->fields.__7__wrap3;
  v34 = _7__wrap3;
  if ( !_7__wrap3 )
    sub_1C2D6EC(v22, v23);
  max_length = v34->max_length;
  if ( v27 < max_length )
  {
    if ( v27 >= (unsigned int)max_length )
      sub_1C2D6F4(v22, v23, v24);
    if ( !_4__this )
      sub_1C2D6EC(v22, v23);
    v37 = v34->m_Items[v27];
    if ( !v37 )
      sub_1C2D6EC(v22, v23);
    v38 = _4__this->fields.data;
    if ( !v38 )
      sub_1C2D6EC(0, v23);
    ServantData = (Il2CppObject *)BattleData__getServantData(v38, v37->fields.uniqueId, 0);
    selectSvtList_5__2 = (System_Collections_Generic_List_object__o *)v194->fields._selectSvtList_5__2;
    if ( !selectSvtList_5__2 )
      sub_1C2D6EC(0, v39);
    items = selectSvtList_5__2->fields._items;
    v45 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++selectSvtList_5__2->fields._version;
    if ( !items )
      sub_1C2D6EC(selectSvtList_5__2, v39);
    size = selectSvtList_5__2->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectSvtList_5__2,
        ServantData,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &items->obj.klass + size;
      selectSvtList_5__2->fields._size = size + 1;
      v47[4] = (Il2CppClass *)ServantData;
      sub_1C2D434((CGThumbnailListItem_o *)(v47 + 4), (int32_t)ServantData, v40, v41);
    }
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack((BattleServantData_o *)ServantData, v37, v48);
    if ( !ServantData )
      sub_1C2D6EC(IsEnableToAttack, v50);
    v51 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
            (BattleServantData_o *)ServantData,
            v37,
            IsEnableToAttack,
            0,
            0);
    v52 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v52 = BattleLogicNomal___c_TypeInfo;
    }
    v53 = v194;
    _9__21_1 = (System_Func_object__int__o *)v52->static_fields->__9__21_1;
    if ( !_9__21_1 )
    {
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = BattleLogicNomal___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v52->static_fields->__9;
      _9__21_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__21_1,
        v55,
        Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__21_1__,
        0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__21_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__21_1;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v57, v58);
    }
    v59 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v51,
            (System_Func_TSource__TKey__o *)_9__21_1,
            (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    v61 = v59;
    if ( !v59 )
      sub_1C2D6EC(0, v60);
    klass = v59->klass;
    v63 = *(unsigned __int16 *)&v59->klass->_2.rank;
    if ( *(_WORD *)&v59->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
      {
        --v63;
        p_offset += 4;
        if ( !v63 )
          goto LABEL_37;
      }
      v65 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_37:
      v65 = sub_1C7DCA8(v59, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
    }
    v66 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v65)(
            v61,
            *(_QWORD *)(v65 + 8));
    if ( !v53 )
      sub_1C2D6EC(v66, v66);
    v53->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v66;
    sub_1C2D434((CGThumbnailListItem_o *)&v53->fields.__7__wrap5, v66, v67, v68);
    v71 = v194;
    v194->fields.__1__state = -3;
    while ( 1 )
    {
      _7__wrap5 = v71->fields.__7__wrap5;
      if ( !_7__wrap5 )
        sub_1C2D6EC(v69, v70);
      v125 = _7__wrap5->klass;
      v126 = *(unsigned __int16 *)&_7__wrap5->klass->_2.rank;
      if ( *(_WORD *)&_7__wrap5->klass->_2.rank )
      {
        v127 = &v125->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v127 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v126;
          v127 += 4;
          if ( !v126 )
            goto LABEL_91;
        }
        v128 = (__int64)&v125->vtable[*v127];
      }
      else
      {
LABEL_91:
        v128 = sub_1C7DCA8(_7__wrap5, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v128)(
              _7__wrap5,
              *(_QWORD *)(v128 + 8))
          & 1) == 0 )
      {
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally1(v194, v129);
        v130 = v194;
        v194->fields.__7__wrap5 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v130->fields.__7__wrap5, 0, v131, v132);
        v26 = v194;
        v27 = v194->fields.__7__wrap4 + 1;
        v194->fields.__7__wrap4 = v27;
        goto LABEL_14;
      }
      v107 = v194->fields.__7__wrap5;
      if ( !v107 )
        sub_1C2D6EC(v194, v129);
      v108 = v107->klass;
      v109 = *(unsigned __int16 *)&v107->klass->_2.rank;
      if ( *(_WORD *)&v107->klass->_2.rank )
      {
        v110 = &v108->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v110 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
        {
          --v109;
          v110 += 4;
          if ( !v109 )
            goto LABEL_75;
        }
        v111 = (__int64)&v108->vtable[*v110];
      }
      else
      {
LABEL_75:
        v111 = sub_1C7DCA8(
                 v194->fields.__7__wrap5,
                 System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
                 0);
      }
      v112 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v111)(
               v107,
               *(_QWORD *)(v111 + 8));
      if ( !_4__this )
        sub_1C2D6EC(v112, v113);
      v114 = (BattleSkillInfoData_o *)v112;
      logicskill = _4__this->fields.logicskill;
      v116 = sub_1C2D538(int___TypeInfo, 1);
      if ( !v114 )
        sub_1C2D6EC(v116, v117);
      if ( !v116 )
        sub_1C2D6EC(0, v117);
      if ( !*(_DWORD *)(v116 + 24) )
        sub_1C2D6F4(v116, v117, v116);
      *(_DWORD *)(v116 + 32) = v114->fields.svtUniqueId;
      if ( !logicskill )
        sub_1C2D6EC(v116, v117);
      v118 = BattleLogicSkill__taskSkill(logicskill, v114, (System_Int32_array *)v116, 0, 0, 0, 0, 0, 0, 0);
      v119 = v194;
      v194->fields.__7__wrap6 = v118;
      sub_1C2D434((CGThumbnailListItem_o *)&v119->fields.__7__wrap6, (int32_t)v118, v120, v121);
      v4 = v194;
      v29 = 0;
      v194->fields.__7__wrap7 = 0;
LABEL_83:
      _7__wrap6 = v4->fields.__7__wrap6;
      if ( !_7__wrap6 )
        sub_1C2D6EC(this, method);
      v123 = _7__wrap6->max_length;
      if ( v29 < (int)v123 )
        break;
      v4->fields.__7__wrap6 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
      v71 = v194;
    }
    if ( v29 >= v123 )
      sub_1C2D6F4(this, method, v2);
    v133 = _7__wrap6->m_Items[v29];
    v4->fields.__2__current = v133;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v133, v2, v3);
    result = 1;
    v194->fields.__1__state = 1;
    return result;
  }
  p__7__wrap3->klass = 0;
  sub_1C2D434(p__7__wrap3, 0, v24, v25);
  if ( !_4__this )
    sub_1C2D6EC(v72, v73);
  v74 = _4__this->fields.data;
  if ( !v74 )
    sub_1C2D6EC(0, v73);
  _8__1 = v194->fields.__8__1;
  FieldAliveServantArray = (System_Collections_Generic_IEnumerable_T__o *)BattleData__GetFieldAliveServantArray(
                                                                            v74,
                                                                            1,
                                                                            0,
                                                                            0,
                                                                            0);
  v77 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v77,
    FieldAliveServantArray,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_BattleServantData___ctor___77932480);
  if ( !_8__1 )
    sub_1C2D6EC(v78, v79);
  _8__1->fields.otherSvtList = (struct System_Collections_Generic_List_BattleServantData__o *)v77;
  sub_1C2D434((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)v77, v80, v81);
  v83 = (Il2CppObject *)v194->fields.__8__1;
  v82 = (System_Collections_Generic_List_object__o *)v194->fields._selectSvtList_5__2;
  v84 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v84,
    v83,
    Method_BattleLogicNomal___c__DisplayClass21_0__GetConfirmCommandFunctionBuffTask_b__0__,
    0);
  if ( !v82 )
    sub_1C2D6EC(v85, v86);
  System_Collections_Generic_List_object___ForEach(
    v82,
    (System_Action_T__o *)v84,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v87 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v87, 0);
  v88 = v194;
  v194->fields._notSelectedCommand_5__3 = v87;
  sub_1C2D434((CGThumbnailListItem_o *)&v88->fields._notSelectedCommand_5__3, (int32_t)v87, v89, v90);
  v93 = _4__this->fields.data;
  if ( !v93 )
    sub_1C2D6EC(v91, v92);
  notSelectedCommand_5__3 = v194->fields._notSelectedCommand_5__3;
  if ( !notSelectedCommand_5__3 )
    sub_1C2D6EC(0, v92);
  BattleCommandData__setCombo(notSelectedCommand_5__3, v93->fields.combodata, 0, 0);
  v96 = v194->fields._notSelectedCommand_5__3;
  if ( !v96 )
    sub_1C2D6EC(0, v95);
  v96->fields._type = -1;
  BattleCommandData__ResetOverwriteSvtCardType(v96, 0);
  v99 = v194->fields.__8__1;
  if ( !v99 )
    sub_1C2D6EC(v97, v98);
  otherSvtList = (System_Collections_Generic_List_object__o *)v99->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C2D6EC(0, v98);
  System_Collections_Generic_List_object___GetEnumerator(
    v191,
    otherSvtList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v101 = v194;
  v102 = *(_OWORD *)&v191[0].fields._list;
  p__7__wrap8 = &v194->fields.__7__wrap8;
  v191[1] = v191[0];
  v194->fields.__7__wrap8.fields._current = (struct BattleServantData_o *)v191[0].fields._current;
  *(_OWORD *)&v101->fields.__7__wrap8.fields._list = v102;
  sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap8, 0, v104, v105);
  v106 = v194;
  v194->fields.__1__state = -4;
LABEL_106:
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v106->fields.__7__wrap8,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally2(v194, v134);
    v162 = v194;
    v194->fields.__7__wrap8.fields._list = 0;
    *(_QWORD *)&v162->fields.__7__wrap8.fields._index = 0;
    v162->fields.__7__wrap8.fields._current = 0;
    if ( !_4__this )
      sub_1C2D6EC(v160, v161);
    v163 = _4__this->fields.data;
    if ( !v163 )
      sub_1C2D6EC(0, v161);
    BattleData__ClearAllExecutedOnceConfirmCommandFunctionBuffList(v163, 0);
    return 0;
  }
  current = v194->fields.__7__wrap8.fields._current;
  v137 = BattleLogicNomal__IsEnableToAttack(current, v194->fields._notSelectedCommand_5__3, v135);
  if ( !current )
    sub_1C2D6EC(v137, v138);
  v139 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
           current,
           v194->fields._notSelectedCommand_5__3,
           v137,
           1,
           0);
  v140 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v140 = BattleLogicNomal___c_TypeInfo;
  }
  v141 = v194;
  _9__21_2 = (System_Func_object__int__o *)v140->static_fields->__9__21_2;
  if ( !_9__21_2 )
  {
    if ( !v140->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v140);
      v140 = BattleLogicNomal___c_TypeInfo;
    }
    v143 = (Il2CppObject *)v140->static_fields->__9;
    _9__21_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__21_2,
      v143,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__21_2__,
      0);
    v144 = BattleLogicNomal___c_TypeInfo->static_fields;
    v144->__9__21_2 = (struct System_Func_BattleSkillInfoData__int__o *)_9__21_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v144->__9__21_2, (int32_t)_9__21_2, v145, v146);
  }
  v147 = System_Linq_Enumerable__OrderBy_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v139,
           (System_Func_TSource__TKey__o *)_9__21_2,
           (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v149 = v147;
  if ( !v147 )
    sub_1C2D6EC(0, v148);
  v150 = v147->klass;
  v151 = *(unsigned __int16 *)&v147->klass->_2.rank;
  if ( *(_WORD *)&v147->klass->_2.rank )
  {
    v152 = &v150->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v152 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v151;
      v152 += 4;
      if ( !v151 )
        goto LABEL_119;
    }
    v153 = (__int64)&v150->vtable[*v152];
  }
  else
  {
LABEL_119:
    v153 = sub_1C7DCA8(v147, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v154 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v153)(
           v149,
           *(_QWORD *)(v153 + 8));
  if ( !v141 )
    sub_1C2D6EC(v154, v154);
  v141->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v154;
  sub_1C2D434((CGThumbnailListItem_o *)&v141->fields.__7__wrap5, v154, v155, v156);
  v159 = v194;
  v194->fields.__1__state = -5;
  while ( 1 )
  {
    v181 = v159->fields.__7__wrap5;
    if ( !v181 )
      sub_1C2D6EC(v157, v158);
    v182 = v181->klass;
    v183 = *(unsigned __int16 *)&v181->klass->_2.rank;
    if ( *(_WORD *)&v181->klass->_2.rank )
    {
      v184 = &v182->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v184 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v183;
        v184 += 4;
        if ( !v183 )
          goto LABEL_152;
      }
      v185 = (__int64)&v182->vtable[*v184];
    }
    else
    {
LABEL_152:
      v185 = sub_1C7DCA8(v181, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v185)(
            v181,
            *(_QWORD *)(v185 + 8))
        & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally3(v194, v186);
      v187 = v194;
      v194->fields.__7__wrap5 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v187->fields.__7__wrap5, 0, v188, v189);
      v106 = v194;
      goto LABEL_106;
    }
    v164 = v194->fields.__7__wrap5;
    if ( !v164 )
      sub_1C2D6EC(v194, v186);
    v165 = v164->klass;
    v166 = *(unsigned __int16 *)&v164->klass->_2.rank;
    if ( *(_WORD *)&v164->klass->_2.rank )
    {
      v167 = &v165->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v167 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v166;
        v167 += 4;
        if ( !v166 )
          goto LABEL_136;
      }
      v168 = (__int64)&v165->vtable[*v167];
    }
    else
    {
LABEL_136:
      v168 = sub_1C7DCA8(
               v194->fields.__7__wrap5,
               System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
               0);
    }
    v169 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v168)(
             v164,
             *(_QWORD *)(v168 + 8));
    if ( !_4__this )
      sub_1C2D6EC(v169, v170);
    v171 = (BattleSkillInfoData_o *)v169;
    v172 = _4__this->fields.logicskill;
    v173 = sub_1C2D538(int___TypeInfo, 1);
    if ( !v171 )
      sub_1C2D6EC(v173, v174);
    if ( !v173 )
      sub_1C2D6EC(0, v174);
    if ( !*(_DWORD *)(v173 + 24) )
      sub_1C2D6F4(v173, v174, v173);
    *(_DWORD *)(v173 + 32) = v171->fields.svtUniqueId;
    if ( !v172 )
      sub_1C2D6EC(v173, v174);
    v175 = BattleLogicSkill__taskSkill(v172, v171, (System_Int32_array *)v173, 0, 0, 0, 0, 0, 0, 0);
    v176 = v194;
    v194->fields.__7__wrap6 = v175;
    sub_1C2D434((CGThumbnailListItem_o *)&v176->fields.__7__wrap6, (int32_t)v175, v177, v178);
    v4 = v194;
    v31 = 0;
    v194->fields.__7__wrap4 = 0;
LABEL_144:
    v179 = v4->fields.__7__wrap6;
    if ( !v179 )
      sub_1C2D6EC(this, method);
    v180 = v179->max_length;
    if ( v31 < (int)v180 )
      break;
    v4->fields.__7__wrap6 = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
    v159 = v194;
  }
  if ( v31 >= v180 )
    sub_1C2D6F4(this, method, v2);
  v190 = v179->m_Items[v31];
  v4->fields.__2__current = v190;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v190, v2, v3);
  result = 1;
  v194->fields.__1__state = 2;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A3B8 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_TypeInfo);
    byte_4C2A3B8 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C2D6DC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)this;
}


BattleLogicTask_o *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21__System_Collections_Generic_IEnumerator_BattleLogicTask__get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21__System_Collections_IEnumerator_Reset(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21__System_Collections_IEnumerator_get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21__System_IDisposable_Dispose(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFB:
    case 2:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally3(this, method);
      goto LABEL_3;
    case 0xFFFFFFFC:
LABEL_3:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally2(this, method);
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally1(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C2A3B5 & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    byte_4C2A3B5 = 1;
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
      v7 = sub_1C7DCA8(_7__wrap5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v7)(
      _7__wrap5,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally2(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A3B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    byte_4C2A3B6 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap8,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
}


void BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21____m__Finally3(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__21_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C2A3B7 & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    byte_4C2A3B7 = 1;
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
      v7 = sub_1C7DCA8(_7__wrap5, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4C2A3AD & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicNomal___c_TypeInfo);
    byte_4C2A3AD = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicNomal___c___ctor(BattleLogicNomal___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleServantData_o *BattleLogicNomal___c___CreateCommandBattle_b__25_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  return targetSvtData;
}


int32_t BattleLogicNomal___c___CreateCommandBattle_b__25_2(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *BattleLogicNomal___c___CreateCommandBattle_b__25_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_4C2A3AE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4C2A3AE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
}


bool BattleLogicNomal___c___CreateCommandBattle_b__25_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0);
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__21_1(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__21_2(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__23_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2D6EC(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void BattleLogicNomal___c___createBuffAddPlayer_b__43_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1C2D6EC(this, 0);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0);
}


void BattleLogicNomal___c___taskCounterFunc_b__19_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  BattleBuffData_BuffData__RevertUnused(x, 1, 0);
}


void BattleLogicNomal___c__DisplayClass21_0___ctor(
        BattleLogicNomal___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass21_0___GetConfirmCommandFunctionBuffTask_b__0(
        BattleLogicNomal___c__DisplayClass21_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *otherSvtList; // x0

  if ( (byte_4C2A3AF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__Remove__);
    byte_4C2A3AF = 1;
  }
  otherSvtList = (System_Collections_Generic_List_object__o *)this->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C2D6EC(0, svt);
  System_Collections_Generic_List_object___Remove(
    otherSvtList,
    (Il2CppObject *)svt,
    (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_BattleServantData__Remove__);
}


void BattleLogicNomal___c__DisplayClass25_0___ctor(
        BattleLogicNomal___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleBuffData_CheckInvokeBuff_o *BattleLogicNomal___c__DisplayClass25_0___CreateCommandBattle_b__1(
        BattleLogicNomal___c__DisplayClass25_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  BuffList_c *v5; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v8; // x22

  if ( (byte_4C2A3B0 & 1) == 0 )
  {
    sub_1C2D490(&BuffList_TypeInfo);
    sub_1C2D490(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_4C2A3B0 = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_1C2D6DC(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v8, actSvtData, targetSvtData, CommandCodeFunctionActs, 0);
  return v8;
}


void BattleLogicNomal___c__DisplayClass25_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass25_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass25_0_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4C2A3B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass25_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4C2A3B1 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass25_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_30BC828 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C2D6EC(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1C2D434((CGThumbnailListItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
  }
}


void BattleLogicNomal___c__DisplayClass25_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass25_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass25_0_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4C2A3B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass25_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4C2A3B2 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass25_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_30BC828 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C2D6EC(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1C2D434((CGThumbnailListItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
  }
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass25_0___CreateCommandBattle_b__6(
        BattleLogicNomal___c__DisplayClass25_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleLogicNomal___c__DisplayClass25_0_o *v4; // x20
  struct BattleActionData_o *actiondata; // x8
  BattleServantData_o *result; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass25_0_o *)this->fields.command) == 0)
    || (BattleCommandData__UpdateCritical(
          (BattleCommandData_o *)this,
          v4->fields.actSvtData,
          targetSvtData,
          _4__this->fields.data,
          0),
        !targetSvtData)
    || (actiondata = v4->fields.actiondata) == 0 )
  {
    sub_1C2D6EC(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


System_Collections_Generic_IEnumerable_BattleServantData__o *BattleLogicNomal___c__DisplayClass25_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass25_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_4C2A3B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_4C2A3B3 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass25_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass25_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass25_0_o *)_4__this->fields.data) == 0 )
    sub_1C2D6EC(this, id);
  return BattleData__getServantData((BattleData_o *)this, id, 0);
}


void BattleLogicNomal___c__DisplayClass38_0___ctor(
        BattleLogicNomal___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass38_0___createEndTurnPlayer_b__0(
        BattleLogicNomal___c__DisplayClass38_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1C2D6EC(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
}


void BattleLogicNomal___c__DisplayClass41_0___ctor(
        BattleLogicNomal___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicNomal___c__DisplayClass41_0___createEndTurnEnemy_b__0(
        BattleLogicNomal___c__DisplayClass41_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1C2D6EC(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0);
}


void BattleLogicNomal___c__DisplayClass51_0___ctor(
        BattleLogicNomal___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal___c__DisplayClass51_0___shiftServantTaskReaction_b__0(
        BattleLogicNomal___c__DisplayClass51_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.uniqueId == this->fields.uniqueId;
}