void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  BattleLogicTask_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDF2B8 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask___TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    byte_4BDF2B8 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C21EE0(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.zeroTask, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0LL);
  this->fields.tmpShiftTask = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tmpShiftTask, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C22094(this, method);
  return data->fields.isMultiTargetBattle && data->fields.justDeadTargetId != -1;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  __int64 v7; // x24
  __int64 ActorId; // x0
  BattleCommandData_o *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v18; // x28
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleActionData_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  BattleActionData_o **v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct BattleCommandData_o *command; // x1
  BattleCommandData_o **v40; // x26
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  BattleActionData_o *v47; // x19
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v55; // x8
  int32_t v56; // w25
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v58; // x22
  bool v59; // w8
  BattleActionData_o *result; // x0
  Il2CppObject *v61; // x23
  System_Collections_Generic_List_object__o *v62; // x19
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o **v79; // x25
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Collections_Generic_List_object__o **v82; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x19
  System_Func_T__TResult__o *v84; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x19
  BattleLogicNomal___c_c *v86; // x8
  System_Func_object__bool__o *_9__24_9; // x23
  Il2CppObject *v88; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x19
  BattleLogicNomal___c_c *v98; // x8
  System_Func_object__object__o *_9__24_0; // x23
  Il2CppObject *v100; // x22
  struct BattleLogicNomal___c_StaticFields *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_Func_object__object__o *v108; // x22
  __int64 v109; // x9
  BuffList_c *v110; // x8
  BattleLogicNomal___c_c *v111; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x19
  System_Func_T__TResult__o *_9__24_2; // x23
  Il2CppObject *v114; // x22
  struct BattleLogicNomal___c_StaticFields *v115; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  System_Func_T__TResult__o *_9__24_3; // x25
  Il2CppObject *v123; // x22
  struct BattleLogicNomal___c_StaticFields *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v131; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  __int64 v138; // x8
  int64_t v139; // x19
  System_Action_object__object__o *v140; // x22
  BattleCommandData_o **v141; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v143; // x22
  __int64 v144; // x8
  __int64 v145; // x23
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  int64_t v152; // x19
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  System_Func_object__object__o *v159; // x19
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v167; // x24
  const MethodInfo *v168; // x5
  __int64 v169; // x8
  unsigned __int64 v170; // x22
  int v171; // w23
  int32_t v172; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v173; // x19
  __int64 v174; // x8
  __int64 v175; // x23
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
  Il2CppObject *v190; // x1
  Il2CppObject *Item; // x1
  __int64 v192; // x8
  __int64 v193; // x9
  int *v194; // x10
  __int64 v195; // x0
  unsigned __int64 v196; // x9
  int v197; // w22
  int v198; // w8
  BuffList_ACTION_array *v199; // x19
  int v200; // w8
  __int64 v201; // x8
  __int64 v202; // x23
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
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_44286340; // x0
  __int64 v219; // x1
  BattleBuffData_BuffData_array *v220; // x27
  __int64 v221; // x8
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
  __int64 v259; // x8
  __int64 v260; // x9
  int *v261; // x10
  __int64 v262; // x0
  BattleActionData_o *v263; // x19
  BattleActionData_o *v264; // x19
  BattleActionData_o *v265; // x19
  struct BattleData_o *v266; // x8
  __int64 v267; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v269; // x19
  const MethodInfo *v270; // x5
  __int64 v271; // x8
  unsigned __int64 v272; // x27
  unsigned int v273; // w22
  int32_t v274; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x19
  __int64 v276; // x8
  __int64 v277; // x23
  __int64 v278; // x9
  int *v279; // x10
  __int64 v280; // x0
  __int64 v281; // x0
  __int64 v282; // x1
  __int64 v283; // x23
  __int64 v284; // x8
  __int64 v285; // x9
  int *v286; // x10
  __int64 v287; // x0
  __int64 v288; // x8
  __int64 v289; // x9
  int *v290; // x10
  __int64 v291; // x0
  Il2CppObject *v292; // x0
  Il2CppObject *v293; // x1
  __int64 v294; // x8
  __int64 v295; // x9
  int *v296; // x10
  __int64 v297; // x0
  unsigned __int64 v298; // x22
  int v299; // w23
  int v300; // w8
  BuffList_ACTION_array *v301; // x19
  int v302; // w8
  __int64 v303; // x8
  __int64 v304; // x23
  __int64 v305; // x9
  int *v306; // x10
  __int64 v307; // x0
  __int64 v308; // x1
  __int64 v309; // x23
  __int64 v310; // x8
  __int64 v311; // x9
  int *v312; // x10
  BattleCommandData_o **v313; // x26
  __int64 v314; // x0
  __int64 v315; // x8
  __int64 v316; // x9
  int *v317; // x10
  __int64 v318; // x0
  __int64 v319; // x1
  BattleServantData_o *v320; // x3
  BattleBuffData_BuffData_array *v321; // x0
  __int64 v322; // x1
  BattleBuffData_BuffData_array *v323; // x27
  __int64 v324; // x8
  unsigned __int64 v325; // x26
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
  BattleAddSkillTaskAfterCommandAttack_o *v360; // x20
  __int64 v361; // x0
  const MethodInfo *v362; // [xsp+0h] [xbp-120h]
  __int64 *v363; // [xsp+10h] [xbp-110h]
  bool v364; // [xsp+1Ch] [xbp-104h]
  __int64 v365; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v366; // [xsp+28h] [xbp-F8h]
  int32_t uniqueId; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v368; // [xsp+38h] [xbp-E8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+40h] [xbp-E0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+40h] [xbp-E0h]
  BattleBuffData_o *actSvtBuffData; // [xsp+48h] [xbp-D8h]
  int64_t v372; // [xsp+50h] [xbp-D0h]
  bool v373; // [xsp+5Ch] [xbp-C4h]
  __int64 v374; // [xsp+60h] [xbp-C0h]
  __int64 v375; // [xsp+68h] [xbp-B8h]
  BattleServantData_o **v376; // [xsp+70h] [xbp-B0h]
  System_Collections_Generic_Dictionary_object__object__o *v377; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v378; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v379; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v380; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4BDF2A4 & 1) == 0 )
  {
    sub_1C21E38(&BuffList_ACTION___TypeInfo);
    sub_1C21E38(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_1C21E38(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleAddSkillTaskAfterCommandAttack_TypeInfo);
    sub_1C21E38(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
    sub_1C21E38(&BattleServantData___TypeInfo);
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&BuffList_TypeInfo);
    sub_1C21E38(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C21E38(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_1C21E38(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_1C21E38(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C21E38(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_1C21E38(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__);
    sub_1C21E38(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__);
    sub_1C21E38(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__);
    sub_1C21E38(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__);
    sub_1C21E38(&BattleLogicNomal___c__DisplayClass24_0_TypeInfo);
    sub_1C21E38(&BattleLogicNomal___c_TypeInfo);
    byte_4BDF2A4 = 1;
  }
  memset(&v380, 0, sizeof(v380));
  v7 = sub_1C22084(BattleLogicNomal___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_375;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  if ( !task )
    goto LABEL_375;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_375;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v7 + 24) = ServantData;
  v18 = (BattleServantData_o **)(v7 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)ServantData, v19, v20, v21, v22, v23, v24);
  v25 = (BattleActionData_o *)sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  *baseActionData = v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)baseActionData, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v7 + 48) = v25;
  v32 = (BattleActionData_o **)(v7 + 48);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)v25, v33, v34, v35, v36, v37, v38);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  v40 = (BattleCommandData_o **)(v7 + 40);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)command, v41, v42, v43, v44, v45, v46);
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
  v47 = *v32;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v47 )
    goto LABEL_375;
  v47->fields.actorId = ActorId;
  ActorId = (__int64)*v32;
  if ( !*v32 )
    goto LABEL_375;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_1C21DDC((PartyOrganizationUtility_o *)(ActorId + 128), (int64_t)motionMessage, v48, v49, v50, v51, v52, v53);
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_375;
  v56 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v55->fields.leaderDown || v55->fields.endbattleFlg )
    return 0LL;
  logic = this->fields.logic;
  v58 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1C22084(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v58, 0LL);
  if ( !logic )
    goto LABEL_375;
  v366 = task;
  uniqueId = v56;
  v59 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v58, task, v56, 0LL);
  result = 0LL;
  if ( !v59 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_375;
    v61 = (Il2CppObject *)BattleData__getServantData((BattleData_o *)ActorId, v56, 0LL);
    v62 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v62,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
    if ( !v62 )
      goto LABEL_375;
    items = v62->fields._items;
    v70 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v62->fields._version;
    if ( !items )
      goto LABEL_375;
    size = v62->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v62,
        v61,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &items->obj.klass + size;
      v62->fields._size = size + 1;
      v72[4] = (Il2CppClass *)v61;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v61, v63, v64, v65, v66, v67, v68);
    }
    *(_QWORD *)(v7 + 56) = v62;
    v79 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 56), (int64_t)v62, v73, v74, v75, v76, v77, v78);
    ActorId = *(_QWORD *)(v7 + 40);
    if ( !ActorId )
      goto LABEL_375;
    BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
    ActorId = (__int64)*v40;
    if ( !*v40 )
      goto LABEL_375;
    BattleCommandData__UpdateCritical(
      (BattleCommandData_o *)ActorId,
      *v18,
      (BattleServantData_o *)v61,
      this->fields.data,
      0LL);
    ActorId = (__int64)*v40;
    if ( !*v40 )
      goto LABEL_375;
    BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v18, 0LL);
    ActorId = (__int64)*v18;
    if ( !*v18 )
      goto LABEL_375;
    AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v40, 0LL);
    v364 = AttackType == 2;
    v372 = (int64_t)v61;
    v378 = (BattleCommandData_o **)(v7 + 40);
    if ( AttackType == 2 )
    {
      ActorId = (__int64)this->fields.data;
      if ( !ActorId )
        goto LABEL_375;
      ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, uniqueId, 0LL);
      if ( !this->fields.data )
        goto LABEL_375;
      v81 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                                ? BattleData__getFieldEnemyServantIDList(
                                                                    this->fields.data,
                                                                    1,
                                                                    0LL)
                                                                : BattleData__getFieldPlayerServantIDList(
                                                                    this->fields.data,
                                                                    0LL,
                                                                    0LL));
      v82 = (System_Collections_Generic_List_object__o **)(v7 + 56);
      ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                           v81,
                           (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
      if ( !ActorId )
        goto LABEL_375;
      v83 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)ActorId,
        uniqueId,
        (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
      v84 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__object____ctor(
        v84,
        (Il2CppObject *)v7,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__,
        0LL);
      v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v83,
                                                                   (System_Func_TSource__TResult__o *)v84,
                                                                   (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v86 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v86 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_9 = (System_Func_object__bool__o *)v86->static_fields->__9__24_9;
      if ( !_9__24_9 )
      {
        if ( !v86->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v86);
          v86 = BattleLogicNomal___c_TypeInfo;
        }
        v88 = (Il2CppObject *)v86->static_fields->__9;
        _9__24_9 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__24_9, v88, Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__, 0LL);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
        static_fields->__9__24_9 = (struct System_Func_BattleServantData__bool__o *)_9__24_9;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__24_9,
          (int64_t)_9__24_9,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95);
      }
      ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                           v85,
                           (System_Func_TSource__bool__o *)_9__24_9,
                           (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      if ( !*v82 )
        goto LABEL_375;
      v79 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
      System_Collections_Generic_List_object___AddRange(
        *v82,
        (System_Collections_Generic_IEnumerable_T__o *)ActorId,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
      v40 = (BattleCommandData_o **)(v7 + 40);
    }
    ActorId = (__int64)*v40;
    if ( *v40 )
    {
      IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                         (BattleCommandData_o *)ActorId,
                                         0LL);
      v97 = *v79;
      v373 = IsForceAttackFunctionTargetAll;
      v98 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v98 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_0 = (System_Func_object__object__o *)v98->static_fields->__9__24_0;
      if ( !_9__24_0 )
      {
        if ( !v98->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v98);
          v98 = BattleLogicNomal___c_TypeInfo;
        }
        v100 = (Il2CppObject *)v98->static_fields->__9;
        _9__24_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleServantData__BattleServantData__TypeInfo);
        System_Func_object__object____ctor(
          _9__24_0,
          v100,
          Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__,
          0LL);
        v101 = BattleLogicNomal___c_TypeInfo->static_fields;
        v101->__9__24_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__24_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v101->__9__24_0,
          (int64_t)_9__24_0,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
      }
      v108 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
      System_Func_object__object____ctor(
        v108,
        (Il2CppObject *)v7,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__,
        0LL);
      ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                           v97,
                           (System_Func_TSource__TKey__o *)_9__24_0,
                           (System_Func_TSource__TElement__o *)v108,
                           (const MethodInfo_2FEA040 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
      v109 = *(_QWORD *)(v7 + 24);
      v377 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
      if ( v109 )
      {
        v110 = BuffList_TypeInfo;
        actSvtBuffData = *(BattleBuffData_o **)(v109 + 784);
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
        _9__24_2 = (System_Func_T__TResult__o *)v111->static_fields->__9__24_2;
        if ( !_9__24_2 )
        {
          if ( !v111->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v111);
            v111 = BattleLogicNomal___c_TypeInfo;
          }
          v114 = (Il2CppObject *)v111->static_fields->__9;
          _9__24_2 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
          System_Func_Int32Enum__Int32Enum____ctor(
            _9__24_2,
            v114,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__,
            0LL);
          v115 = BattleLogicNomal___c_TypeInfo->static_fields;
          v115->__9__24_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__24_2;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v115->__9__24_2,
            (int64_t)_9__24_2,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121);
          v111 = BattleLogicNomal___c_TypeInfo;
        }
        v363 = (__int64 *)v79;
        if ( !v111->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v111);
          v111 = BattleLogicNomal___c_TypeInfo;
        }
        _9__24_3 = (System_Func_T__TResult__o *)v111->static_fields->__9__24_3;
        if ( !_9__24_3 )
        {
          if ( !v111->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v111);
            v111 = BattleLogicNomal___c_TypeInfo;
          }
          v123 = (Il2CppObject *)v111->static_fields->__9;
          _9__24_3 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
          System_Func_Int32Enum__object____ctor(
            _9__24_3,
            v123,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__,
            0LL);
          v124 = BattleLogicNomal___c_TypeInfo->static_fields;
          v124->__9__24_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__24_3;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v124->__9__24_3,
            (int64_t)_9__24_3,
            v125,
            v126,
            v127,
            v128,
            v129,
            v130);
        }
        v131 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
                 CommandCodeBuffHash,
                 (System_Func_TSource__TKey__o *)_9__24_2,
                 (System_Func_TSource__TElement__o *)_9__24_3,
                 (const MethodInfo_2FE9E48 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
        *(_QWORD *)(v7 + 32) = v131;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)v131, v132, v133, v134, v135, v136, v137);
        v138 = *(_QWORD *)(v7 + 40);
        v368 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
        if ( v138 )
        {
          v139 = *(_QWORD *)(v138 + 72);
          v140 = (System_Action_object__object__o *)sub_1C22084(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
          System_Action_object__object____ctor(
            v140,
            (Il2CppObject *)v7,
            Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__,
            0LL);
          ActorId = (__int64)actSvtBuffData;
          v141 = (BattleCommandData_o **)(v7 + 40);
          if ( actSvtBuffData )
          {
            BattleBuffData__SetCommandCodeBuffActiveFlg(
              actSvtBuffData,
              v139,
              (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v140,
              1,
              0LL);
            if ( *v378 )
            {
              commandAssistId = (*v378)->fields.commandAssistId;
              v143 = (System_Action_object__object__o *)sub_1C22084(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
              System_Action_object__object____ctor(
                v143,
                (Il2CppObject *)v7,
                Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__,
                0LL);
              v144 = *(_QWORD *)(v7 + 40);
              if ( v144 )
              {
                BattleBuffData__SetCommandAssistBuffActiveFlg(
                  actSvtBuffData,
                  commandAssistId,
                  (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v143,
                  1,
                  *(_DWORD *)(v144 + 88),
                  0LL);
                ActorId = sub_1C21EE0(bool___TypeInfo, 2LL);
                if ( ActorId )
                {
                  v145 = ActorId;
                  if ( !*(_DWORD *)(ActorId + 24) )
                    goto LABEL_376;
                  *(_BYTE *)(ActorId + 32) = 1;
                  ActorId = sub_1C21EE0(BattleServantData___TypeInfo, 1LL);
                  if ( ActorId )
                  {
                    v152 = ActorId;
                    if ( v372 )
                    {
                      ActorId = sub_1C21F74(v372, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
                      if ( !ActorId )
                      {
                        v361 = sub_1C220B8(0LL);
                        sub_1C21F60(v361, 0LL);
                      }
                    }
                    if ( !*(_DWORD *)(v152 + 24) )
                      goto LABEL_376;
                    *(_QWORD *)(v152 + 32) = v372;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v152 + 32), v372, v146, v147, v148, v149, v150, v151);
                    *(_QWORD *)(v7 + 72) = v152;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 72), v152, v153, v154, v155, v156, v157, v158);
                    v159 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleServantData__BattleServantData__TypeInfo);
                    System_Func_object__object____ctor(
                      v159,
                      (Il2CppObject *)v7,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__,
                      0LL);
                    *(_QWORD *)(v7 + 64) = v159;
                    v365 = v7 + 64;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v7 + 64),
                      (int64_t)v159,
                      v160,
                      v161,
                      v162,
                      v163,
                      v164,
                      v165);
                    v375 = sub_1C22084(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
                    System_Func_bool__bool__object____ctor(
                      (System_Func_T1__T2__TResult__o *)v375,
                      (Il2CppObject *)v7,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__,
                      0LL);
                    ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( ActorId )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)ActorId,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                      v167 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C22084(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
                      BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v167, 0LL);
                      v169 = *(_QWORD *)(v145 + 24);
                      v376 = v18;
                      v374 = v145;
                      if ( (int)v169 >= 1 )
                      {
                        v170 = 0LL;
                        do
                        {
                          if ( v170 >= (unsigned int)v169 )
                            goto LABEL_376;
                          v171 = *(unsigned __int8 *)(v145 + v170 + 32);
                          if ( v171 )
                            v172 = 177;
                          else
                            v172 = 138;
                          ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                                               (BattleLogicNomal_o *)ActorId,
                                               *v368,
                                               actSvtBuffData,
                                               v172,
                                               *v378,
                                               v168);
                          if ( !v375 )
                            goto LABEL_375;
                          v173 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
                          ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v375 + 24))(
                                      *(_QWORD *)(v375 + 64),
                                      v171 != 0,
                                      v373,
                                      *(_QWORD *)(v375 + 40));
                          if ( !ActorId )
                            goto LABEL_375;
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
                                goto LABEL_90;
                            }
                            v178 = v174 + 16LL * *v177 + 312;
                          }
                          else
                          {
LABEL_90:
                            v178 = sub_1C73E18(
                                     ActorId,
                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                     0LL);
                          }
                          v179 = (*(__int64 (__fastcall **)(__int64, _QWORD))v178)(v175, *(_QWORD *)(v178 + 8));
                          v181 = v179;
                          while ( 1 )
                          {
                            if ( !v181 )
                              sub_1C22094(v179, v180);
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
                                  goto LABEL_98;
                              }
                              v185 = v182 + 16LL * *v184 + 312;
                            }
                            else
                            {
LABEL_98:
                              v185 = sub_1C73E18(v181, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                                  goto LABEL_105;
                              }
                              v189 = v186 + 16LL * *v188 + 312;
                            }
                            else
                            {
LABEL_105:
                              v189 = sub_1C73E18(
                                       v181,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v190 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v189)(
                                                     v181,
                                                     *(_QWORD *)(v189 + 8));
                            if ( !v377 )
                              sub_1C22094(0LL, v190);
                            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                                     v377,
                                     v190,
                                     (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                            BattleLogicNomal__commandCodeBuffProcess(
                              this,
                              (BattleBuffData_CheckInvokeBuff_o *)Item,
                              (SkillLvMaster_o *)MasterData_object,
                              *v378,
                              v173,
                              *v32,
                              0,
                              v167,
                              v362);
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
                                goto LABEL_113;
                            }
                            v195 = v192 + 16LL * *v194 + 312;
                          }
                          else
                          {
LABEL_113:
                            v195 = sub_1C73E18(v181, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v195)(v181, *(_QWORD *)(v195 + 8));
                          v145 = v374;
                          LODWORD(v169) = *(_DWORD *)(v374 + 24);
                          ++v170;
                        }
                        while ( (__int64)v170 < (int)v169 );
                        if ( (int)v169 >= 1 )
                        {
                          v196 = 0LL;
                          while ( v196 < (unsigned int)v169 )
                          {
                            processArgs = (BattleLogic_DamageProcessArgs_o *)v196;
                            v197 = *(unsigned __int8 *)(v145 + v196 + 32);
                            ActorId = sub_1C21EE0(BuffList_ACTION___TypeInfo, 2LL);
                            if ( !ActorId )
                              goto LABEL_375;
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
                            ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v375 + 24))(
                                        *(_QWORD *)(v375 + 64),
                                        v197 != 0,
                                        v373,
                                        *(_QWORD *)(v375 + 40));
                            if ( !ActorId )
                              goto LABEL_375;
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
                                  goto LABEL_135;
                              }
                              v205 = v201 + 16LL * *v204 + 312;
                            }
                            else
                            {
LABEL_135:
                              v205 = sub_1C73E18(
                                       ActorId,
                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v207 = (*(__int64 (__fastcall **)(__int64, _QWORD))v205)(v202, *(_QWORD *)(v205 + 8));
                            if ( !v207 )
                              sub_1C22094(0LL, v206);
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
                                    goto LABEL_142;
                                }
                                v18 = v376;
                                v141 = v378;
                                v211 = v208 + 16LL * *v210 + 312;
                              }
                              else
                              {
LABEL_142:
                                v18 = v376;
                                v141 = v378;
                                v211 = sub_1C73E18(v207, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                                    goto LABEL_149;
                                }
                                v215 = v212 + 16LL * *v214 + 312;
                              }
                              else
                              {
LABEL_149:
                                v215 = sub_1C73E18(
                                         v207,
                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                         0LL);
                              }
                              v217 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v215)(
                                                              v207,
                                                              *(_QWORD *)(v215 + 8));
                              if ( !*v18 )
                                sub_1C22094(0LL, v216);
                              AttackSideEffectBuffList_44286340 = BattleServantData__getAttackSideEffectBuffList_44286340(
                                                                    *v18,
                                                                    v199,
                                                                    *v141,
                                                                    v217,
                                                                    0LL);
                              v220 = AttackSideEffectBuffList_44286340;
                              if ( !AttackSideEffectBuffList_44286340 )
                                sub_1C22094(0LL, v219);
                              v221 = *(_QWORD *)&AttackSideEffectBuffList_44286340->max_length;
                              if ( (int)v221 >= 1 )
                              {
                                v222 = 0LL;
                                do
                                {
                                  if ( v222 >= (unsigned int)v221 )
                                    sub_1C2209C(AttackSideEffectBuffList_44286340, v219);
                                  if ( !*v32 )
                                    sub_1C22094(0LL, v219);
                                  v223 = v220->m_Items[v222];
                                  logicfunction = this->fields.logicfunction;
                                  SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v32, 3, 0LL);
                                  if ( !logicfunction )
                                    sub_1C22094(SideEffectActionData, v226);
                                  BattleLogicFunction__SetSideEffectBuff(
                                    logicfunction,
                                    (SkillLvMaster_o *)MasterData_object,
                                    SideEffectActionData,
                                    v223,
                                    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v167,
                                    0,
                                    0LL);
                                  LODWORD(v221) = v220->max_length;
                                  ++v222;
                                }
                                while ( (__int64)v222 < (int)v221 );
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
                                  goto LABEL_164;
                              }
                              v230 = v227 + 16LL * *v229 + 312;
                            }
                            else
                            {
LABEL_164:
                              v230 = sub_1C73E18(v207, System_IDisposable_TypeInfo, 0LL);
                            }
                            ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v230)(v207, *(_QWORD *)(v230 + 8));
                            v145 = v374;
                            LODWORD(v169) = *(_DWORD *)(v374 + 24);
                            v196 = (unsigned __int64)&processArgs->klass + 1;
                            if ( (__int64)&processArgs->klass + 1 >= (int)v169 )
                              goto LABEL_174;
                          }
LABEL_376:
                          sub_1C2209C(ActorId, v9);
                        }
                      }
LABEL_174:
                      processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1C22084(BattleLogic_DamageProcessArgs_TypeInfo);
                      BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL, 0LL);
                      if ( v375 )
                      {
                        ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v375 + 24))(
                                    *(_QWORD *)(v375 + 64),
                                    0LL,
                                    0LL,
                                    *(_QWORD *)(v375 + 40));
                        if ( ActorId )
                        {
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
                                goto LABEL_180;
                            }
                            v235 = v231 + 16LL * *v234 + 312;
                          }
                          else
                          {
LABEL_180:
                            v235 = sub_1C73E18(
                                     ActorId,
                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                     0LL);
                          }
                          v236 = (*(__int64 (__fastcall **)(__int64, _QWORD))v235)(v232, *(_QWORD *)(v235 + 8));
                          v238 = v236;
                          v239 = 0LL;
                          while ( 1 )
                          {
                            if ( !v238 )
                              sub_1C22094(v236, v237);
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
                                  goto LABEL_188;
                              }
                              v243 = v240 + 16LL * *v242 + 312;
                            }
                            else
                            {
LABEL_188:
                              v243 = sub_1C73E18(v238, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                                  goto LABEL_195;
                              }
                              v247 = v244 + 16LL * *v246 + 312;
                            }
                            else
                            {
LABEL_195:
                              v247 = sub_1C73E18(
                                       v238,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v249 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v247)(
                                                            v238,
                                                            *(_QWORD *)(v247 + 8));
                            v250 = this->fields.logic;
                            if ( !v250 )
                              sub_1C22094(0LL, v248);
                            DamageList = BattleLogic__GetDamageList(v250, *v18, v249, *v141, processArgsa, 0LL);
                            v253 = DamageList;
                            if ( v249 == (BattleServantData_o *)v372 )
                              v239 = DamageList;
                            if ( !v249 )
                              sub_1C22094(DamageList, v252);
                            buffData = v249->fields.buffData;
                            if ( !buffData )
                              sub_1C22094(DamageList, v252);
                            if ( !buffData->fields.isNoDamage )
                            {
                              v255 = *v32;
                              v256 = BattleBuffData__UseProgressingDoNotAct(v249->fields.buffData, v249, 0, 0LL);
                              if ( !v255 )
                                sub_1C22094(v256, v256);
                              BattleActionData__addSideEffectActionData(v255, v256, 1, 0LL);
                            }
                            if ( !*v18 )
                              sub_1C22094(0LL, v252);
                            v257 = BattleServantData__checkPlayer(*v18, 0LL);
                            if ( v257 )
                            {
                              if ( !*v18 )
                                sub_1C22094(v257, v258);
                              v249->fields.overkillTargetId = (*v18)->fields.uniqueId;
                            }
                            if ( !*v32 )
                              sub_1C22094(0LL, v258);
                            BattleActionData__setDamageData(*v32, v253, 0LL, 0, 0, 0LL);
                          }
                          v259 = *(_QWORD *)v238;
                          v260 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
                          {
                            v261 = (int *)(*(_QWORD *)(v259 + 176) + 8LL);
                            while ( *((System_IDisposable_c **)v261 - 1) != System_IDisposable_TypeInfo )
                            {
                              --v260;
                              v261 += 4;
                              if ( !v260 )
                                goto LABEL_215;
                            }
                            v262 = v259 + 16LL * *v261 + 312;
                          }
                          else
                          {
LABEL_215:
                            v262 = sub_1C73E18(v238, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v262)(v238, *(_QWORD *)(v262 + 8));
                          if ( *(_QWORD *)v365 )
                          {
                            (*(void (__fastcall **)(_QWORD, int64_t, _QWORD))(*(_QWORD *)v365 + 24LL))(
                              *(_QWORD *)(*(_QWORD *)v365 + 64LL),
                              v372,
                              *(_QWORD *)(*(_QWORD *)v365 + 40LL));
                            ActorId = (__int64)*v141;
                            if ( *v141 )
                            {
                              v263 = *v32;
                              ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
                              if ( v263 )
                              {
                                v263->fields.type = ActorId;
                                ActorId = (__int64)*v32;
                                if ( *v32 )
                                {
                                  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v141, 0LL);
                                  v9 = *v141;
                                  if ( *v141 )
                                  {
                                    v264 = *v32;
                                    if ( *v32 )
                                    {
                                      v264->fields.actionIndex = v9->fields.actionIndex;
                                      ActorId = (__int64)*v18;
                                      if ( *v18 )
                                      {
                                        ActorId = BattleServantData__getMotionId(
                                                    (BattleServantData_o *)ActorId,
                                                    v9,
                                                    0LL);
                                        v264->fields.motionId = ActorId;
                                        if ( v239 )
                                        {
                                          v265 = *v32;
                                          ActorId = BattleActionData_DamageData__getAttackCount(v239, 0LL);
                                          if ( v265 )
                                          {
                                            v265->fields.attackcount = ActorId;
                                            v266 = this->fields.data;
                                            v267 = v374;
                                            if ( v266 )
                                            {
                                              perf = v266->fields.perf;
                                              if ( perf )
                                              {
                                                if ( *v141 )
                                                {
                                                  ActorId = (__int64)perf->fields.commandPerf;
                                                  if ( ActorId )
                                                  {
                                                    BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                                      (BattlePerformanceCommandCard_o *)ActorId,
                                                      (*v141)->fields.actionIndex,
                                                      0LL);
                                                    if ( *v18 )
                                                    {
                                                      ActorId = (__int64)this->fields.data;
                                                      if ( ActorId )
                                                      {
                                                        v269 = *v32;
                                                        ActorId = BattleData__isPrevAttackMe(
                                                                    (BattleData_o *)ActorId,
                                                                    (*v18)->fields.uniqueId,
                                                                    uniqueId,
                                                                    0LL);
                                                        if ( v269 )
                                                        {
                                                          v269->fields.prevattackme = ActorId & 1;
                                                          v271 = *(_QWORD *)(v374 + 24);
                                                          if ( (int)v271 >= 1 )
                                                          {
                                                            v272 = 0LL;
                                                            do
                                                            {
                                                              if ( v272 >= (unsigned int)v271 )
                                                                goto LABEL_376;
                                                              v273 = *(unsigned __int8 *)(v267 + v272 + 32);
                                                              if ( *(_BYTE *)(v267 + v272 + 32) )
                                                                v274 = 178;
                                                              else
                                                                v274 = 159;
                                                              TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                                                                            (BattleLogicNomal_o *)ActorId,
                                                                                            *v368,
                                                                                            actSvtBuffData,
                                                                                            v274,
                                                                                            *v378,
                                                                                            v270);
                                                              ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v375 + 24))(
                                                                          *(_QWORD *)(v375 + 64),
                                                                          v273,
                                                                          v373,
                                                                          *(_QWORD *)(v375 + 40));
                                                              if ( !ActorId )
                                                                goto LABEL_375;
                                                              v276 = *(_QWORD *)ActorId;
                                                              v277 = ActorId;
                                                              v278 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                              {
                                                                v279 = (int *)(*(_QWORD *)(v276 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v279
                                                                        - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                {
                                                                  --v278;
                                                                  v279 += 4;
                                                                  if ( !v278 )
                                                                    goto LABEL_244;
                                                                }
                                                                v280 = v276 + 16LL * *v279 + 312;
                                                              }
                                                              else
                                                              {
LABEL_244:
                                                                v280 = sub_1C73E18(
                                                                         ActorId,
                                                                         System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v281 = (*(__int64 (__fastcall **)(__int64, _QWORD))v280)(
                                                                       v277,
                                                                       *(_QWORD *)(v280 + 8));
                                                              v283 = v281;
                                                              while ( 1 )
                                                              {
                                                                if ( !v283 )
                                                                  sub_1C22094(v281, v282);
                                                                v284 = *(_QWORD *)v283;
                                                                v285 = *(unsigned __int16 *)(*(_QWORD *)v283 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v283 + 302LL) )
                                                                {
                                                                  v286 = (int *)(*(_QWORD *)(v284 + 176) + 8LL);
                                                                  while ( *((System_Collections_IEnumerator_c **)v286 - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                  {
                                                                    --v285;
                                                                    v286 += 4;
                                                                    if ( !v285 )
                                                                      goto LABEL_252;
                                                                  }
                                                                  v287 = v284 + 16LL * *v286 + 312;
                                                                }
                                                                else
                                                                {
LABEL_252:
                                                                  v287 = sub_1C73E18(
                                                                           v283,
                                                                           System_Collections_IEnumerator_TypeInfo,
                                                                           0LL);
                                                                }
                                                                if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v287)(
                                                                        v283,
                                                                        *(_QWORD *)(v287 + 8)) & 1) == 0 )
                                                                  break;
                                                                v288 = *(_QWORD *)v283;
                                                                v289 = *(unsigned __int16 *)(*(_QWORD *)v283 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v283 + 302LL) )
                                                                {
                                                                  v290 = (int *)(*(_QWORD *)(v288 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v290
                                                                          - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v289;
                                                                    v290 += 4;
                                                                    if ( !v289 )
                                                                      goto LABEL_259;
                                                                  }
                                                                  v291 = v288 + 16LL * *v290 + 312;
                                                                }
                                                                else
                                                                {
LABEL_259:
                                                                  v291 = sub_1C73E18(
                                                                           v283,
                                                                           System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v292 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v291)(
                                                                                         v283,
                                                                                         *(_QWORD *)(v291 + 8));
                                                                if ( !v377 )
                                                                  sub_1C22094(v292, v292);
                                                                v293 = System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                         v377,
                                                                         v292,
                                                                         (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                                                                BattleLogicNomal__commandCodeBuffProcess(
                                                                  this,
                                                                  (BattleBuffData_CheckInvokeBuff_o *)v293,
                                                                  (SkillLvMaster_o *)MasterData_object,
                                                                  *v378,
                                                                  TargetCommandCodeBuffList,
                                                                  *v32,
                                                                  1,
                                                                  v167,
                                                                  v362);
                                                              }
                                                              v294 = *(_QWORD *)v283;
                                                              v295 = *(unsigned __int16 *)(*(_QWORD *)v283 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v283 + 302LL) )
                                                              {
                                                                v296 = (int *)(*(_QWORD *)(v294 + 176) + 8LL);
                                                                while ( *((System_IDisposable_c **)v296 - 1) != System_IDisposable_TypeInfo )
                                                                {
                                                                  --v295;
                                                                  v296 += 4;
                                                                  if ( !v295 )
                                                                    goto LABEL_267;
                                                                }
                                                                v297 = v294 + 16LL * *v296 + 312;
                                                              }
                                                              else
                                                              {
LABEL_267:
                                                                v297 = sub_1C73E18(
                                                                         v283,
                                                                         System_IDisposable_TypeInfo,
                                                                         0LL);
                                                              }
                                                              ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v297)(
                                                                          v283,
                                                                          *(_QWORD *)(v297 + 8));
                                                              v267 = v374;
                                                              LODWORD(v271) = *(_DWORD *)(v374 + 24);
                                                              ++v272;
                                                            }
                                                            while ( (__int64)v272 < (int)v271 );
                                                            v141 = v378;
                                                            if ( (int)v271 >= 1 )
                                                            {
                                                              v298 = 0LL;
                                                              while ( v298 < (unsigned int)v271 )
                                                              {
                                                                v299 = *(unsigned __int8 *)(v267 + v298 + 32);
                                                                ActorId = sub_1C21EE0(BuffList_ACTION___TypeInfo, 2LL);
                                                                if ( !ActorId )
                                                                  goto LABEL_375;
                                                                v300 = *(_DWORD *)(ActorId + 24);
                                                                v301 = (BuffList_ACTION_array *)ActorId;
                                                                if ( v299 )
                                                                {
                                                                  if ( !v300 )
                                                                    goto LABEL_376;
                                                                  *(_DWORD *)(ActorId + 32) = 119;
                                                                  if ( v300 == 1 )
                                                                    goto LABEL_376;
                                                                  v302 = 121;
                                                                }
                                                                else
                                                                {
                                                                  if ( !v300 )
                                                                    goto LABEL_376;
                                                                  *(_DWORD *)(ActorId + 32) = 57;
                                                                  if ( v300 == 1 )
                                                                    goto LABEL_376;
                                                                  v302 = 80;
                                                                }
                                                                *(_DWORD *)(ActorId + 36) = v302;
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v375 + 24))(
                                                                            *(_QWORD *)(v375 + 64),
                                                                            v299 != 0,
                                                                            v373,
                                                                            *(_QWORD *)(v375 + 40));
                                                                if ( !ActorId )
                                                                  goto LABEL_375;
                                                                v303 = *(_QWORD *)ActorId;
                                                                v304 = ActorId;
                                                                v305 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                                {
                                                                  v306 = (int *)(*(_QWORD *)(v303 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v306
                                                                          - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v305;
                                                                    v306 += 4;
                                                                    if ( !v305 )
                                                                      goto LABEL_289;
                                                                  }
                                                                  v307 = v303 + 16LL * *v306 + 312;
                                                                }
                                                                else
                                                                {
LABEL_289:
                                                                  v307 = sub_1C73E18(
                                                                           ActorId,
                                                                           System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v309 = (*(__int64 (__fastcall **)(__int64, _QWORD))v307)(
                                                                         v304,
                                                                         *(_QWORD *)(v307 + 8));
                                                                if ( !v309 )
                                                                  sub_1C22094(0LL, v308);
                                                                while ( 1 )
                                                                {
                                                                  v310 = *(_QWORD *)v309;
                                                                  v311 = *(unsigned __int16 *)(*(_QWORD *)v309 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v309 + 302LL) )
                                                                  {
                                                                    v312 = (int *)(*(_QWORD *)(v310 + 176) + 8LL);
                                                                    while ( *((System_Collections_IEnumerator_c **)v312
                                                                            - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                    {
                                                                      --v311;
                                                                      v312 += 4;
                                                                      if ( !v311 )
                                                                        goto LABEL_296;
                                                                    }
                                                                    v313 = v378;
                                                                    v314 = v310 + 16LL * *v312 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_296:
                                                                    v313 = v378;
                                                                    v314 = sub_1C73E18(
                                                                             v309,
                                                                             System_Collections_IEnumerator_TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v314)(
                                                                          v309,
                                                                          *(_QWORD *)(v314 + 8)) & 1) == 0 )
                                                                    break;
                                                                  v315 = *(_QWORD *)v309;
                                                                  v316 = *(unsigned __int16 *)(*(_QWORD *)v309 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v309 + 302LL) )
                                                                  {
                                                                    v317 = (int *)(*(_QWORD *)(v315 + 176) + 8LL);
                                                                    while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v317
                                                                            - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                    {
                                                                      --v316;
                                                                      v317 += 4;
                                                                      if ( !v316 )
                                                                        goto LABEL_303;
                                                                    }
                                                                    v318 = v315 + 16LL * *v317 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_303:
                                                                    v318 = sub_1C73E18(
                                                                             v309,
                                                                             System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  v320 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v318)(
                                                                                                  v309,
                                                                                                  *(_QWORD *)(v318 + 8));
                                                                  if ( !*v376 )
                                                                    sub_1C22094(0LL, v319);
                                                                  v321 = BattleServantData__getAttackSideEffectBuffList_44286340(
                                                                           *v376,
                                                                           v301,
                                                                           *v313,
                                                                           v320,
                                                                           0LL);
                                                                  v323 = v321;
                                                                  if ( !v321 )
                                                                    sub_1C22094(0LL, v322);
                                                                  v324 = *(_QWORD *)&v321->max_length;
                                                                  if ( (int)v324 >= 1 )
                                                                  {
                                                                    v325 = 0LL;
                                                                    do
                                                                    {
                                                                      if ( v325 >= (unsigned int)v324 )
                                                                        sub_1C2209C(v321, v322);
                                                                      v326 = this->fields.logicfunction;
                                                                      if ( !v326 )
                                                                        sub_1C22094(0LL, v322);
                                                                      BattleLogicFunction__SetSideEffectBuff(
                                                                        v326,
                                                                        (SkillLvMaster_o *)MasterData_object,
                                                                        *v32,
                                                                        v323->m_Items[v325],
                                                                        (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v167,
                                                                        1,
                                                                        0LL);
                                                                      LODWORD(v324) = v323->max_length;
                                                                      ++v325;
                                                                    }
                                                                    while ( (__int64)v325 < (int)v324 );
                                                                  }
                                                                }
                                                                v327 = *(_QWORD *)v309;
                                                                v328 = *(unsigned __int16 *)(*(_QWORD *)v309 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v309 + 302LL) )
                                                                {
                                                                  v329 = (int *)(*(_QWORD *)(v327 + 176) + 8LL);
                                                                  while ( *((System_IDisposable_c **)v329 - 1) != System_IDisposable_TypeInfo )
                                                                  {
                                                                    --v328;
                                                                    v329 += 4;
                                                                    if ( !v328 )
                                                                      goto LABEL_317;
                                                                  }
                                                                  v330 = v327 + 16LL * *v329 + 312;
                                                                }
                                                                else
                                                                {
LABEL_317:
                                                                  v330 = sub_1C73E18(
                                                                           v309,
                                                                           System_IDisposable_TypeInfo,
                                                                           0LL);
                                                                }
                                                                ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v330)(
                                                                            v309,
                                                                            *(_QWORD *)(v330 + 8));
                                                                v267 = v374;
                                                                LODWORD(v271) = *(_DWORD *)(v374 + 24);
                                                                v141 = v378;
                                                                if ( (__int64)++v298 >= (int)v271 )
                                                                  goto LABEL_326;
                                                              }
                                                              goto LABEL_376;
                                                            }
                                                          }
LABEL_326:
                                                          ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v375 + 24))(
                                                                      *(_QWORD *)(v375 + 64),
                                                                      0LL,
                                                                      0LL,
                                                                      *(_QWORD *)(v375 + 40));
                                                          if ( ActorId )
                                                          {
                                                            v331 = *(_QWORD *)ActorId;
                                                            v332 = ActorId;
                                                            v333 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                            if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                            {
                                                              v334 = (int *)(*(_QWORD *)(v331 + 176) + 8LL);
                                                              while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v334
                                                                      - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                              {
                                                                --v333;
                                                                v334 += 4;
                                                                if ( !v333 )
                                                                  goto LABEL_331;
                                                              }
                                                              v335 = v331 + 16LL * *v334 + 312;
                                                            }
                                                            else
                                                            {
LABEL_331:
                                                              v335 = sub_1C73E18(
                                                                       ActorId,
                                                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                       0LL);
                                                            }
                                                            v336 = (*(__int64 (__fastcall **)(__int64, _QWORD))v335)(
                                                                     v332,
                                                                     *(_QWORD *)(v335 + 8));
                                                            v338 = v336;
                                                            while ( 1 )
                                                            {
                                                              if ( !v338 )
                                                                sub_1C22094(v336, v337);
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
                                                                    goto LABEL_339;
                                                                }
                                                                v342 = v339 + 16LL * *v341 + 312;
                                                              }
                                                              else
                                                              {
LABEL_339:
                                                                v342 = sub_1C73E18(
                                                                         v338,
                                                                         System_Collections_IEnumerator_TypeInfo,
                                                                         0LL);
                                                              }
                                                              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v342)(
                                                                      v338,
                                                                      *(_QWORD *)(v342 + 8)) & 1) == 0 )
                                                                break;
                                                              v343 = *(_QWORD *)v338;
                                                              v344 = *(unsigned __int16 *)(*(_QWORD *)v338 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v338 + 302LL) )
                                                              {
                                                                v345 = (int *)(*(_QWORD *)(v343 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v345
                                                                        - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                {
                                                                  --v344;
                                                                  v345 += 4;
                                                                  if ( !v344 )
                                                                    goto LABEL_346;
                                                                }
                                                                v346 = v343 + 16LL * *v345 + 312;
                                                              }
                                                              else
                                                              {
LABEL_346:
                                                                v346 = sub_1C73E18(
                                                                         v338,
                                                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v347 = (*(__int64 (__fastcall **)(__int64, _QWORD))v346)(
                                                                       v338,
                                                                       *(_QWORD *)(v346 + 8));
                                                              if ( !*v376 )
                                                                sub_1C22094(v347, v348);
                                                              if ( !v347 )
                                                                sub_1C22094(0LL, v348);
                                                              if ( !this->fields.logic )
                                                                sub_1C22094(v347, v348);
                                                              v336 = BattleLogic__SetDamageSideEffect(
                                                                       this->fields.logic,
                                                                       *v32,
                                                                       (*v376)->fields.uniqueId,
                                                                       *(_DWORD *)(v347 + 24),
                                                                       *v141,
                                                                       0LL);
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
                                                                  goto LABEL_356;
                                                              }
                                                              v352 = v349 + 16LL * *v351 + 312;
                                                            }
                                                            else
                                                            {
LABEL_356:
                                                              v352 = sub_1C73E18(v338, System_IDisposable_TypeInfo, 0LL);
                                                            }
                                                            (*(void (__fastcall **)(__int64, _QWORD))v352)(
                                                              v338,
                                                              *(_QWORD *)(v352 + 8));
                                                            ActorId = *v363;
                                                            if ( *v363 )
                                                            {
                                                              System_Collections_Generic_List_object___GetEnumerator(
                                                                (System_Collections_Generic_List_Enumerator_T__o *)&v379,
                                                                (System_Collections_Generic_List_object__o *)ActorId,
                                                                (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
                                                              v380 = v379;
                                                              while ( 1 )
                                                              {
                                                                v353 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                                         &v380,
                                                                         (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
                                                                if ( !v353 )
                                                                  break;
                                                                current = v380.fields._current;
                                                                if ( !v380.fields._current )
                                                                  sub_1C22094(v353, v354);
                                                                klass = v380.fields._current[49].klass;
                                                                if ( !klass )
                                                                  sub_1C22094(v353, v354);
                                                                LOBYTE(klass->_1.methods) = 0;
                                                                if ( v366->fields.isCanCounterTask )
                                                                {
                                                                  if ( !*v376 )
                                                                    sub_1C22094(v353, v354);
                                                                  v357 = this->fields.data;
                                                                  if ( !v357 )
                                                                    sub_1C22094(0LL, v354);
                                                                  BattleData__SetWasAttackTargetId(
                                                                    v357,
                                                                    (*v376)->fields.uniqueId,
                                                                    (int32_t)current[1].monitor,
                                                                    0LL);
                                                                }
                                                              }
                                                              System_Collections_Generic_List_Enumerator_object___Dispose(
                                                                &v380,
                                                                (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
                                                              if ( *(_QWORD *)v365 )
                                                              {
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, int64_t, _QWORD))(*(_QWORD *)v365 + 24LL))(
                                                                            *(_QWORD *)(*(_QWORD *)v365 + 64LL),
                                                                            v372,
                                                                            *(_QWORD *)(*(_QWORD *)v365 + 40LL));
                                                                v358 = *v32;
                                                                if ( *v32 )
                                                                {
                                                                  v358->fields.isForcedSpeedOne = v366->fields.isForcedSpeedOne;
                                                                  v358->fields.isAllAttack = v364;
                                                                  if ( *v376 )
                                                                  {
                                                                    ActorId = (__int64)this->fields.data;
                                                                    if ( ActorId )
                                                                    {
                                                                      BattleData__setCommandAttack(
                                                                        (BattleData_o *)ActorId,
                                                                        (*v376)->fields.uniqueId,
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
                                                                          v359 = this->fields.logic;
                                                                          v360 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1C22084(BattleAddSkillTaskAfterCommandAttack_TypeInfo);
                                                                          BattleAddSkillTaskAfterCommandAttack___ctor(
                                                                            v360,
                                                                            0LL);
                                                                          if ( v359 )
                                                                          {
                                                                            BattleLogic__AddSkillTask(
                                                                              v359,
                                                                              (BattleAddSkillTaskAroundTargetTask_o *)v360,
                                                                              v366,
                                                                              uniqueId,
                                                                              0LL);
                                                                            return *v32;
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
    sub_1C22094(ActorId, v9);
  }
  return result;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateDoNotActAction(
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1

  if ( (byte_4BDF2B6 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_8906/*"MOTION_DO_NOT_ACT"*/);
    byte_4BDF2B6 = 1;
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
  v10 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0LL, 0LL);
  v11 = 0LL;
  if ( !v10 )
  {
    v11 = sub_1C22084(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v18 = StringLiteral_8906/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 64) = StringLiteral_8906/*"MOTION_DO_NOT_ACT"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 64), v18, v12, v13, v14, v15, v16, v17);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_1C22094(data, task);
  }
  return (BattleActionData_o *)v11;
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

  if ( (byte_4BDF2B5 & 1) == 0 )
  {
    sub_1C21E38(&ProgressIntervalTurnActionData_TypeInfo);
    byte_4BDF2B5 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1C22084(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1C22094(data, v5);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0LL, (BattleActionData_o *)v4, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  BattleServantData_o *v5; // x19
  __int64 v6; // x22
  int v7; // w22
  int64_t v8; // x21
  BattleActorControl_o *PartsActor; // x23
  struct BattleData_o *v10; // x8
  BattleActorControl_o *v11; // x22
  struct BattleData_o *v12; // x8
  int32_t uniqueID; // w9
  int64_t *v14; // x10
  BattleActorControl_o *v15; // x22
  int32_t v16; // w8
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDF2AB & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6568/*"FOCUS_UNDER"*/);
    sub_1C21E38(&StringLiteral_6566/*"FOCUS_CENTER"*/);
    sub_1C21E38(&StringLiteral_6570/*"FOCUS_UP"*/);
    byte_4BDF2AB = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, data->fields.justDeadTargetId, 0LL);
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_42;
  v5 = (BattleServantData_o *)data;
  v4->fields.justDeadTargetId = -1;
  if ( !data )
    return 0LL;
  if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)data, 0LL)
    || (v6 = 0LL, BattleServantData__isMultiTargetUnder(v5, 0LL)) )
  {
    data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(v5, 0LL);
    if ( !this->fields.data )
      goto LABEL_42;
    v7 = (int)data;
    v8 = StringLiteral_6566/*"FOCUS_CENTER"*/;
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
        v10 = this->fields.data;
        if ( !v10 )
          goto LABEL_42;
        v8 = StringLiteral_6566/*"FOCUS_CENTER"*/;
        v10->fields.globaltargetId = PartsActor->fields.uniqueID;
      }
    }
    if ( v7 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v15 = BattleData__GetPartsActor(data, 2, 0LL);
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
      v12 = this->fields.data;
      if ( !v12 )
        goto LABEL_42;
      uniqueID = v15->fields.uniqueID;
      v14 = &StringLiteral_6568/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v7 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v11 = BattleData__GetPartsActor(data, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v11 )
        goto LABEL_42;
      data = (BattleData_o *)v11->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v12 = this->fields.data;
      if ( !v12 )
        goto LABEL_42;
      uniqueID = v11->fields.uniqueID;
      v14 = &StringLiteral_6570/*"FOCUS_UP"*/;
    }
    v8 = *v14;
    v12->fields.globaltargetId = uniqueID;
LABEL_39:
    v6 = sub_1C22084(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0LL);
    if ( v6 )
    {
      v16 = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = v16;
      *(_DWORD *)(v6 + 36) = v16;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0LL);
      *(_QWORD *)(v6 + 64) = v8;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 64), v8, v17, v18, v19, v20, v21, v22);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_1C22094(data, method);
  }
  return (BattleActionData_o *)v6;
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF2A1 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
    byte_4BDF2A1 = 1;
  }
  v3 = sub_1C22084(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  System_Collections_Generic_List_object__o *v10; // x19
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v12; // x1
  BattleLogicNomal___c_c *v13; // x0
  System_Comparison_T__o *_9__22_0; // x20
  Il2CppObject *v15; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF2A3 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C21E38(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__);
    sub_1C21E38(&BattleLogicNomal___c_TypeInfo);
    byte_4BDF2A3 = 1;
  }
  value = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_32E79EC *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v10) )
  {
LABEL_16:
    sub_1C22094(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v13 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v13 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_0 = (System_Comparison_T__o *)v13->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleLogicNomal___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__22_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__22_0,
      v15,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__22_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
      (int64_t)_9__22_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  System_Collections_Generic_List_object___Sort_56953720(
    v10,
    _9__22_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
}


bool __fastcall BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C22094(0LL, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0LL)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool __fastcall BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C22094(0LL, method);
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
    sub_1C22094(data, isCheckNext);
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

  if ( (byte_4BDF2AD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF2AD = 1;
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
          sub_1C22094(data, method);
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
  if ( (byte_4BDF2AE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4BDF2AE = 1;
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
      sub_1C73D70(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C73D14(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !v3 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C73D70(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C73D14(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_2FE4208 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    sub_1C22094(data, prevFieldIndiv);
  }
}


BattleLogicTask_array *__fastcall BattleLogicNomal__checkReflectionTask(
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
  int max_length; // w8
  BattleBuffData_BuffData_array *v14; // x23
  unsigned int v15; // w28
  BattleBuffData_BuffData_o *v16; // x24
  BattleSkillInfoData_o *v17; // x25
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v19; // x8
  BattleLogicTask_o *v20; // x24
  BattleLogic_o *logic; // x25
  __int64 v22; // x26
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v40; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDF2B2 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask___TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF2B2 = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        Instance = BattleServantData__isAlive(v12, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v12, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_44;
          max_length = *(_DWORD *)(Instance + 24);
          v14 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( v15 < max_length )
            {
              v16 = v14->m_Items[v15];
              v17 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v17, 0LL);
              if ( !v17 )
                goto LABEL_44;
              v17->fields.svtUniqueId = v12->fields.uniqueId;
              if ( !v16 )
                goto LABEL_44;
              vals = v16->fields.vals;
              if ( !vals )
                goto LABEL_44;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._4_set_skillId.method)(
                           v17,
                           (unsigned int)vals->m_Items[1],
                           v17->klass->vtable._5_get_skillId.methodPtr);
              v19 = v16->fields.vals;
              if ( !v19 )
                goto LABEL_44;
              if ( v19->max_length <= 1 )
                break;
              v17->fields.skilllv = v19->m_Items[2];
              v20 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v20, 0LL);
              if ( !v20 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v20, v17, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1C21EE0(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v22 = Instance;
              Instance = sub_1C21F74(v20, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v40 = sub_1C220B8(0LL);
                sub_1C21F60(v40, 0LL);
              }
              if ( !*(_DWORD *)(v22 + 24) )
                break;
              *(_QWORD *)(v22 + 32) = v20;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v20, v23, v24, v25, v26, v27, v28);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v12,
                v14,
                (BattleLogicTask_array *)v22,
                0LL);
              if ( !v6 )
                goto LABEL_44;
              items = v6->fields._items;
              v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v6->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v20,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v38[4] = (Il2CppClass *)v20;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v20, v29, v30, v31, v32, v33, v34);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1C2209C(Instance, v8);
          }
LABEL_38:
          Instance = (__int64)v12->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
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
          0LL),
        !v6) )
  {
LABEL_44:
    sub_1C22094(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int v15; // w8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
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
  if ( (byte_4BDF2B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4BDF2B7 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !commandCodeBuffList )
    sub_1C22094(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
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
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_1C22094(v16, v17);
    current = (BattleBuffData_BuffData_o *)v39.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1C22094(IsEnableCommandCode, v20);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1C22094(IsEnableCommandCode, v20);
    v21 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v21 & 1) != 0 )
    {
      if ( arg == 0LL || !isCommandAfter )
      {
        if ( !current )
          sub_1C22094(v21, v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_1C22094(v21, v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1C2209C(v21, v22);
        if ( max_length == 1 )
          sub_1C2209C(v21, v22);
        if ( !skillLvMst )
          sub_1C22094(v21, v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v27 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1C22094(Entity, v26);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1C22094(Entity, v26);
          logicfunction = v37->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v27->fields.funcId;
          v31 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v27, 0LL);
          if ( !logicfunction )
            sub_1C22094(DataValsList, v33);
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
            0LL);
        }
      }
      else
      {
        v34 = v37->fields.logicfunction;
        if ( !v34 )
          sub_1C22094(0LL, v22);
        BattleLogicFunction__SetSideEffectBuff(
          v34,
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
    &v39,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleActionData_o *__fastcall BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x1

  if ( (byte_4BDF2A5 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&StringLiteral_8897/*"MOTION_BACK"*/);
    byte_4BDF2A5 = 1;
  }
  v4 = sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  *(_DWORD *)(v4 + 32) = uniqueId;
  v13 = StringLiteral_8897/*"MOTION_BACK"*/;
  *(_QWORD *)(v4 + 64) = StringLiteral_8897/*"MOTION_BACK"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 64), v13, v7, v8, v9, v10, v11, v12);
  return (BattleActionData_o *)v4;
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
            sub_1C2209C(data, task);
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
    sub_1C22094(data, task);
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddPlayer(
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
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDF2B1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C21E38(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__);
    sub_1C21E38(&BattleLogicNomal___c_TypeInfo);
    byte_4BDF2B1 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !data )
    goto LABEL_31;
  v5 = this->fields.data;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v7 = data;
  v8 = v5 == 0LL;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0LL;
    p_rootfsm = &data->fields.rootfsm;
    while ( !v8 )
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_32;
      data = (BattleData_o *)v5->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_rootfsm[v9],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v9];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        v11 = (int)data;
        data = (BattleData_o *)p_rootfsm[v9];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v9];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v11, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_32:
            sub_1C2209C(data, task);
          data = (BattleData_o *)p_rootfsm[v9];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v5 = this->fields.data;
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      ++v9;
      v8 = v5 == 0LL;
      if ( (__int64)v9 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_31:
    sub_1C22094(data, task);
  }
LABEL_22:
  if ( v8 )
    goto LABEL_31;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v5->fields.aiNpcDataList;
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
    monitor = (System_Action_object__o *)sub_1C22084(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(monitor, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_AiNpcBattleServantData__o *)monitor;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__40_0, (int64_t)monitor, v16, v17, v18, v19, v20, v21);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)monitor,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 isBuster; // x0
  int64_t v7; // x1
  struct System_Int32_array *targetIdlist; // x23
  __int64 v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int v16; // w8
  PartyOrganizationUtility_o *v17; // x0
  System_Array_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t *v25; // x8
  int64_t v26; // x1
  __int64 v27; // x8
  char v28; // w21
  unsigned __int64 v29; // x22
  System_Array_o *v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_RuntimeFieldHandle_o v38; // 0:w1.4
  System_RuntimeFieldHandle_o v39; // 0:w1.4

  if ( (byte_4BDF2A6 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&FunctionEntity_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_1C21E38(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_1C21E38(&StringLiteral_6550/*"FIELD_PLAYER"*/);
    sub_1C21E38(&StringLiteral_6549/*"FIELD_ENEMY"*/);
    byte_4BDF2A6 = 1;
  }
  v5 = sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_1C22084(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0LL);
    isBuster = sub_1C21EE0(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v16 = *(_DWORD *)(isBuster + 24);
      v7 = isBuster;
      if ( !v16 || (*(_DWORD *)(isBuster + 32) = 102, v16 == 1) )
LABEL_30:
        sub_1C2209C(isBuster, v7);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBuster;
        v17 = (PartyOrganizationUtility_o *)(v9 + 32);
LABEL_14:
        sub_1C21DDC(v17, v7, v10, v11, v12, v13, v14, v15);
        v25 = &StringLiteral_6550/*"FIELD_PLAYER"*/;
LABEL_15:
        v26 = *v25;
        *(_QWORD *)(v5 + 64) = *v25;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 64), v26, v19, v20, v21, v22, v23, v24);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1C22094(isBuster, v7);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0LL);
    v18 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 3LL);
    v38.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v18, v38, 0LL);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(v9 + 32) = v18;
    v17 = (PartyOrganizationUtility_o *)(v9 + 32);
    v7 = (int64_t)v18;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0LL);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v5, 0LL);
    v31 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 3LL);
    v39.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v31, v39, 0LL);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v31;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)v31, v32, v33, v34, v35, v36, v37);
      v25 = &StringLiteral_6549/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v27 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v27 < 1 )
    return 0LL;
  v28 = 0;
  v29 = 0LL;
  do
  {
    if ( v29 >= (unsigned int)v27 )
      goto LABEL_30;
    isBuster = (__int64)this->fields.data;
    if ( !isBuster )
      goto LABEL_29;
    isBuster = (__int64)BattleData__getServantData((BattleData_o *)isBuster, targetIdlist->m_Items[v29 + 1], 0LL);
    LODWORD(v27) = targetIdlist->max_length;
    ++v29;
    v28 |= isBuster != 0;
  }
  while ( (__int64)v29 < (int)v27 );
  if ( (v28 & 1) != 0 )
    return (BattleActionData_o *)v5;
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
    sub_1C22094(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x24
  __int64 Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_Dictionary_int__object__o *v21; // x23
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x26
  int v31; // w8
  __int64 v32; // x28
  unsigned int v33; // w22
  __int64 v34; // x25
  __int64 *v35; // x25
  __int64 v36; // t1
  Il2CppObject *v37; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v42; // w25
  Il2CppClass **v43; // x27
  Il2CppClass *v44; // x8
  char *v45; // x27
  Il2CppClass *v46; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v48; // x8
  int32_t v49; // w9
  struct BattleData_o *v50; // x8
  __int64 v51; // x28
  int v52; // w8
  unsigned int v53; // w22
  __int64 v54; // x23
  __int64 *v55; // x23
  __int64 v56; // t1
  bool v57; // w3
  char v58; // w29
  Il2CppObject *v59; // x29
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v64; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v66; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v68; // x26
  struct BattleData_o *v69; // x8
  const MethodInfo *v70; // x2
  struct BattleData_o *v71; // x8
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v77; // w23
  char v78; // w22
  BattleBuffData_BuffData_o *v79; // x28
  BattleSkillInfoData_o *v80; // x26
  __int64 v81; // x0
  __int64 v82; // x1
  struct System_Int32_array *vals; // x8
  __int64 v84; // x0
  __int64 v85; // x1
  struct System_Int32_array *v86; // x8
  BattleData_o *v87; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v89; // x1
  SkillLvEntity_o *v90; // x0
  __int64 v91; // x1
  SkillLvEntity_o *v92; // x29
  BattleData_o *v93; // x0
  _BOOL8 v94; // x0
  __int64 v95; // x1
  BattleLogic_o *v96; // x0
  int32_t v97; // w20
  __int64 v98; // x0
  __int64 v99; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v103; // x0
  __int64 v104; // x1
  System_Collections_ICollection_o *v105; // x0
  __int64 v106; // x1
  BattleLogicTask_array *v107; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v109; // x0
  BattleLogic_o *v110; // x0
  __int64 v111; // x1
  BattleData_o *v112; // x0
  int32_t v113; // w23
  Il2CppObject *v114; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v116; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v118; // x20
  int v119; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v121; // x26
  BattleSkillInfoData_o *v122; // x25
  __int64 v123; // x0
  __int64 v124; // x1
  struct System_Int32_array *v125; // x8
  __int64 v126; // x0
  __int64 v127; // x1
  struct System_Int32_array *v128; // x8
  BattleData_o *v129; // x0
  BattleServantData_o *v130; // x27
  __int64 v131; // x1
  SkillLvEntity_o *v132; // x0
  __int64 v133; // x1
  SkillLvEntity_o *v134; // x28
  BattleData_o *v135; // x0
  _BOOL8 v136; // x0
  __int64 v137; // x1
  BattleLogic_o *v138; // x0
  int32_t v139; // w20
  __int64 v140; // x0
  __int64 v141; // x1
  System_Int32_array *v142; // x26
  bool v143; // w27
  BattleLogicSkill_o *v144; // x20
  System_Int32_array *v145; // x0
  __int64 v146; // x1
  BattleLogicTask_array *v147; // x1
  BattleLogic_o *v148; // x0
  struct BattleData_o *v149; // x8
  BattleActionData_o *v150; // x1
  const MethodInfo *v152; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v153; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v154; // [xsp+20h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-D0h]
  char v156; // [xsp+3Ch] [xbp-C4h]
  SkillLvMaster_o *v157; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v158; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v159; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4BDF2AF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__);
    sub_1C21E38(&BattleLogicNomal___c__DisplayClass38_0_TypeInfo);
    sub_1C21E38(&StringLiteral_8908/*"MOTION_ENEMY_TURN_END"*/);
    byte_4BDF2AF = 1;
  }
  entity = 0LL;
  memset(&v159, 0, sizeof(v159));
  v4 = sub_1C22084(BattleLogicNomal___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_215;
  *(_QWORD *)(v4 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  baseActData = (BattleActionData_o *)sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v4 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !baseActData )
    goto LABEL_215;
  BattleActionData__setStateField(baseActData, 0LL);
  v14 = StringLiteral_8908/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8908/*"MOTION_ENEMY_TURN_END"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&baseActData->fields.motionname, v14, v15, v16, v17, v18, v19, v20);
  v154 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v154,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v157 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)QuestIndividualities, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v153 = v21;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v31 = *(_DWORD *)(Instance + 24);
  v32 = Instance;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= v31 )
        goto LABEL_220;
      v34 = v32 + 8LL * (int)v33;
      v36 = *(_QWORD *)(v34 + 32);
      v35 = (__int64 *)(v34 + 32);
      Instance = v36;
      if ( !v36 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 540) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_220;
        v37 = (Il2CppObject *)Instance;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_220;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_215;
            if ( v37[1].monitor )
            {
              if ( v33 >= *(_DWORD *)(v32 + 24) )
                goto LABEL_220;
              Instance = (__int64)v154;
              if ( !*v35 || !v154 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v154,
                *(_DWORD *)(*v35 + 24),
                v37,
                (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_220;
        if ( !*v35 )
          goto LABEL_215;
        if ( !v30 )
          goto LABEL_215;
        v6 = *(unsigned int *)(*v35 + 24);
        items = v30->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v30,
            v6,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v30->fields._size = size + 1;
          items->m_Items[size + 1] = v6;
        }
        if ( !v37 )
          goto LABEL_215;
        monitor = (int)v37[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_52:
      v31 = *(_DWORD *)(v32 + 24);
      if ( (int)++v33 >= v31 )
        goto LABEL_53;
    }
    v42 = 0;
    while ( v42 < monitor )
    {
      v43 = &v37->klass + (int)v42;
      v46 = v43[4];
      v45 = (char *)(v43 + 4);
      v44 = v46;
      if ( !v46 || !v13 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v13,
                   &entity,
                   (int32_t)v44->_1.name,
                   (const MethodInfo_325BE14 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v48 = logic->fields.data;
          if ( !v48 )
            goto LABEL_215;
          if ( v42 >= LODWORD(v37[1].monitor) )
            break;
          if ( !*(_QWORD *)v45 )
            goto LABEL_215;
          v49 = *(_DWORD *)(*(_QWORD *)v45 + 28LL);
          if ( v48->fields.endMasterSkillTurnBuffValue <= v49 )
            v48->fields.endMasterSkillTurnBuffValue = v49;
        }
      }
      monitor = (int)v37[1].monitor;
      if ( (int)++v42 >= monitor )
        goto LABEL_52;
    }
LABEL_220:
    sub_1C2209C(Instance, v6);
  }
LABEL_53:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v50 = this->fields.data;
  if ( !v50 )
    goto LABEL_215;
  v51 = Instance;
  if ( v50->fields.leaderDown && v50->fields.endbattleFlg )
  {
    v156 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v52 = *(_DWORD *)(Instance + 24);
    if ( v52 >= 1 )
    {
      v53 = 0;
      v156 = 0;
      while ( v53 < v52 )
      {
        v54 = v51 + 8LL * (int)v53;
        v56 = *(_QWORD *)(v54 + 32);
        v55 = (__int64 *)(v54 + 32);
        Instance = v56;
        if ( !v56 )
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
            v57 = 1;
          }
          else
          {
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_215;
            Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
            v57 = Instance & 1;
          }
          if ( v53 >= *(_DWORD *)(v51 + 24) )
            goto LABEL_220;
          Instance = *v55;
          if ( !*v55 )
            goto LABEL_215;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *(System_Int32_array **)(v4 + 24),
                       this->fields.logic,
                       v57,
                       baseActData,
                       0LL);
          if ( v53 >= *(_DWORD *)(v51 + 24) )
            goto LABEL_220;
          v58 = Instance;
          Instance = *v55;
          if ( !*v55 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v53 >= *(_DWORD *)(v51 + 24) )
              goto LABEL_220;
            Instance = *v55;
            if ( !*v55 )
              goto LABEL_215;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_215;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v53 >= *(_DWORD *)(v51 + 24) )
                goto LABEL_220;
              if ( !*v55 || !v153 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v153,
                *(_DWORD *)(*v55 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v53 >= *(_DWORD *)(v51 + 24) )
            goto LABEL_220;
          if ( !*v55 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v55 + 784);
          if ( !Instance )
            goto LABEL_215;
          v156 |= v58;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v53 >= *(_DWORD *)(v51 + 24) )
          goto LABEL_220;
        Instance = *v55;
        if ( !*v55 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 540) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v4 + 16),
                                *(System_Int32_array **)(v4 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v53 >= *(_DWORD *)(v51 + 24) )
            goto LABEL_220;
          v59 = (Il2CppObject *)Instance;
          Instance = *v55;
          if ( !*v55 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v53 >= *(_DWORD *)(v51 + 24) )
              goto LABEL_220;
            Instance = *v55;
            if ( !*v55 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v59 )
                goto LABEL_215;
              if ( v59[1].monitor )
              {
                if ( v53 >= *(_DWORD *)(v51 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v154;
                if ( !*v55 || !v154 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v154,
                  *(_DWORD *)(*v55 + 24),
                  v59,
                  (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v53 >= *(_DWORD *)(v51 + 24) )
            goto LABEL_220;
          if ( !*v55 )
            goto LABEL_215;
          if ( !v30 )
            goto LABEL_215;
          v6 = *(unsigned int *)(*v55 + 24);
          v60 = v30->fields._items;
          v61 = Method_System_Collections_Generic_List_int__Add__;
          ++v30->fields._version;
          if ( !v60 )
            goto LABEL_215;
          v62 = v30->fields._size;
          if ( (unsigned int)v62 >= v60->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v30,
              v6,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v30->fields._size = v62 + 1;
            v60->m_Items[v62 + 1] = v6;
          }
        }
        v52 = *(_DWORD *)(v51 + 24);
        if ( (int)++v53 >= v52 )
          goto LABEL_111;
      }
      goto LABEL_220;
    }
    v156 = 0;
LABEL_111:
    v50 = this->fields.data;
    if ( !v50 )
      goto LABEL_215;
  }
  if ( !v30 )
    goto LABEL_215;
  battleEvent = v50->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v30,
                        (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v4 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v64 = this->fields.data;
  if ( !v64 )
    goto LABEL_215;
  perf = v64->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v64->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v66 = this->fields.data;
  if ( !v66 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v66->fields.aiNpcDataList;
  v68 = (System_Action_object__o *)sub_1C22084(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v68,
    (Il2CppObject *)v4,
    Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v68,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v69 = this->fields.data;
  if ( !v69 )
    goto LABEL_215;
  Instance = (__int64)v69->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v4 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v4 + 24), v70);
  v71 = this->fields.data;
  if ( !v71 )
    goto LABEL_215;
  v71->fields.currentTurn = 0;
  if ( !v153 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v158,
    v153,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v159 = v158;
  while ( 1 )
  {
    v72 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v159,
                            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v72 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v159.fields._current.fields.value;
    if ( !v159.fields._current.fields.value )
      sub_1C22094(v72, v73);
    max_length = (int)v159.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v159.fields._current.fields.key;
      v77 = 0;
      v78 = 1;
LABEL_128:
      if ( v77 >= max_length )
        sub_1C2209C(v72, v73);
      v79 = value->m_Items[v77];
      if ( !v79 )
        sub_1C22094(v72, v73);
      if ( v79->fields._isRemove )
        goto LABEL_164;
      if ( !v13 )
        sub_1C22094(v72, v73);
      v72 = DataMasterBase_object__object__int___GetEntity(
              v13,
              v79->fields.buffId,
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v72 )
        goto LABEL_164;
      v80 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v80, 0LL);
      if ( !v80 )
        sub_1C22094(v81, v82);
      v80->fields.svtUniqueId = key;
      vals = v79->fields.vals;
      if ( !vals )
        sub_1C22094(v81, v82);
      if ( !vals->max_length )
        sub_1C2209C(v81, v82);
      v84 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v80->klass->vtable._4_set_skillId.method)(
              v80,
              (unsigned int)vals->m_Items[1],
              v80->klass->vtable._5_get_skillId.methodPtr);
      v86 = v79->fields.vals;
      if ( !v86 )
        sub_1C22094(v84, v85);
      if ( v86->max_length <= 1 )
        sub_1C2209C(v84, v85);
      v80->fields.skilllv = v86->m_Items[2];
      v87 = this->fields.data;
      if ( !v87 )
        sub_1C22094(0LL, v85);
      ServantData = BattleData__getServantData(v87, v80->fields.svtUniqueId, 0LL);
      v89 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v80->klass->vtable._5_get_skillId.method)(
              v80,
              v80->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v157 )
        sub_1C22094(0LL, v89);
      v90 = SkillLvMaster__GetEntity(v157, v89, v80->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1C22094(v90, v91);
      v92 = v90;
      v93 = this->fields.data;
      if ( !v93 )
        sub_1C22094(0LL, v91);
      v94 = BattleData__checkAliveOther(v93, ServantData->fields.uniqueId, 0LL);
      if ( !v94 )
      {
        if ( !v92 )
          sub_1C22094(v94, v95);
        v96 = this->fields.logic;
        if ( !v96 )
          sub_1C22094(0LL, v95);
        v72 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v96, v92->fields.funcId, 0LL);
        if ( ((unsigned __int8)v72 & 1) == 0 )
          goto LABEL_164;
      }
      v97 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v79, 0LL);
      if ( (v97 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v80->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v80, 0LL);
      }
      else
      {
        v98 = sub_1C21EE0(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v98;
        if ( !v98 )
          sub_1C22094(0LL, v99);
        if ( !*(_DWORD *)(v98 + 24) )
          sub_1C2209C(v98, v99);
        exists = 0;
        *(_DWORD *)(v98 + 32) = v97;
      }
      logicskill = this->fields.logicskill;
      v103 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v103 )
        sub_1C22094(0LL, v104);
      if ( !v103->max_length )
        sub_1C2209C(v103, v104);
      v103->m_Items[1] = key;
      if ( !logicskill )
        sub_1C22094(v103, v104);
      v105 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v80,
                                                   v103,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v152);
      v107 = (BattleLogicTask_array *)v105;
      if ( (v78 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v105, 0LL);
        if ( IsNullOrEmpty )
        {
          v78 = 1;
          goto LABEL_162;
        }
        if ( !v107 )
          sub_1C22094(IsNullOrEmpty, v106);
        if ( !v107->max_length )
          sub_1C2209C(IsNullOrEmpty, v106);
        v109 = v107->m_Items[0];
        if ( !v109 )
          sub_1C22094(0LL, v106);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v109, ServantData, value, 0LL);
      }
      v78 = 0;
LABEL_162:
      v110 = this->fields.logic;
      if ( !v110 )
        sub_1C22094(0LL, v106);
      BattleLogic__addBattleLogicTask(v110, v107, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v77 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v159,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v154;
  if ( !v154 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v158,
    v154,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v159 = v158;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v159,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v112 = this->fields.data;
    if ( !v112 )
      sub_1C22094(0LL, v111);
    v113 = (int32_t)v159.fields._current.fields.key;
    v114 = v159.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v112, (int32_t)v159.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v118 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C22084(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43953980(
        v118,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v118 )
        sub_1C22094(isEndAct, v116);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v118->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v114 )
      sub_1C22094(isEndAct, v116);
    v119 = (int)v114[1].monitor;
    if ( v119 >= 1 )
    {
      for ( i = 0; i < v119; ++i )
      {
        if ( i >= (unsigned int)v119 )
          sub_1C2209C(isEndAct, v116);
        v121 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v114[2].klass + i);
        if ( !v121 )
          sub_1C22094(isEndAct, v116);
        if ( !v121->fields._isRemove )
        {
          if ( !v13 )
            sub_1C22094(isEndAct, v116);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v13,
                                              v121->fields.buffId,
                                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v121, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v122 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v122, 0LL);
                if ( !v122 )
                  sub_1C22094(v123, v124);
                v122->fields.svtUniqueId = v113;
                v125 = v121->fields.vals;
                if ( !v125 )
                  sub_1C22094(v123, v124);
                if ( !v125->max_length )
                  sub_1C2209C(v123, v124);
                v126 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v122->klass->vtable._4_set_skillId.method)(
                         v122,
                         (unsigned int)v125->m_Items[1],
                         v122->klass->vtable._5_get_skillId.methodPtr);
                v128 = v121->fields.vals;
                if ( !v128 )
                  sub_1C22094(v126, v127);
                if ( v128->max_length <= 1 )
                  sub_1C2209C(v126, v127);
                v122->fields.skilllv = v128->m_Items[2];
                v129 = this->fields.data;
                if ( !v129 )
                  sub_1C22094(0LL, v127);
                v130 = BattleData__getServantData(v129, v122->fields.svtUniqueId, 0LL);
                v131 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v122->klass->vtable._5_get_skillId.method)(
                         v122,
                         v122->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v157 )
                  sub_1C22094(0LL, v131);
                v132 = SkillLvMaster__GetEntity(v157, v131, v122->fields.skilllv, 0LL);
                if ( !v130 )
                  sub_1C22094(v132, v133);
                v134 = v132;
                v135 = this->fields.data;
                if ( !v135 )
                  sub_1C22094(0LL, v133);
                v136 = BattleData__checkAliveOther(v135, v130->fields.uniqueId, 0LL);
                if ( v136 )
                  goto LABEL_198;
                if ( !v134 )
                  sub_1C22094(v136, v137);
                v138 = this->fields.logic;
                if ( !v138 )
                  sub_1C22094(0LL, v137);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v138, v134->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v139 = BattleServantData__GetRevengeIdCheckOpponentOnly(v130, v121, 0LL);
                  if ( (v139 & 0x80000000) != 0 )
                  {
                    v142 = Target__getTargetIds(this->fields.data, v122->fields.svtUniqueId, -1, v113, 13, 0LL, 0LL);
                    v143 = BattleSkillInfoData__ExistsNoTargetNoActionType(v122, 0LL);
                  }
                  else
                  {
                    v140 = sub_1C21EE0(int___TypeInfo, 1LL);
                    v142 = (System_Int32_array *)v140;
                    if ( !v140 )
                      sub_1C22094(0LL, v141);
                    if ( !*(_DWORD *)(v140 + 24) )
                      sub_1C2209C(v140, v141);
                    v143 = 0;
                    *(_DWORD *)(v140 + 32) = v139;
                  }
                  v144 = this->fields.logicskill;
                  v145 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
                  if ( !v145 )
                    sub_1C22094(0LL, v146);
                  if ( !v145->max_length )
                    sub_1C2209C(v145, v146);
                  v145->m_Items[1] = v113;
                  if ( !v144 )
                    sub_1C22094(v145, v146);
                  v147 = BattleLogicSkill__taskSkill(v144, v122, v145, v142, 1, v143, 0, 0, 0, v152);
                  v148 = this->fields.logic;
                  if ( !v148 )
                    sub_1C22094(0LL, v147);
                  BattleLogic__addBattleLogicTask(v148, v147, 0LL);
                }
              }
            }
          }
        }
        v119 = (int)v114[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v159,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v149 = this->fields.data;
  if ( !v149
    || (Instance = (__int64)v149->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1C22094(Instance, v6);
  }
  if ( (v156 & 1) != 0 )
    v150 = baseActData;
  else
    v150 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v150, baseActData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x24
  __int64 Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x26
  int v31; // w8
  __int64 v32; // x28
  unsigned int v33; // w20
  __int64 v34; // x22
  __int64 *v35; // x22
  __int64 v36; // t1
  bool v37; // w3
  char v38; // w29
  Il2CppObject *v39; // x2
  Il2CppObject *v40; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v45; // w22
  Il2CppClass **v46; // x23
  Il2CppClass *v47; // x8
  char *v48; // x23
  Il2CppClass *v49; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v51; // x8
  int32_t v52; // w9
  struct BattleData_o *v53; // x8
  __int64 v54; // x27
  int v55; // w8
  unsigned int v56; // w20
  __int64 v57; // x22
  __int64 *v58; // x22
  __int64 v59; // t1
  Il2CppObject *v60; // x28
  struct System_Int32_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  struct BaseBattleEvent_o *battleEvent; // x23
  struct BattleData_o *v65; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v67; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x23
  System_Action_object__o *v69; // x26
  struct BattleData_o *v70; // x8
  const MethodInfo *v71; // x2
  struct BattleData_o *v72; // x8
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v78; // w20
  char v79; // w22
  BattleBuffData_BuffData_o *v80; // x28
  BattleSkillInfoData_o *v81; // x26
  __int64 v82; // x0
  __int64 v83; // x1
  struct System_Int32_array *vals; // x8
  __int64 v85; // x0
  __int64 v86; // x1
  struct System_Int32_array *v87; // x8
  BattleData_o *v88; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v90; // x1
  SkillLvEntity_o *v91; // x0
  __int64 v92; // x1
  SkillLvEntity_o *v93; // x29
  BattleData_o *v94; // x0
  _BOOL8 v95; // x0
  __int64 v96; // x1
  BattleLogic_o *v97; // x0
  int32_t v98; // w23
  __int64 v99; // x0
  __int64 v100; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v104; // x0
  __int64 v105; // x1
  System_Collections_ICollection_o *v106; // x0
  __int64 v107; // x1
  BattleLogicTask_array *v108; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v110; // x0
  BattleLogic_o *v111; // x0
  __int64 v112; // x1
  BattleData_o *v113; // x0
  int32_t v114; // w23
  Il2CppObject *v115; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v117; // x1
  BattleServantData_o *v118; // x25
  BattleBuffData_CheckIndividualitiesData_o *v119; // x24
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x24
  int v121; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v123; // x26
  BattleSkillInfoData_o *v124; // x25
  __int64 v125; // x0
  __int64 v126; // x1
  struct System_Int32_array *v127; // x8
  __int64 v128; // x0
  __int64 v129; // x1
  struct System_Int32_array *v130; // x8
  BattleData_o *v131; // x0
  BattleServantData_o *v132; // x27
  __int64 v133; // x1
  SkillLvEntity_o *v134; // x0
  __int64 v135; // x1
  SkillLvEntity_o *v136; // x28
  BattleData_o *v137; // x0
  _BOOL8 v138; // x0
  __int64 v139; // x1
  BattleLogic_o *v140; // x0
  int32_t v141; // w28
  __int64 v142; // x0
  __int64 v143; // x1
  System_Int32_array *v144; // x26
  bool v145; // w27
  BattleLogicSkill_o *v146; // x28
  System_Int32_array *v147; // x0
  __int64 v148; // x1
  BattleLogicTask_array *v149; // x1
  BattleLogic_o *v150; // x0
  struct BattleData_o *v151; // x8
  BattleActionData_o *v152; // x1
  const MethodInfo *v154; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v155; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v156; // [xsp+18h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+20h] [xbp-D0h]
  char v158; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v159; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v160; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v161; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4BDF2AC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass35_0__createEndTurnPlayer_b__0__);
    sub_1C21E38(&BattleLogicNomal___c__DisplayClass35_0_TypeInfo);
    sub_1C21E38(&StringLiteral_8913/*"MOTION_PLAYER_TURN_END"*/);
    byte_4BDF2AC = 1;
  }
  entity = 0LL;
  memset(&v161, 0, sizeof(v161));
  v4 = sub_1C22084(BattleLogicNomal___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_215;
  *(_QWORD *)(v4 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  BattleLogicNomal__SetNextTargetId(this, v13);
  actiondata = (BattleActionData_o *)sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v4 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_215;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_215;
  BattleActionData__setStateField(actiondata, 0LL);
  v15 = StringLiteral_8913/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8913/*"MOTION_PLAYER_TURN_END"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&actiondata->fields.motionname, v15, v16, v17, v18, v19, v20, v21);
  v156 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v156,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v155 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v155,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v159 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)QuestIndividualities, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v31 = *(_DWORD *)(Instance + 24);
  v32 = Instance;
  if ( v31 >= 1 )
  {
    v158 = 0;
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= v31 )
        goto LABEL_220;
      v34 = v32 + 8LL * (int)v33;
      v36 = *(_QWORD *)(v34 + 32);
      v35 = (__int64 *)(v34 + 32);
      Instance = v36;
      if ( !v36 )
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
          v37 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v37 = Instance & 1;
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_220;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v4 + 24),
                     this->fields.logic,
                     v37,
                     actiondata,
                     0LL);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_220;
        v38 = Instance;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_215;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_220;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          v39 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v33 >= *(_DWORD *)(v32 + 24) )
              goto LABEL_220;
            Instance = (__int64)v155;
            if ( !*v35 || !v155 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v155,
              *(_DWORD *)(*v35 + 24),
              v39,
              (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_220;
        if ( !*v35 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v35 + 784);
        if ( !Instance )
          goto LABEL_215;
        v158 |= v38;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v33 >= *(_DWORD *)(v32 + 24) )
        goto LABEL_220;
      Instance = *v35;
      if ( !*v35 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 540) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_220;
        v40 = (Il2CppObject *)Instance;
        Instance = *v35;
        if ( !*v35 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v33 >= *(_DWORD *)(v32 + 24) )
            goto LABEL_220;
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v40 )
              goto LABEL_215;
            if ( v40[1].monitor )
            {
              if ( v33 >= *(_DWORD *)(v32 + 24) )
                goto LABEL_220;
              Instance = (__int64)v156;
              if ( !*v35 || !v156 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v156,
                *(_DWORD *)(*v35 + 24),
                v40,
                (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v33 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_220;
        if ( !*v35 )
          goto LABEL_215;
        if ( !v30 )
          goto LABEL_215;
        v6 = *(unsigned int *)(*v35 + 24);
        items = v30->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v30,
            v6,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v30->fields._size = size + 1;
          items->m_Items[size + 1] = v6;
        }
        if ( !v40 )
          goto LABEL_215;
        monitor = (int)v40[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_77:
      v31 = *(_DWORD *)(v32 + 24);
      if ( (int)++v33 >= v31 )
        goto LABEL_80;
    }
    v45 = 0;
    while ( v45 < monitor )
    {
      v46 = &v40->klass + (int)v45;
      v49 = v46[4];
      v48 = (char *)(v46 + 4);
      v47 = v49;
      if ( !v49 || !v14 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v14,
                   &entity,
                   (int32_t)v47->_1.name,
                   (const MethodInfo_325BE14 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v51 = logic->fields.data;
          if ( !v51 )
            goto LABEL_215;
          if ( v45 >= LODWORD(v40[1].monitor) )
            break;
          if ( !*(_QWORD *)v48 )
            goto LABEL_215;
          v52 = *(_DWORD *)(*(_QWORD *)v48 + 28LL);
          if ( v51->fields.endMasterSkillTurnBuffValue <= v52 )
            v51->fields.endMasterSkillTurnBuffValue = v52;
        }
      }
      monitor = (int)v40[1].monitor;
      if ( (int)++v45 >= monitor )
        goto LABEL_77;
    }
LABEL_220:
    sub_1C2209C(Instance, v6);
  }
  v158 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v53 = this->fields.data;
  if ( !v53 )
    goto LABEL_215;
  v54 = Instance;
  if ( !v53->fields.leaderDown || !v53->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_215;
    v55 = *(_DWORD *)(Instance + 24);
    if ( v55 >= 1 )
    {
      v56 = 0;
      while ( v56 < v55 )
      {
        v57 = v54 + 8LL * (int)v56;
        v59 = *(_QWORD *)(v57 + 32);
        v58 = (__int64 *)(v57 + 32);
        Instance = v59;
        if ( !v59 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 540) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v4 + 16),
                                *(System_Int32_array **)(v4 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v56 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_220;
          v60 = (Il2CppObject *)Instance;
          Instance = *v58;
          if ( !*v58 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v56 >= *(_DWORD *)(v54 + 24) )
              goto LABEL_220;
            Instance = *v58;
            if ( !*v58 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v60 )
                goto LABEL_215;
              if ( v60[1].monitor )
              {
                if ( v56 >= *(_DWORD *)(v54 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v156;
                if ( !*v58 || !v156 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v156,
                  *(_DWORD *)(*v58 + 24),
                  v60,
                  (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v56 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_220;
          if ( !*v58 )
            goto LABEL_215;
          if ( !v30 )
            goto LABEL_215;
          v6 = *(unsigned int *)(*v58 + 24);
          v61 = v30->fields._items;
          v62 = Method_System_Collections_Generic_List_int__Add__;
          ++v30->fields._version;
          if ( !v61 )
            goto LABEL_215;
          v63 = v30->fields._size;
          if ( (unsigned int)v63 >= v61->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v30,
              v6,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v30->fields._size = v63 + 1;
            v61->m_Items[v63 + 1] = v6;
          }
        }
        v55 = *(_DWORD *)(v54 + 24);
        if ( (int)++v56 >= v55 )
          goto LABEL_110;
      }
      goto LABEL_220;
    }
LABEL_110:
    v53 = this->fields.data;
    if ( !v53 )
      goto LABEL_215;
  }
  if ( !v30 )
    goto LABEL_215;
  battleEvent = v53->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v30,
                        (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v4 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v65 = this->fields.data;
  if ( !v65 )
    goto LABEL_215;
  perf = v65->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v65->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v67 = this->fields.data;
  if ( !v67 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v67->fields.aiNpcDataList;
  v69 = (System_Action_object__o *)sub_1C22084(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v69,
    (Il2CppObject *)v4,
    Method_BattleLogicNomal___c__DisplayClass35_0__createEndTurnPlayer_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v69,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v70 = this->fields.data;
  if ( !v70 )
    goto LABEL_215;
  Instance = (__int64)v70->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v4 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v4 + 24), v71);
  v72 = this->fields.data;
  if ( !v72 )
    goto LABEL_215;
  Instance = (__int64)v155;
  v72->fields.currentTurn = 1;
  if ( !v155 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v160,
    v155,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v161 = v160;
  while ( 1 )
  {
    v73 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v161,
                            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v73 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v161.fields._current.fields.value;
    if ( !v161.fields._current.fields.value )
      sub_1C22094(v73, v74);
    max_length = (int)v161.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v161.fields._current.fields.key;
      v78 = 0;
      v79 = 1;
LABEL_127:
      if ( v78 >= max_length )
        sub_1C2209C(v73, v74);
      v80 = value->m_Items[v78];
      if ( !v80 )
        sub_1C22094(v73, v74);
      if ( v80->fields._isRemove )
        goto LABEL_163;
      if ( !v14 )
        sub_1C22094(v73, v74);
      v73 = DataMasterBase_object__object__int___GetEntity(
              v14,
              v80->fields.buffId,
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v73 )
        goto LABEL_163;
      v81 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v81, 0LL);
      if ( !v81 )
        sub_1C22094(v82, v83);
      v81->fields.svtUniqueId = key;
      vals = v80->fields.vals;
      if ( !vals )
        sub_1C22094(v82, v83);
      if ( !vals->max_length )
        sub_1C2209C(v82, v83);
      v85 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v81->klass->vtable._4_set_skillId.method)(
              v81,
              (unsigned int)vals->m_Items[1],
              v81->klass->vtable._5_get_skillId.methodPtr);
      v87 = v80->fields.vals;
      if ( !v87 )
        sub_1C22094(v85, v86);
      if ( v87->max_length <= 1 )
        sub_1C2209C(v85, v86);
      v81->fields.skilllv = v87->m_Items[2];
      v88 = this->fields.data;
      if ( !v88 )
        sub_1C22094(0LL, v86);
      ServantData = BattleData__getServantData(v88, v81->fields.svtUniqueId, 0LL);
      v90 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v81->klass->vtable._5_get_skillId.method)(
              v81,
              v81->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v159 )
        sub_1C22094(0LL, v90);
      v91 = SkillLvMaster__GetEntity(v159, v90, v81->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1C22094(v91, v92);
      v93 = v91;
      v94 = this->fields.data;
      if ( !v94 )
        sub_1C22094(0LL, v92);
      v95 = BattleData__checkAliveOther(v94, ServantData->fields.uniqueId, 0LL);
      if ( !v95 )
      {
        if ( !v93 )
          sub_1C22094(v95, v96);
        v97 = this->fields.logic;
        if ( !v97 )
          sub_1C22094(0LL, v96);
        v73 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v97, v93->fields.funcId, 0LL);
        if ( ((unsigned __int8)v73 & 1) == 0 )
          goto LABEL_163;
      }
      v98 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v80, 0LL);
      if ( (v98 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v81->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v81, 0LL);
      }
      else
      {
        v99 = sub_1C21EE0(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v99;
        if ( !v99 )
          sub_1C22094(0LL, v100);
        if ( !*(_DWORD *)(v99 + 24) )
          sub_1C2209C(v99, v100);
        exists = 0;
        *(_DWORD *)(v99 + 32) = v98;
      }
      logicskill = this->fields.logicskill;
      v104 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v104 )
        sub_1C22094(0LL, v105);
      if ( !v104->max_length )
        sub_1C2209C(v104, v105);
      v104->m_Items[1] = key;
      if ( !logicskill )
        sub_1C22094(v104, v105);
      v106 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v81,
                                                   v104,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v154);
      v108 = (BattleLogicTask_array *)v106;
      if ( (v79 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v106, 0LL);
        if ( IsNullOrEmpty )
        {
          v79 = 1;
          goto LABEL_161;
        }
        if ( !v108 )
          sub_1C22094(IsNullOrEmpty, v107);
        if ( !v108->max_length )
          sub_1C2209C(IsNullOrEmpty, v107);
        v110 = v108->m_Items[0];
        if ( !v110 )
          sub_1C22094(0LL, v107);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v110, ServantData, value, 0LL);
      }
      v79 = 0;
LABEL_161:
      v111 = this->fields.logic;
      if ( !v111 )
        sub_1C22094(0LL, v107);
      BattleLogic__addBattleLogicTask(v111, v108, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v78 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v161,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v156;
  if ( !v156 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v160,
    v156,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v161 = v160;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v161,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v113 = this->fields.data;
    if ( !v113 )
      sub_1C22094(0LL, v112);
    v114 = (int32_t)v161.fields._current.fields.key;
    v115 = v161.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v113, (int32_t)v161.fields._current.fields.key, 0LL);
    v118 = isEndAct;
    if ( isEndAct )
    {
      v119 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C22084(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43953980(v119, v118, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v119 )
        sub_1C22094(isEndAct, v117);
      selfConcatSvtIndividualities_k__BackingField = v119->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v115 )
LABEL_250:
        sub_1C22094(isEndAct, v117);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0LL;
      if ( !v115 )
        goto LABEL_250;
    }
    v121 = (int)v115[1].monitor;
    if ( v121 >= 1 )
    {
      for ( i = 0; i < v121; ++i )
      {
        if ( i >= (unsigned int)v121 )
          sub_1C2209C(isEndAct, v117);
        v123 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v115[2].klass + i);
        if ( !v123 )
          sub_1C22094(isEndAct, v117);
        if ( !v123->fields._isRemove )
        {
          if ( !v14 )
            sub_1C22094(isEndAct, v117);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v14,
                                              v123->fields.buffId,
                                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v123, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v124 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v124, 0LL);
                if ( !v124 )
                  sub_1C22094(v125, v126);
                v124->fields.svtUniqueId = v114;
                v127 = v123->fields.vals;
                if ( !v127 )
                  sub_1C22094(v125, v126);
                if ( !v127->max_length )
                  sub_1C2209C(v125, v126);
                v128 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v124->klass->vtable._4_set_skillId.method)(
                         v124,
                         (unsigned int)v127->m_Items[1],
                         v124->klass->vtable._5_get_skillId.methodPtr);
                v130 = v123->fields.vals;
                if ( !v130 )
                  sub_1C22094(v128, v129);
                if ( v130->max_length <= 1 )
                  sub_1C2209C(v128, v129);
                v124->fields.skilllv = v130->m_Items[2];
                v131 = this->fields.data;
                if ( !v131 )
                  sub_1C22094(0LL, v129);
                v132 = BattleData__getServantData(v131, v124->fields.svtUniqueId, 0LL);
                v133 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v124->klass->vtable._5_get_skillId.method)(
                         v124,
                         v124->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v159 )
                  sub_1C22094(0LL, v133);
                v134 = SkillLvMaster__GetEntity(v159, v133, v124->fields.skilllv, 0LL);
                if ( !v132 )
                  sub_1C22094(v134, v135);
                v136 = v134;
                v137 = this->fields.data;
                if ( !v137 )
                  sub_1C22094(0LL, v135);
                v138 = BattleData__checkAliveOther(v137, v132->fields.uniqueId, 0LL);
                if ( v138 )
                  goto LABEL_198;
                if ( !v136 )
                  sub_1C22094(v138, v139);
                v140 = this->fields.logic;
                if ( !v140 )
                  sub_1C22094(0LL, v139);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v140, v136->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v141 = BattleServantData__GetRevengeIdCheckOpponentOnly(v132, v123, 0LL);
                  if ( (v141 & 0x80000000) != 0 )
                  {
                    v144 = Target__getTargetIds(this->fields.data, v124->fields.svtUniqueId, -1, v114, 13, 0LL, 0LL);
                    v145 = BattleSkillInfoData__ExistsNoTargetNoActionType(v124, 0LL);
                  }
                  else
                  {
                    v142 = sub_1C21EE0(int___TypeInfo, 1LL);
                    v144 = (System_Int32_array *)v142;
                    if ( !v142 )
                      sub_1C22094(0LL, v143);
                    if ( !*(_DWORD *)(v142 + 24) )
                      sub_1C2209C(v142, v143);
                    v145 = 0;
                    *(_DWORD *)(v142 + 32) = v141;
                  }
                  v146 = this->fields.logicskill;
                  v147 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
                  if ( !v147 )
                    sub_1C22094(0LL, v148);
                  if ( !v147->max_length )
                    sub_1C2209C(v147, v148);
                  v147->m_Items[1] = v114;
                  if ( !v146 )
                    sub_1C22094(v147, v148);
                  v149 = BattleLogicSkill__taskSkill(v146, v124, v147, v144, 1, v145, 0, 0, 0, v154);
                  v150 = this->fields.logic;
                  if ( !v150 )
                    sub_1C22094(0LL, v149);
                  BattleLogic__addBattleLogicTask(v150, v149, 0LL);
                }
              }
            }
          }
        }
        v121 = (int)v115[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v161,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v151 = this->fields.data;
  if ( !v151
    || (Instance = (__int64)v151->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1C22094(Instance, v6);
  }
  if ( (v158 & 1) != 0 )
    v152 = actiondata;
  else
    v152 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v152, actiondata, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o *motionMessage; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UnityEngine_GameObject_o *targetObject; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDF2A9 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    byte_4BDF2A9 = 1;
  }
  v4 = sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_1C22094(v5, v6);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 64), (int64_t)motionName, v8, v9, v10, v11, v12, v13);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 128), (int64_t)motionMessage, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 72), (int64_t)targetObject, v22, v23, v24, v25, v26, v27);
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
    sub_1C22094(this, task);
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftServant(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v4; // x19
  BattleData_o *data; // x21
  BattleServantData_o *v6; // x20
  __int64 v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x1
  BattleActionData_ShiftServant_o *v15; // x22

  v4 = this;
  if ( (byte_4BDF2B3 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicNomal_o *)sub_1C21E38(&StringLiteral_8917/*"MOTION_SHIFT"*/);
    byte_4BDF2B3 = 1;
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
  v6 = (BattleServantData_o *)this;
  v7 = 0LL;
  if ( BattleServantData__isShiftReady((BattleServantData_o *)this, 0LL) )
  {
    v7 = sub_1C22084(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 32) = v6->fields.uniqueId;
      v14 = StringLiteral_8917/*"MOTION_SHIFT"*/;
      *(_QWORD *)(v7 + 64) = StringLiteral_8917/*"MOTION_SHIFT"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 64), v14, v8, v9, v10, v11, v12, v13);
      v15 = (BattleActionData_ShiftServant_o *)sub_1C22084(BattleActionData_ShiftServant_TypeInfo);
      BattleActionData_ShiftServant___ctor(v15, 0, 0LL);
      if ( v15 )
      {
        BattleActionData_ShiftServant__setBeforeSvtData(v15, v6, 0LL);
        BattleServantData__setShiftServant(v6, v4->fields.data, 1, 0LL);
        BattleServantData__SetIsBattleShift(v6, 1, 0LL);
        BattleActionData_ShiftServant__setCheckSvtData(v15, v6, 0LL);
        BattleActionData__setShiftServant((BattleActionData_o *)v7, v15, 0LL);
        this = (BattleLogicNomal_o *)v4->fields.logic;
        if ( this )
        {
          BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, v6->fields.uniqueId, 1, 0, 0LL);
          return (BattleActionData_o *)v7;
        }
      }
    }
LABEL_12:
    sub_1C22094(this, task);
  }
  return (BattleActionData_o *)v7;
}


BattleActionData_o *__fastcall BattleLogicNomal__createStartEnemyTurn(
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

  if ( (byte_4BDF2AA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_11282/*"RESET_CAMERA_BAT"*/);
    byte_4BDF2AA = 1;
  }
  StartTurn = BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0LL;
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
    StartTurn = (BattleActionData_o *)UnityEngine_Object__op_Inequality(actioncamera, 0LL, 0LL);
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
              (System_String_o *)StringLiteral_11282/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v8;
          }
        }
      }
LABEL_18:
      sub_1C22094(StartTurn, v6);
    }
  }
  return v8;
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
        sub_1C2209C(data, task);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 540) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1C22094(data, task);
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
    sub_1C22094(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1C2209C(this, svtList);
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
    sub_1C2209C(data, *(_QWORD *)&uniqueId);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1C22094(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C22094(this, method);
  return data->fields.battleEvent;
}


void __fastcall BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDF29D & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C21E38(&BattleLogic_reactionFunction_TypeInfo);
    byte_4BDF29D = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_1C22094(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleData_o *ShiftableUniqueId; // x0
  const MethodInfo *v7; // x1
  int32_t ActorId; // w0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *v10; // x19
  BattleServantData_o *v11; // x22
  BattleLogicTask_o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x2
  __int64 v25; // x22
  const MethodInfo *v26; // x2
  int64_t v27; // x23
  System_Func_object__bool__o *v28; // x24
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x2
  struct BattleLogic_o *logic; // x8
  struct BattleLogicReaction_o *logicReaction; // x8
  BattleLogicTask_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  struct BattleLogic_o *v55; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0

  if ( (byte_4BDF2B4 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&ReactTaskTargetFilter_TypeInfo);
    sub_1C21E38(&Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__);
    sub_1C21E38(&BattleLogicNomal___c__DisplayClass48_0_TypeInfo);
    byte_4BDF2B4 = 1;
  }
  v5 = sub_1C22084(BattleLogicNomal___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !task )
    goto LABEL_37;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  ShiftableUniqueId = (BattleData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v9);
  if ( !v5 )
    goto LABEL_37;
  *(_DWORD *)(v5 + 16) = (_DWORD)ShiftableUniqueId;
  if ( !(_DWORD)ShiftableUniqueId )
    return this->fields.zeroTask;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  ShiftableUniqueId = this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)BattleData__getServantData(ShiftableUniqueId, *(_DWORD *)(v5 + 16), 0LL);
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  v11 = (BattleServantData_o *)ShiftableUniqueId;
  ShiftableUniqueId = (BattleData_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                        (BattleServantData_o *)ShiftableUniqueId,
                                        0LL);
  if ( !v11->fields.buffData )
    goto LABEL_37;
  if ( !BattleBuffData__IsShiftGuts(
          v11->fields.buffData,
          v11,
          (BattleBuffData_CheckIndividualitiesData_array *)ShiftableUniqueId,
          0LL) )
  {
    v25 = sub_1C22084(BeforeShiftServantReactTaskCreator_TypeInfo);
    ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)v25, 24, v26);
    if ( v25 )
    {
      ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v25, v7);
      v27 = sub_1C22084(ReactTaskTargetFilter_TypeInfo);
      System_Object___ctor((Il2CppObject *)v27, 0LL);
      v28 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v28,
        (Il2CppObject *)v5,
        Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__,
        0LL);
      if ( v27 )
      {
        *(_QWORD *)(v27 + 16) = v28;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v28, v29, v30, v31, v32, v33, v34);
        *(_QWORD *)(v25 + 24) = v27;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 24), v27, v35, v36, v37, v38, v39, v40);
        logic = this->fields.logic;
        if ( logic )
        {
          logicReaction = logic->fields.logicReaction;
          if ( logicReaction )
          {
            ShiftableUniqueId = (BattleData_o *)ServantReactTaskCreator__CreateTasks(
                                                  (ServantReactTaskCreator_o *)v25,
                                                  logicReaction->fields.logic,
                                                  v41);
            if ( v10 )
            {
              System_Collections_Generic_List_object___AddRange(
                v10,
                (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
                (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              v44 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v44, 0LL);
              if ( v44 )
              {
                v44->fields.actiontype = 37;
                BattleLogicTask__setActor(v44, 3, *(_DWORD *)(v5 + 16), 0LL);
                items = v10->fields._items;
                v52 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v10->fields._version;
                if ( items )
                {
                  size = v10->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v44,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v54 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v54[4] = (Il2CppClass *)v44;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v44, v45, v46, v47, v48, v49, v50);
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
    sub_1C22094(ShiftableUniqueId, v7);
  }
  v12 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_37;
  v12->fields.actiontype = 62;
  BattleLogicTask__setActor(v12, 3, *(_DWORD *)(v5 + 16), 0LL);
  if ( !v10 )
    goto LABEL_37;
  v19 = v10->fields._items;
  v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v19 )
    goto LABEL_37;
  v21 = v10->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v12,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    v10->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v12, v13, v14, v15, v16, v17, v18);
  }
  v55 = this->fields.logic;
  if ( !v55 )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)v55->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                              *(_DWORD *)(v5 + 16),
                                                              v23);
  if ( TaskGuts )
    System_Collections_Generic_List_object___AddRange(
      v10,
      TaskGuts,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_31:
  v57 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v57, 0LL);
  if ( !v57 )
    goto LABEL_37;
  v57->fields.actiontype = 36;
  BattleLogicTask__setActor(v57, 3, *(_DWORD *)(v5 + 16), 0LL);
  v64 = v10->fields._items;
  v65 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v64 )
    goto LABEL_37;
  v66 = v10->fields._size;
  if ( (unsigned int)v66 >= v64->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v57,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = &v64->obj.klass + v66;
    v10->fields._size = v66 + 1;
    v67[4] = (Il2CppClass *)v57;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v57, v58, v59, v60, v61, v62, v63);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskAddCommandAttack(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BDF29F & 1) == 0 )
  {
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF29F = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_26;
  battleEvent = (BattleData_o *)v9->fields.battleEvent;
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
  v11 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v11 = BattleDataDefine_TypeInfo;
  }
  COMMAND_CARD_NUM_TO_SELECT = v11->static_fields->COMMAND_CARD_NUM_TO_SELECT;
  this->fields.commandIndex = COMMAND_CARD_NUM_TO_SELECT;
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v13 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v13->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v14 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v14->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v14, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1C22094(battleEvent, v8);
  }
  v15 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_26;
  BattleLogicTask__setActor(v15, 2, v13->fields.uniqueId, 0LL);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v15, 0LL);
  BattleLogicTask__setAddAttackCommand(v15, data->fields.combodata, v13, 0LL);
  v15->fields.isCanCounterTask = 1;
  if ( !v6 )
    goto LABEL_26;
  items = v6->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v15,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v15;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  BattleLogicTask_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDF2B0 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2B0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, 0LL);
    if ( !v8 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddEnemy(v8, 0LL);
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v5 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1C22094(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, 0LL);
    if ( !v8 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v8, 0LL);
  }
  if ( !v5 )
    goto LABEL_14;
  items = v5->fields._items;
  v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDF2A2 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2A2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v8 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v8, 0LL),
        !v8)
    || (BattleLogicTask__setSystem(v8, 0LL), !v5)
    || (items = v5->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C22094(logic, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C22094(this, *(_QWORD *)&ltype);
  }
  return v5->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCommandAttack(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4BDF29E & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF29E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)v10->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_18;
  if ( ltype == 3 )
    v11 = 2;
  else
    v11 = ltype == 2;
  this->fields.commandIndex = v11;
  if ( !data )
    goto LABEL_37;
  battleEvent = BattleData__getSelectCommand(data, v11, 0LL);
  if ( !battleEvent )
    goto LABEL_37;
  v12 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_18;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_37;
  ServantData = BattleData__getServantData((BattleData_o *)battleEvent, v12->fields.uniqueId, 0LL);
  battleEvent = (BattleCommandData_o *)BattleLogicNomal__IsEnableToAttack(ServantData, v12, v14);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
  {
LABEL_18:
    if ( v7 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v7,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v15 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_37;
  BattleLogicTask__setActionCommand(v15, data->fields.combodata, v12, v11, 0LL);
  if ( BattleData__isTutorial(data, 0LL) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
      BattleCommandData__checkCriticalRate(v12, 0, 0LL);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v12, 0LL);
  }
  BattleLogicTask__setActor(v15, 2, v12->fields.uniqueId, 0LL);
  v15->fields.isCanCounterTask = 1;
  if ( v12->fields.treasureDvc < 1 )
  {
    BattleData__setTDChain(data, 0, 0LL);
    battleEvent = (BattleCommandData_o *)this->fields.logictarget;
    if ( battleEvent )
    {
      battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                             (BattleLogicTarget_o *)battleEvent,
                                             v15,
                                             0LL);
      if ( v7 )
      {
        items = v7->fields._items;
        v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v15,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v15;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v15, v28, v29, v30, v31, v32, v33);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1C22094(battleEvent, v9);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_37;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
  if ( !ServantData )
    goto LABEL_37;
  BattleLogicTask__setActor(v15, 2, ServantData->fields.uniqueId, 0LL);
  BattleLogicTask__setActionCommand(v15, data->fields.combodata, v12, v11, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL, 0LL);
  BattleLogicTask__setActionTreasureDvc(v15, TreasureDvcId, 1, 0LL);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         v15,
                                         0LL);
  if ( !v7 )
    goto LABEL_37;
  v24 = v7->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v7->fields._version;
  if ( !v24 )
    goto LABEL_37;
  v26 = v7->fields._size;
  if ( (unsigned int)v26 >= v24->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v15,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v7->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v15;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v15, v18, v19, v20, v21, v22, v23);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v10; // x23
  __int64 Instance; // x0
  __int64 wasAttackTargetId; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v14; // x8
  __int64 v15; // x22
  __int64 v16; // x8
  unsigned __int64 v17; // x26
  int v18; // w9
  BattleServantData_o *v19; // x27
  BattleServantData_o *v20; // x20
  System_Collections_Generic_IEnumerable_T__o *v21; // x29
  void *monitor; // x8
  bool v23; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x25
  __int64 v25; // x28
  BattleBuffData_BuffData_o *v26; // x21
  BattleLogicTask_o *v27; // x20
  int32_t counterLv; // w2
  __int64 v29; // x25
  __int64 v30; // x24
  int32_t uniqueId; // w8
  __int64 v32; // x9
  System_Int32_array *v33; // x25
  System_String_o *CounterMessage; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  __int64 v45; // x9
  BattleLogicNomal___c_c *v46; // x0
  System_Action_object__o *_9__18_0; // x20
  Il2CppObject *v48; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct BattleLogic_o *logic; // x8
  _BOOL4 v58; // [xsp+4h] [xbp-9Ch]
  BattleLogicNomal_o *v59; // [xsp+8h] [xbp-98h]
  SkillLvMaster_o *v60; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v61; // [xsp+18h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // [xsp+20h] [xbp-80h]
  char v64; // [xsp+38h] [xbp-68h]
  int32_t type; // [xsp+3Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4BDF2A0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77557088);
    sub_1C21E38(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__);
    sub_1C21E38(&BattleLogicNomal___c_TypeInfo);
    byte_4BDF2A0 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BuffMaster___);
  v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !data )
    goto LABEL_76;
  v14 = 296LL;
  if ( isEnemy )
    v14 = 304LL;
  v15 = *(__int64 *)((char *)&data->klass + v14);
  if ( !v15 )
    goto LABEL_76;
  v16 = *(_QWORD *)(v15 + 24);
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    if ( isEnemy )
      v18 = 3;
    else
      v18 = 2;
    type = v18;
    do
    {
      if ( v17 >= (unsigned int)v16 )
LABEL_77:
        sub_1C2209C(Instance, wasAttackTargetId);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v15 + 4 * v17 + 32), 0LL);
      if ( Instance )
      {
        v19 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v19, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v19->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v20 = (BattleServantData_o *)Instance;
                if ( v19->fields.isEnemy != *(unsigned __int8 *)(Instance + 479) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v20, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v19->fields.buffData;
                    if ( !Instance )
                      goto LABEL_76;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v19,
                                          v20,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_76;
                    v21 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v59 = this;
                      v60 = (SkillLvMaster_o *)MasterData_object;
                      v58 = v6;
                      v61 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_55610516(
                        v61,
                        v21,
                        (const MethodInfo_3508C94 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77557088);
                      monitor = v21[1].monitor;
                      v23 = isSkillCounter;
                      v24 = v62;
                      if ( (int)monitor >= 1 )
                      {
                        v25 = 4LL;
                        v64 = 1;
                        do
                        {
                          if ( v25 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_77;
                          v26 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v21->klass + v25);
                          if ( !v23 )
                            goto LABEL_80;
                          if ( !v26 )
                            goto LABEL_76;
                          if ( v26->fields.isSkillReaction )
                          {
LABEL_80:
                            v27 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor(v27, 0LL);
                            if ( !v27 )
                              goto LABEL_76;
                            BattleLogicTask__setActor(v27, type, v19->fields.uniqueId, 0LL);
                            BattleLogicTask__setTarget(v27, v19->fields.wasAttackTargetId, 0LL);
                            Instance = (__int64)v19->fields.buffData;
                            if ( !Instance )
                              goto LABEL_76;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v26, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v19->fields.overkillTargetId = -1;
                              if ( !v26 )
                                goto LABEL_76;
                              wasAttackTargetId = (unsigned int)v26->fields.counterId;
                              counterLv = v26->fields.counterLv;
                              if ( v26->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v27,
                                  wasAttackTargetId,
                                  counterLv,
                                  v26->fields.counterOc,
                                  1,
                                  0LL);
                                if ( !v24 )
                                  goto LABEL_76;
                              }
                              else
                              {
                                Instance = (__int64)v60;
                                if ( !v60 )
                                  goto LABEL_76;
                                Instance = (__int64)SkillLvMaster__GetEntity(v60, wasAttackTargetId, counterLv, 0LL);
                                if ( !Instance )
                                {
                                  v23 = isSkillCounter;
                                  v24 = v62;
                                  goto LABEL_58;
                                }
                                v29 = Instance;
                                v30 = sub_1C22084(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v30, 0LL);
                                if ( !v30 )
                                  goto LABEL_76;
                                uniqueId = v19->fields.uniqueId;
                                v32 = *(_QWORD *)v30;
                                *(_QWORD *)(v30 + 16) = 20LL;
                                *(_DWORD *)(v30 + 24) = uniqueId;
                                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v32 + 376))(
                                  v30,
                                  *(unsigned int *)(v29 + 16),
                                  *(_QWORD *)(v32 + 384));
                                *(_DWORD *)(v30 + 36) = *(_DWORD *)(v29 + 20);
                                Instance = sub_1C21EE0(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                v33 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v19->fields.wasAttackTargetId;
                                Instance = sub_1C21EE0(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v19->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  v27,
                                  (BattleSkillInfoData_o *)v30,
                                  v33,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  0LL);
                                v23 = isSkillCounter;
                                v24 = v62;
                                if ( !v62 )
                                  goto LABEL_76;
                              }
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v24,
                                                    v26->fields.buffId,
                                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_76;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0LL);
                              BattleLogicTask__setMessage(v27, CounterMessage, 2, 0LL);
                              v27->fields.isCounter = 1;
                              if ( (v64 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v27,
                                  v19,
                                  (BattleBuffData_BuffData_array *)v21,
                                  0LL);
                              if ( !v10 )
                                goto LABEL_76;
                              items = v10->fields._items;
                              v42 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_76;
                              size = v10->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v27,
                                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v44 = &items->obj.klass + size;
                                v10->fields._size = size + 1;
                                v44[4] = (Il2CppClass *)v27;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)(v44 + 4),
                                  (int64_t)v27,
                                  v35,
                                  v36,
                                  v37,
                                  v38,
                                  v39,
                                  v40);
                              }
                              Instance = (__int64)v61;
                              if ( !v61 )
                                goto LABEL_76;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v61,
                                           (Il2CppObject *)v26,
                                           (const MethodInfo_3509464 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v64 = 0;
                            }
                          }
LABEL_58:
                          LODWORD(monitor) = v21[1].monitor;
                          v45 = v25 - 3;
                          ++v25;
                        }
                        while ( v45 < (int)monitor );
                      }
                      v46 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v46 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v59;
                      MasterData_object = (Il2CppObject *)v60;
                      v6 = v58;
                      _9__18_0 = (System_Action_object__o *)v46->static_fields->__9__18_0;
                      if ( !_9__18_0 )
                      {
                        if ( !v46->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v46);
                          v46 = BattleLogicNomal___c_TypeInfo;
                        }
                        v48 = (Il2CppObject *)v46->static_fields->__9;
                        _9__18_0 = (System_Action_object__o *)sub_1C22084(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__18_0,
                          v48,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__18_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__18_0;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
                          (int64_t)_9__18_0,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v61,
                        (System_Action_T__o *)_9__18_0,
                        (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    goto LABEL_76;
  if ( v10->fields._size < 1 )
    goto LABEL_74;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_76:
    sub_1C22094(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_74:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_76;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v10,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v8; // x19
  int64_t v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4BDF2A7 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2A7 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v9 + 128) = gameObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 128), (int64_t)gameObject, v13, v14, v15, v16, v17, v18);
  if ( !svtData )
    goto LABEL_15;
  v19 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v9, v19, svtData->fields.uniqueId, 0LL);
  if ( !v8
    || (items = v8->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C22094(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v9;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), v9, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskPlaySubEntryMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        UnityEngine_Transform_o *Tr,
        bool isTactical,
        const MethodInfo *method)
{
  __int64 v9; // x25
  __int64 v10; // x26
  System_Collections_Generic_List_object__o *v11; // x19
  int64_t v12; // x21
  BattleEntity_o *battle_ent; // x0
  __int64 v14; // x1
  System_String_o *v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  bool v25; // w23
  System_String_o *v26; // x0
  BattleData_o *v27; // x8
  System_String_o *v28; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v30; // x2
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  int32_t uniqueId; // w2
  System_String_o *v37; // x20
  BattleLogicTask_o *v38; // x0
  System_String_o *v39; // x1
  struct BattleData_o *v40; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v42; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v44; // x2
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  System_String_o *v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  int v61; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDF2A8 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3039/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_1C21E38(&StringLiteral_8909/*"MOTION_ENTRY"*/);
    sub_1C21E38(&StringLiteral_3037/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_1C21E38(&StringLiteral_3038/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_1C21E38(&StringLiteral_8910/*"MOTION_ENTRY_TAC"*/);
    byte_4BDF2A8 = 1;
  }
  v9 = StringLiteral_8910/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_8909/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  v15 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v15, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v12 + 128) = gameObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 128), (int64_t)gameObject, v17, v18, v19, v20, v21, v22);
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
          v25 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3038/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
LABEL_23:
              v49 = v26;
              BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, 0LL);
              v38 = (BattleLogicTask_o *)v12;
              v39 = v49;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v25 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3037/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
          v40 = this->fields.data;
          if ( !v40 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v40->fields._EnemyCountStartValue_k__BackingField;
          v42 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v40, 0LL);
          v61 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v44)
              + EnemyCountStartValue_k__BackingField;
          v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v45, v46, v47);
          v26 = System_String__Format(v42, v48, 0LL);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1C22094(battle_ent, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3039/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_30;
  v28 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v27, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v30);
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember, v31, v32, v33);
  v35 = System_String__Format(v28, v34, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v37 = v35;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, 0LL);
  v38 = (BattleLogicTask_o *)v12;
  v39 = v37;
LABEL_24:
  BattleLogicTask__setMessage(v38, v39, 1, 0LL);
  if ( !v11 )
    goto LABEL_30;
  items = v11->fields._items;
  v57 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v59[4] = (Il2CppClass *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), v12, v50, v51, v52, v53, v54, v55);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  struct BattleData_o *data; // x8
  int64_t selectcommandlist; // x1
  _BOOL8 IsEnableToAttack; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v21; // x8
  int v22; // w9
  int32_t _7__wrap5; // w8
  int v24; // w9
  bool result; // w0
  PartyOrganizationUtility_o *p__7__wrap1; // x8
  struct BattleCommandData_array *v27; // x10
  struct BattleCommandData_array *_7__wrap1; // t1
  int max_length; // w11
  BattleCommandData_o *v30; // x19
  BattleData_o *v31; // x0
  BattleServantData_o *ServantData; // x20
  const MethodInfo *v33; // x2
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v34; // x20
  BattleLogicNomal___c_c *v35; // x0
  System_Func_object__int__o *_9__20_0; // x21
  Il2CppObject *v37; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x0
  __int64 v46; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x0
  __int64 v60; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v61; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v62; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  BattleSkillInfoData_o *v69; // x19
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v71; // x0
  __int64 v72; // x1
  BattleLogicTask_array *v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct BattleLogicTask_array *_7__wrap4; // x10
  il2cpp_array_size_t v81; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  const MethodInfo *v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x1
  const MethodInfo *v95; // [xsp+8h] [xbp-58h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v96; // [xsp+28h] [xbp-38h]

  v96 = this;
  v8 = this;
  if ( (byte_4BDF2BF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1C21E38(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *)sub_1C21E38(&BattleLogicNomal___c_TypeInfo);
    byte_4BDF2BF = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    v8->fields.__1__state = -3;
    v24 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_57;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C22094(this, method);
  data = _4__this->fields.data;
  if ( !data )
    sub_1C22094(this, method);
  selectcommandlist = (int64_t)data->fields.selectcommandlist;
  v8->fields.__7__wrap1 = (struct BattleCommandData_array *)selectcommandlist;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, selectcommandlist, v2, v3, v4, v5, v6, v7);
  v21 = v96;
  v22 = 0;
  for ( v96->fields.__7__wrap2 = 0; ; v96->fields.__7__wrap2 = v22 )
  {
    _7__wrap1 = v21->fields.__7__wrap1;
    p__7__wrap1 = (PartyOrganizationUtility_o *)&v21->fields.__7__wrap1;
    v27 = _7__wrap1;
    if ( !_7__wrap1 )
      sub_1C22094(IsEnableToAttack, v14);
    max_length = v27->max_length;
    if ( v22 >= max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1C21DDC(p__7__wrap1, 0LL, v15, v16, v17, v18, v19, v20);
      return 0;
    }
    if ( v22 >= (unsigned int)max_length )
      sub_1C2209C(IsEnableToAttack, v14);
    if ( !_4__this )
      sub_1C22094(IsEnableToAttack, v14);
    v30 = v27->m_Items[v22];
    if ( !v30 )
      sub_1C22094(IsEnableToAttack, v14);
    v31 = _4__this->fields.data;
    if ( !v31 )
      sub_1C22094(0LL, v14);
    ServantData = BattleData__getServantData(v31, v30->fields.uniqueId, 0LL);
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(ServantData, v30, v33);
    if ( IsEnableToAttack )
      break;
LABEL_69:
    v21 = v96;
    v22 = v96->fields.__7__wrap2 + 1;
  }
  if ( !ServantData )
    sub_1C22094(IsEnableToAttack, v14);
  v34 = BattleServantData__EnumerateConfirmCommandFunctionSkill(ServantData, v30, 0LL);
  v35 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v35 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__int__o *)v35->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleLogicNomal___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__20_0,
      v37,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__20_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
      (int64_t)_9__20_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v47 = v45;
  if ( !v45 )
    sub_1C22094(0LL, v46);
  klass = v45->klass;
  v49 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v49;
      p_offset += 4;
      if ( !v49 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1C73E18(v45, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v52 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v47,
          *(_QWORD *)(p_method + 8));
  if ( !v96 )
    sub_1C22094(v52, v52);
  v96->fields.__7__wrap3 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v52;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v96->fields.__7__wrap3, v52, v53, v54, v55, v56, v57, v58);
  v61 = v96;
  v96->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap3 = v61->fields.__7__wrap3;
    if ( !_7__wrap3 )
      sub_1C22094(v59, v60);
    v83 = _7__wrap3->klass;
    v84 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      v85 = &v83->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v85 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v84;
        v85 += 4;
        if ( !v84 )
          goto LABEL_65;
      }
      v86 = (__int64)&v83->vtable[*v85].method;
    }
    else
    {
LABEL_65:
      v86 = sub_1C73E18(_7__wrap3, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v86)(
            _7__wrap3,
            *(_QWORD *)(v86 + 8)) & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20____m__Finally1(v96, v87);
      v96->fields.__7__wrap3 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v96->fields.__7__wrap3, 0LL, v88, v89, v90, v91, v92, v93);
      goto LABEL_69;
    }
    v62 = v96->fields.__7__wrap3;
    if ( !v62 )
      sub_1C22094(v96, v87);
    v63 = v62->klass;
    v64 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
    {
      v65 = &v63->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v65 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_49;
      }
      v66 = (__int64)&v63->vtable[*v65].method;
    }
    else
    {
LABEL_49:
      v66 = sub_1C73E18(
              v96->fields.__7__wrap3,
              System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
              0LL);
    }
    v67 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v66)(
            v62,
            *(_QWORD *)(v66 + 8));
    if ( !_4__this )
      sub_1C22094(v67, v68);
    v69 = (BattleSkillInfoData_o *)v67;
    logicskill = _4__this->fields.logicskill;
    v71 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
    if ( !v69 )
      sub_1C22094(v71, v72);
    if ( !v71 )
      sub_1C22094(0LL, v72);
    if ( !v71->max_length )
      sub_1C2209C(v71, v72);
    v71->m_Items[1] = v69->fields.svtUniqueId;
    if ( !logicskill )
      sub_1C22094(v71, v72);
    v73 = BattleLogicSkill__taskSkill(logicskill, v69, v71, 0LL, 0, 0, 0, 0, 0, v95);
    v96->fields.__7__wrap4 = v73;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v96->fields.__7__wrap4, (int64_t)v73, v74, v75, v76, v77, v78, v79);
    v8 = v96;
    v24 = 0;
    v96->fields.__7__wrap5 = 0;
LABEL_57:
    _7__wrap4 = v8->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1C22094(this, method);
    v81 = _7__wrap4->max_length;
    if ( v24 < (int)v81 )
      break;
    v8->fields.__7__wrap4 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__7__wrap4, 0LL, v2, v3, v4, v5, v6, v7);
    v61 = v96;
  }
  if ( v24 >= v81 )
    sub_1C2209C(this, method);
  v94 = (int64_t)_7__wrap4->m_Items[v24];
  v8->fields.__2__current = (struct BattleLogicTask_o *)v94;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__2__current, v94, v2, v3, v4, v5, v6, v7);
  result = 1;
  v96->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF2C1 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
    byte_4BDF2C1 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C22084(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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

  if ( (byte_4BDF2C0 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    byte_4BDF2C0 = 1;
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
      p_method = sub_1C73E18(_7__wrap3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))p_method)(
      _7__wrap3,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF2B9 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicNomal___c_TypeInfo);
    byte_4BDF2B9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleLogicNomal___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__24_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_4BDF2BA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4BDF2BA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
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
    sub_1C22094(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__22_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__40_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1C22094(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__18_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
  BuffList_c *v5; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v8; // x22

  if ( (byte_4BDF2BB & 1) == 0 )
  {
    sub_1C21E38(&BuffList_TypeInfo);
    sub_1C21E38(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_4BDF2BB = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_1C22084(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v8, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v8;
}


void __fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass24_0_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v14; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v16; // x8

  v6 = this;
  if ( (byte_4BDF2BC & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4BDF2BC = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2F9E304 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C22094(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v16[4] = (BattleLogicNomal_c *)buff;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 4), (int64_t)buff, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass24_0_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v14; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v16; // x8

  v6 = this;
  if ( (byte_4BDF2BD & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4BDF2BD = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2F9E304 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1C22094(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v16[4] = (BattleLogicNomal_c *)buff;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 4), (int64_t)buff, v7, v8, v9, v10, v11, v12);
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
    sub_1C22094(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_4BDF2BE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_4BDF2BE = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass24_0_o *)_4__this->fields.data) == 0LL )
    sub_1C22094(this, id);
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
    sub_1C22094(this, npc);
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
    sub_1C22094(this, npc);
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
    sub_1C22094(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueId;
}