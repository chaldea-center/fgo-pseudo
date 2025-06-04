void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogicTask_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleLogicTask_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B04FCC & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask___TypeInfo, method);
    sub_1BC3008(&BattleLogicTask_TypeInfo, v3);
    byte_4B04FCC = 1;
  }
  v4 = (struct BattleLogicTask_array *)sub_1BC30B0(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.zeroTask, (int32_t)v4, v5, v6);
  v7 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  this->fields.tmpShiftTask = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tmpShiftTask, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(this, method);
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
  BattleData_o *data; // x19
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v63; // x28
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  BattleActionData_o *v66; // x19
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  BattleActionData_o **v69; // x21
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct BattleCommandData_o *command; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  BattleActionData_o *v75; // x19
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v79; // x8
  int32_t v80; // w25
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v82; // x22
  bool v83; // w0
  __int64 *v84; // x25
  bool v85; // w8
  BattleActionData_o *result; // x0
  System_Collections_Generic_List_object__o *v87; // x19
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Collections_Generic_List_object__o **v96; // x26
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x19
  System_Func_T__TResult__o *v100; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x19
  BattleLogicNomal___c_c *v102; // x8
  System_Func_object__bool__o *_9__24_9; // x23
  Il2CppObject *v104; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_List_object__o *v109; // x19
  BattleLogicNomal___c_c *v110; // x8
  System_Func_object__object__o *_9__24_0; // x23
  Il2CppObject *v112; // x22
  struct BattleLogicNomal___c_StaticFields *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_Func_object__object__o *v116; // x22
  __int64 v117; // x9
  BuffList_c *v118; // x8
  BattleLogicNomal___c_c *v119; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x23
  System_Func_T__TResult__o *_9__24_2; // x26
  Il2CppObject *v122; // x19
  struct BattleLogicNomal___c_StaticFields *v123; // x0
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  System_Func_T__TResult__o *_9__24_3; // x19
  Il2CppObject *v127; // x22
  struct BattleLogicNomal___c_StaticFields *v128; // x0
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v131; // x0
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  __int64 v134; // x8
  int64_t v135; // x19
  System_Action_object__object__o *v136; // x22
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v138; // x22
  __int64 v139; // x8
  __int64 v140; // x2
  __int64 v141; // x23
  const MethodInfo *v142; // x3
  __int64 v143; // x19
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  System_Func_object__object__o *v146; // x19
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  Il2CppObject *MasterData_object; // x26
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v150; // x24
  const MethodInfo *v151; // x5
  __int64 v152; // x8
  BattleCommandData_o **v153; // x25
  unsigned __int64 v154; // x22
  int v155; // w19
  int32_t v156; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v157; // x27
  __int64 v158; // x8
  __int64 v159; // x19
  __int64 v160; // x9
  int *v161; // x10
  __int64 v162; // x0
  __int64 v163; // x0
  __int64 v164; // x1
  __int64 v165; // x23
  __int64 v166; // x8
  __int64 v167; // x9
  int *v168; // x10
  __int64 v169; // x0
  __int64 v170; // x8
  __int64 v171; // x9
  int *v172; // x10
  __int64 v173; // x0
  Il2CppObject *v174; // x0
  Il2CppObject *v175; // x1
  __int64 v176; // x8
  __int64 v177; // x9
  int *v178; // x10
  __int64 v179; // x0
  unsigned __int64 v180; // x9
  int v181; // w19
  int v182; // w8
  BuffList_ACTION_array *v183; // x27
  int v184; // w8
  __int64 v185; // x8
  __int64 v186; // x19
  __int64 v187; // x9
  int *v188; // x10
  __int64 v189; // x0
  __int64 v190; // x1
  __int64 v191; // x23
  __int64 v192; // x8
  __int64 v193; // x9
  int *v194; // x10
  __int64 v195; // x0
  __int64 v196; // x8
  __int64 v197; // x9
  int *v198; // x10
  __int64 v199; // x0
  __int64 v200; // x1
  BattleServantData_o *v201; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_45164456; // x0
  __int64 v203; // x1
  __int64 v204; // x2
  BattleBuffData_BuffData_array *v205; // x19
  __int64 v206; // x8
  unsigned __int64 v207; // x25
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
  BattleActionData_o *v244; // x8
  __int64 v245; // x8
  __int64 v246; // x9
  int *v247; // x10
  __int64 v248; // x0
  BattleActionData_o *v249; // x19
  BattleActionData_o *v250; // x19
  BattleActionData_o *v251; // x19
  struct BattleData_o *v252; // x8
  __int64 v253; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v255; // x19
  const MethodInfo *v256; // x5
  __int64 v257; // x8
  unsigned __int64 v258; // x25
  unsigned int v259; // w19
  int32_t v260; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x27
  __int64 v262; // x8
  __int64 v263; // x19
  __int64 v264; // x9
  int *v265; // x10
  __int64 v266; // x0
  __int64 v267; // x0
  __int64 v268; // x1
  __int64 v269; // x23
  __int64 v270; // x8
  __int64 v271; // x9
  int *v272; // x10
  __int64 v273; // x0
  __int64 v274; // x8
  __int64 v275; // x9
  int *v276; // x10
  __int64 v277; // x0
  Il2CppObject *v278; // x0
  Il2CppObject *v279; // x1
  __int64 v280; // x8
  __int64 v281; // x9
  int *v282; // x10
  __int64 v283; // x0
  unsigned __int64 v284; // x25
  int v285; // w19
  int v286; // w8
  BuffList_ACTION_array *v287; // x27
  int v288; // w8
  __int64 v289; // x8
  __int64 v290; // x19
  __int64 v291; // x9
  int *v292; // x10
  __int64 v293; // x0
  __int64 v294; // x1
  __int64 v295; // x23
  __int64 v296; // x8
  __int64 v297; // x9
  int *v298; // x10
  __int64 v299; // x0
  __int64 v300; // x8
  __int64 v301; // x9
  int *v302; // x10
  __int64 v303; // x0
  __int64 v304; // x1
  BattleServantData_o *v305; // x3
  BattleBuffData_BuffData_array *v306; // x0
  __int64 v307; // x1
  __int64 v308; // x2
  BattleBuffData_BuffData_array *v309; // x19
  __int64 v310; // x8
  unsigned __int64 v311; // x22
  BattleLogicFunction_o *v312; // x0
  __int64 v313; // x8
  __int64 v314; // x9
  int *v315; // x10
  __int64 v316; // x0
  __int64 v317; // x8
  __int64 v318; // x19
  __int64 v319; // x9
  int *v320; // x10
  __int64 v321; // x0
  __int64 v322; // x0
  __int64 v323; // x1
  __int64 v324; // x23
  __int64 v325; // x8
  __int64 v326; // x9
  int *v327; // x10
  __int64 v328; // x0
  __int64 v329; // x8
  __int64 v330; // x9
  int *v331; // x10
  __int64 v332; // x0
  __int64 v333; // x0
  __int64 v334; // x1
  __int64 v335; // x8
  __int64 v336; // x9
  int *v337; // x10
  __int64 v338; // x0
  _BOOL8 v339; // x0
  __int64 v340; // x1
  Il2CppObject *current; // x8
  _BYTE *monitor; // x9
  BattleData_o *v343; // x0
  BattleActionData_o *v344; // x8
  BattleLogic_o *v345; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v346; // x20
  __int64 v347; // x0
  const MethodInfo *v348; // [xsp+0h] [xbp-120h]
  __int64 *v349; // [xsp+10h] [xbp-110h]
  bool v350; // [xsp+1Ch] [xbp-104h]
  __int64 v351; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v352; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  BattleBuffData_o *actSvtBuffData; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_Dictionary_object__object__o *v355; // [xsp+40h] [xbp-E0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v356; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+50h] [xbp-D0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+50h] [xbp-D0h]
  Il2CppObject *item; // [xsp+58h] [xbp-C8h]
  bool v360; // [xsp+64h] [xbp-BCh]
  __int64 v361; // [xsp+68h] [xbp-B8h]
  __int64 v362; // [xsp+70h] [xbp-B0h]
  BattleServantData_o **v363; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v364; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v365; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v366; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4B04FB8 & 1) == 0 )
  {
    sub_1BC3008(&BuffList_ACTION___TypeInfo, task);
    sub_1BC3008(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v7);
    sub_1BC3008(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v8);
    sub_1BC3008(&BattleActionData_TypeInfo, v9);
    sub_1BC3008(&BattleAddSkillTaskAfterCommandAttack_TypeInfo, v10);
    sub_1BC3008(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo, v11);
    sub_1BC3008(&BattleServantData___TypeInfo, v12);
    sub_1BC3008(&bool___TypeInfo, v13);
    sub_1BC3008(&BuffList_TypeInfo, v14);
    sub_1BC3008(&BattleLogic_DamageProcessArgs_TypeInfo, v15);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v18);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v19);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v20);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_int___, v21);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_BattleServantData___, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v25);
    sub_1BC3008(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v26);
    sub_1BC3008(&System_Func_BattleServantData__BattleServantData__TypeInfo, v27);
    sub_1BC3008(&System_Func_int__BattleServantData__TypeInfo, v28);
    sub_1BC3008(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v29);
    sub_1BC3008(&System_Func_BattleServantData__bool__TypeInfo, v30);
    sub_1BC3008(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v31);
    sub_1BC3008(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v32);
    sub_1BC3008(&System_IDisposable_TypeInfo, v33);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v34);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v35);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v36);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleServantData__Add__, v38);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v39);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Remove__, v40);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v41);
    sub_1BC3008(&System_Collections_Generic_List_BattleServantData__TypeInfo, v42);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1BC3008(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__, v44);
    sub_1BC3008(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__, v45);
    sub_1BC3008(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__, v46);
    sub_1BC3008(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__, v47);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__, v48);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__, v49);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__, v50);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__, v51);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__, v52);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__, v53);
    sub_1BC3008(&BattleLogicNomal___c__DisplayClass24_0_TypeInfo, v54);
    sub_1BC3008(&BattleLogicNomal___c_TypeInfo, v55);
    byte_4B04FB8 = 1;
  }
  memset(&v366, 0, sizeof(v366));
  v56 = sub_1BC3254(BattleLogicNomal___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v56, 0LL);
  if ( !v56 )
    goto LABEL_381;
  *(_QWORD *)(v56 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 16), (int32_t)this, v59, v60);
  if ( !task )
    goto LABEL_381;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_381;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v56 + 24) = ServantData;
  v63 = (BattleServantData_o **)(v56 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 24), (int32_t)ServantData, v64, v65);
  v66 = (BattleActionData_o *)sub_1BC3254(BattleActionData_TypeInfo);
  BattleActionData___ctor(v66, 0LL);
  *baseActionData = v66;
  sub_1BC2FAC((CGThumbnailListItem_o *)baseActionData, (int32_t)v66, v67, v68);
  *(_QWORD *)(v56 + 48) = v66;
  v69 = (BattleActionData_o **)(v56 + 48);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 48), (int32_t)v66, v70, v71);
  command = task->fields.command;
  *(_QWORD *)(v56 + 40) = command;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 40), (int32_t)command, v73, v74);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_381;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_381;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_381;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v75 = *v69;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v75 )
    goto LABEL_381;
  v75->fields.actorId = ActorId;
  ActorId = (__int64)*v69;
  if ( !*v69 )
    goto LABEL_381;
  motionMessage = task->fields.motionMessage;
  v364 = (BattleCommandData_o **)(v56 + 40);
  *(_QWORD *)(ActorId + 136) = motionMessage;
  sub_1BC2FAC((CGThumbnailListItem_o *)(ActorId + 136), (int32_t)motionMessage, v76, v77);
  if ( !*v69 )
    goto LABEL_381;
  (*v69)->fields.isCounter = task->fields.isCounter;
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v79 = this->fields.data;
  if ( !v79 )
    goto LABEL_381;
  v80 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v79->fields.leaderDown || v79->fields.endbattleFlg )
    return 0LL;
  ActorId = (__int64)BattleData__getServantData(this->fields.data, ActorId, 0LL);
  if ( !*v69 )
    goto LABEL_381;
  if ( (*v69)->fields.isCounter )
  {
    if ( !ActorId )
      goto LABEL_381;
    if ( *(_BYTE *)(ActorId + 486) )
      return 0LL;
  }
  item = (Il2CppObject *)ActorId;
  logic = this->fields.logic;
  v82 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1BC3254(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v82, 0LL);
  if ( !logic )
    goto LABEL_381;
  v352 = task;
  targetId = v80;
  v83 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v82, task, v80, 0LL);
  v84 = (__int64 *)(v56 + 40);
  v85 = v83;
  result = 0LL;
  if ( !v85 )
  {
    v87 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v87,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
    if ( !v87 )
      goto LABEL_381;
    items = v87->fields._items;
    v91 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v87->fields._version;
    if ( !items )
      goto LABEL_381;
    size = v87->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v87,
        item,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = &items->obj.klass + size;
      v87->fields._size = size + 1;
      v93[4] = (Il2CppClass *)item;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v93 + 4), (int32_t)item, v88, v89);
    }
    *(_QWORD *)(v56 + 56) = v87;
    v96 = (System_Collections_Generic_List_object__o **)(v56 + 56);
    sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 56), (int32_t)v87, v94, v95);
    ActorId = *(_QWORD *)(v56 + 40);
    if ( !ActorId )
      goto LABEL_381;
    BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
    ActorId = (__int64)*v364;
    if ( !*v364 )
      goto LABEL_381;
    BattleCommandData__UpdateCritical(
      (BattleCommandData_o *)ActorId,
      *v63,
      (BattleServantData_o *)item,
      this->fields.data,
      0LL);
    ActorId = (__int64)*v364;
    if ( !*v364 )
      goto LABEL_381;
    BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v63, 0LL);
    ActorId = (__int64)*v63;
    if ( !*v63 )
      goto LABEL_381;
    AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v364, 0LL);
    v350 = AttackType == 2;
    if ( AttackType == 2 )
    {
      ActorId = (__int64)this->fields.data;
      if ( !ActorId )
        goto LABEL_381;
      ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, targetId, 0LL);
      if ( !this->fields.data )
        goto LABEL_381;
      v98 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                                ? BattleData__getFieldEnemyServantIDList(
                                                                    this->fields.data,
                                                                    1,
                                                                    0LL)
                                                                : BattleData__getFieldPlayerServantIDList(
                                                                    this->fields.data,
                                                                    0LL,
                                                                    0LL));
      ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                           v98,
                           (const MethodInfo_3042B74 *)Method_System_Linq_Enumerable_ToList_int___);
      if ( !ActorId )
        goto LABEL_381;
      v99 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)ActorId,
        targetId,
        (const MethodInfo_3685318 *)Method_System_Collections_Generic_List_int__Remove__);
      v100 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__object____ctor(
        v100,
        (Il2CppObject *)v56,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__,
        0LL);
      v101 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                    v99,
                                                                    (System_Func_TSource__TResult__o *)v100,
                                                                    (const MethodInfo_3033958 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v102 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v102 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_9 = (System_Func_object__bool__o *)v102->static_fields->__9__24_9;
      if ( !_9__24_9 )
      {
        if ( !v102->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v102);
          v102 = BattleLogicNomal___c_TypeInfo;
        }
        v104 = (Il2CppObject *)v102->static_fields->__9;
        _9__24_9 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__24_9,
          v104,
          Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__,
          0LL);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
        static_fields->__9__24_9 = (struct System_Func_BattleServantData__bool__o *)_9__24_9;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__24_9, (int32_t)_9__24_9, v106, v107);
      }
      ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                           v101,
                           (System_Func_TSource__bool__o *)_9__24_9,
                           (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      if ( !*v96 )
        goto LABEL_381;
      System_Collections_Generic_List_object___AddRange(
        *v96,
        (System_Collections_Generic_IEnumerable_T__o *)ActorId,
        (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
      v84 = (__int64 *)(v56 + 40);
    }
    ActorId = *v84;
    if ( *v84 )
    {
      IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                         (BattleCommandData_o *)ActorId,
                                         0LL);
      v109 = *v96;
      v360 = IsForceAttackFunctionTargetAll;
      v110 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v110 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_0 = (System_Func_object__object__o *)v110->static_fields->__9__24_0;
      if ( !_9__24_0 )
      {
        if ( !v110->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v110);
          v110 = BattleLogicNomal___c_TypeInfo;
        }
        v112 = (Il2CppObject *)v110->static_fields->__9;
        _9__24_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_BattleServantData__BattleServantData__TypeInfo);
        System_Func_object__object____ctor(
          _9__24_0,
          v112,
          Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__,
          0LL);
        v113 = BattleLogicNomal___c_TypeInfo->static_fields;
        v113->__9__24_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__24_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v113->__9__24_0, (int32_t)_9__24_0, v114, v115);
      }
      v116 = (System_Func_object__object__o *)sub_1BC3254(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
      System_Func_object__object____ctor(
        v116,
        (Il2CppObject *)v56,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__,
        0LL);
      ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v109,
                           (System_Func_TSource__TKey__o *)_9__24_0,
                           (System_Func_TSource__TElement__o *)v116,
                           (const MethodInfo_303EF0C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
      v117 = *(_QWORD *)(v56 + 24);
      v355 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
      if ( v117 )
      {
        v118 = BuffList_TypeInfo;
        actSvtBuffData = *(BattleBuffData_o **)(v117 + 792);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          v118 = BuffList_TypeInfo;
        }
        v119 = BattleLogicNomal___c_TypeInfo;
        v349 = (__int64 *)(v56 + 56);
        CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v118->static_fields->CommandCodeBuffHash;
        if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
          v119 = BattleLogicNomal___c_TypeInfo;
        }
        _9__24_2 = (System_Func_T__TResult__o *)v119->static_fields->__9__24_2;
        if ( !_9__24_2 )
        {
          if ( !v119->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v119);
            v119 = BattleLogicNomal___c_TypeInfo;
          }
          v122 = (Il2CppObject *)v119->static_fields->__9;
          _9__24_2 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
          System_Func_Int32Enum__Int32Enum____ctor(
            _9__24_2,
            v122,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__,
            0LL);
          v123 = BattleLogicNomal___c_TypeInfo->static_fields;
          v123->__9__24_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__24_2;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v123->__9__24_2, (int32_t)_9__24_2, v124, v125);
          v119 = BattleLogicNomal___c_TypeInfo;
        }
        if ( !v119->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v119);
          v119 = BattleLogicNomal___c_TypeInfo;
        }
        _9__24_3 = (System_Func_T__TResult__o *)v119->static_fields->__9__24_3;
        if ( !_9__24_3 )
        {
          if ( !v119->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v119);
            v119 = BattleLogicNomal___c_TypeInfo;
          }
          v127 = (Il2CppObject *)v119->static_fields->__9;
          _9__24_3 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
          System_Func_Int32Enum__object____ctor(
            _9__24_3,
            v127,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__,
            0LL);
          v128 = BattleLogicNomal___c_TypeInfo->static_fields;
          v128->__9__24_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__24_3;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v128->__9__24_3, (int32_t)_9__24_3, v129, v130);
        }
        v131 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
                 CommandCodeBuffHash,
                 (System_Func_TSource__TKey__o *)_9__24_2,
                 (System_Func_TSource__TElement__o *)_9__24_3,
                 (const MethodInfo_303ED14 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
        *(_QWORD *)(v56 + 32) = v131;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 32), (int32_t)v131, v132, v133);
        v134 = *(_QWORD *)(v56 + 40);
        v356 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v56 + 32);
        if ( v134 )
        {
          v135 = *(_QWORD *)(v134 + 72);
          v136 = (System_Action_object__object__o *)sub_1BC3254(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
          System_Action_object__object____ctor(
            v136,
            (Il2CppObject *)v56,
            Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__,
            0LL);
          ActorId = (__int64)actSvtBuffData;
          if ( actSvtBuffData )
          {
            BattleBuffData__SetCommandCodeBuffActiveFlg(
              actSvtBuffData,
              v135,
              (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v136,
              1,
              0LL);
            if ( *v364 )
            {
              commandAssistId = (*v364)->fields.commandAssistId;
              v138 = (System_Action_object__object__o *)sub_1BC3254(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
              System_Action_object__object____ctor(
                v138,
                (Il2CppObject *)v56,
                Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__,
                0LL);
              v139 = *(_QWORD *)(v56 + 40);
              if ( v139 )
              {
                BattleBuffData__SetCommandAssistBuffActiveFlg(
                  actSvtBuffData,
                  commandAssistId,
                  (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v138,
                  1,
                  *(_DWORD *)(v139 + 88),
                  0LL);
                ActorId = sub_1BC30B0(bool___TypeInfo, 2LL);
                if ( ActorId )
                {
                  v141 = ActorId;
                  if ( !*(_DWORD *)(ActorId + 24) )
                    goto LABEL_382;
                  *(_BYTE *)(ActorId + 32) = 1;
                  ActorId = sub_1BC30B0(BattleServantData___TypeInfo, 1LL);
                  if ( ActorId )
                  {
                    v143 = ActorId;
                    if ( item )
                    {
                      ActorId = sub_1BC3144(item, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
                      if ( !ActorId )
                      {
                        v347 = sub_1BC3288(0LL);
                        sub_1BC3130(v347, 0LL);
                      }
                    }
                    if ( !*(_DWORD *)(v143 + 24) )
                      goto LABEL_382;
                    *(_QWORD *)(v143 + 32) = item;
                    sub_1BC2FAC((CGThumbnailListItem_o *)(v143 + 32), (int32_t)item, v140, v142);
                    *(_QWORD *)(v56 + 72) = v143;
                    sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 72), v143, v144, v145);
                    v146 = (System_Func_object__object__o *)sub_1BC3254(System_Func_BattleServantData__BattleServantData__TypeInfo);
                    System_Func_object__object____ctor(
                      v146,
                      (Il2CppObject *)v56,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__,
                      0LL);
                    *(_QWORD *)(v56 + 64) = v146;
                    v351 = v56 + 64;
                    sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 64), (int32_t)v146, v147, v148);
                    v362 = sub_1BC3254(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
                    System_Func_bool__bool__object____ctor(
                      (System_Func_T1__T2__TResult__o *)v362,
                      (Il2CppObject *)v56,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__,
                      0LL);
                    ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( ActorId )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)ActorId,
                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                      v150 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1BC3254(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
                      BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v150, 0LL);
                      v152 = *(_QWORD *)(v141 + 24);
                      v153 = v364;
                      v363 = v63;
                      v361 = v141;
                      if ( (int)v152 >= 1 )
                      {
                        v154 = 0LL;
                        do
                        {
                          if ( v154 >= (unsigned int)v152 )
                            goto LABEL_382;
                          v155 = *(unsigned __int8 *)(v141 + v154 + 32);
                          if ( *(_BYTE *)(v141 + v154 + 32) )
                            v156 = 177;
                          else
                            v156 = 138;
                          ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                                               (BattleLogicNomal_o *)ActorId,
                                               *v356,
                                               actSvtBuffData,
                                               v156,
                                               *v364,
                                               v151);
                          if ( !v362 )
                            goto LABEL_381;
                          v157 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
                          ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v362 + 24))(
                                      *(_QWORD *)(v362 + 64),
                                      v155 != 0,
                                      v360,
                                      *(_QWORD *)(v362 + 40));
                          if ( !ActorId )
                            goto LABEL_381;
                          v158 = *(_QWORD *)ActorId;
                          v159 = ActorId;
                          v160 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                          {
                            v161 = (int *)(*(_QWORD *)(v158 + 176) + 8LL);
                            while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v161 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                            {
                              --v160;
                              v161 += 4;
                              if ( !v160 )
                                goto LABEL_94;
                            }
                            v162 = v158 + 16LL * *v161 + 312;
                          }
                          else
                          {
LABEL_94:
                            v162 = sub_1C13570(
                                     ActorId,
                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                     0LL);
                          }
                          v163 = (*(__int64 (__fastcall **)(__int64, _QWORD))v162)(v159, *(_QWORD *)(v162 + 8));
                          v165 = v163;
                          while ( 1 )
                          {
                            if ( !v165 )
                              sub_1BC3264(v163, v164);
                            v166 = *(_QWORD *)v165;
                            v167 = *(unsigned __int16 *)(*(_QWORD *)v165 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v165 + 302LL) )
                            {
                              v168 = (int *)(*(_QWORD *)(v166 + 176) + 8LL);
                              while ( *((System_Collections_IEnumerator_c **)v168 - 1) != System_Collections_IEnumerator_TypeInfo )
                              {
                                --v167;
                                v168 += 4;
                                if ( !v167 )
                                  goto LABEL_102;
                              }
                              v169 = v166 + 16LL * *v168 + 312;
                            }
                            else
                            {
LABEL_102:
                              v169 = sub_1C13570(v165, System_Collections_IEnumerator_TypeInfo, 0LL);
                            }
                            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v169)(v165, *(_QWORD *)(v169 + 8)) & 1) == 0 )
                              break;
                            v170 = *(_QWORD *)v165;
                            v171 = *(unsigned __int16 *)(*(_QWORD *)v165 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v165 + 302LL) )
                            {
                              v172 = (int *)(*(_QWORD *)(v170 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v172 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                              {
                                --v171;
                                v172 += 4;
                                if ( !v171 )
                                  goto LABEL_109;
                              }
                              v173 = v170 + 16LL * *v172 + 312;
                            }
                            else
                            {
LABEL_109:
                              v173 = sub_1C13570(
                                       v165,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v174 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v173)(
                                                     v165,
                                                     *(_QWORD *)(v173 + 8));
                            if ( !v355 )
                              sub_1BC3264(v174, v174);
                            v175 = System_Collections_Generic_Dictionary_object__object___get_Item(
                                     v355,
                                     v174,
                                     (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                            BattleLogicNomal__commandCodeBuffProcess(
                              this,
                              (BattleBuffData_CheckInvokeBuff_o *)v175,
                              (SkillLvMaster_o *)MasterData_object,
                              *v364,
                              v157,
                              *v69,
                              0,
                              v150,
                              v348);
                          }
                          v176 = *(_QWORD *)v165;
                          v177 = *(unsigned __int16 *)(*(_QWORD *)v165 + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)v165 + 302LL) )
                          {
                            v178 = (int *)(*(_QWORD *)(v176 + 176) + 8LL);
                            while ( *((System_IDisposable_c **)v178 - 1) != System_IDisposable_TypeInfo )
                            {
                              --v177;
                              v178 += 4;
                              if ( !v177 )
                                goto LABEL_117;
                            }
                            v179 = v176 + 16LL * *v178 + 312;
                          }
                          else
                          {
LABEL_117:
                            v179 = sub_1C13570(v165, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v179)(v165, *(_QWORD *)(v179 + 8));
                          v141 = v361;
                          LODWORD(v152) = *(_DWORD *)(v361 + 24);
                          ++v154;
                        }
                        while ( (__int64)v154 < (int)v152 );
                        if ( (int)v152 >= 1 )
                        {
                          v180 = 0LL;
                          while ( v180 < (unsigned int)v152 )
                          {
                            processArgs = (BattleLogic_DamageProcessArgs_o *)v180;
                            v181 = *(unsigned __int8 *)(v141 + v180 + 32);
                            ActorId = sub_1BC30B0(BuffList_ACTION___TypeInfo, 2LL);
                            if ( !ActorId )
                              goto LABEL_381;
                            v182 = *(_DWORD *)(ActorId + 24);
                            v183 = (BuffList_ACTION_array *)ActorId;
                            if ( v181 )
                            {
                              if ( !v182 )
                                break;
                              *(_DWORD *)(ActorId + 32) = 118;
                              if ( v182 == 1 )
                                break;
                              v184 = 120;
                            }
                            else
                            {
                              if ( !v182 )
                                break;
                              *(_DWORD *)(ActorId + 32) = 88;
                              if ( v182 == 1 )
                                break;
                              v184 = 98;
                            }
                            *(_DWORD *)(ActorId + 36) = v184;
                            ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v362 + 24))(
                                        *(_QWORD *)(v362 + 64),
                                        v181 != 0,
                                        v360,
                                        *(_QWORD *)(v362 + 40));
                            if ( !ActorId )
                              goto LABEL_381;
                            v185 = *(_QWORD *)ActorId;
                            v186 = ActorId;
                            v187 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                            {
                              v188 = (int *)(*(_QWORD *)(v185 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v188 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                              {
                                --v187;
                                v188 += 4;
                                if ( !v187 )
                                  goto LABEL_139;
                              }
                              v189 = v185 + 16LL * *v188 + 312;
                            }
                            else
                            {
LABEL_139:
                              v189 = sub_1C13570(
                                       ActorId,
                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v191 = (*(__int64 (__fastcall **)(__int64, _QWORD))v189)(v186, *(_QWORD *)(v189 + 8));
                            if ( !v191 )
                              sub_1BC3264(0LL, v190);
                            while ( 1 )
                            {
                              v192 = *(_QWORD *)v191;
                              v193 = *(unsigned __int16 *)(*(_QWORD *)v191 + 302LL);
                              if ( *(_WORD *)(*(_QWORD *)v191 + 302LL) )
                              {
                                v194 = (int *)(*(_QWORD *)(v192 + 176) + 8LL);
                                while ( *((System_Collections_IEnumerator_c **)v194 - 1) != System_Collections_IEnumerator_TypeInfo )
                                {
                                  --v193;
                                  v194 += 4;
                                  if ( !v193 )
                                    goto LABEL_146;
                                }
                                v63 = v363;
                                v153 = v364;
                                v195 = v192 + 16LL * *v194 + 312;
                              }
                              else
                              {
LABEL_146:
                                v63 = v363;
                                v153 = v364;
                                v195 = sub_1C13570(v191, System_Collections_IEnumerator_TypeInfo, 0LL);
                              }
                              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v195)(v191, *(_QWORD *)(v195 + 8)) & 1) == 0 )
                                break;
                              v196 = *(_QWORD *)v191;
                              v197 = *(unsigned __int16 *)(*(_QWORD *)v191 + 302LL);
                              if ( *(_WORD *)(*(_QWORD *)v191 + 302LL) )
                              {
                                v198 = (int *)(*(_QWORD *)(v196 + 176) + 8LL);
                                while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v198 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                {
                                  --v197;
                                  v198 += 4;
                                  if ( !v197 )
                                    goto LABEL_153;
                                }
                                v199 = v196 + 16LL * *v198 + 312;
                              }
                              else
                              {
LABEL_153:
                                v199 = sub_1C13570(
                                         v191,
                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                         0LL);
                              }
                              v201 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v199)(
                                                              v191,
                                                              *(_QWORD *)(v199 + 8));
                              if ( !*v63 )
                                sub_1BC3264(0LL, v200);
                              AttackSideEffectBuffList_45164456 = BattleServantData__getAttackSideEffectBuffList_45164456(
                                                                    *v63,
                                                                    v183,
                                                                    *v153,
                                                                    v201,
                                                                    0LL);
                              v205 = AttackSideEffectBuffList_45164456;
                              if ( !AttackSideEffectBuffList_45164456 )
                                sub_1BC3264(0LL, v203);
                              v206 = *(_QWORD *)&AttackSideEffectBuffList_45164456->max_length;
                              if ( (int)v206 >= 1 )
                              {
                                v207 = 0LL;
                                do
                                {
                                  if ( v207 >= (unsigned int)v206 )
                                    sub_1BC326C(AttackSideEffectBuffList_45164456, v203, v204);
                                  if ( !*v69 )
                                    sub_1BC3264(0LL, v203);
                                  v208 = v205->m_Items[v207];
                                  logicfunction = this->fields.logicfunction;
                                  SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v69, 3, 0LL);
                                  if ( !logicfunction )
                                    sub_1BC3264(SideEffectActionData, v211);
                                  BattleLogicFunction__SetSideEffectBuff(
                                    logicfunction,
                                    (SkillLvMaster_o *)MasterData_object,
                                    SideEffectActionData,
                                    v208,
                                    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v150,
                                    0,
                                    0LL);
                                  LODWORD(v206) = v205->max_length;
                                  ++v207;
                                }
                                while ( (__int64)v207 < (int)v206 );
                              }
                            }
                            v212 = *(_QWORD *)v191;
                            v213 = *(unsigned __int16 *)(*(_QWORD *)v191 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v191 + 302LL) )
                            {
                              v214 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
                              while ( *((System_IDisposable_c **)v214 - 1) != System_IDisposable_TypeInfo )
                              {
                                --v213;
                                v214 += 4;
                                if ( !v213 )
                                  goto LABEL_168;
                              }
                              v215 = v212 + 16LL * *v214 + 312;
                            }
                            else
                            {
LABEL_168:
                              v215 = sub_1C13570(v191, System_IDisposable_TypeInfo, 0LL);
                            }
                            ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v215)(v191, *(_QWORD *)(v215 + 8));
                            v141 = v361;
                            LODWORD(v152) = *(_DWORD *)(v361 + 24);
                            v180 = (unsigned __int64)&processArgs->klass + 1;
                            if ( (__int64)&processArgs->klass + 1 >= (int)v152 )
                              goto LABEL_178;
                          }
LABEL_382:
                          sub_1BC326C(ActorId, v58, v140);
                        }
                      }
LABEL_178:
                      processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1BC3254(BattleLogic_DamageProcessArgs_TypeInfo);
                      BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL, 0LL);
                      if ( v362 )
                      {
                        ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v362 + 24))(
                                    *(_QWORD *)(v362 + 64),
                                    0LL,
                                    0LL,
                                    *(_QWORD *)(v362 + 40));
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
                                goto LABEL_184;
                            }
                            v220 = v216 + 16LL * *v219 + 312;
                          }
                          else
                          {
LABEL_184:
                            v220 = sub_1C13570(
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
                              sub_1BC3264(v221, v222);
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
                                  goto LABEL_192;
                              }
                              v228 = v225 + 16LL * *v227 + 312;
                            }
                            else
                            {
LABEL_192:
                              v228 = sub_1C13570(v223, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                                  goto LABEL_199;
                              }
                              v232 = v229 + 16LL * *v231 + 312;
                            }
                            else
                            {
LABEL_199:
                              v232 = sub_1C13570(
                                       v223,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v234 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v232)(
                                                            v223,
                                                            *(_QWORD *)(v232 + 8));
                            v235 = this->fields.logic;
                            if ( !v235 )
                              sub_1BC3264(0LL, v233);
                            DamageList = BattleLogic__GetDamageList(v235, *v63, v234, *v153, processArgsa, *v69, 0LL);
                            v238 = DamageList;
                            if ( v234 == (BattleServantData_o *)item )
                              v224 = DamageList;
                            if ( !v234 )
                              sub_1BC3264(DamageList, v237);
                            buffData = v234->fields.buffData;
                            if ( !buffData )
                              sub_1BC3264(DamageList, v237);
                            if ( !buffData->fields.isNoDamage )
                            {
                              v240 = *v69;
                              v241 = BattleBuffData__UseProgressingDoNotAct(v234->fields.buffData, v234, 0, 0LL);
                              if ( !v240 )
                                sub_1BC3264(v241, v241);
                              BattleActionData__addSideEffectActionData(v240, v241, 1, 0LL);
                            }
                            if ( !*v63 )
                              sub_1BC3264(0LL, v237);
                            v242 = BattleServantData__checkPlayer(*v63, 0LL);
                            v244 = *v69;
                            if ( v242 )
                            {
                              if ( !v244 )
                                sub_1BC3264(v242, v243);
                              if ( !v244->fields.isCounter )
                              {
                                if ( !*v63 )
                                  sub_1BC3264(v242, v243);
                                v234->fields.overkillTargetId = (*v63)->fields.uniqueId;
                              }
                            }
                            else if ( !v244 )
                            {
                              sub_1BC3264(v242, v243);
                            }
                            BattleActionData__setDamageData(v244, v238, 0LL, 0, 0, 0LL);
                          }
                          v245 = *(_QWORD *)v223;
                          v246 = *(unsigned __int16 *)(*(_QWORD *)v223 + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)v223 + 302LL) )
                          {
                            v247 = (int *)(*(_QWORD *)(v245 + 176) + 8LL);
                            while ( *((System_IDisposable_c **)v247 - 1) != System_IDisposable_TypeInfo )
                            {
                              --v246;
                              v247 += 4;
                              if ( !v246 )
                                goto LABEL_221;
                            }
                            v248 = v245 + 16LL * *v247 + 312;
                          }
                          else
                          {
LABEL_221:
                            v248 = sub_1C13570(v223, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v248)(v223, *(_QWORD *)(v248 + 8));
                          if ( *(_QWORD *)v351 )
                          {
                            (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v351 + 24LL))(
                              *(_QWORD *)(*(_QWORD *)v351 + 64LL),
                              item,
                              *(_QWORD *)(*(_QWORD *)v351 + 40LL));
                            ActorId = (__int64)*v153;
                            if ( *v153 )
                            {
                              v249 = *v69;
                              ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
                              if ( v249 )
                              {
                                v249->fields.type = ActorId;
                                ActorId = (__int64)*v69;
                                if ( *v69 )
                                {
                                  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v153, 0LL);
                                  v58 = *v153;
                                  if ( *v153 )
                                  {
                                    v250 = *v69;
                                    if ( *v69 )
                                    {
                                      v250->fields.actionIndex = v58->fields.actionIndex;
                                      ActorId = (__int64)*v63;
                                      if ( *v63 )
                                      {
                                        ActorId = BattleServantData__getMotionId(
                                                    (BattleServantData_o *)ActorId,
                                                    v58,
                                                    0LL);
                                        v250->fields.motionId = ActorId;
                                        if ( v224 )
                                        {
                                          v251 = *v69;
                                          ActorId = BattleActionData_DamageData__getAttackCount(v224, 0LL);
                                          if ( v251 )
                                          {
                                            v251->fields.attackcount = ActorId;
                                            v252 = this->fields.data;
                                            v253 = v361;
                                            if ( v252 )
                                            {
                                              perf = v252->fields.perf;
                                              if ( perf )
                                              {
                                                if ( *v153 )
                                                {
                                                  ActorId = (__int64)perf->fields.commandPerf;
                                                  if ( ActorId )
                                                  {
                                                    BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                                      (BattlePerformanceCommandCard_o *)ActorId,
                                                      (*v153)->fields.actionIndex,
                                                      0LL);
                                                    if ( *v63 )
                                                    {
                                                      ActorId = (__int64)this->fields.data;
                                                      if ( ActorId )
                                                      {
                                                        v255 = *v69;
                                                        ActorId = BattleData__isPrevAttackMe(
                                                                    (BattleData_o *)ActorId,
                                                                    (*v63)->fields.uniqueId,
                                                                    targetId,
                                                                    0LL);
                                                        if ( v255 )
                                                        {
                                                          v255->fields.prevattackme = ActorId & 1;
                                                          v257 = *(_QWORD *)(v361 + 24);
                                                          if ( (int)v257 >= 1 )
                                                          {
                                                            v258 = 0LL;
                                                            do
                                                            {
                                                              if ( v258 >= (unsigned int)v257 )
                                                                goto LABEL_382;
                                                              v259 = *(unsigned __int8 *)(v253 + v258 + 32);
                                                              if ( *(_BYTE *)(v253 + v258 + 32) )
                                                                v260 = 178;
                                                              else
                                                                v260 = 159;
                                                              TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                                                                            (BattleLogicNomal_o *)ActorId,
                                                                                            *v356,
                                                                                            actSvtBuffData,
                                                                                            v260,
                                                                                            *v364,
                                                                                            v256);
                                                              ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v362 + 24))(
                                                                          *(_QWORD *)(v362 + 64),
                                                                          v259,
                                                                          v360,
                                                                          *(_QWORD *)(v362 + 40));
                                                              if ( !ActorId )
                                                                goto LABEL_381;
                                                              v262 = *(_QWORD *)ActorId;
                                                              v263 = ActorId;
                                                              v264 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                              {
                                                                v265 = (int *)(*(_QWORD *)(v262 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v265
                                                                        - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                {
                                                                  --v264;
                                                                  v265 += 4;
                                                                  if ( !v264 )
                                                                    goto LABEL_250;
                                                                }
                                                                v266 = v262 + 16LL * *v265 + 312;
                                                              }
                                                              else
                                                              {
LABEL_250:
                                                                v266 = sub_1C13570(
                                                                         ActorId,
                                                                         System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v267 = (*(__int64 (__fastcall **)(__int64, _QWORD))v266)(
                                                                       v263,
                                                                       *(_QWORD *)(v266 + 8));
                                                              v269 = v267;
                                                              while ( 1 )
                                                              {
                                                                if ( !v269 )
                                                                  sub_1BC3264(v267, v268);
                                                                v270 = *(_QWORD *)v269;
                                                                v271 = *(unsigned __int16 *)(*(_QWORD *)v269 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v269 + 302LL) )
                                                                {
                                                                  v272 = (int *)(*(_QWORD *)(v270 + 176) + 8LL);
                                                                  while ( *((System_Collections_IEnumerator_c **)v272 - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                  {
                                                                    --v271;
                                                                    v272 += 4;
                                                                    if ( !v271 )
                                                                      goto LABEL_258;
                                                                  }
                                                                  v273 = v270 + 16LL * *v272 + 312;
                                                                }
                                                                else
                                                                {
LABEL_258:
                                                                  v273 = sub_1C13570(
                                                                           v269,
                                                                           System_Collections_IEnumerator_TypeInfo,
                                                                           0LL);
                                                                }
                                                                if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v273)(
                                                                        v269,
                                                                        *(_QWORD *)(v273 + 8)) & 1) == 0 )
                                                                  break;
                                                                v274 = *(_QWORD *)v269;
                                                                v275 = *(unsigned __int16 *)(*(_QWORD *)v269 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v269 + 302LL) )
                                                                {
                                                                  v276 = (int *)(*(_QWORD *)(v274 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v276
                                                                          - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v275;
                                                                    v276 += 4;
                                                                    if ( !v275 )
                                                                      goto LABEL_265;
                                                                  }
                                                                  v277 = v274 + 16LL * *v276 + 312;
                                                                }
                                                                else
                                                                {
LABEL_265:
                                                                  v277 = sub_1C13570(
                                                                           v269,
                                                                           System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v278 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v277)(
                                                                                         v269,
                                                                                         *(_QWORD *)(v277 + 8));
                                                                if ( !v355 )
                                                                  sub_1BC3264(v278, v278);
                                                                v279 = System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                         v355,
                                                                         v278,
                                                                         (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                                                                BattleLogicNomal__commandCodeBuffProcess(
                                                                  this,
                                                                  (BattleBuffData_CheckInvokeBuff_o *)v279,
                                                                  (SkillLvMaster_o *)MasterData_object,
                                                                  *v364,
                                                                  TargetCommandCodeBuffList,
                                                                  *v69,
                                                                  1,
                                                                  v150,
                                                                  v348);
                                                              }
                                                              v280 = *(_QWORD *)v269;
                                                              v281 = *(unsigned __int16 *)(*(_QWORD *)v269 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v269 + 302LL) )
                                                              {
                                                                v282 = (int *)(*(_QWORD *)(v280 + 176) + 8LL);
                                                                while ( *((System_IDisposable_c **)v282 - 1) != System_IDisposable_TypeInfo )
                                                                {
                                                                  --v281;
                                                                  v282 += 4;
                                                                  if ( !v281 )
                                                                    goto LABEL_273;
                                                                }
                                                                v283 = v280 + 16LL * *v282 + 312;
                                                              }
                                                              else
                                                              {
LABEL_273:
                                                                v283 = sub_1C13570(
                                                                         v269,
                                                                         System_IDisposable_TypeInfo,
                                                                         0LL);
                                                              }
                                                              ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v283)(
                                                                          v269,
                                                                          *(_QWORD *)(v283 + 8));
                                                              v253 = v361;
                                                              LODWORD(v257) = *(_DWORD *)(v361 + 24);
                                                              ++v258;
                                                            }
                                                            while ( (__int64)v258 < (int)v257 );
                                                            if ( (int)v257 >= 1 )
                                                            {
                                                              v284 = 0LL;
                                                              while ( v284 < (unsigned int)v257 )
                                                              {
                                                                v285 = *(unsigned __int8 *)(v253 + v284 + 32);
                                                                ActorId = sub_1BC30B0(BuffList_ACTION___TypeInfo, 2LL);
                                                                if ( !ActorId )
                                                                  goto LABEL_381;
                                                                v286 = *(_DWORD *)(ActorId + 24);
                                                                v287 = (BuffList_ACTION_array *)ActorId;
                                                                if ( v285 )
                                                                {
                                                                  if ( !v286 )
                                                                    goto LABEL_382;
                                                                  *(_DWORD *)(ActorId + 32) = 119;
                                                                  if ( v286 == 1 )
                                                                    goto LABEL_382;
                                                                  v288 = 121;
                                                                }
                                                                else
                                                                {
                                                                  if ( !v286 )
                                                                    goto LABEL_382;
                                                                  *(_DWORD *)(ActorId + 32) = 57;
                                                                  if ( v286 == 1 )
                                                                    goto LABEL_382;
                                                                  v288 = 80;
                                                                }
                                                                *(_DWORD *)(ActorId + 36) = v288;
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v362 + 24))(
                                                                            *(_QWORD *)(v362 + 64),
                                                                            v285 != 0,
                                                                            v360,
                                                                            *(_QWORD *)(v362 + 40));
                                                                if ( !ActorId )
                                                                  goto LABEL_381;
                                                                v289 = *(_QWORD *)ActorId;
                                                                v290 = ActorId;
                                                                v291 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                                {
                                                                  v292 = (int *)(*(_QWORD *)(v289 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v292
                                                                          - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v291;
                                                                    v292 += 4;
                                                                    if ( !v291 )
                                                                      goto LABEL_295;
                                                                  }
                                                                  v293 = v289 + 16LL * *v292 + 312;
                                                                }
                                                                else
                                                                {
LABEL_295:
                                                                  v293 = sub_1C13570(
                                                                           ActorId,
                                                                           System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v295 = (*(__int64 (__fastcall **)(__int64, _QWORD))v293)(
                                                                         v290,
                                                                         *(_QWORD *)(v293 + 8));
                                                                if ( !v295 )
                                                                  sub_1BC3264(0LL, v294);
                                                                while ( 1 )
                                                                {
                                                                  v296 = *(_QWORD *)v295;
                                                                  v297 = *(unsigned __int16 *)(*(_QWORD *)v295 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v295 + 302LL) )
                                                                  {
                                                                    v298 = (int *)(*(_QWORD *)(v296 + 176) + 8LL);
                                                                    while ( *((System_Collections_IEnumerator_c **)v298
                                                                            - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                    {
                                                                      --v297;
                                                                      v298 += 4;
                                                                      if ( !v297 )
                                                                        goto LABEL_302;
                                                                    }
                                                                    v299 = v296 + 16LL * *v298 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_302:
                                                                    v299 = sub_1C13570(
                                                                             v295,
                                                                             System_Collections_IEnumerator_TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v299)(
                                                                          v295,
                                                                          *(_QWORD *)(v299 + 8)) & 1) == 0 )
                                                                    break;
                                                                  v300 = *(_QWORD *)v295;
                                                                  v301 = *(unsigned __int16 *)(*(_QWORD *)v295 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v295 + 302LL) )
                                                                  {
                                                                    v302 = (int *)(*(_QWORD *)(v300 + 176) + 8LL);
                                                                    while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v302
                                                                            - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                    {
                                                                      --v301;
                                                                      v302 += 4;
                                                                      if ( !v301 )
                                                                        goto LABEL_309;
                                                                    }
                                                                    v303 = v300 + 16LL * *v302 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_309:
                                                                    v303 = sub_1C13570(
                                                                             v295,
                                                                             System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  v305 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v303)(
                                                                                                  v295,
                                                                                                  *(_QWORD *)(v303 + 8));
                                                                  if ( !*v363 )
                                                                    sub_1BC3264(0LL, v304);
                                                                  v306 = BattleServantData__getAttackSideEffectBuffList_45164456(
                                                                           *v363,
                                                                           v287,
                                                                           *v364,
                                                                           v305,
                                                                           0LL);
                                                                  v309 = v306;
                                                                  if ( !v306 )
                                                                    sub_1BC3264(0LL, v307);
                                                                  v310 = *(_QWORD *)&v306->max_length;
                                                                  if ( (int)v310 >= 1 )
                                                                  {
                                                                    v311 = 0LL;
                                                                    do
                                                                    {
                                                                      if ( v311 >= (unsigned int)v310 )
                                                                        sub_1BC326C(v306, v307, v308);
                                                                      v312 = this->fields.logicfunction;
                                                                      if ( !v312 )
                                                                        sub_1BC3264(0LL, v307);
                                                                      BattleLogicFunction__SetSideEffectBuff(
                                                                        v312,
                                                                        (SkillLvMaster_o *)MasterData_object,
                                                                        *v69,
                                                                        v309->m_Items[v311],
                                                                        (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v150,
                                                                        1,
                                                                        0LL);
                                                                      LODWORD(v310) = v309->max_length;
                                                                      ++v311;
                                                                    }
                                                                    while ( (__int64)v311 < (int)v310 );
                                                                  }
                                                                }
                                                                v313 = *(_QWORD *)v295;
                                                                v314 = *(unsigned __int16 *)(*(_QWORD *)v295 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v295 + 302LL) )
                                                                {
                                                                  v315 = (int *)(*(_QWORD *)(v313 + 176) + 8LL);
                                                                  while ( *((System_IDisposable_c **)v315 - 1) != System_IDisposable_TypeInfo )
                                                                  {
                                                                    --v314;
                                                                    v315 += 4;
                                                                    if ( !v314 )
                                                                      goto LABEL_323;
                                                                  }
                                                                  v316 = v313 + 16LL * *v315 + 312;
                                                                }
                                                                else
                                                                {
LABEL_323:
                                                                  v316 = sub_1C13570(
                                                                           v295,
                                                                           System_IDisposable_TypeInfo,
                                                                           0LL);
                                                                }
                                                                ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v316)(
                                                                            v295,
                                                                            *(_QWORD *)(v316 + 8));
                                                                v253 = v361;
                                                                LODWORD(v257) = *(_DWORD *)(v361 + 24);
                                                                if ( (__int64)++v284 >= (int)v257 )
                                                                  goto LABEL_332;
                                                              }
                                                              goto LABEL_382;
                                                            }
                                                          }
LABEL_332:
                                                          ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v362 + 24))(
                                                                      *(_QWORD *)(v362 + 64),
                                                                      0LL,
                                                                      0LL,
                                                                      *(_QWORD *)(v362 + 40));
                                                          if ( ActorId )
                                                          {
                                                            v317 = *(_QWORD *)ActorId;
                                                            v318 = ActorId;
                                                            v319 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                            if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                            {
                                                              v320 = (int *)(*(_QWORD *)(v317 + 176) + 8LL);
                                                              while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v320
                                                                      - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                              {
                                                                --v319;
                                                                v320 += 4;
                                                                if ( !v319 )
                                                                  goto LABEL_337;
                                                              }
                                                              v321 = v317 + 16LL * *v320 + 312;
                                                            }
                                                            else
                                                            {
LABEL_337:
                                                              v321 = sub_1C13570(
                                                                       ActorId,
                                                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                       0LL);
                                                            }
                                                            v322 = (*(__int64 (__fastcall **)(__int64, _QWORD))v321)(
                                                                     v318,
                                                                     *(_QWORD *)(v321 + 8));
                                                            v324 = v322;
                                                            while ( 1 )
                                                            {
                                                              if ( !v324 )
                                                                sub_1BC3264(v322, v323);
                                                              v325 = *(_QWORD *)v324;
                                                              v326 = *(unsigned __int16 *)(*(_QWORD *)v324 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v324 + 302LL) )
                                                              {
                                                                v327 = (int *)(*(_QWORD *)(v325 + 176) + 8LL);
                                                                while ( *((System_Collections_IEnumerator_c **)v327 - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                {
                                                                  --v326;
                                                                  v327 += 4;
                                                                  if ( !v326 )
                                                                    goto LABEL_345;
                                                                }
                                                                v328 = v325 + 16LL * *v327 + 312;
                                                              }
                                                              else
                                                              {
LABEL_345:
                                                                v328 = sub_1C13570(
                                                                         v324,
                                                                         System_Collections_IEnumerator_TypeInfo,
                                                                         0LL);
                                                              }
                                                              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v328)(
                                                                      v324,
                                                                      *(_QWORD *)(v328 + 8)) & 1) == 0 )
                                                                break;
                                                              v329 = *(_QWORD *)v324;
                                                              v330 = *(unsigned __int16 *)(*(_QWORD *)v324 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v324 + 302LL) )
                                                              {
                                                                v331 = (int *)(*(_QWORD *)(v329 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v331
                                                                        - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                {
                                                                  --v330;
                                                                  v331 += 4;
                                                                  if ( !v330 )
                                                                    goto LABEL_352;
                                                                }
                                                                v332 = v329 + 16LL * *v331 + 312;
                                                              }
                                                              else
                                                              {
LABEL_352:
                                                                v332 = sub_1C13570(
                                                                         v324,
                                                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v333 = (*(__int64 (__fastcall **)(__int64, _QWORD))v332)(
                                                                       v324,
                                                                       *(_QWORD *)(v332 + 8));
                                                              if ( !*v363 )
                                                                sub_1BC3264(v333, v334);
                                                              if ( !v333 )
                                                                sub_1BC3264(0LL, v334);
                                                              if ( !this->fields.logic )
                                                                sub_1BC3264(v333, v334);
                                                              v322 = BattleLogic__SetDamageSideEffect(
                                                                       this->fields.logic,
                                                                       *v69,
                                                                       (*v363)->fields.uniqueId,
                                                                       *(_DWORD *)(v333 + 24),
                                                                       *v364,
                                                                       0LL);
                                                            }
                                                            v335 = *(_QWORD *)v324;
                                                            v336 = *(unsigned __int16 *)(*(_QWORD *)v324 + 302LL);
                                                            if ( *(_WORD *)(*(_QWORD *)v324 + 302LL) )
                                                            {
                                                              v337 = (int *)(*(_QWORD *)(v335 + 176) + 8LL);
                                                              while ( *((System_IDisposable_c **)v337 - 1) != System_IDisposable_TypeInfo )
                                                              {
                                                                --v336;
                                                                v337 += 4;
                                                                if ( !v336 )
                                                                  goto LABEL_362;
                                                              }
                                                              v338 = v335 + 16LL * *v337 + 312;
                                                            }
                                                            else
                                                            {
LABEL_362:
                                                              v338 = sub_1C13570(v324, System_IDisposable_TypeInfo, 0LL);
                                                            }
                                                            (*(void (__fastcall **)(__int64, _QWORD))v338)(
                                                              v324,
                                                              *(_QWORD *)(v338 + 8));
                                                            ActorId = *v349;
                                                            if ( *v349 )
                                                            {
                                                              System_Collections_Generic_List_object___GetEnumerator(
                                                                (System_Collections_Generic_List_Enumerator_T__o *)&v365,
                                                                (System_Collections_Generic_List_object__o *)ActorId,
                                                                (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
                                                              v366 = v365;
                                                              while ( 1 )
                                                              {
                                                                v339 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                                         &v366,
                                                                         (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
                                                                if ( !v339 )
                                                                  break;
                                                                current = v366.fields._current;
                                                                if ( !v366.fields._current )
                                                                  sub_1BC3264(v339, v340);
                                                                monitor = v366.fields._current[49].monitor;
                                                                if ( !monitor )
                                                                  sub_1BC3264(v339, v340);
                                                                monitor[152] = 0;
                                                                if ( v352->fields.isCanCounterTask )
                                                                {
                                                                  if ( !*v363 )
                                                                    sub_1BC3264(v339, v340);
                                                                  v343 = this->fields.data;
                                                                  if ( !v343 )
                                                                    sub_1BC3264(0LL, v340);
                                                                  BattleData__SetWasAttackTargetId(
                                                                    v343,
                                                                    (*v363)->fields.uniqueId,
                                                                    (int32_t)current[1].monitor,
                                                                    0LL);
                                                                }
                                                              }
                                                              System_Collections_Generic_List_Enumerator_object___Dispose(
                                                                &v366,
                                                                (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
                                                              if ( *(_QWORD *)v351 )
                                                              {
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v351 + 24LL))(
                                                                            *(_QWORD *)(*(_QWORD *)v351 + 64LL),
                                                                            item,
                                                                            *(_QWORD *)(*(_QWORD *)v351 + 40LL));
                                                                v344 = *v69;
                                                                if ( *v69 )
                                                                {
                                                                  v344->fields.isForcedSpeedOne = v352->fields.isForcedSpeedOne;
                                                                  v344->fields.isAllAttack = v350;
                                                                  if ( *v363 )
                                                                  {
                                                                    ActorId = (__int64)this->fields.data;
                                                                    if ( ActorId )
                                                                    {
                                                                      BattleData__setCommandAttack(
                                                                        (BattleData_o *)ActorId,
                                                                        (*v363)->fields.uniqueId,
                                                                        targetId,
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
                                                                          v345 = this->fields.logic;
                                                                          v346 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1BC3254(BattleAddSkillTaskAfterCommandAttack_TypeInfo);
                                                                          BattleAddSkillTaskAfterCommandAttack___ctor(
                                                                            v346,
                                                                            0LL);
                                                                          if ( v345 )
                                                                          {
                                                                            BattleLogic__AddSkillTask(
                                                                              v345,
                                                                              (BattleAddSkillTaskAroundTargetTask_o *)v346,
                                                                              v352,
                                                                              targetId,
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
LABEL_381:
    sub_1BC3264(ActorId, v58);
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

  if ( (byte_4B04FCA & 1) == 0 )
  {
    sub_1BC3008(&BattleActionData_TypeInfo, task);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_8672/*"MOTION_DO_NOT_ACT"*/, v6);
    byte_4B04FCA = 1;
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
    v13 = sub_1BC3254(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v13 )
      {
        *(_DWORD *)(v13 + 32) = (_DWORD)data;
        v16 = StringLiteral_8672/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v13 + 72) = StringLiteral_8672/*"MOTION_DO_NOT_ACT"*/;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 72), v16, v14, v15);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v13 + 64) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v13;
        }
      }
    }
LABEL_16:
    sub_1BC3264(data, task);
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

  if ( (byte_4B04FC9 & 1) == 0 )
  {
    sub_1BC3008(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_4B04FC9 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1BC3254(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1BC3264(data, v5);
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
  UnityEngine_Object_o *PartsActor; // x23
  struct BattleData_o *v14; // x8
  UnityEngine_Object_o *v15; // x22
  struct BattleData_o *v16; // x8
  int32_t m_CachedPtr; // w9
  __int64 *v18; // x10
  UnityEngine_Object_o *v19; // x22
  int32_t uniqueId; // w8
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B04FBF & 1) == 0 )
  {
    sub_1BC3008(&BattleActionData_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_6379/*"FOCUS_UNDER"*/, v4);
    sub_1BC3008(&StringLiteral_6377/*"FOCUS_CENTER"*/, v5);
    sub_1BC3008(&StringLiteral_6381/*"FOCUS_UP"*/, v6);
    byte_4B04FBF = 1;
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
    v12 = StringLiteral_6377/*"FOCUS_CENTER"*/;
    PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, 1, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleData_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_42;
      data = (BattleData_o *)PartsActor[21].monitor;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v14 = this->fields.data;
        if ( !v14 )
          goto LABEL_42;
        v12 = StringLiteral_6377/*"FOCUS_CENTER"*/;
        v14->fields.globaltargetId = PartsActor[21].fields.m_CachedPtr;
      }
    }
    if ( v11 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v19 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 2, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v19 )
        goto LABEL_42;
      data = (BattleData_o *)v19[21].monitor;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v16 = this->fields.data;
      if ( !v16 )
        goto LABEL_42;
      m_CachedPtr = v19[21].fields.m_CachedPtr;
      v18 = &StringLiteral_6379/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v11 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v15 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v15 )
        goto LABEL_42;
      data = (BattleData_o *)v15[21].monitor;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v16 = this->fields.data;
      if ( !v16 )
        goto LABEL_42;
      m_CachedPtr = v15[21].fields.m_CachedPtr;
      v18 = &StringLiteral_6381/*"FOCUS_UP"*/;
    }
    v12 = *v18;
    v16->fields.globaltargetId = m_CachedPtr;
LABEL_39:
    v10 = sub_1BC3254(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
    if ( v10 )
    {
      uniqueId = v9->fields.uniqueId;
      *(_DWORD *)(v10 + 32) = uniqueId;
      *(_DWORD *)(v10 + 36) = uniqueId;
      BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
      *(_QWORD *)(v10 + 72) = v12;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 72), v12, v21, v22);
      return (BattleActionData_o *)v10;
    }
LABEL_42:
    sub_1BC3264(data, method);
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

  if ( (byte_4B04FB5 & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo, method);
    byte_4B04FB5 = 1;
  }
  v3 = sub_1BC3254(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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

  if ( (byte_4B04FB7 & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_BattleBuffData_BuffData__TypeInfo, passiveBuffDict);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1BC3008(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__, v15);
    sub_1BC3008(&BattleLogicNomal___c_TypeInfo, v16);
    byte_4B04FB7 = 1;
  }
  value = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_333B53C *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v17) )
  {
LABEL_16:
    sub_1BC3264(CommandCardBuffArray, v19);
  }
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
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
    _9__22_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__22_0,
      v22,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__22_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v24, v25);
  }
  System_Collections_Generic_List_object___Sort_57288964(
    v17,
    _9__22_0,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17;
}


bool __fastcall BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(0LL, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0LL)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool __fastcall BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(0LL, method);
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
    sub_1BC3264(data, isCheckNext);
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
  UnityEngine_Object_o *PartsActor; // x20
  struct BattleData_o *v7; // x8

  if ( (byte_4B04FC1 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B04FC1 = 1;
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
        PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, (int32_t)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        data = (BattleData_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( PartsActor )
          {
            data = (BattleData_o *)PartsActor[21].monitor;
            if ( data )
            {
              data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
              if ( ((unsigned __int8)data & 1) == 0 )
                return;
              v7 = this->fields.data;
              if ( v7 )
              {
                v7->fields.globaltargetId = PartsActor[21].fields.m_CachedPtr;
                return;
              }
            }
          }
LABEL_17:
          sub_1BC3264(data, method);
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
  if ( (byte_4B04FC2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_1BC3008(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_4B04FC2 = 1;
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
      sub_1C134C8(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C1346C(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C1346C(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v12 + 184);
  }
  if ( !v3 )
  {
    v13 = Method_System_Array_Empty_int___;
    v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v14 )
    {
      sub_1C134C8(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C1346C(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C1346C(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v16 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_3038F70 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    sub_1BC3264(data, prevFieldIndiv);
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
  __int64 v17; // x2
  __int64 v18; // x21
  int v19; // w8
  unsigned int v20; // w27
  BattleServantData_o *v21; // x22
  int max_length; // w8
  BattleBuffData_BuffData_array *v23; // x23
  unsigned int v24; // w28
  BattleBuffData_BuffData_o *v25; // x24
  BattleSkillInfoData_o *v26; // x25
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v28; // x8
  BattleLogicTask_o *v29; // x24
  BattleLogic_o *logic; // x25
  __int64 v31; // x26
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v40; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B04FC6 & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_1BC3008(&BattleLogicTask_TypeInfo, v6);
    sub_1BC3008(&BattleSkillInfoData_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B04FC6 = 1;
  }
  isFirstAdd = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v18 = Instance;
  if ( !Instance )
    goto LABEL_44;
  v19 = *(_DWORD *)(Instance + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    do
    {
      if ( v20 >= v19 )
        goto LABEL_45;
      v21 = *(BattleServantData_o **)(v18 + 8LL * (int)v20 + 32);
      if ( !v21 )
        goto LABEL_44;
      if ( !v21->fields.status )
      {
        Instance = BattleServantData__isAlive(v21, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v21, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_44;
          max_length = *(_DWORD *)(Instance + 24);
          v23 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v24 = 0;
            while ( v24 < max_length )
            {
              v25 = v23->m_Items[v24];
              v26 = (BattleSkillInfoData_o *)sub_1BC3254(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v26, 0LL);
              if ( !v26 )
                goto LABEL_44;
              v26->fields.svtUniqueId = v21->fields.uniqueId;
              if ( !v25 )
                goto LABEL_44;
              vals = v25->fields.vals;
              if ( !vals )
                goto LABEL_44;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._4_set_skillId.method)(
                           v26,
                           (unsigned int)vals->m_Items[1],
                           v26->klass->vtable._5_get_skillId.methodPtr);
              v28 = v25->fields.vals;
              if ( !v28 )
                goto LABEL_44;
              if ( v28->max_length <= 1 )
                break;
              v26->fields.skilllv = v28->m_Items[2];
              v29 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v29, 0LL);
              if ( !v29 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v29, v26, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1BC30B0(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v31 = Instance;
              Instance = sub_1BC3144(v29, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v40 = sub_1BC3288(0LL);
                sub_1BC3130(v40, 0LL);
              }
              if ( !*(_DWORD *)(v31 + 24) )
                break;
              *(_QWORD *)(v31 + 32) = v29;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v29, v17, v32);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v21,
                v23,
                (BattleLogicTask_array *)v31,
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
                  (Il2CppObject *)v29,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v38[4] = (Il2CppClass *)v29;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v29, v33, v34);
              }
              max_length = v23->max_length;
              if ( (int)++v24 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1BC326C(Instance, v16, v17);
          }
LABEL_38:
          Instance = (__int64)v21->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
      }
      v19 = *(_DWORD *)(v18 + 24);
    }
    while ( (int)++v20 < v19 );
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
    sub_1BC3264(Instance, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v26; // x2
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v30; // x1
  SkillLvEntity_o *v31; // x29
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x26
  BattleActionData_o *v35; // x28
  DataVals_array *DataValsList; // x0
  __int64 v37; // x1
  BattleLogicFunction_o *v38; // x0
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v41; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+60h] [xbp-80h] BYREF

  v41 = this;
  if ( (byte_4B04FCB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v16);
    this = (BattleLogicNomal_o *)sub_1BC3008(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v17);
    byte_4B04FCB = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !commandCodeBuffList )
    sub_1BC3264(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v43.fields._current = v42.fields._current;
  if ( isCommandAfter )
    v18 = 1;
  else
    v18 = 3;
  *(_OWORD *)&v43.fields._list = *(_OWORD *)&v42.fields._list;
  type = v18;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v19 )
      break;
    if ( !command )
      sub_1BC3264(v19, v20);
    current = (BattleBuffData_BuffData_o *)v43.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1BC3264(IsEnableCommandCode, v23);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1BC3264(IsEnableCommandCode, v23);
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
          sub_1BC3264(v24, v25);
        vals = current->fields.vals;
        if ( !vals )
          sub_1BC3264(v24, v25);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1BC326C(v24, v25, v26);
        if ( max_length == 1 )
          sub_1BC326C(v24, v25, v26);
        if ( !skillLvMst )
          sub_1BC3264(v24, v25);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v31 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1BC3264(Entity, v30);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1BC3264(Entity, v30);
          logicfunction = v41->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v31->fields.funcId;
          v35 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v31, 0LL);
          if ( !logicfunction )
            sub_1BC3264(DataValsList, v37);
          BattleLogicFunction__procList(
            logicfunction,
            v35,
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
        v38 = v41->fields.logicfunction;
        if ( !v38 )
          sub_1BC3264(0LL, v25);
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
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_4B04FB9 & 1) == 0 )
  {
    sub_1BC3008(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BC3008(&StringLiteral_8662/*"MOTION_BACK"*/, v4);
    byte_4B04FB9 = 1;
  }
  v5 = sub_1BC3254(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    sub_1BC3264(v6, v7);
  *(_DWORD *)(v5 + 32) = uniqueId;
  v10 = StringLiteral_8662/*"MOTION_BACK"*/;
  *(_QWORD *)(v5 + 72) = StringLiteral_8662/*"MOTION_BACK"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 72), v10, v8, v9);
  return (BattleActionData_o *)v5;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddEnemy(
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
  data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
  if ( !data )
    goto LABEL_21;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v7 = data;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0LL;
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
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_rootfsm[v8],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v8];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        v11 = (int)data;
        data = (BattleData_o *)p_rootfsm[v8];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_22;
        data = (BattleData_o *)p_rootfsm[v8];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v11, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_22:
            sub_1BC326C(data, task, v5);
          data = (BattleData_o *)p_rootfsm[v8];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return 0LL;
    }
LABEL_21:
    sub_1BC3264(data, task);
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
  __int64 v8; // x2
  struct BattleData_o *v9; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x10
  BattleData_o *v11; // x20
  _BOOL4 v12; // w9
  unsigned __int64 v13; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  int32_t v15; // w21
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B04FC5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1BC3008(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v4);
    sub_1BC3008(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__, v5);
    sub_1BC3008(&BattleLogicNomal___c_TypeInfo, v6);
    byte_4B04FC5 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !data )
    goto LABEL_31;
  v9 = this->fields.data;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v11 = data;
  v12 = v9 == 0LL;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v13 = 0LL;
    p_rootfsm = &data->fields.rootfsm;
    while ( !v12 )
    {
      if ( v13 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_32;
      data = (BattleData_o *)v9->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_rootfsm[v13],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v13];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        v15 = (int)data;
        data = (BattleData_o *)p_rootfsm[v13];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v13];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v15, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
LABEL_32:
            sub_1BC326C(data, task, v8);
          data = (BattleData_o *)p_rootfsm[v13];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v9 = this->fields.data;
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v13;
      v12 = v9 == 0LL;
      if ( (__int64)v13 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_31:
    sub_1BC3264(data, task);
  }
LABEL_22:
  if ( v12 )
    goto LABEL_31;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v9->fields.aiNpcDataList;
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
    monitor = (System_Action_object__o *)sub_1BC3254(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(monitor, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_AiNpcBattleServantData__o *)monitor;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)monitor, v20, v21);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)monitor,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  __int64 v16; // x2
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

  if ( (byte_4B04FBA & 1) == 0 )
  {
    sub_1BC3008(&BattleActionData_TypeInfo, task);
    sub_1BC3008(&FunctionEntity_TypeInfo, v5);
    sub_1BC3008(&int___TypeInfo, v6);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v7);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v8);
    sub_1BC3008(&StringLiteral_6361/*"FIELD_PLAYER"*/, v9);
    sub_1BC3008(&StringLiteral_6360/*"FIELD_ENEMY"*/, v10);
    byte_4B04FBA = 1;
  }
  v11 = sub_1BC3254(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v15 = sub_1BC3254(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v15, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v11, 0LL);
    isBuster = sub_1BC30B0(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v18 = *(_DWORD *)(isBuster + 24);
      v13 = isBuster;
      if ( !v18 || (*(_DWORD *)(isBuster + 32) = 102, v18 == 1) )
LABEL_30:
        sub_1BC326C(isBuster, v13, v16);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 32) = isBuster;
        v19 = (CGThumbnailListItem_o *)(v15 + 32);
LABEL_14:
        sub_1BC2FAC(v19, v13, v16, v17);
        v23 = &StringLiteral_6361/*"FIELD_PLAYER"*/;
LABEL_15:
        v24 = *v23;
        *(_QWORD *)(v11 + 72) = *v23;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 72), v24, v21, v22);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1BC3264(isBuster, v13);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v11, 0LL);
    v20 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 3LL);
    v32.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v20, v32, 0LL);
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
    v29 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 3LL);
    v33.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v29, v33, 0LL);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = v29;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v29, v30, v31);
      v23 = &StringLiteral_6360/*"FIELD_ENEMY"*/;
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
    sub_1BC3264(v5, v6);
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
  __int64 v45; // x2
  int v46; // w8
  __int64 v47; // x28
  unsigned int v48; // w22
  __int64 v49; // x25
  __int64 *v50; // x25
  __int64 v51; // t1
  Il2CppObject *v52; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v57; // w25
  Il2CppClass **v58; // x27
  Il2CppClass *v59; // x8
  char *v60; // x27
  Il2CppClass *v61; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v63; // x8
  int32_t v64; // w9
  struct BattleData_o *v65; // x8
  __int64 v66; // x28
  int v67; // w8
  unsigned int v68; // w22
  __int64 v69; // x23
  __int64 *v70; // x23
  __int64 v71; // t1
  bool v72; // w3
  char v73; // w29
  Il2CppObject *v74; // x29
  struct System_Int32_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v79; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v81; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v83; // x26
  struct BattleData_o *v84; // x8
  const MethodInfo *v85; // x2
  struct BattleData_o *v86; // x8
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v93; // w23
  char v94; // w22
  BattleBuffData_BuffData_o *v95; // x28
  BattleSkillInfoData_o *v96; // x26
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  struct System_Int32_array *vals; // x8
  __int64 v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  struct System_Int32_array *v104; // x8
  BattleData_o *v105; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v107; // x1
  SkillLvEntity_o *v108; // x0
  __int64 v109; // x1
  SkillLvEntity_o *v110; // x29
  BattleData_o *v111; // x0
  _BOOL8 v112; // x0
  __int64 v113; // x1
  BattleLogic_o *v114; // x0
  int32_t v115; // w20
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v122; // x0
  __int64 v123; // x1
  System_Collections_ICollection_o *v124; // x0
  __int64 v125; // x1
  BattleLogicTask_array *v126; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v128; // x2
  BattleLogicTask_o *v129; // x0
  BattleLogic_o *v130; // x0
  __int64 v131; // x1
  BattleData_o *v132; // x0
  int32_t v133; // w23
  Il2CppObject *v134; // x28
  BattleServantData_o *isEndAct; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v139; // x20
  int v140; // w8
  int i; // w29
  BattleBuffData_BuffData_o *v142; // x26
  BattleSkillInfoData_o *v143; // x25
  __int64 v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  struct System_Int32_array *v147; // x8
  __int64 v148; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  struct System_Int32_array *v151; // x8
  BattleData_o *v152; // x0
  BattleServantData_o *v153; // x27
  __int64 v154; // x1
  SkillLvEntity_o *v155; // x0
  __int64 v156; // x1
  SkillLvEntity_o *v157; // x20
  BattleData_o *v158; // x0
  _BOOL8 v159; // x0
  __int64 v160; // x1
  BattleLogic_o *v161; // x0
  int32_t v162; // w20
  __int64 v163; // x0
  __int64 v164; // x1
  __int64 v165; // x2
  System_Int32_array *v166; // x26
  bool v167; // w27
  BattleLogicSkill_o *v168; // x20
  System_Int32_array *v169; // x0
  __int64 v170; // x1
  BattleLogicTask_array *v171; // x1
  BattleLogic_o *v172; // x0
  struct BattleData_o *v173; // x8
  BattleActionData_o *v174; // x1
  System_Collections_Generic_Dictionary_int__object__o *v176; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v177; // [xsp+20h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-D0h]
  char v179; // [xsp+3Ch] [xbp-C4h]
  SkillLvMaster_o *v180; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v181; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v182; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4B04FC3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1BC3008(&BattleActionData_TypeInfo, v4);
    sub_1BC3008(&BattleSkillInfoData_TypeInfo, v5);
    sub_1BC3008(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1BC3008(&int___TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__, v27);
    sub_1BC3008(&BattleLogicNomal___c__DisplayClass38_0_TypeInfo, v28);
    sub_1BC3008(&StringLiteral_8674/*"MOTION_ENEMY_TURN_END"*/, v29);
    byte_4B04FC3 = 1;
  }
  entity = 0LL;
  memset(&v182, 0, sizeof(v182));
  v30 = sub_1BC3254(BattleLogicNomal___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)this, v33, v34);
  baseActData = (BattleActionData_o *)sub_1BC3254(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BuffMaster___);
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
  v36 = StringLiteral_8674/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8674/*"MOTION_ENEMY_TURN_END"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&baseActData->fields.motionname, v36, v37, v38);
  v177 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v177,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v180 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v42, v43);
  v44 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v176 = v39;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v46 = *(_DWORD *)(Instance + 24);
  v47 = Instance;
  if ( v46 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= v46 )
        goto LABEL_220;
      v49 = v47 + 8LL * (int)v48;
      v51 = *(_QWORD *)(v49 + 32);
      v50 = (__int64 *)(v49 + 32);
      Instance = v51;
      if ( !v51 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 548) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v30 + 16),
                              *(System_Int32_array **)(v30 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v48 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_220;
        v52 = (Il2CppObject *)Instance;
        Instance = *v50;
        if ( !*v50 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v48 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_220;
          Instance = *v50;
          if ( !*v50 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v52 )
              goto LABEL_215;
            if ( v52[1].monitor )
            {
              if ( v48 >= *(_DWORD *)(v47 + 24) )
                goto LABEL_220;
              Instance = (__int64)v177;
              if ( !*v50 || !v177 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v177,
                *(_DWORD *)(*v50 + 24),
                v52,
                (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v48 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_220;
        if ( !*v50 )
          goto LABEL_215;
        if ( !v44 )
          goto LABEL_215;
        v32 = *(unsigned int *)(*v50 + 24);
        items = v44->fields._items;
        v54 = Method_System_Collections_Generic_List_int__Add__;
        ++v44->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v44->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v44,
            v32,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v44->fields._size = size + 1;
          items->m_Items[size + 1] = v32;
        }
        if ( !v52 )
          goto LABEL_215;
        monitor = (int)v52[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_52:
      v46 = *(_DWORD *)(v47 + 24);
      if ( (int)++v48 >= v46 )
        goto LABEL_53;
    }
    v57 = 0;
    while ( v57 < monitor )
    {
      v58 = &v52->klass + (int)v57;
      v61 = v58[4];
      v60 = (char *)(v58 + 4);
      v59 = v61;
      if ( !v61 || !v35 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v35,
                   &entity,
                   (int32_t)v59->_1.name,
                   (const MethodInfo_32AF0BC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v63 = logic->fields.data;
          if ( !v63 )
            goto LABEL_215;
          if ( v57 >= LODWORD(v52[1].monitor) )
            break;
          if ( !*(_QWORD *)v60 )
            goto LABEL_215;
          v64 = *(_DWORD *)(*(_QWORD *)v60 + 28LL);
          if ( v63->fields.endMasterSkillTurnBuffValue <= v64 )
            v63->fields.endMasterSkillTurnBuffValue = v64;
        }
      }
      monitor = (int)v52[1].monitor;
      if ( (int)++v57 >= monitor )
        goto LABEL_52;
    }
LABEL_220:
    sub_1BC326C(Instance, v32, v45);
  }
LABEL_53:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v65 = this->fields.data;
  if ( !v65 )
    goto LABEL_215;
  v66 = Instance;
  if ( v65->fields.leaderDown && v65->fields.endbattleFlg )
  {
    v179 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v67 = *(_DWORD *)(Instance + 24);
    if ( v67 >= 1 )
    {
      v68 = 0;
      v179 = 0;
      while ( v68 < v67 )
      {
        v69 = v66 + 8LL * (int)v68;
        v71 = *(_QWORD *)(v69 + 32);
        v70 = (__int64 *)(v69 + 32);
        Instance = v71;
        if ( !v71 )
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
            v72 = 1;
          }
          else
          {
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_215;
            Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
            v72 = Instance & 1;
          }
          if ( v68 >= *(_DWORD *)(v66 + 24) )
            goto LABEL_220;
          Instance = *v70;
          if ( !*v70 )
            goto LABEL_215;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *(System_Int32_array **)(v30 + 24),
                       this->fields.logic,
                       v72,
                       baseActData,
                       0LL);
          if ( v68 >= *(_DWORD *)(v66 + 24) )
            goto LABEL_220;
          v73 = Instance;
          Instance = *v70;
          if ( !*v70 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v68 >= *(_DWORD *)(v66 + 24) )
              goto LABEL_220;
            Instance = *v70;
            if ( !*v70 )
              goto LABEL_215;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_215;
            v45 = Instance;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v68 >= *(_DWORD *)(v66 + 24) )
                goto LABEL_220;
              if ( !*v70 || !v176 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v176,
                *(_DWORD *)(*v70 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v68 >= *(_DWORD *)(v66 + 24) )
            goto LABEL_220;
          if ( !*v70 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v70 + 792);
          if ( !Instance )
            goto LABEL_215;
          v179 |= v73;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v68 >= *(_DWORD *)(v66 + 24) )
          goto LABEL_220;
        Instance = *v70;
        if ( !*v70 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 548) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v30 + 16),
                                *(System_Int32_array **)(v30 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v68 >= *(_DWORD *)(v66 + 24) )
            goto LABEL_220;
          v74 = (Il2CppObject *)Instance;
          Instance = *v70;
          if ( !*v70 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v68 >= *(_DWORD *)(v66 + 24) )
              goto LABEL_220;
            Instance = *v70;
            if ( !*v70 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v74 )
                goto LABEL_215;
              if ( v74[1].monitor )
              {
                if ( v68 >= *(_DWORD *)(v66 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v177;
                if ( !*v70 || !v177 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v177,
                  *(_DWORD *)(*v70 + 24),
                  v74,
                  (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v68 >= *(_DWORD *)(v66 + 24) )
            goto LABEL_220;
          if ( !*v70 )
            goto LABEL_215;
          if ( !v44 )
            goto LABEL_215;
          v32 = *(unsigned int *)(*v70 + 24);
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
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
          }
          else
          {
            v44->fields._size = v77 + 1;
            v75->m_Items[v77 + 1] = v32;
          }
        }
        v67 = *(_DWORD *)(v66 + 24);
        if ( (int)++v68 >= v67 )
          goto LABEL_111;
      }
      goto LABEL_220;
    }
    v179 = 0;
LABEL_111:
    v65 = this->fields.data;
    if ( !v65 )
      goto LABEL_215;
  }
  if ( !v44 )
    goto LABEL_215;
  battleEvent = v65->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v44,
                        (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  v83 = (System_Action_object__o *)sub_1BC3254(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v83,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v83,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  v86->fields.currentTurn = 0;
  if ( !v176 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v181,
    v176,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v182 = v181;
  while ( 1 )
  {
    v87 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v182,
                            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v87 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v182.fields._current.fields.value;
    if ( !v182.fields._current.fields.value )
      sub_1BC3264(v87, v88);
    max_length = (int)v182.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v182.fields._current.fields.key;
      v93 = 0;
      v94 = 1;
LABEL_128:
      if ( v93 >= max_length )
        sub_1BC326C(v87, v88, v89);
      v95 = value->m_Items[v93];
      if ( !v95 )
        sub_1BC3264(v87, v88);
      if ( v95->fields._isRemove )
        goto LABEL_164;
      if ( !v35 )
        sub_1BC3264(v87, v88);
      v87 = DataMasterBase_object__object__int___GetEntity(
              v35,
              v95->fields.buffId,
              (const MethodInfo_32AF070 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v87 )
        goto LABEL_164;
      v96 = (BattleSkillInfoData_o *)sub_1BC3254(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v96, 0LL);
      if ( !v96 )
        sub_1BC3264(v97, v98);
      v96->fields.svtUniqueId = key;
      vals = v95->fields.vals;
      if ( !vals )
        sub_1BC3264(v97, v98);
      if ( !vals->max_length )
        sub_1BC326C(v97, v98, v99);
      v101 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v96->klass->vtable._4_set_skillId.method)(
               v96,
               (unsigned int)vals->m_Items[1],
               v96->klass->vtable._5_get_skillId.methodPtr);
      v104 = v95->fields.vals;
      if ( !v104 )
        sub_1BC3264(v101, v102);
      if ( v104->max_length <= 1 )
        sub_1BC326C(v101, v102, v103);
      v96->fields.skilllv = v104->m_Items[2];
      v105 = this->fields.data;
      if ( !v105 )
        sub_1BC3264(0LL, v102);
      ServantData = BattleData__getServantData(v105, v96->fields.svtUniqueId, 0LL);
      v107 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v96->klass->vtable._5_get_skillId.method)(
               v96,
               v96->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v180 )
        sub_1BC3264(0LL, v107);
      v108 = SkillLvMaster__GetEntity(v180, v107, v96->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1BC3264(v108, v109);
      v110 = v108;
      v111 = this->fields.data;
      if ( !v111 )
        sub_1BC3264(0LL, v109);
      v112 = BattleData__checkAliveOther(v111, ServantData->fields.uniqueId, 0LL);
      if ( !v112 )
      {
        if ( !v110 )
          sub_1BC3264(v112, v113);
        v114 = this->fields.logic;
        if ( !v114 )
          sub_1BC3264(0LL, v113);
        v87 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v114, v110->fields.funcId, 0LL);
        if ( ((unsigned __int8)v87 & 1) == 0 )
          goto LABEL_164;
      }
      v115 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v95, 0LL);
      if ( (v115 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v96->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v96, 0LL);
      }
      else
      {
        v116 = sub_1BC30B0(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v116;
        if ( !v116 )
          sub_1BC3264(0LL, v117);
        if ( !*(_DWORD *)(v116 + 24) )
          sub_1BC326C(v116, v117, v118);
        exists = 0;
        *(_DWORD *)(v116 + 32) = v115;
      }
      logicskill = this->fields.logicskill;
      v122 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
      if ( !v122 )
        sub_1BC3264(0LL, v123);
      if ( !v122->max_length )
        sub_1BC326C(v122, v123, v122);
      v122->m_Items[1] = key;
      if ( !logicskill )
        sub_1BC3264(v122, v123);
      v124 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v96,
                                                   v122,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0LL);
      v126 = (BattleLogicTask_array *)v124;
      if ( (v94 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v124, 0LL);
        if ( IsNullOrEmpty )
        {
          v94 = 1;
          goto LABEL_162;
        }
        if ( !v126 )
          sub_1BC3264(IsNullOrEmpty, v125);
        if ( !v126->max_length )
          sub_1BC326C(IsNullOrEmpty, v125, v128);
        v129 = v126->m_Items[0];
        if ( !v129 )
          sub_1BC3264(0LL, v125);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v129, ServantData, value, 0LL);
      }
      v94 = 0;
LABEL_162:
      v130 = this->fields.logic;
      if ( !v130 )
        sub_1BC3264(0LL, v125);
      BattleLogic__addBattleLogicTask(v130, v126, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v93 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v182,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v177;
  if ( !v177 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v181,
    v177,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v182 = v181;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v182,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v132 = this->fields.data;
    if ( !v132 )
      sub_1BC3264(0LL, v131);
    v133 = (int32_t)v182.fields._current.fields.key;
    v134 = v182.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v132, (int32_t)v182.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v139 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BC3254(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_44721444(
        v139,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v139 )
        sub_1BC3264(isEndAct, v136);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v139->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v134 )
      sub_1BC3264(isEndAct, v136);
    v140 = (int)v134[1].monitor;
    if ( v140 >= 1 )
    {
      for ( i = 0; i < v140; ++i )
      {
        if ( i >= (unsigned int)v140 )
          sub_1BC326C(isEndAct, v136, v137);
        v142 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v134[2].klass + i);
        if ( !v142 )
          sub_1BC3264(isEndAct, v136);
        if ( !v142->fields._isRemove )
        {
          if ( !v35 )
            sub_1BC3264(isEndAct, v136);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v35,
                                              v142->fields.buffId,
                                              (const MethodInfo_32AF070 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v142, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v143 = (BattleSkillInfoData_o *)sub_1BC3254(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v143, 0LL);
                if ( !v143 )
                  sub_1BC3264(v144, v145);
                v143->fields.svtUniqueId = v133;
                v147 = v142->fields.vals;
                if ( !v147 )
                  sub_1BC3264(v144, v145);
                if ( !v147->max_length )
                  sub_1BC326C(v144, v145, v146);
                v148 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v143->klass->vtable._4_set_skillId.method)(
                         v143,
                         (unsigned int)v147->m_Items[1],
                         v143->klass->vtable._5_get_skillId.methodPtr);
                v151 = v142->fields.vals;
                if ( !v151 )
                  sub_1BC3264(v148, v149);
                if ( v151->max_length <= 1 )
                  sub_1BC326C(v148, v149, v150);
                v143->fields.skilllv = v151->m_Items[2];
                v152 = this->fields.data;
                if ( !v152 )
                  sub_1BC3264(0LL, v149);
                v153 = BattleData__getServantData(v152, v143->fields.svtUniqueId, 0LL);
                v154 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v143->klass->vtable._5_get_skillId.method)(
                         v143,
                         v143->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v180 )
                  sub_1BC3264(0LL, v154);
                v155 = SkillLvMaster__GetEntity(v180, v154, v143->fields.skilllv, 0LL);
                if ( !v153 )
                  sub_1BC3264(v155, v156);
                v157 = v155;
                v158 = this->fields.data;
                if ( !v158 )
                  sub_1BC3264(0LL, v156);
                v159 = BattleData__checkAliveOther(v158, v153->fields.uniqueId, 0LL);
                if ( v159 )
                  goto LABEL_198;
                if ( !v157 )
                  sub_1BC3264(v159, v160);
                v161 = this->fields.logic;
                if ( !v161 )
                  sub_1BC3264(0LL, v160);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v161, v157->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v162 = BattleServantData__GetRevengeIdCheckOpponentOnly(v153, v142, 0LL);
                  if ( (v162 & 0x80000000) != 0 )
                  {
                    v166 = Target__getTargetIds(this->fields.data, v143->fields.svtUniqueId, -1, v133, 13, 0LL, 0LL);
                    v167 = BattleSkillInfoData__ExistsNoTargetNoActionType(v143, 0LL);
                  }
                  else
                  {
                    v163 = sub_1BC30B0(int___TypeInfo, 1LL);
                    v166 = (System_Int32_array *)v163;
                    if ( !v163 )
                      sub_1BC3264(0LL, v164);
                    if ( !*(_DWORD *)(v163 + 24) )
                      sub_1BC326C(v163, v164, v165);
                    v167 = 0;
                    *(_DWORD *)(v163 + 32) = v162;
                  }
                  v168 = this->fields.logicskill;
                  v169 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
                  if ( !v169 )
                    sub_1BC3264(0LL, v170);
                  if ( !v169->max_length )
                    sub_1BC326C(v169, v170, v169);
                  v169->m_Items[1] = v133;
                  if ( !v168 )
                    sub_1BC3264(v169, v170);
                  v171 = BattleLogicSkill__taskSkill(v168, v143, v169, v166, 1, v167, 0, 0, 0, 0LL);
                  v172 = this->fields.logic;
                  if ( !v172 )
                    sub_1BC3264(0LL, v171);
                  BattleLogic__addBattleLogicTask(v172, v171, 0LL);
                }
              }
            }
          }
        }
        v140 = (int)v134[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v182,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v173 = this->fields.data;
  if ( !v173
    || (Instance = (__int64)v173->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1BC3264(Instance, v32);
  }
  if ( (v179 & 1) != 0 )
    v174 = baseActData;
  else
    v174 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v174, baseActData, 0LL);
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
  Il2CppObject *v45; // x2
  int v46; // w8
  __int64 v47; // x28
  unsigned int v48; // w20
  __int64 v49; // x22
  __int64 *v50; // x22
  __int64 v51; // t1
  bool v52; // w3
  char v53; // w29
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
  __int64 v89; // x2
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v93; // w20
  char v94; // w22
  BattleBuffData_BuffData_o *v95; // x28
  BattleSkillInfoData_o *v96; // x26
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  struct System_Int32_array *vals; // x8
  __int64 v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  struct System_Int32_array *v104; // x8
  BattleData_o *v105; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v107; // x1
  SkillLvEntity_o *v108; // x0
  __int64 v109; // x1
  SkillLvEntity_o *v110; // x29
  BattleData_o *v111; // x0
  _BOOL8 v112; // x0
  __int64 v113; // x1
  BattleLogic_o *v114; // x0
  int32_t v115; // w23
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v122; // x0
  __int64 v123; // x1
  System_Collections_ICollection_o *v124; // x0
  __int64 v125; // x1
  BattleLogicTask_array *v126; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v128; // x2
  BattleLogicTask_o *v129; // x0
  BattleLogic_o *v130; // x0
  __int64 v131; // x1
  BattleData_o *v132; // x0
  int32_t v133; // w23
  Il2CppObject *v134; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  BattleServantData_o *v138; // x25
  BattleBuffData_CheckIndividualitiesData_o *v139; // x24
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x24
  int v141; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v143; // x26
  BattleSkillInfoData_o *v144; // x25
  __int64 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  struct System_Int32_array *v148; // x8
  __int64 v149; // x0
  __int64 v150; // x1
  __int64 v151; // x2
  struct System_Int32_array *v152; // x8
  BattleData_o *v153; // x0
  BattleServantData_o *v154; // x27
  __int64 v155; // x1
  SkillLvEntity_o *v156; // x0
  __int64 v157; // x1
  SkillLvEntity_o *v158; // x28
  BattleData_o *v159; // x0
  _BOOL8 v160; // x0
  __int64 v161; // x1
  BattleLogic_o *v162; // x0
  int32_t v163; // w28
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x2
  System_Int32_array *v167; // x26
  bool v168; // w27
  BattleLogicSkill_o *v169; // x28
  System_Int32_array *v170; // x0
  __int64 v171; // x1
  BattleLogicTask_array *v172; // x1
  BattleLogic_o *v173; // x0
  struct BattleData_o *v174; // x8
  BattleActionData_o *v175; // x1
  System_Collections_Generic_Dictionary_int__object__o *v177; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v178; // [xsp+18h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+20h] [xbp-D0h]
  char v180; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v181; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v182; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v183; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B04FC0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1BC3008(&BattleActionData_TypeInfo, v4);
    sub_1BC3008(&BattleSkillInfoData_TypeInfo, v5);
    sub_1BC3008(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1BC3008(&int___TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass35_0__createEndTurnPlayer_b__0__, v27);
    sub_1BC3008(&BattleLogicNomal___c__DisplayClass35_0_TypeInfo, v28);
    sub_1BC3008(&StringLiteral_8683/*"MOTION_PLAYER_TURN_END"*/, v29);
    byte_4B04FC0 = 1;
  }
  entity = 0LL;
  memset(&v183, 0, sizeof(v183));
  v30 = sub_1BC3254(BattleLogicNomal___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)this, v33, v34);
  BattleLogicNomal__SetNextTargetId(this, v35);
  actiondata = (BattleActionData_o *)sub_1BC3254(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v30 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BuffMaster___);
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
  v37 = StringLiteral_8683/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8683/*"MOTION_PLAYER_TURN_END"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&actiondata->fields.motionname, v37, v38, v39);
  v178 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v178,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v177 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v177,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v181 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v42, v43);
  v44 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v46 = *(_DWORD *)(Instance + 24);
  v47 = Instance;
  if ( v46 >= 1 )
  {
    v180 = 0;
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= v46 )
        goto LABEL_220;
      v49 = v47 + 8LL * (int)v48;
      v51 = *(_QWORD *)(v49 + 32);
      v50 = (__int64 *)(v49 + 32);
      Instance = v51;
      if ( !v51 )
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
          v52 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v52 = Instance & 1;
        }
        if ( v48 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_220;
        Instance = *v50;
        if ( !*v50 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v30 + 24),
                     this->fields.logic,
                     v52,
                     actiondata,
                     0LL);
        if ( v48 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_220;
        v53 = Instance;
        Instance = *v50;
        if ( !*v50 )
          goto LABEL_215;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v48 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_220;
          Instance = *v50;
          if ( !*v50 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          v45 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v48 >= *(_DWORD *)(v47 + 24) )
              goto LABEL_220;
            Instance = (__int64)v177;
            if ( !*v50 || !v177 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v177,
              *(_DWORD *)(*v50 + 24),
              v45,
              (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v48 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_220;
        if ( !*v50 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v50 + 792);
        if ( !Instance )
          goto LABEL_215;
        v180 |= v53;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v48 >= *(_DWORD *)(v47 + 24) )
        goto LABEL_220;
      Instance = *v50;
      if ( !*v50 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 548) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v30 + 16),
                              *(System_Int32_array **)(v30 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v48 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_220;
        v54 = (Il2CppObject *)Instance;
        Instance = *v50;
        if ( !*v50 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v48 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_220;
          Instance = *v50;
          if ( !*v50 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v54 )
              goto LABEL_215;
            if ( v54[1].monitor )
            {
              if ( v48 >= *(_DWORD *)(v47 + 24) )
                goto LABEL_220;
              Instance = (__int64)v178;
              if ( !*v50 || !v178 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v178,
                *(_DWORD *)(*v50 + 24),
                v54,
                (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v48 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_220;
        if ( !*v50 )
          goto LABEL_215;
        if ( !v44 )
          goto LABEL_215;
        v32 = *(unsigned int *)(*v50 + 24);
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
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
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
      v46 = *(_DWORD *)(v47 + 24);
      if ( (int)++v48 >= v46 )
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
                   (const MethodInfo_32AF0BC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
    sub_1BC326C(Instance, v32, v45);
  }
  v180 = 0;
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
        if ( *(_BYTE *)(Instance + 548) )
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
                Instance = (__int64)v178;
                if ( !*v72 || !v178 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v178,
                  *(_DWORD *)(*v72 + 24),
                  v74,
                  (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
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
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
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
                        (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  v83 = (System_Action_object__o *)sub_1BC3254(System_Action_AiNpcBattleServantData__TypeInfo);
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
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  Instance = (__int64)v177;
  v86->fields.currentTurn = 1;
  if ( !v177 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v182,
    v177,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v183 = v182;
  while ( 1 )
  {
    v87 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v183,
                            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v87 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v183.fields._current.fields.value;
    if ( !v183.fields._current.fields.value )
      sub_1BC3264(v87, v88);
    max_length = (int)v183.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v183.fields._current.fields.key;
      v93 = 0;
      v94 = 1;
LABEL_127:
      if ( v93 >= max_length )
        sub_1BC326C(v87, v88, v89);
      v95 = value->m_Items[v93];
      if ( !v95 )
        sub_1BC3264(v87, v88);
      if ( v95->fields._isRemove )
        goto LABEL_163;
      if ( !v36 )
        sub_1BC3264(v87, v88);
      v87 = DataMasterBase_object__object__int___GetEntity(
              v36,
              v95->fields.buffId,
              (const MethodInfo_32AF070 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v87 )
        goto LABEL_163;
      v96 = (BattleSkillInfoData_o *)sub_1BC3254(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v96, 0LL);
      if ( !v96 )
        sub_1BC3264(v97, v98);
      v96->fields.svtUniqueId = key;
      vals = v95->fields.vals;
      if ( !vals )
        sub_1BC3264(v97, v98);
      if ( !vals->max_length )
        sub_1BC326C(v97, v98, v99);
      v101 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v96->klass->vtable._4_set_skillId.method)(
               v96,
               (unsigned int)vals->m_Items[1],
               v96->klass->vtable._5_get_skillId.methodPtr);
      v104 = v95->fields.vals;
      if ( !v104 )
        sub_1BC3264(v101, v102);
      if ( v104->max_length <= 1 )
        sub_1BC326C(v101, v102, v103);
      v96->fields.skilllv = v104->m_Items[2];
      v105 = this->fields.data;
      if ( !v105 )
        sub_1BC3264(0LL, v102);
      ServantData = BattleData__getServantData(v105, v96->fields.svtUniqueId, 0LL);
      v107 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v96->klass->vtable._5_get_skillId.method)(
               v96,
               v96->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v181 )
        sub_1BC3264(0LL, v107);
      v108 = SkillLvMaster__GetEntity(v181, v107, v96->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1BC3264(v108, v109);
      v110 = v108;
      v111 = this->fields.data;
      if ( !v111 )
        sub_1BC3264(0LL, v109);
      v112 = BattleData__checkAliveOther(v111, ServantData->fields.uniqueId, 0LL);
      if ( !v112 )
      {
        if ( !v110 )
          sub_1BC3264(v112, v113);
        v114 = this->fields.logic;
        if ( !v114 )
          sub_1BC3264(0LL, v113);
        v87 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v114, v110->fields.funcId, 0LL);
        if ( ((unsigned __int8)v87 & 1) == 0 )
          goto LABEL_163;
      }
      v115 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v95, 0LL);
      if ( (v115 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v96->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v96, 0LL);
      }
      else
      {
        v116 = sub_1BC30B0(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v116;
        if ( !v116 )
          sub_1BC3264(0LL, v117);
        if ( !*(_DWORD *)(v116 + 24) )
          sub_1BC326C(v116, v117, v118);
        exists = 0;
        *(_DWORD *)(v116 + 32) = v115;
      }
      logicskill = this->fields.logicskill;
      v122 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
      if ( !v122 )
        sub_1BC3264(0LL, v123);
      if ( !v122->max_length )
        sub_1BC326C(v122, v123, v122);
      v122->m_Items[1] = key;
      if ( !logicskill )
        sub_1BC3264(v122, v123);
      v124 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v96,
                                                   v122,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   0LL);
      v126 = (BattleLogicTask_array *)v124;
      if ( (v94 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v124, 0LL);
        if ( IsNullOrEmpty )
        {
          v94 = 1;
          goto LABEL_161;
        }
        if ( !v126 )
          sub_1BC3264(IsNullOrEmpty, v125);
        if ( !v126->max_length )
          sub_1BC326C(IsNullOrEmpty, v125, v128);
        v129 = v126->m_Items[0];
        if ( !v129 )
          sub_1BC3264(0LL, v125);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v129, ServantData, value, 0LL);
      }
      v94 = 0;
LABEL_161:
      v130 = this->fields.logic;
      if ( !v130 )
        sub_1BC3264(0LL, v125);
      BattleLogic__addBattleLogicTask(v130, v126, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v93 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v183,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v178;
  if ( !v178 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v182,
    v178,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v183 = v182;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v183,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v132 = this->fields.data;
    if ( !v132 )
      sub_1BC3264(0LL, v131);
    v133 = (int32_t)v183.fields._current.fields.key;
    v134 = v183.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v132, (int32_t)v183.fields._current.fields.key, 0LL);
    v138 = isEndAct;
    if ( isEndAct )
    {
      v139 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BC3254(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_44721444(v139, v138, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v139 )
        sub_1BC3264(isEndAct, v136);
      selfConcatSvtIndividualities_k__BackingField = v139->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v134 )
LABEL_250:
        sub_1BC3264(isEndAct, v136);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0LL;
      if ( !v134 )
        goto LABEL_250;
    }
    v141 = (int)v134[1].monitor;
    if ( v141 >= 1 )
    {
      for ( i = 0; i < v141; ++i )
      {
        if ( i >= (unsigned int)v141 )
          sub_1BC326C(isEndAct, v136, v137);
        v143 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v134[2].klass + i);
        if ( !v143 )
          sub_1BC3264(isEndAct, v136);
        if ( !v143->fields._isRemove )
        {
          if ( !v36 )
            sub_1BC3264(isEndAct, v136);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v36,
                                              v143->fields.buffId,
                                              (const MethodInfo_32AF070 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v143, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v144 = (BattleSkillInfoData_o *)sub_1BC3254(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v144, 0LL);
                if ( !v144 )
                  sub_1BC3264(v145, v146);
                v144->fields.svtUniqueId = v133;
                v148 = v143->fields.vals;
                if ( !v148 )
                  sub_1BC3264(v145, v146);
                if ( !v148->max_length )
                  sub_1BC326C(v145, v146, v147);
                v149 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v144->klass->vtable._4_set_skillId.method)(
                         v144,
                         (unsigned int)v148->m_Items[1],
                         v144->klass->vtable._5_get_skillId.methodPtr);
                v152 = v143->fields.vals;
                if ( !v152 )
                  sub_1BC3264(v149, v150);
                if ( v152->max_length <= 1 )
                  sub_1BC326C(v149, v150, v151);
                v144->fields.skilllv = v152->m_Items[2];
                v153 = this->fields.data;
                if ( !v153 )
                  sub_1BC3264(0LL, v150);
                v154 = BattleData__getServantData(v153, v144->fields.svtUniqueId, 0LL);
                v155 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v144->klass->vtable._5_get_skillId.method)(
                         v144,
                         v144->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v181 )
                  sub_1BC3264(0LL, v155);
                v156 = SkillLvMaster__GetEntity(v181, v155, v144->fields.skilllv, 0LL);
                if ( !v154 )
                  sub_1BC3264(v156, v157);
                v158 = v156;
                v159 = this->fields.data;
                if ( !v159 )
                  sub_1BC3264(0LL, v157);
                v160 = BattleData__checkAliveOther(v159, v154->fields.uniqueId, 0LL);
                if ( v160 )
                  goto LABEL_198;
                if ( !v158 )
                  sub_1BC3264(v160, v161);
                v162 = this->fields.logic;
                if ( !v162 )
                  sub_1BC3264(0LL, v161);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v162, v158->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v163 = BattleServantData__GetRevengeIdCheckOpponentOnly(v154, v143, 0LL);
                  if ( (v163 & 0x80000000) != 0 )
                  {
                    v167 = Target__getTargetIds(this->fields.data, v144->fields.svtUniqueId, -1, v133, 13, 0LL, 0LL);
                    v168 = BattleSkillInfoData__ExistsNoTargetNoActionType(v144, 0LL);
                  }
                  else
                  {
                    v164 = sub_1BC30B0(int___TypeInfo, 1LL);
                    v167 = (System_Int32_array *)v164;
                    if ( !v164 )
                      sub_1BC3264(0LL, v165);
                    if ( !*(_DWORD *)(v164 + 24) )
                      sub_1BC326C(v164, v165, v166);
                    v168 = 0;
                    *(_DWORD *)(v164 + 32) = v163;
                  }
                  v169 = this->fields.logicskill;
                  v170 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
                  if ( !v170 )
                    sub_1BC3264(0LL, v171);
                  if ( !v170->max_length )
                    sub_1BC326C(v170, v171, v170);
                  v170->m_Items[1] = v133;
                  if ( !v169 )
                    sub_1BC3264(v170, v171);
                  v172 = BattleLogicSkill__taskSkill(v169, v144, v170, v167, 1, v168, 0, 0, 0, 0LL);
                  v173 = this->fields.logic;
                  if ( !v173 )
                    sub_1BC3264(0LL, v172);
                  BattleLogic__addBattleLogicTask(v173, v172, 0LL);
                }
              }
            }
          }
        }
        v141 = (int)v134[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v183,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v174 = this->fields.data;
  if ( !v174
    || (Instance = (__int64)v174->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1BC3264(Instance, v32);
  }
  if ( (v180 & 1) != 0 )
    v175 = actiondata;
  else
    v175 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v175, actiondata, 0LL);
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

  if ( (byte_4B04FBD & 1) == 0 )
  {
    sub_1BC3008(&BattleActionData_TypeInfo, task);
    byte_4B04FBD = 1;
  }
  v4 = sub_1BC3254(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_1BC3264(v5, v6);
  *(_BYTE *)(v4 + 249) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 72) = motionName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 72), (int32_t)motionName, v8, v9);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 136) = motionMessage;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 136), (int32_t)motionMessage, v11, v12);
  *(_DWORD *)(v4 + 144) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 80) = targetObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 80), (int32_t)targetObject, v14, v15);
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
    sub_1BC3264(this, task);
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
  if ( (byte_4B04FC7 & 1) == 0 )
  {
    sub_1BC3008(&BattleActionData_TypeInfo, task);
    sub_1BC3008(&BattleActionData_ShiftServant_TypeInfo, v5);
    this = (BattleLogicNomal_o *)sub_1BC3008(&StringLiteral_8688/*"MOTION_SHIFT"*/, v6);
    byte_4B04FC7 = 1;
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
    v9 = sub_1BC3254(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v9, 0LL);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 32) = v8->fields.uniqueId;
      v12 = StringLiteral_8688/*"MOTION_SHIFT"*/;
      *(_QWORD *)(v9 + 72) = StringLiteral_8688/*"MOTION_SHIFT"*/;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 72), v12, v10, v11);
      v13 = (BattleActionData_ShiftServant_o *)sub_1BC3254(BattleActionData_ShiftServant_TypeInfo);
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
    sub_1BC3264(this, task);
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

  if ( (byte_4B04FBE & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, task);
    sub_1BC3008(&StringLiteral_10984/*"RESET_CAMERA_BAT"*/, v5);
    byte_4B04FBE = 1;
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
              (System_String_o *)StringLiteral_10984/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v9;
          }
        }
      }
LABEL_18:
      sub_1BC3264(StartTurn, v7);
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
  __int64 v6; // x2
  int v7; // w8
  int v8; // w9
  __int64 v9; // x11
  struct BattleData_o *v10; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_12;
  v7 = *((_DWORD *)data + 6);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v7 == v8 )
        sub_1BC326C(data, task, v6);
      v9 = *((_QWORD *)data + v8 + 4);
      if ( !v9 )
        break;
      ++v8;
      *(_BYTE *)(v9 + 548) = 1;
      if ( v7 == v8 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1BC3264(data, task);
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
    sub_1BC3264(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1BC326C(this, svtList, method);
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
  data = BattleData__getFieldEnemyServantList((BattleData_o *)data, 1, 0LL);
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
      data = (void *)BattleServantData__isShiftReady((BattleServantData_o *)data, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
    }
    v6 = v7[6];
    if ( (int)++v8 >= v6 )
      return 0;
  }
  if ( v8 >= v7[6] )
LABEL_15:
    sub_1BC326C(data, *(_QWORD *)&uniqueId, v5);
  if ( !*(_QWORD *)v10 )
LABEL_14:
    sub_1BC3264(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v10 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(this, method);
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

  if ( (byte_4B04FB1 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1BC3008(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4B04FB1 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1BC3254(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_1BC3264(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v7,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  __int64 v32; // x23
  System_Func_object__bool__o *v33; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  struct BattleLogic_o *logic; // x8
  struct BattleLogicReaction_o *logicReaction; // x8
  BattleLogicTask_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  struct BattleLogic_o *v48; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v50; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0

  if ( (byte_4B04FC8 & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask_TypeInfo, task);
    sub_1BC3008(&BeforeShiftServantReactTaskCreator_TypeInfo, v5);
    sub_1BC3008(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_1BC3008(&ReactTaskTargetFilter_TypeInfo, v12);
    sub_1BC3008(&Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__, v13);
    sub_1BC3008(&BattleLogicNomal___c__DisplayClass48_0_TypeInfo, v14);
    byte_4B04FC8 = 1;
  }
  v15 = sub_1BC3254(BattleLogicNomal___c__DisplayClass48_0_TypeInfo);
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
  v20 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    v31 = sub_1BC3254(BeforeShiftServantReactTaskCreator_TypeInfo);
    BeforeShiftServantReactTaskCreator___ctor((BeforeShiftServantReactTaskCreator_o *)v31, 24, 0LL);
    if ( v31 )
    {
      ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v31, v17);
      v32 = sub_1BC3254(ReactTaskTargetFilter_TypeInfo);
      System_Object___ctor((Il2CppObject *)v32, 0LL);
      v33 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v33,
        (Il2CppObject *)v15,
        Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__,
        0LL);
      if ( v32 )
      {
        *(_QWORD *)(v32 + 16) = v33;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 16), (int32_t)v33, v34, v35);
        *(_QWORD *)(v31 + 24) = v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 24), v32, v36, v37);
        logic = this->fields.logic;
        if ( logic )
        {
          logicReaction = logic->fields.logicReaction;
          if ( logicReaction )
          {
            ShiftableUniqueId = (BattleData_o *)ServantReactTaskCreator__CreateTasks(
                                                  (ServantReactTaskCreator_o *)v31,
                                                  logicReaction->fields.logic,
                                                  v38);
            if ( v20 )
            {
              System_Collections_Generic_List_object___AddRange(
                v20,
                (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
                (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              v41 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v41, 0LL);
              if ( v41 )
              {
                v41->fields.actiontype = 37;
                BattleLogicTask__setActor(v41, 3, *(_DWORD *)(v15 + 16), 0LL);
                items = v20->fields._items;
                v45 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v20->fields._version;
                if ( items )
                {
                  size = v20->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v20,
                      (Il2CppObject *)v41,
                      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v47 = &items->obj.klass + size;
                    v20->fields._size = size + 1;
                    v47[4] = (Il2CppClass *)v41;
                    sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
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
    sub_1BC3264(ShiftableUniqueId, v17);
  }
  v22 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
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
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v20->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v22;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
  }
  v48 = this->fields.logic;
  if ( !v48 )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)v48->fields.logicReaction;
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
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_31:
  v50 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v50, 0LL);
  if ( !v50 )
    goto LABEL_37;
  v50->fields.actiontype = 36;
  BattleLogicTask__setActor(v50, 3, *(_DWORD *)(v15 + 16), 0LL);
  v53 = v20->fields._items;
  v54 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v20->fields._version;
  if ( !v53 )
    goto LABEL_37;
  v55 = v20->fields._size;
  if ( (unsigned int)v55 >= v53->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v50,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v20->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v50;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v50, v51, v52);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B04FB3 & 1) == 0 )
  {
    sub_1BC3008(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_1BC3008(&BattleLogicTask_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4B04FB3 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1BC3264(battleEvent, v13);
  }
  v20 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
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
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B04FC4 & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B04FC4 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v12 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1BC3264(v10, v11);
    }
    v12 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
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
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B04FB6 & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B04FB6 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v12 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v12, 0LL),
        !v12)
    || (BattleLogicTask__setSystem(v12, 0LL), !v9)
    || (items = v9->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1BC3264(logic, v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1BC3264(this, *(_QWORD *)&ltype);
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

  if ( (byte_4B04FB2 & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4B04FB2 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v19 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
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
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v19;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v19, v28, v29);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1BC3264(battleEvent, v13);
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
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v11->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v19, v22, v23);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCounterFunc(
        BattleLogicNomal_o *this,
        BattleData_o *data,
        bool isEnemy,
        bool isSkillCounter,
        bool isInitLogicHp,
        const MethodInfo *method)
{
  _BOOL4 v6; // w26
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
  System_Collections_Generic_List_object__o *v30; // x23
  __int64 Instance; // x0
  __int64 wasAttackTargetId; // x1
  __int64 v33; // x2
  __int64 v34; // x8
  __int64 v35; // x28
  __int64 v36; // x8
  unsigned __int64 v37; // x22
  int v38; // w9
  BattleServantData_o *v39; // x27
  BattleServantData_o *v40; // x20
  System_Collections_Generic_IEnumerable_T__o *v41; // x29
  void *monitor; // x8
  bool v43; // w20
  __int64 v44; // x25
  BattleBuffData_BuffData_o *v45; // x21
  BattleLogicTask_o *v46; // x24
  int32_t LimitCount; // w20
  BattleCommandData_o *v48; // x26
  BattleComboData_o *v49; // x20
  BattleComboData_o *v50; // x1
  BattleCommandData_o *v51; // x2
  __int64 v52; // x26
  __int64 v53; // x20
  int32_t uniqueId; // w8
  __int64 v55; // x9
  System_Int32_array *v56; // x26
  System_String_o *CounterMessage; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x9
  BattleLogicNomal___c_c *v65; // x0
  System_Action_object__o *_9__18_0; // x20
  Il2CppObject *v67; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct BattleLogic_o *logic; // x8
  BattleLogicNomal_o *v73; // [xsp+8h] [xbp-A8h]
  _BOOL4 v74; // [xsp+14h] [xbp-9Ch]
  int32_t SvtId; // [xsp+18h] [xbp-98h]
  int32_t counterId; // [xsp+1Ch] [xbp-94h]
  SkillLvMaster_o *MasterData_object; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v79; // [xsp+30h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // [xsp+38h] [xbp-78h]
  char v81; // [xsp+48h] [xbp-68h]
  int32_t type; // [xsp+4Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4B04FB4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    sub_1BC3008(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10);
    sub_1BC3008(&BattleComboData_TypeInfo, v11);
    sub_1BC3008(&BattleCommandData_TypeInfo, v12);
    sub_1BC3008(&BattleLogicTask_TypeInfo, v13);
    sub_1BC3008(&BattleSkillInfoData_TypeInfo, v14);
    sub_1BC3008(&Method_DataManager_GetMasterData_BuffMaster___, v15);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76740960, v19);
    sub_1BC3008(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v20);
    sub_1BC3008(&int___TypeInfo, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v25);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v26);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BC3008(&Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__, v28);
    sub_1BC3008(&BattleLogicNomal___c_TypeInfo, v29);
    byte_4B04FB4 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !data )
    goto LABEL_78;
  v34 = 296LL;
  if ( isEnemy )
    v34 = 304LL;
  v35 = *(__int64 *)((char *)&data->klass + v34);
  v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !v35 )
    goto LABEL_78;
  v36 = *(_QWORD *)(v35 + 24);
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    if ( isEnemy )
      v38 = 3;
    else
      v38 = 2;
    type = v38;
    do
    {
      if ( v37 >= (unsigned int)v36 )
LABEL_79:
        sub_1BC326C(Instance, wasAttackTargetId, v33);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v35 + 4 * v37 + 32), 0LL);
      if ( Instance )
      {
        v39 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v39, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v39->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v40 = (BattleServantData_o *)Instance;
                if ( v39->fields.isEnemy != *(unsigned __int8 *)(Instance + 487) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v40, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v39->fields.buffData;
                    if ( !Instance )
                      goto LABEL_78;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v39,
                                          v40,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_78;
                    v41 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v73 = this;
                      v79 = (System_Collections_Generic_HashSet_T__o *)sub_1BC3254(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_55960476(
                        v79,
                        v41,
                        (const MethodInfo_355E39C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76740960);
                      monitor = v41[1].monitor;
                      v43 = isSkillCounter;
                      if ( (int)monitor >= 1 )
                      {
                        v44 = 4LL;
                        v81 = 1;
                        v74 = v6;
                        do
                        {
                          if ( v44 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_79;
                          v45 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v41->klass + v44);
                          if ( !v43 )
                            goto LABEL_82;
                          if ( !v45 )
                            goto LABEL_78;
                          if ( v45->fields.isSkillReaction )
                          {
LABEL_82:
                            v46 = (BattleLogicTask_o *)sub_1BC3254(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v46, 0LL);
                            if ( !v46 )
                              goto LABEL_78;
                            BattleLogicTask__setActor(v46, type, v39->fields.uniqueId, 0LL);
                            BattleLogicTask__setTarget(v46, v39->fields.wasAttackTargetId, 0LL);
                            Instance = (__int64)v39->fields.buffData;
                            if ( !Instance )
                              goto LABEL_78;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v45, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v39->fields.overkillTargetId = -1;
                              if ( !v45 )
                                goto LABEL_78;
                              if ( v45->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v46,
                                  v45->fields.counterId,
                                  v45->fields.counterLv,
                                  v45->fields.counterOc,
                                  1,
                                  0LL);
                              }
                              else
                              {
                                wasAttackTargetId = (unsigned int)v45->fields.counterId;
                                if ( v45->fields.isUseAttack )
                                {
                                  counterId = v45->fields.counterId;
                                  SvtId = BattleServantData__getSvtId(v39, 0LL);
                                  LimitCount = BattleServantData__getLimitCount(v39, 0LL);
                                  v48 = (BattleCommandData_o *)sub_1BC3254(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor_45450460(v48, counterId, SvtId, LimitCount, 0, -1, 0LL);
                                  BattleServantData__SetOverwriteSvtCardType(v39, v48, 0LL);
                                  BattleServantData__AddServantCommandCard(v39, v45->fields.counterId, 0LL);
                                  v49 = (BattleComboData_o *)sub_1BC3254(BattleComboData_TypeInfo);
                                  BattleComboData___ctor(v49, 0LL);
                                  v50 = v49;
                                  v43 = isSkillCounter;
                                  v51 = v48;
                                  v6 = v74;
                                  BattleLogicTask__setActionCommand(v46, v50, v51, 0, 0LL);
                                }
                                else
                                {
                                  Instance = (__int64)MasterData_object;
                                  if ( !MasterData_object )
                                    goto LABEL_78;
                                  Instance = (__int64)SkillLvMaster__GetEntity(
                                                        MasterData_object,
                                                        wasAttackTargetId,
                                                        v45->fields.counterLv,
                                                        0LL);
                                  if ( !Instance )
                                  {
                                    v6 = v74;
                                    goto LABEL_60;
                                  }
                                  v52 = Instance;
                                  v53 = sub_1BC3254(BattleSkillInfoData_TypeInfo);
                                  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v53, 0LL);
                                  if ( !v53 )
                                    goto LABEL_78;
                                  uniqueId = v39->fields.uniqueId;
                                  v55 = *(_QWORD *)v53;
                                  *(_QWORD *)(v53 + 16) = 20LL;
                                  *(_DWORD *)(v53 + 24) = uniqueId;
                                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v55 + 376))(
                                    v53,
                                    *(unsigned int *)(v52 + 16),
                                    *(_QWORD *)(v55 + 384));
                                  *(_DWORD *)(v53 + 36) = *(_DWORD *)(v52 + 20);
                                  Instance = sub_1BC30B0(int___TypeInfo, 1LL);
                                  if ( !Instance )
                                    goto LABEL_78;
                                  v56 = (System_Int32_array *)Instance;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_79;
                                  *(_DWORD *)(Instance + 32) = v39->fields.wasAttackTargetId;
                                  Instance = sub_1BC30B0(int___TypeInfo, 1LL);
                                  if ( !Instance )
                                    goto LABEL_78;
                                  if ( !*(_DWORD *)(Instance + 24) )
                                    goto LABEL_79;
                                  *(_DWORD *)(Instance + 32) = v39->fields.uniqueId;
                                  BattleLogicTask__setActionSkill(
                                    v46,
                                    (BattleSkillInfoData_o *)v53,
                                    v56,
                                    (System_Int32_array *)Instance,
                                    1,
                                    0,
                                    0LL);
                                  v6 = v74;
                                  v43 = isSkillCounter;
                                }
                              }
                              Instance = (__int64)v80;
                              if ( !v80 )
                                goto LABEL_78;
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v80,
                                                    v45->fields.buffId,
                                                    (const MethodInfo_32AF070 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_78;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0LL);
                              BattleLogicTask__setMessage(v46, CounterMessage, 2, 0LL);
                              v46->fields.isCounter = 1;
                              if ( (v81 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v46,
                                  v39,
                                  (BattleBuffData_BuffData_array *)v41,
                                  0LL);
                              if ( !v30 )
                                goto LABEL_78;
                              items = v30->fields._items;
                              v61 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v30->fields._version;
                              if ( !items )
                                goto LABEL_78;
                              size = v30->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v30,
                                  (Il2CppObject *)v46,
                                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v63 = &items->obj.klass + size;
                                v30->fields._size = size + 1;
                                v63[4] = (Il2CppClass *)v46;
                                sub_1BC2FAC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v46, v58, v59);
                              }
                              Instance = (__int64)v79;
                              if ( !v79 )
                                goto LABEL_78;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v79,
                                           (Il2CppObject *)v45,
                                           (const MethodInfo_355EB6C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v81 = 0;
                            }
                          }
LABEL_60:
                          LODWORD(monitor) = v41[1].monitor;
                          v64 = v44 - 3;
                          ++v44;
                        }
                        while ( v64 < (int)monitor );
                      }
                      v65 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v65 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v73;
                      _9__18_0 = (System_Action_object__o *)v65->static_fields->__9__18_0;
                      if ( !_9__18_0 )
                      {
                        if ( !v65->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v65);
                          v65 = BattleLogicNomal___c_TypeInfo;
                        }
                        v67 = (Il2CppObject *)v65->static_fields->__9;
                        _9__18_0 = (System_Action_object__o *)sub_1BC3254(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__18_0,
                          v67,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__18_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__18_0;
                        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v69, v70);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v79,
                        (System_Action_T__o *)_9__18_0,
                        (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v36) = *(_DWORD *)(v35 + 24);
    }
    while ( (__int64)++v37 < (int)v36 );
  }
  if ( !v30 )
    goto LABEL_78;
  if ( v30->fields._size < 1 )
    goto LABEL_76;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_78:
    sub_1BC3264(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_76:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_78;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v30,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v30,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B04FBB & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask_TypeInfo, svtData);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B04FBB = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = sub_1BC3254(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v13, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v13 + 128) = gameObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 128), (int32_t)gameObject, v17, v18);
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
    sub_1BC3264(v14, v15);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v13,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 4), v13, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B04FBC & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicTask_TypeInfo, svtData);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_2867/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_1BC3008(&StringLiteral_8675/*"MOTION_ENTRY"*/, v16);
    sub_1BC3008(&StringLiteral_2865/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_1BC3008(&StringLiteral_2866/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_1BC3008(&StringLiteral_8678/*"MOTION_ENTRY_TAC"*/, v19);
    byte_4B04FBC = 1;
  }
  v20 = StringLiteral_8678/*"MOTION_ENTRY_TAC"*/;
  v21 = StringLiteral_8675/*"MOTION_ENTRY"*/;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = sub_1BC3254(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_30;
  v26 = (System_String_o *)(isTactical ? v20 : v21);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v23, v26, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v23 + 128) = gameObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 128), (int32_t)gameObject, v28, v29);
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
              v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
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
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
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
    sub_1BC3264(battle_ent, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
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
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v23;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 4), v23, v57, v58);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v2; // x2
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
  __int64 v18; // x2
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
  __int64 v53; // x0
  __int64 v54; // x1
  BattleData_o *v55; // x0
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v56; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  BattleSkillInfoData_o *v63; // x19
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v65; // x0
  __int64 v66; // x1
  BattleLogicTask_array *v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct BattleLogicTask_array *_7__wrap4; // x10
  il2cpp_array_size_t v71; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  const MethodInfo *v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct BattleLogicTask_o *v80; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v81; // [xsp+28h] [xbp-38h]

  v81 = this;
  v4 = this;
  if ( (byte_4B04FD3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___, method);
    sub_1BC3008(&System_Func_BattleSkillInfoData__int__TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BC3008(&int___TypeInfo, v9);
    sub_1BC3008(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__, v10);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *)sub_1BC3008(
                                                                            &BattleLogicNomal___c_TypeInfo,
                                                                            v11);
    byte_4B04FD3 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v4->fields.__7__wrap5;
    v4->fields.__1__state = -3;
    v23 = _7__wrap5 + 1;
    v4->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_61;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BC3264(this, method);
  data = _4__this->fields.data;
  if ( !data )
    sub_1BC3264(this, method);
  selectcommandlist = data->fields.selectcommandlist;
  v4->fields.__7__wrap1 = selectcommandlist;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)selectcommandlist, v2, v3);
  v20 = v81;
  v21 = 0;
  for ( v81->fields.__7__wrap2 = 0; ; v81->fields.__7__wrap2 = v21 )
  {
    _7__wrap1 = v20->fields.__7__wrap1;
    p__7__wrap1 = (CGThumbnailListItem_o *)&v20->fields.__7__wrap1;
    v26 = _7__wrap1;
    if ( !_7__wrap1 )
      sub_1BC3264(IsEnableToAttack, v17);
    max_length = v26->max_length;
    if ( v21 >= max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1BC2FAC(p__7__wrap1, 0, v18, v19);
      if ( !_4__this )
        sub_1BC3264(v53, v54);
      v55 = _4__this->fields.data;
      if ( !v55 )
        sub_1BC3264(0LL, v54);
      BattleData__ClearAllExecutedOnceConfirmCommandFunctionBuffList(v55, 0LL);
      return 0;
    }
    if ( v21 >= (unsigned int)max_length )
      sub_1BC326C(IsEnableToAttack, v17, v18);
    if ( !_4__this )
      sub_1BC3264(IsEnableToAttack, v17);
    v29 = v26->m_Items[v21];
    if ( !v29 )
      sub_1BC3264(IsEnableToAttack, v17);
    v30 = _4__this->fields.data;
    if ( !v30 )
      sub_1BC3264(0LL, v17);
    ServantData = BattleData__getServantData(v30, v29->fields.uniqueId, 0LL);
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(ServantData, v29, v32);
    if ( IsEnableToAttack )
      break;
LABEL_73:
    v20 = v81;
    v21 = v81->fields.__7__wrap2 + 1;
  }
  if ( !ServantData )
    sub_1BC3264(IsEnableToAttack, v17);
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
    _9__20_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__20_0,
      v36,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__20_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v38, v39);
  }
  v40 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v42 = v40;
  if ( !v40 )
    sub_1BC3264(0LL, v41);
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
    p_method = sub_1C13570(v40, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v42,
          *(_QWORD *)(p_method + 8));
  if ( !v81 )
    sub_1BC3264(v47, v47);
  v81->fields.__7__wrap3 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v47;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v81->fields.__7__wrap3, v47, v48, v49);
  v52 = v81;
  v81->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap3 = v52->fields.__7__wrap3;
    if ( !_7__wrap3 )
      sub_1BC3264(v50, v51);
    v73 = _7__wrap3->klass;
    v74 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      v75 = &v73->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v75 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_69;
      }
      v76 = (__int64)&v73->vtable[*v75].method;
    }
    else
    {
LABEL_69:
      v76 = sub_1C13570(_7__wrap3, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v76)(
            _7__wrap3,
            *(_QWORD *)(v76 + 8)) & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20____m__Finally1(v81, v77);
      v81->fields.__7__wrap3 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v81->fields.__7__wrap3, 0, v78, v79);
      goto LABEL_73;
    }
    v56 = v81->fields.__7__wrap3;
    if ( !v56 )
      sub_1BC3264(v81, v77);
    v57 = v56->klass;
    v58 = *(unsigned __int16 *)(&v56->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v56->klass->_2.bitflags2 + 3) )
    {
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v59 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_53;
      }
      v60 = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_53:
      v60 = sub_1C13570(
              v81->fields.__7__wrap3,
              System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
              0LL);
    }
    v61 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v60)(
            v56,
            *(_QWORD *)(v60 + 8));
    if ( !_4__this )
      sub_1BC3264(v61, v62);
    v63 = (BattleSkillInfoData_o *)v61;
    logicskill = _4__this->fields.logicskill;
    v65 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
    if ( !v63 )
      sub_1BC3264(v65, v66);
    if ( !v65 )
      sub_1BC3264(0LL, v66);
    if ( !v65->max_length )
      sub_1BC326C(v65, v66, v65);
    v65->m_Items[1] = v63->fields.svtUniqueId;
    if ( !logicskill )
      sub_1BC3264(v65, v66);
    v67 = BattleLogicSkill__taskSkill(logicskill, v63, v65, 0LL, 0, 0, 0, 0, 0, 0LL);
    v81->fields.__7__wrap4 = v67;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v81->fields.__7__wrap4, (int32_t)v67, v68, v69);
    v4 = v81;
    v23 = 0;
    v81->fields.__7__wrap5 = 0;
LABEL_61:
    _7__wrap4 = v4->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1BC3264(this, method);
    v71 = _7__wrap4->max_length;
    if ( v23 < (int)v71 )
      break;
    v4->fields.__7__wrap4 = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__7__wrap4, 0, v2, v3);
    v52 = v81;
  }
  if ( v23 >= v71 )
    sub_1BC326C(this, method, v2);
  v80 = _7__wrap4->m_Items[v23];
  v4->fields.__2__current = v80;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v80, v2, v3);
  result = 1;
  v81->fields.__1__state = 1;
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

  if ( (byte_4B04FD5 & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo, method);
    byte_4B04FD5 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1BC3254(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4B04FD4 & 1) == 0 )
  {
    sub_1BC3008(&System_IDisposable_TypeInfo, method);
    byte_4B04FD4 = 1;
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
      p_method = sub_1C13570(_7__wrap3, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4B04FCD & 1) == 0 )
  {
    sub_1BC3008(&BattleLogicNomal___c_TypeInfo, v1);
    byte_4B04FCD = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B04FCE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_1BC3008(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_4B04FCE = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
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
    sub_1BC3264(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__22_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BC3264(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__40_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1BC3264(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__18_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
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

  if ( (byte_4B04FCF & 1) == 0 )
  {
    sub_1BC3008(&BuffList_TypeInfo, targetSvtData);
    sub_1BC3008(&BattleBuffData_CheckInvokeBuff_TypeInfo, v5);
    byte_4B04FCF = 1;
  }
  v6 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v6->static_fields->CommandCodeFunctionActs;
  v9 = (BattleBuffData_CheckInvokeBuff_o *)sub_1BC3254(BattleBuffData_CheckInvokeBuff_TypeInfo);
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
  if ( (byte_4B04FD0 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1BC3008(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_4B04FD0 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2FEFE14 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1BC3264(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
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
  if ( (byte_4B04FD1 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1BC3008(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_4B04FD1 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2FEFE14 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1BC3264(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
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
    sub_1BC3264(this, targetSvtData);
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

  if ( (byte_4B04FD2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_4B04FD2 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass24_0_o *)_4__this->fields.data) == 0LL )
    sub_1BC3264(this, id);
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
    sub_1BC3264(this, npc);
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
    sub_1BC3264(this, npc);
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
    sub_1BC3264(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueId;
}