void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleLogicTask_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleLogicTask_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18E94 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask___TypeInfo, method, v2);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v4, v5);
    byte_4B18E94 = 1;
  }
  v6 = (struct BattleLogicTask_array *)sub_1BCA888(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.zeroTask, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v16 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v13, v14, v15);
  BattleLogicTask___ctor(v16, 0LL);
  this->fields.tmpShiftTask = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tmpShiftTask, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  return data->fields.isMultiTargetBattle && data->fields.justDeadTargetId != -1;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x23
  __int64 ActorId; // x0
  BattleCommandData_o *v103; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v112; // x26
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  BattleActionData_o *v122; // x22
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  BattleActionData_o **v129; // x21
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  struct BattleCommandData_o *command; // x1
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  BattleActionData_o *v143; // x20
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v151; // x8
  int32_t v152; // w22
  Il2CppObject *v153; // x28
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  System_Collections_Generic_List_object__o *v157; // x20
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  struct System_Object_array *items; // x8
  _QWORD *v165; // x9
  __int64 size; // x10
  Il2CppClass **v167; // x0
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  System_Collections_Generic_IEnumerable_TSource__o **v175; // x25
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v177; // x0
  System_Collections_Generic_List_object__o **v178; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v179; // x20
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  System_Func_T__TResult__o *v183; // x22
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v187; // x20
  BattleLogicNomal___c_c *v188; // x8
  System_Func_object__bool__o *_9__22_9; // x24
  Il2CppObject *v190; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  bool IsForceAttackFunctionTargetAll; // w0
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v202; // x20
  BattleLogicNomal___c_c *v203; // x8
  System_Func_object__object__o *_9__22_0; // x24
  Il2CppObject *v205; // x22
  struct BattleLogicNomal___c_StaticFields *v206; // x0
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  System_Func_object__object__o *v213; // x22
  __int64 v214; // x2
  __int64 v215; // x3
  __int64 v216; // x9
  System_Collections_Generic_Dictionary_object__object__o *v217; // x24
  BuffList_c *v218; // x8
  BattleLogicNomal___c_c *v219; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  System_Func_T__TResult__o *_9__22_2; // x25
  Il2CppObject *v222; // x22
  struct BattleLogicNomal___c_StaticFields *v223; // x0
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  System_Func_T__TResult__o *_9__22_3; // x27
  Il2CppObject *v231; // x22
  struct BattleLogicNomal___c_StaticFields *v232; // x0
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v239; // x0
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  __int64 v246; // x2
  __int64 v247; // x3
  __int64 v248; // x8
  int64_t v249; // x20
  System_Action_object__object__o *v250; // x22
  BattleServantData_o **v251; // x26
  __int64 v252; // x2
  __int64 v253; // x3
  int64_t commandAssistId; // x20
  System_Action_object__object__o *v255; // x22
  __int64 v256; // x8
  BattleCommandData_o **v257; // x24
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  int64_t v264; // x20
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  __int64 v271; // x1
  __int64 v272; // x2
  __int64 v273; // x3
  System_Func_object__object__o *v274; // x20
  int64_t v275; // x2
  int32_t v276; // w3
  System_String_o *v277; // x4
  BattleSetupInfo_o *v278; // x5
  FollowerInfo_o *v279; // x6
  PartyListViewItem_o *v280; // x7
  __int64 v281; // x1
  __int64 v282; // x2
  __int64 v283; // x3
  Il2CppObject *MasterData_object; // x25
  __int64 v285; // x1
  __int64 v286; // x2
  __int64 v287; // x3
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v288; // x23
  __int64 v289; // x2
  __int64 v290; // x3
  const MethodInfo *v291; // x5
  __int64 v292; // x9
  __int64 v293; // x8
  unsigned __int64 v294; // x22
  int v295; // w20
  int32_t v296; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v297; // x28
  __int64 v298; // x8
  __int64 v299; // x20
  __int64 v300; // x9
  int *v301; // x10
  __int64 v302; // x0
  __int64 v303; // x0
  __int64 v304; // x1
  __int64 v305; // x20
  __int64 v306; // x8
  __int64 v307; // x9
  int *v308; // x10
  __int64 v309; // x0
  __int64 v310; // x8
  __int64 v311; // x9
  int *v312; // x10
  __int64 v313; // x0
  Il2CppObject *v314; // x1
  Il2CppObject *Item; // x1
  __int64 v316; // x8
  __int64 v317; // x9
  int *v318; // x10
  __int64 v319; // x0
  unsigned __int64 v320; // x10
  int v321; // w20
  int v322; // w8
  BuffList_ACTION_array *v323; // x28
  int v324; // w8
  __int64 v325; // x8
  __int64 v326; // x20
  __int64 v327; // x9
  int *v328; // x10
  __int64 v329; // x0
  __int64 v330; // x1
  __int64 v331; // x20
  __int64 v332; // x8
  __int64 v333; // x9
  int *v334; // x10
  __int64 v335; // x0
  __int64 v336; // x8
  __int64 v337; // x9
  int *v338; // x10
  __int64 v339; // x0
  __int64 v340; // x1
  BattleServantData_o *v341; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_43709300; // x0
  __int64 v343; // x1
  BattleBuffData_BuffData_array *v344; // x27
  __int64 v345; // x8
  unsigned __int64 v346; // x26
  BattleBuffData_BuffData_o *v347; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v350; // x1
  __int64 v351; // x8
  __int64 v352; // x9
  int *v353; // x10
  __int64 v354; // x0
  __int64 v355; // x8
  __int64 v356; // x20
  __int64 v357; // x9
  int *v358; // x10
  __int64 v359; // x0
  __int64 v360; // x0
  __int64 v361; // x1
  __int64 v362; // x20
  BattleActionData_DamageData_o *v363; // x28
  __int64 v364; // x8
  __int64 v365; // x9
  int *v366; // x10
  __int64 v367; // x0
  __int64 v368; // x8
  __int64 v369; // x9
  int *v370; // x10
  __int64 v371; // x0
  __int64 v372; // x1
  BattleServantData_o *v373; // x27
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *DamageList; // x0
  __int64 v376; // x1
  BattleActionData_DamageData_o *v377; // x29
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v379; // x22
  BattleActionData_o *v380; // x0
  _BOOL8 v381; // x0
  __int64 v382; // x1
  __int64 v383; // x8
  __int64 v384; // x9
  int *v385; // x10
  __int64 v386; // x0
  BattleActionData_o *v387; // x20
  BattleActionData_o *v388; // x20
  BattleActionData_o *v389; // x20
  struct BattleData_o *v390; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v392; // x20
  const MethodInfo *v393; // x5
  __int64 v394; // x9
  __int64 v395; // x8
  unsigned __int64 v396; // x26
  unsigned int v397; // w20
  int32_t v398; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x28
  __int64 v400; // x8
  __int64 v401; // x20
  __int64 v402; // x9
  int *v403; // x10
  __int64 v404; // x0
  __int64 v405; // x0
  __int64 v406; // x1
  __int64 v407; // x20
  __int64 v408; // x8
  __int64 v409; // x9
  int *v410; // x10
  __int64 v411; // x0
  __int64 v412; // x8
  __int64 v413; // x9
  int *v414; // x10
  __int64 v415; // x0
  Il2CppObject *v416; // x1
  Il2CppObject *v417; // x1
  __int64 v418; // x8
  __int64 v419; // x9
  int *v420; // x10
  __int64 v421; // x0
  unsigned __int64 v422; // x26
  int v423; // w20
  int v424; // w8
  BuffList_ACTION_array *v425; // x24
  int v426; // w8
  __int64 v427; // x8
  __int64 v428; // x20
  __int64 v429; // x9
  int *v430; // x10
  __int64 v431; // x0
  __int64 v432; // x1
  __int64 v433; // x20
  __int64 v434; // x8
  __int64 v435; // x9
  int *v436; // x10
  __int64 v437; // x0
  __int64 v438; // x8
  __int64 v439; // x9
  int *v440; // x10
  __int64 v441; // x0
  __int64 v442; // x1
  BattleServantData_o *v443; // x3
  BattleBuffData_BuffData_array *v444; // x0
  __int64 v445; // x1
  BattleBuffData_BuffData_array *v446; // x27
  __int64 v447; // x8
  unsigned __int64 v448; // x22
  BattleLogicFunction_o *v449; // x0
  __int64 v450; // x8
  __int64 v451; // x9
  int *v452; // x10
  __int64 v453; // x0
  __int64 v454; // x8
  __int64 v455; // x20
  __int64 v456; // x9
  int *v457; // x10
  __int64 v458; // x0
  __int64 v459; // x0
  __int64 v460; // x1
  __int64 v461; // x20
  __int64 v462; // x8
  __int64 v463; // x9
  int *v464; // x10
  __int64 v465; // x0
  __int64 v466; // x8
  __int64 v467; // x9
  int *v468; // x10
  __int64 v469; // x0
  __int64 v470; // x0
  __int64 v471; // x1
  __int64 v472; // x8
  __int64 v473; // x9
  int *v474; // x10
  __int64 v475; // x0
  _BOOL8 v476; // x0
  __int64 v477; // x1
  Il2CppObject *current; // x8
  _BYTE *monitor; // x9
  BattleData_o *v480; // x0
  BattleActionData_o *v481; // x8
  __int64 v482; // x0
  const MethodInfo *v483; // [xsp+0h] [xbp-120h]
  __int64 *v484; // [xsp+10h] [xbp-110h]
  bool v485; // [xsp+1Ch] [xbp-104h]
  BattleLogicTask_o *v486; // [xsp+20h] [xbp-100h]
  __int64 v487; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v489; // [xsp+38h] [xbp-E8h]
  BattleBuffData_o *v490; // [xsp+40h] [xbp-E0h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+48h] [xbp-D8h]
  Il2CppObject *v493; // [xsp+50h] [xbp-D0h]
  bool v494; // [xsp+5Ch] [xbp-C4h]
  __int64 v495; // [xsp+60h] [xbp-C0h]
  __int64 v496; // [xsp+68h] [xbp-B8h]
  BattleServantData_o **v497; // [xsp+70h] [xbp-B0h]
  BattleCommandData_o **v498; // [xsp+78h] [xbp-A8h]
  System_Collections_Generic_Dictionary_object__object__o *v499; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v500; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v501; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4B18E80 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_ACTION___TypeInfo, task, baseActionData);
    sub_1BCA7E0(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v9, v10);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleServantData___TypeInfo, v13, v14);
    sub_1BCA7E0(&bool___TypeInfo, v15, v16);
    sub_1BCA7E0(&BuffList_TypeInfo, v17, v18);
    sub_1BCA7E0(&BattleLogic_DamageProcessArgs_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v21, v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v25, v26);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v27,
      v28);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v29,
      v30);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v31, v32);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v39, v40);
    sub_1BCA7E0(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Func_BattleServantData__BattleServantData__TypeInfo, v43, v44);
    sub_1BCA7E0(&System_Func_int__BattleServantData__TypeInfo, v45, v46);
    sub_1BCA7E0(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v47, v48);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v49, v50);
    sub_1BCA7E0(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v51, v52);
    sub_1BCA7E0(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v53, v54);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v55, v56);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v57, v58);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v59, v60);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__Add__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v67, v68);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v71, v72);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleServantData__TypeInfo, v73, v74);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v75, v76);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_0__, v77, v78);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_2__, v79, v80);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_3__, v81, v82);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_9__, v83, v84);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__1__, v85, v86);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__4__, v87, v88);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__5__, v89, v90);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__6__, v91, v92);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__7__, v93, v94);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__8__, v95, v96);
    sub_1BCA7E0(&BattleLogicNomal___c__DisplayClass22_0_TypeInfo, v97, v98);
    sub_1BCA7E0(&BattleLogicNomal___c_TypeInfo, v99, v100);
    byte_4B18E80 = 1;
  }
  memset(&v501, 0, sizeof(v501));
  v101 = sub_1BCAA2C(BattleLogicNomal___c__DisplayClass22_0_TypeInfo, task, baseActionData, method);
  System_Object___ctor((Il2CppObject *)v101, 0LL);
  if ( !v101 )
    goto LABEL_370;
  *(_QWORD *)(v101 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 16), (int64_t)this, v104, v105, v106, v107, v108, v109);
  if ( !task )
    goto LABEL_370;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_370;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v101 + 24) = ServantData;
  v112 = (BattleServantData_o **)(v101 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 24), (int64_t)ServantData, v113, v114, v115, v116, v117, v118);
  v122 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v119, v120, v121);
  BattleActionData___ctor(v122, 0LL);
  *baseActionData = v122;
  sub_1BCA784((PartyOrganizationUtility_o *)baseActionData, (int64_t)v122, v123, v124, v125, v126, v127, v128);
  *(_QWORD *)(v101 + 48) = v122;
  v129 = (BattleActionData_o **)(v101 + 48);
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 48), (int64_t)v122, v130, v131, v132, v133, v134, v135);
  command = task->fields.command;
  *(_QWORD *)(v101 + 40) = command;
  v498 = (BattleCommandData_o **)(v101 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 40), (int64_t)command, v137, v138, v139, v140, v141, v142);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_370;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_370;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_370;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v143 = *v129;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v143 )
    goto LABEL_370;
  v143->fields.actorId = ActorId;
  ActorId = (__int64)*v129;
  if ( !*v129 )
    goto LABEL_370;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_1BCA784((PartyOrganizationUtility_o *)(ActorId + 128), (int64_t)motionMessage, v144, v145, v146, v147, v148, v149);
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v151 = this->fields.data;
  if ( !v151 )
    goto LABEL_370;
  v152 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v151->fields.leaderDown || v151->fields.endbattleFlg )
    return 0LL;
  v153 = (Il2CppObject *)BattleData__getServantData(this->fields.data, ActorId, 0LL);
  v157 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                        v154,
                                                        v155,
                                                        v156);
  System_Collections_Generic_List_object____ctor(
    v157,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v157 )
    goto LABEL_370;
  items = v157->fields._items;
  v165 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v157->fields._version;
  if ( !items )
    goto LABEL_370;
  size = v157->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v157,
      v153,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
  }
  else
  {
    v167 = &items->obj.klass + size;
    v157->fields._size = size + 1;
    v167[4] = (Il2CppClass *)v153;
    sub_1BCA784((PartyOrganizationUtility_o *)(v167 + 4), (int64_t)v153, v158, v159, v160, v161, v162, v163);
  }
  *(_QWORD *)(v101 + 56) = v157;
  v175 = (System_Collections_Generic_IEnumerable_TSource__o **)(v101 + 56);
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 56), (int64_t)v157, v168, v169, v170, v171, v172, v173);
  ActorId = *(_QWORD *)(v101 + 40);
  if ( !ActorId )
    goto LABEL_370;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v498;
  if ( !*v498 )
    goto LABEL_370;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v112,
    (BattleServantData_o *)v153,
    this->fields.data,
    0LL);
  ActorId = (__int64)*v498;
  if ( !*v498 )
    goto LABEL_370;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v112;
  if ( !*v112 )
    goto LABEL_370;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v498, 0LL);
  v485 = AttackType == 2;
  v486 = task;
  targetId = v152;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_370;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v152, 0LL);
    if ( !this->fields.data )
      goto LABEL_370;
    v177 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                               ? BattleData__getFieldEnemyServantIDList(
                                                                   this->fields.data,
                                                                   1,
                                                                   0LL)
                                                               : BattleData__getFieldPlayerServantIDList(
                                                                   this->fields.data,
                                                                   0LL,
                                                                   0LL));
    v178 = (System_Collections_Generic_List_object__o **)(v101 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v177,
                         (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_370;
    v179 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v152,
      (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
    v183 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__BattleServantData__TypeInfo, v180, v181, v182);
    System_Func_int__object____ctor(
      v183,
      (Il2CppObject *)v101,
      Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__8__,
      0LL);
    v187 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                  v179,
                                                                  (System_Func_TSource__TResult__o *)v183,
                                                                  (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v188 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v184);
      v188 = BattleLogicNomal___c_TypeInfo;
    }
    _9__22_9 = (System_Func_object__bool__o *)v188->static_fields->__9__22_9;
    if ( !_9__22_9 )
    {
      if ( !v188->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v188, v184);
        v188 = BattleLogicNomal___c_TypeInfo;
      }
      v190 = (Il2CppObject *)v188->static_fields->__9;
      _9__22_9 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_BattleServantData__bool__TypeInfo,
                                                  v184,
                                                  v185,
                                                  v186);
      System_Func_object__bool____ctor(_9__22_9, v190, Method_BattleLogicNomal___c__CreateCommandBattle_b__22_9__, 0LL);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__22_9 = (struct System_Func_BattleServantData__bool__o *)_9__22_9;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_9,
        (int64_t)_9__22_9,
        v192,
        v193,
        v194,
        v195,
        v196,
        v197);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v187,
                         (System_Func_TSource__bool__o *)_9__22_9,
                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v178 )
      goto LABEL_370;
    v175 = (System_Collections_Generic_IEnumerable_TSource__o **)(v101 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v178,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v497 = (BattleServantData_o **)(v101 + 24);
  ActorId = (__int64)*v498;
  if ( !*v498 )
    goto LABEL_370;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                     (BattleCommandData_o *)ActorId,
                                     0LL);
  v202 = *v175;
  v494 = IsForceAttackFunctionTargetAll;
  v203 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v199);
    v203 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_0 = (System_Func_object__object__o *)v203->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v203->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v203, v199);
      v203 = BattleLogicNomal___c_TypeInfo;
    }
    v205 = (Il2CppObject *)v203->static_fields->__9;
    _9__22_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BattleServantData__BattleServantData__TypeInfo,
                                                  v199,
                                                  v200,
                                                  v201);
    System_Func_object__object____ctor(_9__22_0, v205, Method_BattleLogicNomal___c__CreateCommandBattle_b__22_0__, 0LL);
    v206 = BattleLogicNomal___c_TypeInfo->static_fields;
    v206->__9__22_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__22_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v206->__9__22_0, (int64_t)_9__22_0, v207, v208, v209, v210, v211, v212);
  }
  v213 = (System_Func_object__object__o *)sub_1BCAA2C(
                                            System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo,
                                            v199,
                                            v200,
                                            v201);
  System_Func_object__object____ctor(
    v213,
    (Il2CppObject *)v101,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__1__,
    0LL);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v202,
                       (System_Func_TSource__TKey__o *)_9__22_0,
                       (System_Func_TSource__TElement__o *)v213,
                       (const MethodInfo_2F4C1DC *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v216 = *(_QWORD *)(v101 + 24);
  if ( !v216 )
    goto LABEL_370;
  v217 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  v218 = BuffList_TypeInfo;
  v490 = *(BattleBuffData_o **)(v216 + 792);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v103);
    v218 = BuffList_TypeInfo;
  }
  v219 = BattleLogicNomal___c_TypeInfo;
  v484 = (__int64 *)v175;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v218->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v103);
    v219 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_2 = (System_Func_T__TResult__o *)v219->static_fields->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( !v219->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v219, v103);
      v219 = BattleLogicNomal___c_TypeInfo;
    }
    v222 = (Il2CppObject *)v219->static_fields->__9;
    _9__22_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo,
                                              v103,
                                              v214,
                                              v215);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__22_2,
      v222,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__22_2__,
      0LL);
    v223 = BattleLogicNomal___c_TypeInfo->static_fields;
    v223->__9__22_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__22_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v223->__9__22_2, (int64_t)_9__22_2, v224, v225, v226, v227, v228, v229);
    v219 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v219->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v219, v103);
    v219 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_3 = (System_Func_T__TResult__o *)v219->static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !v219->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v219, v103);
      v219 = BattleLogicNomal___c_TypeInfo;
    }
    v231 = (Il2CppObject *)v219->static_fields->__9;
    _9__22_3 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo,
                                              v103,
                                              v214,
                                              v215);
    System_Func_Int32Enum__object____ctor(
      _9__22_3,
      v231,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__22_3__,
      0LL);
    v232 = BattleLogicNomal___c_TypeInfo->static_fields;
    v232->__9__22_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__22_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v232->__9__22_3, (int64_t)_9__22_3, v233, v234, v235, v236, v237, v238);
  }
  v499 = v217;
  v239 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
           CommandCodeBuffHash,
           (System_Func_TSource__TKey__o *)_9__22_2,
           (System_Func_TSource__TElement__o *)_9__22_3,
           (const MethodInfo_2F4BFE4 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v101 + 32) = v239;
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 32), (int64_t)v239, v240, v241, v242, v243, v244, v245);
  v248 = *(_QWORD *)(v101 + 40);
  v489 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v101 + 32);
  if ( !v248 )
    goto LABEL_370;
  v249 = *(_QWORD *)(v248 + 72);
  v250 = (System_Action_object__object__o *)sub_1BCAA2C(
                                              System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                              v103,
                                              v246,
                                              v247);
  System_Action_object__object____ctor(
    v250,
    (Il2CppObject *)v101,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__4__,
    0LL);
  v251 = (BattleServantData_o **)(v101 + 24);
  if ( !v490 )
    goto LABEL_370;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v490,
    v249,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v250,
    1,
    0LL);
  if ( !*v498 )
    goto LABEL_370;
  commandAssistId = (*v498)->fields.commandAssistId;
  v255 = (System_Action_object__object__o *)sub_1BCAA2C(
                                              System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                              v103,
                                              v252,
                                              v253);
  System_Action_object__object____ctor(
    v255,
    (Il2CppObject *)v101,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__5__,
    0LL);
  v256 = *(_QWORD *)(v101 + 40);
  if ( !v256 )
    goto LABEL_370;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v490,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v255,
    1,
    *(_DWORD *)(v256 + 88),
    0LL);
  ActorId = sub_1BCA888(bool___TypeInfo, 2LL);
  v257 = (BattleCommandData_o **)(v101 + 40);
  if ( !ActorId )
    goto LABEL_370;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_371;
  v496 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1BCA888(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_370;
  v264 = ActorId;
  if ( v153 )
  {
    ActorId = sub_1BCA91C(v153, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v482 = sub_1BCAA60(0LL);
      sub_1BCA908(v482, 0LL);
    }
  }
  if ( !*(_DWORD *)(v264 + 24) )
    goto LABEL_371;
  *(_QWORD *)(v264 + 32) = v153;
  v493 = v153;
  sub_1BCA784((PartyOrganizationUtility_o *)(v264 + 32), (int64_t)v153, v258, v259, v260, v261, v262, v263);
  *(_QWORD *)(v101 + 72) = v264;
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 72), v264, v265, v266, v267, v268, v269, v270);
  v274 = (System_Func_object__object__o *)sub_1BCAA2C(
                                            System_Func_BattleServantData__BattleServantData__TypeInfo,
                                            v271,
                                            v272,
                                            v273);
  System_Func_object__object____ctor(
    v274,
    (Il2CppObject *)v101,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__6__,
    0LL);
  *(_QWORD *)(v101 + 64) = v274;
  v487 = v101 + 64;
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 64), (int64_t)v274, v275, v276, v277, v278, v279, v280);
  v495 = sub_1BCAA2C(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v281, v282, v283);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v495,
    (Il2CppObject *)v101,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__7__,
    0LL);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_370;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v288 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1BCAA2C(
                                                                     BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                     v285,
                                                                     v286,
                                                                     v287);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v288, 0LL);
  v292 = v496;
  v293 = *(_QWORD *)(v496 + 24);
  if ( (int)v293 >= 1 )
  {
    v294 = 0LL;
    do
    {
      if ( v294 >= (unsigned int)v293 )
        goto LABEL_371;
      v295 = *(unsigned __int8 *)(v292 + v294 + 32);
      if ( *(_BYTE *)(v292 + v294 + 32) )
        v296 = 177;
      else
        v296 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v489,
                           v490,
                           v296,
                           *v498,
                           v291);
      if ( !v495 )
        goto LABEL_370;
      v297 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v495 + 24))(
                  *(_QWORD *)(v495 + 64),
                  v295 != 0,
                  v494,
                  *(_QWORD *)(v495 + 40));
      if ( !ActorId )
        goto LABEL_370;
      v298 = *(_QWORD *)ActorId;
      v299 = ActorId;
      v300 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v301 = (int *)(*(_QWORD *)(v298 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v301 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v300;
          v301 += 4;
          if ( !v300 )
            goto LABEL_86;
        }
        v302 = v298 + 16LL * *v301 + 312;
      }
      else
      {
LABEL_86:
        v302 = sub_1C1C7C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v303 = (*(__int64 (__fastcall **)(__int64, _QWORD))v302)(v299, *(_QWORD *)(v302 + 8));
      v305 = v303;
      while ( 1 )
      {
        if ( !v305 )
          sub_1BCAA3C(v303, v304);
        v306 = *(_QWORD *)v305;
        v307 = *(unsigned __int16 *)(*(_QWORD *)v305 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v305 + 302LL) )
        {
          v308 = (int *)(*(_QWORD *)(v306 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v308 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v307;
            v308 += 4;
            if ( !v307 )
              goto LABEL_94;
          }
          v309 = v306 + 16LL * *v308 + 312;
        }
        else
        {
LABEL_94:
          v309 = sub_1C1C7C0(v305, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v309)(v305, *(_QWORD *)(v309 + 8)) & 1) == 0 )
          break;
        v310 = *(_QWORD *)v305;
        v311 = *(unsigned __int16 *)(*(_QWORD *)v305 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v305 + 302LL) )
        {
          v312 = (int *)(*(_QWORD *)(v310 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v312 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v311;
            v312 += 4;
            if ( !v311 )
              goto LABEL_101;
          }
          v313 = v310 + 16LL * *v312 + 312;
        }
        else
        {
LABEL_101:
          v313 = sub_1C1C7C0(v305, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v314 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v313)(v305, *(_QWORD *)(v313 + 8));
        if ( !v499 )
          sub_1BCAA3C(0LL, v314);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v499,
                 v314,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          (SkillLvMaster_o *)MasterData_object,
          *v498,
          v297,
          *v129,
          0,
          v288,
          v483);
      }
      v316 = *(_QWORD *)v305;
      v317 = *(unsigned __int16 *)(*(_QWORD *)v305 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v305 + 302LL) )
      {
        v318 = (int *)(*(_QWORD *)(v316 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v318 - 1) != System_IDisposable_TypeInfo )
        {
          --v317;
          v318 += 4;
          if ( !v317 )
            goto LABEL_109;
        }
        v319 = v316 + 16LL * *v318 + 312;
      }
      else
      {
LABEL_109:
        v319 = sub_1C1C7C0(v305, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v319)(v305, *(_QWORD *)(v319 + 8));
      v292 = v496;
      LODWORD(v293) = *(_DWORD *)(v496 + 24);
      ++v294;
    }
    while ( (__int64)v294 < (int)v293 );
    if ( (int)v293 >= 1 )
    {
      v320 = 0LL;
      while ( v320 < (unsigned int)v293 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v320;
        v321 = *(unsigned __int8 *)(v292 + v320 + 32);
        ActorId = sub_1BCA888(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_370;
        v322 = *(_DWORD *)(ActorId + 24);
        v323 = (BuffList_ACTION_array *)ActorId;
        if ( v321 )
        {
          if ( !v322 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v322 == 1 )
            break;
          v324 = 120;
        }
        else
        {
          if ( !v322 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v322 == 1 )
            break;
          v324 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v324;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v495 + 24))(
                    *(_QWORD *)(v495 + 64),
                    v321 != 0,
                    v494,
                    *(_QWORD *)(v495 + 40));
        if ( !ActorId )
          goto LABEL_370;
        v325 = *(_QWORD *)ActorId;
        v326 = ActorId;
        v327 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v328 = (int *)(*(_QWORD *)(v325 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v328 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v327;
            v328 += 4;
            if ( !v327 )
              goto LABEL_131;
          }
          v329 = v325 + 16LL * *v328 + 312;
        }
        else
        {
LABEL_131:
          v329 = sub_1C1C7C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v331 = (*(__int64 (__fastcall **)(__int64, _QWORD))v329)(v326, *(_QWORD *)(v329 + 8));
        if ( !v331 )
          sub_1BCAA3C(0LL, v330);
        while ( 1 )
        {
          v332 = *(_QWORD *)v331;
          v333 = *(unsigned __int16 *)(*(_QWORD *)v331 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v331 + 302LL) )
          {
            v334 = (int *)(*(_QWORD *)(v332 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v334 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v333;
              v334 += 4;
              if ( !v333 )
                goto LABEL_138;
            }
            v251 = v497;
            v257 = v498;
            v335 = v332 + 16LL * *v334 + 312;
          }
          else
          {
LABEL_138:
            v251 = v497;
            v257 = v498;
            v335 = sub_1C1C7C0(v331, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v335)(v331, *(_QWORD *)(v335 + 8)) & 1) == 0 )
            break;
          v336 = *(_QWORD *)v331;
          v337 = *(unsigned __int16 *)(*(_QWORD *)v331 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v331 + 302LL) )
          {
            v338 = (int *)(*(_QWORD *)(v336 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v338 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v337;
              v338 += 4;
              if ( !v337 )
                goto LABEL_145;
            }
            v339 = v336 + 16LL * *v338 + 312;
          }
          else
          {
LABEL_145:
            v339 = sub_1C1C7C0(v331, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v341 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v339)(v331, *(_QWORD *)(v339 + 8));
          if ( !*v251 )
            sub_1BCAA3C(0LL, v340);
          AttackSideEffectBuffList_43709300 = BattleServantData__getAttackSideEffectBuffList_43709300(
                                                *v251,
                                                v323,
                                                *v257,
                                                v341,
                                                0LL);
          v344 = AttackSideEffectBuffList_43709300;
          if ( !AttackSideEffectBuffList_43709300 )
            sub_1BCAA3C(0LL, v343);
          v345 = *(_QWORD *)&AttackSideEffectBuffList_43709300->max_length;
          if ( (int)v345 >= 1 )
          {
            v346 = 0LL;
            do
            {
              if ( v346 >= (unsigned int)v345 )
                sub_1BCAA44(AttackSideEffectBuffList_43709300, v343);
              if ( !*v129 )
                sub_1BCAA3C(0LL, v343);
              v347 = v344->m_Items[v346];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v129, 3, 0LL);
              if ( !logicfunction )
                sub_1BCAA3C(SideEffectActionData, v350);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v347,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v288,
                0,
                0LL);
              LODWORD(v345) = v344->max_length;
              ++v346;
            }
            while ( (__int64)v346 < (int)v345 );
          }
        }
        v351 = *(_QWORD *)v331;
        v352 = *(unsigned __int16 *)(*(_QWORD *)v331 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v331 + 302LL) )
        {
          v353 = (int *)(*(_QWORD *)(v351 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v353 - 1) != System_IDisposable_TypeInfo )
          {
            --v352;
            v353 += 4;
            if ( !v352 )
              goto LABEL_160;
          }
          v354 = v351 + 16LL * *v353 + 312;
        }
        else
        {
LABEL_160:
          v354 = sub_1C1C7C0(v331, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v354)(v331, *(_QWORD *)(v354 + 8));
        v292 = v496;
        LODWORD(v293) = *(_DWORD *)(v496 + 24);
        v320 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v293 )
          goto LABEL_170;
      }
LABEL_371:
      sub_1BCAA44(ActorId, v103);
    }
  }
LABEL_170:
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1BCAA2C(
                                                      BattleLogic_DamageProcessArgs_TypeInfo,
                                                      v103,
                                                      v289,
                                                      v290);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL);
  if ( !v495 )
    goto LABEL_370;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v495 + 24))(
              *(_QWORD *)(v495 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v495 + 40));
  if ( !ActorId )
    goto LABEL_370;
  v355 = *(_QWORD *)ActorId;
  v356 = ActorId;
  v357 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v358 = (int *)(*(_QWORD *)(v355 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v358 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v357;
      v358 += 4;
      if ( !v357 )
        goto LABEL_176;
    }
    v359 = v355 + 16LL * *v358 + 312;
  }
  else
  {
LABEL_176:
    v359 = sub_1C1C7C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v360 = (*(__int64 (__fastcall **)(__int64, _QWORD))v359)(v356, *(_QWORD *)(v359 + 8));
  v362 = v360;
  v363 = 0LL;
  while ( 1 )
  {
    if ( !v362 )
      sub_1BCAA3C(v360, v361);
    v364 = *(_QWORD *)v362;
    v365 = *(unsigned __int16 *)(*(_QWORD *)v362 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v362 + 302LL) )
    {
      v366 = (int *)(*(_QWORD *)(v364 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v366 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v365;
        v366 += 4;
        if ( !v365 )
          goto LABEL_184;
      }
      v367 = v364 + 16LL * *v366 + 312;
    }
    else
    {
LABEL_184:
      v367 = sub_1C1C7C0(v362, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v367)(v362, *(_QWORD *)(v367 + 8)) & 1) == 0 )
      break;
    v368 = *(_QWORD *)v362;
    v369 = *(unsigned __int16 *)(*(_QWORD *)v362 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v362 + 302LL) )
    {
      v370 = (int *)(*(_QWORD *)(v368 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v370 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v369;
        v370 += 4;
        if ( !v369 )
          goto LABEL_191;
      }
      v371 = v368 + 16LL * *v370 + 312;
    }
    else
    {
LABEL_191:
      v371 = sub_1C1C7C0(v362, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v373 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v371)(v362, *(_QWORD *)(v371 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_1BCAA3C(0LL, v372);
    DamageList = BattleLogic__GetDamageList(logic, *v251, v373, *v257, processArgsa, 0LL);
    v377 = DamageList;
    if ( v373 == (BattleServantData_o *)v493 )
      v363 = DamageList;
    if ( !v373 )
      sub_1BCAA3C(DamageList, v376);
    buffData = v373->fields.buffData;
    if ( !buffData )
      sub_1BCAA3C(DamageList, v376);
    if ( !buffData->fields.isNoDamage )
    {
      v379 = *v129;
      v380 = BattleBuffData__UseProgressingDoNotAct(v373->fields.buffData, v373, 0, 0LL);
      if ( !v379 )
        sub_1BCAA3C(v380, v380);
      BattleActionData__addSideEffectActionData(v379, v380, 1, 0LL);
    }
    if ( !*v251 )
      sub_1BCAA3C(0LL, v376);
    v381 = BattleServantData__checkPlayer(*v251, 0LL);
    if ( v381 )
    {
      if ( !*v251 )
        sub_1BCAA3C(v381, v382);
      v373->fields.overkillTargetId = (*v251)->fields.uniqueId;
    }
    if ( !*v129 )
      sub_1BCAA3C(0LL, v382);
    BattleActionData__setDamageData(*v129, v377, 0LL, 0, 0, 0LL);
  }
  v383 = *(_QWORD *)v362;
  v384 = *(unsigned __int16 *)(*(_QWORD *)v362 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v362 + 302LL) )
  {
    v385 = (int *)(*(_QWORD *)(v383 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v385 - 1) != System_IDisposable_TypeInfo )
    {
      --v384;
      v385 += 4;
      if ( !v384 )
        goto LABEL_211;
    }
    v386 = v383 + 16LL * *v385 + 312;
  }
  else
  {
LABEL_211:
    v386 = sub_1C1C7C0(v362, System_IDisposable_TypeInfo, 0LL);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v386)(v362, *(_QWORD *)(v386 + 8));
  if ( !*(_QWORD *)v487 )
    goto LABEL_370;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v487 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v487 + 64LL),
    v493,
    *(_QWORD *)(*(_QWORD *)v487 + 40LL));
  ActorId = (__int64)*v257;
  if ( !*v257 )
    goto LABEL_370;
  v387 = *v129;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v387 )
    goto LABEL_370;
  v387->fields.type = ActorId;
  ActorId = (__int64)*v129;
  if ( !*v129 )
    goto LABEL_370;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v257, 0LL);
  v103 = *v257;
  if ( !*v257 )
    goto LABEL_370;
  v388 = *v129;
  if ( !*v129 )
    goto LABEL_370;
  v388->fields.actionIndex = v103->fields.actionIndex;
  ActorId = (__int64)*v251;
  if ( !*v251 )
    goto LABEL_370;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v103, 0LL);
  v388->fields.motionId = ActorId;
  if ( !v363 )
    goto LABEL_370;
  v389 = *v129;
  ActorId = BattleActionData_DamageData__getAttackCount(v363, 0LL);
  if ( !v389 )
    goto LABEL_370;
  v389->fields.attackcount = ActorId;
  v390 = this->fields.data;
  if ( !v390 )
    goto LABEL_370;
  perf = v390->fields.perf;
  if ( !perf )
    goto LABEL_370;
  if ( !*v257 )
    goto LABEL_370;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_370;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v257)->fields.actionIndex,
    0LL);
  if ( !*v251 )
    goto LABEL_370;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_370;
  v392 = *v129;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v251)->fields.uniqueId, targetId, 0LL);
  if ( !v392 )
    goto LABEL_370;
  v394 = v496;
  v392->fields.prevattackme = ActorId & 1;
  v395 = *(_QWORD *)(v496 + 24);
  if ( (int)v395 >= 1 )
  {
    v396 = 0LL;
    do
    {
      if ( v396 >= (unsigned int)v395 )
        goto LABEL_371;
      v397 = *(unsigned __int8 *)(v394 + v396 + 32);
      if ( *(_BYTE *)(v394 + v396 + 32) )
        v398 = 178;
      else
        v398 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v489,
                                    v490,
                                    v398,
                                    *v498,
                                    v393);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v495 + 24))(
                  *(_QWORD *)(v495 + 64),
                  v397,
                  v494,
                  *(_QWORD *)(v495 + 40));
      if ( !ActorId )
        goto LABEL_370;
      v400 = *(_QWORD *)ActorId;
      v401 = ActorId;
      v402 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v403 = (int *)(*(_QWORD *)(v400 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v403 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v402;
          v403 += 4;
          if ( !v402 )
            goto LABEL_240;
        }
        v404 = v400 + 16LL * *v403 + 312;
      }
      else
      {
LABEL_240:
        v404 = sub_1C1C7C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v405 = (*(__int64 (__fastcall **)(__int64, _QWORD))v404)(v401, *(_QWORD *)(v404 + 8));
      v407 = v405;
      while ( 1 )
      {
        if ( !v407 )
          sub_1BCAA3C(v405, v406);
        v408 = *(_QWORD *)v407;
        v409 = *(unsigned __int16 *)(*(_QWORD *)v407 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v407 + 302LL) )
        {
          v410 = (int *)(*(_QWORD *)(v408 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v410 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v409;
            v410 += 4;
            if ( !v409 )
              goto LABEL_248;
          }
          v411 = v408 + 16LL * *v410 + 312;
        }
        else
        {
LABEL_248:
          v411 = sub_1C1C7C0(v407, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v411)(v407, *(_QWORD *)(v411 + 8)) & 1) == 0 )
          break;
        v412 = *(_QWORD *)v407;
        v413 = *(unsigned __int16 *)(*(_QWORD *)v407 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v407 + 302LL) )
        {
          v414 = (int *)(*(_QWORD *)(v412 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v414 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v413;
            v414 += 4;
            if ( !v413 )
              goto LABEL_255;
          }
          v415 = v412 + 16LL * *v414 + 312;
        }
        else
        {
LABEL_255:
          v415 = sub_1C1C7C0(v407, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v416 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v415)(v407, *(_QWORD *)(v415 + 8));
        if ( !v499 )
          sub_1BCAA3C(0LL, v416);
        v417 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v499,
                 v416,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v417,
          (SkillLvMaster_o *)MasterData_object,
          *v498,
          TargetCommandCodeBuffList,
          *v129,
          1,
          v288,
          v483);
      }
      v418 = *(_QWORD *)v407;
      v419 = *(unsigned __int16 *)(*(_QWORD *)v407 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v407 + 302LL) )
      {
        v420 = (int *)(*(_QWORD *)(v418 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v420 - 1) != System_IDisposable_TypeInfo )
        {
          --v419;
          v420 += 4;
          if ( !v419 )
            goto LABEL_263;
        }
        v421 = v418 + 16LL * *v420 + 312;
      }
      else
      {
LABEL_263:
        v421 = sub_1C1C7C0(v407, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v421)(v407, *(_QWORD *)(v421 + 8));
      v394 = v496;
      LODWORD(v395) = *(_DWORD *)(v496 + 24);
      ++v396;
    }
    while ( (__int64)v396 < (int)v395 );
    if ( (int)v395 >= 1 )
    {
      v422 = 0LL;
      while ( v422 < (unsigned int)v395 )
      {
        v423 = *(unsigned __int8 *)(v394 + v422 + 32);
        ActorId = sub_1BCA888(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_370;
        v424 = *(_DWORD *)(ActorId + 24);
        v425 = (BuffList_ACTION_array *)ActorId;
        if ( v423 )
        {
          if ( !v424 )
            goto LABEL_371;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v424 == 1 )
            goto LABEL_371;
          v426 = 121;
        }
        else
        {
          if ( !v424 )
            goto LABEL_371;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v424 == 1 )
            goto LABEL_371;
          v426 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v426;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v495 + 24))(
                    *(_QWORD *)(v495 + 64),
                    v423 != 0,
                    v494,
                    *(_QWORD *)(v495 + 40));
        if ( !ActorId )
          goto LABEL_370;
        v427 = *(_QWORD *)ActorId;
        v428 = ActorId;
        v429 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v430 = (int *)(*(_QWORD *)(v427 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v430 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v429;
            v430 += 4;
            if ( !v429 )
              goto LABEL_285;
          }
          v431 = v427 + 16LL * *v430 + 312;
        }
        else
        {
LABEL_285:
          v431 = sub_1C1C7C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v433 = (*(__int64 (__fastcall **)(__int64, _QWORD))v431)(v428, *(_QWORD *)(v431 + 8));
        if ( !v433 )
          sub_1BCAA3C(0LL, v432);
        while ( 1 )
        {
          v434 = *(_QWORD *)v433;
          v435 = *(unsigned __int16 *)(*(_QWORD *)v433 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v433 + 302LL) )
          {
            v436 = (int *)(*(_QWORD *)(v434 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v436 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v435;
              v436 += 4;
              if ( !v435 )
                goto LABEL_292;
            }
            v437 = v434 + 16LL * *v436 + 312;
          }
          else
          {
LABEL_292:
            v437 = sub_1C1C7C0(v433, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v437)(v433, *(_QWORD *)(v437 + 8)) & 1) == 0 )
            break;
          v438 = *(_QWORD *)v433;
          v439 = *(unsigned __int16 *)(*(_QWORD *)v433 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v433 + 302LL) )
          {
            v440 = (int *)(*(_QWORD *)(v438 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v440 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v439;
              v440 += 4;
              if ( !v439 )
                goto LABEL_299;
            }
            v441 = v438 + 16LL * *v440 + 312;
          }
          else
          {
LABEL_299:
            v441 = sub_1C1C7C0(v433, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v443 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v441)(v433, *(_QWORD *)(v441 + 8));
          if ( !*v497 )
            sub_1BCAA3C(0LL, v442);
          v444 = BattleServantData__getAttackSideEffectBuffList_43709300(*v497, v425, *v498, v443, 0LL);
          v446 = v444;
          if ( !v444 )
            sub_1BCAA3C(0LL, v445);
          v447 = *(_QWORD *)&v444->max_length;
          if ( (int)v447 >= 1 )
          {
            v448 = 0LL;
            do
            {
              if ( v448 >= (unsigned int)v447 )
                sub_1BCAA44(v444, v445);
              v449 = this->fields.logicfunction;
              if ( !v449 )
                sub_1BCAA3C(0LL, v445);
              BattleLogicFunction__SetSideEffectBuff(
                v449,
                (SkillLvMaster_o *)MasterData_object,
                *v129,
                v446->m_Items[v448],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v288,
                1,
                0LL);
              LODWORD(v447) = v446->max_length;
              ++v448;
            }
            while ( (__int64)v448 < (int)v447 );
          }
        }
        v450 = *(_QWORD *)v433;
        v451 = *(unsigned __int16 *)(*(_QWORD *)v433 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v433 + 302LL) )
        {
          v452 = (int *)(*(_QWORD *)(v450 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v452 - 1) != System_IDisposable_TypeInfo )
          {
            --v451;
            v452 += 4;
            if ( !v451 )
              goto LABEL_313;
          }
          v453 = v450 + 16LL * *v452 + 312;
        }
        else
        {
LABEL_313:
          v453 = sub_1C1C7C0(v433, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v453)(v433, *(_QWORD *)(v453 + 8));
        v394 = v496;
        LODWORD(v395) = *(_DWORD *)(v496 + 24);
        if ( (__int64)++v422 >= (int)v395 )
          goto LABEL_322;
      }
      goto LABEL_371;
    }
  }
LABEL_322:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v495 + 24))(
              *(_QWORD *)(v495 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v495 + 40));
  if ( !ActorId )
    goto LABEL_370;
  v454 = *(_QWORD *)ActorId;
  v455 = ActorId;
  v456 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v457 = (int *)(*(_QWORD *)(v454 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v457 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v456;
      v457 += 4;
      if ( !v456 )
        goto LABEL_327;
    }
    v458 = v454 + 16LL * *v457 + 312;
  }
  else
  {
LABEL_327:
    v458 = sub_1C1C7C0(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v459 = (*(__int64 (__fastcall **)(__int64, _QWORD))v458)(v455, *(_QWORD *)(v458 + 8));
  v461 = v459;
  while ( 1 )
  {
    if ( !v461 )
      sub_1BCAA3C(v459, v460);
    v462 = *(_QWORD *)v461;
    v463 = *(unsigned __int16 *)(*(_QWORD *)v461 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v461 + 302LL) )
    {
      v464 = (int *)(*(_QWORD *)(v462 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v464 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v463;
        v464 += 4;
        if ( !v463 )
          goto LABEL_335;
      }
      v465 = v462 + 16LL * *v464 + 312;
    }
    else
    {
LABEL_335:
      v465 = sub_1C1C7C0(v461, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v465)(v461, *(_QWORD *)(v465 + 8)) & 1) == 0 )
      break;
    v466 = *(_QWORD *)v461;
    v467 = *(unsigned __int16 *)(*(_QWORD *)v461 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v461 + 302LL) )
    {
      v468 = (int *)(*(_QWORD *)(v466 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v468 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v467;
        v468 += 4;
        if ( !v467 )
          goto LABEL_342;
      }
      v469 = v466 + 16LL * *v468 + 312;
    }
    else
    {
LABEL_342:
      v469 = sub_1C1C7C0(v461, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v470 = (*(__int64 (__fastcall **)(__int64, _QWORD))v469)(v461, *(_QWORD *)(v469 + 8));
    if ( !*v497 )
      sub_1BCAA3C(v470, v471);
    if ( !v470 )
      sub_1BCAA3C(0LL, v471);
    if ( !this->fields.logic )
      sub_1BCAA3C(v470, v471);
    v459 = BattleLogic__SetDamageSideEffect(
             this->fields.logic,
             *v129,
             (*v497)->fields.uniqueId,
             *(_DWORD *)(v470 + 24),
             *v498,
             0LL);
  }
  v472 = *(_QWORD *)v461;
  v473 = *(unsigned __int16 *)(*(_QWORD *)v461 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v461 + 302LL) )
  {
    v474 = (int *)(*(_QWORD *)(v472 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v474 - 1) != System_IDisposable_TypeInfo )
    {
      --v473;
      v474 += 4;
      if ( !v473 )
        goto LABEL_352;
    }
    v475 = v472 + 16LL * *v474 + 312;
  }
  else
  {
LABEL_352:
    v475 = sub_1C1C7C0(v461, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v475)(v461, *(_QWORD *)(v475 + 8));
  ActorId = *v484;
  if ( !*v484 )
    goto LABEL_370;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v500,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v501 = v500;
  while ( 1 )
  {
    v476 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v501,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v476 )
      break;
    current = v501.fields._current;
    if ( !v501.fields._current )
      sub_1BCAA3C(v476, v477);
    monitor = v501.fields._current[49].monitor;
    if ( !monitor )
      sub_1BCAA3C(v476, v477);
    monitor[152] = 0;
    if ( v486->fields.isCanCounterTask )
    {
      if ( !*v497 )
        sub_1BCAA3C(v476, v477);
      v480 = this->fields.data;
      if ( !v480 )
        sub_1BCAA3C(0LL, v477);
      BattleData__SetWasAttackTargetId(v480, (*v497)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v501,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !*(_QWORD *)v487 )
    goto LABEL_370;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v487 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v487 + 64LL),
              v493,
              *(_QWORD *)(*(_QWORD *)v487 + 40LL));
  v481 = *v129;
  if ( !*v129
    || (v481->fields.isForcedSpeedOne = v486->fields.isForcedSpeedOne, v481->fields.isAllAttack = v485, !*v497)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v497)->fields.uniqueId, targetId, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_370:
    sub_1BCAA3C(ActorId, v103);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v129;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateDoNotActAction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattleData_o *data; // x0
  struct BattleLogic_o *logic; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  UnityEngine_Object_o *DoNotActByCommandSealedObject_k__BackingField; // x20
  bool v14; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1

  if ( (byte_4B18E92 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8847/*"MOTION_DO_NOT_ACT"*/, v7, v8);
    byte_4B18E92 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, task);
  v14 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0LL, 0LL);
  v18 = 0LL;
  if ( !v14 )
  {
    v18 = sub_1BCAA2C(BattleActionData_TypeInfo, v15, v16, v17);
    BattleActionData___ctor((BattleActionData_o *)v18, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v18 )
      {
        *(_DWORD *)(v18 + 32) = (_DWORD)data;
        v25 = StringLiteral_8847/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v18 + 64) = StringLiteral_8847/*"MOTION_DO_NOT_ACT"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 64), v25, v19, v20, v21, v22, v23, v24);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v18 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v18;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(data, task);
  }
  return (BattleActionData_o *)v18;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ProgressIntervalTurnActionData_o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0

  if ( (byte_4B18E91 & 1) == 0 )
  {
    sub_1BCA7E0(&ProgressIntervalTurnActionData_TypeInfo, task, method);
    byte_4B18E91 = 1;
  }
  v5 = (ProgressIntervalTurnActionData_o *)sub_1BCAA2C(ProgressIntervalTurnActionData_TypeInfo, task, method, v3);
  ProgressIntervalTurnActionData___ctor(v5, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v5 )
    goto LABEL_11;
  ProgressIntervalTurnActionData__AddTurnProgressServants(v5, (BattleServantData_array *)data, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  if ( !data->fields.leaderDown || !data->fields.endbattleFlg )
  {
    FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 0, 0LL);
    ProgressIntervalTurnActionData__AddTurnProgressServants(v5, FieldEnemyServantList, 0LL);
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
LABEL_11:
    sub_1BCAA3C(data, v6);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0LL, (BattleActionData_o *)v5, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BattleData_o *data; // x0
  struct BattleData_o *v13; // x8
  BattleServantData_o *v14; // x19
  __int64 v15; // x22
  int v16; // w22
  int64_t v17; // x21
  __int64 v18; // x1
  BattleActorControl_o *PartsActor; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  struct BattleData_o *v22; // x8
  __int64 v23; // x1
  BattleActorControl_o *v24; // x22
  struct BattleData_o *v25; // x8
  int32_t uniqueID; // w9
  int64_t *v27; // x10
  __int64 v28; // x1
  BattleActorControl_o *v29; // x22
  int32_t v30; // w8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B18E87 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6520/*"FOCUS_UNDER"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_6518/*"FOCUS_CENTER"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6522/*"FOCUS_UP"*/, v10, v11);
    byte_4B18E87 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, data->fields.justDeadTargetId, 0LL);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_42;
  v14 = (BattleServantData_o *)data;
  v13->fields.justDeadTargetId = -1;
  if ( !data )
    return 0LL;
  if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)data, 0LL)
    || (v15 = 0LL, BattleServantData__isMultiTargetUnder(v14, 0LL)) )
  {
    data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(v14, 0LL);
    if ( !this->fields.data )
      goto LABEL_42;
    v16 = (int)data;
    v17 = StringLiteral_6518/*"FOCUS_CENTER"*/;
    PartsActor = BattleData__GetPartsActor(this->fields.data, 1, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
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
        v22 = this->fields.data;
        if ( !v22 )
          goto LABEL_42;
        v17 = StringLiteral_6518/*"FOCUS_CENTER"*/;
        v22->fields.globaltargetId = PartsActor->fields.uniqueID;
      }
    }
    if ( v16 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v29 = BattleData__GetPartsActor(data, 2, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v29 )
        goto LABEL_42;
      data = (BattleData_o *)v29->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v25 = this->fields.data;
      if ( !v25 )
        goto LABEL_42;
      uniqueID = v29->fields.uniqueID;
      v27 = &StringLiteral_6520/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v16 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v24 = BattleData__GetPartsActor(data, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v24 )
        goto LABEL_42;
      data = (BattleData_o *)v24->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v25 = this->fields.data;
      if ( !v25 )
        goto LABEL_42;
      uniqueID = v24->fields.uniqueID;
      v27 = &StringLiteral_6522/*"FOCUS_UP"*/;
    }
    v17 = *v27;
    v25->fields.globaltargetId = uniqueID;
LABEL_39:
    v15 = sub_1BCAA2C(BattleActionData_TypeInfo, method, v20, v21);
    BattleActionData___ctor((BattleActionData_o *)v15, 0LL);
    if ( v15 )
    {
      v30 = v14->fields.uniqueId;
      *(_DWORD *)(v15 + 32) = v30;
      *(_DWORD *)(v15 + 36) = v30;
      BattleActionData__setStateField((BattleActionData_o *)v15, 0LL);
      *(_QWORD *)(v15 + 64) = v17;
      sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 64), v17, v31, v32, v33, v34, v35, v36);
      return (BattleActionData_o *)v15;
    }
LABEL_42:
    sub_1BCAA3C(data, method);
  }
  return (BattleActionData_o *)v15;
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B18E7D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method, v2);
    byte_4B18E7D = 1;
  }
  v5 = sub_1BCAA2C(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal__GetTargetCommandCodeBuffList(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *passiveBuffDict,
        BattleBuffData_o *actSvtBuffData,
        int32_t type,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x19
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  BattleLogicNomal___c_c *v30; // x0
  System_Comparison_T__o *_9__20_0; // x20
  Il2CppObject *v32; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18E7F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_BattleBuffData_BuffData__TypeInfo, passiveBuffDict, actSvtBuffData);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__20_0__, v20, v21);
    sub_1BCA7E0(&BattleLogicNomal___c_TypeInfo, v22, v23);
    byte_4B18E7F = 1;
  }
  value = 0LL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                       passiveBuffDict,
                                                       actSvtBuffData,
                                                       *(_QWORD *)&type);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_323676C *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v24) )
  {
LABEL_16:
    sub_1BCAA3C(CommandCardBuffArray, v26);
  }
  System_Collections_Generic_List_object___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v30 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v27);
    v30 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_0 = (System_Comparison_T__o *)v30->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v27);
      v30 = BattleLogicNomal___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__20_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BattleBuffData_BuffData__TypeInfo, v27, v28, v29);
    System_Comparison_object____ctor(
      _9__20_0,
      v32,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__20_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__20_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
      (int64_t)_9__20_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v24,
    _9__20_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24;
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
  __int64 v2; // x2
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  __int64 v7; // x1
  BattleActorControl_o *PartsActor; // x20
  struct BattleData_o *v9; // x8

  if ( (byte_4B18E89 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18E89 = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
              v9 = this->fields.data;
              if ( v9 )
              {
                v9->fields.globaltargetId = PartsActor->fields.uniqueID;
                return;
              }
            }
          }
LABEL_17:
          sub_1BCAA3C(data, method);
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
  __int64 v6; // x2
  BattleData_o *data; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *QuestIndividualities; // x21
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  struct BattleData_o *v19; // x8

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_4B18E8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, prevFieldIndiv, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5, v6);
    byte_4B18E8A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0LL);
  if ( !QuestIndividualities )
  {
    v11 = Method_System_Array_Empty_int___;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v8);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13, v8);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C1C6BC(inited);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v14 + 184);
  }
  if ( !v3 )
  {
    v15 = Method_System_Array_Empty_int___;
    v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v16 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v8);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v17 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v17, v8);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C1C6BC(inited);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v18 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
      v19 = this->fields.data;
      if ( v19 )
      {
        data = (BattleData_o *)v19->fields.perf;
        if ( data )
        {
          BattlePerformance__updateStatus((BattlePerformance_o *)data, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(data, prevFieldIndiv);
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
    sub_1BCAA3C(data, method);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  int v26; // w8
  unsigned int v27; // w27
  BattleServantData_o *v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  int max_length; // w8
  BattleBuffData_BuffData_array *v32; // x23
  unsigned int v33; // w28
  BattleBuffData_BuffData_o *v34; // x24
  BattleSkillInfoData_o *v35; // x25
  struct System_Int32_array *vals; // x8
  __int64 v37; // x2
  __int64 v38; // x3
  struct System_Int32_array *v39; // x8
  BattleLogicTask_o *v40; // x24
  BattleLogic_o *logic; // x25
  __int64 v42; // x26
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v60; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B18E8E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B18E8E = 1;
  }
  isFirstAdd = 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v25 = Instance;
  if ( !Instance )
    goto LABEL_44;
  v26 = *(_DWORD *)(Instance + 24);
  if ( v26 >= 1 )
  {
    v27 = 0;
    do
    {
      if ( v27 >= v26 )
        goto LABEL_45;
      v28 = *(BattleServantData_o **)(v25 + 8LL * (int)v27 + 32);
      if ( !v28 )
        goto LABEL_44;
      if ( !v28->fields.status )
      {
        Instance = BattleServantData__isAlive(v28, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v28, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_44;
          max_length = *(_DWORD *)(Instance + 24);
          v32 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v33 = 0;
            while ( v33 < max_length )
            {
              v34 = v32->m_Items[v33];
              v35 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v24, v29, v30);
              BattleSkillInfoData___ctor(v35, 0LL);
              if ( !v35 )
                goto LABEL_44;
              v35->fields.svtUniqueId = v28->fields.uniqueId;
              if ( !v34 )
                goto LABEL_44;
              vals = v34->fields.vals;
              if ( !vals )
                goto LABEL_44;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v35->klass->vtable._4_set_skillId.method)(
                           v35,
                           (unsigned int)vals->m_Items[1],
                           v35->klass->vtable._5_get_skillId.methodPtr);
              v39 = v34->fields.vals;
              if ( !v39 )
                goto LABEL_44;
              if ( v39->max_length <= 1 )
                break;
              v35->fields.skilllv = v39->m_Items[2];
              v40 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v24, v37, v38);
              BattleLogicTask___ctor(v40, 0LL);
              if ( !v40 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v40, v35, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1BCA888(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v42 = Instance;
              Instance = sub_1BCA91C(v40, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v60 = sub_1BCAA60(0LL);
                sub_1BCA908(v60, 0LL);
              }
              if ( !*(_DWORD *)(v42 + 24) )
                break;
              *(_QWORD *)(v42 + 32) = v40;
              sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v40, v43, v44, v45, v46, v47, v48);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v28,
                v32,
                (BattleLogicTask_array *)v42,
                0LL);
              if ( !v22 )
                goto LABEL_44;
              items = v22->fields._items;
              v56 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v22->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v22->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                v58 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v58[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v40, v49, v50, v51, v52, v53, v54);
              }
              max_length = v32->max_length;
              if ( (int)++v33 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1BCAA44(Instance, v24);
          }
LABEL_38:
          Instance = (__int64)v28->fields.buffData;
          if ( !Instance )
            goto LABEL_44;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
      }
      v26 = *(_DWORD *)(v25 + 24);
    }
    while ( (int)++v27 < v26 );
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)Instance,
          (System_Collections_Generic_List_BattleLogicTask__o *)v22,
          1,
          0LL),
        !v22) )
  {
LABEL_44:
    sub_1BCAA3C(Instance, v24);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w8
  _BOOL8 v22; // x0
  __int64 v23; // x1
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v32; // x1
  SkillLvEntity_o *v33; // x29
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x26
  BattleActionData_o *v37; // x28
  DataVals_array *DataValsList; // x0
  __int64 v39; // x1
  BattleLogicFunction_o *v40; // x0
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v43; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+60h] [xbp-80h] BYREF

  v43 = this;
  if ( (byte_4B18E93 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      checkInvokeBuff,
      skillLvMst);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17, v18);
    this = (BattleLogicNomal_o *)sub_1BCA7E0(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v19,
                                   v20);
    byte_4B18E93 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( !commandCodeBuffList )
    sub_1BCAA3C(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v45.fields._current = v44.fields._current;
  if ( isCommandAfter )
    v21 = 1;
  else
    v21 = 3;
  *(_OWORD *)&v45.fields._list = *(_OWORD *)&v44.fields._list;
  type = v21;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v22 )
      break;
    if ( !command )
      sub_1BCAA3C(v22, v23);
    current = (BattleBuffData_BuffData_o *)v45.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1BCAA3C(IsEnableCommandCode, v26);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1BCAA3C(IsEnableCommandCode, v26);
    v27 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v27 & 1) != 0 )
    {
      if ( arg == 0LL || !isCommandAfter )
      {
        if ( !current )
          sub_1BCAA3C(v27, v28);
        vals = current->fields.vals;
        if ( !vals )
          sub_1BCAA3C(v27, v28);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1BCAA44(v27, v28);
        if ( max_length == 1 )
          sub_1BCAA44(v27, v28);
        if ( !skillLvMst )
          sub_1BCAA3C(v27, v28);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v33 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1BCAA3C(Entity, v32);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1BCAA3C(Entity, v32);
          logicfunction = v43->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v33->fields.funcId;
          v37 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v33, 0LL);
          if ( !logicfunction )
            sub_1BCAA3C(DataValsList, v39);
          BattleLogicFunction__procList(
            logicfunction,
            v37,
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
        v40 = v43->fields.logicfunction;
        if ( !v40 )
          sub_1BCAA3C(0LL, v28);
        BattleLogicFunction__SetSideEffectBuff(
          v40,
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
    &v45,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1

  if ( (byte_4B18E81 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId, method);
    sub_1BCA7E0(&StringLiteral_8838/*"MOTION_BACK"*/, v5, v6);
    byte_4B18E81 = 1;
  }
  v7 = sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&uniqueId, method, v3);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_DWORD *)(v7 + 32) = uniqueId;
  v16 = StringLiteral_8838/*"MOTION_BACK"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8838/*"MOTION_BACK"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 64), v16, v10, v11, v12, v13, v14, v15);
  return (BattleActionData_o *)v7;
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
            sub_1BCAA44(data, task);
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
    sub_1BCAA3C(data, task);
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleData_o *data; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  struct BattleData_o *v13; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x10
  BattleData_o *v15; // x20
  _BOOL4 v16; // w9
  unsigned __int64 v17; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  int32_t v19; // w21
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B18E8D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AiNpcBattleServantData__TypeInfo, task, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v4, v5);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__38_0__, v6, v7);
    sub_1BCA7E0(&BattleLogicNomal___c_TypeInfo, v8, v9);
    byte_4B18E8D = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !data )
    goto LABEL_31;
  v13 = this->fields.data;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v15 = data;
  v16 = v13 == 0LL;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v17 = 0LL;
    p_rootfsm = &data->fields.rootfsm;
    while ( !v16 )
    {
      if ( v17 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_32;
      data = (BattleData_o *)v13->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_rootfsm[v17],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v17 >= LODWORD(v15->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v17];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v17 >= LODWORD(v15->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        v19 = (int)data;
        data = (BattleData_o *)p_rootfsm[v17];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v17 >= LODWORD(v15->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v17];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v19, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v17 >= LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_32:
            sub_1BCAA44(data, task);
          data = (BattleData_o *)p_rootfsm[v17];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v13 = this->fields.data;
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      ++v17;
      v16 = v13 == 0LL;
      if ( (__int64)v17 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_31:
    sub_1BCAA3C(data, task);
  }
LABEL_22:
  if ( v16 )
    goto LABEL_31;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v13->fields.aiNpcDataList;
  data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, task);
    data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
  }
  monitor = (System_Action_object__o *)data->fields.enemyMasterInfo[1].monitor;
  if ( !monitor )
  {
    if ( !data->fields.turnEffectType )
    {
      j_il2cpp_runtime_class_init_0(data, task);
      data = (BattleData_o *)BattleLogicNomal___c_TypeInfo;
    }
    klass = (Il2CppObject *)data->fields.enemyMasterInfo->klass;
    monitor = (System_Action_object__o *)sub_1BCAA2C(System_Action_AiNpcBattleServantData__TypeInfo, task, v11, v12);
    System_Action_object____ctor(monitor, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__38_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Action_AiNpcBattleServantData__o *)monitor;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__38_0, (int64_t)monitor, v24, v25, v26, v27, v28, v29);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)monitor,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  __int64 isBuster; // x0
  int64_t v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  struct System_Int32_array *targetIdlist; // x23
  __int64 v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int v31; // w8
  PartyOrganizationUtility_o *v32; // x0
  System_Array_o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t *v40; // x8
  int64_t v41; // x1
  __int64 v42; // x8
  char v43; // w21
  unsigned __int64 v44; // x22
  System_Array_o *v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_RuntimeFieldHandle_o v53; // 0:w1.4
  System_RuntimeFieldHandle_o v54; // 0:w1.4

  if ( (byte_4B18E82 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    sub_1BCA7E0(&FunctionEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v10,
      v11);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v12,
      v13);
    sub_1BCA7E0(&StringLiteral_6502/*"FIELD_PLAYER"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6501/*"FIELD_ENEMY"*/, v16, v17);
    byte_4B18E82 = 1;
  }
  v18 = sub_1BCAA2C(BattleActionData_TypeInfo, task, method, v3);
  BattleActionData___ctor((BattleActionData_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v18, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v24 = sub_1BCAA2C(FunctionEntity_TypeInfo, v20, v21, v22);
  FunctionEntity___ctor((FunctionEntity_o *)v24, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v18, 0LL);
    isBuster = sub_1BCA888(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v31 = *(_DWORD *)(isBuster + 24);
      v20 = isBuster;
      if ( !v31 || (*(_DWORD *)(isBuster + 32) = 102, v31 == 1) )
LABEL_30:
        sub_1BCAA44(isBuster, v20);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v24 )
      {
        *(_QWORD *)(v24 + 32) = isBuster;
        v32 = (PartyOrganizationUtility_o *)(v24 + 32);
LABEL_14:
        sub_1BCA784(v32, v20, v25, v26, v27, v28, v29, v30);
        v40 = &StringLiteral_6502/*"FIELD_PLAYER"*/;
LABEL_15:
        v41 = *v40;
        *(_QWORD *)(v18 + 64) = *v40;
        sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 64), v41, v34, v35, v36, v37, v38, v39);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1BCAA3C(isBuster, v20);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v18, 0LL);
    v33 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 3LL);
    v53.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v33, v53, 0LL);
    if ( !v24 )
      goto LABEL_29;
    *(_QWORD *)(v24 + 32) = v33;
    v32 = (PartyOrganizationUtility_o *)(v24 + 32);
    v20 = (int64_t)v33;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0LL);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v18, 0LL);
    v46 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 3LL);
    v54.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v46, v54, 0LL);
    if ( v24 )
    {
      *(_QWORD *)(v24 + 32) = v46;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v46, v47, v48, v49, v50, v51, v52);
      v40 = &StringLiteral_6501/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v42 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v42 < 1 )
    return 0LL;
  v43 = 0;
  v44 = 0LL;
  do
  {
    if ( v44 >= (unsigned int)v42 )
      goto LABEL_30;
    isBuster = (__int64)this->fields.data;
    if ( !isBuster )
      goto LABEL_29;
    isBuster = (__int64)BattleData__getServantData((BattleData_o *)isBuster, targetIdlist->m_Items[v44 + 1], 0LL);
    LODWORD(v42) = targetIdlist->max_length;
    ++v44;
    v43 |= isBuster != 0;
  }
  while ( (__int64)v44 < (int)v42 );
  if ( (v43 & 1) != 0 )
    return (BattleActionData_o *)v18;
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
    sub_1BCAA3C(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x24
  __int64 Instance; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x21
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Collections_Generic_Dictionary_int__object__o *v83; // x23
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Collections_Generic_List_int__o *v95; // x26
  int v96; // w8
  __int64 v97; // x28
  unsigned int v98; // w22
  __int64 v99; // x25
  __int64 *v100; // x25
  __int64 v101; // t1
  Il2CppObject *v102; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v107; // w25
  Il2CppClass **v108; // x27
  Il2CppClass *v109; // x8
  char *v110; // x27
  Il2CppClass *v111; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v113; // x8
  int32_t v114; // w9
  struct BattleData_o *v115; // x8
  __int64 v116; // x28
  int v117; // w8
  unsigned int v118; // w22
  __int64 v119; // x23
  __int64 *v120; // x23
  __int64 v121; // t1
  bool v122; // w3
  char v123; // w29
  Il2CppObject *v124; // x29
  struct System_Int32_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v129; // x8
  struct BattlePerformance_o *perf; // x9
  __int64 v131; // x2
  __int64 v132; // x3
  struct BattleData_o *v133; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v135; // x26
  struct BattleData_o *v136; // x8
  const MethodInfo *v137; // x2
  struct BattleData_o *v138; // x8
  Il2CppObject *v139; // x0
  __int64 v140; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v144; // w23
  char v145; // w22
  BattleBuffData_BuffData_o *v146; // x28
  __int64 v147; // x2
  __int64 v148; // x3
  BattleSkillInfoData_o *v149; // x26
  __int64 v150; // x0
  __int64 v151; // x1
  struct System_Int32_array *vals; // x8
  __int64 v153; // x0
  __int64 v154; // x1
  struct System_Int32_array *v155; // x8
  BattleData_o *v156; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v158; // x1
  SkillLvEntity_o *v159; // x0
  __int64 v160; // x1
  SkillLvEntity_o *v161; // x29
  BattleData_o *v162; // x0
  _BOOL8 v163; // x0
  __int64 v164; // x1
  BattleLogic_o *v165; // x0
  int32_t v166; // w20
  __int64 v167; // x0
  __int64 v168; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v172; // x0
  __int64 v173; // x1
  System_Collections_ICollection_o *v174; // x0
  __int64 v175; // x1
  BattleLogicTask_array *v176; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v178; // x0
  BattleLogic_o *v179; // x0
  __int64 v180; // x1
  BattleData_o *v181; // x0
  int32_t v182; // w23
  Il2CppObject *v183; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x3
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v189; // x20
  int v190; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v192; // x26
  __int64 v193; // x2
  __int64 v194; // x3
  BattleSkillInfoData_o *v195; // x25
  __int64 v196; // x0
  __int64 v197; // x1
  struct System_Int32_array *v198; // x8
  __int64 v199; // x0
  __int64 v200; // x1
  struct System_Int32_array *v201; // x8
  BattleData_o *v202; // x0
  BattleServantData_o *v203; // x27
  __int64 v204; // x1
  SkillLvEntity_o *v205; // x0
  __int64 v206; // x1
  SkillLvEntity_o *v207; // x28
  BattleData_o *v208; // x0
  _BOOL8 v209; // x0
  __int64 v210; // x1
  BattleLogic_o *v211; // x0
  int32_t v212; // w20
  __int64 v213; // x0
  __int64 v214; // x1
  System_Int32_array *v215; // x26
  bool v216; // w27
  BattleLogicSkill_o *v217; // x20
  System_Int32_array *v218; // x0
  __int64 v219; // x1
  BattleLogicTask_array *v220; // x1
  BattleLogic_o *v221; // x0
  struct BattleData_o *v222; // x8
  BattleActionData_o *v223; // x1
  const MethodInfo *v225; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v226; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v227; // [xsp+20h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-D0h]
  char v229; // [xsp+3Ch] [xbp-C4h]
  SkillLvMaster_o *v230; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v231; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v232; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4B18E8B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AiNpcBattleServantData__TypeInfo, task, method);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__,
      v27,
      v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v29,
      v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v31,
      v32);
    sub_1BCA7E0(&int___TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v45, v46);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass36_0__createEndTurnEnemy_b__0__, v51, v52);
    sub_1BCA7E0(&BattleLogicNomal___c__DisplayClass36_0_TypeInfo, v53, v54);
    sub_1BCA7E0(&StringLiteral_8849/*"MOTION_ENEMY_TURN_END"*/, v55, v56);
    byte_4B18E8B = 1;
  }
  entity = 0LL;
  memset(&v232, 0, sizeof(v232));
  v57 = sub_1BCAA2C(BattleLogicNomal___c__DisplayClass36_0_TypeInfo, task, method, v3);
  System_Object___ctor((Il2CppObject *)v57, 0LL);
  if ( !v57 )
    goto LABEL_215;
  *(_QWORD *)(v57 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)this, v60, v61, v62, v63, v64, v65);
  baseActData = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v66, v67, v68);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v57 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !baseActData )
    goto LABEL_215;
  BattleActionData__setStateField(baseActData, 0LL);
  v70 = StringLiteral_8849/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8849/*"MOTION_ENEMY_TURN_END"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&baseActData->fields.motionname, v70, v71, v72, v73, v74, v75, v76);
  v227 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                   v77,
                                                                   v78,
                                                                   v79);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v227,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v83 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                  v80,
                                                                  v81,
                                                                  v82);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v83,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v230 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v57 + 24) = QuestIndividualities;
  sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 24), (int64_t)QuestIndividualities, v86, v87, v88, v89, v90, v91);
  v95 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v92,
                                                    v93,
                                                    v94);
  System_Collections_Generic_List_int____ctor(
    v95,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v226 = v83;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v96 = *(_DWORD *)(Instance + 24);
  v97 = Instance;
  if ( v96 >= 1 )
  {
    v98 = 0;
    while ( 1 )
    {
      if ( v98 >= v96 )
        goto LABEL_220;
      v99 = v97 + 8LL * (int)v98;
      v101 = *(_QWORD *)(v99 + 32);
      v100 = (__int64 *)(v99 + 32);
      Instance = v101;
      if ( !v101 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 540) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v57 + 16),
                              *(System_Int32_array **)(v57 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v98 >= *(_DWORD *)(v97 + 24) )
          goto LABEL_220;
        v102 = (Il2CppObject *)Instance;
        Instance = *v100;
        if ( !*v100 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v98 >= *(_DWORD *)(v97 + 24) )
            goto LABEL_220;
          Instance = *v100;
          if ( !*v100 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v102 )
              goto LABEL_215;
            if ( v102[1].monitor )
            {
              if ( v98 >= *(_DWORD *)(v97 + 24) )
                goto LABEL_220;
              Instance = (__int64)v227;
              if ( !*v100 || !v227 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v227,
                *(_DWORD *)(*v100 + 24),
                v102,
                (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v98 >= *(_DWORD *)(v97 + 24) )
          goto LABEL_220;
        if ( !*v100 )
          goto LABEL_215;
        if ( !v95 )
          goto LABEL_215;
        v59 = *(unsigned int *)(*v100 + 24);
        items = v95->fields._items;
        v104 = Method_System_Collections_Generic_List_int__Add__;
        ++v95->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v95->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v95,
            v59,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v95->fields._size = size + 1;
          items->m_Items[size + 1] = v59;
        }
        if ( !v102 )
          goto LABEL_215;
        monitor = (int)v102[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_52:
      v96 = *(_DWORD *)(v97 + 24);
      if ( (int)++v98 >= v96 )
        goto LABEL_53;
    }
    v107 = 0;
    while ( v107 < monitor )
    {
      v108 = &v102->klass + (int)v107;
      v111 = v108[4];
      v110 = (char *)(v108 + 4);
      v109 = v111;
      if ( !v111 || !v69 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v69,
                   &entity,
                   (int32_t)v109->_1.name,
                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v113 = logic->fields.data;
          if ( !v113 )
            goto LABEL_215;
          if ( v107 >= LODWORD(v102[1].monitor) )
            break;
          if ( !*(_QWORD *)v110 )
            goto LABEL_215;
          v114 = *(_DWORD *)(*(_QWORD *)v110 + 28LL);
          if ( v113->fields.endMasterSkillTurnBuffValue <= v114 )
            v113->fields.endMasterSkillTurnBuffValue = v114;
        }
      }
      monitor = (int)v102[1].monitor;
      if ( (int)++v107 >= monitor )
        goto LABEL_52;
    }
LABEL_220:
    sub_1BCAA44(Instance, v59);
  }
LABEL_53:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v115 = this->fields.data;
  if ( !v115 )
    goto LABEL_215;
  v116 = Instance;
  if ( v115->fields.leaderDown && v115->fields.endbattleFlg )
  {
    v229 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v117 = *(_DWORD *)(Instance + 24);
    if ( v117 >= 1 )
    {
      v118 = 0;
      v229 = 0;
      while ( v118 < v117 )
      {
        v119 = v116 + 8LL * (int)v118;
        v121 = *(_QWORD *)(v119 + 32);
        v120 = (__int64 *)(v119 + 32);
        Instance = v121;
        if ( !v121 )
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
            v122 = 1;
          }
          else
          {
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_215;
            Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
            v122 = Instance & 1;
          }
          if ( v118 >= *(_DWORD *)(v116 + 24) )
            goto LABEL_220;
          Instance = *v120;
          if ( !*v120 )
            goto LABEL_215;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *(System_Int32_array **)(v57 + 24),
                       this->fields.logic,
                       v122,
                       baseActData,
                       0LL);
          if ( v118 >= *(_DWORD *)(v116 + 24) )
            goto LABEL_220;
          v123 = Instance;
          Instance = *v120;
          if ( !*v120 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v118 >= *(_DWORD *)(v116 + 24) )
              goto LABEL_220;
            Instance = *v120;
            if ( !*v120 )
              goto LABEL_215;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_215;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v118 >= *(_DWORD *)(v116 + 24) )
                goto LABEL_220;
              if ( !*v120 || !v226 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v226,
                *(_DWORD *)(*v120 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v118 >= *(_DWORD *)(v116 + 24) )
            goto LABEL_220;
          if ( !*v120 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v120 + 792);
          if ( !Instance )
            goto LABEL_215;
          v229 |= v123;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v118 >= *(_DWORD *)(v116 + 24) )
          goto LABEL_220;
        Instance = *v120;
        if ( !*v120 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 540) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v57 + 16),
                                *(System_Int32_array **)(v57 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v118 >= *(_DWORD *)(v116 + 24) )
            goto LABEL_220;
          v124 = (Il2CppObject *)Instance;
          Instance = *v120;
          if ( !*v120 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v118 >= *(_DWORD *)(v116 + 24) )
              goto LABEL_220;
            Instance = *v120;
            if ( !*v120 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v124 )
                goto LABEL_215;
              if ( v124[1].monitor )
              {
                if ( v118 >= *(_DWORD *)(v116 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v227;
                if ( !*v120 || !v227 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v227,
                  *(_DWORD *)(*v120 + 24),
                  v124,
                  (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v118 >= *(_DWORD *)(v116 + 24) )
            goto LABEL_220;
          if ( !*v120 )
            goto LABEL_215;
          if ( !v95 )
            goto LABEL_215;
          v59 = *(unsigned int *)(*v120 + 24);
          v125 = v95->fields._items;
          v126 = Method_System_Collections_Generic_List_int__Add__;
          ++v95->fields._version;
          if ( !v125 )
            goto LABEL_215;
          v127 = v95->fields._size;
          if ( (unsigned int)v127 >= v125->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v95,
              v59,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
          }
          else
          {
            v95->fields._size = v127 + 1;
            v125->m_Items[v127 + 1] = v59;
          }
        }
        v117 = *(_DWORD *)(v116 + 24);
        if ( (int)++v118 >= v117 )
          goto LABEL_111;
      }
      goto LABEL_220;
    }
    v229 = 0;
LABEL_111:
    v115 = this->fields.data;
    if ( !v115 )
      goto LABEL_215;
  }
  if ( !v95 )
    goto LABEL_215;
  battleEvent = v115->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v95,
                        (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v57 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v129 = this->fields.data;
  if ( !v129 )
    goto LABEL_215;
  perf = v129->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v129->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v133 = this->fields.data;
  if ( !v133 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v133->fields.aiNpcDataList;
  v135 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AiNpcBattleServantData__TypeInfo, v59, v131, v132);
  System_Action_object____ctor(
    v135,
    (Il2CppObject *)v57,
    Method_BattleLogicNomal___c__DisplayClass36_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v135,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v136 = this->fields.data;
  if ( !v136 )
    goto LABEL_215;
  Instance = (__int64)v136->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v57 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v57 + 24), v137);
  v138 = this->fields.data;
  if ( !v138 )
    goto LABEL_215;
  v138->fields.currentTurn = 0;
  if ( !v226 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v231,
    v226,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v232 = v231;
  while ( 1 )
  {
    v139 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                             &v232,
                             (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v139 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v232.fields._current.fields.value;
    if ( !v232.fields._current.fields.value )
      sub_1BCAA3C(v139, v140);
    max_length = (int)v232.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v232.fields._current.fields.key;
      v144 = 0;
      v145 = 1;
LABEL_128:
      if ( v144 >= max_length )
        sub_1BCAA44(v139, v140);
      v146 = value->m_Items[v144];
      if ( !v146 )
        sub_1BCAA3C(v139, v140);
      if ( v146->fields._isRemove )
        goto LABEL_164;
      if ( !v69 )
        sub_1BCAA3C(v139, v140);
      v139 = DataMasterBase_object__object__int___GetEntity(
               v69,
               v146->fields.buffId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v139 )
        goto LABEL_164;
      v149 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v140, v147, v148);
      BattleSkillInfoData___ctor(v149, 0LL);
      if ( !v149 )
        sub_1BCAA3C(v150, v151);
      v149->fields.svtUniqueId = key;
      vals = v146->fields.vals;
      if ( !vals )
        sub_1BCAA3C(v150, v151);
      if ( !vals->max_length )
        sub_1BCAA44(v150, v151);
      v153 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v149->klass->vtable._4_set_skillId.method)(
               v149,
               (unsigned int)vals->m_Items[1],
               v149->klass->vtable._5_get_skillId.methodPtr);
      v155 = v146->fields.vals;
      if ( !v155 )
        sub_1BCAA3C(v153, v154);
      if ( v155->max_length <= 1 )
        sub_1BCAA44(v153, v154);
      v149->fields.skilllv = v155->m_Items[2];
      v156 = this->fields.data;
      if ( !v156 )
        sub_1BCAA3C(0LL, v154);
      ServantData = BattleData__getServantData(v156, v149->fields.svtUniqueId, 0LL);
      v158 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v149->klass->vtable._5_get_skillId.method)(
               v149,
               v149->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v230 )
        sub_1BCAA3C(0LL, v158);
      v159 = SkillLvMaster__GetEntity(v230, v158, v149->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1BCAA3C(v159, v160);
      v161 = v159;
      v162 = this->fields.data;
      if ( !v162 )
        sub_1BCAA3C(0LL, v160);
      v163 = BattleData__checkAliveOther(v162, ServantData->fields.uniqueId, 0LL);
      if ( !v163 )
      {
        if ( !v161 )
          sub_1BCAA3C(v163, v164);
        v165 = this->fields.logic;
        if ( !v165 )
          sub_1BCAA3C(0LL, v164);
        v139 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v165, v161->fields.funcId, 0LL);
        if ( ((unsigned __int8)v139 & 1) == 0 )
          goto LABEL_164;
      }
      v166 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v146, 0LL);
      if ( (v166 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v149->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v149, 0LL);
      }
      else
      {
        v167 = sub_1BCA888(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v167;
        if ( !v167 )
          sub_1BCAA3C(0LL, v168);
        if ( !*(_DWORD *)(v167 + 24) )
          sub_1BCAA44(v167, v168);
        exists = 0;
        *(_DWORD *)(v167 + 32) = v166;
      }
      logicskill = this->fields.logicskill;
      v172 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v172 )
        sub_1BCAA3C(0LL, v173);
      if ( !v172->max_length )
        sub_1BCAA44(v172, v173);
      v172->m_Items[1] = key;
      if ( !logicskill )
        sub_1BCAA3C(v172, v173);
      v174 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v149,
                                                   v172,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v225);
      v176 = (BattleLogicTask_array *)v174;
      if ( (v145 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v174, 0LL);
        if ( IsNullOrEmpty )
        {
          v145 = 1;
          goto LABEL_162;
        }
        if ( !v176 )
          sub_1BCAA3C(IsNullOrEmpty, v175);
        if ( !v176->max_length )
          sub_1BCAA44(IsNullOrEmpty, v175);
        v178 = v176->m_Items[0];
        if ( !v178 )
          sub_1BCAA3C(0LL, v175);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v178, ServantData, value, 0LL);
      }
      v145 = 0;
LABEL_162:
      v179 = this->fields.logic;
      if ( !v179 )
        sub_1BCAA3C(0LL, v175);
      BattleLogic__addBattleLogicTask(v179, v176, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v144 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v232,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v227;
  if ( !v227 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v231,
    v227,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v232 = v231;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v232,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v181 = this->fields.data;
    if ( !v181 )
      sub_1BCAA3C(0LL, v180);
    v182 = (int32_t)v232.fields._current.fields.key;
    v183 = v232.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v181, (int32_t)v232.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v189 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v185,
                                                            v186,
                                                            v187);
      BattleBuffData_CheckIndividualitiesData___ctor_43379556(
        v189,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v189 )
        sub_1BCAA3C(isEndAct, v185);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v189->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v183 )
      sub_1BCAA3C(isEndAct, v185);
    v190 = (int)v183[1].monitor;
    if ( v190 >= 1 )
    {
      for ( i = 0; i < v190; ++i )
      {
        if ( i >= (unsigned int)v190 )
          sub_1BCAA44(isEndAct, v185);
        v192 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v183[2].klass + i);
        if ( !v192 )
          sub_1BCAA3C(isEndAct, v185);
        if ( !v192->fields._isRemove )
        {
          if ( !v69 )
            sub_1BCAA3C(isEndAct, v185);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v69,
                                              v192->fields.buffId,
                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v192, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v195 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v185, v193, v194);
                BattleSkillInfoData___ctor(v195, 0LL);
                if ( !v195 )
                  sub_1BCAA3C(v196, v197);
                v195->fields.svtUniqueId = v182;
                v198 = v192->fields.vals;
                if ( !v198 )
                  sub_1BCAA3C(v196, v197);
                if ( !v198->max_length )
                  sub_1BCAA44(v196, v197);
                v199 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v195->klass->vtable._4_set_skillId.method)(
                         v195,
                         (unsigned int)v198->m_Items[1],
                         v195->klass->vtable._5_get_skillId.methodPtr);
                v201 = v192->fields.vals;
                if ( !v201 )
                  sub_1BCAA3C(v199, v200);
                if ( v201->max_length <= 1 )
                  sub_1BCAA44(v199, v200);
                v195->fields.skilllv = v201->m_Items[2];
                v202 = this->fields.data;
                if ( !v202 )
                  sub_1BCAA3C(0LL, v200);
                v203 = BattleData__getServantData(v202, v195->fields.svtUniqueId, 0LL);
                v204 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v195->klass->vtable._5_get_skillId.method)(
                         v195,
                         v195->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v230 )
                  sub_1BCAA3C(0LL, v204);
                v205 = SkillLvMaster__GetEntity(v230, v204, v195->fields.skilllv, 0LL);
                if ( !v203 )
                  sub_1BCAA3C(v205, v206);
                v207 = v205;
                v208 = this->fields.data;
                if ( !v208 )
                  sub_1BCAA3C(0LL, v206);
                v209 = BattleData__checkAliveOther(v208, v203->fields.uniqueId, 0LL);
                if ( v209 )
                  goto LABEL_198;
                if ( !v207 )
                  sub_1BCAA3C(v209, v210);
                v211 = this->fields.logic;
                if ( !v211 )
                  sub_1BCAA3C(0LL, v210);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v211, v207->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v212 = BattleServantData__GetRevengeIdCheckOpponentOnly(v203, v192, 0LL);
                  if ( (v212 & 0x80000000) != 0 )
                  {
                    v215 = Target__getTargetIds(this->fields.data, v195->fields.svtUniqueId, -1, v182, 13, 0LL, 0LL);
                    v216 = BattleSkillInfoData__ExistsNoTargetNoActionType(v195, 0LL);
                  }
                  else
                  {
                    v213 = sub_1BCA888(int___TypeInfo, 1LL);
                    v215 = (System_Int32_array *)v213;
                    if ( !v213 )
                      sub_1BCAA3C(0LL, v214);
                    if ( !*(_DWORD *)(v213 + 24) )
                      sub_1BCAA44(v213, v214);
                    v216 = 0;
                    *(_DWORD *)(v213 + 32) = v212;
                  }
                  v217 = this->fields.logicskill;
                  v218 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
                  if ( !v218 )
                    sub_1BCAA3C(0LL, v219);
                  if ( !v218->max_length )
                    sub_1BCAA44(v218, v219);
                  v218->m_Items[1] = v182;
                  if ( !v217 )
                    sub_1BCAA3C(v218, v219);
                  v220 = BattleLogicSkill__taskSkill(v217, v195, v218, v215, 1, v216, 0, 0, 0, v225);
                  v221 = this->fields.logic;
                  if ( !v221 )
                    sub_1BCAA3C(0LL, v220);
                  BattleLogic__addBattleLogicTask(v221, v220, 0LL);
                }
              }
            }
          }
        }
        v190 = (int)v183[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v232,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v222 = this->fields.data;
  if ( !v222
    || (Instance = (__int64)v222->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1BCAA3C(Instance, v59);
  }
  if ( (v229 & 1) != 0 )
    v223 = baseActData;
  else
    v223 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v223, baseActData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x24
  __int64 Instance; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  const MethodInfo *v66; // x1
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x21
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Collections_Generic_List_int__o *v95; // x26
  int v96; // w8
  __int64 v97; // x28
  unsigned int v98; // w20
  __int64 v99; // x22
  __int64 *v100; // x22
  __int64 v101; // t1
  bool v102; // w3
  char v103; // w29
  Il2CppObject *v104; // x2
  Il2CppObject *v105; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v110; // w22
  Il2CppClass **v111; // x23
  Il2CppClass *v112; // x8
  char *v113; // x23
  Il2CppClass *v114; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v116; // x8
  int32_t v117; // w9
  struct BattleData_o *v118; // x8
  __int64 v119; // x27
  int v120; // w8
  unsigned int v121; // w20
  __int64 v122; // x22
  __int64 *v123; // x22
  __int64 v124; // t1
  Il2CppObject *v125; // x28
  struct System_Int32_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  struct BaseBattleEvent_o *battleEvent; // x23
  struct BattleData_o *v130; // x8
  struct BattlePerformance_o *perf; // x9
  __int64 v132; // x2
  __int64 v133; // x3
  struct BattleData_o *v134; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x23
  System_Action_object__o *v136; // x26
  struct BattleData_o *v137; // x8
  const MethodInfo *v138; // x2
  struct BattleData_o *v139; // x8
  Il2CppObject *v140; // x0
  __int64 v141; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v145; // w20
  char v146; // w22
  BattleBuffData_BuffData_o *v147; // x28
  __int64 v148; // x2
  __int64 v149; // x3
  BattleSkillInfoData_o *v150; // x26
  __int64 v151; // x0
  __int64 v152; // x1
  struct System_Int32_array *vals; // x8
  __int64 v154; // x0
  __int64 v155; // x1
  struct System_Int32_array *v156; // x8
  BattleData_o *v157; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v159; // x1
  SkillLvEntity_o *v160; // x0
  __int64 v161; // x1
  SkillLvEntity_o *v162; // x29
  BattleData_o *v163; // x0
  _BOOL8 v164; // x0
  __int64 v165; // x1
  BattleLogic_o *v166; // x0
  int32_t v167; // w23
  __int64 v168; // x0
  __int64 v169; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v173; // x0
  __int64 v174; // x1
  System_Collections_ICollection_o *v175; // x0
  __int64 v176; // x1
  BattleLogicTask_array *v177; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v179; // x0
  BattleLogic_o *v180; // x0
  __int64 v181; // x1
  BattleData_o *v182; // x0
  int32_t v183; // w23
  Il2CppObject *v184; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x3
  BattleServantData_o *v189; // x25
  BattleBuffData_CheckIndividualitiesData_o *v190; // x24
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x24
  int v192; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v194; // x26
  __int64 v195; // x2
  __int64 v196; // x3
  BattleSkillInfoData_o *v197; // x25
  __int64 v198; // x0
  __int64 v199; // x1
  struct System_Int32_array *v200; // x8
  __int64 v201; // x0
  __int64 v202; // x1
  struct System_Int32_array *v203; // x8
  BattleData_o *v204; // x0
  BattleServantData_o *v205; // x27
  __int64 v206; // x1
  SkillLvEntity_o *v207; // x0
  __int64 v208; // x1
  SkillLvEntity_o *v209; // x28
  BattleData_o *v210; // x0
  _BOOL8 v211; // x0
  __int64 v212; // x1
  BattleLogic_o *v213; // x0
  int32_t v214; // w28
  __int64 v215; // x0
  __int64 v216; // x1
  System_Int32_array *v217; // x26
  bool v218; // w27
  BattleLogicSkill_o *v219; // x28
  System_Int32_array *v220; // x0
  __int64 v221; // x1
  BattleLogicTask_array *v222; // x1
  BattleLogic_o *v223; // x0
  struct BattleData_o *v224; // x8
  BattleActionData_o *v225; // x1
  const MethodInfo *v227; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v228; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v229; // [xsp+18h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+20h] [xbp-D0h]
  char v231; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v232; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v233; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v234; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B18E88 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AiNpcBattleServantData__TypeInfo, task, method);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__,
      v27,
      v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v29,
      v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v31,
      v32);
    sub_1BCA7E0(&int___TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v45, v46);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass33_0__createEndTurnPlayer_b__0__, v51, v52);
    sub_1BCA7E0(&BattleLogicNomal___c__DisplayClass33_0_TypeInfo, v53, v54);
    sub_1BCA7E0(&StringLiteral_8854/*"MOTION_PLAYER_TURN_END"*/, v55, v56);
    byte_4B18E88 = 1;
  }
  entity = 0LL;
  memset(&v234, 0, sizeof(v234));
  v57 = sub_1BCAA2C(BattleLogicNomal___c__DisplayClass33_0_TypeInfo, task, method, v3);
  System_Object___ctor((Il2CppObject *)v57, 0LL);
  if ( !v57 )
    goto LABEL_215;
  *(_QWORD *)(v57 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)this, v60, v61, v62, v63, v64, v65);
  BattleLogicNomal__SetNextTargetId(this, v66);
  actiondata = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v67, v68, v69);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v57 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_215;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_215;
  BattleActionData__setStateField(actiondata, 0LL);
  v71 = StringLiteral_8854/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8854/*"MOTION_PLAYER_TURN_END"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&actiondata->fields.motionname, v71, v72, v73, v74, v75, v76, v77);
  v229 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                   v78,
                                                                   v79,
                                                                   v80);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v229,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v228 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                   v81,
                                                                   v82,
                                                                   v83);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v228,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v232 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v57 + 24) = QuestIndividualities;
  sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 24), (int64_t)QuestIndividualities, v86, v87, v88, v89, v90, v91);
  v95 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v92,
                                                    v93,
                                                    v94);
  System_Collections_Generic_List_int____ctor(
    v95,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v96 = *(_DWORD *)(Instance + 24);
  v97 = Instance;
  if ( v96 >= 1 )
  {
    v231 = 0;
    v98 = 0;
    while ( 1 )
    {
      if ( v98 >= v96 )
        goto LABEL_220;
      v99 = v97 + 8LL * (int)v98;
      v101 = *(_QWORD *)(v99 + 32);
      v100 = (__int64 *)(v99 + 32);
      Instance = v101;
      if ( !v101 )
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
          v102 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v102 = Instance & 1;
        }
        if ( v98 >= *(_DWORD *)(v97 + 24) )
          goto LABEL_220;
        Instance = *v100;
        if ( !*v100 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v57 + 24),
                     this->fields.logic,
                     v102,
                     actiondata,
                     0LL);
        if ( v98 >= *(_DWORD *)(v97 + 24) )
          goto LABEL_220;
        v103 = Instance;
        Instance = *v100;
        if ( !*v100 )
          goto LABEL_215;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v98 >= *(_DWORD *)(v97 + 24) )
            goto LABEL_220;
          Instance = *v100;
          if ( !*v100 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          v104 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v98 >= *(_DWORD *)(v97 + 24) )
              goto LABEL_220;
            Instance = (__int64)v228;
            if ( !*v100 || !v228 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v228,
              *(_DWORD *)(*v100 + 24),
              v104,
              (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v98 >= *(_DWORD *)(v97 + 24) )
          goto LABEL_220;
        if ( !*v100 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v100 + 792);
        if ( !Instance )
          goto LABEL_215;
        v231 |= v103;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v98 >= *(_DWORD *)(v97 + 24) )
        goto LABEL_220;
      Instance = *v100;
      if ( !*v100 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 540) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v57 + 16),
                              *(System_Int32_array **)(v57 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v98 >= *(_DWORD *)(v97 + 24) )
          goto LABEL_220;
        v105 = (Il2CppObject *)Instance;
        Instance = *v100;
        if ( !*v100 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v98 >= *(_DWORD *)(v97 + 24) )
            goto LABEL_220;
          Instance = *v100;
          if ( !*v100 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v105 )
              goto LABEL_215;
            if ( v105[1].monitor )
            {
              if ( v98 >= *(_DWORD *)(v97 + 24) )
                goto LABEL_220;
              Instance = (__int64)v229;
              if ( !*v100 || !v229 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v229,
                *(_DWORD *)(*v100 + 24),
                v105,
                (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v98 >= *(_DWORD *)(v97 + 24) )
          goto LABEL_220;
        if ( !*v100 )
          goto LABEL_215;
        if ( !v95 )
          goto LABEL_215;
        v59 = *(unsigned int *)(*v100 + 24);
        items = v95->fields._items;
        v107 = Method_System_Collections_Generic_List_int__Add__;
        ++v95->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v95->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v95,
            v59,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v95->fields._size = size + 1;
          items->m_Items[size + 1] = v59;
        }
        if ( !v105 )
          goto LABEL_215;
        monitor = (int)v105[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_77:
      v96 = *(_DWORD *)(v97 + 24);
      if ( (int)++v98 >= v96 )
        goto LABEL_80;
    }
    v110 = 0;
    while ( v110 < monitor )
    {
      v111 = &v105->klass + (int)v110;
      v114 = v111[4];
      v113 = (char *)(v111 + 4);
      v112 = v114;
      if ( !v114 || !v70 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v70,
                   &entity,
                   (int32_t)v112->_1.name,
                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v116 = logic->fields.data;
          if ( !v116 )
            goto LABEL_215;
          if ( v110 >= LODWORD(v105[1].monitor) )
            break;
          if ( !*(_QWORD *)v113 )
            goto LABEL_215;
          v117 = *(_DWORD *)(*(_QWORD *)v113 + 28LL);
          if ( v116->fields.endMasterSkillTurnBuffValue <= v117 )
            v116->fields.endMasterSkillTurnBuffValue = v117;
        }
      }
      monitor = (int)v105[1].monitor;
      if ( (int)++v110 >= monitor )
        goto LABEL_77;
    }
LABEL_220:
    sub_1BCAA44(Instance, v59);
  }
  v231 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v118 = this->fields.data;
  if ( !v118 )
    goto LABEL_215;
  v119 = Instance;
  if ( !v118->fields.leaderDown || !v118->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_215;
    v120 = *(_DWORD *)(Instance + 24);
    if ( v120 >= 1 )
    {
      v121 = 0;
      while ( v121 < v120 )
      {
        v122 = v119 + 8LL * (int)v121;
        v124 = *(_QWORD *)(v122 + 32);
        v123 = (__int64 *)(v122 + 32);
        Instance = v124;
        if ( !v124 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 540) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v57 + 16),
                                *(System_Int32_array **)(v57 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v121 >= *(_DWORD *)(v119 + 24) )
            goto LABEL_220;
          v125 = (Il2CppObject *)Instance;
          Instance = *v123;
          if ( !*v123 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v121 >= *(_DWORD *)(v119 + 24) )
              goto LABEL_220;
            Instance = *v123;
            if ( !*v123 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v125 )
                goto LABEL_215;
              if ( v125[1].monitor )
              {
                if ( v121 >= *(_DWORD *)(v119 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v229;
                if ( !*v123 || !v229 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v229,
                  *(_DWORD *)(*v123 + 24),
                  v125,
                  (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v121 >= *(_DWORD *)(v119 + 24) )
            goto LABEL_220;
          if ( !*v123 )
            goto LABEL_215;
          if ( !v95 )
            goto LABEL_215;
          v59 = *(unsigned int *)(*v123 + 24);
          v126 = v95->fields._items;
          v127 = Method_System_Collections_Generic_List_int__Add__;
          ++v95->fields._version;
          if ( !v126 )
            goto LABEL_215;
          v128 = v95->fields._size;
          if ( (unsigned int)v128 >= v126->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v95,
              v59,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
          }
          else
          {
            v95->fields._size = v128 + 1;
            v126->m_Items[v128 + 1] = v59;
          }
        }
        v120 = *(_DWORD *)(v119 + 24);
        if ( (int)++v121 >= v120 )
          goto LABEL_110;
      }
      goto LABEL_220;
    }
LABEL_110:
    v118 = this->fields.data;
    if ( !v118 )
      goto LABEL_215;
  }
  if ( !v95 )
    goto LABEL_215;
  battleEvent = v118->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v95,
                        (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v57 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v130 = this->fields.data;
  if ( !v130 )
    goto LABEL_215;
  perf = v130->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v130->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v134 = this->fields.data;
  if ( !v134 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v134->fields.aiNpcDataList;
  v136 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AiNpcBattleServantData__TypeInfo, v59, v132, v133);
  System_Action_object____ctor(
    v136,
    (Il2CppObject *)v57,
    Method_BattleLogicNomal___c__DisplayClass33_0__createEndTurnPlayer_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v136,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v137 = this->fields.data;
  if ( !v137 )
    goto LABEL_215;
  Instance = (__int64)v137->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v57 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v57 + 24), v138);
  v139 = this->fields.data;
  if ( !v139 )
    goto LABEL_215;
  Instance = (__int64)v228;
  v139->fields.currentTurn = 1;
  if ( !v228 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v233,
    v228,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v234 = v233;
  while ( 1 )
  {
    v140 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                             &v234,
                             (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v140 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v234.fields._current.fields.value;
    if ( !v234.fields._current.fields.value )
      sub_1BCAA3C(v140, v141);
    max_length = (int)v234.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v234.fields._current.fields.key;
      v145 = 0;
      v146 = 1;
LABEL_127:
      if ( v145 >= max_length )
        sub_1BCAA44(v140, v141);
      v147 = value->m_Items[v145];
      if ( !v147 )
        sub_1BCAA3C(v140, v141);
      if ( v147->fields._isRemove )
        goto LABEL_163;
      if ( !v70 )
        sub_1BCAA3C(v140, v141);
      v140 = DataMasterBase_object__object__int___GetEntity(
               v70,
               v147->fields.buffId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v140 )
        goto LABEL_163;
      v150 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v141, v148, v149);
      BattleSkillInfoData___ctor(v150, 0LL);
      if ( !v150 )
        sub_1BCAA3C(v151, v152);
      v150->fields.svtUniqueId = key;
      vals = v147->fields.vals;
      if ( !vals )
        sub_1BCAA3C(v151, v152);
      if ( !vals->max_length )
        sub_1BCAA44(v151, v152);
      v154 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v150->klass->vtable._4_set_skillId.method)(
               v150,
               (unsigned int)vals->m_Items[1],
               v150->klass->vtable._5_get_skillId.methodPtr);
      v156 = v147->fields.vals;
      if ( !v156 )
        sub_1BCAA3C(v154, v155);
      if ( v156->max_length <= 1 )
        sub_1BCAA44(v154, v155);
      v150->fields.skilllv = v156->m_Items[2];
      v157 = this->fields.data;
      if ( !v157 )
        sub_1BCAA3C(0LL, v155);
      ServantData = BattleData__getServantData(v157, v150->fields.svtUniqueId, 0LL);
      v159 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v150->klass->vtable._5_get_skillId.method)(
               v150,
               v150->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v232 )
        sub_1BCAA3C(0LL, v159);
      v160 = SkillLvMaster__GetEntity(v232, v159, v150->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1BCAA3C(v160, v161);
      v162 = v160;
      v163 = this->fields.data;
      if ( !v163 )
        sub_1BCAA3C(0LL, v161);
      v164 = BattleData__checkAliveOther(v163, ServantData->fields.uniqueId, 0LL);
      if ( !v164 )
      {
        if ( !v162 )
          sub_1BCAA3C(v164, v165);
        v166 = this->fields.logic;
        if ( !v166 )
          sub_1BCAA3C(0LL, v165);
        v140 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v166, v162->fields.funcId, 0LL);
        if ( ((unsigned __int8)v140 & 1) == 0 )
          goto LABEL_163;
      }
      v167 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v147, 0LL);
      if ( (v167 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v150->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v150, 0LL);
      }
      else
      {
        v168 = sub_1BCA888(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v168;
        if ( !v168 )
          sub_1BCAA3C(0LL, v169);
        if ( !*(_DWORD *)(v168 + 24) )
          sub_1BCAA44(v168, v169);
        exists = 0;
        *(_DWORD *)(v168 + 32) = v167;
      }
      logicskill = this->fields.logicskill;
      v173 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v173 )
        sub_1BCAA3C(0LL, v174);
      if ( !v173->max_length )
        sub_1BCAA44(v173, v174);
      v173->m_Items[1] = key;
      if ( !logicskill )
        sub_1BCAA3C(v173, v174);
      v175 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v150,
                                                   v173,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v227);
      v177 = (BattleLogicTask_array *)v175;
      if ( (v146 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v175, 0LL);
        if ( IsNullOrEmpty )
        {
          v146 = 1;
          goto LABEL_161;
        }
        if ( !v177 )
          sub_1BCAA3C(IsNullOrEmpty, v176);
        if ( !v177->max_length )
          sub_1BCAA44(IsNullOrEmpty, v176);
        v179 = v177->m_Items[0];
        if ( !v179 )
          sub_1BCAA3C(0LL, v176);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v179, ServantData, value, 0LL);
      }
      v146 = 0;
LABEL_161:
      v180 = this->fields.logic;
      if ( !v180 )
        sub_1BCAA3C(0LL, v176);
      BattleLogic__addBattleLogicTask(v180, v177, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v145 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v234,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v229;
  if ( !v229 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v233,
    v229,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v234 = v233;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v234,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v182 = this->fields.data;
    if ( !v182 )
      sub_1BCAA3C(0LL, v181);
    v183 = (int32_t)v234.fields._current.fields.key;
    v184 = v234.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v182, (int32_t)v234.fields._current.fields.key, 0LL);
    v189 = isEndAct;
    if ( isEndAct )
    {
      v190 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v186,
                                                            v187,
                                                            v188);
      BattleBuffData_CheckIndividualitiesData___ctor_43379556(v190, v189, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v190 )
        sub_1BCAA3C(isEndAct, v186);
      selfConcatSvtIndividualities_k__BackingField = v190->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v184 )
LABEL_250:
        sub_1BCAA3C(isEndAct, v186);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0LL;
      if ( !v184 )
        goto LABEL_250;
    }
    v192 = (int)v184[1].monitor;
    if ( v192 >= 1 )
    {
      for ( i = 0; i < v192; ++i )
      {
        if ( i >= (unsigned int)v192 )
          sub_1BCAA44(isEndAct, v186);
        v194 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v184[2].klass + i);
        if ( !v194 )
          sub_1BCAA3C(isEndAct, v186);
        if ( !v194->fields._isRemove )
        {
          if ( !v70 )
            sub_1BCAA3C(isEndAct, v186);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v70,
                                              v194->fields.buffId,
                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v194, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v197 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v186, v195, v196);
                BattleSkillInfoData___ctor(v197, 0LL);
                if ( !v197 )
                  sub_1BCAA3C(v198, v199);
                v197->fields.svtUniqueId = v183;
                v200 = v194->fields.vals;
                if ( !v200 )
                  sub_1BCAA3C(v198, v199);
                if ( !v200->max_length )
                  sub_1BCAA44(v198, v199);
                v201 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v197->klass->vtable._4_set_skillId.method)(
                         v197,
                         (unsigned int)v200->m_Items[1],
                         v197->klass->vtable._5_get_skillId.methodPtr);
                v203 = v194->fields.vals;
                if ( !v203 )
                  sub_1BCAA3C(v201, v202);
                if ( v203->max_length <= 1 )
                  sub_1BCAA44(v201, v202);
                v197->fields.skilllv = v203->m_Items[2];
                v204 = this->fields.data;
                if ( !v204 )
                  sub_1BCAA3C(0LL, v202);
                v205 = BattleData__getServantData(v204, v197->fields.svtUniqueId, 0LL);
                v206 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v197->klass->vtable._5_get_skillId.method)(
                         v197,
                         v197->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v232 )
                  sub_1BCAA3C(0LL, v206);
                v207 = SkillLvMaster__GetEntity(v232, v206, v197->fields.skilllv, 0LL);
                if ( !v205 )
                  sub_1BCAA3C(v207, v208);
                v209 = v207;
                v210 = this->fields.data;
                if ( !v210 )
                  sub_1BCAA3C(0LL, v208);
                v211 = BattleData__checkAliveOther(v210, v205->fields.uniqueId, 0LL);
                if ( v211 )
                  goto LABEL_198;
                if ( !v209 )
                  sub_1BCAA3C(v211, v212);
                v213 = this->fields.logic;
                if ( !v213 )
                  sub_1BCAA3C(0LL, v212);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v213, v209->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v214 = BattleServantData__GetRevengeIdCheckOpponentOnly(v205, v194, 0LL);
                  if ( (v214 & 0x80000000) != 0 )
                  {
                    v217 = Target__getTargetIds(this->fields.data, v197->fields.svtUniqueId, -1, v183, 13, 0LL, 0LL);
                    v218 = BattleSkillInfoData__ExistsNoTargetNoActionType(v197, 0LL);
                  }
                  else
                  {
                    v215 = sub_1BCA888(int___TypeInfo, 1LL);
                    v217 = (System_Int32_array *)v215;
                    if ( !v215 )
                      sub_1BCAA3C(0LL, v216);
                    if ( !*(_DWORD *)(v215 + 24) )
                      sub_1BCAA44(v215, v216);
                    v218 = 0;
                    *(_DWORD *)(v215 + 32) = v214;
                  }
                  v219 = this->fields.logicskill;
                  v220 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
                  if ( !v220 )
                    sub_1BCAA3C(0LL, v221);
                  if ( !v220->max_length )
                    sub_1BCAA44(v220, v221);
                  v220->m_Items[1] = v183;
                  if ( !v219 )
                    sub_1BCAA3C(v220, v221);
                  v222 = BattleLogicSkill__taskSkill(v219, v197, v220, v217, 1, v218, 0, 0, 0, v227);
                  v223 = this->fields.logic;
                  if ( !v223 )
                    sub_1BCAA3C(0LL, v222);
                  BattleLogic__addBattleLogicTask(v223, v222, 0LL);
                }
              }
            }
          }
        }
        v192 = (int)v184[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v234,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v224 = this->fields.data;
  if ( !v224
    || (Instance = (__int64)v224->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1BCAA3C(Instance, v59);
  }
  if ( (v231 & 1) != 0 )
    v225 = actiondata;
  else
    v225 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v225, actiondata, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_o *motionName; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_String_o *motionMessage; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UnityEngine_GameObject_o *targetObject; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B18E85 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    byte_4B18E85 = 1;
  }
  v5 = sub_1BCAA2C(BattleActionData_TypeInfo, task, method, v3);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 || (BattleActionData__setStateMotion((BattleActionData_o *)v5, 0LL), !task) )
    sub_1BCAA3C(v6, v7);
  *(_BYTE *)(v5 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v5 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v5 + 64) = motionName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)motionName, v9, v10, v11, v12, v13, v14);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v5 + 128) = motionMessage;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 128), (int64_t)motionMessage, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v5 + 136) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v5 + 72) = targetObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 72), (int64_t)targetObject, v23, v24, v25, v26, v27, v28);
  return (BattleActionData_o *)v5;
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
    sub_1BCAA3C(this, task);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattleData_o *data; // x21
  BattleServantData_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  BattleActionData_ShiftServant_o *v25; // x22

  v4 = this;
  if ( (byte_4B18E8F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    sub_1BCA7E0(&BattleActionData_ShiftServant_TypeInfo, v5, v6);
    this = (BattleLogicNomal_o *)sub_1BCA7E0(&StringLiteral_8858/*"MOTION_SHIFT"*/, v7, v8);
    byte_4B18E8F = 1;
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
  v10 = (BattleServantData_o *)this;
  v14 = 0LL;
  if ( BattleServantData__isShiftReady((BattleServantData_o *)this, 0LL) )
  {
    v14 = sub_1BCAA2C(BattleActionData_TypeInfo, v11, v12, v13);
    BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 32) = v10->fields.uniqueId;
      v21 = StringLiteral_8858/*"MOTION_SHIFT"*/;
      *(_QWORD *)(v14 + 64) = StringLiteral_8858/*"MOTION_SHIFT"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 64), v21, v15, v16, v17, v18, v19, v20);
      v25 = (BattleActionData_ShiftServant_o *)sub_1BCAA2C(BattleActionData_ShiftServant_TypeInfo, v22, v23, v24);
      BattleActionData_ShiftServant___ctor(v25, 0, 0LL);
      if ( v25 )
      {
        BattleActionData_ShiftServant__setBeforeSvtData(v25, v10, 0LL);
        BattleServantData__setShiftServant(v10, v4->fields.data, 1, 0LL);
        BattleServantData__SetIsBattleShift(v10, 1, 0LL);
        BattleActionData_ShiftServant__setCheckSvtData(v25, v10, 0LL);
        BattleActionData__setShiftServant((BattleActionData_o *)v14, v25, 0LL);
        this = (BattleLogicNomal_o *)v4->fields.logic;
        if ( this )
        {
          BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, v10->fields.uniqueId, 1, 0, 0LL);
          return (BattleActionData_o *)v14;
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(this, task);
  }
  return (BattleActionData_o *)v14;
}


BattleActionData_o *__fastcall BattleLogicNomal__createStartEnemyTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  BattleActionData_o *StartTurn; // x0
  const MethodInfo *v8; // x1
  struct BattleData_o *data; // x8
  BattleActionData_o *v10; // x20
  struct BattleData_o *v11; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x21
  struct BattleData_o *v14; // x8
  struct BattlePerformance_o *v15; // x8

  if ( (byte_4B18E86 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, task, method);
    sub_1BCA7E0(&StringLiteral_11205/*"RESET_CAMERA_BAT"*/, v5, v6);
    byte_4B18E86 = 1;
  }
  StartTurn = BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0LL;
  StartTurn = BattleLogicNomal__DeadChangePos(this, v8);
  v10 = StartTurn;
  if ( StartTurn )
  {
    v11 = this->fields.data;
    if ( !v11 )
      goto LABEL_18;
    perf = v11->fields.perf;
    if ( !perf )
      goto LABEL_18;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    StartTurn = (BattleActionData_o *)UnityEngine_Object__op_Inequality(actioncamera, 0LL, 0LL);
    if ( ((unsigned __int8)StartTurn & 1) != 0 )
    {
      v14 = this->fields.data;
      if ( v14 )
      {
        v15 = v14->fields.perf;
        if ( v15 )
        {
          StartTurn = (BattleActionData_o *)v15->fields.actioncamera;
          if ( StartTurn )
          {
            BattleActionCamera__sendMainEvent(
              (BattleActionCamera_o *)StartTurn,
              (System_String_o *)StringLiteral_11205/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v10;
          }
        }
      }
LABEL_18:
      sub_1BCAA3C(StartTurn, v8);
    }
  }
  return v10;
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
        sub_1BCAA44(data, task);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 540) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1BCAA3C(data, task);
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
    sub_1BCAA3C(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1BCAA44(this, svtList);
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
    sub_1BCAA44(data, *(_QWORD *)&uniqueId);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1BCAA3C(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  return data->fields.battleEvent;
}


void __fastcall BattleLogicNomal__setReactionFunction(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleLogic_reactionFunction_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B18E79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleLogicNomal_shiftServantTaskReaction__, list, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6,
      v7);
    sub_1BCA7E0(&BattleLogic_reactionFunction_TypeInfo, v8, v9);
    byte_4B18E79 = 1;
  }
  v10 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, list, method, v3);
  BattleLogic_reactionFunction___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicNomal_shiftServantTaskReaction__,
    0LL);
  if ( !list )
    sub_1BCAA3C(v11, v12);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v10,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x20
  BattleData_o *ShiftableUniqueId; // x0
  const MethodInfo *v28; // x1
  int32_t ActorId; // w0
  const MethodInfo *v30; // x2
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x19
  BattleServantData_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  BattleLogicTask_o *v38; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  const MethodInfo *v49; // x2
  __int64 v51; // x22
  const MethodInfo *v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  int64_t v56; // x23
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Func_object__bool__o *v60; // x24
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  const MethodInfo *v73; // x2
  struct BattleLogic_o *logic; // x8
  struct BattleLogicReaction_o *logicReaction; // x8
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  BattleLogicTask_o *v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  Il2CppClass **v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  struct BattleLogic_o *v93; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v95; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0

  if ( (byte_4B18E90 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, task, method);
    sub_1BCA7E0(&BeforeShiftServantReactTaskCreator_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18, v19);
    sub_1BCA7E0(&ReactTaskTargetFilter_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__DisplayClass46_0__shiftServantTaskReaction_b__0__, v22, v23);
    sub_1BCA7E0(&BattleLogicNomal___c__DisplayClass46_0_TypeInfo, v24, v25);
    byte_4B18E90 = 1;
  }
  v26 = sub_1BCAA2C(BattleLogicNomal___c__DisplayClass46_0_TypeInfo, task, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !task )
    goto LABEL_37;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  ShiftableUniqueId = (BattleData_o *)BattleLogicNomal__getShiftableUniqueId(this, ActorId, v30);
  if ( !v26 )
    goto LABEL_37;
  *(_DWORD *)(v26 + 16) = (_DWORD)ShiftableUniqueId;
  if ( !(_DWORD)ShiftableUniqueId )
    return this->fields.zeroTask;
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v28,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  ShiftableUniqueId = this->fields.data;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)BattleData__getServantData(ShiftableUniqueId, *(_DWORD *)(v26 + 16), 0LL);
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  v34 = (BattleServantData_o *)ShiftableUniqueId;
  ShiftableUniqueId = (BattleData_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                        (BattleServantData_o *)ShiftableUniqueId,
                                        0LL);
  if ( !v34->fields.buffData )
    goto LABEL_37;
  if ( !BattleBuffData__IsShiftGuts(
          v34->fields.buffData,
          v34,
          (BattleBuffData_CheckIndividualitiesData_array *)ShiftableUniqueId,
          0LL) )
  {
    v51 = sub_1BCAA2C(BeforeShiftServantReactTaskCreator_TypeInfo, v35, v36, v37);
    ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)v51, 24, v52);
    if ( v51 )
    {
      ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v51, v28);
      v56 = sub_1BCAA2C(ReactTaskTargetFilter_TypeInfo, v53, v54, v55);
      System_Object___ctor((Il2CppObject *)v56, 0LL);
      v60 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v57, v58, v59);
      System_Func_object__bool____ctor(
        v60,
        (Il2CppObject *)v26,
        Method_BattleLogicNomal___c__DisplayClass46_0__shiftServantTaskReaction_b__0__,
        0LL);
      if ( v56 )
      {
        *(_QWORD *)(v56 + 16) = v60;
        sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 16), (int64_t)v60, v61, v62, v63, v64, v65, v66);
        *(_QWORD *)(v51 + 24) = v56;
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 24), v56, v67, v68, v69, v70, v71, v72);
        logic = this->fields.logic;
        if ( logic )
        {
          logicReaction = logic->fields.logicReaction;
          if ( logicReaction )
          {
            ShiftableUniqueId = (BattleData_o *)ServantReactTaskCreator__CreateTasks(
                                                  (ServantReactTaskCreator_o *)v51,
                                                  logicReaction->fields.logic,
                                                  v73);
            if ( v33 )
            {
              System_Collections_Generic_List_object___AddRange(
                v33,
                (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
                (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              v79 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v76, v77, v78);
              BattleLogicTask___ctor(v79, 0LL);
              if ( v79 )
              {
                v79->fields.actiontype = 37;
                BattleLogicTask__setActor(v79, 3, *(_DWORD *)(v26 + 16), 0LL);
                items = v33->fields._items;
                v87 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v33->fields._version;
                if ( items )
                {
                  size = v33->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v33,
                      (Il2CppObject *)v79,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v89 = &items->obj.klass + size;
                    v33->fields._size = size + 1;
                    v89[4] = (Il2CppClass *)v79;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)v79, v80, v81, v82, v83, v84, v85);
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
    sub_1BCAA3C(ShiftableUniqueId, v28);
  }
  v38 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v35, v36, v37);
  BattleLogicTask___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_37;
  v38->fields.actiontype = 62;
  BattleLogicTask__setActor(v38, 3, *(_DWORD *)(v26 + 16), 0LL);
  if ( !v33 )
    goto LABEL_37;
  v45 = v33->fields._items;
  v46 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v33->fields._version;
  if ( !v45 )
    goto LABEL_37;
  v47 = v33->fields._size;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v38,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v33->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v38;
    sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v38, v39, v40, v41, v42, v43, v44);
  }
  v93 = this->fields.logic;
  if ( !v93 )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)v93->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                              *(_DWORD *)(v26 + 16),
                                                              v49);
  if ( TaskGuts )
    System_Collections_Generic_List_object___AddRange(
      v33,
      TaskGuts,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_31:
  v95 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v90, v91, v92);
  BattleLogicTask___ctor(v95, 0LL);
  if ( !v95 )
    goto LABEL_37;
  v95->fields.actiontype = 36;
  BattleLogicTask__setActor(v95, 3, *(_DWORD *)(v26 + 16), 0LL);
  v102 = v33->fields._items;
  v103 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v33->fields._version;
  if ( !v102 )
    goto LABEL_37;
  v104 = v33->fields._size;
  if ( (unsigned int)v104 >= v102->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v95,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v105 = &v102->obj.klass + v104;
    v33->fields._size = v104 + 1;
    v105[4] = (Il2CppClass *)v95;
    sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 4), (int64_t)v95, v96, v97, v98, v99, v100, v101);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskAddCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x19
  BattleData_o *battleEvent; // x0
  __int64 v18; // x1
  struct BattleData_o *v19; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v21; // x0
  BattleCommandData_o *v22; // x22
  BattleServantData_o *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  BattleLogicTask_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B18E7B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15);
    byte_4B18E7B = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_26;
  battleEvent = (BattleData_o *)v19->fields.battleEvent;
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
  v21 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v18);
    v21 = BattleDataDefine_TypeInfo;
  }
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v21->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v22 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v22->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v23 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v23->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v23, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v16 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v16,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1BCAA3C(battleEvent, v18);
  }
  v26 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v18, v24, v25);
  BattleLogicTask___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_26;
  BattleLogicTask__setActor(v26, 2, v22->fields.uniqueId, 0LL);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v26, 0LL);
  BattleLogicTask__setAddAttackCommand(v26, data->fields.combodata, v22, 0LL);
  v26->fields.isCanCounterTask = 1;
  if ( !v16 )
    goto LABEL_26;
  items = v16->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BattleLogicTask_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B18E8C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11, v12);
    byte_4B18E8C = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v18 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v15, v16, v17);
    BattleLogicTask___ctor(v18, 0LL);
    if ( !v18 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddEnemy(v18, 0LL);
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v13 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v13,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1BCAA3C(v14, v15);
    }
    v18 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v15, v16, v17);
    BattleLogicTask___ctor(v18, 0LL);
    if ( !v18 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v18, 0LL);
  }
  if ( !v13 )
    goto LABEL_14;
  items = v13->fields._items;
  v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v18,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 v14; // x1
  BattleLogic_o *logic; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  BattleLogicTask_o *v19; // x20
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

  if ( (byte_4B18E7E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11, v12);
    byte_4B18E7E = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v19 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v16, v17, v18),
        BattleLogicTask___ctor(v19, 0LL),
        !v19)
    || (BattleLogicTask__setSystem(v19, 0LL), !v13)
    || (items = v13->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1BCAA3C(logic, v14);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v19,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1BCAA3C(this, *(_QWORD *)&ltype);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x19
  BattleCommandData_o *battleEvent; // x0
  __int64 v17; // x1
  struct BattleData_o *v18; // x8
  int32_t v19; // w23
  BattleCommandData_o *v20; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v22; // x2
  __int64 v23; // x2
  __int64 v24; // x3
  BattleLogicTask_o *v25; // x22
  int32_t TreasureDvcId; // w0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0

  if ( (byte_4B18E7A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13, v14);
    byte_4B18E7A = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)v18->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_18;
  if ( ltype == 3 )
    v19 = 2;
  else
    v19 = ltype == 2;
  this->fields.commandIndex = v19;
  if ( !data )
    goto LABEL_37;
  battleEvent = BattleData__getSelectCommand(data, v19, 0LL);
  if ( !battleEvent )
    goto LABEL_37;
  v20 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_18;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_37;
  ServantData = BattleData__getServantData((BattleData_o *)battleEvent, v20->fields.uniqueId, 0LL);
  battleEvent = (BattleCommandData_o *)BattleLogicNomal__IsEnableToAttack(ServantData, v20, v22);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
  {
LABEL_18:
    if ( v15 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v15,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v25 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v17, v23, v24);
  BattleLogicTask___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_37;
  BattleLogicTask__setActionCommand(v25, data->fields.combodata, v20, v19, 0LL);
  if ( BattleData__isTutorial(data, 0LL) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
      BattleCommandData__checkCriticalRate(v20, 0, 0LL);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v20, 0LL);
  }
  BattleLogicTask__setActor(v25, 2, v20->fields.uniqueId, 0LL);
  v25->fields.isCanCounterTask = 1;
  if ( v20->fields.treasureDvc < 1 )
  {
    BattleData__setTDChain(data, 0, 0LL);
    battleEvent = (BattleCommandData_o *)this->fields.logictarget;
    if ( battleEvent )
    {
      battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                             (BattleLogicTarget_o *)battleEvent,
                                             v25,
                                             0LL);
      if ( v15 )
      {
        items = v15->fields._items;
        v45 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( items )
        {
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)v25,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v25;
            sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v25, v38, v39, v40, v41, v42, v43);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v15,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1BCAA3C(battleEvent, v17);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_37;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
  if ( !ServantData )
    goto LABEL_37;
  BattleLogicTask__setActor(v25, 2, ServantData->fields.uniqueId, 0LL);
  BattleLogicTask__setActionCommand(v25, data->fields.combodata, v20, v19, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL, 0LL);
  BattleLogicTask__setActionTreasureDvc(v25, TreasureDvcId, 1, 0LL);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         v25,
                                         0LL);
  if ( !v15 )
    goto LABEL_37;
  v34 = v15->fields._items;
  v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v15->fields._version;
  if ( !v34 )
    goto LABEL_37;
  v36 = v15->fields._size;
  if ( (unsigned int)v36 >= v34->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v25,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj.klass + v36;
    v15->fields._size = v36 + 1;
    v37[4] = (Il2CppClass *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_object__o *v46; // x23
  __int64 Instance; // x0
  __int64 wasAttackTargetId; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v50; // x8
  __int64 v51; // x22
  __int64 v52; // x8
  unsigned __int64 v53; // x26
  int v54; // w9
  BattleServantData_o *v55; // x27
  BattleServantData_o *v56; // x20
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_IEnumerable_T__o *v59; // x29
  __int64 v60; // x2
  __int64 v61; // x3
  void *monitor; // x8
  bool v63; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x25
  __int64 v65; // x28
  BattleBuffData_BuffData_o *v66; // x21
  BattleLogicTask_o *v67; // x20
  int32_t counterLv; // w2
  __int64 v69; // x25
  __int64 v70; // x24
  int32_t uniqueId; // w8
  __int64 v72; // x9
  System_Int32_array *v73; // x25
  System_String_o *CounterMessage; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  __int64 v85; // x9
  BattleLogicNomal___c_c *v86; // x0
  System_Action_object__o *_9__16_0; // x20
  Il2CppObject *v88; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct BattleLogic_o *logic; // x8
  _BOOL4 v98; // [xsp+4h] [xbp-9Ch]
  BattleLogicNomal_o *v99; // [xsp+8h] [xbp-98h]
  SkillLvMaster_o *v100; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v101; // [xsp+18h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v102; // [xsp+20h] [xbp-80h]
  char v104; // [xsp+38h] [xbp-68h]
  int32_t type; // [xsp+3Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4B18E7C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, data, isEnemy);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10, v11);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v12, v13);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76768176, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v26, v27);
    sub_1BCA7E0(&int___TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__taskCounterFunc_b__16_0__, v42, v43);
    sub_1BCA7E0(&BattleLogicNomal___c_TypeInfo, v44, v45);
    byte_4B18E7C = 1;
  }
  v46 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       data,
                                                       isEnemy,
                                                       isSkillCounter);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
  v102 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !data )
    goto LABEL_76;
  v50 = 296LL;
  if ( isEnemy )
    v50 = 304LL;
  v51 = *(__int64 *)((char *)&data->klass + v50);
  if ( !v51 )
    goto LABEL_76;
  v52 = *(_QWORD *)(v51 + 24);
  if ( (int)v52 >= 1 )
  {
    v53 = 0LL;
    if ( isEnemy )
      v54 = 3;
    else
      v54 = 2;
    type = v54;
    do
    {
      if ( v53 >= (unsigned int)v52 )
LABEL_77:
        sub_1BCAA44(Instance, wasAttackTargetId);
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v51 + 4 * v53 + 32), 0LL);
      if ( Instance )
      {
        v55 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v55, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v55->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v56 = (BattleServantData_o *)Instance;
                if ( v55->fields.isEnemy != *(unsigned __int8 *)(Instance + 479) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v56, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v55->fields.buffData;
                    if ( !Instance )
                      goto LABEL_76;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v55,
                                          v56,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_76;
                    v59 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v99 = this;
                      v100 = (SkillLvMaster_o *)MasterData_object;
                      v98 = v6;
                      v101 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                                          System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                          wasAttackTargetId,
                                                                          v57,
                                                                          v58);
                      System_Collections_Generic_HashSet_object____ctor_54898872(
                        v101,
                        v59,
                        (const MethodInfo_345B0B8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76768176);
                      monitor = v59[1].monitor;
                      v63 = isSkillCounter;
                      v64 = v102;
                      if ( (int)monitor >= 1 )
                      {
                        v65 = 4LL;
                        v104 = 1;
                        do
                        {
                          if ( v65 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_77;
                          v66 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v59->klass + v65);
                          if ( !v63 )
                            goto LABEL_80;
                          if ( !v66 )
                            goto LABEL_76;
                          if ( v66->fields.isSkillReaction )
                          {
LABEL_80:
                            v67 = (BattleLogicTask_o *)sub_1BCAA2C(
                                                         BattleLogicTask_TypeInfo,
                                                         wasAttackTargetId,
                                                         v60,
                                                         v61);
                            BattleLogicTask___ctor(v67, 0LL);
                            if ( !v67 )
                              goto LABEL_76;
                            BattleLogicTask__setActor(v67, type, v55->fields.uniqueId, 0LL);
                            BattleLogicTask__setTarget(v67, v55->fields.wasAttackTargetId, 0LL);
                            Instance = (__int64)v55->fields.buffData;
                            if ( !Instance )
                              goto LABEL_76;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v66, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v55->fields.overkillTargetId = -1;
                              if ( !v66 )
                                goto LABEL_76;
                              wasAttackTargetId = (unsigned int)v66->fields.counterId;
                              counterLv = v66->fields.counterLv;
                              if ( v66->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v67,
                                  wasAttackTargetId,
                                  counterLv,
                                  v66->fields.counterOc,
                                  1,
                                  0LL);
                                if ( !v64 )
                                  goto LABEL_76;
                              }
                              else
                              {
                                Instance = (__int64)v100;
                                if ( !v100 )
                                  goto LABEL_76;
                                Instance = (__int64)SkillLvMaster__GetEntity(v100, wasAttackTargetId, counterLv, 0LL);
                                if ( !Instance )
                                {
                                  v63 = isSkillCounter;
                                  v64 = v102;
                                  goto LABEL_58;
                                }
                                v69 = Instance;
                                v70 = sub_1BCAA2C(BattleSkillInfoData_TypeInfo, wasAttackTargetId, v60, v61);
                                BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v70, 0LL);
                                if ( !v70 )
                                  goto LABEL_76;
                                uniqueId = v55->fields.uniqueId;
                                v72 = *(_QWORD *)v70;
                                *(_QWORD *)(v70 + 16) = 20LL;
                                *(_DWORD *)(v70 + 24) = uniqueId;
                                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v72 + 376))(
                                  v70,
                                  *(unsigned int *)(v69 + 16),
                                  *(_QWORD *)(v72 + 384));
                                *(_DWORD *)(v70 + 36) = *(_DWORD *)(v69 + 20);
                                Instance = sub_1BCA888(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                v73 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v55->fields.wasAttackTargetId;
                                Instance = sub_1BCA888(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v55->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  v67,
                                  (BattleSkillInfoData_o *)v70,
                                  v73,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  0LL);
                                v63 = isSkillCounter;
                                v64 = v102;
                                if ( !v102 )
                                  goto LABEL_76;
                              }
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v64,
                                                    v66->fields.buffId,
                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_76;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0LL);
                              BattleLogicTask__setMessage(v67, CounterMessage, 2, 0LL);
                              v67->fields.isCounter = 1;
                              if ( (v104 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v67,
                                  v55,
                                  (BattleBuffData_BuffData_array *)v59,
                                  0LL);
                              if ( !v46 )
                                goto LABEL_76;
                              items = v46->fields._items;
                              v82 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v46->fields._version;
                              if ( !items )
                                goto LABEL_76;
                              size = v46->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v46,
                                  (Il2CppObject *)v67,
                                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v84 = &items->obj.klass + size;
                                v46->fields._size = size + 1;
                                v84[4] = (Il2CppClass *)v67;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)(v84 + 4),
                                  (int64_t)v67,
                                  v75,
                                  v76,
                                  v77,
                                  v78,
                                  v79,
                                  v80);
                              }
                              Instance = (__int64)v101;
                              if ( !v101 )
                                goto LABEL_76;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v101,
                                           (Il2CppObject *)v66,
                                           (const MethodInfo_345B888 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v104 = 0;
                            }
                          }
LABEL_58:
                          LODWORD(monitor) = v59[1].monitor;
                          v85 = v65 - 3;
                          ++v65;
                        }
                        while ( v85 < (int)monitor );
                      }
                      v86 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, wasAttackTargetId);
                        v86 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v99;
                      MasterData_object = (Il2CppObject *)v100;
                      v6 = v98;
                      _9__16_0 = (System_Action_object__o *)v86->static_fields->__9__16_0;
                      if ( !_9__16_0 )
                      {
                        if ( !v86->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v86, wasAttackTargetId);
                          v86 = BattleLogicNomal___c_TypeInfo;
                        }
                        v88 = (Il2CppObject *)v86->static_fields->__9;
                        _9__16_0 = (System_Action_object__o *)sub_1BCAA2C(
                                                                System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                wasAttackTargetId,
                                                                v60,
                                                                v61);
                        System_Action_object____ctor(
                          _9__16_0,
                          v88,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__16_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__16_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__16_0;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
                          (int64_t)_9__16_0,
                          v90,
                          v91,
                          v92,
                          v93,
                          v94,
                          v95);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v101,
                        (System_Action_T__o *)_9__16_0,
                        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(v52) = *(_DWORD *)(v51 + 24);
    }
    while ( (__int64)++v53 < (int)v52 );
  }
  if ( !v46 )
    goto LABEL_76;
  if ( v46->fields._size < 1 )
    goto LABEL_74;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_76:
    sub_1BCAA3C(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_74:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_76;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v46,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v46,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  int64_t v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // w1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B18E83 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, svtData, motionName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15);
    byte_4B18E83 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       svtData,
                                                       motionName,
                                                       Tr);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v20 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v17, v18, v19);
  BattleLogicTask___ctor((BattleLogicTask_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v20, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v20 + 112) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 112), (int64_t)gameObject, v24, v25, v26, v27, v28, v29);
  if ( !svtData )
    goto LABEL_15;
  v30 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v20, v30, svtData->fields.uniqueId, 0LL);
  if ( !v16
    || (items = v16->fields._items,
        v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v16->fields._version,
        !items) )
  {
LABEL_15:
    sub_1BCAA3C(v21, v22);
  }
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v20,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v20;
    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), v20, v31, v32, v33, v34, v35, v36);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskPlaySubEntryMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        UnityEngine_Transform_o *Tr,
        bool isTactical,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x25
  __int64 v32; // x26
  System_Collections_Generic_List_object__o *v33; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  int64_t v37; // x21
  BattleEntity_o *battle_ent; // x0
  __int64 v39; // x1
  System_String_o *v40; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  __int64 v50; // x1
  bool v51; // w23
  System_String_o *v52; // x0
  BattleData_o *v53; // x8
  System_String_o *v54; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v56; // x2
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  int32_t uniqueId; // w2
  System_String_o *v60; // x20
  BattleLogicTask_o *v61; // x0
  System_String_o *v62; // x1
  struct BattleData_o *v63; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v65; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v67; // x2
  Il2CppObject *v68; // x0
  System_String_o *v69; // x22
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  int v81; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B18E84 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, svtData, Tr);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3016/*"BATTLE_SUBENTRY_PLAYER"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8850/*"MOTION_ENTRY"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3014/*"BATTLE_SUBENTRY_ENEMY"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3015/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8851/*"MOTION_ENTRY_TAC"*/, v29, v30);
    byte_4B18E84 = 1;
  }
  v31 = StringLiteral_8851/*"MOTION_ENTRY_TAC"*/;
  v32 = StringLiteral_8850/*"MOTION_ENTRY"*/;
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       svtData,
                                                       Tr,
                                                       isTactical);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v37 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v34, v35, v36);
  BattleLogicTask___ctor((BattleLogicTask_o *)v37, 0LL);
  if ( !v37 )
    goto LABEL_30;
  v40 = (System_String_o *)(isTactical ? v31 : v32);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v37, v40, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v37 + 112) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 112), (int64_t)gameObject, v42, v43, v44, v45, v46, v47);
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
          v51 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3015/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
LABEL_23:
              v69 = v52;
              BattleLogicTask__setActor((BattleLogicTask_o *)v37, 3, svtData->fields.uniqueId, 0LL);
              v61 = (BattleLogicTask_o *)v37;
              v62 = v69;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
            if ( v51 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
          v63 = this->fields.data;
          if ( !v63 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v63->fields._EnemyCountStartValue_k__BackingField;
          v65 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v63, 0LL);
          v81 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v67)
              + EnemyCountStartValue_k__BackingField;
          v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
          v52 = System_String__Format(v65, v68, 0LL);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(battle_ent, v39);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3016/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v53 = this->fields.data;
  if ( !v53 )
    goto LABEL_30;
  v54 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v53, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v56);
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v58 = System_String__Format(v54, v57, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v60 = v58;
  BattleLogicTask__setActor((BattleLogicTask_o *)v37, 2, uniqueId, 0LL);
  v61 = (BattleLogicTask_o *)v37;
  v62 = v60;
LABEL_24:
  BattleLogicTask__setMessage(v61, v62, 1, 0LL);
  if ( !v33 )
    goto LABEL_30;
  items = v33->fields._items;
  v77 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v33->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v33->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v37,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v79[4] = (Il2CppClass *)v37;
    sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), v37, v70, v71, v72, v73, v74, v75);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18___ctor(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__MoveNext(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  struct BattleData_o *data; // x8
  int64_t selectcommandlist; // x1
  _BOOL8 IsEnableToAttack; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v35; // x8
  int v36; // w9
  int32_t _7__wrap5; // w8
  int v38; // w9
  bool result; // w0
  PartyOrganizationUtility_o *p__7__wrap1; // x8
  struct BattleCommandData_array *v41; // x10
  struct BattleCommandData_array *_7__wrap1; // t1
  int max_length; // w11
  BattleCommandData_o *v44; // x19
  BattleData_o *v45; // x0
  BattleServantData_o *ServantData; // x20
  const MethodInfo *v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v51; // x20
  BattleLogicNomal___c_c *v52; // x0
  System_Func_object__int__o *_9__18_0; // x21
  Il2CppObject *v54; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v62; // x0
  __int64 v63; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v64; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v66; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x0
  __int64 v77; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v78; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v79; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  BattleSkillInfoData_o *v86; // x19
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v88; // x0
  __int64 v89; // x1
  BattleLogicTask_array *v90; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct BattleLogicTask_array *_7__wrap4; // x10
  il2cpp_array_size_t v98; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  const MethodInfo *v104; // x1
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x1
  const MethodInfo *v112; // [xsp+8h] [xbp-58h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v113; // [xsp+28h] [xbp-38h]

  v113 = this;
  v8 = this;
  if ( (byte_4B18E9B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___, method, v2);
    sub_1BCA7E0(&System_Func_BattleSkillInfoData__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&int___TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__18_0__, v19, v20);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *)sub_1BCA7E0(
                                                                            &BattleLogicNomal___c_TypeInfo,
                                                                            v21,
                                                                            v22);
    byte_4B18E9B = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    v8->fields.__1__state = -3;
    v38 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_57;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  data = _4__this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  selectcommandlist = (int64_t)data->fields.selectcommandlist;
  v8->fields.__7__wrap1 = (struct BattleCommandData_array *)selectcommandlist;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, selectcommandlist, v2, v3, v4, v5, v6, v7);
  v35 = v113;
  v36 = 0;
  for ( v113->fields.__7__wrap2 = 0; ; v113->fields.__7__wrap2 = v36 )
  {
    _7__wrap1 = v35->fields.__7__wrap1;
    p__7__wrap1 = (PartyOrganizationUtility_o *)&v35->fields.__7__wrap1;
    v41 = _7__wrap1;
    if ( !_7__wrap1 )
      sub_1BCAA3C(IsEnableToAttack, v28);
    max_length = v41->max_length;
    if ( v36 >= max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1BCA784(p__7__wrap1, 0LL, v29, v30, v31, v32, v33, v34);
      return 0;
    }
    if ( v36 >= (unsigned int)max_length )
      sub_1BCAA44(IsEnableToAttack, v28);
    if ( !_4__this )
      sub_1BCAA3C(IsEnableToAttack, v28);
    v44 = v41->m_Items[v36];
    if ( !v44 )
      sub_1BCAA3C(IsEnableToAttack, v28);
    v45 = _4__this->fields.data;
    if ( !v45 )
      sub_1BCAA3C(0LL, v28);
    ServantData = BattleData__getServantData(v45, v44->fields.uniqueId, 0LL);
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(ServantData, v44, v47);
    if ( IsEnableToAttack )
      break;
LABEL_69:
    v35 = v113;
    v36 = v113->fields.__7__wrap2 + 1;
  }
  if ( !ServantData )
    sub_1BCAA3C(IsEnableToAttack, v28);
  v51 = BattleServantData__EnumerateConfirmCommandFunctionSkill(ServantData, v44, 0LL);
  v52 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo, v48);
    v52 = BattleLogicNomal___c_TypeInfo;
  }
  _9__18_0 = (System_Func_object__int__o *)v52->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52, v48);
      v52 = BattleLogicNomal___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v52->static_fields->__9;
    _9__18_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleSkillInfoData__int__TypeInfo, v48, v49, v50);
    System_Func_object__int____ctor(
      _9__18_0,
      v54,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__18_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__18_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
      (int64_t)_9__18_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  v62 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v51,
          (System_Func_TSource__TKey__o *)_9__18_0,
          (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v64 = v62;
  if ( !v62 )
    sub_1BCAA3C(0LL, v63);
  klass = v62->klass;
  v66 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v66;
      p_offset += 4;
      if ( !v66 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1C1C7C0(v62, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v69 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v64,
          *(_QWORD *)(p_method + 8));
  if ( !v113 )
    sub_1BCAA3C(v69, v69);
  v113->fields.__7__wrap3 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v69;
  sub_1BCA784((PartyOrganizationUtility_o *)&v113->fields.__7__wrap3, v69, v70, v71, v72, v73, v74, v75);
  v78 = v113;
  v113->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap3 = v78->fields.__7__wrap3;
    if ( !_7__wrap3 )
      sub_1BCAA3C(v76, v77);
    v100 = _7__wrap3->klass;
    v101 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      v102 = &v100->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_65;
      }
      v103 = (__int64)&v100->vtable[*v102].method;
    }
    else
    {
LABEL_65:
      v103 = sub_1C1C7C0(_7__wrap3, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v103)(
            _7__wrap3,
            *(_QWORD *)(v103 + 8)) & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18____m__Finally1(v113, v104);
      v113->fields.__7__wrap3 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v113->fields.__7__wrap3, 0LL, v105, v106, v107, v108, v109, v110);
      goto LABEL_69;
    }
    v79 = v113->fields.__7__wrap3;
    if ( !v79 )
      sub_1BCAA3C(v113, v104);
    v80 = v79->klass;
    v81 = *(unsigned __int16 *)(&v79->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v79->klass->_2.bitflags2 + 3) )
    {
      v82 = &v80->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v82 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_49;
      }
      v83 = (__int64)&v80->vtable[*v82].method;
    }
    else
    {
LABEL_49:
      v83 = sub_1C1C7C0(
              v113->fields.__7__wrap3,
              System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
              0LL);
    }
    v84 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v83)(
            v79,
            *(_QWORD *)(v83 + 8));
    if ( !_4__this )
      sub_1BCAA3C(v84, v85);
    v86 = (BattleSkillInfoData_o *)v84;
    logicskill = _4__this->fields.logicskill;
    v88 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
    if ( !v86 )
      sub_1BCAA3C(v88, v89);
    if ( !v88 )
      sub_1BCAA3C(0LL, v89);
    if ( !v88->max_length )
      sub_1BCAA44(v88, v89);
    v88->m_Items[1] = v86->fields.svtUniqueId;
    if ( !logicskill )
      sub_1BCAA3C(v88, v89);
    v90 = BattleLogicSkill__taskSkill(logicskill, v86, v88, 0LL, 0, 0, 0, 0, 0, v112);
    v113->fields.__7__wrap4 = v90;
    sub_1BCA784((PartyOrganizationUtility_o *)&v113->fields.__7__wrap4, (int64_t)v90, v91, v92, v93, v94, v95, v96);
    v8 = v113;
    v38 = 0;
    v113->fields.__7__wrap5 = 0;
LABEL_57:
    _7__wrap4 = v8->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1BCAA3C(this, method);
    v98 = _7__wrap4->max_length;
    if ( v38 < (int)v98 )
      break;
    v8->fields.__7__wrap4 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__7__wrap4, 0LL, v2, v3, v4, v5, v6, v7);
    v78 = v113;
  }
  if ( v38 >= v98 )
    sub_1BCAA44(this, method);
  v111 = (int64_t)_7__wrap4->m_Items[v38];
  v8->fields.__2__current = (struct BattleLogicTask_o *)v111;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__2__current, v111, v2, v3, v4, v5, v6, v7);
  result = 1;
  v113->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18E9D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method, v2);
    byte_4B18E9D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_1BCAA2C(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
    return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)v6;
  }
  return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)this;
}


BattleLogicTask_o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__System_Collections_Generic_IEnumerator_BattleLogicTask__get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__System_Collections_IEnumerator_Reset(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__System_Collections_IEnumerator_get_Current(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__System_IDisposable_Dispose(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18____m__Finally1(this, method);
}


void __fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18____m__Finally1(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B18E9C & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B18E9C = 1;
  }
  _7__wrap3 = this->fields.__7__wrap3;
  this->fields.__1__state = -1;
  if ( _7__wrap3 )
  {
    klass = _7__wrap3->klass;
    v6 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C1C7C0(_7__wrap3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))p_method)(
      _7__wrap3,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18E95 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicNomal___c_TypeInfo, v1, v2);
    byte_4B18E95 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicNomal___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicNomal___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleLogicNomal___c___ctor(BattleLogicNomal___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__22_0(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  return targetSvtData;
}


int32_t __fastcall BattleLogicNomal___c___CreateCommandBattle_b__22_2(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__22_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *v6; // x19

  if ( (byte_4B18E96 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x, method);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v4, v5);
    byte_4B18E96 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                      *(_QWORD *)&x,
                                                      method,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v6;
}


bool __fastcall BattleLogicNomal___c___CreateCommandBattle_b__22_9(
        BattleLogicNomal___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0LL);
}


int32_t __fastcall BattleLogicNomal___c___GetConfirmCommandFunctionBuffTask_b__18_0(
        BattleLogicNomal___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__20_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__38_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1BCAA3C(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__16_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(x, 1, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass22_0___ctor(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_CheckInvokeBuff_o *__fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__1(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  BuffList_c *v8; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v11; // x22

  if ( (byte_4B18E97 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_TypeInfo, targetSvtData, method);
    sub_1BCA7E0(&BattleBuffData_CheckInvokeBuff_TypeInfo, v6, v7);
    byte_4B18E97 = 1;
  }
  v8 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, targetSvtData);
    v8 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v8->static_fields->CommandCodeFunctionActs;
  v11 = (BattleBuffData_CheckInvokeBuff_o *)sub_1BCAA2C(
                                              BattleBuffData_CheckInvokeBuff_TypeInfo,
                                              targetSvtData,
                                              method,
                                              v3);
  BattleBuffData_CheckInvokeBuff___ctor(v11, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v11;
}


void __fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass22_0_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v16; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v18; // x8

  v6 = this;
  if ( (byte_4B18E98 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt, buff);
    this = (BattleLogicNomal___c__DisplayClass22_0_o *)sub_1BCA7E0(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7,
                                                         v8);
    byte_4B18E98 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass22_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2F01190 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v16 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1BCAA3C(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v18[4] = (BattleLogicNomal_c *)buff;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)buff, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass22_0_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v16; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v18; // x8

  v6 = this;
  if ( (byte_4B18E99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt, buff);
    this = (BattleLogicNomal___c__DisplayClass22_0_o *)sub_1BCA7E0(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7,
                                                         v8);
    byte_4B18E99 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass22_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2F01190 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v16 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1BCAA3C(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v18[4] = (BattleLogicNomal_c *)buff;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)buff, v9, v10, v11, v12, v13, v14);
  }
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__6(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8
  BattleLogicNomal___c__DisplayClass22_0_o *v4; // x20
  struct BattleActionData_o *actiondata; // x8
  BattleServantData_o *result; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass22_0_o *)this->fields.command) == 0LL)
    || (BattleCommandData__UpdateCritical(
          (BattleCommandData_o *)this,
          v4->fields.actSvtData,
          targetSvtData,
          _4__this->fields.data,
          0LL),
        !targetSvtData)
    || (actiondata = v4->fields.actiondata) == 0LL )
  {
    sub_1BCAA3C(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_4B18E9A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___,
      isOnlyMain,
      isFunctionAll);
    byte_4B18E9A = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass22_0_o *)_4__this->fields.data) == 0LL )
    sub_1BCAA3C(this, *(_QWORD *)&id);
  return BattleData__getServantData((BattleData_o *)this, id, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass33_0___ctor(
        BattleLogicNomal___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass33_0___createEndTurnPlayer_b__0(
        BattleLogicNomal___c__DisplayClass33_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1BCAA3C(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass36_0___ctor(
        BattleLogicNomal___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass36_0___createEndTurnEnemy_b__0(
        BattleLogicNomal___c__DisplayClass36_0_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !npc )
    sub_1BCAA3C(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}


void __fastcall BattleLogicNomal___c__DisplayClass46_0___ctor(
        BattleLogicNomal___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal___c__DisplayClass46_0___shiftServantTaskReaction_b__0(
        BattleLogicNomal___c__DisplayClass46_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueId;
}