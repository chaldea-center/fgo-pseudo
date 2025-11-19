void BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BattleLogicTask_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB948F & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask___TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    byte_4CB948F = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C6BAB0(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5);
  v6 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0);
  this->fields.tmpShiftTask = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.tmpShiftTask, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(this, method);
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
  System_Nullable_int__o v35; // x4
  bool v36; // w8
  BattleActionData_o *result; // x0
  System_Collections_Generic_List_object__o *v38; // x19
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o **v47; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_object__o **v49; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x19
  System_Func_T__TResult__o *v51; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x19
  BattleLogicNomal___c_c *v53; // x8
  System_Func_object__bool__o *_9__30_9; // x23
  Il2CppObject *v55; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x19
  BattleLogicNomal___c_c *v61; // x8
  System_Func_object__object__o *_9__30_0; // x23
  Il2CppObject *v63; // x22
  struct BattleLogicNomal___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Func_object__object__o *v67; // x22
  __int64 v68; // x9
  BuffList_c *v69; // x8
  BattleLogicNomal___c_c *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x23
  System_Func_T__TResult__o *_9__30_2; // x25
  Il2CppObject *v73; // x19
  struct BattleLogicNomal___c_StaticFields *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  System_Func_T__TResult__o *_9__30_3; // x19
  Il2CppObject *v78; // x22
  struct BattleLogicNomal___c_StaticFields *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x8
  int64_t v86; // x19
  System_Action_object__object__o *v87; // x22
  BattleCommandData_o **v88; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v90; // x22
  __int64 v91; // x8
  __int64 v92; // x23
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  __int64 v95; // x19
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  System_Func_object__object__o *v98; // x19
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v102; // x24
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x5
  __int64 v105; // x8
  unsigned __int64 v106; // x22
  int v107; // w19
  int32_t v108; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v109; // x27
  __int64 v110; // x8
  __int64 v111; // x19
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x1
  __int64 v117; // x23
  __int64 v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  Il2CppObject *v126; // x0
  Il2CppObject *v127; // x1
  __int64 v128; // x8
  __int64 v129; // x9
  int *v130; // x10
  __int64 v131; // x0
  unsigned __int64 v132; // x9
  int v133; // w19
  int v134; // w8
  BuffList_ACTION_array *v135; // x27
  int v136; // w8
  __int64 v137; // x8
  __int64 v138; // x19
  __int64 v139; // x9
  int *v140; // x10
  __int64 v141; // x0
  __int64 v142; // x1
  __int64 v143; // x23
  __int64 v144; // x8
  __int64 v145; // x9
  int *v146; // x10
  __int64 v147; // x0
  __int64 v148; // x8
  __int64 v149; // x9
  int *v150; // x10
  __int64 v151; // x0
  __int64 v152; // x1
  BattleServantData_o *v153; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_46573068; // x0
  __int64 v155; // x1
  BattleBuffData_BuffData_array *v156; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v158; // x26
  BattleBuffData_BuffData_o *v159; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v162; // x1
  __int64 v163; // x8
  __int64 v164; // x9
  int *v165; // x10
  __int64 v166; // x0
  __int64 v167; // x8
  __int64 v168; // x19
  __int64 v169; // x9
  int *v170; // x10
  __int64 v171; // x0
  __int64 v172; // x0
  __int64 v173; // x1
  __int64 v174; // x29
  BattleActionData_DamageData_o *v175; // x23
  __int64 v176; // x8
  __int64 v177; // x9
  int *v178; // x10
  __int64 v179; // x0
  __int64 v180; // x8
  __int64 v181; // x9
  int *v182; // x10
  __int64 v183; // x0
  __int64 v184; // x1
  BattleServantData_o *v185; // x27
  BattleLogic_o *v186; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v188; // x1
  BattleActionData_DamageData_o *v189; // x19
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v191; // x22
  BattleActionData_o *v192; // x0
  _BOOL8 v193; // x0
  __int64 v194; // x1
  BattleActionData_o *v195; // x8
  __int64 v196; // x8
  __int64 v197; // x9
  int *v198; // x10
  __int64 v199; // x0
  BattleActionData_o *v200; // x19
  BattleActionData_o *v201; // x19
  BattleActionData_o *v202; // x19
  struct BattleData_o *v203; // x8
  __int64 v204; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v206; // x19
  const MethodInfo *v207; // x5
  __int64 v208; // x8
  unsigned __int64 v209; // x26
  unsigned int v210; // w19
  int32_t v211; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x27
  __int64 v213; // x8
  __int64 v214; // x19
  __int64 v215; // x9
  int *v216; // x10
  __int64 v217; // x0
  __int64 v218; // x0
  __int64 v219; // x1
  __int64 v220; // x23
  __int64 v221; // x8
  __int64 v222; // x9
  int *v223; // x10
  __int64 v224; // x0
  __int64 v225; // x8
  __int64 v226; // x9
  int *v227; // x10
  __int64 v228; // x0
  Il2CppObject *v229; // x0
  Il2CppObject *v230; // x1
  __int64 v231; // x8
  __int64 v232; // x9
  int *v233; // x10
  __int64 v234; // x0
  unsigned __int64 v235; // x26
  int v236; // w19
  int v237; // w8
  BuffList_ACTION_array *v238; // x27
  int v239; // w8
  __int64 v240; // x8
  __int64 v241; // x19
  __int64 v242; // x9
  int *v243; // x10
  __int64 v244; // x0
  __int64 v245; // x1
  __int64 v246; // x23
  __int64 v247; // x8
  __int64 v248; // x9
  int *v249; // x10
  __int64 v250; // x0
  __int64 v251; // x8
  __int64 v252; // x9
  int *v253; // x10
  __int64 v254; // x0
  __int64 v255; // x1
  BattleServantData_o *v256; // x3
  BattleBuffData_BuffData_array *v257; // x0
  __int64 v258; // x1
  BattleBuffData_BuffData_array *v259; // x19
  il2cpp_array_size_t v260; // x8
  unsigned __int64 v261; // x22
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
  __int64 v274; // x23
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
  BattleLogic_o *v295; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v296; // x22
  System_Nullable_int__o v297; // x4
  __int64 v298; // x1
  __int64 v299; // x0
  const MethodInfo *v300; // [xsp+0h] [xbp-120h]
  bool v301; // [xsp+14h] [xbp-10Ch]
  __int64 *v302; // [xsp+18h] [xbp-108h]
  __int64 v303; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v304; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  BattleBuffData_o *actSvtBuffData; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_Dictionary_object__object__o *v307; // [xsp+40h] [xbp-E0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v308; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+50h] [xbp-D0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+50h] [xbp-D0h]
  Il2CppObject *item; // [xsp+58h] [xbp-C8h]
  bool v312; // [xsp+64h] [xbp-BCh]
  __int64 v313; // [xsp+68h] [xbp-B8h]
  __int64 v314; // [xsp+70h] [xbp-B0h]
  BattleServantData_o **v315; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v316; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v317; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4CB947A & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_ACTION___TypeInfo);
    sub_1C6BA08(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleAddSkillTaskAfterCommandAttack_TypeInfo);
    sub_1C6BA08(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
    sub_1C6BA08(&BattleServantData___TypeInfo);
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&BuffList_TypeInfo);
    sub_1C6BA08(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C6BA08(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_1C6BA08(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__);
    sub_1C6BA08(&BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
    sub_1C6BA08(&BattleLogicNomal___c_TypeInfo);
    byte_4CB947A = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = sub_1C6BC54(BattleLogicNomal___c__DisplayClass30_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass30_0___ctor((BattleLogicNomal___c__DisplayClass30_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_392;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( !task )
    goto LABEL_392;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !data )
    goto LABEL_392;
  ServantData = BattleData__getServantData(data, ActorId, 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  v14 = (BattleServantData_o **)(v7 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)ServantData, v15, v16);
  v17 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  *baseActionData = v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)baseActionData, (int32_t)v17, v18, v19);
  *(_QWORD *)(v7 + 48) = v17;
  v20 = (BattleActionData_o **)(v7 + 48);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)v17, v21, v22);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  v24 = (BattleCommandData_o **)(v7 + 40);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)command, v25, v26);
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
  v27 = *v20;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !v27 )
    goto LABEL_392;
  v27->fields.actorId = ActorId;
  ActorId = (__int64)*v20;
  if ( !*v20 )
    goto LABEL_392;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 136) = motionMessage;
  sub_1C6B9AC((CGThumbnailListItem_o *)(ActorId + 136), (int32_t)motionMessage, v28, v29);
  if ( !*v20 )
    goto LABEL_392;
  (*v20)->fields.isCounter = task->fields.isCounter;
  ActorId = BattleLogicTask__getTarget(task, 0);
  v31 = this->fields.data;
  if ( !v31 )
    goto LABEL_392;
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
    goto LABEL_392;
  if ( (*v20)->fields.isCounter )
  {
    if ( !ActorId )
      goto LABEL_392;
    if ( *(_BYTE *)(ActorId + 506) )
      return 0;
  }
  item = (Il2CppObject *)ActorId;
  logic = this->fields.logic;
  v34 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1C6BC54(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v34, 0);
  if ( !logic )
    goto LABEL_392;
  v35 = 0;
  v304 = task;
  targetId = v32;
  v36 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v34, task, v32, v35, 0);
  result = 0;
  if ( v36 )
    return result;
  v38 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v38 )
    goto LABEL_392;
  items = v38->fields._items;
  v42 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v38->fields._version;
  if ( !items )
    goto LABEL_392;
  size = v38->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v38,
      item,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v38->fields._size = size + 1;
    v44[4] = (Il2CppClass *)item;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v44 + 4), (int32_t)item, v39, v40);
  }
  *(_QWORD *)(v7 + 56) = v38;
  v47 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 56), (int32_t)v38, v45, v46);
  ActorId = *(_QWORD *)(v7 + 40);
  if ( !ActorId )
    goto LABEL_392;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0);
  ActorId = (__int64)*v24;
  if ( !*v24 )
    goto LABEL_392;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v14,
    (BattleServantData_o *)item,
    this->fields.data,
    0);
  ActorId = (__int64)*v24;
  if ( !*v24 )
    goto LABEL_392;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v14, 0);
  ActorId = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_392;
  ActorId = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v24, 0);
  v301 = (_DWORD)ActorId == 2;
  v316 = (BattleCommandData_o **)(v7 + 40);
  if ( (_DWORD)ActorId == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_392;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, targetId, 0);
    if ( !this->fields.data )
      goto LABEL_392;
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0,
                                                                  0));
    v49 = (System_Collections_Generic_List_object__o **)(v7 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v48,
                         (const MethodInfo_317FC78 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_392;
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      targetId,
      (const MethodInfo_37E4E4C *)Method_System_Collections_Generic_List_int__Remove__);
    v51 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(
      v51,
      (Il2CppObject *)v7,
      Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__8__,
      0);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v50,
                                                                 (System_Func_TSource__TResult__o *)v51,
                                                                 (const MethodInfo_316EE54 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v53 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v53 = BattleLogicNomal___c_TypeInfo;
    }
    _9__30_9 = (System_Func_object__bool__o *)v53->static_fields->__9__30_9;
    if ( !_9__30_9 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = BattleLogicNomal___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__30_9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__30_9, v55, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_9__, 0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__30_9 = (struct System_Func_BattleServantData__bool__o *)_9__30_9;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__30_9, (int32_t)_9__30_9, v57, v58);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v52,
                         (System_Func_TSource__bool__o *)_9__30_9,
                         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v49 )
      goto LABEL_392;
    v47 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v49,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v24 = (BattleCommandData_o **)(v7 + 40);
  }
  if ( !*v47 )
    goto LABEL_392;
  ActorId = (__int64)*v24;
  if ( !*v24 )
    goto LABEL_392;
  *(_DWORD *)(ActorId + 128) = (*v47)[1].monitor;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll((BattleCommandData_o *)ActorId, 0);
  v60 = *v47;
  v312 = IsForceAttackFunctionTargetAll;
  v61 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v61 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__object__o *)v61->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = BattleLogicNomal___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v61->static_fields->__9;
    _9__30_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__30_0, v63, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_0__, 0);
    v64 = BattleLogicNomal___c_TypeInfo->static_fields;
    v64->__9__30_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__30_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v64->__9__30_0, (int32_t)_9__30_0, v65, v66);
  }
  v67 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_object__object____ctor(
    v67,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__1__,
    0);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v60,
                       (System_Func_TSource__TKey__o *)_9__30_0,
                       (System_Func_TSource__TElement__o *)v67,
                       (const MethodInfo_317BC5C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v68 = *(_QWORD *)(v7 + 24);
  v307 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  if ( !v68 )
    goto LABEL_392;
  v69 = BuffList_TypeInfo;
  actSvtBuffData = *(BattleBuffData_o **)(v68 + 816);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v69 = BuffList_TypeInfo;
  }
  v70 = BattleLogicNomal___c_TypeInfo;
  v302 = (__int64 *)v47;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v69->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v70 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_2 = (System_Func_T__TResult__o *)v70->static_fields->__9__30_2;
  if ( !_9__30_2 )
  {
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = BattleLogicNomal___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v70->static_fields->__9;
    _9__30_2 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__30_2,
      v73,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__30_2__,
      0);
    v74 = BattleLogicNomal___c_TypeInfo->static_fields;
    v74->__9__30_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__30_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v74->__9__30_2, (int32_t)_9__30_2, v75, v76);
    v70 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v70->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v70);
    v70 = BattleLogicNomal___c_TypeInfo;
  }
  _9__30_3 = (System_Func_T__TResult__o *)v70->static_fields->__9__30_3;
  if ( !_9__30_3 )
  {
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = BattleLogicNomal___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v70->static_fields->__9;
    _9__30_3 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Int32Enum__object____ctor(_9__30_3, v78, Method_BattleLogicNomal___c__CreateCommandBattle_b__30_3__, 0);
    v79 = BattleLogicNomal___c_TypeInfo->static_fields;
    v79->__9__30_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__30_3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v79->__9__30_3, (int32_t)_9__30_3, v80, v81);
  }
  v82 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
          CommandCodeBuffHash,
          (System_Func_TSource__TKey__o *)_9__30_2,
          (System_Func_TSource__TElement__o *)_9__30_3,
          (const MethodInfo_317BA10 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v7 + 32) = v82;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v82, v83, v84);
  v85 = *(_QWORD *)(v7 + 40);
  v308 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
  if ( !v85 )
    goto LABEL_392;
  v86 = *(_QWORD *)(v85 + 72);
  v87 = (System_Action_object__object__o *)sub_1C6BC54(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v87,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__4__,
    0);
  v88 = (BattleCommandData_o **)(v7 + 40);
  ActorId = (__int64)actSvtBuffData;
  if ( !actSvtBuffData )
    goto LABEL_392;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    actSvtBuffData,
    v86,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v87,
    1,
    0);
  if ( !*v316 )
    goto LABEL_392;
  commandAssistId = (*v316)->fields.commandAssistId;
  v90 = (System_Action_object__object__o *)sub_1C6BC54(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v90,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__5__,
    0);
  v91 = *(_QWORD *)(v7 + 40);
  if ( !v91 )
    goto LABEL_392;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    actSvtBuffData,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v90,
    1,
    *(_DWORD *)(v91 + 88),
    0);
  ActorId = sub_1C6BAB0(bool___TypeInfo, 2);
  if ( !ActorId )
    goto LABEL_392;
  v92 = ActorId;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_393;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1C6BAB0(BattleServantData___TypeInfo, 1);
  if ( !ActorId )
    goto LABEL_392;
  v95 = ActorId;
  ActorId = (__int64)item;
  if ( item )
  {
    ActorId = sub_1C6BB44(item, *(_QWORD *)(*(_QWORD *)v95 + 64LL));
    if ( !ActorId )
    {
      v299 = sub_1C6BC84(0);
      sub_1C6BB30(v299, 0);
    }
  }
  if ( !*(_DWORD *)(v95 + 24) )
    goto LABEL_393;
  *(_QWORD *)(v95 + 32) = item;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v95 + 32), (int32_t)item, v93, v94);
  *(_QWORD *)(v7 + 72) = v95;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 72), v95, v96, v97);
  v98 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_object__object____ctor(
    v98,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__6__,
    0);
  *(_QWORD *)(v7 + 64) = v98;
  v303 = v7 + 64;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 64), (int32_t)v98, v99, v100);
  v314 = sub_1C6BC54(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v314,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass30_0__CreateCommandBattle_b__7__,
    0);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_392;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v102 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C6BC54(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v102, v103);
  v105 = *(_QWORD *)(v92 + 24);
  v315 = v14;
  v313 = v92;
  if ( (int)v105 >= 1 )
  {
    v106 = 0;
    do
    {
      if ( v106 >= (unsigned int)v105 )
        goto LABEL_393;
      v107 = *(unsigned __int8 *)(v92 + v106 + 32);
      if ( *(_BYTE *)(v92 + v106 + 32) )
        v108 = 177;
      else
        v108 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v308,
                           actSvtBuffData,
                           v108,
                           *v316,
                           v104);
      if ( !v314 )
        goto LABEL_392;
      v109 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v314 + 24))(
                  *(_QWORD *)(v314 + 64),
                  v107 != 0,
                  v312,
                  *(_QWORD *)(v314 + 40));
      if ( !ActorId )
        goto LABEL_392;
      v110 = *(_QWORD *)ActorId;
      v111 = ActorId;
      v112 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v113 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v113 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v112;
          v113 += 4;
          if ( !v112 )
            goto LABEL_97;
        }
        v114 = v110 + 16LL * *v113 + 312;
      }
      else
      {
LABEL_97:
        v114 = sub_1C41D90(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v115 = (*(__int64 (__fastcall **)(__int64, _QWORD))v114)(v111, *(_QWORD *)(v114 + 8));
      v117 = v115;
      while ( 1 )
      {
        if ( !v117 )
          sub_1C6BC60(v115, v116);
        v118 = *(_QWORD *)v117;
        v119 = *(unsigned __int16 *)(*(_QWORD *)v117 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v117 + 302LL) )
        {
          v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v120 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v119;
            v120 += 4;
            if ( !v119 )
              goto LABEL_105;
          }
          v121 = v118 + 16LL * *v120 + 312;
        }
        else
        {
LABEL_105:
          v121 = sub_1C41D90(v117, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v117, *(_QWORD *)(v121 + 8)) & 1) == 0 )
          break;
        v122 = *(_QWORD *)v117;
        v123 = *(unsigned __int16 *)(*(_QWORD *)v117 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v117 + 302LL) )
        {
          v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v124 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v123;
            v124 += 4;
            if ( !v123 )
              goto LABEL_112;
          }
          v125 = v122 + 16LL * *v124 + 312;
        }
        else
        {
LABEL_112:
          v125 = sub_1C41D90(v117, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v126 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v117, *(_QWORD *)(v125 + 8));
        if ( !v307 )
          sub_1C6BC60(v126, v126);
        v127 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v307,
                 v126,
                 (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v127,
          (SkillLvMaster_o *)MasterData_object,
          *v316,
          v109,
          *v20,
          0,
          v102,
          v300);
      }
      v128 = *(_QWORD *)v117;
      v129 = *(unsigned __int16 *)(*(_QWORD *)v117 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v117 + 302LL) )
      {
        v130 = (int *)(*(_QWORD *)(v128 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v130 - 1) != System_IDisposable_TypeInfo )
        {
          --v129;
          v130 += 4;
          if ( !v129 )
            goto LABEL_120;
        }
        v131 = v128 + 16LL * *v130 + 312;
      }
      else
      {
LABEL_120:
        v131 = sub_1C41D90(v117, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v131)(v117, *(_QWORD *)(v131 + 8));
      v92 = v313;
      LODWORD(v105) = *(_DWORD *)(v313 + 24);
      ++v106;
    }
    while ( (__int64)v106 < (int)v105 );
    if ( (int)v105 >= 1 )
    {
      v132 = 0;
      while ( v132 < (unsigned int)v105 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v132;
        v133 = *(unsigned __int8 *)(v92 + v132 + 32);
        ActorId = sub_1C6BAB0(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_392;
        v134 = *(_DWORD *)(ActorId + 24);
        v135 = (BuffList_ACTION_array *)ActorId;
        if ( v133 )
        {
          if ( !v134 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v134 == 1 )
            break;
          v136 = 120;
        }
        else
        {
          if ( !v134 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v134 == 1 )
            break;
          v136 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v136;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v314 + 24))(
                    *(_QWORD *)(v314 + 64),
                    v133 != 0,
                    v312,
                    *(_QWORD *)(v314 + 40));
        if ( !ActorId )
          goto LABEL_392;
        v137 = *(_QWORD *)ActorId;
        v138 = ActorId;
        v139 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v140 = (int *)(*(_QWORD *)(v137 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v140 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v139;
            v140 += 4;
            if ( !v139 )
              goto LABEL_142;
          }
          v141 = v137 + 16LL * *v140 + 312;
        }
        else
        {
LABEL_142:
          v141 = sub_1C41D90(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v143 = (*(__int64 (__fastcall **)(__int64, _QWORD))v141)(v138, *(_QWORD *)(v141 + 8));
        if ( !v143 )
          sub_1C6BC60(0, v142);
        while ( 1 )
        {
          v144 = *(_QWORD *)v143;
          v145 = *(unsigned __int16 *)(*(_QWORD *)v143 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v143 + 302LL) )
          {
            v146 = (int *)(*(_QWORD *)(v144 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v146 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v145;
              v146 += 4;
              if ( !v145 )
                goto LABEL_149;
            }
            v14 = v315;
            v88 = v316;
            v147 = v144 + 16LL * *v146 + 312;
          }
          else
          {
LABEL_149:
            v14 = v315;
            v88 = v316;
            v147 = sub_1C41D90(v143, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v147)(v143, *(_QWORD *)(v147 + 8)) & 1) == 0 )
            break;
          v148 = *(_QWORD *)v143;
          v149 = *(unsigned __int16 *)(*(_QWORD *)v143 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v143 + 302LL) )
          {
            v150 = (int *)(*(_QWORD *)(v148 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v150 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v149;
              v150 += 4;
              if ( !v149 )
                goto LABEL_156;
            }
            v151 = v148 + 16LL * *v150 + 312;
          }
          else
          {
LABEL_156:
            v151 = sub_1C41D90(v143, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v153 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v151)(v143, *(_QWORD *)(v151 + 8));
          if ( !*v14 )
            sub_1C6BC60(0, v152);
          AttackSideEffectBuffList_46573068 = BattleServantData__getAttackSideEffectBuffList_46573068(
                                                *v14,
                                                v135,
                                                *v88,
                                                v153,
                                                0);
          v156 = AttackSideEffectBuffList_46573068;
          if ( !AttackSideEffectBuffList_46573068 )
            sub_1C6BC60(0, v155);
          max_length = AttackSideEffectBuffList_46573068->max_length;
          if ( (int)max_length >= 1 )
          {
            v158 = 0;
            do
            {
              if ( v158 >= (unsigned int)max_length )
                sub_1C6BC68(AttackSideEffectBuffList_46573068);
              if ( !*v20 )
                sub_1C6BC60(0, v155);
              v159 = v156->m_Items[v158];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v20, 3, 0);
              if ( !logicfunction )
                sub_1C6BC60(SideEffectActionData, v162);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v159,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v102,
                0,
                0);
              LODWORD(max_length) = v156->max_length;
              ++v158;
            }
            while ( (__int64)v158 < (int)max_length );
          }
        }
        v163 = *(_QWORD *)v143;
        v164 = *(unsigned __int16 *)(*(_QWORD *)v143 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v143 + 302LL) )
        {
          v165 = (int *)(*(_QWORD *)(v163 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v165 - 1) != System_IDisposable_TypeInfo )
          {
            --v164;
            v165 += 4;
            if ( !v164 )
              goto LABEL_171;
          }
          v166 = v163 + 16LL * *v165 + 312;
        }
        else
        {
LABEL_171:
          v166 = sub_1C41D90(v143, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v166)(v143, *(_QWORD *)(v166 + 8));
        v92 = v313;
        LODWORD(v105) = *(_DWORD *)(v313 + 24);
        v132 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v105 )
          goto LABEL_181;
      }
LABEL_393:
      sub_1C6BC68(ActorId);
    }
  }
LABEL_181:
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0, 0);
  ActorId = (__int64)*v88;
  if ( !*v88 )
    goto LABEL_392;
  BattleCommandData__SetOverwriteRatesIndex((BattleCommandData_o *)ActorId, 0);
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1C6BC54(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0, 0);
  if ( !v314 )
    goto LABEL_392;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v314 + 24))(
              *(_QWORD *)(v314 + 64),
              0,
              0,
              *(_QWORD *)(v314 + 40));
  if ( !ActorId )
    goto LABEL_392;
  v167 = *(_QWORD *)ActorId;
  v168 = ActorId;
  v169 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v170 = (int *)(*(_QWORD *)(v167 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v170 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v169;
      v170 += 4;
      if ( !v169 )
        goto LABEL_189;
    }
    v171 = v167 + 16LL * *v170 + 312;
  }
  else
  {
LABEL_189:
    v171 = sub_1C41D90(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v172 = (*(__int64 (__fastcall **)(__int64, _QWORD))v171)(v168, *(_QWORD *)(v171 + 8));
  v174 = v172;
  v175 = 0;
  while ( 1 )
  {
    if ( !v174 )
      sub_1C6BC60(v172, v173);
    v176 = *(_QWORD *)v174;
    v177 = *(unsigned __int16 *)(*(_QWORD *)v174 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v174 + 302LL) )
    {
      v178 = (int *)(*(_QWORD *)(v176 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v178 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v177;
        v178 += 4;
        if ( !v177 )
          goto LABEL_197;
      }
      v179 = v176 + 16LL * *v178 + 312;
    }
    else
    {
LABEL_197:
      v179 = sub_1C41D90(v174, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v179)(v174, *(_QWORD *)(v179 + 8)) & 1) == 0 )
      break;
    v180 = *(_QWORD *)v174;
    v181 = *(unsigned __int16 *)(*(_QWORD *)v174 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v174 + 302LL) )
    {
      v182 = (int *)(*(_QWORD *)(v180 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v182 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v181;
        v182 += 4;
        if ( !v181 )
          goto LABEL_204;
      }
      v183 = v180 + 16LL * *v182 + 312;
    }
    else
    {
LABEL_204:
      v183 = sub_1C41D90(v174, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v185 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v183)(v174, *(_QWORD *)(v183 + 8));
    v186 = this->fields.logic;
    if ( !v186 )
      sub_1C6BC60(0, v184);
    DamageList = BattleLogic__GetDamageList(v186, *v14, v185, *v88, processArgsa, *v20, 0);
    v189 = DamageList;
    if ( v185 == (BattleServantData_o *)item )
      v175 = DamageList;
    if ( !v185 )
      sub_1C6BC60(DamageList, v188);
    buffData = v185->fields.buffData;
    if ( !buffData )
      sub_1C6BC60(DamageList, v188);
    if ( !buffData->fields.isNoDamage )
    {
      v191 = *v20;
      v192 = BattleBuffData__UseProgressingDoNotAct(v185->fields.buffData, v185, 0, 0);
      if ( !v191 )
        sub_1C6BC60(v192, v192);
      BattleActionData__addSideEffectActionData(v191, v192, 1, 0);
    }
    if ( !*v14 )
      sub_1C6BC60(0, v188);
    v193 = BattleServantData__checkPlayer(*v14, 0);
    v195 = *v20;
    if ( v193 )
    {
      if ( !v195 )
        sub_1C6BC60(v193, v194);
      if ( !v195->fields.isCounter )
      {
        if ( !*v14 )
          sub_1C6BC60(v193, v194);
        v185->fields.overkillTargetId = (*v14)->fields.uniqueId;
      }
    }
    else if ( !v195 )
    {
      sub_1C6BC60(v193, v194);
    }
    BattleActionData__setDamageData(v195, v189, 0, 0, 0, 0);
  }
  v196 = *(_QWORD *)v174;
  v197 = *(unsigned __int16 *)(*(_QWORD *)v174 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v174 + 302LL) )
  {
    v198 = (int *)(*(_QWORD *)(v196 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v198 - 1) != System_IDisposable_TypeInfo )
    {
      --v197;
      v198 += 4;
      if ( !v197 )
        goto LABEL_226;
    }
    v199 = v196 + 16LL * *v198 + 312;
  }
  else
  {
LABEL_226:
    v199 = sub_1C41D90(v174, System_IDisposable_TypeInfo, 0);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v199)(v174, *(_QWORD *)(v199 + 8));
  if ( !*(_QWORD *)v303 )
    goto LABEL_392;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v303 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v303 + 64LL),
    item,
    *(_QWORD *)(*(_QWORD *)v303 + 40LL));
  ActorId = (__int64)*v88;
  if ( !*v88 )
    goto LABEL_392;
  v200 = *v20;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0);
  if ( !v200 )
    goto LABEL_392;
  v200->fields.type = ActorId;
  ActorId = (__int64)*v20;
  if ( !*v20 )
    goto LABEL_392;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v88, 0);
  v9 = *v88;
  if ( !*v88 )
    goto LABEL_392;
  v201 = *v20;
  if ( !*v20 )
    goto LABEL_392;
  v201->fields.actionIndex = v9->fields.actionIndex;
  ActorId = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_392;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v9, 0);
  v201->fields.motionId = ActorId;
  if ( !v175 )
    goto LABEL_392;
  v202 = *v20;
  ActorId = BattleActionData_DamageData__getAttackCount(v175, 0);
  if ( !v202 )
    goto LABEL_392;
  v202->fields.attackcount = ActorId;
  v203 = this->fields.data;
  v204 = v313;
  if ( !v203 )
    goto LABEL_392;
  perf = v203->fields.perf;
  if ( !perf )
    goto LABEL_392;
  if ( !*v88 )
    goto LABEL_392;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_392;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v88)->fields.actionIndex,
    0);
  if ( !*v14 )
    goto LABEL_392;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_392;
  v206 = *v20;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v14)->fields.uniqueId, targetId, 0);
  if ( !v206 )
    goto LABEL_392;
  v206->fields.prevattackme = ActorId & 1;
  v208 = *(_QWORD *)(v313 + 24);
  if ( (int)v208 >= 1 )
  {
    v209 = 0;
    do
    {
      if ( v209 >= (unsigned int)v208 )
        goto LABEL_393;
      v210 = *(unsigned __int8 *)(v204 + v209 + 32);
      if ( *(_BYTE *)(v204 + v209 + 32) )
        v211 = 178;
      else
        v211 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v308,
                                    actSvtBuffData,
                                    v211,
                                    *v316,
                                    v207);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v314 + 24))(
                  *(_QWORD *)(v314 + 64),
                  v210,
                  v312,
                  *(_QWORD *)(v314 + 40));
      if ( !ActorId )
        goto LABEL_392;
      v213 = *(_QWORD *)ActorId;
      v214 = ActorId;
      v215 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v216 = (int *)(*(_QWORD *)(v213 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v216 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v215;
          v216 += 4;
          if ( !v215 )
            goto LABEL_255;
        }
        v217 = v213 + 16LL * *v216 + 312;
      }
      else
      {
LABEL_255:
        v217 = sub_1C41D90(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v218 = (*(__int64 (__fastcall **)(__int64, _QWORD))v217)(v214, *(_QWORD *)(v217 + 8));
      v220 = v218;
      while ( 1 )
      {
        if ( !v220 )
          sub_1C6BC60(v218, v219);
        v221 = *(_QWORD *)v220;
        v222 = *(unsigned __int16 *)(*(_QWORD *)v220 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v220 + 302LL) )
        {
          v223 = (int *)(*(_QWORD *)(v221 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v223 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v222;
            v223 += 4;
            if ( !v222 )
              goto LABEL_263;
          }
          v224 = v221 + 16LL * *v223 + 312;
        }
        else
        {
LABEL_263:
          v224 = sub_1C41D90(v220, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v224)(v220, *(_QWORD *)(v224 + 8)) & 1) == 0 )
          break;
        v225 = *(_QWORD *)v220;
        v226 = *(unsigned __int16 *)(*(_QWORD *)v220 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v220 + 302LL) )
        {
          v227 = (int *)(*(_QWORD *)(v225 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v227 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v226;
            v227 += 4;
            if ( !v226 )
              goto LABEL_270;
          }
          v228 = v225 + 16LL * *v227 + 312;
        }
        else
        {
LABEL_270:
          v228 = sub_1C41D90(v220, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v229 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v228)(v220, *(_QWORD *)(v228 + 8));
        if ( !v307 )
          sub_1C6BC60(v229, v229);
        v230 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v307,
                 v229,
                 (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v230,
          (SkillLvMaster_o *)MasterData_object,
          *v316,
          TargetCommandCodeBuffList,
          *v20,
          1,
          v102,
          v300);
      }
      v231 = *(_QWORD *)v220;
      v232 = *(unsigned __int16 *)(*(_QWORD *)v220 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v220 + 302LL) )
      {
        v233 = (int *)(*(_QWORD *)(v231 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v233 - 1) != System_IDisposable_TypeInfo )
        {
          --v232;
          v233 += 4;
          if ( !v232 )
            goto LABEL_278;
        }
        v234 = v231 + 16LL * *v233 + 312;
      }
      else
      {
LABEL_278:
        v234 = sub_1C41D90(v220, System_IDisposable_TypeInfo, 0);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v234)(v220, *(_QWORD *)(v234 + 8));
      v204 = v313;
      LODWORD(v208) = *(_DWORD *)(v313 + 24);
      ++v209;
    }
    while ( (__int64)v209 < (int)v208 );
    if ( (int)v208 >= 1 )
    {
      v235 = 0;
      while ( v235 < (unsigned int)v208 )
      {
        v236 = *(unsigned __int8 *)(v204 + v235 + 32);
        ActorId = sub_1C6BAB0(BuffList_ACTION___TypeInfo, 2);
        if ( !ActorId )
          goto LABEL_392;
        v237 = *(_DWORD *)(ActorId + 24);
        v238 = (BuffList_ACTION_array *)ActorId;
        if ( v236 )
        {
          if ( !v237 )
            goto LABEL_393;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v237 == 1 )
            goto LABEL_393;
          v239 = 121;
        }
        else
        {
          if ( !v237 )
            goto LABEL_393;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v237 == 1 )
            goto LABEL_393;
          v239 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v239;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v314 + 24))(
                    *(_QWORD *)(v314 + 64),
                    v236 != 0,
                    v312,
                    *(_QWORD *)(v314 + 40));
        if ( !ActorId )
          goto LABEL_392;
        v240 = *(_QWORD *)ActorId;
        v241 = ActorId;
        v242 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v243 = (int *)(*(_QWORD *)(v240 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v243 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v242;
            v243 += 4;
            if ( !v242 )
              goto LABEL_300;
          }
          v244 = v240 + 16LL * *v243 + 312;
        }
        else
        {
LABEL_300:
          v244 = sub_1C41D90(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
        }
        v246 = (*(__int64 (__fastcall **)(__int64, _QWORD))v244)(v241, *(_QWORD *)(v244 + 8));
        if ( !v246 )
          sub_1C6BC60(0, v245);
        while ( 1 )
        {
          v247 = *(_QWORD *)v246;
          v248 = *(unsigned __int16 *)(*(_QWORD *)v246 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v246 + 302LL) )
          {
            v249 = (int *)(*(_QWORD *)(v247 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v249 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v248;
              v249 += 4;
              if ( !v248 )
                goto LABEL_307;
            }
            v250 = v247 + 16LL * *v249 + 312;
          }
          else
          {
LABEL_307:
            v250 = sub_1C41D90(v246, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v250)(v246, *(_QWORD *)(v250 + 8)) & 1) == 0 )
            break;
          v251 = *(_QWORD *)v246;
          v252 = *(unsigned __int16 *)(*(_QWORD *)v246 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v246 + 302LL) )
          {
            v253 = (int *)(*(_QWORD *)(v251 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v253 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v252;
              v253 += 4;
              if ( !v252 )
                goto LABEL_314;
            }
            v254 = v251 + 16LL * *v253 + 312;
          }
          else
          {
LABEL_314:
            v254 = sub_1C41D90(v246, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
          }
          v256 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v254)(v246, *(_QWORD *)(v254 + 8));
          if ( !*v315 )
            sub_1C6BC60(0, v255);
          v257 = BattleServantData__getAttackSideEffectBuffList_46573068(*v315, v238, *v316, v256, 0);
          v259 = v257;
          if ( !v257 )
            sub_1C6BC60(0, v258);
          v260 = v257->max_length;
          if ( (int)v260 >= 1 )
          {
            v261 = 0;
            do
            {
              if ( v261 >= (unsigned int)v260 )
                sub_1C6BC68(v257);
              v262 = this->fields.logicfunction;
              if ( !v262 )
                sub_1C6BC60(0, v258);
              BattleLogicFunction__SetSideEffectBuff(
                v262,
                (SkillLvMaster_o *)MasterData_object,
                *v20,
                v259->m_Items[v261],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v102,
                1,
                0);
              LODWORD(v260) = v259->max_length;
              ++v261;
            }
            while ( (__int64)v261 < (int)v260 );
          }
        }
        v263 = *(_QWORD *)v246;
        v264 = *(unsigned __int16 *)(*(_QWORD *)v246 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v246 + 302LL) )
        {
          v265 = (int *)(*(_QWORD *)(v263 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v265 - 1) != System_IDisposable_TypeInfo )
          {
            --v264;
            v265 += 4;
            if ( !v264 )
              goto LABEL_328;
          }
          v266 = v263 + 16LL * *v265 + 312;
        }
        else
        {
LABEL_328:
          v266 = sub_1C41D90(v246, System_IDisposable_TypeInfo, 0);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v266)(v246, *(_QWORD *)(v266 + 8));
        v204 = v313;
        LODWORD(v208) = *(_DWORD *)(v313 + 24);
        if ( (__int64)++v235 >= (int)v208 )
          goto LABEL_337;
      }
      goto LABEL_393;
    }
  }
LABEL_337:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v314 + 24))(
              *(_QWORD *)(v314 + 64),
              0,
              0,
              *(_QWORD *)(v314 + 40));
  if ( !ActorId )
    goto LABEL_392;
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
        goto LABEL_342;
    }
    v271 = v267 + 16LL * *v270 + 312;
  }
  else
  {
LABEL_342:
    v271 = sub_1C41D90(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v272 = (*(__int64 (__fastcall **)(__int64, _QWORD))v271)(v268, *(_QWORD *)(v271 + 8));
  v274 = v272;
  while ( 1 )
  {
    if ( !v274 )
      sub_1C6BC60(v272, v273);
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
          goto LABEL_350;
      }
      v278 = v275 + 16LL * *v277 + 312;
    }
    else
    {
LABEL_350:
      v278 = sub_1C41D90(v274, System_Collections_IEnumerator_TypeInfo, 0);
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
          goto LABEL_357;
      }
      v282 = v279 + 16LL * *v281 + 312;
    }
    else
    {
LABEL_357:
      v282 = sub_1C41D90(v274, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v283 = (*(__int64 (__fastcall **)(__int64, _QWORD))v282)(v274, *(_QWORD *)(v282 + 8));
    if ( !*v315 )
      sub_1C6BC60(v283, v284);
    if ( !v283 )
      sub_1C6BC60(0, v284);
    if ( !this->fields.logic )
      sub_1C6BC60(v283, v284);
    v272 = BattleLogic__SetDamageSideEffect(
             this->fields.logic,
             *v20,
             (*v315)->fields.uniqueId,
             *(_DWORD *)(v283 + 24),
             *v316,
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
        goto LABEL_367;
    }
    v288 = v285 + 16LL * *v287 + 312;
  }
  else
  {
LABEL_367:
    v288 = sub_1C41D90(v274, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v288)(v274, *(_QWORD *)(v288 + 8));
  ActorId = *v302;
  if ( !*v302 )
    goto LABEL_392;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v317,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  i = v317;
  while ( 1 )
  {
    v289 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v289 )
      break;
    current = i.fields._current;
    if ( !i.fields._current )
      sub_1C6BC60(v289, v290);
    klass = i.fields._current[51].klass;
    if ( !klass )
      sub_1C6BC60(v289, v290);
    LOBYTE(klass->_1.nestedTypes) = 0;
    if ( v304->fields.isCanCounterTask )
    {
      if ( !*v315 )
        sub_1C6BC60(v289, v290);
      v293 = this->fields.data;
      if ( !v293 )
        sub_1C6BC60(0, v290);
      BattleData__SetWasAttackTargetId(v293, (*v315)->fields.uniqueId, (int32_t)current[1].monitor, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  ActorId = (__int64)this->fields.logicfunction;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogicFunction__SetSubstituteAction((BattleLogicFunction_o *)ActorId, *v20, 0, 0);
  v9 = (BattleCommandData_o *)item;
  if ( !*(_QWORD *)v303 )
    goto LABEL_392;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v303 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v303 + 64LL),
              item,
              *(_QWORD *)(*(_QWORD *)v303 + 40LL));
  v294 = *v20;
  if ( !*v20 )
    goto LABEL_392;
  v294->fields.isForcedSpeedOne = v304->fields.isForcedSpeedOne;
  v294->fields.isAllAttack = v301;
  if ( !*v315 )
    goto LABEL_392;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_392;
  BattleData__setCommandAttack((BattleData_o *)ActorId, (*v315)->fields.uniqueId, targetId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_392;
  BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0, 0, 0),
        v295 = this->fields.logic,
        v296 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1C6BC54(BattleAddSkillTaskAfterCommandAttack_TypeInfo),
        BattleAddSkillTaskAfterCommandAttack___ctor(v296, 0),
        !v295)
    || (v297 = 0,
        BattleLogic__AddSkillTask(v295, (BattleAddSkillTaskAroundTargetTask_o *)v296, v304, targetId, v297, 0),
        (ActorId = *v302) == 0) )
  {
LABEL_392:
    sub_1C6BC60(ActorId, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v317,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  for ( i = v317;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
        BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C6BC60(0, v298);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  ((void (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v304->klass->vtable._10_SetAttacked.methodPtr)(
    v304,
    this->fields.data,
    1,
    v304->klass->vtable._10_SetAttacked.method);
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

  if ( (byte_4CB948D & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_8750/*"MOTION_DO_NOT_ACT"*/);
    byte_4CB948D = 1;
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
    v11 = sub_1C6BC54(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v14 = StringLiteral_8750/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 72) = StringLiteral_8750/*"MOTION_DO_NOT_ACT"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 72), v14, v12, v13);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 64) = BattleCommandData__get_type((BattleCommandData_o *)data, 0);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_1C6BC60(data, task);
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

  if ( (byte_4CB948C & 1) == 0 )
  {
    sub_1C6BA08(&ProgressIntervalTurnActionData_TypeInfo);
    byte_4CB948C = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1C6BC54(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1C6BC60(data, v5);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0, (BattleActionData_o *)v4, 0);
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
  if ( (byte_4CB9474 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicNomal_o *)sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB9474 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        v15 = sub_1C41D90(v9, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(BattleServantData_array *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
      if ( !v22 )
        sub_1C6BC60(0, v21);
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
          v26 = sub_1C41D90(v22, System_Collections_IEnumerator_TypeInfo, 0);
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
          v30 = sub_1C41D90(v22, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
        }
        v31 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
        v32 = v31;
        if ( v31 && BattleServantData__isAliveLogic(v31, 1, 0) )
        {
          AttackPhaseStartFunctionBuffList = BattleServantData__GetAttackPhaseStartFunctionBuffList(v32, 0);
          v35 = AttackPhaseStartFunctionBuffList;
          if ( !AttackPhaseStartFunctionBuffList )
            sub_1C6BC60(0, v34);
          v36 = AttackPhaseStartFunctionBuffList[3];
          if ( (int)v36 >= 1 )
          {
            v37 = 0;
            do
            {
              if ( v37 >= (unsigned int)v36 )
                sub_1C6BC68(AttackPhaseStartFunctionBuffList);
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
                v42 = sub_1C6BAB0(int___TypeInfo, 1);
                if ( !v42 )
                  sub_1C6BC60(0, v43);
                if ( !*(_DWORD *)(v42 + 24) )
                  sub_1C6BC68(v42);
                *(_DWORD *)(v42 + 32) = v32->fields.uniqueId;
                if ( !logicskill )
                  sub_1C6BC60(v42, v43);
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
                  sub_1C6BC60(v44, v44);
                System_Collections_Generic_List_object___AddRange(
                  v11,
                  v44,
                  (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
        v48 = sub_1C41D90(v22, System_IDisposable_TypeInfo, 0);
      }
      this = (BattleLogicNomal_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v22, *(_QWORD *)(v48 + 8));
      if ( v11 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_69:
    sub_1C6BC60(this, *(_QWORD *)&logicType);
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
    sub_1C41AF8(Method_System_Array_Empty_BattleLogicTask___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C41A9C(inited);
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
  const MethodInfo *v18; // x3

  if ( (byte_4CB9481 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_6424/*"FOCUS_UNDER"*/);
    sub_1C6BA08(&StringLiteral_6422/*"FOCUS_CENTER"*/);
    sub_1C6BA08(&StringLiteral_6426/*"FOCUS_UP"*/);
    byte_4CB9481 = 1;
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
    v8 = StringLiteral_6422/*"FOCUS_CENTER"*/;
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
        v8 = StringLiteral_6422/*"FOCUS_CENTER"*/;
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
      v14 = &StringLiteral_6424/*"FOCUS_UNDER"*/;
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
      v14 = &StringLiteral_6426/*"FOCUS_UP"*/;
    }
    v8 = *v14;
    v12->fields.globaltargetId = uniqueID;
LABEL_39:
    v6 = sub_1C6BC54(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0);
    if ( v6 )
    {
      v16 = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = v16;
      *(_DWORD *)(v6 + 36) = v16;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0);
      *(_QWORD *)(v6 + 72) = v8;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 72), v8, v17, v18);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_1C6BC60(data, method);
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
  if ( (byte_4CB9476 & 1) == 0 )
  {
    this = (BattleLogicNomal_o *)sub_1C6BA08(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4CB9476 = 1;
  }
  logic = v5->fields.logic;
  if ( !logic )
    sub_1C6BC60(this, *(_QWORD *)&logicType);
  logic->fields.isCheckInterruptMotionTask = 1;
  v7 = Method_System_Array_Empty_BattleLogicTask___;
  v8 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v8 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BattleLogicTask___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(inited);
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
  const MethodInfo *v7; // x3

  if ( (byte_4CB9477 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_4CB9477 = 1;
  }
  v3 = sub_1C6BC54(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26___ctor(
    (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *)v3,
    -2,
    0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v6, v7);
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
  const MethodInfo *v18; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB9479 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__);
    sub_1C6BA08(&BattleLogicNomal___c_TypeInfo);
    byte_4CB9479 = 1;
  }
  value = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_34870A0 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0), !v10) )
  {
LABEL_16:
    sub_1C6BC60(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
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
    _9__28_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__28_0,
      v15,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__28_0__,
      0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__28_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v17, v18);
  }
  System_Collections_Generic_List_object___Sort_58729528(
    v10,
    _9__28_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
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
    sub_1C6BC60(this, method);
  BattleFieldEnvironmentData__TurnBuffProgressingIncrease((BattleFieldEnvironmentData_o *)this, 0);
}


bool BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(0, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(0, method);
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
    sub_1C6BC60(data, isCheckNext);
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
  if ( (byte_4CB9482 & 1) == 0 )
  {
    buff = (BattleBuffData_BuffData_o *)sub_1C6BA08(&BuffList_TypeInfo);
    byte_4CB9482 = 1;
  }
  if ( !v2 )
    sub_1C6BC60(buff, method);
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

  if ( (byte_4CB9484 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9484 = 1;
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
          sub_1C6BC60(data, method);
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

  if ( (byte_4CB9475 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1C6BA08(&PlayerComboEndServantReactTaskCreator_TypeInfo);
    byte_4CB9475 = 1;
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
          v12 = (PlayerComboEndServantReactTaskCreator_o *)sub_1C6BC54(PlayerComboEndServantReactTaskCreator_TypeInfo);
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
      sub_1C6BC60(IsComboEnd, v7);
    }
  }
  v14 = Method_System_Array_Empty_BattleLogicTask___;
  v15 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v15 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BattleLogicTask___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C41A9C(inited);
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
  if ( (byte_4CB9485 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4CB9485 = 1;
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
      sub_1C41AF8(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C41A9C(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !v3 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C41AF8(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C41A9C(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_317503C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    sub_1C6BC60(data, prevFieldIndiv);
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
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v32; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB9489 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask___TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB9489 = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
              v17 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
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
              v20 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v20, 0);
              if ( !v20 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v20, v17, 0, 0);
              logic = this->fields.logic;
              Instance = sub_1C6BAB0(BattleLogicTask___TypeInfo, 1);
              if ( !Instance )
                goto LABEL_44;
              v22 = Instance;
              Instance = sub_1C6BB44(v20, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v32 = sub_1C6BC84(0);
                sub_1C6BB30(v32, 0);
              }
              if ( !*(_DWORD *)(v22 + 24) )
                break;
              *(_QWORD *)(v22 + 32) = v20;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v20, v23, v24);
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
              v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v20,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v20;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v20, v25, v26);
              }
              v13 = *(_DWORD *)(v14 + 24);
              if ( (int)++v15 >= v13 )
                goto LABEL_38;
            }
LABEL_45:
            sub_1C6BC68(Instance);
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
    sub_1C6BC60(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_4CB948E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4CB948E = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !commandCodeBuffList )
    sub_1C6BC60(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
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
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_1C6BC60(v16, v17);
    current = (BattleBuffData_BuffData_o *)v39.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1C6BC60(IsEnableCommandCode, v20);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1C6BC60(IsEnableCommandCode, v20);
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
          sub_1C6BC60(v21, v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_1C6BC60(v21, v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1C6BC68(v21);
        if ( max_length == 1 )
          sub_1C6BC68(v21);
        if ( !skillLvMst )
          sub_1C6BC60(v21, v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[0], vals->m_Items[1], 0);
        v27 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1C6BC60(Entity, v26);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_1C6BC60(Entity, v26);
          logicfunction = v37->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0);
          funcId = v27->fields.funcId;
          v31 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v27, 0);
          if ( !logicfunction )
            sub_1C6BC60(DataValsList, v33);
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
          sub_1C6BC60(0, v22);
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
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_4CB947B & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&StringLiteral_8740/*"MOTION_BACK"*/);
    byte_4CB947B = 1;
  }
  v5 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 32) = uniqueId,
        v10 = StringLiteral_8740/*"MOTION_BACK"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_8740/*"MOTION_BACK"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 72), v10, v8, v9),
        (data = this->fields.data) == 0) )
  {
    sub_1C6BC60(data, v7);
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
            sub_1C6BC68(data);
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
    sub_1C6BC60(data, task);
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
  System_Action_object__o *v13; // x21
  Il2CppObject *v14; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_4CB9488 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__);
    sub_1C6BA08(&BattleLogicNomal___c_TypeInfo);
    byte_4CB9488 = 1;
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
            sub_1C6BC68(data);
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
    sub_1C6BC60(data, task);
  }
LABEL_22:
  if ( v8 )
    goto LABEL_33;
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
    v13 = (System_Action_object__o *)sub_1C6BC54(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(v13, v14, Method_BattleLogicNomal___c__createBuffAddPlayer_b__49_0__, 0);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_AiNpcBattleServantData__o *)v13;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)v13, v16, v17);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v13,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  BattleLogicNomal__IncreaseFieldBuffParamOnTurnProgress(this, v18);
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
  int32_t v10; // w2
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

  if ( (byte_4CB947C & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&FunctionEntity_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_1C6BA08(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_1C6BA08(&StringLiteral_6408/*"FIELD_PLAYER"*/);
    sub_1C6BA08(&StringLiteral_6407/*"FIELD_ENEMY"*/);
    byte_4CB947C = 1;
  }
  v5 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_1C6BC54(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0);
  if ( BattleLogicTask__isArts(task, 0) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0);
    isBuster = sub_1C6BAB0(int___TypeInfo, 2);
    if ( isBuster )
    {
      v12 = *(_DWORD *)(isBuster + 24);
      v7 = isBuster;
      if ( !v12 || (*(_DWORD *)(isBuster + 32) = 102, v12 == 1) )
LABEL_30:
        sub_1C6BC68(isBuster);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBuster;
        v13 = (CGThumbnailListItem_o *)(v9 + 32);
LABEL_14:
        sub_1C6B9AC(v13, v7, v10, v11);
        v18 = &StringLiteral_6408/*"FIELD_PLAYER"*/;
LABEL_15:
        v19 = *v18;
        *(_QWORD *)(v5 + 72) = *v18;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 72), v19, v16, v17);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1C6BC60(isBuster, v7);
  }
  if ( BattleLogicTask__isQuick(task, 0) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0);
    v14 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 3);
    v15.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v14, v15, 0);
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
    v24 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 3);
    v25.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v24, v25, 0);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v24;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v24, v26, v27);
      v18 = &StringLiteral_6407/*"FIELD_ENEMY"*/;
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
    sub_1C6BC60(v5, v6);
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
  int v18; // w8
  __int64 v19; // x28
  unsigned int v20; // w20
  __int64 v21; // x21
  __int64 *v22; // x21
  __int64 v23; // t1
  BattleBuffData_BuffData_array *v24; // x29
  unsigned int v25; // w8
  struct System_Int32_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  BattleData_o *v29; // x21
  struct BattleData_o *v30; // x8
  __int64 v31; // x28
  unsigned int v32; // w27
  System_Collections_Generic_List_object__o *v33; // x29
  __int64 v34; // x23
  BattleServantData_o *v35; // x21
  __int64 *v36; // x23
  BattleServantData_o *v37; // t1
  char v38; // w20
  System_Int32_array *v39; // x25
  BattleLogic_o *logic; // x26
  System_Func_object__bool__o *v41; // x24
  int v42; // w21
  bool v43; // w3
  char v44; // w21
  Il2CppObject *v45; // x2
  BattleServantData_o *v46; // x21
  char v47; // w20
  System_Int32_array *v48; // x24
  BattleLogic_o *v49; // x25
  System_Func_object__bool__o *v50; // x26
  int32_t v51; // w21
  System_Object_array *v52; // x2
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  struct BaseBattleEvent_o *battleEvent; // x21
  struct BattleData_o *v57; // x8
  struct BattlePerformance_o *perf; // x9
  System_Collections_Generic_List_object__o *aiNpcDataList; // x21
  System_Action_object__o *v60; // x27
  const MethodInfo *v61; // x2
  struct BattleData_o *v62; // x8
  Il2CppObject *Entity; // x0
  __int64 v64; // x1
  Il2CppObject *value; // x24
  int32_t key; // w25
  int monitor; // w9
  int32_t v68; // w8
  char v69; // w23
  BattleBuffData_BuffData_o *v70; // x28
  BattleSkillInfoData_o *v71; // x26
  __int64 v72; // x0
  __int64 v73; // x1
  struct System_Int32_array *vals; // x8
  __int64 v75; // x0
  __int64 v76; // x1
  struct System_Int32_array *v77; // x8
  BattleServantData_o *ServantData; // x27
  __int64 v79; // x1
  SkillLvEntity_o *v80; // x0
  __int64 v81; // x1
  SkillLvEntity_o *v82; // x21
  _BOOL8 v83; // x0
  __int64 v84; // x1
  BattleLogic_o *v85; // x0
  int32_t v86; // w29
  __int64 v87; // x0
  __int64 v88; // x1
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v92; // x0
  __int64 v93; // x1
  System_Collections_ICollection_o *v94; // x0
  __int64 v95; // x1
  System_Collections_ICollection_o *v96; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v99; // x0
  __int64 v100; // x1
  int32_t v101; // w24
  Il2CppObject *v102; // x23
  BuffEntity_o *v103; // x0
  __int64 v104; // x1
  BattleServantData_o *v105; // x21
  BattleBuffData_CheckIndividualitiesData_o *v106; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v108; // w8
  int32_t v109; // w9
  BattleBuffData_BuffData_o *v110; // x26
  __int64 v111; // x1
  BattleSkillInfoData_o *v112; // x27
  __int64 v113; // x0
  __int64 v114; // x1
  struct System_Int32_array *v115; // x8
  __int64 v116; // x0
  __int64 v117; // x1
  struct System_Int32_array *v118; // x8
  BattleServantData_o *v119; // x28
  __int64 v120; // x1
  SkillLvEntity_o *v121; // x0
  __int64 v122; // x1
  SkillLvEntity_o *v123; // x21
  _BOOL8 v124; // x0
  __int64 v125; // x1
  BattleLogic_o *v126; // x0
  int32_t v127; // w29
  __int64 v128; // x0
  __int64 v129; // x1
  System_Int32_array *v130; // x21
  bool v131; // w28
  BattleLogicSkill_o *v132; // x29
  __int64 v133; // x0
  __int64 v134; // x1
  BattleLogicTask_array *v135; // x1
  BattleLogic_o *v136; // x0
  BattleActionData_o *v137; // x1
  System_Collections_Generic_Dictionary_int__object__o *v139; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__object__o *v140; // [xsp+28h] [xbp-F8h]
  System_Int32_array **v141; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_int__o *v142; // [xsp+38h] [xbp-E8h]
  BattleActionData_o *actiondata; // [xsp+40h] [xbp-E0h]
  char v144; // [xsp+4Ch] [xbp-D4h]
  __int64 v145; // [xsp+50h] [xbp-D0h]
  SkillLvMaster_o *v146; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v148; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v149; // [xsp+90h] [xbp-90h] BYREF
  int32_t targetIndex; // [xsp+BCh] [xbp-64h] BYREF

  if ( (byte_4CB9486 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C6BA08(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__);
    sub_1C6BA08(&BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_8752/*"MOTION_ENEMY_TURN_END"*/);
    byte_4CB9486 = 1;
  }
  targetIndex = 0;
  memset(&v149, 0, sizeof(v149));
  v3 = sub_1C6BC54(BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass46_0___ctor((BattleLogicNomal___c__DisplayClass46_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_235;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  actiondata = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_235;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v3 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_235;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_235;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !actiondata )
    goto LABEL_235;
  BattleActionData__setStateField(actiondata, 0);
  v9 = StringLiteral_8752/*"MOTION_ENEMY_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8752/*"MOTION_ENEMY_TURN_END"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&actiondata->fields.motionname, v9, v10, v11);
  v140 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v140,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v139 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v139,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_235;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  p_fields = &this->fields;
  data = this->fields.data;
  v146 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_235;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v3 + 24) = QuestIndividualities;
  v141 = (System_Int32_array **)(v3 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)QuestIndividualities, v15, v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_235;
  v18 = *(_DWORD *)(Instance + 24);
  v19 = Instance;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      v21 = v19 + 8LL * (int)v20;
      v23 = *(_QWORD *)(v21 + 32);
      v22 = (__int64 *)(v21 + 32);
      Instance = v23;
      if ( !v23 )
        goto LABEL_235;
      if ( *(_BYTE *)(Instance + 564) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v3 + 16),
                              *(System_Int32_array **)(v3 + 24),
                              this->fields.logic,
                              0,
                              0);
        if ( v20 >= *(_DWORD *)(v19 + 24) )
          break;
        v24 = (BattleBuffData_BuffData_array *)Instance;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_235;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v20 >= *(_DWORD *)(v19 + 24) )
            break;
          Instance = *v22;
          if ( !*v22 )
            goto LABEL_235;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_235;
            if ( v24->max_length )
            {
              if ( v20 >= *(_DWORD *)(v19 + 24) )
                break;
              Instance = (__int64)v140;
              if ( !*v22 || !v140 )
                goto LABEL_235;
              System_Collections_Generic_Dictionary_int__object___Add(
                v140,
                *(_DWORD *)(*v22 + 24),
                &v24->obj,
                (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v25 = *(_DWORD *)(v19 + 24);
        if ( v20 >= v25 )
          break;
        if ( !*v22 )
          goto LABEL_235;
        if ( !v17 )
          goto LABEL_235;
        v5 = *(unsigned int *)(*v22 + 24);
        items = v17->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_235;
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v5,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          v25 = *(_DWORD *)(v19 + 24);
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
        if ( v20 >= v25 )
          break;
        Instance = *v22;
        if ( !*v22 )
          goto LABEL_235;
        v29 = p_fields->data;
        Instance = (__int64)BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        if ( !v29 )
          goto LABEL_235;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v29, (BattleBuffData_o *)Instance, v24, 0);
      }
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v20 >= v18 )
        goto LABEL_41;
    }
LABEL_238:
    sub_1C6BC68(Instance);
  }
LABEL_41:
  Instance = (__int64)p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v30 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  v31 = Instance;
  if ( v30->fields.leaderDown && v30->fields.endbattleFlg )
  {
    v144 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_235;
    v142 = v17;
    if ( *(int *)(Instance + 24) >= 1 )
    {
      v32 = 0;
      v144 = 0;
      v145 = v3;
      while ( 1 )
      {
        v33 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v33,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_238;
        v34 = v31 + 8LL * (int)v32;
        v37 = *(BattleServantData_o **)(v34 + 32);
        v36 = (__int64 *)(v34 + 32);
        v35 = v37;
        if ( !v37 )
          goto LABEL_235;
        if ( v35->fields.isBuffProgressFlg )
        {
          v38 = *(_BYTE *)(v3 + 16);
          v39 = *(System_Int32_array **)(v3 + 24);
          logic = this->fields.logic;
          v41 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v41, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v35,
                                v38,
                                v39,
                                logic,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v41,
                                0);
          if ( !v33 )
            goto LABEL_235;
          System_Collections_Generic_List_object___AddRange(
            v33,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_238;
          Instance = *v36;
          v3 = v145;
          if ( !*v36 )
            goto LABEL_235;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 464LL));
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_238;
          v42 = Instance;
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_235;
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 528LL));
          if ( v42 != (_DWORD)Instance )
          {
            if ( v32 >= *(_DWORD *)(v31 + 24) )
              goto LABEL_238;
            Instance = *v36;
            if ( !*v36 )
              goto LABEL_235;
            BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
          }
        }
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_238;
        Instance = *v36;
        if ( !*v36 )
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
            v43 = 1;
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
              v43 = Instance & 1;
            }
            else
            {
              v43 = 0;
            }
          }
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_238;
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_235;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *v141,
                       this->fields.logic,
                       v43,
                       actiondata,
                       0);
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_238;
          v44 = Instance;
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_235;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v32 >= *(_DWORD *)(v31 + 24) )
              goto LABEL_238;
            Instance = *v36;
            if ( !*v36 )
              goto LABEL_235;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_235;
            v45 = (Il2CppObject *)Instance;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v32 >= *(_DWORD *)(v31 + 24) )
                goto LABEL_238;
              Instance = (__int64)v139;
              if ( !*v36 || !v139 )
                goto LABEL_235;
              System_Collections_Generic_Dictionary_int__object___Add(
                v139,
                *(_DWORD *)(*v36 + 24),
                v45,
                (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_238;
          if ( !*v36 )
            goto LABEL_235;
          Instance = *(_QWORD *)(*v36 + 816);
          if ( !Instance )
            goto LABEL_235;
          v144 |= v44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
        }
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_238;
        v46 = (BattleServantData_o *)*v36;
        if ( !*v36 )
          goto LABEL_235;
        if ( v46->fields.isBuffProgressFlg )
        {
          v47 = *(_BYTE *)(v3 + 16);
          v48 = *(System_Int32_array **)(v3 + 24);
          v49 = this->fields.logic;
          v50 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(v50, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                v46,
                                v47,
                                v48,
                                v49,
                                (System_Func_BattleBuffData_BuffData__bool__o *)v50,
                                0);
          if ( !v33 )
            goto LABEL_235;
          System_Collections_Generic_List_object___AddRange(
            v33,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_238;
          Instance = *v36;
          v3 = v145;
          if ( !*v36 )
            goto LABEL_235;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v32 >= *(_DWORD *)(v31 + 24) )
              goto LABEL_238;
            Instance = *v36;
            if ( !*v36 )
              goto LABEL_235;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33, 0);
              if ( (Instance & 1) == 0 )
              {
                if ( v32 >= *(_DWORD *)(v31 + 24) )
                  goto LABEL_238;
                if ( !*v36 )
                  goto LABEL_235;
                v51 = *(_DWORD *)(*v36 + 24);
                v52 = System_Collections_Generic_List_object___ToArray(
                        v33,
                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                Instance = (__int64)v140;
                if ( !v140 )
                  goto LABEL_235;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v140,
                  v51,
                  &v52->obj,
                  (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_238;
          if ( !*v36 )
            goto LABEL_235;
          Instance = (__int64)v142;
          if ( !v142 )
            goto LABEL_235;
          v5 = *(unsigned int *)(*v36 + 24);
          v53 = v142->fields._items;
          v54 = Method_System_Collections_Generic_List_int__Add__;
          ++v142->fields._version;
          if ( !v53 )
            goto LABEL_235;
          v55 = v142->fields._size;
          if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v142,
              v5,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v142->fields._size = v55 + 1;
            v53->m_Items[v55] = v5;
          }
        }
        if ( (signed int)++v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_120;
      }
    }
    v144 = 0;
LABEL_120:
    v30 = p_fields->data;
    v17 = v142;
    if ( !p_fields->data )
      goto LABEL_235;
  }
  if ( !v17 )
    goto LABEL_235;
  battleEvent = v30->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v17,
                        (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_235;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v3 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v57 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_235;
  perf = v57->fields.perf;
  if ( !perf )
    goto LABEL_235;
  Instance = (__int64)v57->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_235;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  if ( !p_fields->data )
    goto LABEL_235;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)p_fields->data->fields.aiNpcDataList;
  v60 = (System_Action_object__o *)sub_1C6BC54(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v60,
    (Il2CppObject *)v3,
    Method_BattleLogicNomal___c__DisplayClass46_0__createEndTurnEnemy_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_235;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v60,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  BattleLogicNomal__UpdateEndTurnBuff(this, *v141, v61);
  v62 = this->fields.data;
  if ( !v62 )
    goto LABEL_235;
  Instance = (__int64)v139;
  v62->fields.currentTurn = 0;
  if ( !v139 )
    goto LABEL_235;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v148,
    v139,
    (const MethodInfo_3452928 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v149 = v148;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v149,
                               (const MethodInfo_35AA310 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v149.fields._current.fields.value;
    key = (int32_t)v149.fields._current.fields.key;
    targetIndex = 0;
    if ( !v149.fields._current.fields.value )
      sub_1C6BC60(Entity, v64);
    monitor = (int)v149.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      v68 = 0;
      v69 = 1;
LABEL_138:
      if ( v68 >= (unsigned int)monitor )
        sub_1C6BC68(Entity);
      v70 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v68);
      if ( !v70 )
        sub_1C6BC60(Entity, v64);
      if ( v70->fields._isRemove )
        goto LABEL_174;
      if ( !v8 )
        sub_1C6BC60(Entity, v64);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v8,
                 v70->fields.buffId,
                 (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_174;
      v71 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v71, 0);
      if ( !v71 )
        sub_1C6BC60(v72, v73);
      v71->fields.svtUniqueId = key;
      vals = v70->fields.vals;
      if ( !vals )
        sub_1C6BC60(v72, v73);
      if ( !LODWORD(vals->max_length) )
        sub_1C6BC68(v72);
      v75 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v71->klass->vtable._4_set_skillId.methodPtr)(
              v71,
              (unsigned int)vals->m_Items[0],
              v71->klass->vtable._4_set_skillId.method);
      v77 = v70->fields.vals;
      if ( !v77 )
        sub_1C6BC60(v75, v76);
      if ( LODWORD(v77->max_length) <= 1 )
        sub_1C6BC68(v75);
      v71->fields.skilllv = v77->m_Items[1];
      if ( !p_fields->data )
        sub_1C6BC60(0, v76);
      ServantData = BattleData__getServantData(p_fields->data, v71->fields.svtUniqueId, 0);
      v79 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v71->klass->vtable._5_get_skillId.methodPtr)(
              v71,
              v71->klass->vtable._5_get_skillId.method);
      if ( !v146 )
        sub_1C6BC60(0, v79);
      v80 = SkillLvMaster__GetEntity(v146, v79, v71->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C6BC60(v80, v81);
      v82 = v80;
      if ( !p_fields->data )
        sub_1C6BC60(0, v81);
      v83 = BattleData__checkAliveOther(p_fields->data, ServantData->fields.uniqueId, 0);
      if ( !v83 )
      {
        if ( !v82 )
          sub_1C6BC60(v83, v84);
        v85 = this->fields.logic;
        if ( !v85 )
          sub_1C6BC60(0, v84);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v85, v82->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_174;
      }
      v86 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v70, 0);
      if ( v86 < 0 )
      {
        TargetIds = Target__getTargetIds(p_fields->data, v71->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v71, 0);
      }
      else
      {
        v87 = sub_1C6BAB0(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v87;
        if ( !v87 )
          sub_1C6BC60(0, v88);
        if ( !*(_DWORD *)(v87 + 24) )
          sub_1C6BC68(v87);
        exists = 0;
        *(_DWORD *)(v87 + 32) = v86;
      }
      logicskill = this->fields.logicskill;
      v92 = sub_1C6BAB0(int___TypeInfo, 1);
      if ( !v92 )
        sub_1C6BC60(0, v93);
      if ( !*(_DWORD *)(v92 + 24) )
        sub_1C6BC68(v92);
      *(_DWORD *)(v92 + 32) = key;
      if ( !logicskill )
        sub_1C6BC60(v92, v93);
      v94 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                  logicskill,
                                                  v71,
                                                  (System_Int32_array *)v92,
                                                  TargetIds,
                                                  1,
                                                  exists,
                                                  0,
                                                  0,
                                                  0,
                                                  0);
      v96 = v94;
      if ( (v69 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v94, 0);
        if ( IsNullOrEmpty )
        {
          v69 = 1;
          goto LABEL_172;
        }
        if ( !v96 )
          sub_1C6BC60(IsNullOrEmpty, v95);
        if ( !LODWORD(v96[1].monitor) )
          sub_1C6BC68(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v96[2].klass;
        if ( !klass )
          sub_1C6BC60(0, v95);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v69 = 0;
LABEL_172:
      v99 = this->fields.logic;
      if ( !v99 )
        sub_1C6BC60(0, v95);
      BattleLogic__addBattleLogicTask(v99, (BattleLogicTask_array *)v96, 0);
LABEL_174:
      v68 = targetIndex + 1;
      targetIndex = v68;
      monitor = (int)value[1].monitor;
      if ( v68 >= monitor )
        continue;
      goto LABEL_138;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v149,
    (const MethodInfo_35AA434 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v140;
  if ( !v140 )
    goto LABEL_235;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v148,
    v140,
    (const MethodInfo_3452928 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v149 = v148;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v149,
            (const MethodInfo_35AA310 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1C6BC60(0, v100);
    v101 = (int32_t)v149.fields._current.fields.key;
    v102 = v149.fields._current.fields.value;
    v103 = (BuffEntity_o *)BattleData__getServantData(p_fields->data, (int32_t)v149.fields._current.fields.key, 0);
    v105 = (BattleServantData_o *)v103;
    if ( v103 )
    {
      v106 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45921048(v106, v105, 0, 0, 0, 0, 0, 1, 0);
      if ( !v106 )
        sub_1C6BC60(v103, v104);
      selfConcatSvtIndividualities_k__BackingField = v106->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
    }
    targetIndex = 0;
    if ( !v102 )
      sub_1C6BC60(v103, v104);
    v108 = (int)v102[1].monitor;
    if ( v108 >= 1 )
    {
      v109 = 0;
      do
      {
        if ( v109 >= (unsigned int)v108 )
          sub_1C6BC68(v103);
        v110 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v102[2].klass + v109);
        if ( !v110 )
          sub_1C6BC60(v103, v104);
        if ( !v110->fields._isRemove )
        {
          if ( !v8 )
            sub_1C6BC60(v103, v104);
          v103 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v8,
                                   v110->fields.buffId,
                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v103 )
          {
            if ( BuffEntity__isEndAct(v103, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v110, 1, 0) )
            {
              v112 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v112, 0);
              if ( !v112 )
                sub_1C6BC60(v113, v114);
              v112->fields.svtUniqueId = v101;
              v115 = v110->fields.vals;
              if ( !v115 )
                sub_1C6BC60(v113, v114);
              if ( !LODWORD(v115->max_length) )
                sub_1C6BC68(v113);
              v116 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v112->klass->vtable._4_set_skillId.methodPtr)(
                       v112,
                       (unsigned int)v115->m_Items[0],
                       v112->klass->vtable._4_set_skillId.method);
              v118 = v110->fields.vals;
              if ( !v118 )
                sub_1C6BC60(v116, v117);
              if ( LODWORD(v118->max_length) <= 1 )
                sub_1C6BC68(v116);
              v112->fields.skilllv = v118->m_Items[1];
              if ( !p_fields->data )
                sub_1C6BC60(0, v117);
              v119 = BattleData__getServantData(p_fields->data, v112->fields.svtUniqueId, 0);
              v120 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v112->klass->vtable._5_get_skillId.methodPtr)(
                       v112,
                       v112->klass->vtable._5_get_skillId.method);
              if ( !v146 )
                sub_1C6BC60(0, v120);
              v121 = SkillLvMaster__GetEntity(v146, v120, v112->fields.skilllv, 0);
              if ( !v119 )
                sub_1C6BC60(v121, v122);
              v123 = v121;
              if ( !p_fields->data )
                sub_1C6BC60(0, v122);
              v124 = BattleData__checkAliveOther(p_fields->data, v119->fields.uniqueId, 0);
              if ( v124 )
                goto LABEL_207;
              if ( !v123 )
                sub_1C6BC60(v124, v125);
              v126 = this->fields.logic;
              if ( !v126 )
                sub_1C6BC60(0, v125);
              if ( BattleLogic__checkPtTargetFunction(v126, v123->fields.funcId, 0) )
              {
LABEL_207:
                v127 = BattleServantData__GetRevengeIdCheckOpponentOnly(v119, v110, 0);
                if ( v127 < 0 )
                {
                  v130 = Target__getTargetIds(p_fields->data, v112->fields.svtUniqueId, -1, v101, 13, 0, 0);
                  v131 = BattleSkillInfoData__ExistsNoTargetNoActionType(v112, 0);
                }
                else
                {
                  v128 = sub_1C6BAB0(int___TypeInfo, 1);
                  v130 = (System_Int32_array *)v128;
                  if ( !v128 )
                    sub_1C6BC60(0, v129);
                  if ( !*(_DWORD *)(v128 + 24) )
                    sub_1C6BC68(v128);
                  v131 = 0;
                  *(_DWORD *)(v128 + 32) = v127;
                }
                v132 = this->fields.logicskill;
                v133 = sub_1C6BAB0(int___TypeInfo, 1);
                if ( !v133 )
                  sub_1C6BC60(0, v134);
                if ( !*(_DWORD *)(v133 + 24) )
                  sub_1C6BC68(v133);
                *(_DWORD *)(v133 + 32) = v101;
                if ( !v132 )
                  sub_1C6BC60(v133, v134);
                v135 = BattleLogicSkill__taskSkill(v132, v112, (System_Int32_array *)v133, v130, 1, v131, 0, 0, 0, 0);
                v136 = this->fields.logic;
                if ( !v136 )
                  sub_1C6BC60(0, v135);
                BattleLogic__addBattleLogicTask(v136, v135, 0);
              }
            }
            if ( !p_fields->data )
              sub_1C6BC60(0, v111);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(p_fields->data, v110, 0);
          }
        }
        v109 = targetIndex + 1;
        targetIndex = v109;
        v108 = (int)v102[1].monitor;
      }
      while ( v109 < v108 );
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v149,
    (const MethodInfo_35AA434 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v140, 0);
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
    sub_1C6BC60(Instance, v5);
  }
  if ( (v144 & 1) != 0 )
    v137 = actiondata;
  else
    v137 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v137, actiondata, 0);
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
  __int64 v21; // x26
  BattleServantData_o *v22; // x21
  __int64 *v23; // x26
  BattleServantData_o *v24; // t1
  BattleLogic_o *logic; // x27
  char v26; // w20
  System_Int32_array *v27; // x25
  System_Func_object__bool__o *v28; // x24
  int v29; // w21
  bool v30; // w3
  char v31; // w21
  Il2CppObject *v32; // x2
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
  Il2CppObject *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v71; // w23
  char v72; // w20
  BattleBuffData_BuffData_o *v73; // x28
  BattleSkillInfoData_o *v74; // x26
  __int64 v75; // x0
  __int64 v76; // x1
  struct System_Int32_array *vals; // x8
  __int64 v78; // x0
  __int64 v79; // x1
  struct System_Int32_array *v80; // x8
  BattleData_o *v81; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v83; // x1
  SkillLvEntity_o *v84; // x0
  __int64 v85; // x1
  SkillLvEntity_o *v86; // x21
  BattleData_o *v87; // x0
  _BOOL8 v88; // x0
  __int64 v89; // x1
  BattleLogic_o *v90; // x0
  int32_t v91; // w29
  __int64 v92; // x0
  __int64 v93; // x1
  System_Int32_array *TargetIds; // x21
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x29
  __int64 v97; // x0
  __int64 v98; // x1
  System_Collections_ICollection_o *v99; // x0
  __int64 v100; // x1
  System_Collections_ICollection_o *v101; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *klass; // x0
  BattleLogic_o *v104; // x0
  __int64 v105; // x1
  BattleData_o *v106; // x0
  int32_t v107; // w24
  Il2CppObject *v108; // x23
  BuffEntity_o *v109; // x0
  __int64 v110; // x1
  BattleServantData_o *v111; // x21
  BattleBuffData_CheckIndividualitiesData_o *v112; // x25
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x25
  int v114; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v116; // x26
  __int64 v117; // x1
  BattleSkillInfoData_o *v118; // x27
  __int64 v119; // x0
  __int64 v120; // x1
  struct System_Int32_array *v121; // x8
  __int64 v122; // x0
  __int64 v123; // x1
  struct System_Int32_array *v124; // x8
  BattleData_o *v125; // x0
  BattleServantData_o *v126; // x28
  __int64 v127; // x1
  SkillLvEntity_o *v128; // x0
  __int64 v129; // x1
  SkillLvEntity_o *v130; // x21
  BattleData_o *v131; // x0
  _BOOL8 v132; // x0
  __int64 v133; // x1
  BattleLogic_o *v134; // x0
  int32_t v135; // w29
  __int64 v136; // x0
  __int64 v137; // x1
  System_Int32_array *v138; // x21
  bool v139; // w28
  BattleLogicSkill_o *v140; // x29
  __int64 v141; // x0
  __int64 v142; // x1
  BattleLogicTask_array *v143; // x1
  BattleLogic_o *v144; // x0
  BattleData_o *v145; // x0
  struct BattleData_o *v146; // x8
  BattleActionData_o *v147; // x1
  System_Collections_Generic_Dictionary_int__object__o *v149; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v150; // [xsp+20h] [xbp-F0h]
  System_Int32_array **v151; // [xsp+28h] [xbp-E8h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-E0h]
  char v153; // [xsp+3Ch] [xbp-D4h]
  System_Collections_Generic_List_int__o *v154; // [xsp+40h] [xbp-D0h]
  __int64 v155; // [xsp+48h] [xbp-C8h]
  SkillLvMaster_o *v156; // [xsp+50h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v157; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v158; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4CB9483 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__);
    sub_1C6BA08(&Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__);
    sub_1C6BA08(&BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_8762/*"MOTION_PLAYER_TURN_END"*/);
    byte_4CB9483 = 1;
  }
  memset(&v158, 0, sizeof(v158));
  v4 = sub_1C6BC54(BattleLogicNomal___c__DisplayClass43_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass43_0___ctor((BattleLogicNomal___c__DisplayClass43_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_225;
  *(_QWORD *)(v4 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)this, v7, v8);
  BattleLogicNomal__SetNextTargetId(this, v9);
  baseActData = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0);
  *(_BYTE *)(v4 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_225;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_225;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0);
  if ( !baseActData )
    goto LABEL_225;
  BattleActionData__setStateField(baseActData, 0);
  v11 = StringLiteral_8762/*"MOTION_PLAYER_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8762/*"MOTION_PLAYER_TURN_END"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&baseActData->fields.motionname, v11, v12, v13);
  v150 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v150,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v149 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v149,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v156 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_225;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  v151 = (System_Int32_array **)(v4 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)QuestIndividualities, v16, v17);
  v154 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v154,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_225;
  v18 = Instance;
  v155 = v4;
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v19 = 0;
    v153 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v20,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( v19 >= *(_DWORD *)(v18 + 24) )
        break;
      v21 = v18 + 8LL * (int)v19;
      v24 = *(BattleServantData_o **)(v21 + 32);
      v23 = (__int64 *)(v21 + 32);
      v22 = v24;
      if ( !v24 )
        goto LABEL_225;
      if ( v22->fields.isBuffProgressFlg )
      {
        logic = this->fields.logic;
        v26 = *(_BYTE *)(v155 + 16);
        v27 = *(System_Int32_array **)(v155 + 24);
        v28 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v28, 0, Method_BattleLogicNomal_IsRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v22,
                              v26,
                              v27,
                              logic,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v28,
                              0);
        if ( !v20 )
          goto LABEL_225;
        System_Collections_Generic_List_object___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_225;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 456LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 464LL));
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        v29 = Instance;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_225;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 520LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 528LL));
        if ( v29 != (_DWORD)Instance )
        {
          if ( v19 >= *(_DWORD *)(v18 + 24) )
            break;
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_225;
          BattleServantData__updateResultState((BattleServantData_o *)Instance, 0);
        }
      }
      if ( v19 >= *(_DWORD *)(v18 + 24) )
        break;
      Instance = *v23;
      if ( !*v23 )
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
          v30 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_225;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0);
          v30 = Instance & 1;
        }
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_225;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *v151,
                     this->fields.logic,
                     v30,
                     baseActData,
                     0);
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        v31 = Instance;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_225;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v19 >= *(_DWORD *)(v18 + 24) )
            break;
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_225;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_225;
          v32 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v19 >= *(_DWORD *)(v18 + 24) )
              break;
            Instance = (__int64)v149;
            if ( !*v23 || !v149 )
              goto LABEL_225;
            System_Collections_Generic_Dictionary_int__object___Add(
              v149,
              *(_DWORD *)(*v23 + 24),
              v32,
              (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        if ( !*v23 )
          goto LABEL_225;
        Instance = *(_QWORD *)(*v23 + 816);
        if ( !Instance )
          goto LABEL_225;
        v153 |= v31;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0);
      }
      if ( v19 >= *(_DWORD *)(v18 + 24) )
        break;
      v33 = (BattleServantData_o *)*v23;
      if ( !*v23 )
        goto LABEL_225;
      if ( v33->fields.isBuffProgressFlg )
      {
        v34 = this->fields.logic;
        v35 = *(_BYTE *)(v155 + 16);
        v36 = *(System_Int32_array **)(v155 + 24);
        v37 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(v37, 0, Method_BattleLogicNomal_IsNotRelatedToUpdateHpBuffType__, 0);
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              v33,
                              v35,
                              v36,
                              v34,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v37,
                              0);
        if ( !v20 )
          goto LABEL_225;
        System_Collections_Generic_List_object___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          break;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_225;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v19 >= *(_DWORD *)(v18 + 24) )
            break;
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_225;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v20, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( v19 >= *(_DWORD *)(v18 + 24) )
                break;
              if ( !*v23 )
                goto LABEL_225;
              v38 = *(_DWORD *)(*v23 + 24);
              v39 = System_Collections_Generic_List_object___ToArray(
                      v20,
                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
              Instance = (__int64)v150;
              if ( !v150 )
                goto LABEL_225;
              System_Collections_Generic_Dictionary_int__object___Add(
                v150,
                v38,
                &v39->obj,
                (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        v40 = *(_DWORD *)(v18 + 24);
        if ( v19 >= v40 )
          break;
        Instance = (__int64)v154;
        if ( !*v23 )
          goto LABEL_225;
        if ( !v154 )
          goto LABEL_225;
        v6 = *(unsigned int *)(*v23 + 24);
        items = v154->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v154->fields._version;
        if ( !items )
          goto LABEL_225;
        size = v154->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v154,
            v6,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          v40 = *(_DWORD *)(v18 + 24);
        }
        else
        {
          v154->fields._size = size + 1;
          items->m_Items[size] = v6;
        }
        if ( v19 >= v40 )
          break;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_225;
        v44 = this->fields.data;
        BuffData = BattleServantData__get_BuffData((BattleServantData_o *)Instance, 0);
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v20,
                              (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v44 )
          goto LABEL_225;
        BattleData__AddCurTurnApplyMasterSkillTurnBuffArray(v44, BuffData, (BattleBuffData_BuffData_array *)Instance, 0);
      }
      if ( (signed int)++v19 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_80;
    }
LABEL_228:
    sub_1C6BC68(Instance);
  }
  v153 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_225;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0);
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_225;
  v47 = Instance;
  Instance = (__int64)v154;
  if ( !v46->fields.leaderDown || !v46->fields.endbattleFlg )
  {
    if ( !v47 )
      goto LABEL_225;
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
          goto LABEL_225;
        if ( *(_BYTE *)(Instance + 564) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v155 + 16),
                                *(System_Int32_array **)(v155 + 24),
                                this->fields.logic,
                                0,
                                0);
          if ( v49 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_228;
          v53 = (Il2CppObject *)Instance;
          Instance = *v51;
          if ( !*v51 )
            goto LABEL_225;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v49 >= *(_DWORD *)(v47 + 24) )
              goto LABEL_228;
            Instance = *v51;
            if ( !*v51 )
              goto LABEL_225;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v53 )
                goto LABEL_225;
              if ( v53[1].monitor )
              {
                if ( v49 >= *(_DWORD *)(v47 + 24) )
                  goto LABEL_228;
                Instance = (__int64)v150;
                if ( !*v51 || !v150 )
                  goto LABEL_225;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v150,
                  *(_DWORD *)(*v51 + 24),
                  v53,
                  (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v49 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_228;
          Instance = (__int64)v154;
          if ( !*v51 )
            goto LABEL_225;
          if ( !v154 )
            goto LABEL_225;
          v6 = *(unsigned int *)(*v51 + 24);
          v54 = v154->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++v154->fields._version;
          if ( !v54 )
            goto LABEL_225;
          v56 = v154->fields._size;
          if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v154,
              v6,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v154->fields._size = v56 + 1;
            v54->m_Items[v56] = v6;
          }
        }
        v48 = *(_DWORD *)(v47 + 24);
        if ( (int)++v49 >= v48 )
          goto LABEL_110;
      }
      goto LABEL_228;
    }
LABEL_110:
    v46 = this->fields.data;
    Instance = (__int64)v154;
    if ( !v46 )
      goto LABEL_225;
  }
  if ( !Instance )
    goto LABEL_225;
  battleEvent = v46->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_225;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, const MethodInfo *))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v155 + 16),
               battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method);
  v58 = this->fields.data;
  if ( !v58 )
    goto LABEL_225;
  perf = v58->fields.perf;
  if ( !perf )
    goto LABEL_225;
  Instance = (__int64)v58->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_225;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0);
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_225;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v60->fields.aiNpcDataList;
  v62 = (System_Action_object__o *)sub_1C6BC54(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v62,
    (Il2CppObject *)v155,
    Method_BattleLogicNomal___c__DisplayClass43_0__createEndTurnPlayer_b__0__,
    0);
  if ( !aiNpcDataList )
    goto LABEL_225;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v62,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v63 = this->fields.data;
  if ( !v63 )
    goto LABEL_225;
  Instance = (__int64)v63->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_225;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v155 + 16),
    0);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v155 + 24), v64);
  v65 = this->fields.data;
  if ( !v65 )
    goto LABEL_225;
  Instance = (__int64)v149;
  v65->fields.currentTurn = 1;
  if ( !v149 )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v157,
    v149,
    (const MethodInfo_3452928 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v158 = v157;
  while ( 1 )
  {
    Entity = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                               &v158,
                               (const MethodInfo_35AA310 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)Entity & 1) == 0 )
      break;
    value = v158.fields._current.fields.value;
    if ( !v158.fields._current.fields.value )
      sub_1C6BC60(Entity, v67);
    monitor = (int)v158.fields._current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v158.fields._current.fields.key;
      v71 = 0;
      v72 = 1;
LABEL_127:
      if ( v71 >= monitor )
        sub_1C6BC68(Entity);
      v73 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + (int)v71);
      if ( !v73 )
        sub_1C6BC60(Entity, v67);
      if ( v73->fields._isRemove )
        goto LABEL_163;
      if ( !v10 )
        sub_1C6BC60(Entity, v67);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 v73->fields.buffId,
                 (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_163;
      v74 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v74, 0);
      if ( !v74 )
        sub_1C6BC60(v75, v76);
      v74->fields.svtUniqueId = key;
      vals = v73->fields.vals;
      if ( !vals )
        sub_1C6BC60(v75, v76);
      if ( !LODWORD(vals->max_length) )
        sub_1C6BC68(v75);
      v78 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v74->klass->vtable._4_set_skillId.methodPtr)(
              v74,
              (unsigned int)vals->m_Items[0],
              v74->klass->vtable._4_set_skillId.method);
      v80 = v73->fields.vals;
      if ( !v80 )
        sub_1C6BC60(v78, v79);
      if ( LODWORD(v80->max_length) <= 1 )
        sub_1C6BC68(v78);
      v74->fields.skilllv = v80->m_Items[1];
      v81 = this->fields.data;
      if ( !v81 )
        sub_1C6BC60(0, v79);
      ServantData = BattleData__getServantData(v81, v74->fields.svtUniqueId, 0);
      v83 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v74->klass->vtable._5_get_skillId.methodPtr)(
              v74,
              v74->klass->vtable._5_get_skillId.method);
      if ( !v156 )
        sub_1C6BC60(0, v83);
      v84 = SkillLvMaster__GetEntity(v156, v83, v74->fields.skilllv, 0);
      if ( !ServantData )
        sub_1C6BC60(v84, v85);
      v86 = v84;
      v87 = this->fields.data;
      if ( !v87 )
        sub_1C6BC60(0, v85);
      v88 = BattleData__checkAliveOther(v87, ServantData->fields.uniqueId, 0);
      if ( !v88 )
      {
        if ( !v86 )
          sub_1C6BC60(v88, v89);
        v90 = this->fields.logic;
        if ( !v90 )
          sub_1C6BC60(0, v89);
        Entity = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v90, v86->fields.funcId, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_163;
      }
      v91 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v73, 0);
      if ( v91 < 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v74->fields.svtUniqueId, -1, key, 13, 0, 0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v74, 0);
      }
      else
      {
        v92 = sub_1C6BAB0(int___TypeInfo, 1);
        TargetIds = (System_Int32_array *)v92;
        if ( !v92 )
          sub_1C6BC60(0, v93);
        if ( !*(_DWORD *)(v92 + 24) )
          sub_1C6BC68(v92);
        exists = 0;
        *(_DWORD *)(v92 + 32) = v91;
      }
      logicskill = this->fields.logicskill;
      v97 = sub_1C6BAB0(int___TypeInfo, 1);
      if ( !v97 )
        sub_1C6BC60(0, v98);
      if ( !*(_DWORD *)(v97 + 24) )
        sub_1C6BC68(v97);
      *(_DWORD *)(v97 + 32) = key;
      if ( !logicskill )
        sub_1C6BC60(v97, v98);
      v99 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                  logicskill,
                                                  v74,
                                                  (System_Int32_array *)v97,
                                                  TargetIds,
                                                  1,
                                                  exists,
                                                  0,
                                                  0,
                                                  0,
                                                  0);
      v101 = v99;
      if ( (v72 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v99, 0);
        if ( IsNullOrEmpty )
        {
          v72 = 1;
          goto LABEL_161;
        }
        if ( !v101 )
          sub_1C6BC60(IsNullOrEmpty, v100);
        if ( !LODWORD(v101[1].monitor) )
          sub_1C6BC68(IsNullOrEmpty);
        klass = (BattleLogicTask_o *)v101[2].klass;
        if ( !klass )
          sub_1C6BC60(0, v100);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(klass, ServantData, (BattleBuffData_BuffData_array *)value, 0);
      }
      v72 = 0;
LABEL_161:
      v104 = this->fields.logic;
      if ( !v104 )
        sub_1C6BC60(0, v100);
      BattleLogic__addBattleLogicTask(v104, (BattleLogicTask_array *)v101, 0);
LABEL_163:
      monitor = (int)value[1].monitor;
      if ( (int)++v71 >= monitor )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v158,
    (const MethodInfo_35AA434 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v150;
  if ( !v150 )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v157,
    v150,
    (const MethodInfo_3452928 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v158 = v157;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v158,
            (const MethodInfo_35AA310 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v106 = this->fields.data;
    if ( !v106 )
      sub_1C6BC60(0, v105);
    v107 = (int32_t)v158.fields._current.fields.key;
    v108 = v158.fields._current.fields.value;
    v109 = (BuffEntity_o *)BattleData__getServantData(v106, (int32_t)v158.fields._current.fields.key, 0);
    v111 = (BattleServantData_o *)v109;
    if ( v109 )
    {
      v112 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45921048(v112, v111, 0, 0, 0, 0, 0, 1, 0);
      if ( !v112 )
        sub_1C6BC60(v109, v110);
      selfConcatSvtIndividualities_k__BackingField = v112->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v108 )
LABEL_257:
        sub_1C6BC60(v109, v110);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0;
      if ( !v108 )
        goto LABEL_257;
    }
    v114 = (int)v108[1].monitor;
    if ( v114 >= 1 )
    {
      for ( i = 0; i < v114; ++i )
      {
        if ( i >= (unsigned int)v114 )
          sub_1C6BC68(v109);
        v116 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v108[2].klass + i);
        if ( !v116 )
          sub_1C6BC60(v109, v110);
        if ( !v116->fields._isRemove )
        {
          if ( !v10 )
            sub_1C6BC60(v109, v110);
          v109 = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v10,
                                   v116->fields.buffId,
                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( v109 )
          {
            if ( BuffEntity__isEndAct(v109, selfConcatSvtIndividualities_k__BackingField, 0)
              && BattleBuffData_BuffData__checkAct(v116, 1, 0) )
            {
              v118 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v118, 0);
              if ( !v118 )
                sub_1C6BC60(v119, v120);
              v118->fields.svtUniqueId = v107;
              v121 = v116->fields.vals;
              if ( !v121 )
                sub_1C6BC60(v119, v120);
              if ( !LODWORD(v121->max_length) )
                sub_1C6BC68(v119);
              v122 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v118->klass->vtable._4_set_skillId.methodPtr)(
                       v118,
                       (unsigned int)v121->m_Items[0],
                       v118->klass->vtable._4_set_skillId.method);
              v124 = v116->fields.vals;
              if ( !v124 )
                sub_1C6BC60(v122, v123);
              if ( LODWORD(v124->max_length) <= 1 )
                sub_1C6BC68(v122);
              v118->fields.skilllv = v124->m_Items[1];
              v125 = this->fields.data;
              if ( !v125 )
                sub_1C6BC60(0, v123);
              v126 = BattleData__getServantData(v125, v118->fields.svtUniqueId, 0);
              v127 = ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v118->klass->vtable._5_get_skillId.methodPtr)(
                       v118,
                       v118->klass->vtable._5_get_skillId.method);
              if ( !v156 )
                sub_1C6BC60(0, v127);
              v128 = SkillLvMaster__GetEntity(v156, v127, v118->fields.skilllv, 0);
              if ( !v126 )
                sub_1C6BC60(v128, v129);
              v130 = v128;
              v131 = this->fields.data;
              if ( !v131 )
                sub_1C6BC60(0, v129);
              v132 = BattleData__checkAliveOther(v131, v126->fields.uniqueId, 0);
              if ( v132 )
                goto LABEL_196;
              if ( !v130 )
                sub_1C6BC60(v132, v133);
              v134 = this->fields.logic;
              if ( !v134 )
                sub_1C6BC60(0, v133);
              if ( BattleLogic__checkPtTargetFunction(v134, v130->fields.funcId, 0) )
              {
LABEL_196:
                v135 = BattleServantData__GetRevengeIdCheckOpponentOnly(v126, v116, 0);
                if ( v135 < 0 )
                {
                  v138 = Target__getTargetIds(this->fields.data, v118->fields.svtUniqueId, -1, v107, 13, 0, 0);
                  v139 = BattleSkillInfoData__ExistsNoTargetNoActionType(v118, 0);
                }
                else
                {
                  v136 = sub_1C6BAB0(int___TypeInfo, 1);
                  v138 = (System_Int32_array *)v136;
                  if ( !v136 )
                    sub_1C6BC60(0, v137);
                  if ( !*(_DWORD *)(v136 + 24) )
                    sub_1C6BC68(v136);
                  v139 = 0;
                  *(_DWORD *)(v136 + 32) = v135;
                }
                v140 = this->fields.logicskill;
                v141 = sub_1C6BAB0(int___TypeInfo, 1);
                if ( !v141 )
                  sub_1C6BC60(0, v142);
                if ( !*(_DWORD *)(v141 + 24) )
                  sub_1C6BC68(v141);
                *(_DWORD *)(v141 + 32) = v107;
                if ( !v140 )
                  sub_1C6BC60(v141, v142);
                v143 = BattleLogicSkill__taskSkill(v140, v118, (System_Int32_array *)v141, v138, 1, v139, 0, 0, 0, 0);
                v144 = this->fields.logic;
                if ( !v144 )
                  sub_1C6BC60(0, v143);
                BattleLogic__addBattleLogicTask(v144, v143, 0);
              }
            }
            v145 = this->fields.data;
            if ( !v145 )
              sub_1C6BC60(0, v117);
            BattleData__CheckStopLimitTurnCountTargetBuffIndividuality(v145, v116, 0);
          }
        }
        v114 = (int)v108[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v158,
    (const MethodInfo_35AA434 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_225;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)Instance, 0);
  Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v150, 0);
  if ( (Instance & 1) == 0 )
  {
    Instance = (__int64)this->fields.logic;
    if ( !Instance )
      goto LABEL_225;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Instance, 0, 0, 0);
  }
  v146 = this->fields.data;
  if ( !v146
    || (Instance = (__int64)v146->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_225:
    sub_1C6BC60(Instance, v6);
  }
  if ( (v153 & 1) != 0 )
    v147 = baseActData;
  else
    v147 = 0;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v147, baseActData, 0);
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

  if ( (byte_4CB947F & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB947F = 1;
  }
  v4 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0), !task) )
    sub_1C6BC60(v5, v6);
  *(_BYTE *)(v4 + 249) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 72) = motionName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 72), (int32_t)motionName, v8, v9);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 136) = motionMessage;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 136), (int32_t)motionMessage, v11, v12);
  *(_DWORD *)(v4 + 144) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 80) = targetObject;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 80), (int32_t)targetObject, v14, v15);
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
    sub_1C6BC60(this, task);
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
  if ( (byte_4CB948A & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActorControl_TypeInfo);
    this = (BattleLogicNomal_o *)sub_1C6BA08(&BattleActionData_ShiftServant_TypeInfo);
    byte_4CB948A = 1;
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
      v7 = sub_1C6BC54(BattleActionData_TypeInfo);
      BattleActionData___ctor((BattleActionData_o *)v7, 0);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 32) = v6->fields.logic;
        v11 = (int)motionName;
        *(_QWORD *)(v7 + 72) = motionName;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 72), v11, v9, v10);
        *(_BYTE *)(v7 + 252) = isOverwriteShift;
        this = (BattleLogicNomal_o *)v6[3].fields.tmpShiftTask;
        if ( this )
        {
          *(_BYTE *)(v7 + 253) = BattleDeckServantData__IsIgnoreShiftWhiteFade((BattleDeckServantData_o *)this, 0);
          v12 = (BattleActionData_ShiftServant_o *)sub_1C6BC54(BattleActionData_ShiftServant_TypeInfo);
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
    sub_1C6BC60(this, task);
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

  if ( (byte_4CB9480 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_11090/*"RESET_CAMERA_BAT"*/);
    byte_4CB9480 = 1;
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
              (System_String_o *)StringLiteral_11090/*"RESET_CAMERA_BAT"*/,
              0);
            return v8;
          }
        }
      }
LABEL_18:
      sub_1C6BC60(StartTurn, v6);
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
        sub_1C6BC68(data);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 564) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1C6BC60(data, task);
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
    sub_1C6BC60(this, 0);
  max_length = svtList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C6BC68(this);
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
    sub_1C6BC68(data);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1C6BC60(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BattleAttackManager_o *BattleLogicNomal__get_AtkManager(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(this, method);
  return data->fields.battleAtkManager;
}


BaseBattleEvent_o *BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(this, method);
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

  if ( (byte_4CB9470 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C6BA08(&BattleLogic_reactionFunction_TypeInfo);
    byte_4CB9470 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0);
  if ( !list )
    sub_1C6BC60(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  BeforeShiftServantReactTaskCreator_o *v21; // x22
  ServantReactTaskCreator_o *v22; // x22
  __int64 v23; // x23
  System_Func_object__bool__o *v24; // x24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct BattleLogic_o *v29; // x8
  BattleLogicTask_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  struct BattleLogic_o *v37; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0

  if ( (byte_4CB948B & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&ReactTaskTargetFilter_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass57_0__shiftServantTaskReaction_b__0__);
    sub_1C6BA08(&BattleLogicNomal___c__DisplayClass57_0_TypeInfo);
    byte_4CB948B = 1;
  }
  v5 = (BattleLogicNomal___c__DisplayClass57_0_o *)sub_1C6BC54(BattleLogicNomal___c__DisplayClass57_0_TypeInfo);
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
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          v13 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v13, 0);
          if ( v13 )
          {
            v13->fields.actiontype = 62;
            BattleLogicTask__setActor(v13, 3, v5->fields.uniqueId, 0);
            items = v10->fields._items;
            v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v10->fields._version;
            if ( items )
            {
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  (Il2CppObject *)v13,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v19[4] = (Il2CppClass *)v13;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
              }
              v37 = this->fields.logic;
              if ( v37 )
              {
                ShiftableUniqueId = (BattleData_o *)v37->fields.logicReaction;
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
                    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C6BC60(ShiftableUniqueId, v7);
  }
  BattleServantData__UsedProgressingAppliedFailedGuts(v11, 0);
  v21 = (BeforeShiftServantReactTaskCreator_o *)sub_1C6BC54(BeforeShiftServantReactTaskCreator_TypeInfo);
  BeforeShiftServantReactTaskCreator___ctor(v21, 24, 0);
  if ( !v21 )
    goto LABEL_39;
  v22 = ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v21, 0);
  v23 = sub_1C6BC54(ReactTaskTargetFilter_TypeInfo);
  ReactTaskTargetFilter___ctor((ReactTaskTargetFilter_o *)v23, 0);
  v24 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_BattleLogicNomal___c__DisplayClass57_0__shiftServantTaskReaction_b__0__,
    0);
  if ( !v23 )
    goto LABEL_39;
  *(_QWORD *)(v23 + 16) = v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 16), (int32_t)v24, v25, v26);
  if ( !v22 )
    goto LABEL_39;
  v22->fields._TargetFilter_k__BackingField = (struct ReactTaskTargetFilter_o *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v22->fields._TargetFilter_k__BackingField, v23, v27, v28);
  v29 = this->fields.logic;
  if ( !v29 )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)v29->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_39;
  ShiftableUniqueId = (BattleData_o *)BattleLogicReaction__CreateTasks(
                                        (BattleLogicReaction_o *)ShiftableUniqueId,
                                        v22,
                                        0);
  if ( !v10 )
    goto LABEL_39;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v30 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v30, 0);
  if ( !v30 )
    goto LABEL_39;
  v30->fields.actiontype = 37;
  BattleLogicTask__setActor(v30, 3, v5->fields.uniqueId, 0);
  v33 = v10->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v33 )
    goto LABEL_39;
  v35 = v10->fields._size;
  if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v30,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v10->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v30;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
  }
LABEL_33:
  v39 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v39, 0);
  if ( !v39 )
    goto LABEL_39;
  v39->fields.actiontype = 36;
  BattleLogicTask__setActor(v39, 3, v5->fields.uniqueId, 0);
  v42 = v10->fields._items;
  v43 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v42 )
    goto LABEL_39;
  v44 = v10->fields._size;
  if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v39,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v10->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)v39;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v39, v40, v41);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4CB9472 & 1) == 0 )
  {
    sub_1C6BA08(&BattleCommandCardTask_TypeInfo);
    sub_1C6BA08(&BattleDataDefine_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB9472 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1C6BC60(battleEvent, v8);
  }
  v15 = (BattleCommandCardTask_o *)sub_1C6BC54(BattleCommandCardTask_TypeInfo);
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
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v15;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4CB9487 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB9487 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1C6BC60(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
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
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4CB9478 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB9478 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_12;
  BattleLogic__resetOverKill(logic, 0);
  if ( !data
    || (BattleData__SetCommandAttacked(data, 0, 0),
        v9 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v9, 0),
        !v9)
    || (BattleLogicTask__setSystem(v9, 0), !v6)
    || (items = v6->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C6BC60(logic, v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C6BC60(this, *(_QWORD *)&ltype);
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

  if ( (byte_4CB9471 & 1) == 0 )
  {
    sub_1C6BA08(&BattleCommandCardTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB9471 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v15 = (BattleCommandCardTask_o *)sub_1C6BC54(BattleCommandCardTask_TypeInfo);
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
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v15;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v15, v24, v25);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1C6BC60(battleEvent, v9);
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
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v7->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v15;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v15, v18, v19);
  }
  BattleData__setTDChain(data, 1, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x9
  BattleLogicNomal___c_c *v44; // x0
  System_Action_object__o *_9__21_0; // x20
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
  if ( (byte_4CB9473 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C6BA08(&BattleComboData_TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78498456);
    sub_1C6BA08(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__);
    sub_1C6BA08(&BattleLogicNomal___c_TypeInfo);
    byte_4CB9473 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !data )
    goto LABEL_78;
  v13 = 304;
  if ( isEnemy )
    v13 = 312;
  v14 = *(__int64 *)((char *)&data->klass + v13);
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
        sub_1C6BC68(Instance);
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
                if ( v18->fields.isEnemy != *(unsigned __int8 *)(Instance + 507) )
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
                      v52 = this;
                      v58 = (System_Collections_Generic_HashSet_T__o *)sub_1C6BC54(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_57373904(
                        v58,
                        v20,
                        (const MethodInfo_36B74D0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78498456);
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
                            v25 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
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
                                  v27 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor_46872936(v27, counterId, SvtId, LimitCount, 0, -1, 0);
                                  BattleServantData__SetOverwriteSvtCardType(v18, v27, 0);
                                  BattleServantData__AddServantCommandCard(v18, v24->fields.counterId, 0);
                                  v28 = (BattleComboData_o *)sub_1C6BC54(BattleComboData_TypeInfo);
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
                                                        wasAttackTargetId,
                                                        v24->fields.counterLv,
                                                        0);
                                  if ( !Instance )
                                  {
                                    v6 = v53;
                                    goto LABEL_60;
                                  }
                                  v31 = Instance;
                                  v32 = sub_1C6BC54(BattleSkillInfoData_TypeInfo);
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
                                  Instance = sub_1C6BAB0(int___TypeInfo, 1);
                                  if ( !Instance )
                                    goto LABEL_78;
                                  v35 = (System_Int32_array *)Instance;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_79;
                                  *(_DWORD *)(Instance + 32) = v18->fields.wasAttackTargetId;
                                  Instance = sub_1C6BAB0(int___TypeInfo, 1);
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
                                  v6 = v53;
                                  v22 = isSkillCounter;
                                }
                              }
                              Instance = (__int64)v59;
                              if ( !v59 )
                                goto LABEL_78;
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v59,
                                                    v24->fields.buffId,
                                                    (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_78;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0);
                              BattleLogicTask__setMessage(v25, CounterMessage, 2, 0);
                              v25->fields.isCounter = 1;
                              if ( (v60 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v25,
                                  v18,
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
                                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v42 = &items->obj.klass + size;
                                v10->fields._size = size + 1;
                                v42[4] = (Il2CppClass *)v25;
                                sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v25, v37, v38);
                              }
                              Instance = (__int64)v58;
                              if ( !v58 )
                                goto LABEL_78;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v58,
                                           (Il2CppObject *)v24,
                                           (const MethodInfo_36B7CA0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
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
                      _9__21_0 = (System_Action_object__o *)v44->static_fields->__9__21_0;
                      if ( !_9__21_0 )
                      {
                        if ( !v44->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v44);
                          v44 = BattleLogicNomal___c_TypeInfo;
                        }
                        v46 = (Il2CppObject *)v44->static_fields->__9;
                        _9__21_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__21_0,
                          v46,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__21_0__,
                          0);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__21_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__21_0;
                        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v48, v49);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v58,
                        (System_Action_T__o *)_9__21_0,
                        (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    sub_1C6BC60(Instance, wasAttackTargetId);
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
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4CB947D & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB947D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v9 + 128) = gameObject;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 128), (int32_t)gameObject, v13, v14);
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
    sub_1C6BC60(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), v9, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int32_t uniqueId; // w2
  System_String_o *v30; // x20
  BattleLogicTask_o *v31; // x0
  System_String_o *v32; // x1
  struct BattleData_o *v33; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v35; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v37; // x2
  Il2CppObject *v38; // x0
  System_String_o *v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  int v47; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB947E & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2878/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_1C6BA08(&StringLiteral_8753/*"MOTION_ENTRY"*/);
    sub_1C6BA08(&StringLiteral_2876/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_1C6BA08(&StringLiteral_2877/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_1C6BA08(&StringLiteral_8756/*"MOTION_ENTRY_TAC"*/);
    byte_4CB947E = 1;
  }
  v9 = StringLiteral_8756/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_8753/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0);
  if ( !v12 )
    goto LABEL_30;
  v15 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v15, 0);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0);
  *(_QWORD *)(v12 + 128) = gameObject;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 128), (int32_t)gameObject, v17, v18);
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
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2877/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0);
LABEL_23:
              v39 = v22;
              BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, 0);
              v31 = (BattleLogicTask_o *)v12;
              v32 = v39;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v21 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2876/*"BATTLE_SUBENTRY_ENEMY"*/, 0);
          v33 = this->fields.data;
          if ( !v33 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v33->fields._EnemyCountStartValue_k__BackingField;
          v35 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v33, 0);
          v47 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v37)
              + EnemyCountStartValue_k__BackingField;
          v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
          v22 = System_String__Format(v35, v38, 0);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1C6BC60(battle_ent, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2878/*"BATTLE_SUBENTRY_PLAYER"*/, 0);
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_30;
  v24 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v23, 0);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v26);
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v28 = System_String__Format(v24, v27, 0);
  uniqueId = svtData->fields.uniqueId;
  v30 = v28;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, 0);
  v31 = (BattleLogicTask_o *)v12;
  v32 = v30;
LABEL_24:
  BattleLogicTask__setMessage(v31, v32, 1, 0);
  if ( !v11 )
    goto LABEL_30;
  items = v11->fields._items;
  v43 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v45[4] = (Il2CppClass *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v45 + 4), v12, v40, v41);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v3; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  Il2CppObject *v7; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleData_o *data; // x8
  struct BattleCommandData_array *selectcommandlist; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v26; // x8
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
  _BOOL8 IsEnableToAttack; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v50; // x20
  BattleLogicNomal___c_c *v51; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v52; // x19
  System_Func_object__int__o *_9__26_1; // x21
  Il2CppObject *v54; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 v64; // x0
  __int64 v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x0
  __int64 v69; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v70; // x8
  __int64 v71; // x0
  __int64 v72; // x1
  BattleData_o *v73; // x0
  struct BattleLogicNomal___c__DisplayClass26_0_o *_8__1; // x19
  System_Collections_Generic_IEnumerable_T__o *FieldAliveServantArray; // x21
  System_Collections_Generic_List_object__o *v76; // x20
  __int64 v77; // x0
  __int64 v78; // x1
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Collections_Generic_List_object__o *v81; // x19
  Il2CppObject *v82; // x21
  System_Action_object__o *v83; // x20
  __int64 v84; // x0
  __int64 v85; // x1
  BattleCommandData_o *v86; // x19
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  __int64 v90; // x0
  __int64 v91; // x1
  struct BattleData_o *v92; // x8
  BattleCommandData_o *notSelectedCommand_5__3; // x0
  __int64 v94; // x1
  struct BattleCommandData_o *v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  struct BattleLogicNomal___c__DisplayClass26_0_o *v98; // x8
  System_Collections_Generic_List_object__o *otherSvtList; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v100; // x9
  __int128 v101; // q0
  struct System_Collections_Generic_List_Enumerator_BattleServantData__o *p__7__wrap8; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v105; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v106; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v107; // x8
  __int64 v108; // x9
  int32_t *v109; // x10
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  BattleSkillInfoData_o *v113; // x19
  BattleLogicSkill_o *logicskill; // x20
  __int64 v115; // x0
  __int64 v116; // x1
  struct BattleLogicTask_array *v117; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  struct BattleLogicTask_array *_7__wrap6; // x10
  unsigned int v122; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap5; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v124; // x8
  __int64 v125; // x9
  int *v126; // x10
  __int64 v127; // x0
  const MethodInfo *v128; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  struct BattleLogicTask_o *v132; // x1
  const MethodInfo *v133; // x1
  BattleServantData_o *current; // x19
  _BOOL8 v135; // x0
  __int64 v136; // x1
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v137; // x20
  BattleLogicNomal___c_c *v138; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v139; // x19
  System_Func_object__int__o *_9__26_2; // x21
  Il2CppObject *v141; // x22
  struct BattleLogicNomal___c_StaticFields *v142; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v145; // x0
  __int64 v146; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v147; // x20
  System_Linq_IOrderedEnumerable_TSource__c *v148; // x8
  __int64 v149; // x9
  int32_t *v150; // x10
  __int64 v151; // x0
  __int64 v152; // x0
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  __int64 v155; // x0
  __int64 v156; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v157; // x8
  __int64 v158; // x0
  __int64 v159; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v160; // x8
  BattleData_o *v161; // x0
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v162; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v163; // x8
  __int64 v164; // x9
  int32_t *v165; // x10
  __int64 v166; // x0
  __int64 v167; // x0
  __int64 v168; // x1
  BattleSkillInfoData_o *v169; // x19
  BattleLogicSkill_o *v170; // x20
  __int64 v171; // x0
  __int64 v172; // x1
  struct BattleLogicTask_array *v173; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v174; // x0
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  struct BattleLogicTask_array *v177; // x10
  unsigned int v178; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v179; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v180; // x8
  __int64 v181; // x9
  int *v182; // x10
  __int64 v183; // x0
  const MethodInfo *v184; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v185; // x0
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  struct BattleLogicTask_o *v188; // x1
  const MethodInfo *v189; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v190[2]; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v191; // [xsp+48h] [xbp-78h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o **v192; // [xsp+50h] [xbp-70h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *v193; // [xsp+58h] [xbp-68h] BYREF

  v4 = this;
  v193 = this;
  if ( (byte_4CB957A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleServantData__TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C6BA08(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor___78506336);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__);
    sub_1C6BA08(&Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__);
    sub_1C6BA08(&BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_o *)sub_1C6BA08(&BattleLogicNomal___c_TypeInfo);
    byte_4CB957A = 1;
  }
  v191 = 0;
  v192 = &v193;
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
  v7 = (Il2CppObject *)sub_1C6BC54(BattleLogicNomal___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v7, 0);
  v8 = v193;
  v193->fields.__8__1 = (struct BattleLogicNomal___c__DisplayClass26_0_o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields.__8__1, (int32_t)v7, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v12 = v193;
  v193->fields._selectSvtList_5__2 = (struct System_Collections_Generic_List_BattleServantData__o *)v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->fields._selectSvtList_5__2, (int32_t)v11, v13, v14);
  if ( !_4__this )
    sub_1C6BC60(v15, v16);
  data = _4__this->fields.data;
  if ( !data )
    sub_1C6BC60(v15, v16);
  selectcommandlist = data->fields.selectcommandlist;
  v21 = v193;
  v193->fields.__7__wrap3 = selectcommandlist;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->fields.__7__wrap3, (int32_t)selectcommandlist, v17, v18);
  v26 = v193;
  v27 = 0;
  v193->fields.__7__wrap4 = 0;
LABEL_14:
  _7__wrap3 = v26->fields.__7__wrap3;
  p__7__wrap3 = (CGThumbnailListItem_o *)&v26->fields.__7__wrap3;
  v34 = _7__wrap3;
  if ( !_7__wrap3 )
    sub_1C6BC60(v22, v23);
  max_length = v34->max_length;
  if ( v27 < max_length )
  {
    if ( v27 >= (unsigned int)max_length )
      sub_1C6BC68(v22);
    if ( !_4__this )
      sub_1C6BC60(v22, v23);
    v37 = v34->m_Items[v27];
    if ( !v37 )
      sub_1C6BC60(v22, v23);
    v38 = _4__this->fields.data;
    if ( !v38 )
      sub_1C6BC60(0, v23);
    ServantData = (Il2CppObject *)BattleData__getServantData(v38, v37->fields.uniqueId, 0);
    selectSvtList_5__2 = (System_Collections_Generic_List_object__o *)v193->fields._selectSvtList_5__2;
    if ( !selectSvtList_5__2 )
      sub_1C6BC60(0, v39);
    items = selectSvtList_5__2->fields._items;
    v45 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++selectSvtList_5__2->fields._version;
    if ( !items )
      sub_1C6BC60(selectSvtList_5__2, v39);
    size = selectSvtList_5__2->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectSvtList_5__2,
        ServantData,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &items->obj.klass + size;
      selectSvtList_5__2->fields._size = size + 1;
      v47[4] = (Il2CppClass *)ServantData;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)ServantData, v40, v41);
    }
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack((BattleServantData_o *)ServantData, v37, 0);
    if ( !ServantData )
      sub_1C6BC60(IsEnableToAttack, v49);
    v50 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
            (BattleServantData_o *)ServantData,
            v37,
            IsEnableToAttack,
            0,
            0);
    v51 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v51 = BattleLogicNomal___c_TypeInfo;
    }
    v52 = v193;
    _9__26_1 = (System_Func_object__int__o *)v51->static_fields->__9__26_1;
    if ( !_9__26_1 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = BattleLogicNomal___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__26_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__26_1,
        v54,
        Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_1__,
        0);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__26_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__26_1, (int32_t)_9__26_1, v56, v57);
    }
    v58 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v50,
            (System_Func_TSource__TKey__o *)_9__26_1,
            (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    v60 = v58;
    if ( !v58 )
      sub_1C6BC60(0, v59);
    klass = v58->klass;
    v62 = *(unsigned __int16 *)&v58->klass->_2.rank;
    if ( *(_WORD *)&v58->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
      {
        --v62;
        p_offset += 4;
        if ( !v62 )
          goto LABEL_37;
      }
      v64 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_37:
      v64 = sub_1C41D90(v58, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
    }
    v65 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v64)(
            v60,
            *(_QWORD *)(v64 + 8));
    if ( !v52 )
      sub_1C6BC60(v65, v65);
    v52->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v65;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v52->fields.__7__wrap5, v65, v66, v67);
    v70 = v193;
    v193->fields.__1__state = -3;
    while ( 1 )
    {
      _7__wrap5 = v70->fields.__7__wrap5;
      if ( !_7__wrap5 )
        sub_1C6BC60(v68, v69);
      v124 = _7__wrap5->klass;
      v125 = *(unsigned __int16 *)&_7__wrap5->klass->_2.rank;
      if ( *(_WORD *)&_7__wrap5->klass->_2.rank )
      {
        v126 = &v124->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v126 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v125;
          v126 += 4;
          if ( !v125 )
            goto LABEL_91;
        }
        v127 = (__int64)&v124->vtable[*v126];
      }
      else
      {
LABEL_91:
        v127 = sub_1C41D90(_7__wrap5, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v127)(
              _7__wrap5,
              *(_QWORD *)(v127 + 8))
          & 1) == 0 )
      {
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally1(v193, v128);
        v129 = v193;
        v193->fields.__7__wrap5 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v129->fields.__7__wrap5, 0, v130, v131);
        v26 = v193;
        v27 = v193->fields.__7__wrap4 + 1;
        v193->fields.__7__wrap4 = v27;
        goto LABEL_14;
      }
      v106 = v193->fields.__7__wrap5;
      if ( !v106 )
        sub_1C6BC60(v193, v128);
      v107 = v106->klass;
      v108 = *(unsigned __int16 *)&v106->klass->_2.rank;
      if ( *(_WORD *)&v106->klass->_2.rank )
      {
        v109 = &v107->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v109 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_75;
        }
        v110 = (__int64)&v107->vtable[*v109];
      }
      else
      {
LABEL_75:
        v110 = sub_1C41D90(
                 v193->fields.__7__wrap5,
                 System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
                 0);
      }
      v111 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v110)(
               v106,
               *(_QWORD *)(v110 + 8));
      if ( !_4__this )
        sub_1C6BC60(v111, v112);
      v113 = (BattleSkillInfoData_o *)v111;
      logicskill = _4__this->fields.logicskill;
      v115 = sub_1C6BAB0(int___TypeInfo, 1);
      if ( !v113 )
        sub_1C6BC60(v115, v116);
      if ( !v115 )
        sub_1C6BC60(0, v116);
      if ( !*(_DWORD *)(v115 + 24) )
        sub_1C6BC68(v115);
      *(_DWORD *)(v115 + 32) = v113->fields.svtUniqueId;
      if ( !logicskill )
        sub_1C6BC60(v115, v116);
      v117 = BattleLogicSkill__taskSkill(logicskill, v113, (System_Int32_array *)v115, 0, 0, 0, 0, 0, 0, v189);
      v118 = v193;
      v193->fields.__7__wrap6 = v117;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v118->fields.__7__wrap6, (int32_t)v117, v119, v120);
      v4 = v193;
      v29 = 0;
      v193->fields.__7__wrap7 = 0;
LABEL_83:
      _7__wrap6 = v4->fields.__7__wrap6;
      if ( !_7__wrap6 )
        sub_1C6BC60(this, method);
      v122 = _7__wrap6->max_length;
      if ( v29 < (int)v122 )
        break;
      v4->fields.__7__wrap6 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
      v70 = v193;
    }
    if ( v29 >= v122 )
      sub_1C6BC68(this);
    v132 = _7__wrap6->m_Items[v29];
    v4->fields.__2__current = v132;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v132, v2, v3);
    result = 1;
    v193->fields.__1__state = 1;
    return result;
  }
  p__7__wrap3->klass = 0;
  sub_1C6B9AC(p__7__wrap3, 0, v24, v25);
  if ( !_4__this )
    sub_1C6BC60(v71, v72);
  v73 = _4__this->fields.data;
  if ( !v73 )
    sub_1C6BC60(0, v72);
  _8__1 = v193->fields.__8__1;
  FieldAliveServantArray = (System_Collections_Generic_IEnumerable_T__o *)BattleData__GetFieldAliveServantArray(
                                                                            v73,
                                                                            1,
                                                                            0,
                                                                            0,
                                                                            0);
  v76 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58720872(
    v76,
    FieldAliveServantArray,
    (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_BattleServantData___ctor___78506336);
  if ( !_8__1 )
    sub_1C6BC60(v77, v78);
  _8__1->fields.otherSvtList = (struct System_Collections_Generic_List_BattleServantData__o *)v76;
  sub_1C6B9AC((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)v76, v79, v80);
  v82 = (Il2CppObject *)v193->fields.__8__1;
  v81 = (System_Collections_Generic_List_object__o *)v193->fields._selectSvtList_5__2;
  v83 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v83,
    v82,
    Method_BattleLogicNomal___c__DisplayClass26_0__GetConfirmCommandFunctionBuffTask_b__0__,
    0);
  if ( !v81 )
    sub_1C6BC60(v84, v85);
  System_Collections_Generic_List_object___ForEach(
    v81,
    (System_Action_T__o *)v83,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v86 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v86, 0);
  v87 = v193;
  v193->fields._notSelectedCommand_5__3 = v86;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v87->fields._notSelectedCommand_5__3, (int32_t)v86, v88, v89);
  v92 = _4__this->fields.data;
  if ( !v92 )
    sub_1C6BC60(v90, v91);
  notSelectedCommand_5__3 = v193->fields._notSelectedCommand_5__3;
  if ( !notSelectedCommand_5__3 )
    sub_1C6BC60(0, v91);
  BattleCommandData__setCombo(notSelectedCommand_5__3, v92->fields.combodata, 0, 0);
  v95 = v193->fields._notSelectedCommand_5__3;
  if ( !v95 )
    sub_1C6BC60(0, v94);
  v95->fields._type = -1;
  BattleCommandData__ResetOverwriteSvtCardType(v95, 0);
  v98 = v193->fields.__8__1;
  if ( !v98 )
    sub_1C6BC60(v96, v97);
  otherSvtList = (System_Collections_Generic_List_object__o *)v98->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C6BC60(0, v97);
  System_Collections_Generic_List_object___GetEnumerator(
    v190,
    otherSvtList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v100 = v193;
  v101 = *(_OWORD *)&v190[0].fields._list;
  p__7__wrap8 = &v193->fields.__7__wrap8;
  v190[1] = v190[0];
  v193->fields.__7__wrap8.fields._current = (struct BattleServantData_o *)v190[0].fields._current;
  *(_OWORD *)&v100->fields.__7__wrap8.fields._list = v101;
  sub_1C6B9AC((CGThumbnailListItem_o *)p__7__wrap8, 0, v103, v104);
  v105 = v193;
  v193->fields.__1__state = -4;
LABEL_106:
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v105->fields.__7__wrap8,
          (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally2(v193, v133);
    v160 = v193;
    v193->fields.__7__wrap8.fields._list = 0;
    *(_QWORD *)&v160->fields.__7__wrap8.fields._index = 0;
    v160->fields.__7__wrap8.fields._current = 0;
    if ( !_4__this )
      sub_1C6BC60(v158, v159);
    v161 = _4__this->fields.data;
    if ( !v161 )
      sub_1C6BC60(0, v159);
    BattleData__ClearAllExecutedOnceConfirmCommandFunctionBuffList(v161, 0);
    return 0;
  }
  current = v193->fields.__7__wrap8.fields._current;
  v135 = BattleLogicNomal__IsEnableToAttack(current, v193->fields._notSelectedCommand_5__3, 0);
  if ( !current )
    sub_1C6BC60(v135, v136);
  v137 = BattleServantData__EnumerateConfirmCommandFunctionSkill(
           current,
           v193->fields._notSelectedCommand_5__3,
           v135,
           1,
           0);
  v138 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v138 = BattleLogicNomal___c_TypeInfo;
  }
  v139 = v193;
  _9__26_2 = (System_Func_object__int__o *)v138->static_fields->__9__26_2;
  if ( !_9__26_2 )
  {
    if ( !v138->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v138);
      v138 = BattleLogicNomal___c_TypeInfo;
    }
    v141 = (Il2CppObject *)v138->static_fields->__9;
    _9__26_2 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_2,
      v141,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__26_2__,
      0);
    v142 = BattleLogicNomal___c_TypeInfo->static_fields;
    v142->__9__26_2 = (struct System_Func_BattleSkillInfoData__int__o *)_9__26_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v142->__9__26_2, (int32_t)_9__26_2, v143, v144);
  }
  v145 = System_Linq_Enumerable__OrderBy_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v137,
           (System_Func_TSource__TKey__o *)_9__26_2,
           (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v147 = v145;
  if ( !v145 )
    sub_1C6BC60(0, v146);
  v148 = v145->klass;
  v149 = *(unsigned __int16 *)&v145->klass->_2.rank;
  if ( *(_WORD *)&v145->klass->_2.rank )
  {
    v150 = &v148->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v150 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v149;
      v150 += 4;
      if ( !v149 )
        goto LABEL_119;
    }
    v151 = (__int64)&v148->vtable[*v150];
  }
  else
  {
LABEL_119:
    v151 = sub_1C41D90(v145, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v152 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v151)(
           v147,
           *(_QWORD *)(v151 + 8));
  if ( !v139 )
    sub_1C6BC60(v152, v152);
  v139->fields.__7__wrap5 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v152;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v139->fields.__7__wrap5, v152, v153, v154);
  v157 = v193;
  v193->fields.__1__state = -5;
  while ( 1 )
  {
    v179 = v157->fields.__7__wrap5;
    if ( !v179 )
      sub_1C6BC60(v155, v156);
    v180 = v179->klass;
    v181 = *(unsigned __int16 *)&v179->klass->_2.rank;
    if ( *(_WORD *)&v179->klass->_2.rank )
    {
      v182 = &v180->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v182 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v181;
        v182 += 4;
        if ( !v181 )
          goto LABEL_152;
      }
      v183 = (__int64)&v180->vtable[*v182];
    }
    else
    {
LABEL_152:
      v183 = sub_1C41D90(v179, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v183)(
            v179,
            *(_QWORD *)(v183 + 8))
        & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26____m__Finally3(v193, v184);
      v185 = v193;
      v193->fields.__7__wrap5 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v185->fields.__7__wrap5, 0, v186, v187);
      v105 = v193;
      goto LABEL_106;
    }
    v162 = v193->fields.__7__wrap5;
    if ( !v162 )
      sub_1C6BC60(v193, v184);
    v163 = v162->klass;
    v164 = *(unsigned __int16 *)&v162->klass->_2.rank;
    if ( *(_WORD *)&v162->klass->_2.rank )
    {
      v165 = &v163->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v165 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v164;
        v165 += 4;
        if ( !v164 )
          goto LABEL_136;
      }
      v166 = (__int64)&v163->vtable[*v165];
    }
    else
    {
LABEL_136:
      v166 = sub_1C41D90(
               v193->fields.__7__wrap5,
               System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
               0);
    }
    v167 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v166)(
             v162,
             *(_QWORD *)(v166 + 8));
    if ( !_4__this )
      sub_1C6BC60(v167, v168);
    v169 = (BattleSkillInfoData_o *)v167;
    v170 = _4__this->fields.logicskill;
    v171 = sub_1C6BAB0(int___TypeInfo, 1);
    if ( !v169 )
      sub_1C6BC60(v171, v172);
    if ( !v171 )
      sub_1C6BC60(0, v172);
    if ( !*(_DWORD *)(v171 + 24) )
      sub_1C6BC68(v171);
    *(_DWORD *)(v171 + 32) = v169->fields.svtUniqueId;
    if ( !v170 )
      sub_1C6BC60(v171, v172);
    v173 = BattleLogicSkill__taskSkill(v170, v169, (System_Int32_array *)v171, 0, 0, 0, 0, 0, 0, v189);
    v174 = v193;
    v193->fields.__7__wrap6 = v173;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v174->fields.__7__wrap6, (int32_t)v173, v175, v176);
    v4 = v193;
    v31 = 0;
    v193->fields.__7__wrap4 = 0;
LABEL_144:
    v177 = v4->fields.__7__wrap6;
    if ( !v177 )
      sub_1C6BC60(this, method);
    v178 = v177->max_length;
    if ( v31 < (int)v178 )
      break;
    v4->fields.__7__wrap6 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
    v157 = v193;
  }
  if ( v31 >= v178 )
    sub_1C6BC68(this);
  v188 = v177->m_Items[v31];
  v4->fields.__2__current = v188;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v188, v2, v3);
  result = 1;
  v193->fields.__1__state = 2;
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
  const MethodInfo *v7; // x3

  if ( (byte_4CB957E & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    byte_4CB957E = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C6BC54(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB957B & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    byte_4CB957B = 1;
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
      v7 = sub_1C41D90(_7__wrap5, System_IDisposable_TypeInfo, 0);
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
  if ( (byte_4CB957C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    byte_4CB957C = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap8,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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

  if ( (byte_4CB957D & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    byte_4CB957D = 1;
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
      v7 = sub_1C41D90(_7__wrap5, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4CB9573 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicNomal___c_TypeInfo);
    byte_4CB9573 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4CB9574 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4CB9574 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
}


bool BattleLogicNomal___c___CreateCommandBattle_b__30_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0);
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_1(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__26_2(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.priority;
}


int32_t BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__28_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void BattleLogicNomal___c___createBuffAddPlayer_b__49_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1C6BC60(this, 0);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0);
}


void BattleLogicNomal___c___taskCounterFunc_b__21_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB9575 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Remove__);
    byte_4CB9575 = 1;
  }
  otherSvtList = (System_Collections_Generic_List_object__o *)this->fields.otherSvtList;
  if ( !otherSvtList )
    sub_1C6BC60(0, svt);
  System_Collections_Generic_List_object___Remove(
    otherSvtList,
    (Il2CppObject *)svt,
    (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_BattleServantData__Remove__);
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

  if ( (byte_4CB9576 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_4CB9576 = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_1C6BC54(BattleBuffData_CheckInvokeBuff_TypeInfo);
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
  const MethodInfo *v8; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4CB9577 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4CB9577 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_3128F68 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C6BC60(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
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
  const MethodInfo *v8; // x3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4CB9578 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass30_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4CB9578 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass30_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0,
                                                       (const MethodInfo_3128F68 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C6BC60(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
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
    sub_1C6BC60(this, targetSvtData);
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

  if ( (byte_4CB9579 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_4CB9579 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *BattleLogicNomal___c__DisplayClass30_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass30_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass30_0_o *)_4__this->fields.data) == 0 )
    sub_1C6BC60(this, id);
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
    sub_1C6BC60(this, npc);
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
    sub_1C6BC60(this, npc);
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
    sub_1C6BC60(this, 0);
  return x->fields.uniqueId == this->fields.uniqueId;
}