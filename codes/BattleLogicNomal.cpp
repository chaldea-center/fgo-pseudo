void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogicTask_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BattleLogicTask_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B698F2 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask___TypeInfo, method);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v3);
    byte_4B698F2 = 1;
  }
  v4 = (struct BattleLogicTask_array *)sub_1BE4B74(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.zeroTask, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v11, 0LL);
  this->fields.tmpShiftTask = v11;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.tmpShiftTask, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BE4D28(this, method);
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
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v67; // x28
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  BattleActionData_o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  BattleActionData_o **v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct BattleCommandData_o *command; // x1
  BattleCommandData_o **v89; // x26
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  BattleActionData_o *v96; // x19
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v104; // x8
  int32_t v105; // w25
  BattleLogic_o *logic; // x19
  BattleAddSkillTaskBeforeCommandAttack_o *v107; // x22
  bool v108; // w8
  BattleActionData_o *result; // x0
  Il2CppObject *v110; // x23
  System_Collections_Generic_List_object__o *v111; // x19
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  Il2CppClass **v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  System_Collections_Generic_IEnumerable_TSource__o **v128; // x25
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x0
  System_Collections_Generic_List_object__o **v131; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x19
  System_Func_T__TResult__o *v133; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x19
  BattleLogicNomal___c_c *v135; // x8
  System_Func_object__bool__o *_9__24_9; // x23
  Il2CppObject *v137; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x19
  BattleLogicNomal___c_c *v147; // x8
  System_Func_object__object__o *_9__24_0; // x23
  Il2CppObject *v149; // x22
  struct BattleLogicNomal___c_StaticFields *v150; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  System_Func_object__object__o *v157; // x22
  __int64 v158; // x9
  BuffList_c *v159; // x8
  BattleLogicNomal___c_c *v160; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x19
  System_Func_T__TResult__o *_9__24_2; // x23
  Il2CppObject *v163; // x22
  struct BattleLogicNomal___c_StaticFields *v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  System_Func_T__TResult__o *_9__24_3; // x25
  Il2CppObject *v172; // x22
  struct BattleLogicNomal___c_StaticFields *v173; // x0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v180; // x0
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  __int64 v187; // x8
  int64_t v188; // x19
  System_Action_object__object__o *v189; // x22
  BattleCommandData_o **v190; // x26
  int64_t commandAssistId; // x19
  System_Action_object__object__o *v192; // x22
  __int64 v193; // x8
  __int64 v194; // x23
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  int64_t v201; // x19
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  System_Func_object__object__o *v208; // x19
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v216; // x24
  const MethodInfo *v217; // x5
  __int64 v218; // x8
  unsigned __int64 v219; // x22
  int v220; // w23
  int32_t v221; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v222; // x19
  __int64 v223; // x8
  __int64 v224; // x23
  __int64 v225; // x9
  int *v226; // x10
  __int64 v227; // x0
  __int64 v228; // x0
  __int64 v229; // x1
  __int64 v230; // x23
  __int64 v231; // x8
  __int64 v232; // x9
  int *v233; // x10
  __int64 v234; // x0
  __int64 v235; // x8
  __int64 v236; // x9
  int *v237; // x10
  __int64 v238; // x0
  Il2CppObject *v239; // x1
  Il2CppObject *Item; // x1
  __int64 v241; // x8
  __int64 v242; // x9
  int *v243; // x10
  __int64 v244; // x0
  unsigned __int64 v245; // x9
  int v246; // w22
  int v247; // w8
  BuffList_ACTION_array *v248; // x19
  int v249; // w8
  __int64 v250; // x8
  __int64 v251; // x23
  __int64 v252; // x9
  int *v253; // x10
  __int64 v254; // x0
  __int64 v255; // x1
  __int64 v256; // x23
  __int64 v257; // x8
  __int64 v258; // x9
  int *v259; // x10
  __int64 v260; // x0
  __int64 v261; // x8
  __int64 v262; // x9
  int *v263; // x10
  __int64 v264; // x0
  __int64 v265; // x1
  BattleServantData_o *v266; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_43965848; // x0
  __int64 v268; // x1
  BattleBuffData_BuffData_array *v269; // x27
  __int64 v270; // x8
  unsigned __int64 v271; // x26
  BattleBuffData_BuffData_o *v272; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v275; // x1
  __int64 v276; // x8
  __int64 v277; // x9
  int *v278; // x10
  __int64 v279; // x0
  __int64 v280; // x8
  __int64 v281; // x19
  __int64 v282; // x9
  int *v283; // x10
  __int64 v284; // x0
  __int64 v285; // x0
  __int64 v286; // x1
  __int64 v287; // x29
  BattleActionData_DamageData_o *v288; // x23
  __int64 v289; // x8
  __int64 v290; // x9
  int *v291; // x10
  __int64 v292; // x0
  __int64 v293; // x8
  __int64 v294; // x9
  int *v295; // x10
  __int64 v296; // x0
  __int64 v297; // x1
  BattleServantData_o *v298; // x27
  BattleLogic_o *v299; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v301; // x1
  BattleActionData_DamageData_o *v302; // x19
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v304; // x22
  BattleActionData_o *v305; // x0
  _BOOL8 v306; // x0
  __int64 v307; // x1
  __int64 v308; // x8
  __int64 v309; // x9
  int *v310; // x10
  __int64 v311; // x0
  BattleActionData_o *v312; // x19
  BattleActionData_o *v313; // x19
  BattleActionData_o *v314; // x19
  struct BattleData_o *v315; // x8
  __int64 v316; // x23
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v318; // x19
  const MethodInfo *v319; // x5
  __int64 v320; // x8
  unsigned __int64 v321; // x27
  unsigned int v322; // w22
  int32_t v323; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x19
  __int64 v325; // x8
  __int64 v326; // x23
  __int64 v327; // x9
  int *v328; // x10
  __int64 v329; // x0
  __int64 v330; // x0
  __int64 v331; // x1
  __int64 v332; // x23
  __int64 v333; // x8
  __int64 v334; // x9
  int *v335; // x10
  __int64 v336; // x0
  __int64 v337; // x8
  __int64 v338; // x9
  int *v339; // x10
  __int64 v340; // x0
  Il2CppObject *v341; // x0
  Il2CppObject *v342; // x1
  __int64 v343; // x8
  __int64 v344; // x9
  int *v345; // x10
  __int64 v346; // x0
  unsigned __int64 v347; // x22
  int v348; // w23
  int v349; // w8
  BuffList_ACTION_array *v350; // x19
  int v351; // w8
  __int64 v352; // x8
  __int64 v353; // x23
  __int64 v354; // x9
  int *v355; // x10
  __int64 v356; // x0
  __int64 v357; // x1
  __int64 v358; // x23
  __int64 v359; // x8
  __int64 v360; // x9
  int *v361; // x10
  BattleCommandData_o **v362; // x26
  __int64 v363; // x0
  __int64 v364; // x8
  __int64 v365; // x9
  int *v366; // x10
  __int64 v367; // x0
  __int64 v368; // x1
  BattleServantData_o *v369; // x3
  BattleBuffData_BuffData_array *v370; // x0
  __int64 v371; // x1
  BattleBuffData_BuffData_array *v372; // x27
  __int64 v373; // x8
  unsigned __int64 v374; // x26
  BattleLogicFunction_o *v375; // x0
  __int64 v376; // x8
  __int64 v377; // x9
  int *v378; // x10
  __int64 v379; // x0
  __int64 v380; // x8
  __int64 v381; // x19
  __int64 v382; // x9
  int *v383; // x10
  __int64 v384; // x0
  __int64 v385; // x0
  __int64 v386; // x1
  __int64 v387; // x23
  __int64 v388; // x8
  __int64 v389; // x9
  int *v390; // x10
  __int64 v391; // x0
  __int64 v392; // x8
  __int64 v393; // x9
  int *v394; // x10
  __int64 v395; // x0
  __int64 v396; // x0
  __int64 v397; // x1
  __int64 v398; // x8
  __int64 v399; // x9
  int *v400; // x10
  __int64 v401; // x0
  _BOOL8 v402; // x0
  __int64 v403; // x1
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v406; // x0
  BattleActionData_o *v407; // x8
  BattleLogic_o *v408; // x19
  BattleAddSkillTaskAfterCommandAttack_o *v409; // x20
  __int64 v410; // x0
  const MethodInfo *v411; // [xsp+0h] [xbp-120h]
  __int64 *v412; // [xsp+10h] [xbp-110h]
  bool v413; // [xsp+1Ch] [xbp-104h]
  __int64 v414; // [xsp+20h] [xbp-100h]
  BattleLogicTask_o *v415; // [xsp+28h] [xbp-F8h]
  int32_t uniqueId; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v417; // [xsp+38h] [xbp-E8h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+40h] [xbp-E0h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+40h] [xbp-E0h]
  BattleBuffData_o *actSvtBuffData; // [xsp+48h] [xbp-D8h]
  int64_t v421; // [xsp+50h] [xbp-D0h]
  bool v422; // [xsp+5Ch] [xbp-C4h]
  __int64 v423; // [xsp+60h] [xbp-C0h]
  __int64 v424; // [xsp+68h] [xbp-B8h]
  BattleServantData_o **v425; // [xsp+70h] [xbp-B0h]
  System_Collections_Generic_Dictionary_object__object__o *v426; // [xsp+78h] [xbp-A8h]
  BattleCommandData_o **v427; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v428; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v429; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4B698DE & 1) == 0 )
  {
    sub_1BE4ACC(&BuffList_ACTION___TypeInfo, task);
    sub_1BE4ACC(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v7);
    sub_1BE4ACC(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v8);
    sub_1BE4ACC(&BattleActionData_TypeInfo, v9);
    sub_1BE4ACC(&BattleAddSkillTaskAfterCommandAttack_TypeInfo, v10);
    sub_1BE4ACC(&BattleAddSkillTaskBeforeCommandAttack_TypeInfo, v11);
    sub_1BE4ACC(&BattleServantData___TypeInfo, v12);
    sub_1BE4ACC(&bool___TypeInfo, v13);
    sub_1BE4ACC(&BuffList_TypeInfo, v14);
    sub_1BE4ACC(&BattleLogic_DamageProcessArgs_TypeInfo, v15);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v17);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v18);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v19);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v20);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_int___, v21);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v24);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v25);
    sub_1BE4ACC(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v26);
    sub_1BE4ACC(&System_Func_BattleServantData__BattleServantData__TypeInfo, v27);
    sub_1BE4ACC(&System_Func_int__BattleServantData__TypeInfo, v28);
    sub_1BE4ACC(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v29);
    sub_1BE4ACC(&System_Func_BattleServantData__bool__TypeInfo, v30);
    sub_1BE4ACC(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v31);
    sub_1BE4ACC(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v32);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v33);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v34);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v35);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v36);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v37);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleServantData__Add__, v38);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v39);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Remove__, v40);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v41);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v42);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__, v44);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__, v45);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__, v46);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__, v47);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__, v48);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__, v49);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__, v50);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__, v51);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__, v52);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__, v53);
    sub_1BE4ACC(&BattleLogicNomal___c__DisplayClass24_0_TypeInfo, v54);
    sub_1BE4ACC(&BattleLogicNomal___c_TypeInfo, v55);
    byte_4B698DE = 1;
  }
  memset(&v429, 0, sizeof(v429));
  v56 = sub_1BE4D18(BattleLogicNomal___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v56, 0LL);
  if ( !v56 )
    goto LABEL_375;
  *(_QWORD *)(v56 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 16), (int64_t)this, v59, v60, v61, v62, v63, v64);
  if ( !task )
    goto LABEL_375;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_375;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v56 + 24) = ServantData;
  v67 = (BattleServantData_o **)(v56 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 24), (int64_t)ServantData, v68, v69, v70, v71, v72, v73);
  v74 = (BattleActionData_o *)sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v74, 0LL);
  *baseActionData = v74;
  sub_1BE4A70((PartyOrganizationUtility_o *)baseActionData, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  *(_QWORD *)(v56 + 48) = v74;
  v81 = (BattleActionData_o **)(v56 + 48);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 48), (int64_t)v74, v82, v83, v84, v85, v86, v87);
  command = task->fields.command;
  *(_QWORD *)(v56 + 40) = command;
  v89 = (BattleCommandData_o **)(v56 + 40);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 40), (int64_t)command, v90, v91, v92, v93, v94, v95);
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
  v96 = *v81;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v96 )
    goto LABEL_375;
  v96->fields.actorId = ActorId;
  ActorId = (__int64)*v81;
  if ( !*v81 )
    goto LABEL_375;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_1BE4A70((PartyOrganizationUtility_o *)(ActorId + 128), (int64_t)motionMessage, v97, v98, v99, v100, v101, v102);
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v104 = this->fields.data;
  if ( !v104 )
    goto LABEL_375;
  v105 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v104->fields.leaderDown || v104->fields.endbattleFlg )
    return 0LL;
  logic = this->fields.logic;
  v107 = (BattleAddSkillTaskBeforeCommandAttack_o *)sub_1BE4D18(BattleAddSkillTaskBeforeCommandAttack_TypeInfo);
  BattleAddSkillTaskBeforeCommandAttack___ctor(v107, 0LL);
  if ( !logic )
    goto LABEL_375;
  v415 = task;
  uniqueId = v105;
  v108 = BattleLogic__AddSkillTask(logic, (BattleAddSkillTaskAroundTargetTask_o *)v107, task, v105, 0LL);
  result = 0LL;
  if ( !v108 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_375;
    v110 = (Il2CppObject *)BattleData__getServantData((BattleData_o *)ActorId, v105, 0LL);
    v111 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v111,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
    if ( !v111 )
      goto LABEL_375;
    items = v111->fields._items;
    v119 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v111->fields._version;
    if ( !items )
      goto LABEL_375;
    size = v111->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v111,
        v110,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v121 = &items->obj.klass + size;
      v111->fields._size = size + 1;
      v121[4] = (Il2CppClass *)v110;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v121 + 4), (int64_t)v110, v112, v113, v114, v115, v116, v117);
    }
    *(_QWORD *)(v56 + 56) = v111;
    v128 = (System_Collections_Generic_IEnumerable_TSource__o **)(v56 + 56);
    sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 56), (int64_t)v111, v122, v123, v124, v125, v126, v127);
    ActorId = *(_QWORD *)(v56 + 40);
    if ( !ActorId )
      goto LABEL_375;
    BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
    ActorId = (__int64)*v89;
    if ( !*v89 )
      goto LABEL_375;
    BattleCommandData__UpdateCritical(
      (BattleCommandData_o *)ActorId,
      *v67,
      (BattleServantData_o *)v110,
      this->fields.data,
      0LL);
    ActorId = (__int64)*v89;
    if ( !*v89 )
      goto LABEL_375;
    BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, *v67, 0LL);
    ActorId = (__int64)*v67;
    if ( !*v67 )
      goto LABEL_375;
    AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v89, 0LL);
    v413 = AttackType == 2;
    v421 = (int64_t)v110;
    v427 = (BattleCommandData_o **)(v56 + 40);
    if ( AttackType == 2 )
    {
      ActorId = (__int64)this->fields.data;
      if ( !ActorId )
        goto LABEL_375;
      ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, uniqueId, 0LL);
      if ( !this->fields.data )
        goto LABEL_375;
      v130 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                                 ? BattleData__getFieldEnemyServantIDList(
                                                                     this->fields.data,
                                                                     1,
                                                                     0LL)
                                                                 : BattleData__getFieldPlayerServantIDList(
                                                                     this->fields.data,
                                                                     0LL,
                                                                     0LL));
      v131 = (System_Collections_Generic_List_object__o **)(v56 + 56);
      ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                           v130,
                           (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
      if ( !ActorId )
        goto LABEL_375;
      v132 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)ActorId,
        uniqueId,
        (const MethodInfo_35D06FC *)Method_System_Collections_Generic_List_int__Remove__);
      v133 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__object____ctor(
        v133,
        (Il2CppObject *)v56,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__8__,
        0LL);
      v134 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                    v132,
                                                                    (System_Func_TSource__TResult__o *)v133,
                                                                    (const MethodInfo_2F881D4 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v135 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v135 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_9 = (System_Func_object__bool__o *)v135->static_fields->__9__24_9;
      if ( !_9__24_9 )
      {
        if ( !v135->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v135);
          v135 = BattleLogicNomal___c_TypeInfo;
        }
        v137 = (Il2CppObject *)v135->static_fields->__9;
        _9__24_9 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__24_9,
          v137,
          Method_BattleLogicNomal___c__CreateCommandBattle_b__24_9__,
          0LL);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
        static_fields->__9__24_9 = (struct System_Func_BattleServantData__bool__o *)_9__24_9;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__24_9,
          (int64_t)_9__24_9,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144);
      }
      ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                           v134,
                           (System_Func_TSource__bool__o *)_9__24_9,
                           (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      if ( !*v131 )
        goto LABEL_375;
      v128 = (System_Collections_Generic_IEnumerable_TSource__o **)(v56 + 56);
      System_Collections_Generic_List_object___AddRange(
        *v131,
        (System_Collections_Generic_IEnumerable_T__o *)ActorId,
        (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
      v89 = (BattleCommandData_o **)(v56 + 40);
    }
    ActorId = (__int64)*v89;
    if ( *v89 )
    {
      IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                         (BattleCommandData_o *)ActorId,
                                         0LL);
      v146 = *v128;
      v422 = IsForceAttackFunctionTargetAll;
      v147 = BattleLogicNomal___c_TypeInfo;
      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
        v147 = BattleLogicNomal___c_TypeInfo;
      }
      _9__24_0 = (System_Func_object__object__o *)v147->static_fields->__9__24_0;
      if ( !_9__24_0 )
      {
        if ( !v147->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v147);
          v147 = BattleLogicNomal___c_TypeInfo;
        }
        v149 = (Il2CppObject *)v147->static_fields->__9;
        _9__24_0 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_BattleServantData__BattleServantData__TypeInfo);
        System_Func_object__object____ctor(
          _9__24_0,
          v149,
          Method_BattleLogicNomal___c__CreateCommandBattle_b__24_0__,
          0LL);
        v150 = BattleLogicNomal___c_TypeInfo->static_fields;
        v150->__9__24_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__24_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v150->__9__24_0,
          (int64_t)_9__24_0,
          v151,
          v152,
          v153,
          v154,
          v155,
          v156);
      }
      v157 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
      System_Func_object__object____ctor(
        v157,
        (Il2CppObject *)v56,
        Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__1__,
        0LL);
      ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                           v146,
                           (System_Func_TSource__TKey__o *)_9__24_0,
                           (System_Func_TSource__TElement__o *)v157,
                           (const MethodInfo_2F932A8 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
      v158 = *(_QWORD *)(v56 + 24);
      v426 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
      if ( v158 )
      {
        v159 = BuffList_TypeInfo;
        actSvtBuffData = *(BattleBuffData_o **)(v158 + 784);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          v159 = BuffList_TypeInfo;
        }
        v160 = BattleLogicNomal___c_TypeInfo;
        CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v159->static_fields->CommandCodeBuffHash;
        if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
          v160 = BattleLogicNomal___c_TypeInfo;
        }
        _9__24_2 = (System_Func_T__TResult__o *)v160->static_fields->__9__24_2;
        if ( !_9__24_2 )
        {
          if ( !v160->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v160);
            v160 = BattleLogicNomal___c_TypeInfo;
          }
          v163 = (Il2CppObject *)v160->static_fields->__9;
          _9__24_2 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
          System_Func_Int32Enum__Int32Enum____ctor(
            _9__24_2,
            v163,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_2__,
            0LL);
          v164 = BattleLogicNomal___c_TypeInfo->static_fields;
          v164->__9__24_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__24_2;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v164->__9__24_2,
            (int64_t)_9__24_2,
            v165,
            v166,
            v167,
            v168,
            v169,
            v170);
          v160 = BattleLogicNomal___c_TypeInfo;
        }
        v412 = (__int64 *)v128;
        if ( !v160->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v160);
          v160 = BattleLogicNomal___c_TypeInfo;
        }
        _9__24_3 = (System_Func_T__TResult__o *)v160->static_fields->__9__24_3;
        if ( !_9__24_3 )
        {
          if ( !v160->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v160);
            v160 = BattleLogicNomal___c_TypeInfo;
          }
          v172 = (Il2CppObject *)v160->static_fields->__9;
          _9__24_3 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
          System_Func_Int32Enum__object____ctor(
            _9__24_3,
            v172,
            Method_BattleLogicNomal___c__CreateCommandBattle_b__24_3__,
            0LL);
          v173 = BattleLogicNomal___c_TypeInfo->static_fields;
          v173->__9__24_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__24_3;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v173->__9__24_3,
            (int64_t)_9__24_3,
            v174,
            v175,
            v176,
            v177,
            v178,
            v179);
        }
        v180 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
                 CommandCodeBuffHash,
                 (System_Func_TSource__TKey__o *)_9__24_2,
                 (System_Func_TSource__TElement__o *)_9__24_3,
                 (const MethodInfo_2F930B0 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
        *(_QWORD *)(v56 + 32) = v180;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v180, v181, v182, v183, v184, v185, v186);
        v187 = *(_QWORD *)(v56 + 40);
        v417 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v56 + 32);
        if ( v187 )
        {
          v188 = *(_QWORD *)(v187 + 72);
          v189 = (System_Action_object__object__o *)sub_1BE4D18(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
          System_Action_object__object____ctor(
            v189,
            (Il2CppObject *)v56,
            Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__4__,
            0LL);
          ActorId = (__int64)actSvtBuffData;
          v190 = (BattleCommandData_o **)(v56 + 40);
          if ( actSvtBuffData )
          {
            BattleBuffData__SetCommandCodeBuffActiveFlg(
              actSvtBuffData,
              v188,
              (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v189,
              1,
              0LL);
            if ( *v427 )
            {
              commandAssistId = (*v427)->fields.commandAssistId;
              v192 = (System_Action_object__object__o *)sub_1BE4D18(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
              System_Action_object__object____ctor(
                v192,
                (Il2CppObject *)v56,
                Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__5__,
                0LL);
              v193 = *(_QWORD *)(v56 + 40);
              if ( v193 )
              {
                BattleBuffData__SetCommandAssistBuffActiveFlg(
                  actSvtBuffData,
                  commandAssistId,
                  (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v192,
                  1,
                  *(_DWORD *)(v193 + 88),
                  0LL);
                ActorId = sub_1BE4B74(bool___TypeInfo, 2LL);
                if ( ActorId )
                {
                  v194 = ActorId;
                  if ( !*(_DWORD *)(ActorId + 24) )
                    goto LABEL_376;
                  *(_BYTE *)(ActorId + 32) = 1;
                  ActorId = sub_1BE4B74(BattleServantData___TypeInfo, 1LL);
                  if ( ActorId )
                  {
                    v201 = ActorId;
                    if ( v421 )
                    {
                      ActorId = sub_1BE4C08(v421, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
                      if ( !ActorId )
                      {
                        v410 = sub_1BE4D4C(0LL);
                        sub_1BE4BF4(v410, 0LL);
                      }
                    }
                    if ( !*(_DWORD *)(v201 + 24) )
                      goto LABEL_376;
                    *(_QWORD *)(v201 + 32) = v421;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v201 + 32), v421, v195, v196, v197, v198, v199, v200);
                    *(_QWORD *)(v56 + 72) = v201;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 72), v201, v202, v203, v204, v205, v206, v207);
                    v208 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_BattleServantData__BattleServantData__TypeInfo);
                    System_Func_object__object____ctor(
                      v208,
                      (Il2CppObject *)v56,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__6__,
                      0LL);
                    *(_QWORD *)(v56 + 64) = v208;
                    v414 = v56 + 64;
                    sub_1BE4A70(
                      (PartyOrganizationUtility_o *)(v56 + 64),
                      (int64_t)v208,
                      v209,
                      v210,
                      v211,
                      v212,
                      v213,
                      v214);
                    v424 = sub_1BE4D18(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
                    System_Func_bool__bool__object____ctor(
                      (System_Func_T1__T2__TResult__o *)v424,
                      (Il2CppObject *)v56,
                      Method_BattleLogicNomal___c__DisplayClass24_0__CreateCommandBattle_b__7__,
                      0LL);
                    ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( ActorId )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)ActorId,
                                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                      v216 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1BE4D18(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
                      BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v216, 0LL);
                      v218 = *(_QWORD *)(v194 + 24);
                      v425 = v67;
                      v423 = v194;
                      if ( (int)v218 >= 1 )
                      {
                        v219 = 0LL;
                        do
                        {
                          if ( v219 >= (unsigned int)v218 )
                            goto LABEL_376;
                          v220 = *(unsigned __int8 *)(v194 + v219 + 32);
                          if ( v220 )
                            v221 = 177;
                          else
                            v221 = 138;
                          ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                                               (BattleLogicNomal_o *)ActorId,
                                               *v417,
                                               actSvtBuffData,
                                               v221,
                                               *v427,
                                               v217);
                          if ( !v424 )
                            goto LABEL_375;
                          v222 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
                          ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v424 + 24))(
                                      *(_QWORD *)(v424 + 64),
                                      v220 != 0,
                                      v422,
                                      *(_QWORD *)(v424 + 40));
                          if ( !ActorId )
                            goto LABEL_375;
                          v223 = *(_QWORD *)ActorId;
                          v224 = ActorId;
                          v225 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                          {
                            v226 = (int *)(*(_QWORD *)(v223 + 176) + 8LL);
                            while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v226 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                            {
                              --v225;
                              v226 += 4;
                              if ( !v225 )
                                goto LABEL_90;
                            }
                            v227 = v223 + 16LL * *v226 + 312;
                          }
                          else
                          {
LABEL_90:
                            v227 = sub_1C36AAC(
                                     ActorId,
                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                     0LL);
                          }
                          v228 = (*(__int64 (__fastcall **)(__int64, _QWORD))v227)(v224, *(_QWORD *)(v227 + 8));
                          v230 = v228;
                          while ( 1 )
                          {
                            if ( !v230 )
                              sub_1BE4D28(v228, v229);
                            v231 = *(_QWORD *)v230;
                            v232 = *(unsigned __int16 *)(*(_QWORD *)v230 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v230 + 302LL) )
                            {
                              v233 = (int *)(*(_QWORD *)(v231 + 176) + 8LL);
                              while ( *((System_Collections_IEnumerator_c **)v233 - 1) != System_Collections_IEnumerator_TypeInfo )
                              {
                                --v232;
                                v233 += 4;
                                if ( !v232 )
                                  goto LABEL_98;
                              }
                              v234 = v231 + 16LL * *v233 + 312;
                            }
                            else
                            {
LABEL_98:
                              v234 = sub_1C36AAC(v230, System_Collections_IEnumerator_TypeInfo, 0LL);
                            }
                            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v234)(v230, *(_QWORD *)(v234 + 8)) & 1) == 0 )
                              break;
                            v235 = *(_QWORD *)v230;
                            v236 = *(unsigned __int16 *)(*(_QWORD *)v230 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v230 + 302LL) )
                            {
                              v237 = (int *)(*(_QWORD *)(v235 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v237 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                              {
                                --v236;
                                v237 += 4;
                                if ( !v236 )
                                  goto LABEL_105;
                              }
                              v238 = v235 + 16LL * *v237 + 312;
                            }
                            else
                            {
LABEL_105:
                              v238 = sub_1C36AAC(
                                       v230,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v239 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v238)(
                                                     v230,
                                                     *(_QWORD *)(v238 + 8));
                            if ( !v426 )
                              sub_1BE4D28(0LL, v239);
                            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                                     v426,
                                     v239,
                                     (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                            BattleLogicNomal__commandCodeBuffProcess(
                              this,
                              (BattleBuffData_CheckInvokeBuff_o *)Item,
                              (SkillLvMaster_o *)MasterData_object,
                              *v427,
                              v222,
                              *v81,
                              0,
                              v216,
                              v411);
                          }
                          v241 = *(_QWORD *)v230;
                          v242 = *(unsigned __int16 *)(*(_QWORD *)v230 + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)v230 + 302LL) )
                          {
                            v243 = (int *)(*(_QWORD *)(v241 + 176) + 8LL);
                            while ( *((System_IDisposable_c **)v243 - 1) != System_IDisposable_TypeInfo )
                            {
                              --v242;
                              v243 += 4;
                              if ( !v242 )
                                goto LABEL_113;
                            }
                            v244 = v241 + 16LL * *v243 + 312;
                          }
                          else
                          {
LABEL_113:
                            v244 = sub_1C36AAC(v230, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v244)(v230, *(_QWORD *)(v244 + 8));
                          v194 = v423;
                          LODWORD(v218) = *(_DWORD *)(v423 + 24);
                          ++v219;
                        }
                        while ( (__int64)v219 < (int)v218 );
                        if ( (int)v218 >= 1 )
                        {
                          v245 = 0LL;
                          while ( v245 < (unsigned int)v218 )
                          {
                            processArgs = (BattleLogic_DamageProcessArgs_o *)v245;
                            v246 = *(unsigned __int8 *)(v194 + v245 + 32);
                            ActorId = sub_1BE4B74(BuffList_ACTION___TypeInfo, 2LL);
                            if ( !ActorId )
                              goto LABEL_375;
                            v247 = *(_DWORD *)(ActorId + 24);
                            v248 = (BuffList_ACTION_array *)ActorId;
                            if ( v246 )
                            {
                              if ( !v247 )
                                break;
                              *(_DWORD *)(ActorId + 32) = 118;
                              if ( v247 == 1 )
                                break;
                              v249 = 120;
                            }
                            else
                            {
                              if ( !v247 )
                                break;
                              *(_DWORD *)(ActorId + 32) = 88;
                              if ( v247 == 1 )
                                break;
                              v249 = 98;
                            }
                            *(_DWORD *)(ActorId + 36) = v249;
                            ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v424 + 24))(
                                        *(_QWORD *)(v424 + 64),
                                        v246 != 0,
                                        v422,
                                        *(_QWORD *)(v424 + 40));
                            if ( !ActorId )
                              goto LABEL_375;
                            v250 = *(_QWORD *)ActorId;
                            v251 = ActorId;
                            v252 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                            {
                              v253 = (int *)(*(_QWORD *)(v250 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v253 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                              {
                                --v252;
                                v253 += 4;
                                if ( !v252 )
                                  goto LABEL_135;
                              }
                              v254 = v250 + 16LL * *v253 + 312;
                            }
                            else
                            {
LABEL_135:
                              v254 = sub_1C36AAC(
                                       ActorId,
                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v256 = (*(__int64 (__fastcall **)(__int64, _QWORD))v254)(v251, *(_QWORD *)(v254 + 8));
                            if ( !v256 )
                              sub_1BE4D28(0LL, v255);
                            while ( 1 )
                            {
                              v257 = *(_QWORD *)v256;
                              v258 = *(unsigned __int16 *)(*(_QWORD *)v256 + 302LL);
                              if ( *(_WORD *)(*(_QWORD *)v256 + 302LL) )
                              {
                                v259 = (int *)(*(_QWORD *)(v257 + 176) + 8LL);
                                while ( *((System_Collections_IEnumerator_c **)v259 - 1) != System_Collections_IEnumerator_TypeInfo )
                                {
                                  --v258;
                                  v259 += 4;
                                  if ( !v258 )
                                    goto LABEL_142;
                                }
                                v67 = v425;
                                v190 = v427;
                                v260 = v257 + 16LL * *v259 + 312;
                              }
                              else
                              {
LABEL_142:
                                v67 = v425;
                                v190 = v427;
                                v260 = sub_1C36AAC(v256, System_Collections_IEnumerator_TypeInfo, 0LL);
                              }
                              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v260)(v256, *(_QWORD *)(v260 + 8)) & 1) == 0 )
                                break;
                              v261 = *(_QWORD *)v256;
                              v262 = *(unsigned __int16 *)(*(_QWORD *)v256 + 302LL);
                              if ( *(_WORD *)(*(_QWORD *)v256 + 302LL) )
                              {
                                v263 = (int *)(*(_QWORD *)(v261 + 176) + 8LL);
                                while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v263 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                {
                                  --v262;
                                  v263 += 4;
                                  if ( !v262 )
                                    goto LABEL_149;
                                }
                                v264 = v261 + 16LL * *v263 + 312;
                              }
                              else
                              {
LABEL_149:
                                v264 = sub_1C36AAC(
                                         v256,
                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                         0LL);
                              }
                              v266 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v264)(
                                                              v256,
                                                              *(_QWORD *)(v264 + 8));
                              if ( !*v67 )
                                sub_1BE4D28(0LL, v265);
                              AttackSideEffectBuffList_43965848 = BattleServantData__getAttackSideEffectBuffList_43965848(
                                                                    *v67,
                                                                    v248,
                                                                    *v190,
                                                                    v266,
                                                                    0LL);
                              v269 = AttackSideEffectBuffList_43965848;
                              if ( !AttackSideEffectBuffList_43965848 )
                                sub_1BE4D28(0LL, v268);
                              v270 = *(_QWORD *)&AttackSideEffectBuffList_43965848->max_length;
                              if ( (int)v270 >= 1 )
                              {
                                v271 = 0LL;
                                do
                                {
                                  if ( v271 >= (unsigned int)v270 )
                                    sub_1BE4D30(AttackSideEffectBuffList_43965848, v268);
                                  if ( !*v81 )
                                    sub_1BE4D28(0LL, v268);
                                  v272 = v269->m_Items[v271];
                                  logicfunction = this->fields.logicfunction;
                                  SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v81, 3, 0LL);
                                  if ( !logicfunction )
                                    sub_1BE4D28(SideEffectActionData, v275);
                                  BattleLogicFunction__SetSideEffectBuff(
                                    logicfunction,
                                    (SkillLvMaster_o *)MasterData_object,
                                    SideEffectActionData,
                                    v272,
                                    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v216,
                                    0,
                                    0LL);
                                  LODWORD(v270) = v269->max_length;
                                  ++v271;
                                }
                                while ( (__int64)v271 < (int)v270 );
                              }
                            }
                            v276 = *(_QWORD *)v256;
                            v277 = *(unsigned __int16 *)(*(_QWORD *)v256 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v256 + 302LL) )
                            {
                              v278 = (int *)(*(_QWORD *)(v276 + 176) + 8LL);
                              while ( *((System_IDisposable_c **)v278 - 1) != System_IDisposable_TypeInfo )
                              {
                                --v277;
                                v278 += 4;
                                if ( !v277 )
                                  goto LABEL_164;
                              }
                              v279 = v276 + 16LL * *v278 + 312;
                            }
                            else
                            {
LABEL_164:
                              v279 = sub_1C36AAC(v256, System_IDisposable_TypeInfo, 0LL);
                            }
                            ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v279)(v256, *(_QWORD *)(v279 + 8));
                            v194 = v423;
                            LODWORD(v218) = *(_DWORD *)(v423 + 24);
                            v245 = (unsigned __int64)&processArgs->klass + 1;
                            if ( (__int64)&processArgs->klass + 1 >= (int)v218 )
                              goto LABEL_174;
                          }
LABEL_376:
                          sub_1BE4D30(ActorId, v58);
                        }
                      }
LABEL_174:
                      processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1BE4D18(BattleLogic_DamageProcessArgs_TypeInfo);
                      BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL);
                      if ( v424 )
                      {
                        ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v424 + 24))(
                                    *(_QWORD *)(v424 + 64),
                                    0LL,
                                    0LL,
                                    *(_QWORD *)(v424 + 40));
                        if ( ActorId )
                        {
                          v280 = *(_QWORD *)ActorId;
                          v281 = ActorId;
                          v282 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                          {
                            v283 = (int *)(*(_QWORD *)(v280 + 176) + 8LL);
                            while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v283 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                            {
                              --v282;
                              v283 += 4;
                              if ( !v282 )
                                goto LABEL_180;
                            }
                            v284 = v280 + 16LL * *v283 + 312;
                          }
                          else
                          {
LABEL_180:
                            v284 = sub_1C36AAC(
                                     ActorId,
                                     System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                     0LL);
                          }
                          v285 = (*(__int64 (__fastcall **)(__int64, _QWORD))v284)(v281, *(_QWORD *)(v284 + 8));
                          v287 = v285;
                          v288 = 0LL;
                          while ( 1 )
                          {
                            if ( !v287 )
                              sub_1BE4D28(v285, v286);
                            v289 = *(_QWORD *)v287;
                            v290 = *(unsigned __int16 *)(*(_QWORD *)v287 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v287 + 302LL) )
                            {
                              v291 = (int *)(*(_QWORD *)(v289 + 176) + 8LL);
                              while ( *((System_Collections_IEnumerator_c **)v291 - 1) != System_Collections_IEnumerator_TypeInfo )
                              {
                                --v290;
                                v291 += 4;
                                if ( !v290 )
                                  goto LABEL_188;
                              }
                              v292 = v289 + 16LL * *v291 + 312;
                            }
                            else
                            {
LABEL_188:
                              v292 = sub_1C36AAC(v287, System_Collections_IEnumerator_TypeInfo, 0LL);
                            }
                            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v292)(v287, *(_QWORD *)(v292 + 8)) & 1) == 0 )
                              break;
                            v293 = *(_QWORD *)v287;
                            v294 = *(unsigned __int16 *)(*(_QWORD *)v287 + 302LL);
                            if ( *(_WORD *)(*(_QWORD *)v287 + 302LL) )
                            {
                              v295 = (int *)(*(_QWORD *)(v293 + 176) + 8LL);
                              while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v295 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                              {
                                --v294;
                                v295 += 4;
                                if ( !v294 )
                                  goto LABEL_195;
                              }
                              v296 = v293 + 16LL * *v295 + 312;
                            }
                            else
                            {
LABEL_195:
                              v296 = sub_1C36AAC(
                                       v287,
                                       System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                       0LL);
                            }
                            v298 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v296)(
                                                            v287,
                                                            *(_QWORD *)(v296 + 8));
                            v299 = this->fields.logic;
                            if ( !v299 )
                              sub_1BE4D28(0LL, v297);
                            DamageList = BattleLogic__GetDamageList(v299, *v67, v298, *v190, processArgsa, 0LL);
                            v302 = DamageList;
                            if ( v298 == (BattleServantData_o *)v421 )
                              v288 = DamageList;
                            if ( !v298 )
                              sub_1BE4D28(DamageList, v301);
                            buffData = v298->fields.buffData;
                            if ( !buffData )
                              sub_1BE4D28(DamageList, v301);
                            if ( !buffData->fields.isNoDamage )
                            {
                              v304 = *v81;
                              v305 = BattleBuffData__UseProgressingDoNotAct(v298->fields.buffData, v298, 0, 0LL);
                              if ( !v304 )
                                sub_1BE4D28(v305, v305);
                              BattleActionData__addSideEffectActionData(v304, v305, 1, 0LL);
                            }
                            if ( !*v67 )
                              sub_1BE4D28(0LL, v301);
                            v306 = BattleServantData__checkPlayer(*v67, 0LL);
                            if ( v306 )
                            {
                              if ( !*v67 )
                                sub_1BE4D28(v306, v307);
                              v298->fields.overkillTargetId = (*v67)->fields.uniqueId;
                            }
                            if ( !*v81 )
                              sub_1BE4D28(0LL, v307);
                            BattleActionData__setDamageData(*v81, v302, 0LL, 0, 0, 0LL);
                          }
                          v308 = *(_QWORD *)v287;
                          v309 = *(unsigned __int16 *)(*(_QWORD *)v287 + 302LL);
                          if ( *(_WORD *)(*(_QWORD *)v287 + 302LL) )
                          {
                            v310 = (int *)(*(_QWORD *)(v308 + 176) + 8LL);
                            while ( *((System_IDisposable_c **)v310 - 1) != System_IDisposable_TypeInfo )
                            {
                              --v309;
                              v310 += 4;
                              if ( !v309 )
                                goto LABEL_215;
                            }
                            v311 = v308 + 16LL * *v310 + 312;
                          }
                          else
                          {
LABEL_215:
                            v311 = sub_1C36AAC(v287, System_IDisposable_TypeInfo, 0LL);
                          }
                          ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v311)(v287, *(_QWORD *)(v311 + 8));
                          if ( *(_QWORD *)v414 )
                          {
                            (*(void (__fastcall **)(_QWORD, int64_t, _QWORD))(*(_QWORD *)v414 + 24LL))(
                              *(_QWORD *)(*(_QWORD *)v414 + 64LL),
                              v421,
                              *(_QWORD *)(*(_QWORD *)v414 + 40LL));
                            ActorId = (__int64)*v190;
                            if ( *v190 )
                            {
                              v312 = *v81;
                              ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
                              if ( v312 )
                              {
                                v312->fields.type = ActorId;
                                ActorId = (__int64)*v81;
                                if ( *v81 )
                                {
                                  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v190, 0LL);
                                  v58 = *v190;
                                  if ( *v190 )
                                  {
                                    v313 = *v81;
                                    if ( *v81 )
                                    {
                                      v313->fields.actionIndex = v58->fields.actionIndex;
                                      ActorId = (__int64)*v67;
                                      if ( *v67 )
                                      {
                                        ActorId = BattleServantData__getMotionId(
                                                    (BattleServantData_o *)ActorId,
                                                    v58,
                                                    0LL);
                                        v313->fields.motionId = ActorId;
                                        if ( v288 )
                                        {
                                          v314 = *v81;
                                          ActorId = BattleActionData_DamageData__getAttackCount(v288, 0LL);
                                          if ( v314 )
                                          {
                                            v314->fields.attackcount = ActorId;
                                            v315 = this->fields.data;
                                            v316 = v423;
                                            if ( v315 )
                                            {
                                              perf = v315->fields.perf;
                                              if ( perf )
                                              {
                                                if ( *v190 )
                                                {
                                                  ActorId = (__int64)perf->fields.commandPerf;
                                                  if ( ActorId )
                                                  {
                                                    BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                                      (BattlePerformanceCommandCard_o *)ActorId,
                                                      (*v190)->fields.actionIndex,
                                                      0LL);
                                                    if ( *v67 )
                                                    {
                                                      ActorId = (__int64)this->fields.data;
                                                      if ( ActorId )
                                                      {
                                                        v318 = *v81;
                                                        ActorId = BattleData__isPrevAttackMe(
                                                                    (BattleData_o *)ActorId,
                                                                    (*v67)->fields.uniqueId,
                                                                    uniqueId,
                                                                    0LL);
                                                        if ( v318 )
                                                        {
                                                          v318->fields.prevattackme = ActorId & 1;
                                                          v320 = *(_QWORD *)(v423 + 24);
                                                          if ( (int)v320 >= 1 )
                                                          {
                                                            v321 = 0LL;
                                                            do
                                                            {
                                                              if ( v321 >= (unsigned int)v320 )
                                                                goto LABEL_376;
                                                              v322 = *(unsigned __int8 *)(v316 + v321 + 32);
                                                              if ( *(_BYTE *)(v316 + v321 + 32) )
                                                                v323 = 178;
                                                              else
                                                                v323 = 159;
                                                              TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                                                                            (BattleLogicNomal_o *)ActorId,
                                                                                            *v417,
                                                                                            actSvtBuffData,
                                                                                            v323,
                                                                                            *v427,
                                                                                            v319);
                                                              ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v424 + 24))(
                                                                          *(_QWORD *)(v424 + 64),
                                                                          v322,
                                                                          v422,
                                                                          *(_QWORD *)(v424 + 40));
                                                              if ( !ActorId )
                                                                goto LABEL_375;
                                                              v325 = *(_QWORD *)ActorId;
                                                              v326 = ActorId;
                                                              v327 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                              {
                                                                v328 = (int *)(*(_QWORD *)(v325 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v328
                                                                        - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                {
                                                                  --v327;
                                                                  v328 += 4;
                                                                  if ( !v327 )
                                                                    goto LABEL_244;
                                                                }
                                                                v329 = v325 + 16LL * *v328 + 312;
                                                              }
                                                              else
                                                              {
LABEL_244:
                                                                v329 = sub_1C36AAC(
                                                                         ActorId,
                                                                         System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v330 = (*(__int64 (__fastcall **)(__int64, _QWORD))v329)(
                                                                       v326,
                                                                       *(_QWORD *)(v329 + 8));
                                                              v332 = v330;
                                                              while ( 1 )
                                                              {
                                                                if ( !v332 )
                                                                  sub_1BE4D28(v330, v331);
                                                                v333 = *(_QWORD *)v332;
                                                                v334 = *(unsigned __int16 *)(*(_QWORD *)v332 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v332 + 302LL) )
                                                                {
                                                                  v335 = (int *)(*(_QWORD *)(v333 + 176) + 8LL);
                                                                  while ( *((System_Collections_IEnumerator_c **)v335 - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                  {
                                                                    --v334;
                                                                    v335 += 4;
                                                                    if ( !v334 )
                                                                      goto LABEL_252;
                                                                  }
                                                                  v336 = v333 + 16LL * *v335 + 312;
                                                                }
                                                                else
                                                                {
LABEL_252:
                                                                  v336 = sub_1C36AAC(
                                                                           v332,
                                                                           System_Collections_IEnumerator_TypeInfo,
                                                                           0LL);
                                                                }
                                                                if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v336)(
                                                                        v332,
                                                                        *(_QWORD *)(v336 + 8)) & 1) == 0 )
                                                                  break;
                                                                v337 = *(_QWORD *)v332;
                                                                v338 = *(unsigned __int16 *)(*(_QWORD *)v332 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v332 + 302LL) )
                                                                {
                                                                  v339 = (int *)(*(_QWORD *)(v337 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v339
                                                                          - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v338;
                                                                    v339 += 4;
                                                                    if ( !v338 )
                                                                      goto LABEL_259;
                                                                  }
                                                                  v340 = v337 + 16LL * *v339 + 312;
                                                                }
                                                                else
                                                                {
LABEL_259:
                                                                  v340 = sub_1C36AAC(
                                                                           v332,
                                                                           System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v341 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v340)(
                                                                                         v332,
                                                                                         *(_QWORD *)(v340 + 8));
                                                                if ( !v426 )
                                                                  sub_1BE4D28(v341, v341);
                                                                v342 = System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                         v426,
                                                                         v341,
                                                                         (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
                                                                BattleLogicNomal__commandCodeBuffProcess(
                                                                  this,
                                                                  (BattleBuffData_CheckInvokeBuff_o *)v342,
                                                                  (SkillLvMaster_o *)MasterData_object,
                                                                  *v427,
                                                                  TargetCommandCodeBuffList,
                                                                  *v81,
                                                                  1,
                                                                  v216,
                                                                  v411);
                                                              }
                                                              v343 = *(_QWORD *)v332;
                                                              v344 = *(unsigned __int16 *)(*(_QWORD *)v332 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v332 + 302LL) )
                                                              {
                                                                v345 = (int *)(*(_QWORD *)(v343 + 176) + 8LL);
                                                                while ( *((System_IDisposable_c **)v345 - 1) != System_IDisposable_TypeInfo )
                                                                {
                                                                  --v344;
                                                                  v345 += 4;
                                                                  if ( !v344 )
                                                                    goto LABEL_267;
                                                                }
                                                                v346 = v343 + 16LL * *v345 + 312;
                                                              }
                                                              else
                                                              {
LABEL_267:
                                                                v346 = sub_1C36AAC(
                                                                         v332,
                                                                         System_IDisposable_TypeInfo,
                                                                         0LL);
                                                              }
                                                              ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v346)(
                                                                          v332,
                                                                          *(_QWORD *)(v346 + 8));
                                                              v316 = v423;
                                                              LODWORD(v320) = *(_DWORD *)(v423 + 24);
                                                              ++v321;
                                                            }
                                                            while ( (__int64)v321 < (int)v320 );
                                                            v190 = v427;
                                                            if ( (int)v320 >= 1 )
                                                            {
                                                              v347 = 0LL;
                                                              while ( v347 < (unsigned int)v320 )
                                                              {
                                                                v348 = *(unsigned __int8 *)(v316 + v347 + 32);
                                                                ActorId = sub_1BE4B74(BuffList_ACTION___TypeInfo, 2LL);
                                                                if ( !ActorId )
                                                                  goto LABEL_375;
                                                                v349 = *(_DWORD *)(ActorId + 24);
                                                                v350 = (BuffList_ACTION_array *)ActorId;
                                                                if ( v348 )
                                                                {
                                                                  if ( !v349 )
                                                                    goto LABEL_376;
                                                                  *(_DWORD *)(ActorId + 32) = 119;
                                                                  if ( v349 == 1 )
                                                                    goto LABEL_376;
                                                                  v351 = 121;
                                                                }
                                                                else
                                                                {
                                                                  if ( !v349 )
                                                                    goto LABEL_376;
                                                                  *(_DWORD *)(ActorId + 32) = 57;
                                                                  if ( v349 == 1 )
                                                                    goto LABEL_376;
                                                                  v351 = 80;
                                                                }
                                                                *(_DWORD *)(ActorId + 36) = v351;
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v424 + 24))(
                                                                            *(_QWORD *)(v424 + 64),
                                                                            v348 != 0,
                                                                            v422,
                                                                            *(_QWORD *)(v424 + 40));
                                                                if ( !ActorId )
                                                                  goto LABEL_375;
                                                                v352 = *(_QWORD *)ActorId;
                                                                v353 = ActorId;
                                                                v354 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                                {
                                                                  v355 = (int *)(*(_QWORD *)(v352 + 176) + 8LL);
                                                                  while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v355
                                                                          - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                                  {
                                                                    --v354;
                                                                    v355 += 4;
                                                                    if ( !v354 )
                                                                      goto LABEL_289;
                                                                  }
                                                                  v356 = v352 + 16LL * *v355 + 312;
                                                                }
                                                                else
                                                                {
LABEL_289:
                                                                  v356 = sub_1C36AAC(
                                                                           ActorId,
                                                                           System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                           0LL);
                                                                }
                                                                v358 = (*(__int64 (__fastcall **)(__int64, _QWORD))v356)(
                                                                         v353,
                                                                         *(_QWORD *)(v356 + 8));
                                                                if ( !v358 )
                                                                  sub_1BE4D28(0LL, v357);
                                                                while ( 1 )
                                                                {
                                                                  v359 = *(_QWORD *)v358;
                                                                  v360 = *(unsigned __int16 *)(*(_QWORD *)v358 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v358 + 302LL) )
                                                                  {
                                                                    v361 = (int *)(*(_QWORD *)(v359 + 176) + 8LL);
                                                                    while ( *((System_Collections_IEnumerator_c **)v361
                                                                            - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                    {
                                                                      --v360;
                                                                      v361 += 4;
                                                                      if ( !v360 )
                                                                        goto LABEL_296;
                                                                    }
                                                                    v362 = v427;
                                                                    v363 = v359 + 16LL * *v361 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_296:
                                                                    v362 = v427;
                                                                    v363 = sub_1C36AAC(
                                                                             v358,
                                                                             System_Collections_IEnumerator_TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v363)(
                                                                          v358,
                                                                          *(_QWORD *)(v363 + 8)) & 1) == 0 )
                                                                    break;
                                                                  v364 = *(_QWORD *)v358;
                                                                  v365 = *(unsigned __int16 *)(*(_QWORD *)v358 + 302LL);
                                                                  if ( *(_WORD *)(*(_QWORD *)v358 + 302LL) )
                                                                  {
                                                                    v366 = (int *)(*(_QWORD *)(v364 + 176) + 8LL);
                                                                    while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v366
                                                                            - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                    {
                                                                      --v365;
                                                                      v366 += 4;
                                                                      if ( !v365 )
                                                                        goto LABEL_303;
                                                                    }
                                                                    v367 = v364 + 16LL * *v366 + 312;
                                                                  }
                                                                  else
                                                                  {
LABEL_303:
                                                                    v367 = sub_1C36AAC(
                                                                             v358,
                                                                             System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                             0LL);
                                                                  }
                                                                  v369 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v367)(
                                                                                                  v358,
                                                                                                  *(_QWORD *)(v367 + 8));
                                                                  if ( !*v425 )
                                                                    sub_1BE4D28(0LL, v368);
                                                                  v370 = BattleServantData__getAttackSideEffectBuffList_43965848(
                                                                           *v425,
                                                                           v350,
                                                                           *v362,
                                                                           v369,
                                                                           0LL);
                                                                  v372 = v370;
                                                                  if ( !v370 )
                                                                    sub_1BE4D28(0LL, v371);
                                                                  v373 = *(_QWORD *)&v370->max_length;
                                                                  if ( (int)v373 >= 1 )
                                                                  {
                                                                    v374 = 0LL;
                                                                    do
                                                                    {
                                                                      if ( v374 >= (unsigned int)v373 )
                                                                        sub_1BE4D30(v370, v371);
                                                                      v375 = this->fields.logicfunction;
                                                                      if ( !v375 )
                                                                        sub_1BE4D28(0LL, v371);
                                                                      BattleLogicFunction__SetSideEffectBuff(
                                                                        v375,
                                                                        (SkillLvMaster_o *)MasterData_object,
                                                                        *v81,
                                                                        v372->m_Items[v374],
                                                                        (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v216,
                                                                        1,
                                                                        0LL);
                                                                      LODWORD(v373) = v372->max_length;
                                                                      ++v374;
                                                                    }
                                                                    while ( (__int64)v374 < (int)v373 );
                                                                  }
                                                                }
                                                                v376 = *(_QWORD *)v358;
                                                                v377 = *(unsigned __int16 *)(*(_QWORD *)v358 + 302LL);
                                                                if ( *(_WORD *)(*(_QWORD *)v358 + 302LL) )
                                                                {
                                                                  v378 = (int *)(*(_QWORD *)(v376 + 176) + 8LL);
                                                                  while ( *((System_IDisposable_c **)v378 - 1) != System_IDisposable_TypeInfo )
                                                                  {
                                                                    --v377;
                                                                    v378 += 4;
                                                                    if ( !v377 )
                                                                      goto LABEL_317;
                                                                  }
                                                                  v379 = v376 + 16LL * *v378 + 312;
                                                                }
                                                                else
                                                                {
LABEL_317:
                                                                  v379 = sub_1C36AAC(
                                                                           v358,
                                                                           System_IDisposable_TypeInfo,
                                                                           0LL);
                                                                }
                                                                ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v379)(
                                                                            v358,
                                                                            *(_QWORD *)(v379 + 8));
                                                                v316 = v423;
                                                                LODWORD(v320) = *(_DWORD *)(v423 + 24);
                                                                v190 = v427;
                                                                if ( (__int64)++v347 >= (int)v320 )
                                                                  goto LABEL_326;
                                                              }
                                                              goto LABEL_376;
                                                            }
                                                          }
LABEL_326:
                                                          ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v424 + 24))(
                                                                      *(_QWORD *)(v424 + 64),
                                                                      0LL,
                                                                      0LL,
                                                                      *(_QWORD *)(v424 + 40));
                                                          if ( ActorId )
                                                          {
                                                            v380 = *(_QWORD *)ActorId;
                                                            v381 = ActorId;
                                                            v382 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
                                                            if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
                                                            {
                                                              v383 = (int *)(*(_QWORD *)(v380 + 176) + 8LL);
                                                              while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v383
                                                                      - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
                                                              {
                                                                --v382;
                                                                v383 += 4;
                                                                if ( !v382 )
                                                                  goto LABEL_331;
                                                              }
                                                              v384 = v380 + 16LL * *v383 + 312;
                                                            }
                                                            else
                                                            {
LABEL_331:
                                                              v384 = sub_1C36AAC(
                                                                       ActorId,
                                                                       System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo,
                                                                       0LL);
                                                            }
                                                            v385 = (*(__int64 (__fastcall **)(__int64, _QWORD))v384)(
                                                                     v381,
                                                                     *(_QWORD *)(v384 + 8));
                                                            v387 = v385;
                                                            while ( 1 )
                                                            {
                                                              if ( !v387 )
                                                                sub_1BE4D28(v385, v386);
                                                              v388 = *(_QWORD *)v387;
                                                              v389 = *(unsigned __int16 *)(*(_QWORD *)v387 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v387 + 302LL) )
                                                              {
                                                                v390 = (int *)(*(_QWORD *)(v388 + 176) + 8LL);
                                                                while ( *((System_Collections_IEnumerator_c **)v390 - 1) != System_Collections_IEnumerator_TypeInfo )
                                                                {
                                                                  --v389;
                                                                  v390 += 4;
                                                                  if ( !v389 )
                                                                    goto LABEL_339;
                                                                }
                                                                v391 = v388 + 16LL * *v390 + 312;
                                                              }
                                                              else
                                                              {
LABEL_339:
                                                                v391 = sub_1C36AAC(
                                                                         v387,
                                                                         System_Collections_IEnumerator_TypeInfo,
                                                                         0LL);
                                                              }
                                                              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v391)(
                                                                      v387,
                                                                      *(_QWORD *)(v391 + 8)) & 1) == 0 )
                                                                break;
                                                              v392 = *(_QWORD *)v387;
                                                              v393 = *(unsigned __int16 *)(*(_QWORD *)v387 + 302LL);
                                                              if ( *(_WORD *)(*(_QWORD *)v387 + 302LL) )
                                                              {
                                                                v394 = (int *)(*(_QWORD *)(v392 + 176) + 8LL);
                                                                while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v394
                                                                        - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
                                                                {
                                                                  --v393;
                                                                  v394 += 4;
                                                                  if ( !v393 )
                                                                    goto LABEL_346;
                                                                }
                                                                v395 = v392 + 16LL * *v394 + 312;
                                                              }
                                                              else
                                                              {
LABEL_346:
                                                                v395 = sub_1C36AAC(
                                                                         v387,
                                                                         System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo,
                                                                         0LL);
                                                              }
                                                              v396 = (*(__int64 (__fastcall **)(__int64, _QWORD))v395)(
                                                                       v387,
                                                                       *(_QWORD *)(v395 + 8));
                                                              if ( !*v425 )
                                                                sub_1BE4D28(v396, v397);
                                                              if ( !v396 )
                                                                sub_1BE4D28(0LL, v397);
                                                              if ( !this->fields.logic )
                                                                sub_1BE4D28(v396, v397);
                                                              v385 = BattleLogic__SetDamageSideEffect(
                                                                       this->fields.logic,
                                                                       *v81,
                                                                       (*v425)->fields.uniqueId,
                                                                       *(_DWORD *)(v396 + 24),
                                                                       *v190,
                                                                       0LL);
                                                            }
                                                            v398 = *(_QWORD *)v387;
                                                            v399 = *(unsigned __int16 *)(*(_QWORD *)v387 + 302LL);
                                                            if ( *(_WORD *)(*(_QWORD *)v387 + 302LL) )
                                                            {
                                                              v400 = (int *)(*(_QWORD *)(v398 + 176) + 8LL);
                                                              while ( *((System_IDisposable_c **)v400 - 1) != System_IDisposable_TypeInfo )
                                                              {
                                                                --v399;
                                                                v400 += 4;
                                                                if ( !v399 )
                                                                  goto LABEL_356;
                                                              }
                                                              v401 = v398 + 16LL * *v400 + 312;
                                                            }
                                                            else
                                                            {
LABEL_356:
                                                              v401 = sub_1C36AAC(v387, System_IDisposable_TypeInfo, 0LL);
                                                            }
                                                            (*(void (__fastcall **)(__int64, _QWORD))v401)(
                                                              v387,
                                                              *(_QWORD *)(v401 + 8));
                                                            ActorId = *v412;
                                                            if ( *v412 )
                                                            {
                                                              System_Collections_Generic_List_object___GetEnumerator(
                                                                (System_Collections_Generic_List_Enumerator_T__o *)&v428,
                                                                (System_Collections_Generic_List_object__o *)ActorId,
                                                                (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
                                                              v429 = v428;
                                                              while ( 1 )
                                                              {
                                                                v402 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                                         &v429,
                                                                         (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
                                                                if ( !v402 )
                                                                  break;
                                                                current = v429.fields._current;
                                                                if ( !v429.fields._current )
                                                                  sub_1BE4D28(v402, v403);
                                                                klass = v429.fields._current[49].klass;
                                                                if ( !klass )
                                                                  sub_1BE4D28(v402, v403);
                                                                LOBYTE(klass->_1.methods) = 0;
                                                                if ( v415->fields.isCanCounterTask )
                                                                {
                                                                  if ( !*v425 )
                                                                    sub_1BE4D28(v402, v403);
                                                                  v406 = this->fields.data;
                                                                  if ( !v406 )
                                                                    sub_1BE4D28(0LL, v403);
                                                                  BattleData__SetWasAttackTargetId(
                                                                    v406,
                                                                    (*v425)->fields.uniqueId,
                                                                    (int32_t)current[1].monitor,
                                                                    0LL);
                                                                }
                                                              }
                                                              System_Collections_Generic_List_Enumerator_object___Dispose(
                                                                &v429,
                                                                (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
                                                              if ( *(_QWORD *)v414 )
                                                              {
                                                                ActorId = (*(__int64 (__fastcall **)(_QWORD, int64_t, _QWORD))(*(_QWORD *)v414 + 24LL))(
                                                                            *(_QWORD *)(*(_QWORD *)v414 + 64LL),
                                                                            v421,
                                                                            *(_QWORD *)(*(_QWORD *)v414 + 40LL));
                                                                v407 = *v81;
                                                                if ( *v81 )
                                                                {
                                                                  v407->fields.isForcedSpeedOne = v415->fields.isForcedSpeedOne;
                                                                  v407->fields.isAllAttack = v413;
                                                                  if ( *v425 )
                                                                  {
                                                                    ActorId = (__int64)this->fields.data;
                                                                    if ( ActorId )
                                                                    {
                                                                      BattleData__setCommandAttack(
                                                                        (BattleData_o *)ActorId,
                                                                        (*v425)->fields.uniqueId,
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
                                                                          v408 = this->fields.logic;
                                                                          v409 = (BattleAddSkillTaskAfterCommandAttack_o *)sub_1BE4D18(BattleAddSkillTaskAfterCommandAttack_TypeInfo);
                                                                          BattleAddSkillTaskAfterCommandAttack___ctor(
                                                                            v409,
                                                                            0LL);
                                                                          if ( v408 )
                                                                          {
                                                                            BattleLogic__AddSkillTask(
                                                                              v408,
                                                                              (BattleAddSkillTaskAroundTargetTask_o *)v409,
                                                                              v415,
                                                                              uniqueId,
                                                                              0LL);
                                                                            return *v81;
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
    sub_1BE4D28(ActorId, v58);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1

  if ( (byte_4B698F0 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleActionData_TypeInfo, task);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_8867/*"MOTION_DO_NOT_ACT"*/, v6);
    byte_4B698F0 = 1;
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
    v13 = sub_1BE4D18(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v13 )
      {
        *(_DWORD *)(v13 + 32) = (_DWORD)data;
        v20 = StringLiteral_8867/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v13 + 64) = StringLiteral_8867/*"MOTION_DO_NOT_ACT"*/;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 64), v20, v14, v15, v16, v17, v18, v19);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v13 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v13;
        }
      }
    }
LABEL_16:
    sub_1BE4D28(data, task);
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

  if ( (byte_4B698EF & 1) == 0 )
  {
    sub_1BE4ACC(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_4B698EF = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1BE4D18(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1BE4D28(data, v5);
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
  int64_t v12; // x21
  BattleActorControl_o *PartsActor; // x23
  struct BattleData_o *v14; // x8
  BattleActorControl_o *v15; // x22
  struct BattleData_o *v16; // x8
  int32_t uniqueID; // w9
  int64_t *v18; // x10
  BattleActorControl_o *v19; // x22
  int32_t v20; // w8
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B698E5 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleActionData_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_6536/*"FOCUS_UNDER"*/, v4);
    sub_1BE4ACC(&StringLiteral_6534/*"FOCUS_CENTER"*/, v5);
    sub_1BE4ACC(&StringLiteral_6538/*"FOCUS_UP"*/, v6);
    byte_4B698E5 = 1;
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
    v12 = StringLiteral_6534/*"FOCUS_CENTER"*/;
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
        v12 = StringLiteral_6534/*"FOCUS_CENTER"*/;
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
      v18 = &StringLiteral_6536/*"FOCUS_UNDER"*/;
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
      v18 = &StringLiteral_6538/*"FOCUS_UP"*/;
    }
    v12 = *v18;
    v16->fields.globaltargetId = uniqueID;
LABEL_39:
    v10 = sub_1BE4D18(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
    if ( v10 )
    {
      v20 = v9->fields.uniqueId;
      *(_DWORD *)(v10 + 32) = v20;
      *(_DWORD *)(v10 + 36) = v20;
      BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
      *(_QWORD *)(v10 + 64) = v12;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 64), v12, v21, v22, v23, v24, v25, v26);
      return (BattleActionData_o *)v10;
    }
LABEL_42:
    sub_1BE4D28(data, method);
  }
  return (BattleActionData_o *)v10;
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

  if ( (byte_4B698DB & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo, method);
    byte_4B698DB = 1;
  }
  v3 = sub_1BE4D18(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B698DD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, passiveBuffDict);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__, v15);
    sub_1BE4ACC(&BattleLogicNomal___c_TypeInfo, v16);
    byte_4B698DD = 1;
  }
  value = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_3281730 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v17) )
  {
LABEL_16:
    sub_1BE4D28(CommandCardBuffArray, v19);
  }
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
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
    _9__22_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__22_0,
      v22,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__22_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__22_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
      (int64_t)_9__22_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  System_Collections_Generic_List_object___Sort_56548584(
    v17,
    _9__22_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17;
}


bool __fastcall BattleLogicNomal__IsComboEnd(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1BE4D28(0LL, method);
  return !BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0LL)
      || !BattleLogicNomal__IsContinueCombo(this, 1, v4);
}


bool __fastcall BattleLogicNomal__IsComboStart(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x2

  data = this->fields.data;
  if ( !data )
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(data, isCheckNext);
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

  if ( (byte_4B698E7 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B698E7 = 1;
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
          sub_1BE4D28(data, method);
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
  if ( (byte_4B698E8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_4B698E8 = 1;
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
      sub_1C36A04(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C369A8(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v12 + 184);
  }
  if ( !v3 )
  {
    v13 = Method_System_Array_Empty_int___;
    v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v14 )
    {
      sub_1C36A04(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C369A8(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v16 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_2F8D4F8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    sub_1BE4D28(data, prevFieldIndiv);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  __int64 v48; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B698EC & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v6);
    sub_1BE4ACC(&BattleSkillInfoData_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B698EC = 1;
  }
  isFirstAdd = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
              v25 = (BattleSkillInfoData_o *)sub_1BE4D18(BattleSkillInfoData_TypeInfo);
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
              v28 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v28, 0LL);
              if ( !v28 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v28, v25, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1BE4B74(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v30 = Instance;
              Instance = sub_1BE4C08(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v48 = sub_1BE4D4C(0LL);
                sub_1BE4BF4(v48, 0LL);
              }
              if ( !*(_DWORD *)(v30 + 24) )
                break;
              *(_QWORD *)(v30 + 32) = v28;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v28, v31, v32, v33, v34, v35, v36);
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
              v44 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v14->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)v28,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v46 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v46[4] = (Il2CppClass *)v28;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v28, v37, v38, v39, v40, v41, v42);
              }
              max_length = v22->max_length;
              if ( (int)++v23 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1BE4D30(Instance, v16);
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
    sub_1BE4D28(Instance, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_4B698F1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v16);
    this = (BattleLogicNomal_o *)sub_1BE4ACC(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v17);
    byte_4B698F1 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !commandCodeBuffList )
    sub_1BE4D28(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
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
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v19 )
      break;
    if ( !command )
      sub_1BE4D28(v19, v20);
    current = (BattleBuffData_BuffData_o *)v42.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1BE4D28(IsEnableCommandCode, v23);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1BE4D28(IsEnableCommandCode, v23);
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
          sub_1BE4D28(v24, v25);
        vals = current->fields.vals;
        if ( !vals )
          sub_1BE4D28(v24, v25);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1BE4D30(v24, v25);
        if ( max_length == 1 )
          sub_1BE4D30(v24, v25);
        if ( !skillLvMst )
          sub_1BE4D28(v24, v25);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v30 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1BE4D28(Entity, v29);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1BE4D28(Entity, v29);
          logicfunction = v40->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v30->fields.funcId;
          v34 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v30, 0LL);
          if ( !logicfunction )
            sub_1BE4D28(DataValsList, v36);
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
          sub_1BE4D28(0LL, v25);
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
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x1

  if ( (byte_4B698DF & 1) == 0 )
  {
    sub_1BE4ACC(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BE4ACC(&StringLiteral_8858/*"MOTION_BACK"*/, v4);
    byte_4B698DF = 1;
  }
  v5 = sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    sub_1BE4D28(v6, v7);
  *(_DWORD *)(v5 + 32) = uniqueId;
  v14 = StringLiteral_8858/*"MOTION_BACK"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_8858/*"MOTION_BACK"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 64), v14, v8, v9, v10, v11, v12, v13);
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
            sub_1BE4D30(data, task);
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
    sub_1BE4D28(data, task);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B698EB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v4);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__, v5);
    sub_1BE4ACC(&BattleLogicNomal___c_TypeInfo, v6);
    byte_4B698EB = 1;
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
            sub_1BE4D30(data, task);
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
    sub_1BE4D28(data, task);
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
    monitor = (System_Action_object__o *)sub_1BE4D18(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(monitor, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__40_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_AiNpcBattleServantData__o *)monitor;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__40_0, (int64_t)monitor, v19, v20, v21, v22, v23, v24);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)monitor,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  int64_t v13; // x1
  struct System_Int32_array *targetIdlist; // x23
  __int64 v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int v22; // w8
  PartyOrganizationUtility_o *v23; // x0
  System_Array_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t *v31; // x8
  int64_t v32; // x1
  __int64 v33; // x8
  char v34; // w21
  unsigned __int64 v35; // x22
  System_Array_o *v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_RuntimeFieldHandle_o v44; // 0:w1.4
  System_RuntimeFieldHandle_o v45; // 0:w1.4

  if ( (byte_4B698E0 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleActionData_TypeInfo, task);
    sub_1BE4ACC(&FunctionEntity_TypeInfo, v5);
    sub_1BE4ACC(&int___TypeInfo, v6);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v7);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v8);
    sub_1BE4ACC(&StringLiteral_6518/*"FIELD_PLAYER"*/, v9);
    sub_1BE4ACC(&StringLiteral_6517/*"FIELD_ENEMY"*/, v10);
    byte_4B698E0 = 1;
  }
  v11 = sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v15 = sub_1BE4D18(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v15, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v11, 0LL);
    isBuster = sub_1BE4B74(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v22 = *(_DWORD *)(isBuster + 24);
      v13 = isBuster;
      if ( !v22 || (*(_DWORD *)(isBuster + 32) = 102, v22 == 1) )
LABEL_30:
        sub_1BE4D30(isBuster, v13);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 32) = isBuster;
        v23 = (PartyOrganizationUtility_o *)(v15 + 32);
LABEL_14:
        sub_1BE4A70(v23, v13, v16, v17, v18, v19, v20, v21);
        v31 = &StringLiteral_6518/*"FIELD_PLAYER"*/;
LABEL_15:
        v32 = *v31;
        *(_QWORD *)(v11 + 64) = *v31;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 64), v32, v25, v26, v27, v28, v29, v30);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1BE4D28(isBuster, v13);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v11, 0LL);
    v24 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 3LL);
    v44.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v24, v44, 0LL);
    if ( !v15 )
      goto LABEL_29;
    *(_QWORD *)(v15 + 32) = v24;
    v23 = (PartyOrganizationUtility_o *)(v15 + 32);
    v13 = (int64_t)v24;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0LL);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v11, 0LL);
    v37 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 3LL);
    v45.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v37, v45, 0LL);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = v37;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)v37, v38, v39, v40, v41, v42, v43);
      v31 = &StringLiteral_6517/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v33 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v33 < 1 )
    return 0LL;
  v34 = 0;
  v35 = 0LL;
  do
  {
    if ( v35 >= (unsigned int)v33 )
      goto LABEL_30;
    isBuster = (__int64)this->fields.data;
    if ( !isBuster )
      goto LABEL_29;
    isBuster = (__int64)BattleData__getServantData((BattleData_o *)isBuster, targetIdlist->m_Items[v35 + 1], 0LL);
    LODWORD(v33) = targetIdlist->max_length;
    ++v35;
    v34 |= isBuster != 0;
  }
  while ( (__int64)v35 < (int)v33 );
  if ( (v34 & 1) != 0 )
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
    sub_1BE4D28(v5, v6);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x21
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_Dictionary_int__object__o *v47; // x23
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_int__o *v56; // x26
  int v57; // w8
  __int64 v58; // x28
  unsigned int v59; // w22
  __int64 v60; // x25
  __int64 *v61; // x25
  __int64 v62; // t1
  Il2CppObject *v63; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v68; // w25
  Il2CppClass **v69; // x27
  Il2CppClass *v70; // x8
  char *v71; // x27
  Il2CppClass *v72; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v74; // x8
  int32_t v75; // w9
  struct BattleData_o *v76; // x8
  __int64 v77; // x28
  int v78; // w8
  unsigned int v79; // w22
  __int64 v80; // x23
  __int64 *v81; // x23
  __int64 v82; // t1
  bool v83; // w3
  char v84; // w29
  Il2CppObject *v85; // x29
  struct System_Int32_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v90; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v92; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v94; // x26
  struct BattleData_o *v95; // x8
  const MethodInfo *v96; // x2
  struct BattleData_o *v97; // x8
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v103; // w23
  char v104; // w22
  BattleBuffData_BuffData_o *v105; // x28
  BattleSkillInfoData_o *v106; // x26
  __int64 v107; // x0
  __int64 v108; // x1
  struct System_Int32_array *vals; // x8
  __int64 v110; // x0
  __int64 v111; // x1
  struct System_Int32_array *v112; // x8
  BattleData_o *v113; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v115; // x1
  SkillLvEntity_o *v116; // x0
  __int64 v117; // x1
  SkillLvEntity_o *v118; // x29
  BattleData_o *v119; // x0
  _BOOL8 v120; // x0
  __int64 v121; // x1
  BattleLogic_o *v122; // x0
  int32_t v123; // w20
  __int64 v124; // x0
  __int64 v125; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v129; // x0
  __int64 v130; // x1
  System_Collections_ICollection_o *v131; // x0
  __int64 v132; // x1
  BattleLogicTask_array *v133; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v135; // x0
  BattleLogic_o *v136; // x0
  __int64 v137; // x1
  BattleData_o *v138; // x0
  int32_t v139; // w23
  Il2CppObject *v140; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v142; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v144; // x20
  int v145; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v147; // x26
  BattleSkillInfoData_o *v148; // x25
  __int64 v149; // x0
  __int64 v150; // x1
  struct System_Int32_array *v151; // x8
  __int64 v152; // x0
  __int64 v153; // x1
  struct System_Int32_array *v154; // x8
  BattleData_o *v155; // x0
  BattleServantData_o *v156; // x27
  __int64 v157; // x1
  SkillLvEntity_o *v158; // x0
  __int64 v159; // x1
  SkillLvEntity_o *v160; // x28
  BattleData_o *v161; // x0
  _BOOL8 v162; // x0
  __int64 v163; // x1
  BattleLogic_o *v164; // x0
  int32_t v165; // w20
  __int64 v166; // x0
  __int64 v167; // x1
  System_Int32_array *v168; // x26
  bool v169; // w27
  BattleLogicSkill_o *v170; // x20
  System_Int32_array *v171; // x0
  __int64 v172; // x1
  BattleLogicTask_array *v173; // x1
  BattleLogic_o *v174; // x0
  struct BattleData_o *v175; // x8
  BattleActionData_o *v176; // x1
  const MethodInfo *v178; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v179; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v180; // [xsp+20h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-D0h]
  char v182; // [xsp+3Ch] [xbp-C4h]
  SkillLvMaster_o *v183; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v184; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v185; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4B698E9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1BE4ACC(&BattleActionData_TypeInfo, v4);
    sub_1BE4ACC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1BE4ACC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1BE4ACC(&int___TypeInfo, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__, v27);
    sub_1BE4ACC(&BattleLogicNomal___c__DisplayClass38_0_TypeInfo, v28);
    sub_1BE4ACC(&StringLiteral_8869/*"MOTION_ENEMY_TURN_END"*/, v29);
    byte_4B698E9 = 1;
  }
  entity = 0LL;
  memset(&v185, 0, sizeof(v185));
  v30 = sub_1BE4D18(BattleLogicNomal___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)this, v33, v34, v35, v36, v37, v38);
  baseActData = (BattleActionData_o *)sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v30 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !baseActData )
    goto LABEL_215;
  BattleActionData__setStateField(baseActData, 0LL);
  v40 = StringLiteral_8869/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8869/*"MOTION_ENEMY_TURN_END"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&baseActData->fields.motionname, v40, v41, v42, v43, v44, v45, v46);
  v180 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v180,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v47 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v47,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v183 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)QuestIndividualities, v50, v51, v52, v53, v54, v55);
  v56 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v56,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v179 = v47;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v57 = *(_DWORD *)(Instance + 24);
  v58 = Instance;
  if ( v57 >= 1 )
  {
    v59 = 0;
    while ( 1 )
    {
      if ( v59 >= v57 )
        goto LABEL_220;
      v60 = v58 + 8LL * (int)v59;
      v62 = *(_QWORD *)(v60 + 32);
      v61 = (__int64 *)(v60 + 32);
      Instance = v62;
      if ( !v62 )
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
        if ( v59 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_220;
        v63 = (Il2CppObject *)Instance;
        Instance = *v61;
        if ( !*v61 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v59 >= *(_DWORD *)(v58 + 24) )
            goto LABEL_220;
          Instance = *v61;
          if ( !*v61 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v63 )
              goto LABEL_215;
            if ( v63[1].monitor )
            {
              if ( v59 >= *(_DWORD *)(v58 + 24) )
                goto LABEL_220;
              Instance = (__int64)v180;
              if ( !*v61 || !v180 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v180,
                *(_DWORD *)(*v61 + 24),
                v63,
                (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v59 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_220;
        if ( !*v61 )
          goto LABEL_215;
        if ( !v56 )
          goto LABEL_215;
        v32 = *(unsigned int *)(*v61 + 24);
        items = v56->fields._items;
        v65 = Method_System_Collections_Generic_List_int__Add__;
        ++v56->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v56->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v56,
            v32,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v56->fields._size = size + 1;
          items->m_Items[size + 1] = v32;
        }
        if ( !v63 )
          goto LABEL_215;
        monitor = (int)v63[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_52:
      v57 = *(_DWORD *)(v58 + 24);
      if ( (int)++v59 >= v57 )
        goto LABEL_53;
    }
    v68 = 0;
    while ( v68 < monitor )
    {
      v69 = &v63->klass + (int)v68;
      v72 = v69[4];
      v71 = (char *)(v69 + 4);
      v70 = v72;
      if ( !v72 || !v39 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v39,
                   &entity,
                   (int32_t)v70->_1.name,
                   (const MethodInfo_31FD818 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v74 = logic->fields.data;
          if ( !v74 )
            goto LABEL_215;
          if ( v68 >= LODWORD(v63[1].monitor) )
            break;
          if ( !*(_QWORD *)v71 )
            goto LABEL_215;
          v75 = *(_DWORD *)(*(_QWORD *)v71 + 28LL);
          if ( v74->fields.endMasterSkillTurnBuffValue <= v75 )
            v74->fields.endMasterSkillTurnBuffValue = v75;
        }
      }
      monitor = (int)v63[1].monitor;
      if ( (int)++v68 >= monitor )
        goto LABEL_52;
    }
LABEL_220:
    sub_1BE4D30(Instance, v32);
  }
LABEL_53:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v76 = this->fields.data;
  if ( !v76 )
    goto LABEL_215;
  v77 = Instance;
  if ( v76->fields.leaderDown && v76->fields.endbattleFlg )
  {
    v182 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v78 = *(_DWORD *)(Instance + 24);
    if ( v78 >= 1 )
    {
      v79 = 0;
      v182 = 0;
      while ( v79 < v78 )
      {
        v80 = v77 + 8LL * (int)v79;
        v82 = *(_QWORD *)(v80 + 32);
        v81 = (__int64 *)(v80 + 32);
        Instance = v82;
        if ( !v82 )
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
            v83 = 1;
          }
          else
          {
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_215;
            Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
            v83 = Instance & 1;
          }
          if ( v79 >= *(_DWORD *)(v77 + 24) )
            goto LABEL_220;
          Instance = *v81;
          if ( !*v81 )
            goto LABEL_215;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *(System_Int32_array **)(v30 + 24),
                       this->fields.logic,
                       v83,
                       baseActData,
                       0LL);
          if ( v79 >= *(_DWORD *)(v77 + 24) )
            goto LABEL_220;
          v84 = Instance;
          Instance = *v81;
          if ( !*v81 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v79 >= *(_DWORD *)(v77 + 24) )
              goto LABEL_220;
            Instance = *v81;
            if ( !*v81 )
              goto LABEL_215;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_215;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v79 >= *(_DWORD *)(v77 + 24) )
                goto LABEL_220;
              if ( !*v81 || !v179 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v179,
                *(_DWORD *)(*v81 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v79 >= *(_DWORD *)(v77 + 24) )
            goto LABEL_220;
          if ( !*v81 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v81 + 784);
          if ( !Instance )
            goto LABEL_215;
          v182 |= v84;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v79 >= *(_DWORD *)(v77 + 24) )
          goto LABEL_220;
        Instance = *v81;
        if ( !*v81 )
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
          if ( v79 >= *(_DWORD *)(v77 + 24) )
            goto LABEL_220;
          v85 = (Il2CppObject *)Instance;
          Instance = *v81;
          if ( !*v81 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v79 >= *(_DWORD *)(v77 + 24) )
              goto LABEL_220;
            Instance = *v81;
            if ( !*v81 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v85 )
                goto LABEL_215;
              if ( v85[1].monitor )
              {
                if ( v79 >= *(_DWORD *)(v77 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v180;
                if ( !*v81 || !v180 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v180,
                  *(_DWORD *)(*v81 + 24),
                  v85,
                  (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v79 >= *(_DWORD *)(v77 + 24) )
            goto LABEL_220;
          if ( !*v81 )
            goto LABEL_215;
          if ( !v56 )
            goto LABEL_215;
          v32 = *(unsigned int *)(*v81 + 24);
          v86 = v56->fields._items;
          v87 = Method_System_Collections_Generic_List_int__Add__;
          ++v56->fields._version;
          if ( !v86 )
            goto LABEL_215;
          v88 = v56->fields._size;
          if ( (unsigned int)v88 >= v86->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v56,
              v32,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
          }
          else
          {
            v56->fields._size = v88 + 1;
            v86->m_Items[v88 + 1] = v32;
          }
        }
        v78 = *(_DWORD *)(v77 + 24);
        if ( (int)++v79 >= v78 )
          goto LABEL_111;
      }
      goto LABEL_220;
    }
    v182 = 0;
LABEL_111:
    v76 = this->fields.data;
    if ( !v76 )
      goto LABEL_215;
  }
  if ( !v56 )
    goto LABEL_215;
  battleEvent = v76->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v56,
                        (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v30 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v90 = this->fields.data;
  if ( !v90 )
    goto LABEL_215;
  perf = v90->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v90->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v92 = this->fields.data;
  if ( !v92 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v92->fields.aiNpcDataList;
  v94 = (System_Action_object__o *)sub_1BE4D18(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v94,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass38_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v94,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v95 = this->fields.data;
  if ( !v95 )
    goto LABEL_215;
  Instance = (__int64)v95->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v30 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v30 + 24), v96);
  v97 = this->fields.data;
  if ( !v97 )
    goto LABEL_215;
  v97->fields.currentTurn = 0;
  if ( !v179 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v184,
    v179,
    (const MethodInfo_3250CA0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v185 = v184;
  while ( 1 )
  {
    v98 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v185,
                            (const MethodInfo_33A0CDC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v98 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v185.fields._current.fields.value;
    if ( !v185.fields._current.fields.value )
      sub_1BE4D28(v98, v99);
    max_length = (int)v185.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v185.fields._current.fields.key;
      v103 = 0;
      v104 = 1;
LABEL_128:
      if ( v103 >= max_length )
        sub_1BE4D30(v98, v99);
      v105 = value->m_Items[v103];
      if ( !v105 )
        sub_1BE4D28(v98, v99);
      if ( v105->fields._isRemove )
        goto LABEL_164;
      if ( !v39 )
        sub_1BE4D28(v98, v99);
      v98 = DataMasterBase_object__object__int___GetEntity(
              v39,
              v105->fields.buffId,
              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v98 )
        goto LABEL_164;
      v106 = (BattleSkillInfoData_o *)sub_1BE4D18(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v106, 0LL);
      if ( !v106 )
        sub_1BE4D28(v107, v108);
      v106->fields.svtUniqueId = key;
      vals = v105->fields.vals;
      if ( !vals )
        sub_1BE4D28(v107, v108);
      if ( !vals->max_length )
        sub_1BE4D30(v107, v108);
      v110 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v106->klass->vtable._4_set_skillId.method)(
               v106,
               (unsigned int)vals->m_Items[1],
               v106->klass->vtable._5_get_skillId.methodPtr);
      v112 = v105->fields.vals;
      if ( !v112 )
        sub_1BE4D28(v110, v111);
      if ( v112->max_length <= 1 )
        sub_1BE4D30(v110, v111);
      v106->fields.skilllv = v112->m_Items[2];
      v113 = this->fields.data;
      if ( !v113 )
        sub_1BE4D28(0LL, v111);
      ServantData = BattleData__getServantData(v113, v106->fields.svtUniqueId, 0LL);
      v115 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v106->klass->vtable._5_get_skillId.method)(
               v106,
               v106->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v183 )
        sub_1BE4D28(0LL, v115);
      v116 = SkillLvMaster__GetEntity(v183, v115, v106->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1BE4D28(v116, v117);
      v118 = v116;
      v119 = this->fields.data;
      if ( !v119 )
        sub_1BE4D28(0LL, v117);
      v120 = BattleData__checkAliveOther(v119, ServantData->fields.uniqueId, 0LL);
      if ( !v120 )
      {
        if ( !v118 )
          sub_1BE4D28(v120, v121);
        v122 = this->fields.logic;
        if ( !v122 )
          sub_1BE4D28(0LL, v121);
        v98 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v122, v118->fields.funcId, 0LL);
        if ( ((unsigned __int8)v98 & 1) == 0 )
          goto LABEL_164;
      }
      v123 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v105, 0LL);
      if ( (v123 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v106->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v106, 0LL);
      }
      else
      {
        v124 = sub_1BE4B74(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v124;
        if ( !v124 )
          sub_1BE4D28(0LL, v125);
        if ( !*(_DWORD *)(v124 + 24) )
          sub_1BE4D30(v124, v125);
        exists = 0;
        *(_DWORD *)(v124 + 32) = v123;
      }
      logicskill = this->fields.logicskill;
      v129 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
      if ( !v129 )
        sub_1BE4D28(0LL, v130);
      if ( !v129->max_length )
        sub_1BE4D30(v129, v130);
      v129->m_Items[1] = key;
      if ( !logicskill )
        sub_1BE4D28(v129, v130);
      v131 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v106,
                                                   v129,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v178);
      v133 = (BattleLogicTask_array *)v131;
      if ( (v104 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v131, 0LL);
        if ( IsNullOrEmpty )
        {
          v104 = 1;
          goto LABEL_162;
        }
        if ( !v133 )
          sub_1BE4D28(IsNullOrEmpty, v132);
        if ( !v133->max_length )
          sub_1BE4D30(IsNullOrEmpty, v132);
        v135 = v133->m_Items[0];
        if ( !v135 )
          sub_1BE4D28(0LL, v132);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v135, ServantData, value, 0LL);
      }
      v104 = 0;
LABEL_162:
      v136 = this->fields.logic;
      if ( !v136 )
        sub_1BE4D28(0LL, v132);
      BattleLogic__addBattleLogicTask(v136, v133, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v103 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v185,
    (const MethodInfo_33A0E00 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v180;
  if ( !v180 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v184,
    v180,
    (const MethodInfo_3250CA0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v185 = v184;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v185,
            (const MethodInfo_33A0CDC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v138 = this->fields.data;
    if ( !v138 )
      sub_1BE4D28(0LL, v137);
    v139 = (int32_t)v185.fields._current.fields.key;
    v140 = v185.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v138, (int32_t)v185.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v144 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BE4D18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43634876(
        v144,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v144 )
        sub_1BE4D28(isEndAct, v142);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v144->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v140 )
      sub_1BE4D28(isEndAct, v142);
    v145 = (int)v140[1].monitor;
    if ( v145 >= 1 )
    {
      for ( i = 0; i < v145; ++i )
      {
        if ( i >= (unsigned int)v145 )
          sub_1BE4D30(isEndAct, v142);
        v147 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v140[2].klass + i);
        if ( !v147 )
          sub_1BE4D28(isEndAct, v142);
        if ( !v147->fields._isRemove )
        {
          if ( !v39 )
            sub_1BE4D28(isEndAct, v142);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v39,
                                              v147->fields.buffId,
                                              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v147, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v148 = (BattleSkillInfoData_o *)sub_1BE4D18(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v148, 0LL);
                if ( !v148 )
                  sub_1BE4D28(v149, v150);
                v148->fields.svtUniqueId = v139;
                v151 = v147->fields.vals;
                if ( !v151 )
                  sub_1BE4D28(v149, v150);
                if ( !v151->max_length )
                  sub_1BE4D30(v149, v150);
                v152 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v148->klass->vtable._4_set_skillId.method)(
                         v148,
                         (unsigned int)v151->m_Items[1],
                         v148->klass->vtable._5_get_skillId.methodPtr);
                v154 = v147->fields.vals;
                if ( !v154 )
                  sub_1BE4D28(v152, v153);
                if ( v154->max_length <= 1 )
                  sub_1BE4D30(v152, v153);
                v148->fields.skilllv = v154->m_Items[2];
                v155 = this->fields.data;
                if ( !v155 )
                  sub_1BE4D28(0LL, v153);
                v156 = BattleData__getServantData(v155, v148->fields.svtUniqueId, 0LL);
                v157 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v148->klass->vtable._5_get_skillId.method)(
                         v148,
                         v148->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v183 )
                  sub_1BE4D28(0LL, v157);
                v158 = SkillLvMaster__GetEntity(v183, v157, v148->fields.skilllv, 0LL);
                if ( !v156 )
                  sub_1BE4D28(v158, v159);
                v160 = v158;
                v161 = this->fields.data;
                if ( !v161 )
                  sub_1BE4D28(0LL, v159);
                v162 = BattleData__checkAliveOther(v161, v156->fields.uniqueId, 0LL);
                if ( v162 )
                  goto LABEL_198;
                if ( !v160 )
                  sub_1BE4D28(v162, v163);
                v164 = this->fields.logic;
                if ( !v164 )
                  sub_1BE4D28(0LL, v163);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v164, v160->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v165 = BattleServantData__GetRevengeIdCheckOpponentOnly(v156, v147, 0LL);
                  if ( (v165 & 0x80000000) != 0 )
                  {
                    v168 = Target__getTargetIds(this->fields.data, v148->fields.svtUniqueId, -1, v139, 13, 0LL, 0LL);
                    v169 = BattleSkillInfoData__ExistsNoTargetNoActionType(v148, 0LL);
                  }
                  else
                  {
                    v166 = sub_1BE4B74(int___TypeInfo, 1LL);
                    v168 = (System_Int32_array *)v166;
                    if ( !v166 )
                      sub_1BE4D28(0LL, v167);
                    if ( !*(_DWORD *)(v166 + 24) )
                      sub_1BE4D30(v166, v167);
                    v169 = 0;
                    *(_DWORD *)(v166 + 32) = v165;
                  }
                  v170 = this->fields.logicskill;
                  v171 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
                  if ( !v171 )
                    sub_1BE4D28(0LL, v172);
                  if ( !v171->max_length )
                    sub_1BE4D30(v171, v172);
                  v171->m_Items[1] = v139;
                  if ( !v170 )
                    sub_1BE4D28(v171, v172);
                  v173 = BattleLogicSkill__taskSkill(v170, v148, v171, v168, 1, v169, 0, 0, 0, v178);
                  v174 = this->fields.logic;
                  if ( !v174 )
                    sub_1BE4D28(0LL, v173);
                  BattleLogic__addBattleLogicTask(v174, v173, 0LL);
                }
              }
            }
          }
        }
        v145 = (int)v140[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v185,
    (const MethodInfo_33A0E00 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v175 = this->fields.data;
  if ( !v175
    || (Instance = (__int64)v175->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1BE4D28(Instance, v32);
  }
  if ( (v182 & 1) != 0 )
    v176 = baseActData;
  else
    v176 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v176, baseActData, 0LL);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x21
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_int__o *v56; // x26
  int v57; // w8
  __int64 v58; // x28
  unsigned int v59; // w20
  __int64 v60; // x22
  __int64 *v61; // x22
  __int64 v62; // t1
  bool v63; // w3
  char v64; // w29
  Il2CppObject *v65; // x2
  Il2CppObject *v66; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v71; // w22
  Il2CppClass **v72; // x23
  Il2CppClass *v73; // x8
  char *v74; // x23
  Il2CppClass *v75; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v77; // x8
  int32_t v78; // w9
  struct BattleData_o *v79; // x8
  __int64 v80; // x27
  int v81; // w8
  unsigned int v82; // w20
  __int64 v83; // x22
  __int64 *v84; // x22
  __int64 v85; // t1
  Il2CppObject *v86; // x28
  struct System_Int32_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  struct BaseBattleEvent_o *battleEvent; // x23
  struct BattleData_o *v91; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v93; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x23
  System_Action_object__o *v95; // x26
  struct BattleData_o *v96; // x8
  const MethodInfo *v97; // x2
  struct BattleData_o *v98; // x8
  Il2CppObject *v99; // x0
  __int64 v100; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v104; // w20
  char v105; // w22
  BattleBuffData_BuffData_o *v106; // x28
  BattleSkillInfoData_o *v107; // x26
  __int64 v108; // x0
  __int64 v109; // x1
  struct System_Int32_array *vals; // x8
  __int64 v111; // x0
  __int64 v112; // x1
  struct System_Int32_array *v113; // x8
  BattleData_o *v114; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v116; // x1
  SkillLvEntity_o *v117; // x0
  __int64 v118; // x1
  SkillLvEntity_o *v119; // x29
  BattleData_o *v120; // x0
  _BOOL8 v121; // x0
  __int64 v122; // x1
  BattleLogic_o *v123; // x0
  int32_t v124; // w23
  __int64 v125; // x0
  __int64 v126; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v130; // x0
  __int64 v131; // x1
  System_Collections_ICollection_o *v132; // x0
  __int64 v133; // x1
  BattleLogicTask_array *v134; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v136; // x0
  BattleLogic_o *v137; // x0
  __int64 v138; // x1
  BattleData_o *v139; // x0
  int32_t v140; // w23
  Il2CppObject *v141; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v143; // x1
  BattleServantData_o *v144; // x25
  BattleBuffData_CheckIndividualitiesData_o *v145; // x24
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x24
  int v147; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v149; // x26
  BattleSkillInfoData_o *v150; // x25
  __int64 v151; // x0
  __int64 v152; // x1
  struct System_Int32_array *v153; // x8
  __int64 v154; // x0
  __int64 v155; // x1
  struct System_Int32_array *v156; // x8
  BattleData_o *v157; // x0
  BattleServantData_o *v158; // x27
  __int64 v159; // x1
  SkillLvEntity_o *v160; // x0
  __int64 v161; // x1
  SkillLvEntity_o *v162; // x28
  BattleData_o *v163; // x0
  _BOOL8 v164; // x0
  __int64 v165; // x1
  BattleLogic_o *v166; // x0
  int32_t v167; // w28
  __int64 v168; // x0
  __int64 v169; // x1
  System_Int32_array *v170; // x26
  bool v171; // w27
  BattleLogicSkill_o *v172; // x28
  System_Int32_array *v173; // x0
  __int64 v174; // x1
  BattleLogicTask_array *v175; // x1
  BattleLogic_o *v176; // x0
  struct BattleData_o *v177; // x8
  BattleActionData_o *v178; // x1
  const MethodInfo *v180; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v181; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v182; // [xsp+18h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+20h] [xbp-D0h]
  char v184; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v185; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v186; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v187; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B698E6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1BE4ACC(&BattleActionData_TypeInfo, v4);
    sub_1BE4ACC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1BE4ACC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1BE4ACC(&int___TypeInfo, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass35_0__createEndTurnPlayer_b__0__, v27);
    sub_1BE4ACC(&BattleLogicNomal___c__DisplayClass35_0_TypeInfo, v28);
    sub_1BE4ACC(&StringLiteral_8874/*"MOTION_PLAYER_TURN_END"*/, v29);
    byte_4B698E6 = 1;
  }
  entity = 0LL;
  memset(&v187, 0, sizeof(v187));
  v30 = sub_1BE4D18(BattleLogicNomal___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)this, v33, v34, v35, v36, v37, v38);
  BattleLogicNomal__SetNextTargetId(this, v39);
  actiondata = (BattleActionData_o *)sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v30 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_215;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_215;
  BattleActionData__setStateField(actiondata, 0LL);
  v41 = StringLiteral_8874/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8874/*"MOTION_PLAYER_TURN_END"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&actiondata->fields.motionname, v41, v42, v43, v44, v45, v46, v47);
  v182 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v182,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v181 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v181,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v185 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)QuestIndividualities, v50, v51, v52, v53, v54, v55);
  v56 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v56,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v57 = *(_DWORD *)(Instance + 24);
  v58 = Instance;
  if ( v57 >= 1 )
  {
    v184 = 0;
    v59 = 0;
    while ( 1 )
    {
      if ( v59 >= v57 )
        goto LABEL_220;
      v60 = v58 + 8LL * (int)v59;
      v62 = *(_QWORD *)(v60 + 32);
      v61 = (__int64 *)(v60 + 32);
      Instance = v62;
      if ( !v62 )
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
          v63 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v63 = Instance & 1;
        }
        if ( v59 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_220;
        Instance = *v61;
        if ( !*v61 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v30 + 24),
                     this->fields.logic,
                     v63,
                     actiondata,
                     0LL);
        if ( v59 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_220;
        v64 = Instance;
        Instance = *v61;
        if ( !*v61 )
          goto LABEL_215;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v59 >= *(_DWORD *)(v58 + 24) )
            goto LABEL_220;
          Instance = *v61;
          if ( !*v61 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          v65 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v59 >= *(_DWORD *)(v58 + 24) )
              goto LABEL_220;
            Instance = (__int64)v181;
            if ( !*v61 || !v181 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v181,
              *(_DWORD *)(*v61 + 24),
              v65,
              (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v59 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_220;
        if ( !*v61 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v61 + 784);
        if ( !Instance )
          goto LABEL_215;
        v184 |= v64;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v59 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_220;
      Instance = *v61;
      if ( !*v61 )
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
        if ( v59 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_220;
        v66 = (Il2CppObject *)Instance;
        Instance = *v61;
        if ( !*v61 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v59 >= *(_DWORD *)(v58 + 24) )
            goto LABEL_220;
          Instance = *v61;
          if ( !*v61 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v66 )
              goto LABEL_215;
            if ( v66[1].monitor )
            {
              if ( v59 >= *(_DWORD *)(v58 + 24) )
                goto LABEL_220;
              Instance = (__int64)v182;
              if ( !*v61 || !v182 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v182,
                *(_DWORD *)(*v61 + 24),
                v66,
                (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v59 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_220;
        if ( !*v61 )
          goto LABEL_215;
        if ( !v56 )
          goto LABEL_215;
        v32 = *(unsigned int *)(*v61 + 24);
        items = v56->fields._items;
        v68 = Method_System_Collections_Generic_List_int__Add__;
        ++v56->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v56->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v56,
            v32,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v56->fields._size = size + 1;
          items->m_Items[size + 1] = v32;
        }
        if ( !v66 )
          goto LABEL_215;
        monitor = (int)v66[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_77:
      v57 = *(_DWORD *)(v58 + 24);
      if ( (int)++v59 >= v57 )
        goto LABEL_80;
    }
    v71 = 0;
    while ( v71 < monitor )
    {
      v72 = &v66->klass + (int)v71;
      v75 = v72[4];
      v74 = (char *)(v72 + 4);
      v73 = v75;
      if ( !v75 || !v40 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v40,
                   &entity,
                   (int32_t)v73->_1.name,
                   (const MethodInfo_31FD818 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v77 = logic->fields.data;
          if ( !v77 )
            goto LABEL_215;
          if ( v71 >= LODWORD(v66[1].monitor) )
            break;
          if ( !*(_QWORD *)v74 )
            goto LABEL_215;
          v78 = *(_DWORD *)(*(_QWORD *)v74 + 28LL);
          if ( v77->fields.endMasterSkillTurnBuffValue <= v78 )
            v77->fields.endMasterSkillTurnBuffValue = v78;
        }
      }
      monitor = (int)v66[1].monitor;
      if ( (int)++v71 >= monitor )
        goto LABEL_77;
    }
LABEL_220:
    sub_1BE4D30(Instance, v32);
  }
  v184 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v79 = this->fields.data;
  if ( !v79 )
    goto LABEL_215;
  v80 = Instance;
  if ( !v79->fields.leaderDown || !v79->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_215;
    v81 = *(_DWORD *)(Instance + 24);
    if ( v81 >= 1 )
    {
      v82 = 0;
      while ( v82 < v81 )
      {
        v83 = v80 + 8LL * (int)v82;
        v85 = *(_QWORD *)(v83 + 32);
        v84 = (__int64 *)(v83 + 32);
        Instance = v85;
        if ( !v85 )
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
          if ( v82 >= *(_DWORD *)(v80 + 24) )
            goto LABEL_220;
          v86 = (Il2CppObject *)Instance;
          Instance = *v84;
          if ( !*v84 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v82 >= *(_DWORD *)(v80 + 24) )
              goto LABEL_220;
            Instance = *v84;
            if ( !*v84 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v86 )
                goto LABEL_215;
              if ( v86[1].monitor )
              {
                if ( v82 >= *(_DWORD *)(v80 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v182;
                if ( !*v84 || !v182 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v182,
                  *(_DWORD *)(*v84 + 24),
                  v86,
                  (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v82 >= *(_DWORD *)(v80 + 24) )
            goto LABEL_220;
          if ( !*v84 )
            goto LABEL_215;
          if ( !v56 )
            goto LABEL_215;
          v32 = *(unsigned int *)(*v84 + 24);
          v87 = v56->fields._items;
          v88 = Method_System_Collections_Generic_List_int__Add__;
          ++v56->fields._version;
          if ( !v87 )
            goto LABEL_215;
          v89 = v56->fields._size;
          if ( (unsigned int)v89 >= v87->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v56,
              v32,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v56->fields._size = v89 + 1;
            v87->m_Items[v89 + 1] = v32;
          }
        }
        v81 = *(_DWORD *)(v80 + 24);
        if ( (int)++v82 >= v81 )
          goto LABEL_110;
      }
      goto LABEL_220;
    }
LABEL_110:
    v79 = this->fields.data;
    if ( !v79 )
      goto LABEL_215;
  }
  if ( !v56 )
    goto LABEL_215;
  battleEvent = v79->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v56,
                        (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v30 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v91 = this->fields.data;
  if ( !v91 )
    goto LABEL_215;
  perf = v91->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v91->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v93 = this->fields.data;
  if ( !v93 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v93->fields.aiNpcDataList;
  v95 = (System_Action_object__o *)sub_1BE4D18(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v95,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass35_0__createEndTurnPlayer_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v95,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v96 = this->fields.data;
  if ( !v96 )
    goto LABEL_215;
  Instance = (__int64)v96->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v30 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v30 + 24), v97);
  v98 = this->fields.data;
  if ( !v98 )
    goto LABEL_215;
  Instance = (__int64)v181;
  v98->fields.currentTurn = 1;
  if ( !v181 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v186,
    v181,
    (const MethodInfo_3250CA0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v187 = v186;
  while ( 1 )
  {
    v99 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v187,
                            (const MethodInfo_33A0CDC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v99 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v187.fields._current.fields.value;
    if ( !v187.fields._current.fields.value )
      sub_1BE4D28(v99, v100);
    max_length = (int)v187.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v187.fields._current.fields.key;
      v104 = 0;
      v105 = 1;
LABEL_127:
      if ( v104 >= max_length )
        sub_1BE4D30(v99, v100);
      v106 = value->m_Items[v104];
      if ( !v106 )
        sub_1BE4D28(v99, v100);
      if ( v106->fields._isRemove )
        goto LABEL_163;
      if ( !v40 )
        sub_1BE4D28(v99, v100);
      v99 = DataMasterBase_object__object__int___GetEntity(
              v40,
              v106->fields.buffId,
              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v99 )
        goto LABEL_163;
      v107 = (BattleSkillInfoData_o *)sub_1BE4D18(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v107, 0LL);
      if ( !v107 )
        sub_1BE4D28(v108, v109);
      v107->fields.svtUniqueId = key;
      vals = v106->fields.vals;
      if ( !vals )
        sub_1BE4D28(v108, v109);
      if ( !vals->max_length )
        sub_1BE4D30(v108, v109);
      v111 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v107->klass->vtable._4_set_skillId.method)(
               v107,
               (unsigned int)vals->m_Items[1],
               v107->klass->vtable._5_get_skillId.methodPtr);
      v113 = v106->fields.vals;
      if ( !v113 )
        sub_1BE4D28(v111, v112);
      if ( v113->max_length <= 1 )
        sub_1BE4D30(v111, v112);
      v107->fields.skilllv = v113->m_Items[2];
      v114 = this->fields.data;
      if ( !v114 )
        sub_1BE4D28(0LL, v112);
      ServantData = BattleData__getServantData(v114, v107->fields.svtUniqueId, 0LL);
      v116 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v107->klass->vtable._5_get_skillId.method)(
               v107,
               v107->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v185 )
        sub_1BE4D28(0LL, v116);
      v117 = SkillLvMaster__GetEntity(v185, v116, v107->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1BE4D28(v117, v118);
      v119 = v117;
      v120 = this->fields.data;
      if ( !v120 )
        sub_1BE4D28(0LL, v118);
      v121 = BattleData__checkAliveOther(v120, ServantData->fields.uniqueId, 0LL);
      if ( !v121 )
      {
        if ( !v119 )
          sub_1BE4D28(v121, v122);
        v123 = this->fields.logic;
        if ( !v123 )
          sub_1BE4D28(0LL, v122);
        v99 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v123, v119->fields.funcId, 0LL);
        if ( ((unsigned __int8)v99 & 1) == 0 )
          goto LABEL_163;
      }
      v124 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v106, 0LL);
      if ( (v124 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v107->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v107, 0LL);
      }
      else
      {
        v125 = sub_1BE4B74(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v125;
        if ( !v125 )
          sub_1BE4D28(0LL, v126);
        if ( !*(_DWORD *)(v125 + 24) )
          sub_1BE4D30(v125, v126);
        exists = 0;
        *(_DWORD *)(v125 + 32) = v124;
      }
      logicskill = this->fields.logicskill;
      v130 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
      if ( !v130 )
        sub_1BE4D28(0LL, v131);
      if ( !v130->max_length )
        sub_1BE4D30(v130, v131);
      v130->m_Items[1] = key;
      if ( !logicskill )
        sub_1BE4D28(v130, v131);
      v132 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v107,
                                                   v130,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v180);
      v134 = (BattleLogicTask_array *)v132;
      if ( (v105 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v132, 0LL);
        if ( IsNullOrEmpty )
        {
          v105 = 1;
          goto LABEL_161;
        }
        if ( !v134 )
          sub_1BE4D28(IsNullOrEmpty, v133);
        if ( !v134->max_length )
          sub_1BE4D30(IsNullOrEmpty, v133);
        v136 = v134->m_Items[0];
        if ( !v136 )
          sub_1BE4D28(0LL, v133);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v136, ServantData, value, 0LL);
      }
      v105 = 0;
LABEL_161:
      v137 = this->fields.logic;
      if ( !v137 )
        sub_1BE4D28(0LL, v133);
      BattleLogic__addBattleLogicTask(v137, v134, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v104 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v187,
    (const MethodInfo_33A0E00 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v182;
  if ( !v182 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v186,
    v182,
    (const MethodInfo_3250CA0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v187 = v186;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v187,
            (const MethodInfo_33A0CDC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v139 = this->fields.data;
    if ( !v139 )
      sub_1BE4D28(0LL, v138);
    v140 = (int32_t)v187.fields._current.fields.key;
    v141 = v187.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v139, (int32_t)v187.fields._current.fields.key, 0LL);
    v144 = isEndAct;
    if ( isEndAct )
    {
      v145 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BE4D18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43634876(v145, v144, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v145 )
        sub_1BE4D28(isEndAct, v143);
      selfConcatSvtIndividualities_k__BackingField = v145->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v141 )
LABEL_250:
        sub_1BE4D28(isEndAct, v143);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0LL;
      if ( !v141 )
        goto LABEL_250;
    }
    v147 = (int)v141[1].monitor;
    if ( v147 >= 1 )
    {
      for ( i = 0; i < v147; ++i )
      {
        if ( i >= (unsigned int)v147 )
          sub_1BE4D30(isEndAct, v143);
        v149 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v141[2].klass + i);
        if ( !v149 )
          sub_1BE4D28(isEndAct, v143);
        if ( !v149->fields._isRemove )
        {
          if ( !v40 )
            sub_1BE4D28(isEndAct, v143);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v40,
                                              v149->fields.buffId,
                                              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v149, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v150 = (BattleSkillInfoData_o *)sub_1BE4D18(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v150, 0LL);
                if ( !v150 )
                  sub_1BE4D28(v151, v152);
                v150->fields.svtUniqueId = v140;
                v153 = v149->fields.vals;
                if ( !v153 )
                  sub_1BE4D28(v151, v152);
                if ( !v153->max_length )
                  sub_1BE4D30(v151, v152);
                v154 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v150->klass->vtable._4_set_skillId.method)(
                         v150,
                         (unsigned int)v153->m_Items[1],
                         v150->klass->vtable._5_get_skillId.methodPtr);
                v156 = v149->fields.vals;
                if ( !v156 )
                  sub_1BE4D28(v154, v155);
                if ( v156->max_length <= 1 )
                  sub_1BE4D30(v154, v155);
                v150->fields.skilllv = v156->m_Items[2];
                v157 = this->fields.data;
                if ( !v157 )
                  sub_1BE4D28(0LL, v155);
                v158 = BattleData__getServantData(v157, v150->fields.svtUniqueId, 0LL);
                v159 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v150->klass->vtable._5_get_skillId.method)(
                         v150,
                         v150->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v185 )
                  sub_1BE4D28(0LL, v159);
                v160 = SkillLvMaster__GetEntity(v185, v159, v150->fields.skilllv, 0LL);
                if ( !v158 )
                  sub_1BE4D28(v160, v161);
                v162 = v160;
                v163 = this->fields.data;
                if ( !v163 )
                  sub_1BE4D28(0LL, v161);
                v164 = BattleData__checkAliveOther(v163, v158->fields.uniqueId, 0LL);
                if ( v164 )
                  goto LABEL_198;
                if ( !v162 )
                  sub_1BE4D28(v164, v165);
                v166 = this->fields.logic;
                if ( !v166 )
                  sub_1BE4D28(0LL, v165);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v166, v162->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v167 = BattleServantData__GetRevengeIdCheckOpponentOnly(v158, v149, 0LL);
                  if ( (v167 & 0x80000000) != 0 )
                  {
                    v170 = Target__getTargetIds(this->fields.data, v150->fields.svtUniqueId, -1, v140, 13, 0LL, 0LL);
                    v171 = BattleSkillInfoData__ExistsNoTargetNoActionType(v150, 0LL);
                  }
                  else
                  {
                    v168 = sub_1BE4B74(int___TypeInfo, 1LL);
                    v170 = (System_Int32_array *)v168;
                    if ( !v168 )
                      sub_1BE4D28(0LL, v169);
                    if ( !*(_DWORD *)(v168 + 24) )
                      sub_1BE4D30(v168, v169);
                    v171 = 0;
                    *(_DWORD *)(v168 + 32) = v167;
                  }
                  v172 = this->fields.logicskill;
                  v173 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
                  if ( !v173 )
                    sub_1BE4D28(0LL, v174);
                  if ( !v173->max_length )
                    sub_1BE4D30(v173, v174);
                  v173->m_Items[1] = v140;
                  if ( !v172 )
                    sub_1BE4D28(v173, v174);
                  v175 = BattleLogicSkill__taskSkill(v172, v150, v173, v170, 1, v171, 0, 0, 0, v180);
                  v176 = this->fields.logic;
                  if ( !v176 )
                    sub_1BE4D28(0LL, v175);
                  BattleLogic__addBattleLogicTask(v176, v175, 0LL);
                }
              }
            }
          }
        }
        v147 = (int)v141[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v187,
    (const MethodInfo_33A0E00 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v177 = this->fields.data;
  if ( !v177
    || (Instance = (__int64)v177->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1BE4D28(Instance, v32);
  }
  if ( (v184 & 1) != 0 )
    v178 = actiondata;
  else
    v178 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v178, actiondata, 0LL);
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

  if ( (byte_4B698E3 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleActionData_TypeInfo, task);
    byte_4B698E3 = 1;
  }
  v4 = sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_1BE4D28(v5, v6);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 64), (int64_t)motionName, v8, v9, v10, v11, v12, v13);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 128), (int64_t)motionMessage, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 72), (int64_t)targetObject, v22, v23, v24, v25, v26, v27);
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
    sub_1BE4D28(this, task);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  BattleActionData_ShiftServant_o *v17; // x22

  v4 = this;
  if ( (byte_4B698ED & 1) == 0 )
  {
    sub_1BE4ACC(&BattleActionData_TypeInfo, task);
    sub_1BE4ACC(&BattleActionData_ShiftServant_TypeInfo, v5);
    this = (BattleLogicNomal_o *)sub_1BE4ACC(&StringLiteral_8878/*"MOTION_SHIFT"*/, v6);
    byte_4B698ED = 1;
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
    v9 = sub_1BE4D18(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v9, 0LL);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 32) = v8->fields.uniqueId;
      v16 = StringLiteral_8878/*"MOTION_SHIFT"*/;
      *(_QWORD *)(v9 + 64) = StringLiteral_8878/*"MOTION_SHIFT"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 64), v16, v10, v11, v12, v13, v14, v15);
      v17 = (BattleActionData_ShiftServant_o *)sub_1BE4D18(BattleActionData_ShiftServant_TypeInfo);
      BattleActionData_ShiftServant___ctor(v17, 0, 0LL);
      if ( v17 )
      {
        BattleActionData_ShiftServant__setBeforeSvtData(v17, v8, 0LL);
        BattleServantData__setShiftServant(v8, v4->fields.data, 1, 0LL);
        BattleServantData__SetIsBattleShift(v8, 1, 0LL);
        BattleActionData_ShiftServant__setCheckSvtData(v17, v8, 0LL);
        BattleActionData__setShiftServant((BattleActionData_o *)v9, v17, 0LL);
        this = (BattleLogicNomal_o *)v4->fields.logic;
        if ( this )
        {
          BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, v8->fields.uniqueId, 1, 0, 0LL);
          return (BattleActionData_o *)v9;
        }
      }
    }
LABEL_12:
    sub_1BE4D28(this, task);
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

  if ( (byte_4B698E4 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, task);
    sub_1BE4ACC(&StringLiteral_11235/*"RESET_CAMERA_BAT"*/, v5);
    byte_4B698E4 = 1;
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
              (System_String_o *)StringLiteral_11235/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v9;
          }
        }
      }
LABEL_18:
      sub_1BE4D28(StartTurn, v7);
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
        sub_1BE4D30(data, task);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 540) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1BE4D28(data, task);
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
    sub_1BE4D28(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1BE4D30(this, svtList);
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
    sub_1BE4D30(data, *(_QWORD *)&uniqueId);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1BE4D28(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BE4D28(this, method);
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

  if ( (byte_4B698D7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1BE4ACC(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4B698D7 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1BE4D18(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_1BE4D28(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v7,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  const MethodInfo *v33; // x2
  __int64 v35; // x22
  const MethodInfo *v36; // x2
  int64_t v37; // x23
  System_Func_object__bool__o *v38; // x24
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x2
  struct BattleLogic_o *logic; // x8
  struct BattleLogicReaction_o *logicReaction; // x8
  BattleLogicTask_o *v54; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  struct BattleLogic_o *v65; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v67; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0

  if ( (byte_4B698EE & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, task);
    sub_1BE4ACC(&BeforeShiftServantReactTaskCreator_TypeInfo, v5);
    sub_1BE4ACC(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_1BE4ACC(&ReactTaskTargetFilter_TypeInfo, v12);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__, v13);
    sub_1BE4ACC(&BattleLogicNomal___c__DisplayClass48_0_TypeInfo, v14);
    byte_4B698EE = 1;
  }
  v15 = sub_1BE4D18(BattleLogicNomal___c__DisplayClass48_0_TypeInfo);
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
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    v35 = sub_1BE4D18(BeforeShiftServantReactTaskCreator_TypeInfo);
    ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)v35, 24, v36);
    if ( v35 )
    {
      ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v35, v17);
      v37 = sub_1BE4D18(ReactTaskTargetFilter_TypeInfo);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      v38 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v38,
        (Il2CppObject *)v15,
        Method_BattleLogicNomal___c__DisplayClass48_0__shiftServantTaskReaction_b__0__,
        0LL);
      if ( v37 )
      {
        *(_QWORD *)(v37 + 16) = v38;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)v38, v39, v40, v41, v42, v43, v44);
        *(_QWORD *)(v35 + 24) = v37;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 24), v37, v45, v46, v47, v48, v49, v50);
        logic = this->fields.logic;
        if ( logic )
        {
          logicReaction = logic->fields.logicReaction;
          if ( logicReaction )
          {
            ShiftableUniqueId = (BattleData_o *)ServantReactTaskCreator__CreateTasks(
                                                  (ServantReactTaskCreator_o *)v35,
                                                  logicReaction->fields.logic,
                                                  v51);
            if ( v20 )
            {
              System_Collections_Generic_List_object___AddRange(
                v20,
                (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
                (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              v54 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v54, 0LL);
              if ( v54 )
              {
                v54->fields.actiontype = 37;
                BattleLogicTask__setActor(v54, 3, *(_DWORD *)(v15 + 16), 0LL);
                items = v20->fields._items;
                v62 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v20->fields._version;
                if ( items )
                {
                  size = v20->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v20,
                      (Il2CppObject *)v54,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v64 = &items->obj.klass + size;
                    v20->fields._size = size + 1;
                    v64[4] = (Il2CppClass *)v54;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v54, v55, v56, v57, v58, v59, v60);
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
    sub_1BE4D28(ShiftableUniqueId, v17);
  }
  v22 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_37;
  v22->fields.actiontype = 62;
  BattleLogicTask__setActor(v22, 3, *(_DWORD *)(v15 + 16), 0LL);
  if ( !v20 )
    goto LABEL_37;
  v29 = v20->fields._items;
  v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v20->fields._version;
  if ( !v29 )
    goto LABEL_37;
  v31 = v20->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v22,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v20->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v22;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  }
  v65 = this->fields.logic;
  if ( !v65 )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)v65->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                              *(_DWORD *)(v15 + 16),
                                                              v33);
  if ( TaskGuts )
    System_Collections_Generic_List_object___AddRange(
      v20,
      TaskGuts,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_31:
  v67 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v67, 0LL);
  if ( !v67 )
    goto LABEL_37;
  v67->fields.actiontype = 36;
  BattleLogicTask__setActor(v67, 3, *(_DWORD *)(v15 + 16), 0LL);
  v74 = v20->fields._items;
  v75 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v20->fields._version;
  if ( !v74 )
    goto LABEL_37;
  v76 = v20->fields._size;
  if ( (unsigned int)v76 >= v74->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v67,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = &v74->obj.klass + v76;
    v20->fields._size = v76 + 1;
    v77[4] = (Il2CppClass *)v67;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v67, v68, v69, v70, v71, v72, v73);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B698D9 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4B698D9 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1BE4D28(battleEvent, v13);
  }
  v20 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
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
  v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v20,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v20;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B698EA & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B698EA = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v12 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1BE4D28(v10, v11);
    }
    v12 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v12, 0LL);
    if ( !v12 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v12, 0LL);
  }
  if ( !v9 )
    goto LABEL_14;
  items = v9->fields._items;
  v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v12;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B698DC & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B698DC = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v12 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v12, 0LL),
        !v12)
    || (BattleLogicTask__setSystem(v12, 0LL), !v9)
    || (items = v9->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1BE4D28(logic, v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v12;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1BE4D28(this, *(_QWORD *)&ltype);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4B698D8 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4B698D8 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v19 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
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
        v39 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v19,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v19;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v19, v32, v33, v34, v35, v36, v37);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1BE4D28(battleEvent, v13);
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
  v28 = v11->fields._items;
  v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !v28 )
    goto LABEL_37;
  v30 = v11->fields._size;
  if ( (unsigned int)v30 >= v28->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v19,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    v11->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v19;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x9
  BattleLogicNomal___c_c *v64; // x0
  System_Action_object__o *_9__18_0; // x20
  Il2CppObject *v66; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct BattleLogic_o *logic; // x8
  _BOOL4 v76; // [xsp+4h] [xbp-9Ch]
  BattleLogicNomal_o *v77; // [xsp+8h] [xbp-98h]
  SkillLvMaster_o *v78; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v79; // [xsp+18h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // [xsp+20h] [xbp-80h]
  char v82; // [xsp+38h] [xbp-68h]
  int32_t type; // [xsp+3Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4B698DA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v11);
    sub_1BE4ACC(&BattleSkillInfoData_TypeInfo, v12);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_BuffMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1BE4ACC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77089672, v17);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1BE4ACC(&int___TypeInfo, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v23);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__, v26);
    sub_1BE4ACC(&BattleLogicNomal___c_TypeInfo, v27);
    byte_4B698DA = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_BuffMaster___);
  v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
        sub_1BE4D30(Instance, wasAttackTargetId);
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
                      v77 = this;
                      v78 = (SkillLvMaster_o *)MasterData_object;
                      v76 = v6;
                      v79 = (System_Collections_Generic_HashSet_T__o *)sub_1BE4D18(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_55202688(
                        v79,
                        v39,
                        (const MethodInfo_34A5380 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77089672);
                      monitor = v39[1].monitor;
                      v41 = isSkillCounter;
                      v42 = v80;
                      if ( (int)monitor >= 1 )
                      {
                        v43 = 4LL;
                        v82 = 1;
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
                            v45 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
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
                                Instance = (__int64)v78;
                                if ( !v78 )
                                  goto LABEL_76;
                                Instance = (__int64)SkillLvMaster__GetEntity(v78, wasAttackTargetId, counterLv, 0LL);
                                if ( !Instance )
                                {
                                  v41 = isSkillCounter;
                                  v42 = v80;
                                  goto LABEL_58;
                                }
                                v47 = Instance;
                                v48 = sub_1BE4D18(BattleSkillInfoData_TypeInfo);
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
                                Instance = sub_1BE4B74(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                v51 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v37->fields.wasAttackTargetId;
                                Instance = sub_1BE4B74(int___TypeInfo, 1LL);
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
                                v42 = v80;
                                if ( !v80 )
                                  goto LABEL_76;
                              }
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v42,
                                                    v44->fields.buffId,
                                                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_76;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0LL);
                              BattleLogicTask__setMessage(v45, CounterMessage, 2, 0LL);
                              v45->fields.isCounter = 1;
                              if ( (v82 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v45,
                                  v37,
                                  (BattleBuffData_BuffData_array *)v39,
                                  0LL);
                              if ( !v28 )
                                goto LABEL_76;
                              items = v28->fields._items;
                              v60 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v28->fields._version;
                              if ( !items )
                                goto LABEL_76;
                              size = v28->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v28,
                                  (Il2CppObject *)v45,
                                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v62 = &items->obj.klass + size;
                                v28->fields._size = size + 1;
                                v62[4] = (Il2CppClass *)v45;
                                sub_1BE4A70(
                                  (PartyOrganizationUtility_o *)(v62 + 4),
                                  (int64_t)v45,
                                  v53,
                                  v54,
                                  v55,
                                  v56,
                                  v57,
                                  v58);
                              }
                              Instance = (__int64)v79;
                              if ( !v79 )
                                goto LABEL_76;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v79,
                                           (Il2CppObject *)v44,
                                           (const MethodInfo_34A5B50 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v82 = 0;
                            }
                          }
LABEL_58:
                          LODWORD(monitor) = v39[1].monitor;
                          v63 = v43 - 3;
                          ++v43;
                        }
                        while ( v63 < (int)monitor );
                      }
                      v64 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v64 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v77;
                      MasterData_object = (Il2CppObject *)v78;
                      v6 = v76;
                      _9__18_0 = (System_Action_object__o *)v64->static_fields->__9__18_0;
                      if ( !_9__18_0 )
                      {
                        if ( !v64->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v64);
                          v64 = BattleLogicNomal___c_TypeInfo;
                        }
                        v66 = (Il2CppObject *)v64->static_fields->__9;
                        _9__18_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__18_0,
                          v66,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__18_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__18_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__18_0;
                        sub_1BE4A70(
                          (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
                          (int64_t)_9__18_0,
                          v68,
                          v69,
                          v70,
                          v71,
                          v72,
                          v73);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v79,
                        (System_Action_T__o *)_9__18_0,
                        (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    sub_1BE4D28(Instance, wasAttackTargetId);
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
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t v23; // w1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B698E1 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, svtData);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B698E1 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v13, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v13 + 128) = gameObject;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 128), (int64_t)gameObject, v17, v18, v19, v20, v21, v22);
  if ( !svtData )
    goto LABEL_15;
  v23 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v13, v23, svtData->fields.uniqueId, 0LL);
  if ( !v12
    || (items = v12->fields._items,
        v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_15:
    sub_1BE4D28(v14, v15);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v13,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v13;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 4), v13, v24, v25, v26, v27, v28, v29);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v23; // x21
  BattleEntity_o *battle_ent; // x0
  __int64 v25; // x1
  System_String_o *v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  bool v36; // w23
  System_String_o *v37; // x0
  BattleData_o *v38; // x8
  System_String_o *v39; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v41; // x2
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  int32_t uniqueId; // w2
  System_String_o *v48; // x20
  BattleLogicTask_o *v49; // x0
  System_String_o *v50; // x1
  struct BattleData_o *v51; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v53; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v55; // x2
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  System_String_o *v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  int v72; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B698E2 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, svtData);
    sub_1BE4ACC(&int_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_3024/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_1BE4ACC(&StringLiteral_8870/*"MOTION_ENTRY"*/, v16);
    sub_1BE4ACC(&StringLiteral_3022/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_1BE4ACC(&StringLiteral_3023/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_1BE4ACC(&StringLiteral_8871/*"MOTION_ENTRY_TAC"*/, v19);
    byte_4B698E2 = 1;
  }
  v20 = StringLiteral_8871/*"MOTION_ENTRY_TAC"*/;
  v21 = StringLiteral_8870/*"MOTION_ENTRY"*/;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_30;
  v26 = (System_String_o *)(isTactical ? v20 : v21);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v23, v26, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v23 + 128) = gameObject;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 128), (int64_t)gameObject, v28, v29, v30, v31, v32, v33);
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
          v36 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3023/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
LABEL_23:
              v60 = v37;
              BattleLogicTask__setActor((BattleLogicTask_o *)v23, 3, svtData->fields.uniqueId, 0LL);
              v49 = (BattleLogicTask_o *)v23;
              v50 = v60;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v36 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3022/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
          v51 = this->fields.data;
          if ( !v51 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v51->fields._EnemyCountStartValue_k__BackingField;
          v53 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v51, 0LL);
          v72 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v55)
              + EnemyCountStartValue_k__BackingField;
          v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v56, v57, v58);
          v37 = System_String__Format(v53, v59, 0LL);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1BE4D28(battle_ent, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3024/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v38 = this->fields.data;
  if ( !v38 )
    goto LABEL_30;
  v39 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v38, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v41);
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember, v42, v43, v44);
  v46 = System_String__Format(v39, v45, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v48 = v46;
  BattleLogicTask__setActor((BattleLogicTask_o *)v23, 2, uniqueId, 0LL);
  v49 = (BattleLogicTask_o *)v23;
  v50 = v48;
LABEL_24:
  BattleLogicTask__setMessage(v49, v50, 1, 0LL);
  if ( !v22 )
    goto LABEL_30;
  items = v22->fields._items;
  v68 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v23,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v70[4] = (Il2CppClass *)v23;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v70 + 4), v23, v61, v62, v63, v64, v65, v66);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  struct BattleData_o *data; // x8
  int64_t selectcommandlist; // x1
  _BOOL8 IsEnableToAttack; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v28; // x8
  int v29; // w9
  int32_t _7__wrap5; // w8
  int v31; // w9
  bool result; // w0
  PartyOrganizationUtility_o *p__7__wrap1; // x8
  struct BattleCommandData_array *v34; // x10
  struct BattleCommandData_array *_7__wrap1; // t1
  int max_length; // w11
  BattleCommandData_o *v37; // x19
  BattleData_o *v38; // x0
  BattleServantData_o *ServantData; // x20
  const MethodInfo *v40; // x2
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v41; // x20
  BattleLogicNomal___c_c *v42; // x0
  System_Func_object__int__o *_9__20_0; // x21
  Il2CppObject *v44; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x0
  __int64 v53; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x0
  __int64 v67; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v68; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v69; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  BattleSkillInfoData_o *v76; // x19
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v78; // x0
  __int64 v79; // x1
  BattleLogicTask_array *v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct BattleLogicTask_array *_7__wrap4; // x10
  il2cpp_array_size_t v88; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  const MethodInfo *v94; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x1
  const MethodInfo *v102; // [xsp+8h] [xbp-58h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *v103; // [xsp+28h] [xbp-38h]

  v103 = this;
  v8 = this;
  if ( (byte_4B698F9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___, method);
    sub_1BE4ACC(&System_Func_BattleSkillInfoData__int__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BE4ACC(&int___TypeInfo, v13);
    sub_1BE4ACC(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__, v14);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_o *)sub_1BE4ACC(
                                                                            &BattleLogicNomal___c_TypeInfo,
                                                                            v15);
    byte_4B698F9 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    v8->fields.__1__state = -3;
    v31 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_57;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BE4D28(this, method);
  data = _4__this->fields.data;
  if ( !data )
    sub_1BE4D28(this, method);
  selectcommandlist = (int64_t)data->fields.selectcommandlist;
  v8->fields.__7__wrap1 = (struct BattleCommandData_array *)selectcommandlist;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, selectcommandlist, v2, v3, v4, v5, v6, v7);
  v28 = v103;
  v29 = 0;
  for ( v103->fields.__7__wrap2 = 0; ; v103->fields.__7__wrap2 = v29 )
  {
    _7__wrap1 = v28->fields.__7__wrap1;
    p__7__wrap1 = (PartyOrganizationUtility_o *)&v28->fields.__7__wrap1;
    v34 = _7__wrap1;
    if ( !_7__wrap1 )
      sub_1BE4D28(IsEnableToAttack, v21);
    max_length = v34->max_length;
    if ( v29 >= max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1BE4A70(p__7__wrap1, 0LL, v22, v23, v24, v25, v26, v27);
      return 0;
    }
    if ( v29 >= (unsigned int)max_length )
      sub_1BE4D30(IsEnableToAttack, v21);
    if ( !_4__this )
      sub_1BE4D28(IsEnableToAttack, v21);
    v37 = v34->m_Items[v29];
    if ( !v37 )
      sub_1BE4D28(IsEnableToAttack, v21);
    v38 = _4__this->fields.data;
    if ( !v38 )
      sub_1BE4D28(0LL, v21);
    ServantData = BattleData__getServantData(v38, v37->fields.uniqueId, 0LL);
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(ServantData, v37, v40);
    if ( IsEnableToAttack )
      break;
LABEL_69:
    v28 = v103;
    v29 = v103->fields.__7__wrap2 + 1;
  }
  if ( !ServantData )
    sub_1BE4D28(IsEnableToAttack, v21);
  v41 = BattleServantData__EnumerateConfirmCommandFunctionSkill(ServantData, v37, 0LL);
  v42 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v42 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__int__o *)v42->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = BattleLogicNomal___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__20_0,
      v44,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__20_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__20_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
      (int64_t)_9__20_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v54 = v52;
  if ( !v52 )
    sub_1BE4D28(0LL, v53);
  klass = v52->klass;
  v56 = *(unsigned __int16 *)(&v52->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v52->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v56;
      p_offset += 4;
      if ( !v56 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1C36AAC(v52, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v59 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v54,
          *(_QWORD *)(p_method + 8));
  if ( !v103 )
    sub_1BE4D28(v59, v59);
  v103->fields.__7__wrap3 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v59;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v103->fields.__7__wrap3, v59, v60, v61, v62, v63, v64, v65);
  v68 = v103;
  v103->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap3 = v68->fields.__7__wrap3;
    if ( !_7__wrap3 )
      sub_1BE4D28(v66, v67);
    v90 = _7__wrap3->klass;
    v91 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      v92 = &v90->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v92 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v91;
        v92 += 4;
        if ( !v91 )
          goto LABEL_65;
      }
      v93 = (__int64)&v90->vtable[*v92].method;
    }
    else
    {
LABEL_65:
      v93 = sub_1C36AAC(_7__wrap3, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v93)(
            _7__wrap3,
            *(_QWORD *)(v93 + 8)) & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20____m__Finally1(v103, v94);
      v103->fields.__7__wrap3 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v103->fields.__7__wrap3, 0LL, v95, v96, v97, v98, v99, v100);
      goto LABEL_69;
    }
    v69 = v103->fields.__7__wrap3;
    if ( !v69 )
      sub_1BE4D28(v103, v94);
    v70 = v69->klass;
    v71 = *(unsigned __int16 *)(&v69->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v69->klass->_2.bitflags2 + 3) )
    {
      v72 = &v70->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v72 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_49;
      }
      v73 = (__int64)&v70->vtable[*v72].method;
    }
    else
    {
LABEL_49:
      v73 = sub_1C36AAC(
              v103->fields.__7__wrap3,
              System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
              0LL);
    }
    v74 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v73)(
            v69,
            *(_QWORD *)(v73 + 8));
    if ( !_4__this )
      sub_1BE4D28(v74, v75);
    v76 = (BattleSkillInfoData_o *)v74;
    logicskill = _4__this->fields.logicskill;
    v78 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
    if ( !v76 )
      sub_1BE4D28(v78, v79);
    if ( !v78 )
      sub_1BE4D28(0LL, v79);
    if ( !v78->max_length )
      sub_1BE4D30(v78, v79);
    v78->m_Items[1] = v76->fields.svtUniqueId;
    if ( !logicskill )
      sub_1BE4D28(v78, v79);
    v80 = BattleLogicSkill__taskSkill(logicskill, v76, v78, 0LL, 0, 0, 0, 0, 0, v102);
    v103->fields.__7__wrap4 = v80;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v103->fields.__7__wrap4, (int64_t)v80, v81, v82, v83, v84, v85, v86);
    v8 = v103;
    v31 = 0;
    v103->fields.__7__wrap5 = 0;
LABEL_57:
    _7__wrap4 = v8->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1BE4D28(this, method);
    v88 = _7__wrap4->max_length;
    if ( v31 < (int)v88 )
      break;
    v8->fields.__7__wrap4 = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__7__wrap4, 0LL, v2, v3, v4, v5, v6, v7);
    v68 = v103;
  }
  if ( v31 >= v88 )
    sub_1BE4D30(this, method);
  v101 = (int64_t)_7__wrap4->m_Items[v31];
  v8->fields.__2__current = (struct BattleLogicTask_o *)v101;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__2__current, v101, v2, v3, v4, v5, v6, v7);
  result = 1;
  v103->fields.__1__state = 1;
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

  if ( (byte_4B698FB & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo, method);
    byte_4B698FB = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1BE4D18(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__20_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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

  if ( (byte_4B698FA & 1) == 0 )
  {
    sub_1BE4ACC(&System_IDisposable_TypeInfo, method);
    byte_4B698FA = 1;
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
      p_method = sub_1C36AAC(_7__wrap3, System_IDisposable_TypeInfo, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B698F3 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicNomal___c_TypeInfo, v1);
    byte_4B698F3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BattleLogicNomal___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B698F4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_4B698F4 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__22_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__40_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1BE4D28(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__18_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
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

  if ( (byte_4B698F5 & 1) == 0 )
  {
    sub_1BE4ACC(&BuffList_TypeInfo, targetSvtData);
    sub_1BE4ACC(&BattleBuffData_CheckInvokeBuff_TypeInfo, v5);
    byte_4B698F5 = 1;
  }
  v6 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v6->static_fields->CommandCodeFunctionActs;
  v9 = (BattleBuffData_CheckInvokeBuff_o *)sub_1BE4D18(BattleBuffData_CheckInvokeBuff_TypeInfo);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v15; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v17; // x8

  v6 = this;
  if ( (byte_4B698F6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1BE4ACC(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_4B698F6 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2F47610 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v15 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1BE4D28(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v17[4] = (BattleLogicNomal_c *)buff;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)buff, v8, v9, v10, v11, v12, v13);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v15; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v17; // x8

  v6 = this;
  if ( (byte_4B698F7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass24_0_o *)sub_1BE4ACC(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_4B698F7 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass24_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2F47610 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v15 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1BE4D28(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v17[4] = (BattleLogicNomal_c *)buff;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)buff, v8, v9, v10, v11, v12, v13);
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
    sub_1BE4D28(this, targetSvtData);
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

  if ( (byte_4B698F8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_4B698F8 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass24_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass24_0_o *)_4__this->fields.data) == 0LL )
    sub_1BE4D28(this, id);
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
    sub_1BE4D28(this, npc);
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
    sub_1BE4D28(this, npc);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueId;
}