void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogicTask_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  BattleLogicTask_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E5212 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask___TypeInfo, method);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v3);
    byte_48E5212 = 1;
  }
  v4 = (struct BattleLogicTask_array *)sub_1B00D74(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.zeroTask, (int32_t)v4, v5, v6);
  v7 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  this->fields.tmpShiftTask = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.tmpShiftTask, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B00F28(this, method);
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
  __int64 v54; // x23
  __int64 ActorId; // x0
  BattleCommandData_o *v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v61; // x26
  int32_t v62; // w2
  int32_t v63; // w3
  BattleActionData_o *v64; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  BattleActionData_o **v67; // x21
  int32_t v68; // w2
  int32_t v69; // w3
  struct BattleCommandData_o *command; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  BattleActionData_o *v73; // x20
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v77; // x8
  int32_t v78; // w22
  Il2CppObject *v79; // x28
  System_Collections_Generic_List_object__o *v80; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Collections_Generic_IEnumerable_TSource__o **v90; // x25
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x0
  System_Collections_Generic_List_object__o **v93; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x20
  System_Func_T__TResult__o *v95; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x20
  BattleLogicNomal___c_c *v97; // x8
  System_Func_object__bool__o *_9__20_9; // x24
  Il2CppObject *v99; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x20
  BattleLogicNomal___c_c *v105; // x8
  System_Func_object__object__o *_9__20_0; // x24
  Il2CppObject *v107; // x22
  struct BattleLogicNomal___c_StaticFields *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_Func_object__object__o *v111; // x22
  __int64 v112; // x9
  System_Collections_Generic_Dictionary_object__object__o *v113; // x24
  BuffList_c *v114; // x8
  BattleLogicNomal___c_c *v115; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  System_Func_T__TResult__o *_9__20_2; // x25
  Il2CppObject *v118; // x22
  struct BattleLogicNomal___c_StaticFields *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  System_Func_T__TResult__o *_9__20_3; // x27
  Il2CppObject *v123; // x22
  struct BattleLogicNomal___c_StaticFields *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v127; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  __int64 v130; // x8
  int64_t v131; // x20
  System_Action_object__object__o *v132; // x22
  BattleServantData_o **v133; // x26
  int64_t commandAssistId; // x20
  System_Action_object__object__o *v135; // x22
  __int64 v136; // x8
  BattleCommandData_o **v137; // x24
  int32_t v138; // w2
  int32_t v139; // w3
  __int64 v140; // x20
  int32_t v141; // w2
  int32_t v142; // w3
  System_Func_object__object__o *v143; // x20
  int32_t v144; // w2
  int32_t v145; // w3
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v147; // x23
  const MethodInfo *v148; // x1
  const MethodInfo *v149; // x5
  __int64 v150; // x9
  __int64 v151; // x8
  unsigned __int64 v152; // x22
  int v153; // w20
  int32_t v154; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v155; // x28
  __int64 v156; // x8
  __int64 v157; // x20
  __int64 v158; // x9
  int *v159; // x10
  __int64 v160; // x0
  __int64 v161; // x0
  __int64 v162; // x1
  __int64 v163; // x20
  __int64 v164; // x8
  __int64 v165; // x9
  int *v166; // x10
  __int64 v167; // x0
  __int64 v168; // x8
  __int64 v169; // x9
  int *v170; // x10
  __int64 v171; // x0
  Il2CppObject *v172; // x1
  Il2CppObject *Item; // x1
  __int64 v174; // x8
  __int64 v175; // x9
  int *v176; // x10
  __int64 v177; // x0
  unsigned __int64 v178; // x10
  int v179; // w20
  int v180; // w8
  BuffList_ACTION_array *v181; // x28
  int v182; // w8
  __int64 v183; // x8
  __int64 v184; // x20
  __int64 v185; // x9
  int *v186; // x10
  __int64 v187; // x0
  __int64 v188; // x1
  __int64 v189; // x20
  __int64 v190; // x8
  __int64 v191; // x9
  int *v192; // x10
  __int64 v193; // x0
  __int64 v194; // x8
  __int64 v195; // x9
  int *v196; // x10
  __int64 v197; // x0
  __int64 v198; // x1
  BattleServantData_o *v199; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_41550356; // x0
  __int64 v201; // x1
  BattleBuffData_BuffData_array *v202; // x27
  __int64 v203; // x8
  unsigned __int64 v204; // x26
  BattleBuffData_BuffData_o *v205; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v208; // x1
  __int64 v209; // x8
  __int64 v210; // x9
  int *v211; // x10
  __int64 v212; // x0
  __int64 v213; // x8
  __int64 v214; // x20
  __int64 v215; // x9
  int *v216; // x10
  __int64 v217; // x0
  __int64 v218; // x0
  __int64 v219; // x1
  __int64 v220; // x20
  BattleActionData_DamageData_o *v221; // x28
  __int64 v222; // x8
  __int64 v223; // x9
  int *v224; // x10
  __int64 v225; // x0
  __int64 v226; // x8
  __int64 v227; // x9
  int *v228; // x10
  __int64 v229; // x0
  __int64 v230; // x1
  BattleServantData_o *v231; // x27
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  __int64 v234; // x1
  BattleActionData_DamageData_o *v235; // x29
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v237; // x22
  BattleActionData_o *v238; // x0
  _BOOL8 v239; // x0
  __int64 v240; // x1
  __int64 v241; // x8
  __int64 v242; // x9
  int *v243; // x10
  __int64 v244; // x0
  BattleActionData_o *v245; // x20
  BattleActionData_o *v246; // x20
  BattleActionData_o *v247; // x20
  struct BattleData_o *v248; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v250; // x20
  const MethodInfo *v251; // x5
  __int64 v252; // x9
  __int64 v253; // x8
  unsigned __int64 v254; // x26
  unsigned int v255; // w20
  int32_t v256; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x28
  __int64 v258; // x8
  __int64 v259; // x20
  __int64 v260; // x9
  int *v261; // x10
  __int64 v262; // x0
  __int64 v263; // x0
  __int64 v264; // x1
  __int64 v265; // x20
  __int64 v266; // x8
  __int64 v267; // x9
  int *v268; // x10
  __int64 v269; // x0
  __int64 v270; // x8
  __int64 v271; // x9
  int *v272; // x10
  __int64 v273; // x0
  Il2CppObject *v274; // x1
  Il2CppObject *v275; // x1
  __int64 v276; // x8
  __int64 v277; // x9
  int *v278; // x10
  __int64 v279; // x0
  unsigned __int64 v280; // x26
  int v281; // w20
  int v282; // w8
  BuffList_ACTION_array *v283; // x24
  int v284; // w8
  __int64 v285; // x8
  __int64 v286; // x20
  __int64 v287; // x9
  int *v288; // x10
  __int64 v289; // x0
  __int64 v290; // x1
  __int64 v291; // x20
  __int64 v292; // x8
  __int64 v293; // x9
  int *v294; // x10
  __int64 v295; // x0
  __int64 v296; // x8
  __int64 v297; // x9
  int *v298; // x10
  __int64 v299; // x0
  __int64 v300; // x1
  BattleServantData_o *v301; // x3
  BattleBuffData_BuffData_array *v302; // x0
  __int64 v303; // x1
  BattleBuffData_BuffData_array *v304; // x27
  __int64 v305; // x8
  unsigned __int64 v306; // x22
  BattleLogicFunction_o *v307; // x0
  __int64 v308; // x8
  __int64 v309; // x9
  int *v310; // x10
  __int64 v311; // x0
  __int64 v312; // x8
  __int64 v313; // x20
  __int64 v314; // x9
  int *v315; // x10
  __int64 v316; // x0
  __int64 v317; // x0
  __int64 v318; // x1
  __int64 v319; // x20
  __int64 v320; // x8
  __int64 v321; // x9
  int *v322; // x10
  __int64 v323; // x0
  __int64 v324; // x8
  __int64 v325; // x9
  int *v326; // x10
  __int64 v327; // x0
  __int64 v328; // x0
  __int64 v329; // x1
  __int64 v330; // x8
  __int64 v331; // x9
  int *v332; // x10
  __int64 v333; // x0
  _BOOL8 v334; // x0
  __int64 v335; // x1
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v338; // x0
  BattleActionData_o *v339; // x8
  __int64 v340; // x0
  const MethodInfo *v341; // [xsp+0h] [xbp-120h]
  __int64 *v342; // [xsp+10h] [xbp-110h]
  bool v343; // [xsp+1Ch] [xbp-104h]
  BattleLogicTask_o *v344; // [xsp+20h] [xbp-100h]
  __int64 v345; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v347; // [xsp+38h] [xbp-E8h]
  BattleBuffData_o *v348; // [xsp+40h] [xbp-E0h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+48h] [xbp-D8h]
  Il2CppObject *v351; // [xsp+50h] [xbp-D0h]
  bool v352; // [xsp+5Ch] [xbp-C4h]
  __int64 v353; // [xsp+60h] [xbp-C0h]
  __int64 v354; // [xsp+68h] [xbp-B8h]
  BattleServantData_o **v355; // [xsp+70h] [xbp-B0h]
  BattleCommandData_o **v356; // [xsp+78h] [xbp-A8h]
  System_Collections_Generic_Dictionary_object__object__o *v357; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v358; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v359; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_48E51FE & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_ACTION___TypeInfo, task);
    sub_1B00CCC(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B00CCC(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v8);
    sub_1B00CCC(&BattleActionData_TypeInfo, v9);
    sub_1B00CCC(&BattleServantData___TypeInfo, v10);
    sub_1B00CCC(&bool___TypeInfo, v11);
    sub_1B00CCC(&BuffList_TypeInfo, v12);
    sub_1B00CCC(&BattleLogic_DamageProcessArgs_TypeInfo, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v15);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v16);
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v17);
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v18);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_int___, v19);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v23);
    sub_1B00CCC(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v24);
    sub_1B00CCC(&System_Func_BattleServantData__BattleServantData__TypeInfo, v25);
    sub_1B00CCC(&System_Func_int__BattleServantData__TypeInfo, v26);
    sub_1B00CCC(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v27);
    sub_1B00CCC(&System_Func_BattleServantData__bool__TypeInfo, v28);
    sub_1B00CCC(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v29);
    sub_1B00CCC(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v30);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v31);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v32);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v33);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v34);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v35);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__Add__, v36);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v37);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Remove__, v38);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v39);
    sub_1B00CCC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v40);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_1B00CCC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__, v42);
    sub_1B00CCC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__, v43);
    sub_1B00CCC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__, v44);
    sub_1B00CCC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__, v45);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__, v46);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__, v47);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__, v48);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__, v49);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__, v50);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__, v51);
    sub_1B00CCC(&BattleLogicNomal___c__DisplayClass20_0_TypeInfo, v52);
    sub_1B00CCC(&BattleLogicNomal___c_TypeInfo, v53);
    byte_48E51FE = 1;
  }
  memset(&v359, 0, sizeof(v359));
  v54 = sub_1B00F18(BattleLogicNomal___c__DisplayClass20_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass20_0___ctor((BattleLogicNomal___c__DisplayClass20_0_o *)v54, 0LL);
  if ( !v54 )
    goto LABEL_369;
  *(_QWORD *)(v54 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 16), (int32_t)this, v57, v58);
  if ( !task )
    goto LABEL_369;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_369;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v54 + 24) = ServantData;
  v61 = (BattleServantData_o **)(v54 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 24), (int32_t)ServantData, v62, v63);
  v64 = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v64, 0LL);
  *baseActionData = v64;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v64, v65, v66);
  *(_QWORD *)(v54 + 48) = v64;
  v67 = (BattleActionData_o **)(v54 + 48);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 48), (int32_t)v64, v68, v69);
  command = task->fields.command;
  *(_QWORD *)(v54 + 40) = command;
  v356 = (BattleCommandData_o **)(v54 + 40);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 40), (int32_t)command, v71, v72);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_369;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_369;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v73 = *v67;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v73 )
    goto LABEL_369;
  v73->fields.actorId = ActorId;
  ActorId = (__int64)*v67;
  if ( !*v67 )
    goto LABEL_369;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(ActorId + 128), (int32_t)motionMessage, v74, v75);
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v77 = this->fields.data;
  if ( !v77 )
    goto LABEL_369;
  v78 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v77->fields.leaderDown || v77->fields.endbattleFlg )
    return 0LL;
  v79 = (Il2CppObject *)BattleData__getServantData(this->fields.data, ActorId, 0LL);
  v80 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v80 )
    goto LABEL_369;
  items = v80->fields._items;
  v84 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v80->fields._version;
  if ( !items )
    goto LABEL_369;
  size = v80->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v80,
      v79,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v86 = &items->obj.klass + size;
    v80->fields._size = size + 1;
    v86[4] = (Il2CppClass *)v79;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v86 + 4), (int32_t)v79, v81, v82);
  }
  *(_QWORD *)(v54 + 56) = v80;
  v90 = (System_Collections_Generic_IEnumerable_TSource__o **)(v54 + 56);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 56), (int32_t)v80, v87, v88);
  ActorId = *(_QWORD *)(v54 + 40);
  if ( !ActorId )
    goto LABEL_369;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v356;
  if ( !*v356 )
    goto LABEL_369;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v61,
    (BattleServantData_o *)v79,
    this->fields.data,
    0LL);
  ActorId = (__int64)*v356;
  if ( !*v356 )
    goto LABEL_369;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v61;
  if ( !*v61 )
    goto LABEL_369;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v356, 0LL);
  v343 = AttackType == 2;
  v344 = task;
  targetId = v78;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_369;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v78, 0LL);
    if ( !this->fields.data )
      goto LABEL_369;
    v92 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0LL)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0LL,
                                                                  0LL));
    v93 = (System_Collections_Generic_List_object__o **)(v54 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v92,
                         (const MethodInfo_2D9AD68 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_369;
    v94 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v78,
      (const MethodInfo_33A5EA8 *)Method_System_Collections_Generic_List_int__Remove__);
    v95 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(
      v95,
      (Il2CppObject *)v54,
      Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__,
      0LL);
    v96 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v94,
                                                                 (System_Func_TSource__TResult__o *)v95,
                                                                 (const MethodInfo_2D8DC18 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v97 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v97 = BattleLogicNomal___c_TypeInfo;
    }
    _9__20_9 = (System_Func_object__bool__o *)v97->static_fields->__9__20_9;
    if ( !_9__20_9 )
    {
      if ( !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97);
        v97 = BattleLogicNomal___c_TypeInfo;
      }
      v99 = (Il2CppObject *)v97->static_fields->__9;
      _9__20_9 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__20_9, v99, Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__, 0LL);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__20_9 = (struct System_Func_BattleServantData__bool__o *)_9__20_9;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_9, (int32_t)_9__20_9, v101, v102);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v96,
                         (System_Func_TSource__bool__o *)_9__20_9,
                         (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v93 )
      goto LABEL_369;
    v90 = (System_Collections_Generic_IEnumerable_TSource__o **)(v54 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v93,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v355 = (BattleServantData_o **)(v54 + 24);
  ActorId = (__int64)*v356;
  if ( !*v356 )
    goto LABEL_369;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                     (BattleCommandData_o *)ActorId,
                                     0LL);
  v104 = *v90;
  v352 = IsForceAttackFunctionTargetAll;
  v105 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v105 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__object__o *)v105->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = BattleLogicNomal___c_TypeInfo;
    }
    v107 = (Il2CppObject *)v105->static_fields->__9;
    _9__20_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__20_0, v107, Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__, 0LL);
    v108 = BattleLogicNomal___c_TypeInfo->static_fields;
    v108->__9__20_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__20_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v108->__9__20_0, (int32_t)_9__20_0, v109, v110);
  }
  v111 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_object__object____ctor(
    v111,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__,
    0LL);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v104,
                       (System_Func_TSource__TKey__o *)_9__20_0,
                       (System_Func_TSource__TElement__o *)v111,
                       (const MethodInfo_2D97E3C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v112 = *(_QWORD *)(v54 + 24);
  if ( !v112 )
    goto LABEL_369;
  v113 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  v114 = BuffList_TypeInfo;
  v348 = *(BattleBuffData_o **)(v112 + 768);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v114 = BuffList_TypeInfo;
  }
  v115 = BattleLogicNomal___c_TypeInfo;
  v342 = (__int64 *)v90;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v114->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v115 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v115->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v115->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v115);
      v115 = BattleLogicNomal___c_TypeInfo;
    }
    v118 = (Il2CppObject *)v115->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__20_2,
      v118,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__,
      0LL);
    v119 = BattleLogicNomal___c_TypeInfo->static_fields;
    v119->__9__20_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__20_2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v119->__9__20_2, (int32_t)_9__20_2, v120, v121);
    v115 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v115->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v115);
    v115 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_3 = (System_Func_T__TResult__o *)v115->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v115->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v115);
      v115 = BattleLogicNomal___c_TypeInfo;
    }
    v123 = (Il2CppObject *)v115->static_fields->__9;
    _9__20_3 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Int32Enum__object____ctor(
      _9__20_3,
      v123,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__,
      0LL);
    v124 = BattleLogicNomal___c_TypeInfo->static_fields;
    v124->__9__20_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__20_3;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v124->__9__20_3, (int32_t)_9__20_3, v125, v126);
  }
  v357 = v113;
  v127 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
           CommandCodeBuffHash,
           (System_Func_TSource__TKey__o *)_9__20_2,
           (System_Func_TSource__TElement__o *)_9__20_3,
           (const MethodInfo_2D97C44 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v54 + 32) = v127;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v127, v128, v129);
  v130 = *(_QWORD *)(v54 + 40);
  v347 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v54 + 32);
  if ( !v130 )
    goto LABEL_369;
  v131 = *(_QWORD *)(v130 + 72);
  v132 = (System_Action_object__object__o *)sub_1B00F18(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v132,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__,
    0LL);
  v133 = (BattleServantData_o **)(v54 + 24);
  if ( !v348 )
    goto LABEL_369;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v348,
    v131,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v132,
    1,
    0LL);
  if ( !*v356 )
    goto LABEL_369;
  commandAssistId = (*v356)->fields.commandAssistId;
  v135 = (System_Action_object__object__o *)sub_1B00F18(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v135,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__,
    0LL);
  v136 = *(_QWORD *)(v54 + 40);
  if ( !v136 )
    goto LABEL_369;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v348,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v135,
    1,
    *(_DWORD *)(v136 + 88),
    0LL);
  ActorId = sub_1B00D74(bool___TypeInfo, 2LL);
  v137 = (BattleCommandData_o **)(v54 + 40);
  if ( !ActorId )
    goto LABEL_369;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_370;
  v354 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1B00D74(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_369;
  v140 = ActorId;
  if ( v79 )
  {
    ActorId = sub_1B00E08(v79, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v340 = sub_1B00F4C(0LL);
      sub_1B00DF4(v340, 0LL);
    }
  }
  if ( !*(_DWORD *)(v140 + 24) )
    goto LABEL_370;
  *(_QWORD *)(v140 + 32) = v79;
  v351 = v79;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v140 + 32), (int32_t)v79, v138, v139);
  *(_QWORD *)(v54 + 72) = v140;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 72), v140, v141, v142);
  v143 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_object__object____ctor(
    v143,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__,
    0LL);
  *(_QWORD *)(v54 + 64) = v143;
  v345 = v54 + 64;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 64), (int32_t)v143, v144, v145);
  v353 = sub_1B00F18(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v353,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__,
    0LL);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_369;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v147 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B00F18(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v147, v148);
  v150 = v354;
  v151 = *(_QWORD *)(v354 + 24);
  if ( (int)v151 >= 1 )
  {
    v152 = 0LL;
    do
    {
      if ( v152 >= (unsigned int)v151 )
        goto LABEL_370;
      v153 = *(unsigned __int8 *)(v150 + v152 + 32);
      if ( *(_BYTE *)(v150 + v152 + 32) )
        v154 = 177;
      else
        v154 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v347,
                           v348,
                           v154,
                           *v356,
                           v149);
      if ( !v353 )
        goto LABEL_369;
      v155 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v353 + 24))(
                  *(_QWORD *)(v353 + 64),
                  v153 != 0,
                  v352,
                  *(_QWORD *)(v353 + 40));
      if ( !ActorId )
        goto LABEL_369;
      v156 = *(_QWORD *)ActorId;
      v157 = ActorId;
      v158 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v159 = (int *)(*(_QWORD *)(v156 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v159 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v158;
          v159 += 4;
          if ( !v158 )
            goto LABEL_85;
        }
        v160 = v156 + 16LL * *v159 + 312;
      }
      else
      {
LABEL_85:
        v160 = sub_1B52CAC(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v161 = (*(__int64 (__fastcall **)(__int64, _QWORD))v160)(v157, *(_QWORD *)(v160 + 8));
      v163 = v161;
      while ( 1 )
      {
        if ( !v163 )
          sub_1B00F28(v161, v162);
        v164 = *(_QWORD *)v163;
        v165 = *(unsigned __int16 *)(*(_QWORD *)v163 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v163 + 302LL) )
        {
          v166 = (int *)(*(_QWORD *)(v164 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v166 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v165;
            v166 += 4;
            if ( !v165 )
              goto LABEL_93;
          }
          v167 = v164 + 16LL * *v166 + 312;
        }
        else
        {
LABEL_93:
          v167 = sub_1B52CAC(v163, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v167)(v163, *(_QWORD *)(v167 + 8)) & 1) == 0 )
          break;
        v168 = *(_QWORD *)v163;
        v169 = *(unsigned __int16 *)(*(_QWORD *)v163 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v163 + 302LL) )
        {
          v170 = (int *)(*(_QWORD *)(v168 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v170 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v169;
            v170 += 4;
            if ( !v169 )
              goto LABEL_100;
          }
          v171 = v168 + 16LL * *v170 + 312;
        }
        else
        {
LABEL_100:
          v171 = sub_1B52CAC(v163, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v172 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v171)(v163, *(_QWORD *)(v171 + 8));
        if ( !v357 )
          sub_1B00F28(0LL, v172);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v357,
                 v172,
                 (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          (SkillLvMaster_o *)MasterData_object,
          *v356,
          v155,
          *v67,
          0,
          v147,
          v341);
      }
      v174 = *(_QWORD *)v163;
      v175 = *(unsigned __int16 *)(*(_QWORD *)v163 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v163 + 302LL) )
      {
        v176 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v176 - 1) != System_IDisposable_TypeInfo )
        {
          --v175;
          v176 += 4;
          if ( !v175 )
            goto LABEL_108;
        }
        v177 = v174 + 16LL * *v176 + 312;
      }
      else
      {
LABEL_108:
        v177 = sub_1B52CAC(v163, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v177)(v163, *(_QWORD *)(v177 + 8));
      v150 = v354;
      LODWORD(v151) = *(_DWORD *)(v354 + 24);
      ++v152;
    }
    while ( (__int64)v152 < (int)v151 );
    if ( (int)v151 >= 1 )
    {
      v178 = 0LL;
      while ( v178 < (unsigned int)v151 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v178;
        v179 = *(unsigned __int8 *)(v150 + v178 + 32);
        ActorId = sub_1B00D74(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_369;
        v180 = *(_DWORD *)(ActorId + 24);
        v181 = (BuffList_ACTION_array *)ActorId;
        if ( v179 )
        {
          if ( !v180 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v180 == 1 )
            break;
          v182 = 120;
        }
        else
        {
          if ( !v180 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v180 == 1 )
            break;
          v182 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v182;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v353 + 24))(
                    *(_QWORD *)(v353 + 64),
                    v179 != 0,
                    v352,
                    *(_QWORD *)(v353 + 40));
        if ( !ActorId )
          goto LABEL_369;
        v183 = *(_QWORD *)ActorId;
        v184 = ActorId;
        v185 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v186 = (int *)(*(_QWORD *)(v183 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v186 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v185;
            v186 += 4;
            if ( !v185 )
              goto LABEL_130;
          }
          v187 = v183 + 16LL * *v186 + 312;
        }
        else
        {
LABEL_130:
          v187 = sub_1B52CAC(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v189 = (*(__int64 (__fastcall **)(__int64, _QWORD))v187)(v184, *(_QWORD *)(v187 + 8));
        if ( !v189 )
          sub_1B00F28(0LL, v188);
        while ( 1 )
        {
          v190 = *(_QWORD *)v189;
          v191 = *(unsigned __int16 *)(*(_QWORD *)v189 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v189 + 302LL) )
          {
            v192 = (int *)(*(_QWORD *)(v190 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v192 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v191;
              v192 += 4;
              if ( !v191 )
                goto LABEL_137;
            }
            v133 = v355;
            v137 = v356;
            v193 = v190 + 16LL * *v192 + 312;
          }
          else
          {
LABEL_137:
            v133 = v355;
            v137 = v356;
            v193 = sub_1B52CAC(v189, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v193)(v189, *(_QWORD *)(v193 + 8)) & 1) == 0 )
            break;
          v194 = *(_QWORD *)v189;
          v195 = *(unsigned __int16 *)(*(_QWORD *)v189 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v189 + 302LL) )
          {
            v196 = (int *)(*(_QWORD *)(v194 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v196 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v195;
              v196 += 4;
              if ( !v195 )
                goto LABEL_144;
            }
            v197 = v194 + 16LL * *v196 + 312;
          }
          else
          {
LABEL_144:
            v197 = sub_1B52CAC(v189, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v199 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v197)(v189, *(_QWORD *)(v197 + 8));
          if ( !*v133 )
            sub_1B00F28(0LL, v198);
          AttackSideEffectBuffList_41550356 = BattleServantData__getAttackSideEffectBuffList_41550356(
                                                *v133,
                                                v181,
                                                *v137,
                                                v199,
                                                0LL);
          v202 = AttackSideEffectBuffList_41550356;
          if ( !AttackSideEffectBuffList_41550356 )
            sub_1B00F28(0LL, v201);
          v203 = *(_QWORD *)&AttackSideEffectBuffList_41550356->max_length;
          if ( (int)v203 >= 1 )
          {
            v204 = 0LL;
            do
            {
              if ( v204 >= (unsigned int)v203 )
                sub_1B00F30(AttackSideEffectBuffList_41550356, v201);
              if ( !*v67 )
                sub_1B00F28(0LL, v201);
              v205 = v202->m_Items[v204];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v67, 3, 0LL);
              if ( !logicfunction )
                sub_1B00F28(SideEffectActionData, v208);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v205,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v147,
                0,
                0LL);
              LODWORD(v203) = v202->max_length;
              ++v204;
            }
            while ( (__int64)v204 < (int)v203 );
          }
        }
        v209 = *(_QWORD *)v189;
        v210 = *(unsigned __int16 *)(*(_QWORD *)v189 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v189 + 302LL) )
        {
          v211 = (int *)(*(_QWORD *)(v209 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v211 - 1) != System_IDisposable_TypeInfo )
          {
            --v210;
            v211 += 4;
            if ( !v210 )
              goto LABEL_159;
          }
          v212 = v209 + 16LL * *v211 + 312;
        }
        else
        {
LABEL_159:
          v212 = sub_1B52CAC(v189, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v212)(v189, *(_QWORD *)(v212 + 8));
        v150 = v354;
        LODWORD(v151) = *(_DWORD *)(v354 + 24);
        v178 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v151 )
          goto LABEL_169;
      }
LABEL_370:
      sub_1B00F30(ActorId, v56);
    }
  }
LABEL_169:
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1B00F18(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL);
  if ( !v353 )
    goto LABEL_369;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v353 + 24))(
              *(_QWORD *)(v353 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v353 + 40));
  if ( !ActorId )
    goto LABEL_369;
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
        goto LABEL_175;
    }
    v217 = v213 + 16LL * *v216 + 312;
  }
  else
  {
LABEL_175:
    v217 = sub_1B52CAC(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v218 = (*(__int64 (__fastcall **)(__int64, _QWORD))v217)(v214, *(_QWORD *)(v217 + 8));
  v220 = v218;
  v221 = 0LL;
  while ( 1 )
  {
    if ( !v220 )
      sub_1B00F28(v218, v219);
    v222 = *(_QWORD *)v220;
    v223 = *(unsigned __int16 *)(*(_QWORD *)v220 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v220 + 302LL) )
    {
      v224 = (int *)(*(_QWORD *)(v222 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v224 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v223;
        v224 += 4;
        if ( !v223 )
          goto LABEL_183;
      }
      v225 = v222 + 16LL * *v224 + 312;
    }
    else
    {
LABEL_183:
      v225 = sub_1B52CAC(v220, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v225)(v220, *(_QWORD *)(v225 + 8)) & 1) == 0 )
      break;
    v226 = *(_QWORD *)v220;
    v227 = *(unsigned __int16 *)(*(_QWORD *)v220 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v220 + 302LL) )
    {
      v228 = (int *)(*(_QWORD *)(v226 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v228 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v227;
        v228 += 4;
        if ( !v227 )
          goto LABEL_190;
      }
      v229 = v226 + 16LL * *v228 + 312;
    }
    else
    {
LABEL_190:
      v229 = sub_1B52CAC(v220, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v231 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v229)(v220, *(_QWORD *)(v229 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_1B00F28(0LL, v230);
    Damagelist = BattleLogic__getDamagelist(logic, *v133, v231, *v137, processArgsa, 0LL);
    v235 = Damagelist;
    if ( v231 == (BattleServantData_o *)v351 )
      v221 = Damagelist;
    if ( !v231 )
      sub_1B00F28(Damagelist, v234);
    buffData = v231->fields.buffData;
    if ( !buffData )
      sub_1B00F28(Damagelist, v234);
    if ( !buffData->fields.isNoDamage )
    {
      v237 = *v67;
      v238 = BattleBuffData__UseProgressingDoNotAct(v231->fields.buffData, v231, 0, 0LL);
      if ( !v237 )
        sub_1B00F28(v238, v238);
      BattleActionData__addSideEffectActionData(v237, v238, 1, 0LL);
    }
    if ( !*v133 )
      sub_1B00F28(0LL, v234);
    v239 = BattleServantData__checkPlayer(*v133, 0LL);
    if ( v239 )
    {
      if ( !*v133 )
        sub_1B00F28(v239, v240);
      v231->fields.overkillTargetId = (*v133)->fields.uniqueId;
    }
    if ( !*v67 )
      sub_1B00F28(0LL, v240);
    BattleActionData__setDamageData(*v67, v235, 0LL, 0, 0, 0LL);
  }
  v241 = *(_QWORD *)v220;
  v242 = *(unsigned __int16 *)(*(_QWORD *)v220 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v220 + 302LL) )
  {
    v243 = (int *)(*(_QWORD *)(v241 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v243 - 1) != System_IDisposable_TypeInfo )
    {
      --v242;
      v243 += 4;
      if ( !v242 )
        goto LABEL_210;
    }
    v244 = v241 + 16LL * *v243 + 312;
  }
  else
  {
LABEL_210:
    v244 = sub_1B52CAC(v220, System_IDisposable_TypeInfo, 0LL);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v244)(v220, *(_QWORD *)(v244 + 8));
  if ( !*(_QWORD *)v345 )
    goto LABEL_369;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v345 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v345 + 64LL),
    v351,
    *(_QWORD *)(*(_QWORD *)v345 + 40LL));
  ActorId = (__int64)*v137;
  if ( !*v137 )
    goto LABEL_369;
  v245 = *v67;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v245 )
    goto LABEL_369;
  v245->fields.type = ActorId;
  ActorId = (__int64)*v67;
  if ( !*v67 )
    goto LABEL_369;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v137, 0LL);
  v56 = *v137;
  if ( !*v137 )
    goto LABEL_369;
  v246 = *v67;
  if ( !*v67 )
    goto LABEL_369;
  v246->fields.actionIndex = v56->fields.actionIndex;
  ActorId = (__int64)*v133;
  if ( !*v133 )
    goto LABEL_369;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v56, 0LL);
  v246->fields.motionId = ActorId;
  if ( !v221 )
    goto LABEL_369;
  v247 = *v67;
  ActorId = BattleActionData_DamageData__getAttackCount(v221, 0LL);
  if ( !v247 )
    goto LABEL_369;
  v247->fields.attackcount = ActorId;
  v248 = this->fields.data;
  if ( !v248 )
    goto LABEL_369;
  perf = v248->fields.perf;
  if ( !perf )
    goto LABEL_369;
  if ( !*v137 )
    goto LABEL_369;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_369;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v137)->fields.actionIndex,
    0LL);
  if ( !*v133 )
    goto LABEL_369;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_369;
  v250 = *v67;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v133)->fields.uniqueId, targetId, 0LL);
  if ( !v250 )
    goto LABEL_369;
  v252 = v354;
  v250->fields.prevattackme = ActorId & 1;
  v253 = *(_QWORD *)(v354 + 24);
  if ( (int)v253 >= 1 )
  {
    v254 = 0LL;
    do
    {
      if ( v254 >= (unsigned int)v253 )
        goto LABEL_370;
      v255 = *(unsigned __int8 *)(v252 + v254 + 32);
      if ( *(_BYTE *)(v252 + v254 + 32) )
        v256 = 178;
      else
        v256 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v347,
                                    v348,
                                    v256,
                                    *v356,
                                    v251);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v353 + 24))(
                  *(_QWORD *)(v353 + 64),
                  v255,
                  v352,
                  *(_QWORD *)(v353 + 40));
      if ( !ActorId )
        goto LABEL_369;
      v258 = *(_QWORD *)ActorId;
      v259 = ActorId;
      v260 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v261 = (int *)(*(_QWORD *)(v258 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v261 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v260;
          v261 += 4;
          if ( !v260 )
            goto LABEL_239;
        }
        v262 = v258 + 16LL * *v261 + 312;
      }
      else
      {
LABEL_239:
        v262 = sub_1B52CAC(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v263 = (*(__int64 (__fastcall **)(__int64, _QWORD))v262)(v259, *(_QWORD *)(v262 + 8));
      v265 = v263;
      while ( 1 )
      {
        if ( !v265 )
          sub_1B00F28(v263, v264);
        v266 = *(_QWORD *)v265;
        v267 = *(unsigned __int16 *)(*(_QWORD *)v265 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v265 + 302LL) )
        {
          v268 = (int *)(*(_QWORD *)(v266 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v268 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v267;
            v268 += 4;
            if ( !v267 )
              goto LABEL_247;
          }
          v269 = v266 + 16LL * *v268 + 312;
        }
        else
        {
LABEL_247:
          v269 = sub_1B52CAC(v265, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v269)(v265, *(_QWORD *)(v269 + 8)) & 1) == 0 )
          break;
        v270 = *(_QWORD *)v265;
        v271 = *(unsigned __int16 *)(*(_QWORD *)v265 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v265 + 302LL) )
        {
          v272 = (int *)(*(_QWORD *)(v270 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v272 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v271;
            v272 += 4;
            if ( !v271 )
              goto LABEL_254;
          }
          v273 = v270 + 16LL * *v272 + 312;
        }
        else
        {
LABEL_254:
          v273 = sub_1B52CAC(v265, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v274 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v273)(v265, *(_QWORD *)(v273 + 8));
        if ( !v357 )
          sub_1B00F28(0LL, v274);
        v275 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v357,
                 v274,
                 (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v275,
          (SkillLvMaster_o *)MasterData_object,
          *v356,
          TargetCommandCodeBuffList,
          *v67,
          1,
          v147,
          v341);
      }
      v276 = *(_QWORD *)v265;
      v277 = *(unsigned __int16 *)(*(_QWORD *)v265 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v265 + 302LL) )
      {
        v278 = (int *)(*(_QWORD *)(v276 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v278 - 1) != System_IDisposable_TypeInfo )
        {
          --v277;
          v278 += 4;
          if ( !v277 )
            goto LABEL_262;
        }
        v279 = v276 + 16LL * *v278 + 312;
      }
      else
      {
LABEL_262:
        v279 = sub_1B52CAC(v265, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v279)(v265, *(_QWORD *)(v279 + 8));
      v252 = v354;
      LODWORD(v253) = *(_DWORD *)(v354 + 24);
      ++v254;
    }
    while ( (__int64)v254 < (int)v253 );
    if ( (int)v253 >= 1 )
    {
      v280 = 0LL;
      while ( v280 < (unsigned int)v253 )
      {
        v281 = *(unsigned __int8 *)(v252 + v280 + 32);
        ActorId = sub_1B00D74(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_369;
        v282 = *(_DWORD *)(ActorId + 24);
        v283 = (BuffList_ACTION_array *)ActorId;
        if ( v281 )
        {
          if ( !v282 )
            goto LABEL_370;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v282 == 1 )
            goto LABEL_370;
          v284 = 121;
        }
        else
        {
          if ( !v282 )
            goto LABEL_370;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v282 == 1 )
            goto LABEL_370;
          v284 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v284;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v353 + 24))(
                    *(_QWORD *)(v353 + 64),
                    v281 != 0,
                    v352,
                    *(_QWORD *)(v353 + 40));
        if ( !ActorId )
          goto LABEL_369;
        v285 = *(_QWORD *)ActorId;
        v286 = ActorId;
        v287 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v288 = (int *)(*(_QWORD *)(v285 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v288 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v287;
            v288 += 4;
            if ( !v287 )
              goto LABEL_284;
          }
          v289 = v285 + 16LL * *v288 + 312;
        }
        else
        {
LABEL_284:
          v289 = sub_1B52CAC(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v291 = (*(__int64 (__fastcall **)(__int64, _QWORD))v289)(v286, *(_QWORD *)(v289 + 8));
        if ( !v291 )
          sub_1B00F28(0LL, v290);
        while ( 1 )
        {
          v292 = *(_QWORD *)v291;
          v293 = *(unsigned __int16 *)(*(_QWORD *)v291 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v291 + 302LL) )
          {
            v294 = (int *)(*(_QWORD *)(v292 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v294 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v293;
              v294 += 4;
              if ( !v293 )
                goto LABEL_291;
            }
            v295 = v292 + 16LL * *v294 + 312;
          }
          else
          {
LABEL_291:
            v295 = sub_1B52CAC(v291, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v295)(v291, *(_QWORD *)(v295 + 8)) & 1) == 0 )
            break;
          v296 = *(_QWORD *)v291;
          v297 = *(unsigned __int16 *)(*(_QWORD *)v291 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v291 + 302LL) )
          {
            v298 = (int *)(*(_QWORD *)(v296 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v298 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v297;
              v298 += 4;
              if ( !v297 )
                goto LABEL_298;
            }
            v299 = v296 + 16LL * *v298 + 312;
          }
          else
          {
LABEL_298:
            v299 = sub_1B52CAC(v291, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v301 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v299)(v291, *(_QWORD *)(v299 + 8));
          if ( !*v355 )
            sub_1B00F28(0LL, v300);
          v302 = BattleServantData__getAttackSideEffectBuffList_41550356(*v355, v283, *v356, v301, 0LL);
          v304 = v302;
          if ( !v302 )
            sub_1B00F28(0LL, v303);
          v305 = *(_QWORD *)&v302->max_length;
          if ( (int)v305 >= 1 )
          {
            v306 = 0LL;
            do
            {
              if ( v306 >= (unsigned int)v305 )
                sub_1B00F30(v302, v303);
              v307 = this->fields.logicfunction;
              if ( !v307 )
                sub_1B00F28(0LL, v303);
              BattleLogicFunction__SetSideEffectBuff(
                v307,
                (SkillLvMaster_o *)MasterData_object,
                *v67,
                v304->m_Items[v306],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v147,
                1,
                0LL);
              LODWORD(v305) = v304->max_length;
              ++v306;
            }
            while ( (__int64)v306 < (int)v305 );
          }
        }
        v308 = *(_QWORD *)v291;
        v309 = *(unsigned __int16 *)(*(_QWORD *)v291 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v291 + 302LL) )
        {
          v310 = (int *)(*(_QWORD *)(v308 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v310 - 1) != System_IDisposable_TypeInfo )
          {
            --v309;
            v310 += 4;
            if ( !v309 )
              goto LABEL_312;
          }
          v311 = v308 + 16LL * *v310 + 312;
        }
        else
        {
LABEL_312:
          v311 = sub_1B52CAC(v291, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v311)(v291, *(_QWORD *)(v311 + 8));
        v252 = v354;
        LODWORD(v253) = *(_DWORD *)(v354 + 24);
        if ( (__int64)++v280 >= (int)v253 )
          goto LABEL_321;
      }
      goto LABEL_370;
    }
  }
LABEL_321:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v353 + 24))(
              *(_QWORD *)(v353 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v353 + 40));
  if ( !ActorId )
    goto LABEL_369;
  v312 = *(_QWORD *)ActorId;
  v313 = ActorId;
  v314 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v315 = (int *)(*(_QWORD *)(v312 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v315 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v314;
      v315 += 4;
      if ( !v314 )
        goto LABEL_326;
    }
    v316 = v312 + 16LL * *v315 + 312;
  }
  else
  {
LABEL_326:
    v316 = sub_1B52CAC(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v317 = (*(__int64 (__fastcall **)(__int64, _QWORD))v316)(v313, *(_QWORD *)(v316 + 8));
  v319 = v317;
  while ( 1 )
  {
    if ( !v319 )
      sub_1B00F28(v317, v318);
    v320 = *(_QWORD *)v319;
    v321 = *(unsigned __int16 *)(*(_QWORD *)v319 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v319 + 302LL) )
    {
      v322 = (int *)(*(_QWORD *)(v320 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v322 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v321;
        v322 += 4;
        if ( !v321 )
          goto LABEL_334;
      }
      v323 = v320 + 16LL * *v322 + 312;
    }
    else
    {
LABEL_334:
      v323 = sub_1B52CAC(v319, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v323)(v319, *(_QWORD *)(v323 + 8)) & 1) == 0 )
      break;
    v324 = *(_QWORD *)v319;
    v325 = *(unsigned __int16 *)(*(_QWORD *)v319 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v319 + 302LL) )
    {
      v326 = (int *)(*(_QWORD *)(v324 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v326 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v325;
        v326 += 4;
        if ( !v325 )
          goto LABEL_341;
      }
      v327 = v324 + 16LL * *v326 + 312;
    }
    else
    {
LABEL_341:
      v327 = sub_1B52CAC(v319, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v328 = (*(__int64 (__fastcall **)(__int64, _QWORD))v327)(v319, *(_QWORD *)(v327 + 8));
    if ( !*v355 )
      sub_1B00F28(v328, v329);
    if ( !v328 )
      sub_1B00F28(0LL, v329);
    if ( !this->fields.logic )
      sub_1B00F28(v328, v329);
    v317 = BattleLogic__setDamageSideEffect(
             this->fields.logic,
             *v67,
             (*v355)->fields.uniqueId,
             *(_DWORD *)(v328 + 24),
             *v356,
             0LL);
  }
  v330 = *(_QWORD *)v319;
  v331 = *(unsigned __int16 *)(*(_QWORD *)v319 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v319 + 302LL) )
  {
    v332 = (int *)(*(_QWORD *)(v330 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v332 - 1) != System_IDisposable_TypeInfo )
    {
      --v331;
      v332 += 4;
      if ( !v331 )
        goto LABEL_351;
    }
    v333 = v330 + 16LL * *v332 + 312;
  }
  else
  {
LABEL_351:
    v333 = sub_1B52CAC(v319, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v333)(v319, *(_QWORD *)(v333 + 8));
  ActorId = *v342;
  if ( !*v342 )
    goto LABEL_369;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v358,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v359 = v358;
  while ( 1 )
  {
    v334 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v359,
             (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v334 )
      break;
    current = v359.fields._current;
    if ( !v359.fields._current )
      sub_1B00F28(v334, v335);
    klass = v359.fields._current[48].klass;
    if ( !klass )
      sub_1B00F28(v334, v335);
    LOBYTE(klass->_1.methods) = 0;
    if ( v344->fields.isCanCounterTask )
    {
      if ( !*v355 )
        sub_1B00F28(v334, v335);
      v338 = this->fields.data;
      if ( !v338 )
        sub_1B00F28(0LL, v335);
      BattleData__SetWasAttackTargetId(v338, (*v355)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v359,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !*(_QWORD *)v345 )
    goto LABEL_369;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v345 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v345 + 64LL),
              v351,
              *(_QWORD *)(*(_QWORD *)v345 + 40LL));
  v339 = *v67;
  if ( !*v67
    || (v339->fields.isForcedSpeedOne = v344->fields.isForcedSpeedOne, v339->fields.isAllAttack = v343, !*v355)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v355)->fields.uniqueId, targetId, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_369:
    sub_1B00F28(ActorId, v56);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v67;
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
  int32_t v15; // w3
  int32_t v16; // w1

  if ( (byte_48E5210 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, task);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_8619/*"MOTION_DO_NOT_ACT"*/, v6);
    byte_48E5210 = 1;
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
    v13 = sub_1B00F18(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v13 )
      {
        *(_DWORD *)(v13 + 32) = (_DWORD)data;
        v16 = StringLiteral_8619/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v13 + 64) = StringLiteral_8619/*"MOTION_DO_NOT_ACT"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 64), v16, v14, v15);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v13 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v13;
        }
      }
    }
LABEL_16:
    sub_1B00F28(data, task);
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

  if ( (byte_48E520F & 1) == 0 )
  {
    sub_1B00CCC(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_48E520F = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1B00F18(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1B00F28(data, v5);
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
  int32_t v22; // w3

  if ( (byte_48E5205 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_6336/*"FOCUS_UNDER"*/, v4);
    sub_1B00CCC(&StringLiteral_6334/*"FOCUS_CENTER"*/, v5);
    sub_1B00CCC(&StringLiteral_6338/*"FOCUS_UP"*/, v6);
    byte_48E5205 = 1;
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
    v12 = StringLiteral_6334/*"FOCUS_CENTER"*/;
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
        v12 = StringLiteral_6334/*"FOCUS_CENTER"*/;
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
      v18 = &StringLiteral_6336/*"FOCUS_UNDER"*/;
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
      v18 = &StringLiteral_6338/*"FOCUS_UP"*/;
    }
    v12 = *v18;
    v16->fields.globaltargetId = uniqueID;
LABEL_39:
    v10 = sub_1B00F18(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
    if ( v10 )
    {
      v20 = v9->fields.uniqueId;
      *(_DWORD *)(v10 + 32) = v20;
      *(_DWORD *)(v10 + 36) = v20;
      BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
      *(_QWORD *)(v10 + 64) = v12;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 64), v12, v21, v22);
      return (BattleActionData_o *)v10;
    }
LABEL_42:
    sub_1B00F28(data, method);
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
  System_Collections_Generic_List_object__o *v17; // x19
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v19; // x1
  BattleLogicNomal___c_c *v20; // x0
  System_Comparison_T__o *_9__18_0; // x20
  Il2CppObject *v22; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E51FD & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, passiveBuffDict);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B00CCC(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__, v15);
    sub_1B00CCC(&BattleLogicNomal___c_TypeInfo, v16);
    byte_48E51FD = 1;
  }
  value = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_3065630 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v17) )
  {
LABEL_16:
    sub_1B00F28(CommandCardBuffArray, v19);
  }
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v20 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v20 = BattleLogicNomal___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v20->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleLogicNomal___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v22,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__18_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v24, v25);
  }
  System_Collections_Generic_List_object___Sort_54277268(
    v17,
    _9__18_0,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17;
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  BattleActorControl_o *PartsActor; // x20
  struct BattleData_o *v7; // x8

  if ( (byte_48E5207 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E5207 = 1;
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
          sub_1B00F28(data, method);
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
  if ( (byte_48E5208 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_1B00CCC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_48E5208 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0LL);
  if ( !QuestIndividualities )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1B52C04(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1B52BA8(v10);
    if ( !*(_DWORD *)(v10 + 224) )
      j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1B52BA8(v11);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !v3 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1B52C04(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1B52BA8(v14);
    if ( !*(_DWORD *)(v14 + 224) )
      j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1B52BA8(v15);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_2D923CC *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
      v16 = this->fields.data;
      if ( v16 )
      {
        data = (BattleData_o *)v16->fields.perf;
        if ( data )
        {
          BattlePerformance__updateStatus((BattlePerformance_o *)data, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_1B00F28(data, prevFieldIndiv);
  }
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
    sub_1B00F28(data, method);
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
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v40; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_48E520C & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v6);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_48E520C = 1;
  }
  isFirstAdd = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
              v25 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
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
              v28 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v28, 0LL);
              if ( !v28 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v28, v25, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1B00D74(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v30 = Instance;
              Instance = sub_1B00E08(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v40 = sub_1B00F4C(0LL);
                sub_1B00DF4(v40, 0LL);
              }
              if ( !*(_DWORD *)(v30 + 24) )
                break;
              *(_QWORD *)(v30 + 32) = v28;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v28, v31, v32);
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
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v38[4] = (Il2CppClass *)v28;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v28, v33, v34);
              }
              max_length = v22->max_length;
              if ( (int)++v23 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1B00F30(Instance, v16);
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
    sub_1B00F28(Instance, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_48E5211 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v16);
    this = (BattleLogicNomal_o *)sub_1B00CCC(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v17);
    byte_48E5211 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !commandCodeBuffList )
    sub_1B00F28(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
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
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v19 )
      break;
    if ( !command )
      sub_1B00F28(v19, v20);
    current = (BattleBuffData_BuffData_o *)v42.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1B00F28(IsEnableCommandCode, v23);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1B00F28(IsEnableCommandCode, v23);
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
          sub_1B00F28(v24, v25);
        vals = current->fields.vals;
        if ( !vals )
          sub_1B00F28(v24, v25);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1B00F30(v24, v25);
        if ( max_length == 1 )
          sub_1B00F30(v24, v25);
        if ( !skillLvMst )
          sub_1B00F28(v24, v25);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v30 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1B00F28(Entity, v29);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1B00F28(Entity, v29);
          logicfunction = v40->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v30->fields.funcId;
          v34 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v30, 0LL);
          if ( !logicfunction )
            sub_1B00F28(DataValsList, v36);
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
          sub_1B00F28(0LL, v25);
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
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  int32_t v9; // w3
  int32_t v10; // w1

  if ( (byte_48E51FF & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B00CCC(&StringLiteral_8611/*"MOTION_BACK"*/, v4);
    byte_48E51FF = 1;
  }
  v5 = sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    sub_1B00F28(v6, v7);
  *(_DWORD *)(v5 + 32) = uniqueId;
  v10 = StringLiteral_8611/*"MOTION_BACK"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_8611/*"MOTION_BACK"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 64), v10, v8, v9);
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
            sub_1B00F30(data, task);
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
    sub_1B00F28(data, task);
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
  System_Action_object__o *klass; // x20
  Il2CppObject *v17; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_48E520B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B00CCC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v4);
    sub_1B00CCC(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__, v5);
    sub_1B00CCC(&BattleLogicNomal___c_TypeInfo, v6);
    byte_48E520B = 1;
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
            sub_1B00F30(data, task);
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
    sub_1B00F28(data, task);
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
  klass = (System_Action_object__o *)data->fields.enemyMasterInfo[1].klass;
  if ( !klass )
  {
    if ( !data->fields.turnEffectType )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
    }
    v17 = (Il2CppObject *)data->fields.enemyMasterInfo->klass;
    klass = (System_Action_object__o *)sub_1B00F18(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(klass, v17, Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Action_AiNpcBattleServantData__o *)klass;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)klass, v19, v20);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)klass,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  int32_t v17; // w3
  int v18; // w8
  ServantStatusBattleListViewItem_o *v19; // x0
  System_Array_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 *v23; // x8
  __int64 v24; // x1
  __int64 v25; // x8
  char v26; // w21
  unsigned __int64 v27; // x22
  System_Array_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_RuntimeFieldHandle_o v32; // 0:w1.4
  System_RuntimeFieldHandle_o v33; // 0:w1.4

  if ( (byte_48E5200 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, task);
    sub_1B00CCC(&FunctionEntity_TypeInfo, v5);
    sub_1B00CCC(&int___TypeInfo, v6);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v7);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v8);
    sub_1B00CCC(&StringLiteral_6315/*"FIELD_PLAYER"*/, v9);
    sub_1B00CCC(&StringLiteral_6314/*"FIELD_ENEMY"*/, v10);
    byte_48E5200 = 1;
  }
  v11 = sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v15 = sub_1B00F18(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v15, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v11, 0LL);
    isBuster = sub_1B00D74(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v18 = *(_DWORD *)(isBuster + 24);
      v13 = isBuster;
      if ( !v18 || (*(_DWORD *)(isBuster + 32) = 102, v18 == 1) )
LABEL_30:
        sub_1B00F30(isBuster, v13);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 32) = isBuster;
        v19 = (ServantStatusBattleListViewItem_o *)(v15 + 32);
LABEL_14:
        sub_1B00C70(v19, v13, v16, v17);
        v23 = &StringLiteral_6315/*"FIELD_PLAYER"*/;
LABEL_15:
        v24 = *v23;
        *(_QWORD *)(v11 + 64) = *v23;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 64), v24, v21, v22);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1B00F28(isBuster, v13);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v11, 0LL);
    v20 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 3LL);
    v32.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v20, v32, 0LL);
    if ( !v15 )
      goto LABEL_29;
    *(_QWORD *)(v15 + 32) = v20;
    v19 = (ServantStatusBattleListViewItem_o *)(v15 + 32);
    LODWORD(v13) = (_DWORD)v20;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0LL);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v11, 0LL);
    v29 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 3LL);
    v33.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v29, v33, 0LL);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = v29;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v29, v30, v31);
      v23 = &StringLiteral_6314/*"FIELD_ENEMY"*/;
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
    sub_1B00F28(v5, v6);
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
  int32_t v34; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x21
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_Dictionary_int__object__o *v39; // x23
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v42; // w2
  int32_t v43; // w3
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
  System_Collections_Generic_Dictionary_int__object__o *v166; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v167; // [xsp+10h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+20h] [xbp-D0h]
  char v169; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v170; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v171; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v172; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_48E5209 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B00CCC(&BattleActionData_TypeInfo, v4);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1B00CCC(&int___TypeInfo, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__, v27);
    sub_1B00CCC(&BattleLogicNomal___c__DisplayClass34_0_TypeInfo, v28);
    sub_1B00CCC(&StringLiteral_8621/*"MOTION_ENEMY_TURN_END"*/, v29);
    byte_48E5209 = 1;
  }
  entity = 0LL;
  memset(&v172, 0, sizeof(v172));
  v30 = sub_1B00F18(BattleLogicNomal___c__DisplayClass34_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass34_0___ctor((BattleLogicNomal___c__DisplayClass34_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)this, v33, v34);
  baseActData = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
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
  v36 = StringLiteral_8621/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8621/*"MOTION_ENEMY_TURN_END"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&baseActData->fields.motionname, v36, v37, v38);
  v167 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v167,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v170 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v42, v43);
  v44 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v166 = v39;
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
      if ( *(_BYTE *)(Instance + 516) )
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
              Instance = (__int64)v167;
              if ( !*v49 || !v167 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v167,
                *(_DWORD *)(*v49 + 24),
                v51,
                (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
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
                   (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
    sub_1B00F30(Instance, v32);
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
    v169 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v66 = *(_DWORD *)(Instance + 24);
    if ( v66 >= 1 )
    {
      v67 = 0;
      v169 = 0;
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
              if ( !*v69 || !v166 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v166,
                *(_DWORD *)(*v69 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v67 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_220;
          if ( !*v69 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v69 + 768);
          if ( !Instance )
            goto LABEL_215;
          v169 |= v72;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v67 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_220;
        Instance = *v69;
        if ( !*v69 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 516) )
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
                Instance = (__int64)v167;
                if ( !*v69 || !v167 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v167,
                  *(_DWORD *)(*v69 + 24),
                  v73,
                  (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
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
              *(const MethodInfo_33A49AC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
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
    v169 = 0;
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
                        (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  v82 = (System_Action_object__o *)sub_1B00F18(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v82,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v82,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  if ( !v166 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v171,
    v166,
    (const MethodInfo_3036964 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v172 = v171;
  while ( 1 )
  {
    v86 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v172,
                            (const MethodInfo_318149C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v86 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v172.fields._current.fields.value;
    if ( !v172.fields._current.fields.value )
      sub_1B00F28(v86, v87);
    max_length = (int)v172.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v172.fields._current.fields.key;
      v91 = 0;
      v92 = 1;
LABEL_128:
      if ( v91 >= max_length )
        sub_1B00F30(v86, v87);
      v93 = value->m_Items[v91];
      if ( !v93 )
        sub_1B00F28(v86, v87);
      if ( v93->fields._isRemove )
        goto LABEL_164;
      if ( !v35 )
        sub_1B00F28(v86, v87);
      v86 = DataMasterBase_object__object__int___GetEntity(
              v35,
              v93->fields.buffId,
              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v86 )
        goto LABEL_164;
      v94 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v94, 0LL);
      if ( !v94 )
        sub_1B00F28(v95, v96);
      v94->fields.svtUniqueId = key;
      vals = v93->fields.vals;
      if ( !vals )
        sub_1B00F28(v95, v96);
      if ( !vals->max_length )
        sub_1B00F30(v95, v96);
      v98 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v94->klass->vtable._4_set_skillId.method)(
              v94,
              (unsigned int)vals->m_Items[1],
              v94->klass->vtable._5_get_skillId.methodPtr);
      v100 = v93->fields.vals;
      if ( !v100 )
        sub_1B00F28(v98, v99);
      if ( v100->max_length <= 1 )
        sub_1B00F30(v98, v99);
      v94->fields.skilllv = v100->m_Items[2];
      v101 = this->fields.data;
      if ( !v101 )
        sub_1B00F28(0LL, v99);
      ServantData = BattleData__getServantData(v101, v94->fields.svtUniqueId, 0LL);
      v103 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v94->klass->vtable._5_get_skillId.method)(
               v94,
               v94->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v170 )
        sub_1B00F28(0LL, v103);
      v104 = SkillLvMaster__GetEntity(v170, v103, v94->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B00F28(v104, v105);
      v106 = v104;
      v107 = this->fields.data;
      if ( !v107 )
        sub_1B00F28(0LL, v105);
      v108 = BattleData__checkAliveOther(v107, ServantData->fields.uniqueId, 0LL);
      if ( !v108 )
      {
        if ( !v106 )
          sub_1B00F28(v108, v109);
        v110 = this->fields.logic;
        if ( !v110 )
          sub_1B00F28(0LL, v109);
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
        v112 = sub_1B00D74(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v112;
        if ( !v112 )
          sub_1B00F28(0LL, v113);
        if ( !*(_DWORD *)(v112 + 24) )
          sub_1B00F30(v112, v113);
        exists = 0;
        *(_DWORD *)(v112 + 32) = v111;
      }
      logicskill = this->fields.logicskill;
      v117 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
      if ( !v117 )
        sub_1B00F28(0LL, v118);
      if ( !v117->max_length )
        sub_1B00F30(v117, v118);
      v117->m_Items[1] = key;
      if ( !logicskill )
        sub_1B00F28(v117, v118);
      v119 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v94,
                                                   v117,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0LL);
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
          sub_1B00F28(IsNullOrEmpty, v120);
        if ( !v121->max_length )
          sub_1B00F30(IsNullOrEmpty, v120);
        v123 = v121->m_Items[0];
        if ( !v123 )
          sub_1B00F28(0LL, v120);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v123, ServantData, value, 0LL);
      }
      v92 = 0;
LABEL_162:
      v124 = this->fields.logic;
      if ( !v124 )
        sub_1B00F28(0LL, v120);
      BattleLogic__addBattleLogicTask(v124, v121, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v91 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v172,
    (const MethodInfo_31815C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v167;
  if ( !v167 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v171,
    v167,
    (const MethodInfo_3036964 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v172 = v171;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v172,
            (const MethodInfo_318149C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v126 = this->fields.data;
    if ( !v126 )
      sub_1B00F28(0LL, v125);
    v127 = (int32_t)v172.fields._current.fields.key;
    v128 = v172.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v126, (int32_t)v172.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v132 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v132,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v132 )
        sub_1B00F28(isEndAct, v130);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v132->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v128 )
      sub_1B00F28(isEndAct, v130);
    v133 = (int)v128[1].monitor;
    if ( v133 >= 1 )
    {
      for ( i = 0; i < v133; ++i )
      {
        if ( i >= (unsigned int)v133 )
          sub_1B00F30(isEndAct, v130);
        v135 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v128[2].klass + i);
        if ( !v135 )
          sub_1B00F28(isEndAct, v130);
        if ( !v135->fields._isRemove )
        {
          if ( !v35 )
            sub_1B00F28(isEndAct, v130);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v35,
                                              v135->fields.buffId,
                                              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
                v136 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v136, 0LL);
                if ( !v136 )
                  sub_1B00F28(v137, v138);
                v136->fields.svtUniqueId = v127;
                v139 = v135->fields.vals;
                if ( !v139 )
                  sub_1B00F28(v137, v138);
                if ( !v139->max_length )
                  sub_1B00F30(v137, v138);
                v140 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v136->klass->vtable._4_set_skillId.method)(
                         v136,
                         (unsigned int)v139->m_Items[1],
                         v136->klass->vtable._5_get_skillId.methodPtr);
                v142 = v135->fields.vals;
                if ( !v142 )
                  sub_1B00F28(v140, v141);
                if ( v142->max_length <= 1 )
                  sub_1B00F30(v140, v141);
                v136->fields.skilllv = v142->m_Items[2];
                v143 = this->fields.data;
                if ( !v143 )
                  sub_1B00F28(0LL, v141);
                v144 = BattleData__getServantData(v143, v136->fields.svtUniqueId, 0LL);
                v145 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v136->klass->vtable._5_get_skillId.method)(
                         v136,
                         v136->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v170 )
                  sub_1B00F28(0LL, v145);
                v146 = SkillLvMaster__GetEntity(v170, v145, v136->fields.skilllv, 0LL);
                if ( !v144 )
                  sub_1B00F28(v146, v147);
                v148 = v146;
                v149 = this->fields.data;
                if ( !v149 )
                  sub_1B00F28(0LL, v147);
                v150 = BattleData__checkAliveOther(v149, v144->fields.uniqueId, 0LL);
                if ( v150 )
                  goto LABEL_198;
                if ( !v148 )
                  sub_1B00F28(v150, v151);
                v152 = this->fields.logic;
                if ( !v152 )
                  sub_1B00F28(0LL, v151);
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
                    v154 = sub_1B00D74(int___TypeInfo, 1LL);
                    v156 = (System_Int32_array *)v154;
                    if ( !v154 )
                      sub_1B00F28(0LL, v155);
                    if ( !*(_DWORD *)(v154 + 24) )
                      sub_1B00F30(v154, v155);
                    v157 = 0;
                    *(_DWORD *)(v154 + 32) = v153;
                  }
                  v158 = this->fields.logicskill;
                  v159 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
                  if ( !v159 )
                    sub_1B00F28(0LL, v160);
                  if ( !v159->max_length )
                    sub_1B00F30(v159, v160);
                  v159->m_Items[1] = v127;
                  if ( !v158 )
                    sub_1B00F28(v159, v160);
                  v161 = BattleLogicSkill__taskSkill(v158, v136, v159, v156, 1, v157, 0, 0LL);
                  v162 = this->fields.logic;
                  if ( !v162 )
                    sub_1B00F28(0LL, v161);
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
    &v172,
    (const MethodInfo_31815C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v163 = this->fields.data;
  if ( !v163
    || (Instance = (__int64)v163->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B00F28(Instance, v32);
  }
  if ( (v169 & 1) != 0 )
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
  int32_t v34; // w3
  const MethodInfo *v35; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x21
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v42; // w2
  int32_t v43; // w3
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
  System_Collections_Generic_Dictionary_int__object__o *v168; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v169; // [xsp+8h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+10h] [xbp-D0h]
  char v171; // [xsp+1Ch] [xbp-C4h]
  SkillLvMaster_o *v172; // [xsp+20h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v173; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v174; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_48E5206 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B00CCC(&BattleActionData_TypeInfo, v4);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1B00CCC(&int___TypeInfo, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B00CCC(&Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__, v27);
    sub_1B00CCC(&BattleLogicNomal___c__DisplayClass31_0_TypeInfo, v28);
    sub_1B00CCC(&StringLiteral_8625/*"MOTION_PLAYER_TURN_END"*/, v29);
    byte_48E5206 = 1;
  }
  entity = 0LL;
  memset(&v174, 0, sizeof(v174));
  v30 = sub_1B00F18(BattleLogicNomal___c__DisplayClass31_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass31_0___ctor((BattleLogicNomal___c__DisplayClass31_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)this, v33, v34);
  BattleLogicNomal__SetNextTargetId(this, v35);
  actiondata = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v30 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
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
  v37 = StringLiteral_8625/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8625/*"MOTION_PLAYER_TURN_END"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&actiondata->fields.motionname, v37, v38, v39);
  v169 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v169,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v168 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v168,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v172 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v42, v43);
  v44 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
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
    v171 = 0;
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
            Instance = (__int64)v168;
            if ( !*v49 || !v168 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v168,
              *(_DWORD *)(*v49 + 24),
              v53,
              (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v47 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_220;
        if ( !*v49 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v49 + 768);
        if ( !Instance )
          goto LABEL_215;
        v171 |= v52;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v47 >= *(_DWORD *)(v46 + 24) )
        goto LABEL_220;
      Instance = *v49;
      if ( !*v49 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 516) )
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
              Instance = (__int64)v169;
              if ( !*v49 || !v169 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v169,
                *(_DWORD *)(*v49 + 24),
                v54,
                (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
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
                   (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
    sub_1B00F30(Instance, v32);
  }
  v171 = 0;
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
        if ( *(_BYTE *)(Instance + 516) )
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
                Instance = (__int64)v169;
                if ( !*v72 || !v169 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v169,
                  *(_DWORD *)(*v72 + 24),
                  v74,
                  (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
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
              *(const MethodInfo_33A49AC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
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
                        (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  v83 = (System_Action_object__o *)sub_1B00F18(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v83,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v83,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  Instance = (__int64)v168;
  v86->fields.currentTurn = 1;
  if ( !v168 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v173,
    v168,
    (const MethodInfo_3036964 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v174 = v173;
  while ( 1 )
  {
    v87 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v174,
                            (const MethodInfo_318149C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v87 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v174.fields._current.fields.value;
    if ( !v174.fields._current.fields.value )
      sub_1B00F28(v87, v88);
    max_length = (int)v174.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v174.fields._current.fields.key;
      v92 = 0;
      v93 = 1;
LABEL_127:
      if ( v92 >= max_length )
        sub_1B00F30(v87, v88);
      v94 = value->m_Items[v92];
      if ( !v94 )
        sub_1B00F28(v87, v88);
      if ( v94->fields._isRemove )
        goto LABEL_163;
      if ( !v36 )
        sub_1B00F28(v87, v88);
      v87 = DataMasterBase_object__object__int___GetEntity(
              v36,
              v94->fields.buffId,
              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v87 )
        goto LABEL_163;
      v95 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v95, 0LL);
      if ( !v95 )
        sub_1B00F28(v96, v97);
      v95->fields.svtUniqueId = key;
      vals = v94->fields.vals;
      if ( !vals )
        sub_1B00F28(v96, v97);
      if ( !vals->max_length )
        sub_1B00F30(v96, v97);
      v99 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v95->klass->vtable._4_set_skillId.method)(
              v95,
              (unsigned int)vals->m_Items[1],
              v95->klass->vtable._5_get_skillId.methodPtr);
      v101 = v94->fields.vals;
      if ( !v101 )
        sub_1B00F28(v99, v100);
      if ( v101->max_length <= 1 )
        sub_1B00F30(v99, v100);
      v95->fields.skilllv = v101->m_Items[2];
      v102 = this->fields.data;
      if ( !v102 )
        sub_1B00F28(0LL, v100);
      ServantData = BattleData__getServantData(v102, v95->fields.svtUniqueId, 0LL);
      v104 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v95->klass->vtable._5_get_skillId.method)(
               v95,
               v95->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v172 )
        sub_1B00F28(0LL, v104);
      v105 = SkillLvMaster__GetEntity(v172, v104, v95->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B00F28(v105, v106);
      v107 = v105;
      v108 = this->fields.data;
      if ( !v108 )
        sub_1B00F28(0LL, v106);
      v109 = BattleData__checkAliveOther(v108, ServantData->fields.uniqueId, 0LL);
      if ( !v109 )
      {
        if ( !v107 )
          sub_1B00F28(v109, v110);
        v111 = this->fields.logic;
        if ( !v111 )
          sub_1B00F28(0LL, v110);
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
        v113 = sub_1B00D74(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v113;
        if ( !v113 )
          sub_1B00F28(0LL, v114);
        if ( !*(_DWORD *)(v113 + 24) )
          sub_1B00F30(v113, v114);
        exists = 0;
        *(_DWORD *)(v113 + 32) = v112;
      }
      logicskill = this->fields.logicskill;
      v118 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
      if ( !v118 )
        sub_1B00F28(0LL, v119);
      if ( !v118->max_length )
        sub_1B00F30(v118, v119);
      v118->m_Items[1] = key;
      if ( !logicskill )
        sub_1B00F28(v118, v119);
      v120 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v95,
                                                   v118,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0LL);
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
          sub_1B00F28(IsNullOrEmpty, v121);
        if ( !v122->max_length )
          sub_1B00F30(IsNullOrEmpty, v121);
        v124 = v122->m_Items[0];
        if ( !v124 )
          sub_1B00F28(0LL, v121);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v124, ServantData, value, 0LL);
      }
      v93 = 0;
LABEL_161:
      v125 = this->fields.logic;
      if ( !v125 )
        sub_1B00F28(0LL, v121);
      BattleLogic__addBattleLogicTask(v125, v122, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v92 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v174,
    (const MethodInfo_31815C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v169;
  if ( !v169 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v173,
    v169,
    (const MethodInfo_3036964 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v174 = v173;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v174,
            (const MethodInfo_318149C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v127 = this->fields.data;
    if ( !v127 )
      sub_1B00F28(0LL, v126);
    v128 = (int32_t)v174.fields._current.fields.key;
    v129 = v174.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v127, (int32_t)v174.fields._current.fields.key, 0LL);
    v132 = isEndAct;
    if ( isEndAct )
    {
      v133 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v133, v132, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v133 )
        sub_1B00F28(isEndAct, v131);
      selfConcatSvtIndividualities_k__BackingField = v133->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v129 )
LABEL_250:
        sub_1B00F28(isEndAct, v131);
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
          sub_1B00F30(isEndAct, v131);
        v137 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v129[2].klass + i);
        if ( !v137 )
          sub_1B00F28(isEndAct, v131);
        if ( !v137->fields._isRemove )
        {
          if ( !v36 )
            sub_1B00F28(isEndAct, v131);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v36,
                                              v137->fields.buffId,
                                              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
                v138 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v138, 0LL);
                if ( !v138 )
                  sub_1B00F28(v139, v140);
                v138->fields.svtUniqueId = v128;
                v141 = v137->fields.vals;
                if ( !v141 )
                  sub_1B00F28(v139, v140);
                if ( !v141->max_length )
                  sub_1B00F30(v139, v140);
                v142 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v138->klass->vtable._4_set_skillId.method)(
                         v138,
                         (unsigned int)v141->m_Items[1],
                         v138->klass->vtable._5_get_skillId.methodPtr);
                v144 = v137->fields.vals;
                if ( !v144 )
                  sub_1B00F28(v142, v143);
                if ( v144->max_length <= 1 )
                  sub_1B00F30(v142, v143);
                v138->fields.skilllv = v144->m_Items[2];
                v145 = this->fields.data;
                if ( !v145 )
                  sub_1B00F28(0LL, v143);
                v146 = BattleData__getServantData(v145, v138->fields.svtUniqueId, 0LL);
                v147 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v138->klass->vtable._5_get_skillId.method)(
                         v138,
                         v138->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v172 )
                  sub_1B00F28(0LL, v147);
                v148 = SkillLvMaster__GetEntity(v172, v147, v138->fields.skilllv, 0LL);
                if ( !v146 )
                  sub_1B00F28(v148, v149);
                v150 = v148;
                v151 = this->fields.data;
                if ( !v151 )
                  sub_1B00F28(0LL, v149);
                v152 = BattleData__checkAliveOther(v151, v146->fields.uniqueId, 0LL);
                if ( v152 )
                  goto LABEL_198;
                if ( !v150 )
                  sub_1B00F28(v152, v153);
                v154 = this->fields.logic;
                if ( !v154 )
                  sub_1B00F28(0LL, v153);
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
                    v156 = sub_1B00D74(int___TypeInfo, 1LL);
                    v158 = (System_Int32_array *)v156;
                    if ( !v156 )
                      sub_1B00F28(0LL, v157);
                    if ( !*(_DWORD *)(v156 + 24) )
                      sub_1B00F30(v156, v157);
                    v159 = 0;
                    *(_DWORD *)(v156 + 32) = v155;
                  }
                  v160 = this->fields.logicskill;
                  v161 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
                  if ( !v161 )
                    sub_1B00F28(0LL, v162);
                  if ( !v161->max_length )
                    sub_1B00F30(v161, v162);
                  v161->m_Items[1] = v128;
                  if ( !v160 )
                    sub_1B00F28(v161, v162);
                  v163 = BattleLogicSkill__taskSkill(v160, v138, v161, v158, 1, v159, 0, 0LL);
                  v164 = this->fields.logic;
                  if ( !v164 )
                    sub_1B00F28(0LL, v163);
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
    &v174,
    (const MethodInfo_31815C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v165 = this->fields.data;
  if ( !v165
    || (Instance = (__int64)v165->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B00F28(Instance, v32);
  }
  if ( (v171 & 1) != 0 )
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
  int32_t v9; // w3
  struct System_String_o *motionMessage; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_GameObject_o *targetObject; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_48E5203 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, task);
    byte_48E5203 = 1;
  }
  v4 = sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_1B00F28(v5, v6);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 64), (int32_t)motionName, v8, v9);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 128), (int32_t)motionMessage, v11, v12);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 72), (int32_t)targetObject, v14, v15);
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
            this = (BattleLogicNomal_o *)logic->fields.logicReaction;
            if ( this )
              return BattleLogicReaction__createResurrectionCommon(
                       (BattleLogicReaction_o *)this,
                       v6,
                       buffEntity,
                       v8,
                       task->fields.isForcedSpeedOne,
                       (System_String_o *)v10,
                       0LL);
          }
        }
      }
    }
LABEL_14:
    sub_1B00F28(this, task);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  BattleActionData_ShiftServant_o *v13; // x22

  v4 = this;
  if ( (byte_48E520D & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, task);
    sub_1B00CCC(&BattleActionData_ShiftServant_TypeInfo, v5);
    this = (BattleLogicNomal_o *)sub_1B00CCC(&StringLiteral_8629/*"MOTION_SHIFT"*/, v6);
    byte_48E520D = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v9 = sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v9, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  if ( !v9 )
    goto LABEL_10;
  *(_DWORD *)(v9 + 32) = ServantData->fields.uniqueId;
  v12 = StringLiteral_8629/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_8629/*"MOTION_SHIFT"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 64), v12, v10, v11);
  v13 = (BattleActionData_ShiftServant_o *)sub_1B00F18(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v13, 0, 0LL);
  if ( !v13
    || (BattleActionData_ShiftServant__setBeforeSvtData(v13, ServantData, 0LL),
        BattleServantData__setShiftServant(ServantData, v4->fields.data, 1, 0LL),
        BattleServantData__SetIsBattleShift(ServantData, 1, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v13, ServantData, 0LL),
        BattleActionData__setShiftServant((BattleActionData_o *)v9, v13, 0LL),
        (this = (BattleLogicNomal_o *)v4->fields.logic) == 0LL) )
  {
LABEL_10:
    sub_1B00F28(this, task);
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

  if ( (byte_48E5204 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, task);
    sub_1B00CCC(&StringLiteral_10893/*"RESET_CAMERA_BAT"*/, v5);
    byte_48E5204 = 1;
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
              (System_String_o *)StringLiteral_10893/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v9;
          }
        }
      }
LABEL_18:
      sub_1B00F28(StartTurn, v7);
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
        sub_1B00F30(data, task);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 516) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1B00F28(data, task);
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
    sub_1B00F28(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1B00F30(this, svtList);
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
    sub_1B00F30(data, *(_QWORD *)&uniqueId);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1B00F28(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B00F28(this, method);
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

  if ( (byte_48E51F8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1B00CCC(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_48E51F8 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1B00F18(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_1B00F28(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v7,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  System_Collections_Generic_List_object__o *v14; // x19
  BattleServantData_o *v15; // x22
  bool IsShiftGuts; // w23
  BattleLogicTask_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0

  v4 = this;
  if ( (byte_48E520E & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, task);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicNomal_o *)sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_48E520E = 1;
  }
  if ( !task )
    goto LABEL_31;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  ShiftableUniqueId = BattleLogicNomal__getShiftableUniqueId(v4, ActorId, v11);
  if ( !ShiftableUniqueId )
    return v4->fields.zeroTask;
  v13 = ShiftableUniqueId;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicNomal_o *)v4->fields.data;
  if ( !this )
    goto LABEL_31;
  this = (BattleLogicNomal_o *)BattleData__getServantData((BattleData_o *)this, v13, 0LL);
  if ( !this )
    goto LABEL_31;
  v15 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  if ( !v15->fields.buffData )
    goto LABEL_31;
  IsShiftGuts = BattleBuffData__IsShiftGuts(
                  v15->fields.buffData,
                  v15,
                  (BattleBuffData_CheckIndividualitiesData_array *)this,
                  0LL);
  v17 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_31;
  if ( !IsShiftGuts )
  {
    v17->fields.actiontype = 37;
    BattleLogicTask__setActor(v17, 3, v13, 0LL);
    if ( v14 )
    {
      items = v14->fields._items;
      v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v14->fields._version;
      if ( items )
      {
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v17,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v17;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v17, v25, v26);
        }
        goto LABEL_25;
      }
    }
LABEL_31:
    sub_1B00F28(this, task);
  }
  v17->fields.actiontype = 62;
  BattleLogicTask__setActor(v17, 3, v13, 0LL);
  if ( !v14 )
    goto LABEL_31;
  v20 = v14->fields._items;
  v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v14->fields._version;
  if ( !v20 )
    goto LABEL_31;
  v22 = v14->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v17,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v14->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v17;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
  }
  logic = v4->fields.logic;
  if ( !logic )
    goto LABEL_31;
  this = (BattleLogicNomal_o *)logic->fields.logicReaction;
  if ( !this )
    goto LABEL_31;
  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)this,
                                                              v13,
                                                              0LL);
  if ( TaskGuts )
    System_Collections_Generic_List_object___AddRange(
      v14,
      TaskGuts,
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_25:
  v33 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_31;
  v33->fields.actiontype = 36;
  BattleLogicTask__setActor(v33, 3, v13, 0LL);
  v36 = v14->fields._items;
  v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v14->fields._version;
  if ( !v36 )
    goto LABEL_31;
  v38 = v14->fields._size;
  if ( (unsigned int)v38 >= v36->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v33,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v36->obj.klass + v38;
    v14->fields._size = v38 + 1;
    v39[4] = (Il2CppClass *)v33;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleCommandData_o *v17; // x22
  BattleServantData_o *v18; // x23
  BattleLogicTask_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_48E51FA & 1) == 0 )
  {
    sub_1B00CCC(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_48E51FA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v16->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v17 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v17->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v18 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v18->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v18, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1B00F28(battleEvent, v13);
  }
  v19 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_26;
  BattleLogicTask__setActor(v19, 2, v17->fields.uniqueId, 0LL);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v19, 0LL);
  BattleLogicTask__setAddAttackCommand(v19, data->fields.combodata, v17, 0LL);
  v19->fields.isCanCounterTask = 1;
  if ( !v11 )
    goto LABEL_26;
  items = v11->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v19,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v19;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_48E520A & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_48E520A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v12 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1B00F28(v10, v11);
    }
    v12 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
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
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_48E51FC & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_48E51FC = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v12 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v12, 0LL),
        !v12)
    || (BattleLogicTask__setSystem(v12, 0LL), !v9)
    || (items = v9->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1B00F28(logic, v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B00F28(this, *(_QWORD *)&ltype);
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
  BattleServantData_o *v17; // x25
  BattleLogicTask_o *v18; // x22
  int32_t TreasureDvcId; // w0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_48E51F9 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_48E51F9 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_40;
  battleEvent = (BattleCommandData_o *)v14->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_40;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_22;
  if ( ltype == 3 )
    v15 = 2;
  else
    v15 = ltype == 2;
  this->fields.commandIndex = v15;
  if ( !data )
    goto LABEL_40;
  battleEvent = BattleData__getSelectCommand(data, v15, 0LL);
  if ( !battleEvent )
    goto LABEL_40;
  v16 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_22;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_40;
  battleEvent = (BattleCommandData_o *)BattleData__getServantData(
                                         (BattleData_o *)battleEvent,
                                         v16->fields.uniqueId,
                                         0LL);
  if ( !battleEvent )
    goto LABEL_40;
  v17 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleCommandData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v17->fields.isEntry
    || (battleEvent = (BattleCommandData_o *)BattleServantData__isAction(v17, 0LL),
        ((unsigned __int8)battleEvent & 1) == 0)
    || (battleEvent = (BattleCommandData_o *)BattleServantData__isCardTypeAction(v17, v16, 0LL),
        ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_22:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_40;
  }
  v18 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_40;
  BattleLogicTask__setActionCommand(v18, data->fields.combodata, v16, v15, 0LL);
  if ( BattleData__isTutorial(data, 0LL) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
      BattleCommandData__checkCriticalRate(v16, 0, 0LL);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v16, 0LL);
  }
  BattleLogicTask__setActor(v18, 2, v16->fields.uniqueId, 0LL);
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
                                             0LL);
      if ( v11 )
      {
        items = v11->fields._items;
        v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v18,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v18;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v18, v27, v28);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_40:
    sub_1B00F28(battleEvent, v13);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_40;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
  BattleLogicTask__setActor(v18, 2, v17->fields.uniqueId, 0LL);
  BattleLogicTask__setActionCommand(v18, data->fields.combodata, v16, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc(v18, TreasureDvcId, 1, 0LL);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_40;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         v18,
                                         0LL);
  if ( !v11 )
    goto LABEL_40;
  v23 = v11->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !v23 )
    goto LABEL_40;
  v25 = v11->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v18,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v11->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)v18;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x9
  BattleLogicNomal___c_c *v60; // x0
  System_Action_object__o *_9__15_0; // x20
  Il2CppObject *v62; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x8
  _BOOL4 v68; // [xsp+4h] [xbp-9Ch]
  BattleLogicNomal_o *v69; // [xsp+8h] [xbp-98h]
  SkillLvMaster_o *v70; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v71; // [xsp+18h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // [xsp+20h] [xbp-80h]
  char v74; // [xsp+38h] [xbp-68h]
  int32_t type; // [xsp+3Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_48E51FB & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v11);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___74510968, v17);
    sub_1B00CCC(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1B00CCC(&int___TypeInfo, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v23);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B00CCC(&Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__, v26);
    sub_1B00CCC(&BattleLogicNomal___c_TypeInfo, v27);
    byte_48E51FB = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
  v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !data )
    goto LABEL_77;
  v32 = 296LL;
  if ( isEnemy )
    v32 = 304LL;
  v33 = *(__int64 *)((char *)&data->klass + v32);
  if ( !v33 )
    goto LABEL_77;
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
LABEL_78:
        sub_1B00F30(Instance, wasAttackTargetId);
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
                if ( v37->fields.isEnemy != *(unsigned __int8 *)(Instance + 455) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v38, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v37->fields.buffData;
                    if ( !Instance )
                      goto LABEL_77;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v37,
                                          v38,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_77;
                    v39 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v69 = this;
                      v70 = (SkillLvMaster_o *)MasterData_object;
                      v68 = v6;
                      v71 = (System_Collections_Generic_HashSet_T__o *)sub_1B00F18(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_52953936(
                        v71,
                        v39,
                        (const MethodInfo_3280350 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___74510968);
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
                            goto LABEL_78;
                          v44 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v39->klass + v43);
                          if ( !v41 )
                            goto LABEL_81;
                          if ( !v44 )
                            goto LABEL_77;
                          if ( v44->fields.isSkillReaction )
                          {
LABEL_81:
                            v45 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v45, 0LL);
                            if ( !v45 )
                              goto LABEL_77;
                            BattleLogicTask__setActor(v45, type, v37->fields.uniqueId, 0LL);
                            BattleLogicTask__setTarget(v45, v37->fields.wasAttackTargetId, 0LL);
                            Instance = (__int64)v37->fields.buffData;
                            if ( !Instance )
                              goto LABEL_77;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v44, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v37->fields.overkillTargetId = -1;
                              if ( !v44 )
                                goto LABEL_77;
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
                                  goto LABEL_77;
                              }
                              else
                              {
                                Instance = (__int64)v70;
                                if ( !v70 )
                                  goto LABEL_77;
                                Instance = (__int64)SkillLvMaster__GetEntity(v70, wasAttackTargetId, counterLv, 0LL);
                                if ( !Instance )
                                {
                                  v41 = isSkillCounter;
                                  v42 = v72;
                                  goto LABEL_58;
                                }
                                v47 = Instance;
                                v48 = sub_1B00F18(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v48, 0LL);
                                if ( !v48 )
                                  goto LABEL_77;
                                uniqueId = v37->fields.uniqueId;
                                v50 = *(_QWORD *)v48;
                                *(_QWORD *)(v48 + 16) = 20LL;
                                *(_DWORD *)(v48 + 24) = uniqueId;
                                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v50 + 376))(
                                  v48,
                                  *(unsigned int *)(v47 + 16),
                                  *(_QWORD *)(v50 + 384));
                                *(_DWORD *)(v48 + 36) = *(_DWORD *)(v47 + 20);
                                Instance = sub_1B00D74(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_77;
                                v51 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_78;
                                *(_DWORD *)(Instance + 32) = v37->fields.wasAttackTargetId;
                                Instance = sub_1B00D74(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_77;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_78;
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
                                  goto LABEL_77;
                              }
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v42,
                                                    v44->fields.buffId,
                                                    (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_77;
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
                                goto LABEL_77;
                              items = v28->fields._items;
                              v56 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v28->fields._version;
                              if ( !items )
                                goto LABEL_77;
                              size = v28->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v28,
                                  (Il2CppObject *)v45,
                                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v58 = &items->obj.klass + size;
                                v28->fields._size = size + 1;
                                v58[4] = (Il2CppClass *)v45;
                                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v45, v53, v54);
                              }
                              Instance = (__int64)v71;
                              if ( !v71 )
                                goto LABEL_77;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v71,
                                           (Il2CppObject *)v44,
                                           (const MethodInfo_3280B20 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
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
                      _9__15_0 = (System_Action_object__o *)v60->static_fields->__9__15_0;
                      if ( !_9__15_0 )
                      {
                        if ( !v60->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v60);
                          v60 = BattleLogicNomal___c_TypeInfo;
                        }
                        v62 = (Il2CppObject *)v60->static_fields->__9;
                        _9__15_0 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__15_0,
                          v62,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__15_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__15_0;
                        sub_1B00C70(
                          (ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0,
                          (int32_t)_9__15_0,
                          v64,
                          v65);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v71,
                        (System_Action_T__o *)_9__15_0,
                        (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v34) = *(_DWORD *)(v33 + 24);
      ++v35;
    }
    while ( (__int64)v35 < (int)v34 );
  }
  if ( !v28 )
    goto LABEL_77;
  Instance = (__int64)this->fields.logic;
  if ( v28->fields._size < 1 )
  {
    if ( Instance )
      goto LABEL_76;
LABEL_77:
    sub_1B00F28(Instance, wasAttackTargetId);
  }
  if ( !Instance )
    goto LABEL_77;
  v66 = *(_QWORD *)(Instance + 176);
  if ( !v66 )
    goto LABEL_77;
  if ( *(_QWORD *)(v66 + 104) )
    *(_BYTE *)(v66 + 112) = 1;
LABEL_76:
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v28,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v28,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_48E5201 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, svtData);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_48E5201 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v13, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v13 + 112) = gameObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 112), (int32_t)gameObject, v17, v18);
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
    sub_1B00F28(v14, v15);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v13,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 4), v13, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v29; // w3
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
  int32_t v58; // w3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  int v64; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_48E5202 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, svtData);
    sub_1B00CCC(&int_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_2969/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_1B00CCC(&StringLiteral_8622/*"MOTION_ENTRY"*/, v16);
    sub_1B00CCC(&StringLiteral_2967/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_1B00CCC(&StringLiteral_2968/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_1B00CCC(&StringLiteral_8623/*"MOTION_ENTRY_TAC"*/, v19);
    byte_48E5202 = 1;
  }
  v20 = StringLiteral_8623/*"MOTION_ENTRY_TAC"*/;
  v21 = StringLiteral_8622/*"MOTION_ENTRY"*/;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_30;
  v26 = (System_String_o *)(isTactical ? v20 : v21);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v23, v26, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v23 + 112) = gameObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 112), (int32_t)gameObject, v28, v29);
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
              v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2968/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
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
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2967/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
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
    sub_1B00F28(battle_ent, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
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
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v23;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v62 + 4), v23, v57, v58);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E52ED & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicNomal___c_TypeInfo, v1);
    byte_48E52ED = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  System_Collections_Generic_List_object__o *v4; // x19

  if ( (byte_48E52EE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_48E52EE = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
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
    sub_1B00F28(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__36_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1B00F28(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__15_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
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
  BuffList_c *v6; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v9; // x22

  if ( (byte_48E52EF & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, targetSvtData);
    sub_1B00CCC(&BattleBuffData_CheckInvokeBuff_TypeInfo, v5);
    byte_48E52EF = 1;
  }
  v6 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v6->static_fields->CommandCodeFunctionActs;
  v9 = (BattleBuffData_CheckInvokeBuff_o *)sub_1B00F18(BattleBuffData_CheckInvokeBuff_TypeInfo);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v11; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v13; // x8

  v6 = this;
  if ( (byte_48E52F0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_1B00CCC(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_48E52F0 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass20_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2D51550 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B00F28(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
  }
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass20_0_o *v6; // x21
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v11; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v13; // x8

  v6 = this;
  if ( (byte_48E52F1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_1B00CCC(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_48E52F1 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass20_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2D51550 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B00F28(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
  }
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
    sub_1B00F28(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_48E52F2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_48E52F2 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass20_0_o *)_4__this->fields.data) == 0LL )
    sub_1B00F28(this, id);
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
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1B00F28(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
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
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1B00F28(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}